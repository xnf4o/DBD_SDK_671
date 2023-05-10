﻿/**
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
	 * 		RVA    -> 0x036844B0
	 * 		Name   -> Function Hotfix.OnlineHotfixManager.StartHotfixProcess
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UOnlineHotfixManager::StartHotfixProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Hotfix.OnlineHotfixManager.StartHotfixProcess"));
		
		UOnlineHotfixManager_StartHotfixProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineHotfixManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineHotfixManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Hotfix.OnlineHotfixManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Hotfix.UpdateManager"));
		return ptr;
	}

}


