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
	 * 		RVA    -> 0x06CFDED0
	 * 		Name   -> Function AudioMixer.SynthComponent.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USynthComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.Stop"));
		
		USynthComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD900
	 * 		Name   -> Function AudioMixer.SynthComponent.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USynthComponent::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.Start"));
		
		USynthComponent_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD880
	 * 		Name   -> Function AudioMixer.SynthComponent.SetVolumeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.SetVolumeMultiplier"));
		
		USynthComponent_SetVolumeMultiplier_Params params {};
		params.VolumeMultiplier = VolumeMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD3B0
	 * 		Name   -> Function AudioMixer.SynthComponent.SetSubmixSend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundSubmixBase*                            Submix                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SendLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.SetSubmixSend"));
		
		USynthComponent_SetSubmixSend_Params params {};
		params.Submix = Submix;
		params.SendLevel = SendLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFCC50
	 * 		Name   -> Function AudioMixer.SynthComponent.SetOutputToBusOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInOutputToBusOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.SetOutputToBusOnly"));
		
		USynthComponent_SetOutputToBusOnly_Params params {};
		params.bInOutputToBusOnly = bInOutputToBusOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC9C0
	 * 		Name   -> Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InLowPassFilterFrequency                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.SetLowPassFilterFrequency"));
		
		USynthComponent_SetLowPassFilterFrequency_Params params {};
		params.InLowPassFilterFrequency = InLowPassFilterFrequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC930
	 * 		Name   -> Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InLowPassFilterEnabled                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.SetLowPassFilterEnabled"));
		
		USynthComponent_SetLowPassFilterEnabled_Params params {};
		params.InLowPassFilterEnabled = InLowPassFilterEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB2A0
	 * 		Name   -> Function AudioMixer.SynthComponent.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USynthComponent::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SynthComponent.IsPlaying"));
		
		USynthComponent_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.SynthComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.AudioGenerator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFE6C0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMegabytesToFree                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAudioMixerBlueprintLibrary::STATIC_TrimAudioCache(float InMegabytesToFree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache"));
		
		UAudioMixerBlueprintLibrary_TrimAudioCache_Params params {};
		params.InMegabytesToFree = InMegabytesToFree;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFE190
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAudioRecordingExportType                          ExportType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToRecord                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundWave*                                  ExistingSoundWaveToOverwrite                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundWave* UAudioMixerBlueprintLibrary::STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput"));
		
		UAudioMixerBlueprintLibrary_StopRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ExportType = ExportType;
		params.Name = Name;
		params.Path = Path;
		params.SubmixToRecord = SubmixToRecord;
		params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFDFB0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioBus*                                   AudioBus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus"));
		
		UAudioMixerBlueprintLibrary_StopAudioBus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AudioBus = AudioBus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFDEF0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToStopAnalyzing                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput"));
		
		UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFDDC0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ExpectedDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToRecord                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput"));
		
		UAudioMixerBlueprintLibrary_StartRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ExpectedDuration = ExpectedDuration;
		params.SubmixToRecord = SubmixToRecord;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFDB40
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioBus*                                   AudioBus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus"));
		
		UAudioMixerBlueprintLibrary_StartAudioBus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AudioBus = AudioBus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD920
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTSize                                           FFTSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTPeakInterpolationMethod                        InterpolationMethod                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTWindowType                                     WindowType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HopSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAudioSpectrumType                                 SpectrumType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput"));
		
		UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToAnalyze = SubmixToAnalyze;
		params.FFTSize = FFTSize;
		params.InterpolationMethod = InterpolationMethod;
		params.WindowType = WindowType;
		params.HopSize = HopSize;
		params.SpectrumType = SpectrumType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD220
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USoundEffectSubmixPreset*>            SubmixEffectPresetChain                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTimeSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride"));
		
		UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixEffectPresetChain = SubmixEffectPresetChain;
		params.FadeTimeSec = FadeTimeSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC750
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            entryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBypassed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t entryIndex, bool bBypassed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry"));
		
		UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.entryIndex = entryIndex;
		params.bBypassed = bBypassed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC400
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToPause                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput"));
		
		UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToPause = SubmixToPause;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBF10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                InSoundSubmix                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubmixChainIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect"));
		
		UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InSoundSubmix = InSoundSubmix;
		params.SubmixChainIndex = SubmixChainIndex;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBF10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                InSoundSubmix                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubmixChainIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix"));
		
		UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InSoundSubmix = InSoundSubmix;
		params.SubmixChainIndex = SubmixChainIndex;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBE10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubmixChainIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex"));
		
		UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixChainIndex = SubmixChainIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBD10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset"));
		
		UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBE10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubmixChainIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex"));
		
		UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixChainIndex = SubmixChainIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBD10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect"));
		
		UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBC10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            entryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t entryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain"));
		
		UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.entryIndex = entryIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBB50
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect"));
		
		UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFBA70
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundWave*                                  SoundWave                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnLoadCompletion                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const class FScriptDelegate& OnLoadCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback"));
		
		UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params params {};
		params.SoundWave = SoundWave;
		params.OnLoadCompletion = OnLoadCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB9F0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundCue*                                   SoundCue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback"));
		
		UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params params {};
		params.SoundCue = SoundCue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB930
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToPause                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput"));
		
		UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToPause = SubmixToPause;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB6B0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EAudioSpectrumBandPresetType                       InBandPresetType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InNumBands                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InAttackTimeMsec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InReleaseTimeMsec                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::STATIC_MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings"));
		
		UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params params {};
		params.InBandPresetType = InBandPresetType;
		params.InNumBands = InNumBands;
		params.InAttackTimeMsec = InAttackTimeMsec;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB4C0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            InNumSemitones                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMusicalNoteName                                   InStartingMusicalNote                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InStartingOctave                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InAttackTimeMsec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InReleaseTimeMsec                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::STATIC_MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings"));
		
		UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params params {};
		params.InNumSemitones = InNumSemitones;
		params.InStartingMusicalNote = InStartingMusicalNote;
		params.InStartingOctave = InStartingOctave;
		params.InAttackTimeMsec = InAttackTimeMsec;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB2D0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            InNumBands                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMinimumFrequency                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMaximumFrequency                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InAttackTimeMsec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InReleaseTimeMsec                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::STATIC_MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings"));
		
		UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params params {};
		params.InNumBands = InNumBands;
		params.InMinimumFrequency = InMinimumFrequency;
		params.InMaximumFrequency = InMaximumFrequency;
		params.InAttackTimeMsec = InAttackTimeMsec;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB040
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioBus*                                   AudioBus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAudioMixerBlueprintLibrary::STATIC_IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive"));
		
		UAudioMixerBlueprintLibrary_IsAudioBusActive_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AudioBus = AudioBus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFAAF0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Frequencies                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Phases                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies"));
		
		UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Frequencies = Frequencies;
		params.SubmixToAnalyze = SubmixToAnalyze;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Phases != nullptr)
			*Phases = params.Phases;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFAA20
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioMixerBlueprintLibrary::STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain"));
		
		UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA7F0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Frequencies                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Magnitudes                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies"));
		
		UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Frequencies = Frequencies;
		params.SubmixToAnalyze = SubmixToAnalyze;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Magnitudes != nullptr)
			*Magnitudes = params.Magnitudes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9920
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects"));
		
		UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9810
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTimeSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride"));
		
		UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.FadeTimeSec = FadeTimeSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9790
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects"));
		
		UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9690
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioMixerBlueprintLibrary::STATIC_AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect"));
		
		UAudioMixerBlueprintLibrary_AddSubmixEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9580
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSourceEffectChainEntry                     Entry                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain"));
		
		UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF94C0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect"));
		
		UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioMixerBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioMixerBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.AudioMixerBlueprintLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFE830
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQuartzCommandQuantization                         InQuantizationBoundary                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision"));
		
		UQuartzClockHandle_UnsubscribeFromTimeDivision_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InQuantizationBoundary = InQuantizationBoundary;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFE750
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions"));
		
		UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFE510
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQuartzCommandQuantization                         InQuantizationBoundary                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQuantizationEvent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const class FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent"));
		
		UQuartzClockHandle_SubscribeToQuantizationEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InQuantizationBoundary = InQuantizationBoundary;
		params.OnQuantizationEvent = OnQuantizationEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFE3C0
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQuantizationEvent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const class FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents"));
		
		UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OnQuantizationEvent = OnQuantizationEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFE070
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.StopClock
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CancelPendingEvents                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.StopClock"));
		
		UQuartzClockHandle_StopClock_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CancelPendingEvents = CancelPendingEvents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFDC00
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.StartOtherClock
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OtherClockName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 InQuantizationBoundary                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InDelegate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::StartOtherClock(class UObject* WorldContextObject, const class FName& OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const class FScriptDelegate& InDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.StartOtherClock"));
		
		UQuartzClockHandle_StartOtherClock_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OtherClockName = OtherClockName;
		params.InQuantizationBoundary = InQuantizationBoundary;
		params.InDelegate = InDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC320
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.StartClock
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.StartClock"));
		
		UQuartzClockHandle_StartClock_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD680
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TicksPerSecond                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.SetTicksPerSecond"));
		
		UQuartzClockHandle_SetTicksPerSecond_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.TicksPerSecond = TicksPerSecond;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD480
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThirtySecondsNotesPerMinute                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute"));
		
		UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFCCE0
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SecondsPerTick                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.SetSecondsPerTick"));
		
		UQuartzClockHandle_SetSecondsPerTick_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.SecondsPerTick = SecondsPerTick;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFCA50
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MillisecondsPerTick                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick"));
		
		UQuartzClockHandle_SetMillisecondsPerTick_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.MillisecondsPerTick = MillisecondsPerTick;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC550
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BeatsPerMinute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute"));
		
		UQuartzClockHandle_SetBeatsPerMinute_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.BeatsPerMinute = BeatsPerMinute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC320
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.ResumeClock
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.ResumeClock"));
		
		UQuartzClockHandle_ResumeClock_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC170
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 InQuantizationBoundary                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InDelegate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::ResetTransportQuantized(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const class FScriptDelegate& InDelegate, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.ResetTransportQuantized"));
		
		UQuartzClockHandle_ResetTransportQuantized_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InQuantizationBoundary = InQuantizationBoundary;
		params.InDelegate = InDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC070
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.ResetTransport
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InDelegate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::ResetTransport(class UObject* WorldContextObject, const class FScriptDelegate& InDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.ResetTransport"));
		
		UQuartzClockHandle_ResetTransport_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InDelegate = InDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB850
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.PauseClock
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          ClockHandle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.PauseClock"));
		
		UQuartzClockHandle_PauseClock_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHandle != nullptr)
			*ClockHandle = params.ClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB110
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.IsClockRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuartzClockHandle::IsClockRunning(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.IsClockRunning"));
		
		UQuartzClockHandle_IsClockRunning_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFAFA0
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetTicksPerSecond(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetTicksPerSecond"));
		
		UQuartzClockHandle_GetTicksPerSecond_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFAF00
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetThirtySecondNotesPerMinute(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute"));
		
		UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFAE60
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetSecondsPerTick(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetSecondsPerTick"));
		
		UQuartzClockHandle_GetSecondsPerTick_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA980
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetMillisecondsPerTick(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick"));
		
		UQuartzClockHandle_GetMillisecondsPerTick_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA510
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetEstimatedRunTime(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime"));
		
		UQuartzClockHandle_GetEstimatedRunTime_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA150
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQuartzCommandQuantization                         QuantizationType                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, EQuartzCommandQuantization QuantizationType, float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds"));
		
		UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QuantizationType = QuantizationType;
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA0B0
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp"));
		
		UQuartzClockHandle_GetCurrentTimestamp_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9F20
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetBeatsPerMinute(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute"));
		
		UQuartzClockHandle_GetBeatsPerMinute_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuartzClockHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuartzClockHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.QuartzClockHandle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFCEE0
	 * 		Name   -> Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectDynamicsProcessorSettings      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings"));
		
		USubmixEffectDynamicsProcessorPreset_SetSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC8A0
	 * 		Name   -> Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundSubmix*                                Submix                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix"));
		
		USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params params {};
		params.Submix = Submix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC4C0
	 * 		Name   -> Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAudioBus*                                   AudioBus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDynamicsProcessorPreset::SetAudioBus(class UAudioBus* AudioBus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus"));
		
		USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params params {};
		params.AudioBus = AudioBus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFC050
	 * 		Name   -> Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USubmixEffectDynamicsProcessorPreset::ResetKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey"));
		
		USubmixEffectDynamicsProcessorPreset_ResetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectDynamicsProcessorPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectDynamicsProcessorPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.SubmixEffectDynamicsProcessorPreset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04388AE0
	 * 		Name   -> Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectSubmixEQSettings               InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings"));
		
		USubmixEffectSubmixEQPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectSubmixEQPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectSubmixEQPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.SubmixEffectSubmixEQPreset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD110
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UReverbEffect*                               InReverbEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DryLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect"));
		
		USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params {};
		params.InReverbEffect = InReverbEffect;
		params.WetLevel = WetLevel;
		params.DryLevel = DryLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFD000
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectReverbSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.SubmixEffectReverbPreset.SetSettings"));
		
		USubmixEffectReverbPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectReverbPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectReverbPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.SubmixEffectReverbPreset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE30E0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UQuartzSubsystem::IsQuartzEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.IsQuartzEnabled"));
		
		UQuartzSubsystem_IsQuartzEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFB1B0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.IsClockRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuartzSubsystem::IsClockRunning(class UObject* WorldContextObject, const class FName& ClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.IsClockRunning"));
		
		UQuartzSubsystem_IsClockRunning_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFADC0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetRoundTripMinLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency"));
		
		UQuartzSubsystem_GetRoundTripMinLatency_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFAD20
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetRoundTripMaxLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency"));
		
		UQuartzSubsystem_GetRoundTripMaxLatency_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFAC80
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetRoundTripAverageLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency"));
		
		UQuartzSubsystem_GetRoundTripAverageLatency_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA6F0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetHandleForClock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(class UObject* WorldContextObject, const class FName& ClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetHandleForClock"));
		
		UQuartzSubsystem_GetHandleForClock_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA650
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency"));
		
		UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA650
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency"));
		
		UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA5B0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency"));
		
		UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA420
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InClockName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetEstimatedClockRunTime(class UObject* WorldContextObject, const class FName& InClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime"));
		
		UQuartzSubsystem_GetEstimatedClockRunTime_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InClockName = InClockName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CFA270
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQuartzCommandQuantization                         QuantizationType                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, const class FName& ClockName, EQuartzCommandQuantization QuantizationType, float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds"));
		
		UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		params.QuantizationType = QuantizationType;
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9FC0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InClockName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(class UObject* WorldContextObject, const class FName& InClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp"));
		
		UQuartzSubsystem_GetCurrentClockTimestamp_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InClockName = InClockName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9EF0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency"));
		
		UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9EC0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency"));
		
		UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9E90
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency"));
		
		UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9DA0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.DoesClockExist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuartzSubsystem::DoesClockExist(class UObject* WorldContextObject, const class FName& ClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.DoesClockExist"));
		
		UQuartzSubsystem_DoesClockExist_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9CB0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.DeleteClockByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzSubsystem::DeleteClockByName(class UObject* WorldContextObject, const class FName& ClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.DeleteClockByName"));
		
		UQuartzSubsystem_DeleteClockByName_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF9BD0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuartzClockHandle*                          InClockHandle                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzSubsystem::DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle** InClockHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.DeleteClockByHandle"));
		
		UQuartzSubsystem_DeleteClockByHandle_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InClockHandle != nullptr)
			*InClockHandle = params.InClockHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06CF99E0
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.CreateNewClock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzClockSettings                        InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideSettingsIfClockExists                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseAudioEngineClockManager                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(class UObject* WorldContextObject, const class FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AudioMixer.QuartzSubsystem.CreateNewClock"));
		
		UQuartzSubsystem_CreateNewClock_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		params.InSettings = InSettings;
		params.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
		params.bUseAudioEngineClockManager = bUseAudioEngineClockManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuartzSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuartzSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.QuartzSubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynthSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AudioMixer.SynthSound"));
		return ptr;
	}

}


