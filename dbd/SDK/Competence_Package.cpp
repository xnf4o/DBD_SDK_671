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
	 * 		RVA    -> 0x079F2F70
	 * 		Name   -> Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FModifierReplicatedEventConditionData       oldReplicatedCondition                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBaseModifierContainer::OnRep_EventDrivenConditionData_Internal(const struct FModifierReplicatedEventConditionData& oldReplicatedCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal"));
		
		UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Params params {};
		params.oldReplicatedCondition = oldReplicatedCondition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051CC0C0
	 * 		Name   -> Function Competence.BaseModifierContainer.IsApplicable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseModifierContainer::IsApplicable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierContainer.IsApplicable"));
		
		UBaseModifierContainer_IsApplicable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F2ED0
	 * 		Name   -> Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEventDrivenModifierCondition* UBaseModifierContainer::CreateAndSetEventDrivenCondition(class UClass* conditionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition"));
		
		UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params params {};
		params.conditionType = conditionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
	 */
	void UBaseModifierContainer::Authority_OnInstantiateModifierConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions"));
		
		UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseModifierContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseModifierContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.BaseModifierContainer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F2A50
	 * 		Name   -> Function Competence.BaseModifierCondition.SetSubjectProviderClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseModifierCondition::SetSubjectProviderClass(class UClass* subjectProviderClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));
		
		UBaseModifierCondition_SetSubjectProviderClass_Params params {};
		params.subjectProviderClass = subjectProviderClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F2A30
	 * 		Name   -> Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBaseModifierCondition::OnRep_SubjectProviderClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));
		
		UBaseModifierCondition_OnRep_SubjectProviderClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F2A10
	 * 		Name   -> Function Competence.BaseModifierCondition.OnRep_OwningModifier
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBaseModifierCondition::OnRep_OwningModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));
		
		UBaseModifierCondition_OnRep_OwningModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UBaseModifierCondition::InitializeSubjectProviderClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));
		
		UBaseModifierCondition_InitializeSubjectProviderClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F29E0
	 * 		Name   -> Function Competence.BaseModifierCondition.GetOwningActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UBaseModifierCondition::GetOwningActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.BaseModifierCondition.GetOwningActor"));
		
		UBaseModifierCondition_GetOwningActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.BaseModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventDrivenModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventDrivenModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.EventDrivenModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F6100
	 * 		Name   -> Function Competence.RangeBasedCondition.SetRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URangeBasedCondition::SetRange(float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.RangeBasedCondition.SetRange"));
		
		URangeBasedCondition_SetRange_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F60E0
	 * 		Name   -> Function Competence.RangeBasedCondition.OnRep_Range
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URangeBasedCondition::OnRep_Range()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.RangeBasedCondition.OnRep_Range"));
		
		URangeBasedCondition_OnRep_Range_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeBasedCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeBasedCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.RangeBasedCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifierSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifierSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.ModifierSubjectProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F33C0
	 * 		Name   -> Function Competence.CompositeModifierCondition.OnRep_Conditions
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCompositeModifierCondition::OnRep_Conditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.CompositeModifierCondition.OnRep_Conditions"));
		
		UCompositeModifierCondition_OnRep_Conditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositeModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositeModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.CompositeModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAndModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.AndModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompetenceDebugger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompetenceDebugger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.CompetenceDebugger"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3EB0
	 * 		Name   -> Function Competence.ConditionFactory.Or
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UOrModifierCondition* UConditionFactory::STATIC_Or()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.Or"));
		
		UConditionFactory_Or_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3E10
	 * 		Name   -> Function Competence.ConditionFactory.Not
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UNotModifierCondition* UConditionFactory::STATIC_Not()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.Not"));
		
		UConditionFactory_Not_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3D20
	 * 		Name   -> Function Competence.ConditionFactory.Lingering
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              timeToTrack                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULingeringModifierCondition* UConditionFactory::STATIC_Lingering(float timeToTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.Lingering"));
		
		UConditionFactory_Lingering_Params params {};
		params.timeToTrack = timeToTrack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3C30
	 * 		Name   -> Function Competence.ConditionFactory.IsTimerDone
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTimerObject*                                Timer                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UIsTimerDoneCondition* UConditionFactory::STATIC_IsTimerDone(class UTimerObject* Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.IsTimerDone"));
		
		UConditionFactory_IsTimerDone_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3AC0
	 * 		Name   -> Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedConditionWithSubject(class UClass* conditionType, float Range, class UClass* subjectProviderClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject"));
		
		UConditionFactory_CreateRangeBasedConditionWithSubject_Params params {};
		params.conditionType = conditionType;
		params.Range = Range;
		params.subjectProviderClass = subjectProviderClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3980
	 * 		Name   -> Function Competence.ConditionFactory.CreateRangeBasedCondition
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedCondition(class UClass* conditionType, float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.CreateRangeBasedCondition"));
		
		UConditionFactory_CreateRangeBasedCondition_Params params {};
		params.conditionType = conditionType;
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3850
	 * 		Name   -> Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionWithSubjectForBP(class UClass* conditionType, class UClass* subjectProviderClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP"));
		
		UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Params params {};
		params.conditionType = conditionType;
		params.subjectProviderClass = subjectProviderClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F3760
	 * 		Name   -> Function Competence.ConditionFactory.CreateAndReceiveConditionForBP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionForBP(class UClass* conditionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.CreateAndReceiveConditionForBP"));
		
		UConditionFactory_CreateAndReceiveConditionForBP_Params params {};
		params.conditionType = conditionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F36C0
	 * 		Name   -> Function Competence.ConditionFactory.And
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UAndModifierCondition* UConditionFactory::STATIC_And()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.ConditionFactory.And"));
		
		UConditionFactory_And_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.ConditionFactory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F4DD0
	 * 		Name   -> Function Competence.HasObjectState.SetState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                State                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHasObjectState::SetState(const struct FGameplayTag& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.HasObjectState.SetState"));
		
		UHasObjectState_SetState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasObjectState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasObjectState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.HasObjectState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F4FE0
	 * 		Name   -> Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHasObjectStateWithMaxDuration::SetMaxDuration(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration"));
		
		UHasObjectStateWithMaxDuration_SetMaxDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasObjectStateWithMaxDuration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasObjectStateWithMaxDuration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.HasObjectStateWithMaxDuration"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompetenceFlagProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompetenceFlagProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.CompetenceFlagProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionReceiver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionReceiver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.ConditionReceiver"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifierProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifierProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.ModifierProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F55E0
	 * 		Name   -> Function Competence.IsTimerDoneCondition.SetTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTimerObject*                                Timer                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsTimerDoneCondition::SetTimer(class UTimerObject* Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.IsTimerDoneCondition.SetTimer"));
		
		UIsTimerDoneCondition_SetTimer_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F55C0
	 * 		Name   -> Function Competence.IsTimerDoneCondition.OnRep_Timer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIsTimerDoneCondition::OnRep_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.IsTimerDoneCondition.OnRep_Timer"));
		
		UIsTimerDoneCondition_OnRep_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsTimerDoneCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsTimerDoneCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.IsTimerDoneCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F63B0
	 * 		Name   -> Function Competence.SingleModifierCondition.OnRep_Condition
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void USingleModifierCondition::OnRep_Condition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.SingleModifierCondition.OnRep_Condition"));
		
		USingleModifierCondition_OnRep_Condition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.SingleModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x079F5930
	 * 		Name   -> Function Competence.LingeringModifierCondition.OnTimerEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULingeringModifierCondition::OnTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Competence.LingeringModifierCondition.OnTimerEnd"));
		
		ULingeringModifierCondition_OnTimerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULingeringModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.LingeringModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.NotModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.OrModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOwnerSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwnerSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.OwnerSubjectProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestEventDrivenModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestEventDrivenModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.TestEventDrivenModifierCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestObjectStateProviderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestObjectStateProviderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Competence.TestObjectStateProviderComponent"));
		return ptr;
	}

}


