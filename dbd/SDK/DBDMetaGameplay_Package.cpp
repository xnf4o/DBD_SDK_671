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
	 * 		RVA    -> 0x04643EB0
	 * 		Name   -> Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ADBDPlayer*                                  chasedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDEmblem_KillerChaser::OnChaseStart(class ADBDPlayer* chasedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart"));
		
		UDBDEmblem_KillerChaser_OnChaseStart_Params params {};
		params.chasedPlayer = chasedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_KillerChaser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_KillerChaser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_KillerChaser"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04644170
	 * 		Name   -> Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDBDEmblem_KillerDevout::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay"));
		
		UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_KillerDevout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_KillerDevout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_KillerDevout"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_KillerGatekeeper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_KillerGatekeeper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_KillerGatekeeper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046444C0
	 * 		Name   -> Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDBDEmblem_KillerMalicious::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay"));
		
		UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_KillerMalicious.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_KillerMalicious::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_KillerMalicious"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_SurvivorBenevolent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_SurvivorBenevolent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_SurvivorBenevolent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04644910
	 * 		Name   -> Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ADBDPlayer*                                  chasedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDEmblem_SurvivorEvader::OnChaseStartEvent(class ADBDPlayer* chasedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent"));
		
		UDBDEmblem_SurvivorEvader_OnChaseStartEvent_Params params {};
		params.chasedPlayer = chasedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_SurvivorEvader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_SurvivorEvader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_SurvivorEvader"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_SurvivorLightbringer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_SurvivorLightbringer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_SurvivorLightbringer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04644CC0
	 * 		Name   -> Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDBDEmblem_SurvivorUnbroken::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted"));
		
		UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_SurvivorUnbroken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_SurvivorUnbroken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_SurvivorUnbroken"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDEmblem_KillerGatekeeperTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDEmblem_KillerGatekeeperTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDMetaGameplay.DBDEmblem_KillerGatekeeperTest"));
		return ptr;
	}

}


