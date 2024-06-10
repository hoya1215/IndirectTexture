#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IndirectTextureActions.h"

DECLARE_LOG_CATEGORY_EXTERN(IndirectTexturePluginEditor, All, All);

class FIndirectTexturePluginEditor : public IModuleInterface
{
	public:

	/* Called when the module is loaded */
	virtual void StartupModule() override;

	/* Called when the module is unloaded */
	virtual void ShutdownModule() override;

private:
	TSharedPtr<FIndirectTextureActions> IndirectTextureActions;

};