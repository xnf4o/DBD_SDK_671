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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdChoiceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdChoiceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class PlatformUtilities.CrowdChoiceManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdPlayManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdPlayManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class PlatformUtilities.CrowdPlayManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaShowStreamDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlatformSupportSubsystem::DBD_StadiaShowStreamDebug(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaShowStreamDebug"));
		
		UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaRoleSelectPoll
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UPlatformSupportSubsystem::DBD_StadiaRoleSelectPoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaRoleSelectPoll"));
		
		UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaCharacterSelectPoll
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UPlatformSupportSubsystem::DBD_StadiaCharacterSelectPoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaCharacterSelectPoll"));
		
		UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatformSupportSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformSupportSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class PlatformUtilities.PlatformSupportSubsystem"));
		return ptr;
	}

}


