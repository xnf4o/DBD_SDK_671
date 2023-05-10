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
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.GetIn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher26_C::GetIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.GetIn"));
		
		ABP_Menu_Slasher26_C_GetIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EAudioCustomizationCategory                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      switchState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher26_C::BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature"));
		
		ABP_Menu_Slasher26_C_BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature_Params params {};
		params.Category = Category;
		params.switchState = switchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Slasher26_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.ReceiveBeginPlay"));
		
		ABP_Menu_Slasher26_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.ExecuteUbergraph_BP_Menu_Slasher26
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher26_C::ExecuteUbergraph_BP_Menu_Slasher26(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher26.BP_Menu_Slasher26_C.ExecuteUbergraph_BP_Menu_Slasher26"));
		
		ABP_Menu_Slasher26_C_ExecuteUbergraph_BP_Menu_Slasher26_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Menu_Slasher26_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Slasher26_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_Menu_Slasher26.BP_Menu_Slasher26_C"));
		return ptr;
	}

}


