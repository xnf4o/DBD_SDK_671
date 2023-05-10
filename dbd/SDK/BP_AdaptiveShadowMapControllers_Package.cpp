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
	 * 		Name   -> PredefinedFunction ABP_AdaptiveShadowMapControllers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AdaptiveShadowMapControllers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_AdaptiveShadowMapControllers.BP_AdaptiveShadowMapControllers_C"));
		return ptr;
	}

}


