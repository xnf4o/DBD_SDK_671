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
	 * 		Name   -> PredefinedFunction UExperimentalFeaturesManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExperimentalFeaturesManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ExperimentalFeatures.ExperimentalFeaturesManager"));
		return ptr;
	}

}


