#pragma once

/**
 * Name: dbd
 * Version: 6711
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal
	 */
	struct UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Params
	{
	public:
		struct FModifierReplicatedEventConditionData               oldReplicatedCondition;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierContainer.IsApplicable
	 */
	struct UBaseModifierContainer_IsApplicable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
	 */
	struct UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params
	{
	public:
		class UClass*                                              conditionType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEventDrivenModifierCondition*                       ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
	 */
	struct UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.SetSubjectProviderClass
	 */
	struct UBaseModifierCondition_SetSubjectProviderClass_Params
	{
	public:
		class UClass*                                              subjectProviderClass;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
	 */
	struct UBaseModifierCondition_OnRep_SubjectProviderClass_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.OnRep_OwningModifier
	 */
	struct UBaseModifierCondition_OnRep_OwningModifier_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
	 */
	struct UBaseModifierCondition_InitializeSubjectProviderClass_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.GetOwningActor
	 */
	struct UBaseModifierCondition_GetOwningActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.RangeBasedCondition.SetRange
	 */
	struct URangeBasedCondition_SetRange_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.RangeBasedCondition.OnRep_Range
	 */
	struct URangeBasedCondition_OnRep_Range_Params
	{	};

	/**
	 * Function Competence.CompositeModifierCondition.OnRep_Conditions
	 */
	struct UCompositeModifierCondition_OnRep_Conditions_Params
	{	};

	/**
	 * Function Competence.ConditionFactory.Or
	 */
	struct UConditionFactory_Or_Params
	{
	public:
		unsigned char                                              UnknownData_7AVS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOrModifierCondition*                                ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.Not
	 */
	struct UConditionFactory_Not_Params
	{
	public:
		unsigned char                                              UnknownData_13K2[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNotModifierCondition*                               ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.Lingering
	 */
	struct UConditionFactory_Lingering_Params
	{
	public:
		unsigned char                                              UnknownData_ZP5L[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      timeToTrack;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VXDR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULingeringModifierCondition*                         ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.IsTimerDone
	 */
	struct UConditionFactory_IsTimerDone_Params
	{
	public:
		unsigned char                                              UnknownData_MBHV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTimerObject*                                        Timer;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIsTimerDoneCondition*                               ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
	 */
	struct UConditionFactory_CreateRangeBasedConditionWithSubject_Params
	{
	public:
		unsigned char                                              UnknownData_AOVA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              conditionType;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Range;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S89S[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              subjectProviderClass;                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URangeBasedCondition*                                ReturnValue;                                             // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateRangeBasedCondition
	 */
	struct UConditionFactory_CreateRangeBasedCondition_Params
	{
	public:
		unsigned char                                              UnknownData_ICIX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              conditionType;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Range;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_728W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URangeBasedCondition*                                ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
	 */
	struct UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Params
	{
	public:
		unsigned char                                              UnknownData_V2HZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              conditionType;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              subjectProviderClass;                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEventDrivenModifierCondition*                       ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateAndReceiveConditionForBP
	 */
	struct UConditionFactory_CreateAndReceiveConditionForBP_Params
	{
	public:
		unsigned char                                              UnknownData_TOWV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              conditionType;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEventDrivenModifierCondition*                       ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.And
	 */
	struct UConditionFactory_And_Params
	{
	public:
		unsigned char                                              UnknownData_6RZV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAndModifierCondition*                               ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.HasObjectState.SetState
	 */
	struct UHasObjectState_SetState_Params
	{
	public:
		struct FGameplayTag                                        State;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration
	 */
	struct UHasObjectStateWithMaxDuration_SetMaxDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.IsTimerDoneCondition.SetTimer
	 */
	struct UIsTimerDoneCondition_SetTimer_Params
	{
	public:
		class UTimerObject*                                        Timer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.IsTimerDoneCondition.OnRep_Timer
	 */
	struct UIsTimerDoneCondition_OnRep_Timer_Params
	{	};

	/**
	 * Function Competence.SingleModifierCondition.OnRep_Condition
	 */
	struct USingleModifierCondition_OnRep_Condition_Params
	{	};

	/**
	 * Function Competence.LingeringModifierCondition.OnTimerEnd
	 */
	struct ULingeringModifierCondition_OnTimerEnd_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
