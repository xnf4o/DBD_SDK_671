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
	 * 		Name   -> PredefinedFunction ASplineAudioEmitterActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineAudioEmitterActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioUtilities.SplineAudioEmitterActor"));
		return ptr;
	}

}


