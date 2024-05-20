// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject5_Cplusplus : ModuleRules
{
	public MyProject5_Cplusplus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	//	PublicDependencyModuleNames.Add("HeadMountedDisplay");
	}
}
