using UnrealBuildTool;
 
public class IndirectTexturePluginEditor : ModuleRules
{
	public IndirectTexturePluginEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine"});

		PrivateDependencyModuleNames.AddRange(
	new string[]
	{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"IndirectTexturePlugin",
				"UnrealEd"
	});


PublicIncludePaths.AddRange(new string[] {"IndirectTexturePluginEditor/Public"});
		PrivateIncludePaths.AddRange(new string[] {"IndirectTexturePluginEditor/Private"});
	}
}