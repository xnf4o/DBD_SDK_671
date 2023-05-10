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
	 * 		RVA    -> 0x043B52D0
	 * 		Name   -> Function Lunar2023.Lunar2023EventComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULunar2023EventComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2023.Lunar2023EventComponent.Authority_OnLevelReadyToPlay"));
		
		ULunar2023EventComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULunar2023EventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULunar2023EventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Lunar2023.Lunar2023EventComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2023.PaperLantern.Cosmetic_OnStartedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APaperLantern::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2023.PaperLantern.Cosmetic_OnStartedInteracting"));
		
		APaperLantern_Cosmetic_OnStartedInteracting_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.interactionDuration = interactionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APaperLantern::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCompleted"));
		
		APaperLantern_Cosmetic_OnInteractionCompleted_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APaperLantern::Cosmetic_OnInteractionCancelled(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Lunar2023.PaperLantern.Cosmetic_OnInteractionCancelled"));
		
		APaperLantern_Cosmetic_OnInteractionCancelled_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperLantern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperLantern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Lunar2023.PaperLantern"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperLanternInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperLanternInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Lunar2023.PaperLanternInteraction"));
		return ptr;
	}

}


