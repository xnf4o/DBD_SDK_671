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
	 * 		RVA    -> 0x07A08D30
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.WrapTextWithStyleTag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Style                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UCoreCommonUIUtils::STATIC_WrapTextWithStyleTag(const class FText& Text, const class FText& Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.WrapTextWithStyleTag"));
		
		UCoreCommonUIUtils_WrapTextWithStyleTag_Params params {};
		params.Text = Text;
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A08C60
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.HasOuter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Root                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoreCommonUIUtils::STATIC_HasOuter(class UObject* Object, class UObject* Root)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.HasOuter"));
		
		UCoreCommonUIUtils_HasOuter_Params params {};
		params.Object = Object;
		params.Root = Root;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A08B80
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.GetTextBasedOnRarity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EItemRarity                                        Rarity                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UCoreCommonUIUtils::STATIC_GetTextBasedOnRarity(EItemRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.GetTextBasedOnRarity"));
		
		UCoreCommonUIUtils_GetTextBasedOnRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A08B50
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.GetDPIScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UCoreCommonUIUtils::STATIC_GetDPIScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.GetDPIScale"));
		
		UCoreCommonUIUtils_GetDPIScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A08A70
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UCoreCommonUIUtils::STATIC_GetBeautifiedNumericText(int32_t value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericText"));
		
		UCoreCommonUIUtils_GetBeautifiedNumericText_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A089A0
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCoreCommonUIUtils::STATIC_GetBeautifiedNumericString(int32_t value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.GetBeautifiedNumericString"));
		
		UCoreCommonUIUtils_GetBeautifiedNumericString_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A08880
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.BeautifyNarrativeText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            charLimit                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCoreCommonUIUtils::STATIC_BeautifyNarrativeText(const class FString& str, int32_t charLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.BeautifyNarrativeText"));
		
		UCoreCommonUIUtils_BeautifyNarrativeText_Params params {};
		params.str = str;
		params.charLimit = charLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A08760
	 * 		Name   -> Function CoreCommonUIUtils.CoreCommonUIUtils.BeautifyName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxCharacters                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCoreCommonUIUtils::STATIC_BeautifyName(const class FString& Name, int32_t maxCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreCommonUIUtils.CoreCommonUIUtils.BeautifyName"));
		
		UCoreCommonUIUtils_BeautifyName_Params params {};
		params.Name = Name;
		params.maxCharacters = maxCharacters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCommonUIUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCommonUIUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreCommonUIUtils.CoreCommonUIUtils"));
		return ptr;
	}

}


