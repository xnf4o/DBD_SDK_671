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
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_AB_Slasher_SubGraph_Menu.BPI_AB_Slasher_SubGraph_Menu_C.SetMenuAnimationFromMainAB
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAset_Slasher_Menu                          MenuAnimSet                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_AB_Slasher_SubGraph_Menu_C::SetMenuAnimationFromMainAB(const struct FAset_Slasher_Menu& MenuAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_AB_Slasher_SubGraph_Menu.BPI_AB_Slasher_SubGraph_Menu_C.SetMenuAnimationFromMainAB"));
		
		UBPI_AB_Slasher_SubGraph_Menu_C_SetMenuAnimationFromMainAB_Params params {};
		params.MenuAnimSet = MenuAnimSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_AB_Slasher_SubGraph_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_AB_Slasher_SubGraph_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_AB_Slasher_SubGraph_Menu.BPI_AB_Slasher_SubGraph_Menu_C"));
		return ptr;
	}

}


