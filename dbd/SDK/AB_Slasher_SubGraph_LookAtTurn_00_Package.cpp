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
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.AnimGraph"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.IsValidCarry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     animObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::IsValidCarry(class UObject* animObject, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.IsValidCarry"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_IsValidCarry_Params params {};
		params.animObject = animObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_1E0AB618474B57CB4F4B139CD2FF153F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_1E0AB618474B57CB4F4B139CD2FF153F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_1E0AB618474B57CB4F4B139CD2FF153F"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_1E0AB618474B57CB4F4B139CD2FF153F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_D8D9B40B45225383413A8EBDDD151010
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_D8D9B40B45225383413A8EBDDD151010()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_D8D9B40B45225383413A8EBDDD151010"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_D8D9B40B45225383413A8EBDDD151010_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_3FE40A804DF9318CF70B05BA1D9A9CEB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_3FE40A804DF9318CF70B05BA1D9A9CEB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_3FE40A804DF9318CF70B05BA1D9A9CEB"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_3FE40A804DF9318CF70B05BA1D9A9CEB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.AnimNotify_TurnEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::AnimNotify_TurnEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.AnimNotify_TurnEnd"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_AnimNotify_TurnEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_08B24A344AB2AFE94EF76DA71BA99240
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_08B24A344AB2AFE94EF76DA71BA99240()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_08B24A344AB2AFE94EF76DA71BA99240"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_08B24A344AB2AFE94EF76DA71BA99240_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.BlueprintUpdateAnimation"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.BlueprintInitializeAnimation"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.SetLookAtAnimationFromMainAB
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAset_Slasher_LookAT                        LookAtAnimSet                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::SetLookAtAnimationFromMainAB(const struct FAset_Slasher_LookAT& LookAtAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.SetLookAtAnimationFromMainAB"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_SetLookAtAnimationFromMainAB_Params params {};
		params.LookAtAnimSet = LookAtAnimSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Slasher_SubGraph_LookAtTurn_00_C::ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00"));
		
		UAB_Slasher_SubGraph_LookAtTurn_00_C_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_Slasher_SubGraph_LookAtTurn_00_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Slasher_SubGraph_LookAtTurn_00_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C"));
		return ptr;
	}

}


