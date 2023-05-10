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
	 * 		Name   -> Function BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C.K24_FX_HideTentacle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K24_Menu_C::K24_FX_HideTentacle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C.K24_FX_HideTentacle"));
		
		UBPI_Effect_K24_Menu_C_K24_FX_HideTentacle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C.K24_FX_ShowTentacle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K24_Menu_C::K24_FX_ShowTentacle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C.K24_FX_ShowTentacle"));
		
		UBPI_Effect_K24_Menu_C_K24_FX_ShowTentacle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Effect_K24_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Effect_K24_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C"));
		return ptr;
	}

}


