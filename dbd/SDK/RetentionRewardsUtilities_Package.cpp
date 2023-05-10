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
	 * 		Name   -> PredefinedFunction URetentionRewardsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetentionRewardsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class RetentionRewardsUtilities.RetentionRewardsSubsystem"));
		return ptr;
	}

}


