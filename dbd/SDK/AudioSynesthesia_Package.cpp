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
	 * 		Name   -> PredefinedFunction UAudioSynesthesiaNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.AudioSynesthesiaNRTSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSynesthesiaNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.AudioSynesthesiaNRT"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantQNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.ConstantQNRTSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043A0410
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime"));
		
		UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0439FF00
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime"));
		
		UConstantQNRT_GetChannelConstantQAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantQNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.ConstantQNRT"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.LoudnessNRTSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043A0840
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime"));
		
		ULoudnessNRT_GetNormalizedLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043A0540
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime"));
		
		ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043A0330
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime"));
		
		ULoudnessNRT_GetLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043A0030
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime"));
		
		ULoudnessNRT_GetChannelLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.LoudnessNRT"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnsetNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.OnsetNRTSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043A0660
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes"));
		
		UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params params {};
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043A0150
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes"));
		
		UOnsetNRT_GetChannelOnsetsBetweenTimes_Params params {};
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnsetNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioSynesthesia.OnsetNRT"));
		return ptr;
	}

}


