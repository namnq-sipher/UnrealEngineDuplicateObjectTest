// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DuplicateObjectTestEditorTarget : TargetRules
{
	public DuplicateObjectTestEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		BuildEnvironment = TargetBuildEnvironment.Shared;
		ExtraModuleNames.AddRange( new string[] { "DuplicateObjectTest" } );
	}
}
