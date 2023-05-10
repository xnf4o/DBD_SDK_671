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
	 * 		Name   -> PredefinedFunction UEndGame_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGame_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass EndGame_CameraShake.EndGame_CameraShake_C"));
		return ptr;
	}

}


