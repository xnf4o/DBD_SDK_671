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
	 * 		Name   -> Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_HideTape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K27_C::FX_K27_HideTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_HideTape"));
		
		UBPI_Effect_K27_C_FX_K27_HideTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_ShowTape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K27_C::FX_K27_ShowTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_ShowTape"));
		
		UBPI_Effect_K27_C_FX_K27_ShowTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K27.BPI_Effect_K27_C.FX_FadeCondemnedStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K27_C::FX_FadeCondemnedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K27.BPI_Effect_K27_C.FX_FadeCondemnedStatus"));
		
		UBPI_Effect_K27_C_FX_FadeCondemnedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_SpawnMiniMoriVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K27_C::FX_K27_SpawnMiniMoriVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_SpawnMiniMoriVignette"));
		
		UBPI_Effect_K27_C_FX_K27_SpawnMiniMoriVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Effect_K27_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Effect_K27_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_Effect_K27.BPI_Effect_K27_C"));
		return ptr;
	}

}


