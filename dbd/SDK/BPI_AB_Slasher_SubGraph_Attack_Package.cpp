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
	 * 		Name   -> Function BPI_AB_Slasher_SubGraph_Attack.BPI_AB_Slasher_SubGraph_Attack_C.SetAttackAnimationFromMainAB
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAset_Slasher_BaseAttack                    AttackAnimset                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBPI_AB_Slasher_SubGraph_Attack_C::SetAttackAnimationFromMainAB(const struct FAset_Slasher_BaseAttack& AttackAnimset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_AB_Slasher_SubGraph_Attack.BPI_AB_Slasher_SubGraph_Attack_C.SetAttackAnimationFromMainAB"));
		
		UBPI_AB_Slasher_SubGraph_Attack_C_SetAttackAnimationFromMainAB_Params params {};
		params.AttackAnimset = AttackAnimset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_AB_Slasher_SubGraph_Attack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_AB_Slasher_SubGraph_Attack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_AB_Slasher_SubGraph_Attack.BPI_AB_Slasher_SubGraph_Attack_C"));
		return ptr;
	}

}


