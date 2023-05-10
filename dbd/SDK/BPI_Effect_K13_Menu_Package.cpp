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
	 * 		Name   -> Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_ModifyFace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SadFaceCurveValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MadFaceCurveValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Effect_K13_Menu_C::K13_FX_ModifyFace(float SadFaceCurveValue, float MadFaceCurveValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_ModifyFace"));
		
		UBPI_Effect_K13_Menu_C_K13_FX_ModifyFace_Params params {};
		params.SadFaceCurveValue = SadFaceCurveValue;
		params.MadFaceCurveValue = MadFaceCurveValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordInvisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K13_Menu_C::K13_FX_MakeSwordInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordInvisible"));
		
		UBPI_Effect_K13_Menu_C_K13_FX_MakeSwordInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K13_Menu_C::K13_FX_MakeSwordVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordVisible"));
		
		UBPI_Effect_K13_Menu_C_K13_FX_MakeSwordVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordDisappear
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K13_Menu_C::K13_FX_MakeSwordDisappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordDisappear"));
		
		UBPI_Effect_K13_Menu_C_K13_FX_MakeSwordDisappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordAppear
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K13_Menu_C::K13_FX_MakeSwordAppear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordAppear"));
		
		UBPI_Effect_K13_Menu_C_K13_FX_MakeSwordAppear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Effect_K13_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Effect_K13_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C"));
		return ptr;
	}

}


