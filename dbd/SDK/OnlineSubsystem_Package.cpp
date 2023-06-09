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
	 * 		Name   -> PredefinedFunction UNamedInterfaces.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNamedInterfaces::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineSubsystem.NamedInterfaces"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Match                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDidBecomeActive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn"));
		
		UTurnBasedMatchInterface_OnMatchReceivedTurn_Params params {};
		params.Match = Match;
		params.bDidBecomeActive = bDidBecomeActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Match                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurnBasedMatchInterface::OnMatchEnded(const class FString& Match)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded"));
		
		UTurnBasedMatchInterface_OnMatchEnded_Params params {};
		params.Match = Match;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTurnBasedMatchInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTurnBasedMatchInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineSubsystem.TurnBasedMatchInterface"));
		return ptr;
	}

}


