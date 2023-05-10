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
	 * 		Name   -> PredefinedFunction UKillerVaultDuringChaseAchievementBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerVaultDuringChaseAchievementBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass KillerVaultDuringChaseAchievementBP.KillerVaultDuringChaseAchievementBP_C"));
		return ptr;
	}

}


