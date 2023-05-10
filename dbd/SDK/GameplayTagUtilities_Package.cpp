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
	 * 		RVA    -> 0x07912C10
	 * 		Name   -> Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        scoreEventID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UDBDGameplayTagUtilities::STATIC_GetScoreModifierName(const class FName& scoreEventID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName"));
		
		UDBDGameplayTagUtilities_GetScoreModifierName_Params params {};
		params.scoreEventID = scoreEventID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07912B70
	 * 		Name   -> Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TagName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDBDGameplayTagUtilities::STATIC_GameplayTagExists(const class FName& TagName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists"));
		
		UDBDGameplayTagUtilities_GameplayTagExists_Params params {};
		params.TagName = TagName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDGameplayTagUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDGameplayTagUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayTagUtilities.DBDGameplayTagUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTagContainerQueryInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagContainerQueryInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayTagUtilities.TagContainerQueryInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07913960
	 * 		Name   -> Function GameplayTagUtilities.GameplayTagContainerComponent.Remove
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                State                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTagContainerComponent::Remove(const struct FGameplayTag& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayTagUtilities.GameplayTagContainerComponent.Remove"));
		
		UGameplayTagContainerComponent_Remove_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07913920
	 * 		Name   -> Function GameplayTagUtilities.GameplayTagContainerComponent.GetTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayTagContainer UGameplayTagContainerComponent::GetTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayTagUtilities.GameplayTagContainerComponent.GetTags"));
		
		UGameplayTagContainerComponent_GetTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07913880
	 * 		Name   -> Function GameplayTagUtilities.GameplayTagContainerComponent.Add
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                State                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTagContainerComponent::Add(const struct FGameplayTag& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function GameplayTagUtilities.GameplayTagContainerComponent.Add"));
		
		UGameplayTagContainerComponent_Add_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTagContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayTagUtilities.GameplayTagContainerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectStateProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectStateProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class GameplayTagUtilities.ObjectStateProvider"));
		return ptr;
	}

}


