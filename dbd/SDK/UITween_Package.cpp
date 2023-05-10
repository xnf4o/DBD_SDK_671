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
	 * 		RVA    -> 0x04012330
	 * 		Name   -> Function UITween.UITween.Create
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     targetWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEasingType                                        Easing                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITween::STATIC_Create(class UWidget* targetWidget, float Duration, float Delay, EEasingType Easing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITween.Create"));
		
		UUITween_Create_Params params {};
		params.targetWidget = targetWidget;
		params.Duration = Duration;
		params.Delay = Delay;
		params.Easing = Easing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040122B0
	 * 		Name   -> Function UITween.UITween.Clear
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     targetWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITween::STATIC_Clear(class UWidget* targetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITween.Clear"));
		
		UUITween_Clear_Params params {};
		params.targetWidget = targetWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUITween.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUITween::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UITween.UITween"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUITweenMaterialScalarProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUITweenMaterialScalarProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UITween.UITweenMaterialScalarProperties"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUITweenMaterialVectorProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUITweenMaterialVectorProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UITween.UITweenMaterialVectorProperties"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040130B0
	 * 		Name   -> Function UITween.UITweenInstance.TweenFloatProperty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::TweenFloatProperty(float startValue, float targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.TweenFloatProperty"));
		
		UUITweenInstance_TweenFloatProperty_Params params {};
		params.startValue = startValue;
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04013010
	 * 		Name   -> Function UITween.UITweenInstance.ToTranslation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::ToTranslation(const struct FVector2D& targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.ToTranslation"));
		
		UUITweenInstance_ToTranslation_Params params {};
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012F70
	 * 		Name   -> Function UITween.UITweenInstance.ToScale
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::ToScale(const struct FVector2D& targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.ToScale"));
		
		UUITweenInstance_ToScale_Params params {};
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012EF0
	 * 		Name   -> Function UITween.UITweenInstance.ToReset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUITweenInstance* UUITweenInstance::ToReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.ToReset"));
		
		UUITweenInstance_ToReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012E50
	 * 		Name   -> Function UITween.UITweenInstance.ToOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::ToOpacity(float targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.ToOpacity"));
		
		UUITweenInstance_ToOpacity_Params params {};
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012D00
	 * 		Name   -> Function UITween.UITweenInstance.ToMaterialVectorParameter
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::ToMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, const struct FLinearColor& targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.ToMaterialVectorParameter"));
		
		UUITweenInstance_ToMaterialVectorParameter_Params params {};
		params.targetMaterialInstance = targetMaterialInstance;
		params.targetParameterName = targetParameterName;
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012BC0
	 * 		Name   -> Function UITween.UITweenInstance.ToMaterialScalarParameter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::ToMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, float targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.ToMaterialScalarParameter"));
		
		UUITweenInstance_ToMaterialScalarParameter_Params params {};
		params.targetMaterialInstance = targetMaterialInstance;
		params.targetParameterName = targetParameterName;
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012B30
	 * 		Name   -> Function UITween.UITweenInstance.ToColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::ToColor(const struct FLinearColor& targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.ToColor"));
		
		UUITweenInstance_ToColor_Params params {};
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012B00
	 * 		Name   -> Function UITween.UITweenInstance.GetTargetWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWidget* UUITweenInstance::GetTargetWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.GetTargetWidget"));
		
		UUITweenInstance_GetTargetWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012AE0
	 * 		Name   -> Function UITween.UITweenInstance.GetProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUITweenInstance::GetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.GetProgress"));
		
		UUITweenInstance_GetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012AA0
	 * 		Name   -> Function UITween.UITweenInstance.GetFloatValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUITweenInstance::GetFloatValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.GetFloatValue"));
		
		UUITweenInstance_GetFloatValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012A80
	 * 		Name   -> Function UITween.UITweenInstance.GetEasing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EEasingType UUITweenInstance::GetEasing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.GetEasing"));
		
		UUITweenInstance_GetEasing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012A60
	 * 		Name   -> Function UITween.UITweenInstance.GetDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUITweenInstance::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.GetDuration"));
		
		UUITweenInstance_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012A40
	 * 		Name   -> Function UITween.UITweenInstance.GetDelay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUITweenInstance::GetDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.GetDelay"));
		
		UUITweenInstance_GetDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012990
	 * 		Name   -> Function UITween.UITweenInstance.FromTranslation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::FromTranslation(const struct FVector2D& startValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.FromTranslation"));
		
		UUITweenInstance_FromTranslation_Params params {};
		params.startValue = startValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040128E0
	 * 		Name   -> Function UITween.UITweenInstance.FromScale
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::FromScale(const struct FVector2D& startValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.FromScale"));
		
		UUITweenInstance_FromScale_Params params {};
		params.startValue = startValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012840
	 * 		Name   -> Function UITween.UITweenInstance.FromOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::FromOpacity(float startValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.FromOpacity"));
		
		UUITweenInstance_FromOpacity_Params params {};
		params.startValue = startValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040126F0
	 * 		Name   -> Function UITween.UITweenInstance.FromMaterialVectorParameter
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::FromMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, const struct FLinearColor& targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.FromMaterialVectorParameter"));
		
		UUITweenInstance_FromMaterialVectorParameter_Params params {};
		params.targetMaterialInstance = targetMaterialInstance;
		params.targetParameterName = targetParameterName;
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040125B0
	 * 		Name   -> Function UITween.UITweenInstance.FromMaterialScalarParameter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    targetMaterialInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        targetParameterName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              targetValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::FromMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const class FName& targetParameterName, float targetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.FromMaterialScalarParameter"));
		
		UUITweenInstance_FromMaterialScalarParameter_Params params {};
		params.targetMaterialInstance = targetMaterialInstance;
		params.targetParameterName = targetParameterName;
		params.targetValue = targetValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012510
	 * 		Name   -> Function UITween.UITweenInstance.FromColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                startValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::FromColor(const struct FLinearColor& startValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.FromColor"));
		
		UUITweenInstance_FromColor_Params params {};
		params.startValue = startValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012480
	 * 		Name   -> Function UITween.UITweenInstance.Easing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEasingType                                        InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUITweenInstance* UUITweenInstance::Easing(EEasingType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.Easing"));
		
		UUITweenInstance_Easing_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04012290
	 * 		Name   -> Function UITween.UITweenInstance.Begin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUITweenInstance::Begin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function UITween.UITweenInstance.Begin"));
		
		UUITweenInstance_Begin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUITweenInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUITweenInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class UITween.UITweenInstance"));
		return ptr;
	}

}


