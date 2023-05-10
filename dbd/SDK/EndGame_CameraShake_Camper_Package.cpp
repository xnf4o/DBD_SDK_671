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
	 * 		Name   -> PredefinedFunction UEndGame_CameraShake_Camper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGame_CameraShake_Camper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass EndGame_CameraShake_Camper.EndGame_CameraShake_Camper_C"));
		return ptr;
	}

}


