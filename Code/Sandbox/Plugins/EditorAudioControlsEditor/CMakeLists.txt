#START-FILE-LIST
# File List auto generated by waf2cmake.py, do not modify manually.

start_sources()
# -- editoraudiocontrolseditor.waf_files --
sources_platform(ALL)
add_sources("EditorAudioControlsEditor_uber_0.cpp"
	SOURCE_GROUP "Root"
		"StdAfx.cpp"
		"StdAfx.h"
	SOURCE_GROUP "Deprecated"
		"AudioControlsLoader.cpp"
		"AudioControlsLoader.h"
	SOURCE_GROUP "Editor"
		"AudioControlsEditorPlugin.cpp"
		"AudioControlsEditorPlugin.h"
		"ImplementationManager.cpp"
		"ImplementationManager.h"
		"MainWindow.cpp"
		"MainWindow.h"
	SOURCE_GROUP "FileImporter"
		"CreateFolderDialog.cpp"
		"CreateFolderDialog.h"
		"FileImporterDialog.cpp"
		"FileImporterDialog.h"
		"FileImporterModel.cpp"
		"FileImporterModel.h"
		"FolderSelectorDialog.cpp"
		"FolderSelectorDialog.h"
		"FolderSelectorFilterModel.cpp"
		"FolderSelectorFilterModel.h"
	SOURCE_GROUP "FileUtils"
		"FileLoader.cpp"
		"FileLoader.h"
		"FileMonitorBase.cpp"
		"FileMonitorBase.h"
		"FileMonitorMiddleware.cpp"
		"FileMonitorMiddleware.h"
		"FileMonitorSystem.cpp"
		"FileMonitorSystem.h"
		"FileWriter.cpp"
		"FileWriter.h"
	SOURCE_GROUP "Assets"
		"Asset.cpp"
		"Asset.h"
		"AssetsManager.cpp"
		"AssetsManager.h"
		"Control.cpp"
		"Control.h"
		"Folder.cpp"
		"Folder.h"
		"Library.cpp"
		"Library.h"
	SOURCE_GROUP "SystemControlsWidget"
		"SystemControlsWidget.cpp"
		"SystemControlsWidget.h"
		"SystemFilterProxyModel.cpp"
		"SystemFilterProxyModel.h"
		"SystemLibraryModel.cpp"
		"SystemLibraryModel.h"
		"SystemSourceModel.cpp"
		"SystemSourceModel.h"
	SOURCE_GROUP "PropertiesWidget"
		"PropertiesWidget.cpp"
		"PropertiesWidget.h"
	SOURCE_GROUP "ConnectionsWidget"
		"ConnectionsWidget.cpp"
		"ConnectionsWidget.h"
		"ConnectionsModel.cpp"
		"ConnectionsModel.h"
	SOURCE_GROUP "MiddlewareDataWidget"
		"MiddlewareDataWidget.cpp"
		"MiddlewareDataWidget.h"
	SOURCE_GROUP "ResourceSelectorDialog"
		"ResourceSelectors.cpp"
		"ResourceSelectorDialog.cpp"
		"ResourceSelectorDialog.h"
		"ResourceFilterProxyModel.cpp"
		"ResourceFilterProxyModel.h"
		"ResourceLibraryModel.cpp"
		"ResourceLibraryModel.h"
		"ResourceSourceModel.cpp"
		"ResourceSourceModel.h"
	SOURCE_GROUP "PreferencesDialog"
		"PreferencesDialog.cpp"
		"PreferencesDialog.h"
	SOURCE_GROUP "Utils"
		"AssetIcons.h"
		"AssetUtils.cpp"
		"AssetUtils.h"
		"NameValidator.cpp"
		"NameValidator.h"
		"ScopeInfo.h"
		"TreeView.cpp"
		"TreeView.h"
)

add_sources("NoUberFile"
	SOURCE_GROUP "Resources"
		"AudioControlsEditorUI.qrc"
)

end_sources()
#END-FILE-LIST

CryEditorPlugin(EditorAudioControlsEditor PCH "StdAfx.cpp" SOLUTION_FOLDER "Sandbox/Plugins/EditorAudioControlsEditor")
target_include_directories( ${THIS_PROJECT} PRIVATE .. common "${CRYENGINE_DIR}/Code/CryEngine/CryAction")

