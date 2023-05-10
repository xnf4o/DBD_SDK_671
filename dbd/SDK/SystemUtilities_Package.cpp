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
	 * 		Name   -> PredefinedFunction UDateTimeProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDateTimeProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.DateTimeProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArrayExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArrayExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.ArrayExt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0791ECF0
	 * 		Name   -> Function SystemUtilities.BoolExt.ToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               boolToConvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBoolExt::STATIC_ToString(bool boolToConvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SystemUtilities.BoolExt.ToString"));
		
		UBoolExt_ToString_Params params {};
		params.boolToConvert = boolToConvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoolExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoolExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.BoolExt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeProviderMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeProviderMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.TimeProviderMock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDateTimerUpdater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDateTimerUpdater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.DateTimerUpdater"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.DebugUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameStreamingSubsytem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStreamingSubsytem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.GameStreamingSubsytem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameStreamingGDK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStreamingGDK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.GameStreamingGDK"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameStreamingGeForceNow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStreamingGeForceNow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.GameStreamingGeForceNow"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07920280
	 * 		Name   -> Function SystemUtilities.PlatformUtilities.GetPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UPlatformUtilities::STATIC_GetPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SystemUtilities.PlatformUtilities.GetPlatform"));
		
		UPlatformUtilities_GetPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatformUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SystemUtilities.PlatformUtilities"));
		return ptr;
	}

}


