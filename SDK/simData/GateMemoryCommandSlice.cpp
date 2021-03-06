/* -*- mode: c++ -*- */
/****************************************************************************
 *****                                                                  *****
 *****                   Classification: UNCLASSIFIED                   *****
 *****                    Classified By:                                *****
 *****                    Declassify On:                                *****
 *****                                                                  *****
 ****************************************************************************
 *
 *
 * Developed by: Naval Research Laboratory, Tactical Electronic Warfare Div.
 *               EW Modeling & Simulation, Code 5773
 *               4555 Overlook Ave.
 *               Washington, D.C. 20375-5339
 *
 * License for source code can be found at:
 * https://github.com/USNavalResearchLaboratory/simdissdk/blob/master/LICENSE.txt
 *
 * The U.S. Government retains all rights to use, duplicate, distribute,
 * disclose, or release this software.
 *
 */
#include <limits>
#include "simData/DataStore.h"
#include "simData/MemoryDataSlice.h"

namespace simData
{

void GateMemoryCommandSlice::update(DataStore *ds, ObjectId id, double time)
{
  clearChanged();
  if (updates_.empty())
  {
    reset_();
    return;
  }

  // process all command updates in one prefs transaction
  DataStore::Transaction t;
  GatePrefs* prefs = ds->mutable_gatePrefs(id, &t);
  if (!prefs)
    return;

  // if requested time is before the beginning
  const GateCommand *first = updates_.front();
  if (time < first->time())
  {
    if (current())
    {
      // we have executed commands, so we need to reset to default
      prefs->mutable_commonprefs()->set_datadraw(false);
      t.complete(&prefs);
    }
    reset_();
    return;
  }

  const GateCommand *lastCommand = current();
  if (!lastCommand || time >= lastCommand->time())
  {
    // Start from the earlier of lastUpdateTime_ or earliestInsert_
    const double startTime = (lastUpdateTime_ < earliestInsert_) ? lastUpdateTime_ : (earliestInsert_-0.0000001);  // Need the minus delta because of upper_bound in advanceTime_

    // time moved forward: execute all commands from startTime to new current time
    hasChanged_ = advance_(startTime, time);
    // apply the current command state at every update; commands override prefs settings
    prefs->MergeFrom(commandPrefsCache_);
    t.complete(&prefs);

    // reset to no inserted commands
    earliestInsert_ = std::numeric_limits<double>::max();
  }
  else
  {
    // time moved backwards: reset and execute all commands from start to new current time
    // reset lastUpdateTime_
    reset_();
    // reset important prefs to default; we will commit these changes regardless of commands
    prefs->mutable_commonprefs()->set_datadraw(false);

    // advance time forward, execute all commands from 0.0 (use -1.0 since we need a time before 0.0) to new current time
    advance_(-1.0, time);
    prefs->MergeFrom(commandPrefsCache_);
    hasChanged_ = true;
    t.complete(&prefs);
  }
}

} // End of namespace simData

