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
	 * 		Name   -> PredefinedFunction URoundRobinTicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoundRobinTicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TickUtilities.RoundRobinTicker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeBudgeter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeBudgeter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TickUtilities.TimeBudgeter"));
		return ptr;
	}

}


