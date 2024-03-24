// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using UnrealBuildTool.Rules;

public class VoxelProject : ModuleRules
{
    public VoxelProject(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ProceduralMeshComponent","DynamicMesh", "GeometryCore", "GeometryFramework" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        CMakeTarget.add(Target, this, "FastNoise", "E:\\GithubRepoes\\FastNoise2", "-DFASTNOISE2_NOISETOOL=OFF", true);

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
