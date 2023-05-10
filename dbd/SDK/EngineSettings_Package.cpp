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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.ConsoleSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05E25C60
	 * 		Name   -> Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSkipFirstPlayer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1"));
		
		UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params params {};
		params.bSkipFirstPlayer = bSkipFirstPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05E25C30
	 * 		Name   -> Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1"));
		
		UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05E25C00
	 * 		Name   -> Function EngineSettings.GameMapsSettings.GetGameMapsSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UGameMapsSettings* UGameMapsSettings::STATIC_GetGameMapsSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function EngineSettings.GameMapsSettings.GetGameMapsSettings"));
		
		UGameMapsSettings_GetGameMapsSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameMapsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameMapsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.GameMapsSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameNetworkManagerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameNetworkManagerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.GameNetworkManagerSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameSessionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameSessionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.GameSessionSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneralEngineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneralEngineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.GeneralEngineSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneralProjectChunkingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneralProjectChunkingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.GeneralProjectChunkingSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneralProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneralProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.GeneralProjectSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class EngineSettings.HudSettings"));
		return ptr;
	}

}


