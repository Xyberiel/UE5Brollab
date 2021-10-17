// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5Brollab : ModuleRules
{
	public UE5Brollab(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
