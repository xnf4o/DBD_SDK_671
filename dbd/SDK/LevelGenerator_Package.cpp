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
	 * 		Name   -> Function LevelGenerator.LevelGenerator_C.RemoveMist
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ALevelGenerator_C::RemoveMist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LevelGenerator.LevelGenerator_C.RemoveMist"));
		
		ALevelGenerator_C_RemoveMist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LevelGenerator.LevelGenerator_C.ApplyMist
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelGenerator_C::ApplyMist(float Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LevelGenerator.LevelGenerator_C.ApplyMist"));
		
		ALevelGenerator_C_ApplyMist_Params params {};
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelGenerator_C::ExecuteUbergraph_LevelGenerator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator"));
		
		ALevelGenerator_C_ExecuteUbergraph_LevelGenerator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALevelGenerator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelGenerator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass LevelGenerator.LevelGenerator_C"));
		return ptr;
	}

}


