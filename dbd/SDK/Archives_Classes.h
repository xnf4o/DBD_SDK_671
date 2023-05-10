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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Archives.ActorPathFollowingComponent
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class UActorPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.AfterExitOpenQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UAfterExitOpenQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_092P[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnExitGateOpened(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.RecentlyActiveStateTagEvaluatorCondition
	 * Size -> 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
	 */
	class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		TArray<struct FGameplayTag>                                _stateTags;                                              // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C85C[0x80];                                  // 0x0058(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.AllRecentlyActiveStateTagEvaluatorCondition
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UAllRecentlyActiveStateTagEvaluatorCondition : public URecentlyActiveStateTagEvaluatorCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.AlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _outlineColor;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _glyphQuestId;                                           // 0x00D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CXXD[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.AnyRecentlyActiveStateTagEvaluatorCondition
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UAnyRecentlyActiveStateTagEvaluatorCondition : public URecentlyActiveStateTagEvaluatorCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.BaseRecentEventEvaluatorCondition
	 * Size -> 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
	 */
	class UBaseRecentEventEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_RJ1E[0x1C];                                  // 0x0048(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _firstGameEvent;                                         // 0x0064(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1H79[0x50];                                  // 0x0070(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.BloodPointsQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UBloodPointsQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_NJFY[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.CarryDistanceQEEvaluator
	 * Size -> 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
	 */
	class UCarryDistanceQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_G72E[0x70];                                  // 0x00B8(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ChaseInBasementQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UChaseInBasementQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_1E3U[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEscapeChase(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnChaseStart(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnChaseEnd(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ContextualQuestUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UContextualQuestUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_PlayerHasToCompleteAssociatedQuest(class ADBDPlayer* Player, const class FName& SpecialBehaviourId);
		bool STATIC_PlayerHasAssociatedQuest(class ADBDPlayer* Player, const class FName& SpecialBehaviourId);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.CustomValueEvaluatorCondition
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UCustomValueEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		class FString                                              _paramConditionKey;                                      // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECustomValueComparator                                     _comparator;                                             // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0G75[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.CustomValueLessThanAmountQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UCustomValueLessThanAmountQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_0FN9[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.CustomValueMoreThanAmountQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UCustomValueMoreThanAmountQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_KE6B[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.CustomValuePercentQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UCustomValuePercentQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.CustomValueQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UCustomValueQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.DifferentSurvivorsNearMeQEEvaluator
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UDifferentSurvivorsNearMeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_0KKE[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _foundSurvivors[0x50];                                   // 0x00C0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.DoBeforeEscapeQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		void OnEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.DoBeforeHookQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		void OnHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.DuringEndGameCollapseQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_SJQJ[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEndGameCollapseStart(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EarnEmblemQualityQEEvaluator
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_G3CX[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EndOfGameQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UEndOfGameQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EscapeBasementItemQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UEscapeBasementItemQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_E2R7[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTargetEscapeFromTrial(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnItemCollectedFromChest(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EscapeOtherInTrialQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UEscapeOtherInTrialQEEvaluator : public UDoBeforeEscapeQEEvaluator
	{
	public:
		unsigned char                                              UnknownData_CQSG[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EventAfterOtherWithMinimumCustomValueQEEvaluator
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UEventAfterOtherWithMinimumCustomValueQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		struct FGameplayTag                                        _startEvent;                                             // 0x00B8(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_72AB[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EventCountComparisonQEEvaluator
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UEventCountComparisonQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		TArray<struct FGameplayTag>                                _incrementCountEvents;                                   // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		EEventSubject                                              _incrementIfIAm;                                         // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QESS[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _resetCountEvents;                                       // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		EEventSubject                                              _resetIfIAm;                                             // 0x00E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEventCountComparisonOperator                              _comparisonOperator;                                     // 0x00E1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JM4I[0xE];                                   // 0x00E2(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EventInTimeQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UEventInTimeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_UG58[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EventOccuredAndStayNearQuestEvaluator
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UEventOccuredAndStayNearQuestEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		struct FGameplayTag                                        _triggerEvent;                                           // 0x00B8(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESubjectPerspective                                        _instigatorPerspective;                                  // 0x00C4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESubjectPerspective                                        _targetPerspective;                                      // 0x00C5(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CSFC[0x7A];                                  // 0x00C6(0x007A) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.EventOccurredBetweenQEEvaluator
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UEventOccurredBetweenQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_FH1M[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _middleEvent;                                            // 0x00C8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       outerEventsDifferentTargets;                             // 0x00D4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BVMV[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.FinishPreventGateEscapeQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UFinishPreventGateEscapeQEEvaluator : public UEndOfGameQEEvaluator
	{
	public:
		unsigned char                                              UnknownData_IN7O[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.FragileObjectComponent
	 * Size -> 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
	 */
	class UFragileObjectComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnObjectBroken;                                          // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectRepaired;                                        // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOV7[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _repaired;                                               // 0x00F0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9XI9[0x27];                                  // 0x00F1(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _minFallingHeight;                                       // 0x0118(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_REOU[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _generalObjectBreakingEvents;                            // 0x0120(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _previousCollector;                                      // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_Repaired();
		void OnFragileObjectStateChanged__DelegateSignature();
		bool IsRepaired();
		class ADBDPlayer* GetPreviousCollector();
		void DBD_RepairFragileObject();
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GeneratorCoOpEvaluatorCondition
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UGeneratorCoOpEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GeneratorsNeededCountQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGeneratorsNeededCountQEEvaluator : public UEndOfGameQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.Glyph
	 * Size -> 0x0158 (FullSize[0x04C0] - InheritedSize[0x0368])
	 */
	class AGlyph : public ASpecialBehaviourInteractable
	{
	public:
		unsigned char                                              UnknownData_0VAF[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADBDPlayer*>                                  _playersWithVisibility;                                  // 0x0370(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<class ADBDPlayer*>                                  _oldPlayersWithVisibility;                               // 0x0380(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class FName                                                _specialBehaviourId;                                     // 0x0390(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAllowedPlayerType                                         _allowedPlayerType;                                      // 0x039C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _canOnlyBeInteractedOnByOnePlayer;                       // 0x039D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _canBeInteractedAfterQuestCompleted;                     // 0x039E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C0AS[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ADBDPlayer>                           lastPlayerToStartInteraction;                            // 0x03A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<TWeakObjectPtr<class ADBDPlayerState>>              _isGlyphActivatedForPlayer;                              // 0x03A8(0x0010) Net, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		bool                                                       _grantChallengeProgress;                                 // 0x03B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _grantQuestEventProgressOnInteraction;                   // 0x03B9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x03BA(0x0001) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WQ7I[0x5];                                   // 0x03BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGlyphInteraction*                                   _glyphInteraction;                                       // 0x03C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGlyphInteraction*                                   _glyphInteractionKiller;                                 // 0x03C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _glyphInteractionChargeable;                             // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _glyphInteractionChargeableKiller;                       // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _glyphInteractor;                                        // 0x03E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNearTrackedActorComponent*                          _nearTrackedActorComponent;                              // 0x03E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _glyphInteractionZone;                                   // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x03F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _glyphMesh;                                              // 0x0400(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _associatedSurvivorScoreEvent;                           // 0x0408(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _associatedKillerScoreEvent;                             // 0x0414(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isScoreRewardExponentialForMultipleGlyphs;              // 0x0420(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HUDS[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _glyphInteractionSecondsToCharge;                        // 0x0428(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _glyphInteractionSecondsToChargeKiller;                  // 0x0450(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _glyphDetectionRange;                                    // 0x0478(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _auraColorWhileInteracting;                              // 0x04A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ADBDPlayer*>                                  _playersThatInteractedWithGlyph;                         // 0x04B0(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void OnRep_PlayersWithVisibility();
		bool IsPlayerOwner(class ADBDPlayer* Player);
		bool DoesLocalPlayerHaveVisibility();
		void Cosmetic_OnStoppedInteracting();
		void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
		void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		void Cosmetic_OnGlyphVisibilityChanged(class ADBDPlayer* interactingPlayer, bool IsVisible);
		void Authority_TrackPlayerWithBehaviourID(class ADBDPlayer* DBDPlayer);
		void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor);
		void Authority_OnIntroCompleted();
		void Authority_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GlyphDebugComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UGlyphDebugComponent : public UActorComponent
	{
	public:
		bool                                                       _assignOwnerOnBeginPlay;                                 // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPawnType                                                  _ownerPawnType;                                          // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FIAO[0x1E];                                  // 0x00BA(0x001E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GlyphEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UGlyphEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		class UClass*                                              _glyphClass;                                             // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_164G[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GlyphInteraction
	 * Size -> 0x0050 (FullSize[0x0790] - InheritedSize[0x0740])
	 */
	class UGlyphInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_LI2P[0x50];                                  // 0x0740(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GlyphOutlineUpdateStrategy
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UGlyphOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GreenGlyphActivatorComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UGreenGlyphActivatorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_S9FX[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class UGreenGlyphComponent>>         _greenGlyphComponents;                                   // 0x00D0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class AGenerator*>                                  _completedGenerators;                                    // 0x00E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void DBD_ShowAuraGreenGlyphsActive(bool Enabled);
		void Authority_OnActivateGlyphEvents(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		void Authority_EndGameScenarioBegins(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.GreenGlyphComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UGreenGlyphComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_FRC9[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _revealAuraGlyphDuration;                                // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _shouldOutlineBeActive;                                  // 0x00CC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EYXU[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnRep_SetShouldOutlineBeActive();
		void Multicast_Cheat_ShowAuraGreenGlyphActive(bool Enabled, bool bForceShowAura);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasAnyVisibleStatusEffectOfType
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UHasAnyVisibleStatusEffectOfType : public UEvaluatorCondition
	{
	public:
		EMatchingStatusEffectType                                  _statusEffectOfType;                                     // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5KFF[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasEventHappenedEnoughTimesEvaluatorCondition
	 * Size -> 0x0088 (FullSize[0x00D0] - InheritedSize[0x0048])
	 */
	class UHasEventHappenedEnoughTimesEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_2EDI[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEventOccurrenceConditionData                       _conditionEventsData;                                    // 0x0060(0x0060) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      _numOccurrences;                                         // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _prerequisiteTimeLimit;                                  // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _triggerTimeLimit;                                       // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FZBH[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasEventHappenedEnoughTimesResettableEvaluatorCondition
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UHasEventHappenedEnoughTimesResettableEvaluatorCondition : public UHasEventHappenedEnoughTimesEvaluatorCondition
	{
	public:
		struct FGameplayTagContainer                               _resetProgressGameEvents;                                // 0x00D0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasEventHappenedEvaluatorCondition
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UHasEventHappenedEvaluatorCondition : public UBaseRecentEventEvaluatorCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasEventNotHappenedEvaluatorCondition
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UHasEventNotHappenedEvaluatorCondition : public UBaseRecentEventEvaluatorCondition
	{
	public:
		float                                                      timeLimitOverride;                                       // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9TEH[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasGameplayTagEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UHasGameplayTagEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		TArray<struct FGameplayTag>                                _gameplayTagList;                                        // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasInteractedMapTrackedInteractorQEEvaluator
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UHasInteractedMapTrackedInteractorQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_EY1N[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		void OnActorTrackedByMap(class AActor* newActor);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasItemNoChargesQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UHasItemNoChargesQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasItemRarityEvaluatorCondition
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UHasItemRarityEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_HIDX[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ItemRarityQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UItemRarityQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_SNL7[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasItemRarityQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UHasItemRarityQEEvaluator : public UItemRarityQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasItemTypeEvaluatorCondition
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UHasItemTypeEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		ELoadoutItemType                                           _itemType;                                               // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IAIH[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasItemTypeQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UHasItemTypeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_NN3V[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasModifierOfTypeEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UHasModifierOfTypeEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		TArray<struct FGameplayTag>                                _gameplayModifierList;                                   // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasOneOfEventsHappenedEvaluatorCondition
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	class UHasOneOfEventsHappenedEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_W0ET[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnyEventConditionData>                      _conditionEventsData;                                    // 0x0060(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D2W8[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasStateTagNearGameObjectQEEvaluator
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UHasStateTagNearGameObjectQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		TArray<struct FGameplayTag>                                _stateTags;                                              // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VO4B[0x30];                                  // 0x00C8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HasStatusEffectEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UHasStatusEffectEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		TArray<class FName>                                        _statusEffectList;                                       // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HexTotemsAtEndTrialCountQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UHexTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.NearKillerQEEvaluator
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UNearKillerQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_7TDR[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HideNearKillerQEEvaluator
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UHideNearKillerQEEvaluator : public UNearKillerQEEvaluator
	{
	public:
		unsigned char                                              UnknownData_DENW[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnSlashHarpoonedCamper(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnHarpoonHit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnChaseStart(class ADBDPlayer* chasedSurvivor);
		void OnChaseEnd(class ADBDPlayer* chasedSurvivor, float chaseTime);
		void OnCamperBreakFreeFromHarpoon(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HideInTerrorRadiusQEEvaluator
	 * Size -> 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
	 */
	class UHideInTerrorRadiusQEEvaluator : public UHideNearKillerQEEvaluator
	{
	public:
		unsigned char                                              UnknownData_HNOW[0x28];                                  // 0x0110(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HideNearKillerWhileInjuredQEEvaluator
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UHideNearKillerWhileInjuredQEEvaluator : public UHideNearKillerQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.MaxEventCountQEEvaluator
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UMaxEventCountQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		TArray<struct FGameplayTag>                                _incrementEventCount;                                    // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _decrementEventCount;                                    // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _stopEventCount;                                         // 0x00D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OND8[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnStopEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnIncrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnDecrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HitDifferentInFrenzyMaxCountQEEvaluator
	 * Size -> 0x0050 (FullSize[0x0140] - InheritedSize[0x00F0])
	 */
	class UHitDifferentInFrenzyMaxCountQEEvaluator : public UMaxEventCountQEEvaluator
	{
	public:
		unsigned char                                              _targetList[0x50];                                       // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.SurvivorHookSameTimeQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class USurvivorHookSameTimeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_AIM1[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorUnhooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnSurvivorHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.HookSameTimeBasementQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UHookSameTimeBasementQEEvaluator : public USurvivorHookSameTimeQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InChaseTargetStateTagEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UInChaseTargetStateTagEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		struct FGameplayTag                                        _gameplayTag;                                            // 0x0048(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EInChaseTargetLogic                                        _logic;                                                  // 0x0054(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3USX[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InDirectionOfKillerQEEvaluator
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UInDirectionOfKillerQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		class ADBDPlayer*                                          _killer;                                                 // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WHGY[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InflictMadnessBaseQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UInflictMadnessBaseQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		int32_t                                                    _requiredTier;                                           // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FM6K[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InjuredDyingHookManyQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UInjuredDyingHookManyQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InjuredDyingMultipleQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UInjuredDyingMultipleQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InLockerNearKillerQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UInLockerNearKillerQEEvaluator : public UNearKillerQEEvaluator
	{
	public:
		unsigned char                                              UnknownData_M1GY[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnClosetHideExit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnClosetHideEnter(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InstigatorHookCountQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UInstigatorHookCountQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_X02D[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InstigatorInBasementQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UInstigatorInBasementQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InstigatorInBasementPercentQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UInstigatorInBasementPercentQEEvaluator : public UInstigatorInBasementQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.InstigatorTargetDistanceEvaluatorCondition
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UInstigatorTargetDistanceEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		EInstigatorTargetDistanceComparator                        _comparator;                                             // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C54N[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.IsEventAttackOfTypeQEEvaluator
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UIsEventAttackOfTypeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		TArray<struct FGameplayTag>                                _attackEvent;                                            // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		EAttackerSubject                                           _attackerSubject;                                        // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BXZ6[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAttackType>                                        _attackOfType;                                           // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.IsInteractingEvaluatorCondition
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UIsInteractingEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.IsPerformingInteractionEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UIsPerformingInteractionEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		TArray<struct FGameplayTag>                                _semanticTags;                                           // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ItemConsumedQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_7OQW[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnItemConsumed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ItemPerformedQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UItemPerformedQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ItemPerformedPercentQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UItemPerformedPercentQEEvaluator : public UItemPerformedQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ItemUsedQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UItemUsedQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_17DT[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnItemUsed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.KillerNearRedHerringGeneratorQEEvaluator
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class UKillerNearRedHerringGeneratorQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_Q1K6[0x60];                                  // 0x00B8(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.LivingSurvivorsCountQEEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class ULivingSurvivorsCountQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_71UA[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorRemoved(class ACamperPlayer* survivorRemoved);
		void OnSurvivorAdded(class ACamperPlayer* survivorAdded);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.MaxSameTargetQEEvaluator
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		TMap<TWeakObjectPtr<class AActor>, int32_t>                _targetList;                                             // 0x00B8(0x0050) Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.MultipleEventsBeforeResetEventQEEvaluator
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UMultipleEventsBeforeResetEventQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		TArray<struct FGameplayTag>                                _gameEventsResettingProgress;                            // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U2MX[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.MultipleEventsInSameFrameQuestEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UMultipleEventsInSameFrameQuestEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_J3Z0[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.MultipleEventsInTimeFrameQEEvaluator
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UMultipleEventsInTimeFrameQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_VYHX[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.MultipleMadSurvivorsQEEvaluator
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UMultipleMadSurvivorsQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		int32_t                                                    _requiredTier;                                           // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8QWP[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _madSurvivors[0x50];                                     // 0x00C0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.NearGameObjectEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNearGameObjectEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_9BKC[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.NearMeEvaluatorCondition
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UNearMeEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_146K[0x4];                                   // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _questOwnerCanBeSubjectOfEvent;                          // 0x004C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1W0R[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.NearPalletVaultWallQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UNearPalletVaultWallQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_WHQQ[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.NearTrackedActorComponent
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UNearTrackedActorComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             IsWithinRangeDelegate;                                   // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      _distanceThreshold;                                      // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XD48[0x14];                                  // 0x00CC(0x0014) MISSED OFFSET (PADDING)

	public:
		void StopTrackingActor(class AActor* Actor);
		void StartTrackingActor(class AActor* Actor);
		void SetDistanceThreshold(float value);
		void OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class AActor* trackedActor);
		bool IsActorWithinRange(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.NurseChainBlinkNumberQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UNurseChainBlinkNumberQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_HAW8[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.OniDashHitDiffInTimeQEEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UOniDashHitDiffInTimeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_DG5O[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _previousTarget;                                         // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.OrangeGlyphAdjustmentStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOrangeGlyphAdjustmentStrategy : public USpecialBehaviourIterativeWeightAdjustmentStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.OrangeGlyphComponent
	 * Size -> 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
	 */
	class UOrangeGlyphComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             ChallengeCompletedDelegate;                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AffectedActionTakenDelegate;                             // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    _numHookedSurvivorsRequired;                             // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _numInactiveHookStatesToDespawn;                         // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _numHookActionsWhileActive;                              // 0x00E0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8ABN[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _hookEvents;                                             // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                _hookStateEvents;                                        // 0x00F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      _statusEffectClasses;                                    // 0x0108(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                _eventsThatCauseEffects;                                 // 0x0118(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IV1G[0x30];                                  // 0x0128(0x0030) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_ApplyNegativeEffects(class ADBDPlayer* affectedPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.PinkGlyphComponent
	 * Size -> 0x03F0 (FullSize[0x04A8] - InheritedSize[0x00B8])
	 */
	class UPinkGlyphComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnMarkProgressChanged_Cosmetic;                          // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartMarking_Cosmetic;                                 // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStopMarking_Cosmetic;                                  // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFullyMarked_Cosmetic;                                  // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartTeleport_Cosmetic;                                // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostTeleport_Cosmetic;                                 // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSurvivorEnteredRange_Cosmetic;                         // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHasLineOfSight_Cosmetic;                               // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _gracePeriodDuration;                                    // 0x0138(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _removeMarkedProgressDuration;                           // 0x0160(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _exposedStatusEffectDuration;                            // 0x0188(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _markTimeNeeded;                                         // 0x01B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _exposedStatusEffect;                                    // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minimumTeleportationDistance;                           // 0x01E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QO8M[0x4];                                   // 0x0208(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _checkLineOfSightDelay;                                  // 0x020C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _movementRange;                                          // 0x0210(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _teleportDelay;                                          // 0x0238(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JQRG[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpeedBasedNetSyncedValue                           _markedProgress;                                         // 0x0268(0x0038) Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPinkGlyphActive;                                      // 0x02A0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isMarking;                                              // 0x02A1(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasLineOfSightToSurvivor;                               // 0x02A2(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_24XD[0x5D];                                  // 0x02A3(0x005D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTileSpawnPoint*>                             _teleportPoints;                                         // 0x0300(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JDYO[0x198];                                 // 0x0310(0x0198) MISSED OFFSET (PADDING)

	public:
		void OnRep_MarkedProgress();
		void OnRep_IsPinkGlyphActive();
		void OnRep_IsMarking();
		void OnRep_HasLineOfSightToSurvivor();
		void OnMarkProgressChanged__DelegateSignature(float Progress);
		void OnGlyphEvent__DelegateSignature();
		void Multicast_TeleportGlyph(const struct FVector& Location);
		void Multicast_StartGlyphPreTeleport();
		void Multicast_IsFullyMarkedSurvivor();
		void Multicast_EnterGlyphRange();
		bool IsMarking();
		void Authority_TeleportGlyph();
		void Authority_OnSurvivorInMovementRangeChanged(bool inRange);
		void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor);
		void Authority_OnLevelReadyToPlay();
		void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.PlagueCorruptUniqueTargetsQEEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UPlagueCorruptUniqueTargetsQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		class AActor*                                              _previousTarget;                                         // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UNF3[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.PreventExitGateOpenQEEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UPreventExitGateOpenQEEvaluator : public UEndOfGameQEEvaluator
	{
	public:
		unsigned char                                              UnknownData_3E7U[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorLeftMatch(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		void OnSurvivorAdded(class ACamperPlayer* survivorAdded);
		void OnExitGateOpened(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.PurpleGlyphComponent
	 * Size -> 0x0198 (FullSize[0x0250] - InheritedSize[0x00B8])
	 */
	class UPurpleGlyphComponent : public UActorComponent
	{
	public:
		TArray<class UTileSpawnPoint*>                             _survivorSpawns;                                         // 0x00B8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B7E9[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIMoveRequest                                      MoveRequest;                                             // 0x00E0(0x0040) Transient, NativeAccessSpecifierPrivate
		class UClass*                                              _navFilter;                                              // 0x0120(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _auraRevealDuration;                                     // 0x0128(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _nextLocationDistanceMinimum;                            // 0x0150(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _nextLocationDistanceMaximum;                            // 0x0178(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _movementAcceptanceRadius;                               // 0x01A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _distanceToAccelerate;                                   // 0x01C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _distanceToDecelerate;                                   // 0x01F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        OutlineColor;                                            // 0x0218(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBloodTrailSettings*                                 _bloodTrailSettings;                                     // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8EP4[0x20];                                  // 0x0230(0x0020) MISSED OFFSET (PADDING)

	public:
		void StopGlyphMovement(bool useDeceleration);
		void StartGlyphMovement();
		void ResumeGlyphMovement(bool useAcceleration);
		void OnLevelReadyToPlay();
		class ADBDPlayer* GetTrackedPlayer();
		class AGlyph* GetOwningGlyph();
		void Authority_StartMoveWithAcceleration(const struct FVector& goalLocation);
		void Authority_MoveTo(const struct FVector& Location);
		struct FVector Authority_GetNextLocation();
		void Authority_AbortMoveWithDeceleration();
		void Authority_AbortMove();
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.QuestEventsHandler
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class UQuestEventsHandler : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QXEA[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UQuestEventEvaluatorBase*>                    _evaluatorList;                                          // 0x00D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9MSL[0x20];                                  // 0x00E8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArchiveStoriesContainer*                            _archiveStoriesContainer;                                // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AV6K[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnPlayerGameStateChanged(class ADBDPlayerState* PlayerState, EGameState GameState);
		void OnGameEnded(EEndGameReason Reason);
		void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void DBD_ShowInGameCurrentQuestInfos();
		void DBD_InGameAddProgressionToCurrentQuest(int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.QuestEventsHandlerTest
	 * Size -> 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
	 */
	class UQuestEventsHandlerTest : public UQuestEventsHandler
	{
	public:
		class ADBDPlayer*                                          _dbdPlayer;                                              // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.QuestEventsHandlerUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UQuestEventsHandlerUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_InitializeQuestEventHandler(class UQuestEventsHandler* QuestEventsHandler);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.RepairCoopQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class URepairCoopQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_O55E[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ReturnTheFavorQEEvaluator
	 * Size -> 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
	 */
	class UReturnTheFavorQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              _favorToReturnEvents[0x50];                              // 0x00B8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _instigatorList[0x50];                                   // 0x0108(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.ScreamSpecialCaseQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UScreamSpecialCaseQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.SearchItemRarityQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class USearchItemRarityQEEvaluator : public UItemRarityQEEvaluator
	{
	public:
		void OnItemSpawnedFromChest(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.SecondHookStageReachedQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class USecondHookStageReachedQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.SkillCheckConsecutiveQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class USkillCheckConsecutiveQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_3ILW[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSkillCheckSuccess(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnSkillCheckFail(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.SlasherIsCarryingQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class USlasherIsCarryingQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.StateTagEvaluatorCondition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UStateTagEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		struct FGameplayTag                                        _gameplayTag;                                            // 0x0048(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LR8V[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.SurvivorNearMeEvaluatorCondition
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class USurvivorNearMeEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_CW9R[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TargetInBasementQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UTargetInBasementQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TargetIsObsessionQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UTargetIsObsessionQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TargetNearPalletVaultWallQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UTargetNearPalletVaultWallQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_HZ0D[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TargetOfEventRecentlyQEEvaluator
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UTargetOfEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_6EL9[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _firstGameEvent;                                         // 0x00C0(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _secondEventOnSelf;                                      // 0x00CC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J1FL[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TargetTriggeredEventRecentlyQEEvaluator
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class UTargetTriggeredEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_GSLK[0x54];                                  // 0x00B8(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _gameEvent;                                              // 0x010C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TargetWasDamagedBySpecialAttackRecentlyEvaluator
	 * Size -> 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
	 */
	class UTargetWasDamagedBySpecialAttackRecentlyEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_XOZL[0xA0];                                  // 0x00B8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _timeLimit;                                              // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1NZL[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _specialCaseGameEvents;                                  // 0x0160(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TargetWasTargetedByEventRecentlyEvaluator
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class UTargetWasTargetedByEventRecentlyEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_VVAI[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _gameEventsToTriggerFirst;                               // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TotalDistanceEvaluatorCondition
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UTotalDistanceEvaluatorCondition : public UEvaluatorCondition
	{
	public:
		unsigned char                                              UnknownData_TR30[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _startTimerEvents;                                       // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _endTimerEvents;                                         // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TotemsAtEndTrialCountQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.TriggerWithSameTargetWithinTimeQEEvaluator
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UTriggerWithSameTargetWithinTimeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_KV1N[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.UniqueTargetIncrementQEEvaluator
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UUniqueTargetIncrementQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              _targetList[0x50];                                       // 0x00B8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.UniqueTargetsInTimeQEEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UUniqueTargetsInTimeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_OXQO[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.WhiteGlyphBasementComponent
	 * Size -> 0x00B0 (FullSize[0x0168] - InheritedSize[0x00B8])
	 */
	class UWhiteGlyphBasementComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GXQ5[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReadyForInteraction;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      _basementGlyphInteractionCoolDownTime;                   // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AFW1[0x84];                                  // 0x00E4(0x0084) MISSED OFFSET (PADDING)

	public:
		void OnReadyForInteractionDelegate__DelegateSignature();
		class AGlyph* GetOwningGlyph();
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.WhiteGlyphSpawnerComponent
	 * Size -> 0x0208 (FullSize[0x02C0] - InheritedSize[0x00B8])
	 */
	class UWhiteGlyphSpawnerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_FA9B[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _surfaceGlyphClass;                                      // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minDistanceFromBasement;                                // 0x00D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxDistanceFromBasement;                                // 0x0100(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _spawnDistanceDebug;                                     // 0x0128(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XVXQ[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _surfaceGlyphCoolDownTime;                               // 0x0130(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWhiteGlyphSurfaceComponent*                         _lastSurfaceGlyphComponentDebug;                         // 0x0158(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UTileSpawnPoint*>                             _spawnPointsCollection;                                  // 0x0160(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QSO1[0x150];                                 // 0x0170(0x0150) MISSED OFFSET (PADDING)

	public:
		class AGlyph* GetOwningGlyph();
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.WhiteGlyphSurfaceComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UWhiteGlyphSurfaceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_FL1B[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		void Multicast_TeleportGlyph(const struct FVector& Location);
		class AGlyph* GetOwningGlyph();
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.WithPulledUpPalletQEEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UWithPulledUpPalletQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		TArray<class APallet*>                                     _resetPallets;                                           // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Archives.YellowGlyphComponent
	 * Size -> 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
	 */
	class UYellowGlyphComponent : public UActorComponent
	{
	public:
		class ADBDPlayer*                                          _currentlyInteractingPlayer;                             // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XAQR[0x4];                                   // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _skillCheckDuration;                                     // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _skillCheckZoneLength;                                   // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _skillCheckDelay;                                        // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _skillCheckAverageDistance;                              // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _skillCheckDistanceVariance;                             // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _teleportDelay;                                          // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8YQ0[0x34];                                  // 0x00DC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTileSpawnPoint*>                             _survivorSpawns;                                         // 0x0110(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class AGlyph*>                                      _allGlyphs;                                              // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void StartGlyphPreTeleportVFX();
		void StartGlyphPostTeleportVFX();
		void OnLevelReadyToPlay();
		void Multicast_TeleportGlyph(const struct FVector& Location);
		class AGlyph* GetOwningGlyph();
		bool Authority_TeleportGlyph(int32_t maxNumberOfTries);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
