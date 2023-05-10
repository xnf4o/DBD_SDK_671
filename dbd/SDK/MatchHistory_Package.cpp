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
	 * 		Name   -> PredefinedFunction UMatchHistorySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchHistorySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MatchHistory.MatchHistorySubsystem"));
		return ptr;
	}

}


