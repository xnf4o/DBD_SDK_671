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
	 * 		Name   -> PredefinedFunction UNetEaseAnalyticsUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetEaseAnalyticsUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class NetEaseAnalytics.NetEaseAnalyticsUtil"));
		return ptr;
	}

}


