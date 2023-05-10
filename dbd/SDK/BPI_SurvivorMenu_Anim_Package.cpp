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
	 * 		Name   -> Function BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C.IsPlayingMenuInterrupt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlayingAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SurvivorMenu_Anim_C::IsPlayingMenuInterrupt(bool IsPlayingAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C.IsPlayingMenuInterrupt"));
		
		UBPI_SurvivorMenu_Anim_C_IsPlayingMenuInterrupt_Params params {};
		params.IsPlayingAnimation = IsPlayingAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SurvivorMenu_Anim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SurvivorMenu_Anim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C"));
		return ptr;
	}

}


