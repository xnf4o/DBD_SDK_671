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
	 * 		Name   -> PredefinedFunction UWBP_DailyRitualsContainerWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DailyRitualsContainerWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_DailyRitualsContainerWidget.WBP_DailyRitualsContainerWidget_C"));
		return ptr;
	}

}


