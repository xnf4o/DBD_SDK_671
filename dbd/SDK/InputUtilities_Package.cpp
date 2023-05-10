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
	 * 		Name   -> PredefinedFunction UAxisFlick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisFlick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class InputUtilities.AxisFlick"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC0E20
	 * 		Name   -> Function InputUtilities.AxisFlickMasher.OnAxisFlicked2
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAxisFlickMasher::OnAxisFlicked2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function InputUtilities.AxisFlickMasher.OnAxisFlicked2"));
		
		UAxisFlickMasher_OnAxisFlicked2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EC0E00
	 * 		Name   -> Function InputUtilities.AxisFlickMasher.OnAxisFlicked1
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAxisFlickMasher::OnAxisFlicked1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function InputUtilities.AxisFlickMasher.OnAxisFlicked1"));
		
		UAxisFlickMasher_OnAxisFlicked1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisFlickMasher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisFlickMasher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class InputUtilities.AxisFlickMasher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UButtonPressTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonPressTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class InputUtilities.ButtonPressTracker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMasher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMasher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class InputUtilities.InputMasher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVirtualKeyboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVirtualKeyboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class InputUtilities.VirtualKeyboard"));
		return ptr;
	}

}


