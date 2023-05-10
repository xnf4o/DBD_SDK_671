/**
 * Name: dbd
 * Version: 6711
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialShaderQualitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialShaderQualitySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShaderPlatformQualitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShaderPlatformQualitySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings"));
		return ptr;
	}

}


