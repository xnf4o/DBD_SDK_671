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
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher26_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimGraph"));
		
		UAB_Menu_Slasher26_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyEnd_179E1E3C4DD31E5A8CE35F98654474C7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnNotifyEnd_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyEnd_179E1E3C4DD31E5A8CE35F98654474C7"));
		
		UAB_Menu_Slasher26_C_OnNotifyEnd_179E1E3C4DD31E5A8CE35F98654474C7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyBegin_179E1E3C4DD31E5A8CE35F98654474C7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnNotifyBegin_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyBegin_179E1E3C4DD31E5A8CE35F98654474C7"));
		
		UAB_Menu_Slasher26_C_OnNotifyBegin_179E1E3C4DD31E5A8CE35F98654474C7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnInterrupted_179E1E3C4DD31E5A8CE35F98654474C7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnInterrupted_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnInterrupted_179E1E3C4DD31E5A8CE35F98654474C7"));
		
		UAB_Menu_Slasher26_C_OnInterrupted_179E1E3C4DD31E5A8CE35F98654474C7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnBlendOut_179E1E3C4DD31E5A8CE35F98654474C7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnBlendOut_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnBlendOut_179E1E3C4DD31E5A8CE35F98654474C7"));
		
		UAB_Menu_Slasher26_C_OnBlendOut_179E1E3C4DD31E5A8CE35F98654474C7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnCompleted_179E1E3C4DD31E5A8CE35F98654474C7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnCompleted_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnCompleted_179E1E3C4DD31E5A8CE35F98654474C7"));
		
		UAB_Menu_Slasher26_C_OnCompleted_179E1E3C4DD31E5A8CE35F98654474C7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintInitializeAnimation"));
		
		UAB_Menu_Slasher26_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintLinkedAnimationLayersInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::BlueprintLinkedAnimationLayersInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintLinkedAnimationLayersInitialized"));
		
		UAB_Menu_Slasher26_C_BlueprintLinkedAnimationLayersInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnMenuAnimationStateChange_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_MenuAnimationState                            State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnMenuAnimationStateChange_Event(Enum_MenuAnimationState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnMenuAnimationStateChange_Event"));
		
		UAB_Menu_Slasher26_C_OnMenuAnimationStateChange_Event_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.ExecuteUbergraph_AB_Menu_Slasher26
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::ExecuteUbergraph_AB_Menu_Slasher26(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.ExecuteUbergraph_AB_Menu_Slasher26"));
		
		UAB_Menu_Slasher26_C_ExecuteUbergraph_AB_Menu_Slasher26_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Menu_Slasher26_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher26_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass AB_Menu_Slasher26.AB_Menu_Slasher26_C"));
		return ptr;
	}

}


