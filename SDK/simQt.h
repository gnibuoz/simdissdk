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
#ifndef SIMDISSDK_SIMQT_H
#define SIMDISSDK_SIMQT_H

#ifdef _MSC_VER
#pragma message( __FILE__ ": warning <DEPR>: File is deprecated and will be removed in a future release." )
#else
#warning File is deprecated and will be removed in a future release.
#endif

#include "simQt/AbstractEntityTreeModel.h"
#include "simQt/ActionItemModel.h"
#include "simQt/ActionRegistry.h"
#include "simQt/BoundSettings.h"
#include "simQt/CategoryDataBreadcrumbs.h"
#include "simQt/CategoryFilterCounter.h"
#include "simQt/CategoryTreeModel.h"
#include "simQt/CenterEntity.h"
#include "simQt/ColorButton.h"
#include "simQt/ColorGradient.h"
#include "simQt/ColorGradientWidget.h"
#include "simQt/ColorWidget.h"
#include "simQt/ColorWidgetDelegate.h"
#include "simQt/ConsoleChannel.h"
#include "simQt/ConsoleDataModel.h"
#include "simQt/ConsoleLogger.h"
#include "simQt/DataTableComboBox.h"
#include "simQt/DataTableModel.h"
#include "simQt/DirectorySelectorWidget.h"
#include "simQt/DndTreeView.h"
#include "simQt/DockWidget.h"
#include "simQt/EntityCategoryFilter.h"
#include "simQt/EntityFilter.h"
#include "simQt/EntityFilterLineEdit.h"
#include "simQt/EntityLineEdit.h"
#include "simQt/EntityNameFilter.h"
#include "simQt/EntityProxyModel.h"
#include "simQt/EntityStateFilter.h"
#include "simQt/EntityTreeComposite.h"
#include "simQt/EntityTreeModel.h"
#include "simQt/EntityTreeWidget.h"
#include "simQt/EntityTypeFilter.h"
#include "simQt/EntityTypeFilterWidget.h"
#include "simQt/FileDescriptorReplacement.h"
#include "simQt/FileDialog.h"
#include "simQt/FileSelectorWidget.h"
#include "simQt/FileUtilities.h"
#include "simQt/FillItemModelWithNodeVisitor.h"
#include "simQt/FontWidget.h"
#include "simQt/GanttChartView.h"
#include "simQt/Gl3FormatGuesser.h"
#include "simQt/IncrementalCompileSettings.h"
#include "simQt/MapDataModel.h"
#include "simQt/MonospaceItemDelegate.h"
#include "simQt/MruList.h"
#include "simQt/PersistentFileLogger.h"
#include "simQt/QtConversion.h"
#include "simQt/QtFormatting.h"
#include "simQt/RegExpImpl.h"
#include "simQt/ResourceInitializer.h"
#include "simQt/ScopedSignalBlocker.h"
#include "simQt/SearchLineEdit.h"
#include "simQt/SegmentedSpinBox.h"
#include "simQt/SegmentedTexts.h"
#include "simQt/Settings.h"
#include "simQt/SettingsGroup.h"
#include "simQt/SettingsItemDelegate.h"
#include "simQt/SettingsModel.h"
#include "simQt/SettingsProxyModel.h"
#include "simQt/SliderTimeWidgetBinding.h"
#include "simQt/SortFilterProxyModel.h"
#include "simQt/SplashScreen.h"
#include "simQt/StartupLayoutManager.h"
#include "simQt/StartupLayoutTask.h"
#include "simQt/StdStreamConsoleChannel.h"
#include "simQt/TimeButtons.h"
#include "simQt/TimeFormatContainer.h"
#include "simQt/TimeSliderClockBinding.h"
#include "simQt/TimestampedLayerManager.h"
#include "simQt/TimeWidget.h"
#include "simQt/TimeWidgetClockBinding.h"
#include "simQt/Toast.h"
#include "simQt/UnitContext.h"
#include "simQt/UnitsComboBox.h"
#include "simQt/ViewManagerDataModel.h"
#include "simQt/ViewWidget.h"
#include "simQt/WeightedMenuManager.h"
#include "simQt/WidgetSettings.h"

#endif /* SIMDISSDK_SIMQT_H */
