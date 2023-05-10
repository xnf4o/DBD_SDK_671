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
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher31_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.AnimGraph"));
		
		UAB_Menu_Slasher31_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE"));
		
		UAB_Menu_Slasher31_C_OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE"));
		
		UAB_Menu_Slasher31_C_OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_FF79019945E856B21A4DD7B9040097DE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnInterrupted_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_FF79019945E856B21A4DD7B9040097DE"));
		
		UAB_Menu_Slasher31_C_OnInterrupted_FF79019945E856B21A4DD7B9040097DE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_FF79019945E856B21A4DD7B9040097DE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnBlendOut_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_FF79019945E856B21A4DD7B9040097DE"));
		
		UAB_Menu_Slasher31_C_OnBlendOut_FF79019945E856B21A4DD7B9040097DE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_FF79019945E856B21A4DD7B9040097DE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnCompleted_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_FF79019945E856B21A4DD7B9040097DE"));
		
		UAB_Menu_Slasher31_C_OnCompleted_FF79019945E856B21A4DD7B9040097DE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8"));
		
		UAB_Menu_Slasher31_C_OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8"));
		
		UAB_Menu_Slasher31_C_OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8"));
		
		UAB_Menu_Slasher31_C_OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8"));
		
		UAB_Menu_Slasher31_C_OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8"));
		
		UAB_Menu_Slasher31_C_OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher31_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A"));
		
		UAB_Menu_Slasher31_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintUpdateAnimation"));
		
		UAB_Menu_Slasher31_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustoChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            animationMappingIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnCustoChange(int32_t animationMappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustoChange"));
		
		UAB_Menu_Slasher31_C_OnCustoChange_Params params {};
		params.animationMappingIndex = animationMappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher31_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintInitializeAnimation"));
		
		UAB_Menu_Slasher31_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintLinkedAnimationLayersInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher31_C::BlueprintLinkedAnimationLayersInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintLinkedAnimationLayersInitialized"));
		
		UAB_Menu_Slasher31_C_BlueprintLinkedAnimationLayersInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnMenuAnimationStateChange_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_MenuAnimationState                            State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnMenuAnimationStateChange_Event(Enum_MenuAnimationState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnMenuAnimationStateChange_Event"));
		
		UAB_Menu_Slasher31_C_OnMenuAnimationStateChange_Event_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustomizationAnimationMappingIDChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            animationMappingIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustomizationAnimationMappingIDChanged"));
		
		UAB_Menu_Slasher31_C_OnCustomizationAnimationMappingIDChanged_Params params {};
		params.animationMappingIndex = animationMappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.ExecuteUbergraph_AB_Menu_Slasher31
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher31_C::ExecuteUbergraph_AB_Menu_Slasher31(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Menu_Slasher31.AB_Menu_Slasher31_C.ExecuteUbergraph_AB_Menu_Slasher31"));
		
		UAB_Menu_Slasher31_C_ExecuteUbergraph_AB_Menu_Slasher31_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Menu_Slasher31_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher31_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass AB_Menu_Slasher31.AB_Menu_Slasher31_C"));
		return ptr;
	}

}


