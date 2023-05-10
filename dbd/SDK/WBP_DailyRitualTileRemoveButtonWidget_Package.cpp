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
	 * 		Name   -> PredefinedFunction UWBP_DailyRitualTileRemoveButtonWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DailyRitualTileRemoveButtonWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_DailyRitualTileRemoveButtonWidget.WBP_DailyRitualTileRemoveButtonWidget_C"));
		return ptr;
	}

}


