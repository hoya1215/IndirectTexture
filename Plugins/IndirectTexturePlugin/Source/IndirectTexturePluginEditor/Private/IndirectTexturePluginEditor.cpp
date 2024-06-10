#include "IndirectTexturePluginEditor.h"

DEFINE_LOG_CATEGORY(IndirectTexturePluginEditor);

#define LOCTEXT_NAMESPACE "FIndirectTexturePluginEditor"

void FIndirectTexturePluginEditor::StartupModule()
{
	IndirectTextureActions = MakeShared<FIndirectTextureActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(IndirectTextureActions.ToSharedRef());
	UE_LOG(IndirectTexturePluginEditor, Warning, TEXT("IndirectTexturePluginEditor module has been loaded"));
}

void FIndirectTexturePluginEditor::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(IndirectTextureActions.ToSharedRef());
	UE_LOG(IndirectTexturePluginEditor, Warning, TEXT("IndirectTexturePluginEditor module has been unloaded"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FIndirectTexturePluginEditor, IndirectTexturePluginEditor)