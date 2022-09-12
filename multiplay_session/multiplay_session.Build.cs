// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class multiplay_session : ModuleRules
{
	public multiplay_session(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

		PrivateDependencyModuleNames.AddRange(new string[] { "OnlineSubsystem", "OnlineSubsystemNull", "OnlineSubsystemSteam" });
	}
}
