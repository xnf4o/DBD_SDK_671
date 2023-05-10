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
	 * 		Name   -> Function BPI_AB_Slasher_SubGraph_LookAt.BPI_AB_Slasher_SubGraph_LookAt_C.SetLookAtAnimationFromMainAB
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAset_Slasher_LookAT                        LookAtAnimSet                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_AB_Slasher_SubGraph_LookAt_C::SetLookAtAnimationFromMainAB(const struct FAset_Slasher_LookAT& LookAtAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_AB_Slasher_SubGraph_LookAt.BPI_AB_Slasher_SubGraph_LookAt_C.SetLookAtAnimationFromMainAB"));
		
		UBPI_AB_Slasher_SubGraph_LookAt_C_SetLookAtAnimationFromMainAB_Params params {};
		params.LookAtAnimSet = LookAtAnimSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_AB_Slasher_SubGraph_LookAt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_AB_Slasher_SubGraph_LookAt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_AB_Slasher_SubGraph_LookAt.BPI_AB_Slasher_SubGraph_LookAt_C"));
		return ptr;
	}

}


