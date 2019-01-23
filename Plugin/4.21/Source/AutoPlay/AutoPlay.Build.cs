// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using System.IO;

using UnrealBuildTool;

public class AutoPlay : ModuleRules
{
	public AutoPlay(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		//PrivatePCHHeaderFile = "Public/AutoPlay.h";
		//bUsePrecompiled = true;
        	PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        	PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "ShaderCore",
                "RenderCore",
                "RHI",
                "Engine",
                "Sockets",
                "Networking",
                "UMG",
                "Slate",
                "Renderer",
                "Json",
		"CoreUObject",
		"Projects",
                "JsonUtilities"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
            
            if(Target.Platform == UnrealTargetPlatform.IOS)
            {
                PublicAdditionalFrameworks.Add(
                    new UEBuildFramework(
                            "AutoPlayIOS",
                            "../../ThirdParty/AutoPlayIOS.embeddedframework.zip"
                    )
                );

				PublicFrameworks.AddRange(new string[] {"IOKit"});
            }
	}
}
