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
	 * Class DBDBots.AIDisplayDebugInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIDisplayDebugInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AIGoalGeneratorInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIGoalGeneratorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AIIntentionValidatorInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIIntentionValidatorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AIPathValidatorInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIPathValidatorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UAISkill : public UObject
	{
	public:
		struct FGameplayTagContainer                               RunContexts;                                             // 0x0030(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       StopIfPausedByNavLinkProxy;                              // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4Z9[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RunTimeLimit;                                            // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunCooldownTime;                                         // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunCooldownTimeDeviation;                                // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SkillNavigationFilterClass;                              // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAISenseConfig*>                              SkillSenseConfigs;                                       // 0x0068(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FKillerFilterItem>                           KillerFilter;                                            // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       DynamicSubtree;                                          // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUM7[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     _pausedByObjects;                                        // 0x00A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5EWF[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDAIBTController*                                  _aiControllerOwner;                                      // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_DirectionalMinigame
	 * Size -> 0x0068 (FullSize[0x0138] - InheritedSize[0x00D0])
	 */
	class UAISkill_DirectionalMinigame : public UAISkill
	{
	public:
		struct FAIRoll                                             InputRoll;                                               // 0x00D0(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 InputTimeMinimum;                                        // 0x00F4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 InputTimeVariance;                                       // 0x0104(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SQJ[0x24];                                  // 0x0114(0x0024) MISSED OFFSET (PADDING)

	public:
		void OnMinigameStart(TArray<EDirectionalInputKey> Sequence, int32_t currentIndex);
		void OnMinigameEnd(EDirectionalMinigameResult Result);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Diversion
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	class UAISkill_Diversion : public UAISkill
	{
	public:
		class FName                                                perkId;                                                  // 0x00D0(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7ZC[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DiversionFromGoalClasses;                                // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic
		EAIDifficultyLevel                                         ThrowOnInteractablesAtDifficultyLevel;                   // 0x00F0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36TV[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxThrowOnInteractableHalfAngle;                         // 0x00F4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMoveToTargetDistance;                                 // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NavMeshFindLocationExtents;                              // 0x00FC(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlanInterval;                                            // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCCZ[0x14];                                  // 0x010C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Find
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	class UAISkill_Find : public UAISkill
	{
	public:
		class UClass*                                              FindClass;                                               // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BlackboardWishListTag;                                   // 0x00D8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchInterval;                                          // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MustBeSeen;                                              // 0x00E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFLO[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     _currentWishedObjects;                                   // 0x00F0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W0IL[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable
	 * Size -> 0x0018 (FullSize[0x0128] - InheritedSize[0x0110])
	 */
	class UAISkill_FindInteractable : public UAISkill_Find
	{
	public:
		class FString                                              RequiredInteractionId;                                   // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputInteractionType                                      RequiredInteractionInputType;                            // 0x0120(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OF9M[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindCollectable
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UAISkill_FindCollectable : public UAISkill_FindInteractable
	{
	public:
		int32_t                                                    CollectUnderItemCount;                                   // 0x0128(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollectOverItemChargeRatio;                              // 0x012C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindCollectable_Camper
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UAISkill_FindCollectable_Camper : public UAISkill_FindCollectable
	{
	public:
		float                                                      CollectUnderItemWeight;                                  // 0x0130(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollectOverWeightRatioDifference;                        // 0x0134(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindCollectable_Hatchet
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UAISkill_FindCollectable_Hatchet : public UAISkill_FindCollectable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindCollectable_Searchable
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UAISkill_FindCollectable_Searchable : public UAISkill_FindCollectable
	{
	public:
		float                                                      SearchIntervalAfterOpenSearchable;                       // 0x0130(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenSearchableRelevancyDuration;                         // 0x0134(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9VK[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASearchable*                                         _relevantSearchable;                                     // 0x0140(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindCollectable_Trap
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UAISkill_FindCollectable_Trap : public UAISkill_FindCollectable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_CloseTelevisionNearGenerator
	 * Size -> 0x0060 (FullSize[0x0188] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_CloseTelevisionNearGenerator : public UAISkill_FindInteractable
	{
	public:
		struct FAITunableParameter                                 MaximumCondemnedPercentToCloseTelevision;                // 0x0128(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 DistanceBetweenGeneratorAndTelevisionThreshold;          // 0x0138(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 BaseValue;                                               // 0x0148(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 CloseTelevisionDistanceLinearWeight;                     // 0x0158(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 CloseTelevisionMaximumDistanceFromCamper;                // 0x0168(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MaxHeightDifferenceToCloseTelevisions;                   // 0x0178(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_Drone
	 * Size -> 0x0048 (FullSize[0x0170] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_Drone : public UAISkill_FindInteractable
	{
	public:
		struct FAITunableParameter                                 BaseActiveWeight;                                        // 0x0128(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 BaseScoutingWeight;                                      // 0x0138(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ClawTrapStateTag;                                        // 0x0148(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTL5[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ValidGoalObjectClasses;                                  // 0x0158(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      DroneRadiusMargin;                                       // 0x0168(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GUU[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_SolveCondemned
	 * Size -> 0x0040 (FullSize[0x0168] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_SolveCondemned : public UAISkill_FindInteractable
	{
	public:
		struct FAITunableParameter                                 NearCondemnedWeight;                                     // 0x0128(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 HighCondemnedThreshold;                                  // 0x0138(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 SolveCondemnedBasicWeight;                               // 0x0148(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 CondemnedLevelProportionalWeight;                        // 0x0158(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_SolveRBT
	 * Size -> 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_SolveRBT : public UAISkill_FindInteractable
	{
	public:
		struct FAITunableParameter                                 UrgencyGoalWeight;                                       // 0x0128(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PriorityGoalWeight;                                      // 0x0138(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_SolveSickness
	 * Size -> 0x0030 (FullSize[0x0158] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_SolveSickness : public UAISkill_FindInteractable
	{
	public:
		struct FAITunableParameter                                 BaseGoalWeight;                                          // 0x0128(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 UrgencyGoalWeight;                                       // 0x0138(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 InteractingGoalPenaltyWeight;                            // 0x0148(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_StatusEffect
	 * Size -> 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_StatusEffect : public UAISkill_FindInteractable
	{
	public:
		struct FGameplayTag                                        RequiredPerkFlag;                                        // 0x0128(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvertCondition;                                         // 0x0134(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B24T[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_StatusEffect_Plague
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UAISkill_FindInteractable_StatusEffect_Plague : public UAISkill_FindInteractable_StatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_FindInteractable_Waker
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_Waker : public UAISkill_FindInteractable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction
	 * Size -> 0x00B0 (FullSize[0x0180] - InheritedSize[0x00D0])
	 */
	class UAISkill_Interaction : public UAISkill
	{
	public:
		EPawnInputPressTypes                                       inputType;                                               // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionSkillInputModes                                InputMode;                                               // 0x00D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPawnInputPressTypes                                       CancelInputType;                                         // 0x00D2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionCancelInputModes                               CancelInputMode;                                         // 0x00D3(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoLockInput;                                           // 0x00D4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OU8X[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIRoll                                             StartRoll;                                               // 0x00D8(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IMH[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartInteractionID;                                      // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StopInteractionID;                                       // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoldInputTime;                                        // 0x0120(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoReleaseHoldInputWhenCharged;                         // 0x0124(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABII[0x5B];                                  // 0x0125(0x005B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_AttachRBT
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_AttachRBT : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_Clairvoyance
	 * Size -> 0x0018 (FullSize[0x0198] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_Clairvoyance : public UAISkill_Interaction
	{
	public:
		struct FGameplayTag                                        DropCooldownTag;                                         // 0x0180(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropCooldownDuration;                                    // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLL2[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_ForThePeople
	 * Size -> 0x0018 (FullSize[0x0198] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_ForThePeople : public UAISkill_Interaction
	{
	public:
		unsigned char                                              UnknownData_5ALN[0x8];                                   // 0x0180(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BlockInteractionId;                                      // 0x0188(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_GeneratorSecondaryInteraction
	 * Size -> 0x0020 (FullSize[0x01A0] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_GeneratorSecondaryInteraction : public UAISkill_Interaction
	{
	public:
		TArray<struct FPerkIdDropdown>                             Perks;                                                   // 0x0180(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                GeneratorSecondaryInteractionId;                         // 0x0190(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EZZ[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_InLocker
	 * Size -> 0x0050 (FullSize[0x01D0] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_InLocker : public UAISkill_Interaction
	{
	public:
		struct FDataTableDropdown                                  perkId;                                                  // 0x0180(0x0030) Edit, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CooldownTag;                                             // 0x01B0(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialRunningTime;                                      // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartRefreshingTime;                                     // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Q3T[0x3];                                   // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RefreshTimeMargin;                                       // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RefreshTimeAmount;                                       // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJIO[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_InLocker_BuiltToLast
	 * Size -> 0x0000 (FullSize[0x01D0] - InheritedSize[0x01D0])
	 */
	class UAISkill_Interaction_InLocker_BuiltToLast : public UAISkill_Interaction_InLocker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_InLocker_Flashbang
	 * Size -> 0x0000 (FullSize[0x01D0] - InheritedSize[0x01D0])
	 */
	class UAISkill_Interaction_InLocker_Flashbang : public UAISkill_Interaction_InLocker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_InLocker_HeadOn
	 * Size -> 0x0010 (FullSize[0x01E0] - InheritedSize[0x01D0])
	 */
	class UAISkill_Interaction_InLocker_HeadOn : public UAISkill_Interaction_InLocker
	{
	public:
		struct FAITunableParameter                                 MaxKillerNearbyDistance;                                 // 0x01D0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_InLocker_InnerHealing
	 * Size -> 0x0000 (FullSize[0x01D0] - InheritedSize[0x01D0])
	 */
	class UAISkill_Interaction_InLocker_InnerHealing : public UAISkill_Interaction_InLocker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_Kill
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_Kill : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_RecoverWhileCrawling
	 * Size -> 0x0010 (FullSize[0x0190] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_RecoverWhileCrawling : public UAISkill_Interaction
	{
	public:
		TArray<struct FPerkIdDropdown>                             Perks;                                                   // 0x0180(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_Reel
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_Reel : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_SendToDeathBed
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_SendToDeathBed : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_SetGeneratorTrap
	 * Size -> 0x0020 (FullSize[0x01C0] - InheritedSize[0x01A0])
	 */
	class UAISkill_Interaction_SetGeneratorTrap : public UAISkill_Interaction_GeneratorSecondaryInteraction
	{
	public:
		unsigned char                                              UnknownData_I9O4[0x4];                                   // 0x01A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CheckKillerDistanceInterval;                             // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinKillerApproachingSpeed;                               // 0x01A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinKillerApproachingFastStreak;                          // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAITerrorLevel                                             TerrorLevelToSetTrap;                                    // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAITerrorLevel                                             TerrorLevelToSetTrapImmediately;                         // 0x01B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAZ1[0x2];                                   // 0x01B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TerrorLevelCloseRange;                                   // 0x01B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BS8C[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Interaction_StaticBlast
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_StaticBlast : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionSetTrap
	 * Size -> 0x0010 (FullSize[0x0190] - InheritedSize[0x0180])
	 */
	class UAISkill_InteractionSetTrap : public UAISkill_Interaction
	{
	public:
		class UClass*                                              TrapClass;                                               // 0x0180(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceFromPointOfInterest;                          // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceFromAnotherSetTrap;                           // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionSetTrap_Demogorgon
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UAISkill_InteractionSetTrap_Demogorgon : public UAISkill_InteractionSetTrap
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionSetTrap_DreamPallet
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UAISkill_InteractionSetTrap_DreamPallet : public UAISkill_InteractionSetTrap
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionSetTrap_DreamSnare
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UAISkill_InteractionSetTrap_DreamSnare : public UAISkill_InteractionSetTrap
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionSetTrap_Phantom
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UAISkill_InteractionSetTrap_Phantom : public UAISkill_InteractionSetTrap
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget
	 * Size -> 0x00B0 (FullSize[0x0230] - InheritedSize[0x0180])
	 */
	class UAISkill_InteractionTarget : public UAISkill_Interaction
	{
	public:
		EInteractionTargetRequirements                             TargetRequirement;                                       // 0x0180(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSwapBestStimulusWithBestTarget;                      // 0x0181(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Z8C[0x2];                                   // 0x0182(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartMinRange;                                           // 0x0184(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartMaxRange;                                           // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopMinRange;                                            // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopMaxRange;                                            // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartMaxHalfAngle;                                       // 0x0194(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopMaxHalfAngle;                                        // 0x0198(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMaxHalfAngle2D;                                        // 0x019C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TestMaxHalfAngleOnPath;                                  // 0x019D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD4R[0x2];                                   // 0x019E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MaxAngleFilterClass;                                     // 0x01A0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionTargetInSightModes                             InSightMode;                                             // 0x01A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0L8[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutOfSightModeDelay;                                     // 0x01AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMoveAwayTooFastStopDelay;                          // 0x01B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMoveAwayTooFastCooldown;                           // 0x01B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysStrafeAroundTarget;                                // 0x01B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9PD[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIDetectedStimulus>                         _unfilteredTargets;                                      // 0x01C0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FAIDetectedStimulus>                         _filteredTargets;                                        // 0x01D0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TMap<class AActor*, struct FTargetMoveAwayToFastInfo>      _targetsMoveAwayTooFastInfo;                             // 0x01E0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_Aim
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_Aim : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_AmbushAttack
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_AmbushAttack : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_AmbushMode
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_AmbushMode : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_Cloak
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_Cloak : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_Dash
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_Dash : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_DashAttack
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_DashAttack : public UAISkill_InteractionTarget_Dash
	{
	public:
		float                                                      DashAttackUnderMaxRange;                                 // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DashAttackUnderMaxHalfAngle;                             // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackType                                                ExpectedAttackType;                                      // 0x0238(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVIT[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_DashAttack_Cannibal
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UAISkill_InteractionTarget_DashAttack_Cannibal : public UAISkill_InteractionTarget_DashAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_DashAttack_Chainsaw
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UAISkill_InteractionTarget_DashAttack_Chainsaw : public UAISkill_InteractionTarget_DashAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_DashAttack_Demogorgon
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UAISkill_InteractionTarget_DashAttack_Demogorgon : public UAISkill_InteractionTarget_DashAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_DashHillbilly
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_DashHillbilly : public UAISkill_InteractionTarget_Dash
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_DeadHard
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_DeadHard : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_Fire
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_Fire : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_Frenzy
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_Frenzy : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_LungeAttack
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_LungeAttack : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_PhaseWalk
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_PhaseWalk : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_ReloadDeathSlinger
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_ReloadDeathSlinger : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_ShockTherapy
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_ShockTherapy : public UAISkill_InteractionTarget
	{
	public:
		float                                                      TargetToEvadePointMaxDistance;                           // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CastShockTimeBuffer;                                     // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_Stalk
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_Stalk : public UAISkill_InteractionTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_StalkGhost
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_StalkGhost : public UAISkill_InteractionTarget_Stalk
	{
	public:
		float                                                      CautiousModeUnderTargetRange;                            // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CautiousModeSpeedFactor;                                 // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackFromCautiousDelay;                                   // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWIB[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_StalkShape
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_StalkShape : public UAISkill_InteractionTarget_Stalk
	{
	public:
		int32_t                                                    StalkRangeLimitedAtEvilTier;                             // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStalkRangeWhenLimitedByEvilTier;                      // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_StealthGhost
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_StealthGhost : public UAISkill_InteractionTarget
	{
	public:
		float                                                      CrouchSwapDelay;                                         // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LWO[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_Throw
	 * Size -> 0x0078 (FullSize[0x02A8] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_Throw : public UAISkill_InteractionTarget
	{
	public:
		EAIThrowPredictionModes                                    ThrowPredictionMode;                                     // 0x0230(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRK6[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxAddPitchAngle;                                        // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIThrowProjectileModes                                    ThrowProjectileMode;                                     // 0x0238(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_436W[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 HoldInputTimeRandDeviation;                              // 0x023C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PitchAngleRandDeviation;                                 // 0x024C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6V1H[0x4C];                                  // 0x025C(0x004C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_ThrowHatchet
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UAISkill_InteractionTarget_ThrowHatchet : public UAISkill_InteractionTarget_Throw
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_ThrowPlague
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UAISkill_InteractionTarget_ThrowPlague : public UAISkill_InteractionTarget_Throw
	{
	public:
		struct FGameplayTag                                        ProjectileDamageSickTargetTag;                           // 0x02A8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXWX[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_TormentAttack
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_TormentAttack : public UAISkill_InteractionTarget
	{
	public:
		int32_t                                                    AdvancedAtNbDetectedTargets;                             // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIRoll                                             AdvancedStartRoll;                                       // 0x0234(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XWEY[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTarget_TormentMode
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UAISkill_InteractionTarget_TormentMode : public UAISkill_InteractionTarget
	{
	public:
		float                                                      ChasedTargetToEvadePointMaxDistance;                     // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTormentInPatrolAboveChargeRatio;                    // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTormentInChaseAboveChargeRatio;                     // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HT2P[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTeleport
	 * Size -> 0x0008 (FullSize[0x0188] - InheritedSize[0x0180])
	 */
	class UAISkill_InteractionTeleport : public UAISkill_Interaction
	{
	public:
		float                                                      BlockTeleportWhenPathGoalUnderRange;                     // 0x0180(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5V9[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTeleportEthereal
	 * Size -> 0x0060 (FullSize[0x01E8] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionTeleportEthereal : public UAISkill_InteractionTeleport
	{
	public:
		float                                                      TeleportPlanInterval;                                    // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTeleportAlignHalfAngle;                               // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbortNotWorkingTeleportDelay;                            // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbortAddRunCooldownPenaltyTime;                          // 0x0194(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJSA[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _onStimulusInstigator;                                   // 0x01B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7CDG[0x30];                                  // 0x01B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTeleportEthereal_Blink
	 * Size -> 0x0010 (FullSize[0x01F8] - InheritedSize[0x01E8])
	 */
	class UAISkill_InteractionTeleportEthereal_Blink : public UAISkill_InteractionTeleportEthereal
	{
	public:
		float                                                      StartBlinkAtWarpLocationRange;                           // 0x01E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidateBlinkWarpRange;                                  // 0x01EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlinkAboveSavedPathLength;                               // 0x01F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlinkIfTargetWillBeInRange;                              // 0x01F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTeleportEthereal_Demogorgon
	 * Size -> 0x0018 (FullSize[0x0200] - InheritedSize[0x01E8])
	 */
	class UAISkill_InteractionTeleportEthereal_Demogorgon : public UAISkill_InteractionTeleportEthereal
	{
	public:
		float                                                      MaxRangeFromFirstPortal;                                 // 0x01E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMSF[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADemogorgonPortal*                                   _firstPortal;                                            // 0x01F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADemogorgonPortal*                                   _secondPortal;                                           // 0x01F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionTeleportEthereal_Nightmare
	 * Size -> 0x0010 (FullSize[0x01F8] - InheritedSize[0x01E8])
	 */
	class UAISkill_InteractionTeleportEthereal_Nightmare : public UAISkill_InteractionTeleportEthereal
	{
	public:
		float                                                      TeleportIfPathLengthSavedAboveRange;                     // 0x01E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATEF[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGenerator*                                          _toGenerator;                                            // 0x01F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem
	 * Size -> 0x0008 (FullSize[0x0188] - InheritedSize[0x0180])
	 */
	class UAISkill_InteractionUseItem : public UAISkill_Interaction
	{
	public:
		ELoadoutItemType                                           ItemType;                                                // 0x0180(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWV6[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem_FirecrackerLike
	 * Size -> 0x0018 (FullSize[0x01A0] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_FirecrackerLike : public UAISkill_InteractionUseItem
	{
	public:
		struct FAITunableParameter                                 StartMaxRange;                                           // 0x0188(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetFaceMeMaxAngle;                                    // 0x0198(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FBH[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem_Firecracker
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UAISkill_InteractionUseItem_Firecracker : public UAISkill_InteractionUseItem_FirecrackerLike
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem_Flashbang
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UAISkill_InteractionUseItem_Flashbang : public UAISkill_InteractionUseItem_FirecrackerLike
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem_Flashlight
	 * Size -> 0x0068 (FullSize[0x01F0] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_Flashlight : public UAISkill_InteractionUseItem
	{
	public:
		struct FAIRoll                                             VulnerableTargetStartRoll;                               // 0x0188(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetFaceMeMaxAngle;                                    // 0x01AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              _targetActor;                                            // 0x01B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M4LL[0x38];                                  // 0x01B8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem_Key_Addon
	 * Size -> 0x0008 (FullSize[0x0190] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_Key_Addon : public UAISkill_InteractionUseItem
	{
	public:
		float                                                      RemainingPercentChargeToKeep;                            // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSDB[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem_Map
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_Map : public UAISkill_InteractionUseItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_InteractionUseItem_Medkit_Addon
	 * Size -> 0x0008 (FullSize[0x0190] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_Medkit_Addon : public UAISkill_InteractionUseItem
	{
	public:
		float                                                      RemainingChargeThreshold;                                // 0x0188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAK0[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_PossessTheKiller
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_PossessTheKiller : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_SkillCheck
	 * Size -> 0x00B8 (FullSize[0x0188] - InheritedSize[0x00D0])
	 */
	class UAISkill_SkillCheck : public UAISkill
	{
	public:
		struct FAIRoll                                             BaseRegularZoneRoll;                                     // 0x00D0(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIRoll                                             BaseBonusZoneRoll;                                       // 0x00F4(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIRoll                                             WiggleRegularZoneRoll;                                   // 0x0118(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIRoll                                             WiggleBonusZoneRoll;                                     // 0x013C(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIRoll                                             HookStruggleBonusZoneRoll;                               // 0x0160(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY90[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_Strafe
	 * Size -> 0x0078 (FullSize[0x0148] - InheritedSize[0x00D0])
	 */
	class UAISkill_Strafe : public UAISkill
	{
	public:
		float                                                      StartMaxRange;                                           // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopMaxRange;                                            // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartMaxRangeAgainstRangedHostileStimulus;               // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopMaxRangeAgainstRangedHostileStimulus;                // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrafeBackwardRange;                                     // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrafeFowardRange;                                       // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IgnoreUnderNavLinkStartRange;                            // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PauseStrafeOnAnimation;                                  // 0x00EC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGHM[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 StrafeHoldInterval;                                      // 0x00F0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 StrafeHoldDeviation;                                     // 0x0100(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 StrafePauseInterval;                                     // 0x0110(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 StrafePauseDeviation;                                    // 0x0120(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ML1A[0x18];                                  // 0x0130(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_StrafeChained
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UAISkill_StrafeChained : public UAISkill_Strafe
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_StrafeDodge
	 * Size -> 0x0028 (FullSize[0x0170] - InheritedSize[0x0148])
	 */
	class UAISkill_StrafeDodge : public UAISkill_Strafe
	{
	public:
		struct FAIRoll                                             StartRoll;                                               // 0x0148(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSAP[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.AISkill_ThroughTorment
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UAISkill_ThroughTorment : public UAISkill
	{
	public:
		EAITerrorLevel                                             ToleratedTerrorPressure;                                 // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4N2[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_TickableBase
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTDecorator_TickableBase : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_CanRecoverMore
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTDecorator_CanRecoverMore : public UBTDecorator_TickableBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_CanRunSkill
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_CanRunSkill : public UBTDecorator_TickableBase
	{
	public:
		struct FGameplayTag                                        Context;                                                 // 0x0070(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JF5X[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_CanUnsafeAction
	 * Size -> 0x0098 (FullSize[0x0108] - InheritedSize[0x0070])
	 */
	class UBTDecorator_CanUnsafeAction : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBUnsafeActionID;                                        // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBUnsafeActionUsesItemAddons;                            // 0x00A0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBGoalInteractor;                                        // 0x00D0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      ExtraHealthyTime;                                        // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraInjuredTime;                                        // 0x0104(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_CompareInteractorCharge
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UBTDecorator_CompareInteractorCharge : public UBTDecorator_TickableBase
	{
	public:
		EArithmeticKeyOperation                                    ChargePercentQuery;                                      // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_478V[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChargePercentValue;                                      // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBInteractorObj;                                         // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_ContainsInteraction
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_ContainsInteraction : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBInteractorObj;                                         // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class FString>                                      InteractionIds;                                          // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_ExtCompareBBEntries
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UBTDecorator_ExtCompareBBEntries : public UBTDecorator_CompareBBEntries
	{
	public:
		float                                                      Tolerance;                                               // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2YK[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_ExtConeCheck
	 * Size -> 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
	 */
	class UBTDecorator_ExtConeCheck : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBConeOrigin;                                            // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBConeDirection;                                         // 0x00A0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBWith;                                                  // 0x00D0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 ConeHalfAngle;                                           // 0x0100(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_ExtIsAtLocation
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	class UBTDecorator_ExtIsAtLocation : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBLoc;                                                   // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       UseAlternativeLoc;                                       // 0x00A0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3NT[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 AcceptableRadius;                                        // 0x00A4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KL0R[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_ExtIsBBEntryOfClass
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UBTDecorator_ExtIsBBEntryOfClass : public UBTDecorator_IsBBEntryOfClass
	{
	public:
		bool                                                       InvertConditition;                                       // 0x00A8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKZQ[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_ExtTimeLimit
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UBTDecorator_ExtTimeLimit : public UBTDecorator_TimeLimit
	{
	public:
		unsigned char                                              UnknownData_Q00W[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 MaxTimeLimit;                                            // 0x0080(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBFilterKey;                                             // 0x0090(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EBasicKeyOperation                                         FilterOperation;                                         // 0x00C0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ERL[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_GameplayModifierValue
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTDecorator_GameplayModifierValue : public UBTDecorator_TickableBase
	{
	public:
		EArithmeticKeyOperation                                    ArithmeticOperation;                                     // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MI6A[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ModifierTag;                                             // 0x0074(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompareToValue;                                          // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EstimateWithSemantics;                                   // 0x0084(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFF5[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        SemanticTag;                                             // 0x0088(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsesItemAddons;                                          // 0x0094(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1OHT[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasActivatedBoonPerk
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasActivatedBoonPerk : public UBTDecorator_TickableBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasBetterItemValue
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasBetterItemValue : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBTargetObject;                                          // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      CollectUnderItemWeight;                                  // 0x00A0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollectOverWeightRatioDifference;                        // 0x00A4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasDynamicSubtree
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasDynamicSubtree : public UBTDecorator_TickableBase
	{
	public:
		struct FGameplayTag                                        InjectTag;                                               // 0x0070(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKX9[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasGoodHookEscapeChance
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasGoodHookEscapeChance : public UBTDecorator_TickableBase
	{
	public:
		float                                                      GoodHookEscapeProbability;                               // 0x0070(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTOB[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasItemAddon
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasItemAddon : public UBTDecorator_TickableBase
	{
	public:
		TArray<struct FAIHasItemAddonCondition>                    ItemAddOns;                                              // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasPerk
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasPerk : public UBTDecorator_TickableBase
	{
	public:
		EPlayerFilter                                              PlayerFilter;                                            // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9LU[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIHasPerkCondition>                         Perks;                                                   // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class ADBDPlayer*>                                  _players;                                                // 0x0088(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasPerkFlag
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasPerkFlag : public UBTDecorator_TickableBase
	{
	public:
		TArray<struct FGameplayTag>                                GameplayTags;                                            // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasStateTag
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasStateTag : public UBTDecorator_TickableBase
	{
	public:
		TArray<struct FGameplayTag>                                StateTags;                                               // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_HasStatusEffect
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_HasStatusEffect : public UBTDecorator_TickableBase
	{
	public:
		TArray<class FName>                                        StatusEffectIds;                                         // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsBeforeTimerExpiration
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsBeforeTimerExpiration : public UBTDecorator
	{
	public:
		struct FAITunableParameter                                 AdditionalTime;                                          // 0x0070(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBFilterKey;                                             // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsCamperState
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsCamperState : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBCamper;                                                // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		ECamperDamageState                                         damageState;                                             // 0x00A0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArithmeticKeyOperation                                    DamageOp;                                                // 0x00A1(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECamperImmobilizeState                                     ImmobilizeState;                                         // 0x00A2(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArithmeticKeyOperation                                    ImmobilizeOp;                                            // 0x00A3(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIsCamperStateOnFilter                                     OnFilter;                                                // 0x00A4(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArithmeticKeyOperation                                    OnOthersFilterOp;                                        // 0x00A5(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZ7R[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NbOnOthersCampers;                                       // 0x00A8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDRI[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsExitOpened
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsExitOpened : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBExitObj;                                               // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsGameState
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsGameState : public UBTDecorator_TickableBase
	{
	public:
		EArithmeticKeyOperation                                    RemainingObjectiveOp;                                    // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ET1I[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NbRemainingObjectives;                                   // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArithmeticKeyOperation                                    SurvivorsLeftOp;                                         // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSWH[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NbSurvivorsLeft;                                         // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsInteractionAvailable
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsInteractionAvailable : public UBTDecorator_TickableBase
	{
	public:
		TArray<class FString>                                      InteractionIds;                                          // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EIsInteractionAvailableOnFilter                            OnFilter;                                                // 0x0080(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M730[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBInteractor;                                            // 0x0088(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       FailIfAnotherOngoingInteraction;                         // 0x00B8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FailIfNotPerformingInteraction;                          // 0x00B9(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEET[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsInteractorAvailable
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsInteractorAvailable : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBInteractorObj;                                         // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsLocationInPressureZone
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsLocationInPressureZone : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBAtLocation;                                            // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsNearestThan
	 * Size -> 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsNearestThan : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBFrom;                                                  // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       CompareWithConstantDistance;                             // 0x00A0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHIB[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThanDistance;                                            // 0x00A4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBThan;                                                  // 0x00A8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      AddDistanceBuffer;                                       // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DJ7[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsObjectFocused
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsObjectFocused : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBObj;                                                   // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EDecoratorIsObjFocusedFilter                               Filter;                                                  // 0x00A0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9JO[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_IsTunable
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UBTDecorator_IsTunable : public UBTDecorator_TickableBase
	{
	public:
		ETunableComparison                                         Operator;                                                // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40KH[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 TunableValue;                                            // 0x0074(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CompareToValue;                                          // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_Random
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTDecorator_Random : public UBTDecorator_TickableBase
	{
	public:
		struct FAITunableParameter                                 PercentageRatio;                                         // 0x0070(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_RandomByDistance
	 * Size -> 0x00E0 (FullSize[0x0150] - InheritedSize[0x0070])
	 */
	class UBTDecorator_RandomByDistance : public UBTDecorator_TickableBase
	{
	public:
		struct FBlackboardKeySelector                              BBAroundLoc;                                             // 0x0070(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBRelativeFromTime;                                      // 0x00A0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBRelativeToTime;                                        // 0x00D0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 StartDistance;                                           // 0x0100(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 EndDistance;                                             // 0x0110(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PercentageAtStartDistance;                               // 0x0120(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PercentageAtEndDistance;                                 // 0x0130(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAIRandomByDistancePercentagesAtTime>        PercentagesAtTimes;                                      // 0x0140(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTDecorator_RandomByRetry
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UBTDecorator_RandomByRetry : public UBTDecorator_TickableBase
	{
	public:
		struct FAITunableParameter                                 BaseSuccessRate;                                         // 0x0070(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PerRetrySuccessRate;                                     // 0x0080(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ResetWhenValue;                                          // 0x0090(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDWY[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 ResetAfterTime;                                          // 0x0094(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ResetOnCeaseRelevant;                                    // 0x00A4(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8CC[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_AroundEQS
	 * Size -> 0x0070 (FullSize[0x0178] - InheritedSize[0x0108])
	 */
	class UBTService_AroundEQS : public UBTService_RunEQS
	{
	public:
		struct FBlackboardKeySelector                              BBAroundObj;                                             // 0x0108(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBAroundLocation;                                        // 0x0138(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      ValidLocationRefreshInterval;                            // 0x0168(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InvalidLocationRefreshInterval;                          // 0x016C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InvalidateLocationUnderTargetDistance;                   // 0x0170(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3X7Q[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_OnRelevantBase
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTService_OnRelevantBase : public UBTService
	{
	public:
		EAINodeRelevancyOptions                                    When;                                                    // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPOY[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_ClearBBEntry
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UBTService_ClearBBEntry : public UBTService_OnRelevantBase
	{
	public:
		struct FBlackboardKeySelector                              BBToResetKey;                                            // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_CopyBBEntry
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UBTService_CopyBBEntry : public UBTService_OnRelevantBase
	{
	public:
		struct FBlackboardKeySelector                              BBFrom;                                                  // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBTo;                                                    // 0x00B0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       CopyOnlyValidKeyValue;                                   // 0x00E0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLCN[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_Find_Character
	 * Size -> 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
	 */
	class UBTService_Find_Character : public UBTService
	{
	public:
		EPawnType                                                  CharacterFilter;                                         // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKillerAbilities                                           killerAbility;                                           // 0x0079(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJ8Q[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBCharacterLocation;                                     // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class ADBDAIBTController*                                  _aiOwner;                                                // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BBDP[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractable
	 * Size -> 0x0168 (FullSize[0x01E0] - InheritedSize[0x0078])
	 */
	class UBTService_FindInteractable : public UBTService
	{
	public:
		unsigned char                                              UnknownData_B6OR[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBSearchAround;                                          // 0x0088(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      SearchInterval;                                          // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchHeightAmplifierActivationHeight;                   // 0x00BC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchHeightAmplifier;                                   // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47IJ[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RegisterAsDiscoveredWhenFound;                           // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAQG[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBOnlyFromActor;                                         // 0x00D8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       RejectIfInPressureZone;                                  // 0x0108(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1364[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RejectCooldownContextName;                               // 0x010C(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AbandonIfInChase;                                        // 0x0118(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfFocusedByOther;                                  // 0x0119(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfNotFocusedBySelf;                                // 0x011A(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreFocusFilterInEndgameCollapse;                      // 0x011B(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfNotInSight;                                      // 0x011C(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreSightFilterIfDiscovered;                           // 0x011D(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreSightFilterIfInRange;                              // 0x011E(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGXP[0x1];                                   // 0x011F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RejectAboveRange;                                        // 0x0120(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreRangeFilterIfDiscovered;                           // 0x0124(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreRangeFilterIfInSight;                              // 0x0125(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEFP[0x2];                                   // 0x0126(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBInteractableLocation;                                  // 0x0128(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBInteractableObj;                                       // 0x0158(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalBasicWeight;                                         // 0x0188(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalWeightMaxDistance;                                   // 0x0198(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalWeightAtMinDistance;                                 // 0x01A8(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ProjectGoalLocationToNavigationExtent;                   // 0x01B8(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IEY[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AInteractable*                                       _goalInteractable;                                       // 0x01C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADBDAIBTController*                                  _aiOwner;                                                // 0x01D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IVQP[0x8];                                   // 0x01D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractable_Totem
	 * Size -> 0x0030 (FullSize[0x0210] - InheritedSize[0x01E0])
	 */
	class UBTService_FindInteractable_Totem : public UBTService_FindInteractable
	{
	public:
		unsigned char                                              UnknownData_2WIN[0x30];                                  // 0x01E0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor
	 * Size -> 0x0238 (FullSize[0x02B0] - InheritedSize[0x0078])
	 */
	class UBTService_FindInteractor : public UBTService
	{
	public:
		unsigned char                                              UnknownData_TFWP[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBSearchAround;                                          // 0x0088(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      SearchInterval;                                          // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchHeightAmplifierActivationHeight;                   // 0x00BC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchHeightAmplifier;                                   // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TD2[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RegisterAsDiscoveredWhenFound;                           // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W309[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBOnlyFromActor;                                         // 0x00D8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class FString>                                      OnlyWithInteractorIDs;                                   // 0x0108(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      RejectIfTerrorIsCloserThanSelfMargin;                    // 0x0118(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RejectIfInTerrorRadius;                                  // 0x011C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfInPressureZone;                                  // 0x0120(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseLastKnownPositionForTerrorRejects;                    // 0x0121(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfWasInCooldownAndFocusedOnAnotherObject;          // 0x0122(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLVY[0x1];                                   // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RejectCooldownContextName;                               // 0x0124(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfAnySiblingInteractorHasCooldown;                 // 0x0130(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AbandonIfInChase;                                        // 0x0131(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfFocusedByOther;                                  // 0x0132(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfNotFocusedBySelf;                                // 0x0133(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreFocusFilterInEndgameCollapse;                      // 0x0134(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RejectIfNotInSight;                                      // 0x0135(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreSightFilterIfDiscovered;                           // 0x0136(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreSightFilterIfInRange;                              // 0x0137(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RejectAboveRange;                                        // 0x0138(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreRangeFilterIfDiscovered;                           // 0x013C(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreRangeFilterIfInSight;                              // 0x013D(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLZG[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBInteractLocation;                                      // 0x0140(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBInteractorObj;                                         // 0x0170(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 CantInterruptGoalInteractionUnderRemainingTime;          // 0x01A0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalBasicWeight;                                         // 0x01B0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalWeightMaxDistance;                                   // 0x01C0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalWeightAtMinDistance;                                 // 0x01D0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalWeightAtEndgameStart;                                // 0x01E0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalWeightAtEndgameEnd;                                  // 0x01F0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 GoalWeightBonusWhileInteracting;                         // 0x0200(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsUnsafeAction;                                          // 0x0210(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FH9I[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBUnsafeActionID;                                        // 0x0218(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBUnsafeActionUsesItemAddons;                            // 0x0248(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FString                                              UnsafeInteractionID;                                     // 0x0278(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnsafeActionUsesItemAddons;                              // 0x0288(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8X63[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ProjectGoalLocationToNavigationExtent;                   // 0x028C(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractor*                                         _goalInteractor;                                         // 0x0298(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADBDAIBTController*                                  _aiOwner;                                                // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YPPT[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Camper
	 * Size -> 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Camper : public UBTService_FindInteractor
	{
	public:
		EFindInteractableCamperFilter                              StatusFilter;                                            // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BR70[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 AllyDangerStateGoalWeight;                               // 0x02B4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 IncapacitatedAlliesGoalWeight;                           // 0x02C4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L82N[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Exit
	 * Size -> 0x0068 (FullSize[0x0318] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Exit : public UBTService_FindInteractor
	{
	public:
		EFindInteractorExitOptions                                 Filter;                                                  // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFindInteractorOpenConditions                              OpenCondition;                                           // 0x02B1(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AN3O[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBFinalExitLocation;                                     // 0x02B8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      ClosedDoorOffset;                                        // 0x02E8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenDoorOffset;                                          // 0x02EC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AbortOnBlockedExitSwitch;                                // 0x02F0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXYW[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 OpenedExitGoalWeight;                                    // 0x02F4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 HatchBonusGoalWeight;                                    // 0x0304(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NVD[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Generator
	 * Size -> 0x0058 (FullSize[0x0308] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Generator : public UBTService_FindInteractor
	{
	public:
		EFindInteractableGeneratorStatusFilter                     StatusFilter;                                            // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZRZ[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 MinRepairRatioFilter;                                    // 0x02B4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       UsePerceptionToGetRepairRatio;                           // 0x02C4(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4V1[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 MaxRepairGoalWeight;                                     // 0x02C8(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 InfectedStateGoalWeight;                                 // 0x02D8(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 HexRuinGoalWeight;                                       // 0x02E8(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                HexRuinPerkId;                                           // 0x02F8(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN2Y[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Locker
	 * Size -> 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Locker : public UBTService_FindInteractor
	{
	public:
		EFindInteractableLockerStatusFilter                        StatusFilter;                                            // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LockerNeedsToBeOpenable;                                 // 0x02B1(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_263Z[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInLockerPerk>                               PerksToRunInLocker;                                      // 0x02B8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TK9Z[0x10];                                  // 0x02C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_MeatHook
	 * Size -> 0x00D8 (FullSize[0x0388] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_MeatHook : public UBTService_FindInteractor
	{
	public:
		EFindInteractableMeatHookStatus                            StatusFilter;                                            // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CA9[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 AllyDangerStateGoalWeight;                               // 0x02B4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 BotDangerStateGoalWeight;                                // 0x02C4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 BotInjuredStateGoalWeight;                               // 0x02D4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 HumanAllyHookedGoalWeight;                               // 0x02E4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MaxHookTimeGoalWeight;                                   // 0x02F4(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 IncapacitatedAlliesGoalWeight;                           // 0x0304(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 IdealKillerDistanceFromHook;                             // 0x0314(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MaxKillerProximityWeight;                                // 0x0324(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 SabotageKillerDistanceToHookScore;                       // 0x0334(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 SabotageKillerSpeedToHookScore;                          // 0x0344(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 SabotageHookValidTargetTime;                             // 0x0354(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		float                                                      KillerTargetUpdateInterval;                              // 0x0364(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnsafeSabotageHealthyMarginTime;                         // 0x0368(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnsafeSabotageInjuredMarginTime;                         // 0x036C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NoToolboxInteractionID;                                  // 0x0370(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UK1Q[0x8];                                   // 0x0380(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Pallet
	 * Size -> 0x0130 (FullSize[0x03E0] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Pallet : public UBTService_FindInteractor
	{
	public:
		struct FBlackboardKeySelector                              BBPickSideRelativelyFrom;                                // 0x02B0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EFindInteractablePalletIntentions                          IntentionFilter;                                         // 0x02E0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUBF[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RaisePalletPerkId;                                       // 0x02E4(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 BrokenGeneratorGoalMaxDistance;                          // 0x02F0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 BrokenGeneratorGoalMaxDistanceWeight;                    // 0x0300(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 SpawnInSurvivorLOSPenalty;                               // 0x0310(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 SpawnNearSurvivorMinDistanceSquared;                     // 0x0320(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 SpawnNearSurvivorPenalty;                                // 0x0330(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PlacedNearGamePalletMinDistanceSquared;                  // 0x0340(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PlacedNearGamePalletPenalty;                             // 0x0350(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 ConvincingFactorTolerance;                               // 0x0360(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ExtraHealthySurvivorActionTime;                          // 0x0370(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraInjuredSurvivorActionTime;                          // 0x0374(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForcePalletRange;                                        // 0x0378(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86K3[0x64];                                  // 0x037C(0x0064) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Searchable
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Searchable : public UBTService_FindInteractor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Totem
	 * Size -> 0x0050 (FullSize[0x0300] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Totem : public UBTService_FindInteractor
	{
	public:
		struct FAITunableParameter                                 InactiveGoalWeightMaxDistance;                           // 0x02B0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 InactiveGoalWeightAtMinDistance;                         // 0x02C0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAICleansePerkCondition>                     CleansePerks;                                            // 0x02D0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       SearchUsingBoundPerks;                                   // 0x02E0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GXD[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BoundPerkIds;                                            // 0x02E8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       OnlyWhenInjured;                                         // 0x02F8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH6G[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_Trap
	 * Size -> 0x0038 (FullSize[0x02E8] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_Trap : public UBTService_FindInteractor
	{
	public:
		struct FAITunableParameter                                 HelpDestroyDemoPortal;                                   // 0x02B0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAIRoll                                             SeeStandardTrapRoll;                                     // 0x02C0(0x0024) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TrapGroundLocationOffset;                                // 0x02E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindInteractor_WishList
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class UBTService_FindInteractor_WishList : public UBTService_FindInteractor
	{
	public:
		struct FGameplayTag                                        WishListTag;                                             // 0x02B0(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8V87[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_FindObject
	 * Size -> 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
	 */
	class UBTService_FindObject : public UBTService
	{
	public:
		EKillerAbilities                                           killerAbility;                                           // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITN3[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBObjectLocation;                                        // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class ADBDAIBTController*                                  _aiOwner;                                                // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASlasherPlayer*                                      _killer;                                                 // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_Flee
	 * Size -> 0x00C0 (FullSize[0x0138] - InheritedSize[0x0078])
	 */
	class UBTService_Flee : public UBTService
	{
	public:
		unsigned char                                              UnknownData_I8R4[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBFleePath;                                              // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBShouldFallPallet;                                      // 0x00B0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class UClass*                                              PathStrategySelectorClass;                               // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OnEndObjectInFocusCooldown;                              // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 ShouldFallPalletUnderHostileRange;                       // 0x00EC(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ClearFleePathBBKeyDelay;                                 // 0x00FC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4JD[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavMovePath*                                        _activePath;                                             // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     _lostFocusedObjects;                                     // 0x0118(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UPathStrategySelector*                               _strategySelector;                                       // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J272[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_GetPinLocation
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UBTService_GetPinLocation : public UBTService_OnRelevantBase
	{
	public:
		struct FBlackboardKeySelector                              BBToSetKey;                                              // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PinTag;                                                  // 0x00B0(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRK4[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_GetPinObject
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UBTService_GetPinObject : public UBTService_OnRelevantBase
	{
	public:
		struct FBlackboardKeySelector                              BBToSetKey;                                              // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PinTag;                                                  // 0x00B0(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8ZN[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_GoalCoordinator
	 * Size -> 0x0068 (FullSize[0x00E0] - InheritedSize[0x0078])
	 */
	class UBTService_GoalCoordinator : public UBTService
	{
	public:
		struct FAITunableParameter                                 GoalChangeWeightBuffer;                                  // 0x0078(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POQ3[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UObject*, struct FAIGoalWeightContainer>        _managedGoals;                                           // 0x0090(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_InputAtTiming
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UBTService_InputAtTiming : public UBTService_OnRelevantBase
	{
	public:
		EPawnInputPressTypes                                       inputType;                                               // 0x0080(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZ5C[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_Patrol
	 * Size -> 0x00E0 (FullSize[0x0158] - InheritedSize[0x0078])
	 */
	class UBTService_Patrol : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BBFilterKey;                                             // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EBasicKeyOperation                                         FilterOperation;                                         // 0x00A8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V12Q[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NavMeshFindLocationExtents;                              // 0x00AC(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPatrolInvestigationDistance;                          // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PatrolPointsValidityCheckInterval;                       // 0x00BC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBPatrolPointOwner;                                      // 0x00C0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBPatrolLocation;                                        // 0x00F0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBGoToNextPatrolLocation;                                // 0x0120(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_622W[0x8];                                   // 0x0150(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_Patrol_Discovery
	 * Size -> 0x0010 (FullSize[0x0168] - InheritedSize[0x0158])
	 */
	class UBTService_Patrol_Discovery : public UBTService_Patrol
	{
	public:
		bool                                                       RejectPatrolPointIfInPressureZone;                       // 0x0158(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LK2[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxFindRandomLocationOnTileAttempts;                     // 0x015C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FirstFindOnNbNeighborTiles;                              // 0x0160(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC3Q[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_Patrol_PointOfInterest
	 * Size -> 0x0040 (FullSize[0x0198] - InheritedSize[0x0158])
	 */
	class UBTService_Patrol_PointOfInterest : public UBTService_Patrol
	{
	public:
		float                                                      OnEnterPatrolRefreshPointsDelay;                         // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZU24[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBMoveAroundPatrolLocation;                              // 0x0160(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      MoveAroundPatrolPointAboveStimulusStrength;              // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EV4D[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_PushObjectFocus
	 * Size -> 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
	 */
	class UBTService_PushObjectFocus : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BBFocusObj;                                              // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_RunSkills
	 * Size -> 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
	 */
	class UBTService_RunSkills : public UBTService
	{
	public:
		struct FGameplayTag                                        Context;                                                 // 0x0078(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQCU[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBFilterKey;                                             // 0x0088(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EBasicKeyOperation                                         FilterOperation;                                         // 0x00B8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JU4A[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_SetBBEntry
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UBTService_SetBBEntry : public UBTService_OnRelevantBase
	{
	public:
		struct FBlackboardKeySelector                              BBToSetKey;                                              // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FString                                              ToSetValue;                                              // 0x00B0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 RandomSetChance;                                         // 0x00C0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_SetBBEntryTime
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UBTService_SetBBEntryTime : public UBTService_OnRelevantBase
	{
	public:
		struct FBlackboardKeySelector                              BBToSetKey;                                              // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_SetFocusCooldown
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UBTService_SetFocusCooldown : public UBTService_OnRelevantBase
	{
	public:
		struct FBlackboardKeySelector                              BBOnObject;                                              // 0x0080(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FName                                                ContextName;                                             // 0x00B0(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InfiniteDuration;                                        // 0x00BC(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQO6[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FJ4[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_SetMovementMode
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTService_SetMovementMode : public UBTService
	{
	public:
		ECharacterMovementTypes                                    OnEnterMovementMode;                                     // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterMovementTypes                                    OnExitMovementMode;                                      // 0x0079(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H9X[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_SetPathSpeedFactor
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTService_SetPathSpeedFactor : public UBTService
	{
	public:
		float                                                      SpeedFactor;                                             // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PKD[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_SetTagCooldown
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UBTService_SetTagCooldown : public UBTService_OnRelevantBase
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0080(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownDuration;                                        // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0L5[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_StateMonitor
	 * Size -> 0x0060 (FullSize[0x00D8] - InheritedSize[0x0078])
	 */
	class UBTService_StateMonitor : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BBIsIntroCompleted;                                      // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBDifficultyLevel;                                       // 0x00A8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_StateMonitor_Camper
	 * Size -> 0x03C8 (FullSize[0x04A0] - InheritedSize[0x00D8])
	 */
	class UBTService_StateMonitor_Camper : public UBTService_StateMonitor
	{
	public:
		struct FBlackboardKeySelector                              BBDamageState;                                           // 0x00D8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBImmoblizedState;                                       // 0x0108(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBGuidedState;                                           // 0x0138(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBEscapedState;                                          // 0x0168(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsInInjuredBleedout;                                   // 0x0198(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBDyingTimerPercentLeft;                                 // 0x01C8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBItemType;                                              // 0x01F8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBItemCharge;                                            // 0x0228(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsChased;                                              // 0x0258(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBWasInStimulusSight;                                    // 0x0288(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBWasBeingAimedAt;                                       // 0x02B8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsBeingAimedAt;                                        // 0x02E8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsBeingAttacked;                                       // 0x0318(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsChained;                                             // 0x0348(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsInPressureZone;                                      // 0x0378(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsInActivatedRBT;                                      // 0x03A8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsInDeathTimer;                                        // 0x03D8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      DeathTimerEndGamePrecent;                                // 0x0408(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W3G5[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBHasCrowAttached;                                       // 0x0410(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBLastTrapSideStepExpirationTime;                        // 0x0440(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBLastAskedToMoveTime;                                   // 0x0470(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_StateMonitor_Slasher
	 * Size -> 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
	 */
	class UBTService_StateMonitor_Slasher : public UBTService_StateMonitor
	{
	public:
		struct FBlackboardKeySelector                              BBIsCarrying;                                            // 0x00D8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_StimuliMonitor
	 * Size -> 0x0168 (FullSize[0x01E0] - InheritedSize[0x0078])
	 */
	class UBTService_StimuliMonitor : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BBStimulusOriginLocation;                                // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBStimulusNavLocation;                                   // 0x00A8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBStimulusActor;                                         // 0x00D8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBStimulusInSight;                                       // 0x0108(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBStimulusWasInSight;                                    // 0x0138(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      StimulusWasInSightDuration;                              // 0x0168(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 StimuliRefreshInterval;                                  // 0x016C(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ExtrapolateLoseSightDuration;                            // 0x017C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NavMeshFindLocationExtents;                              // 0x0180(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeenFriendlyStimuliExpiryInSeconds;                      // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class AActor*, float>                                 _seenFriendlyStimuli;                                    // 0x0190(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_StimuliMonitor_Camper
	 * Size -> 0x0068 (FullSize[0x0248] - InheritedSize[0x01E0])
	 */
	class UBTService_StimuliMonitor_Camper : public UBTService_StimuliMonitor
	{
	public:
		struct FBlackboardKeySelector                              BBTerrorPressure;                                        // 0x01E0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsFleeing;                                             // 0x0210(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      LastValidTerrorRadiusStimulusMemoryLifeTime;             // 0x0240(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IgnoreNonKillerStimulusWhileInSprintDistanceSquared;     // 0x0244(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTService_StimuliMonitor_Slasher
	 * Size -> 0x0120 (FullSize[0x0300] - InheritedSize[0x01E0])
	 */
	class UBTService_StimuliMonitor_Slasher : public UBTService_StimuliMonitor
	{
	public:
		struct FBlackboardKeySelector                              BBInvestigateStimulusLocation;                           // 0x01E0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBInvestigateStimulusActor;                              // 0x0210(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBInBehaviorInvestigationStep;                           // 0x0240(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIsBlind;                                               // 0x0270(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBChasedActor;                                           // 0x02A0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 UseNextStimulusInvestigationAfterChaseDelay;             // 0x02D0(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IgnorePreviousChasedStimulusActorDelay;                  // 0x02E0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultStimulusToInvestigateMaxAge;                      // 0x02E4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KOStimulusToInvestigateMaxAge;                           // 0x02E8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NextStimulusInvestigationMinRange;                       // 0x02EC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CantSeeOverBlindRatio;                                   // 0x02F0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FavorizeStandingTargetInRange;                           // 0x02F4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FavorizeStandingTargetOutRange;                          // 0x02F8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_843U[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_ClearBBEntry
	 * Size -> 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
	 */
	class UBTTask_ClearBBEntry : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BBToResetKey;                                            // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_CopyBBEntry
	 * Size -> 0x0068 (FullSize[0x00E0] - InheritedSize[0x0078])
	 */
	class UBTTask_CopyBBEntry : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BBFrom;                                                  // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBTo;                                                    // 0x00A8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       CopyOnlyValidKeyValue;                                   // 0x00D8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3E48[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_ExtMoveDirecltyToward
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UBTTask_ExtMoveDirecltyToward : public UBTTask_MoveDirectlyToward
	{
	public:
		ECharacterMovementTypes                                    MovementMode;                                            // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9Y2[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_ExtMoveTo
	 * Size -> 0x0188 (FullSize[0x0248] - InheritedSize[0x00C0])
	 */
	class UBTTask_ExtMoveTo : public UBTTask_MoveTo
	{
	public:
		struct FBlackboardKeySelector                              BBStrafeFocus;                                           // 0x00C0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EExtMoveToStrafeFocusOptions                               StrafeFocus;                                             // 0x00F0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StrafeFocusPitch;                                        // 0x00F1(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQDY[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrafeNearFocusModeUnderDistance;                        // 0x00F4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntermittentOnStrafeFocusInterval;                       // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntermittentOnStrafeFocusDeviation;                      // 0x00FC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntermittentOffStrafeFocusInterval;                      // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntermittentOffStrafeFocusDeviation;                     // 0x0104(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndMoveStrafeFocusPrecisionAngle;                        // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StrafeFocusOwnerOnComponentBBKey;                        // 0x010C(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterMovementTypes                                    ToGoalMovementMode;                                      // 0x010D(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterMovementTypes                                    NearGoalMovementMode;                                    // 0x010E(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJ99[0x1];                                   // 0x010F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NearGoalModeUnderDistance;                               // 0x0110(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalMoveUnderNavLinkDistance;                          // 0x0114(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBIgnoreGroupAvoidance;                                  // 0x0118(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      BlockedCheckInterval;                                    // 0x0148(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlockedContinueTimes;                                    // 0x014C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockedSpeedPercent;                                     // 0x0150(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxTriesToRepathAroundBlocker;                           // 0x0154(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKH1[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovementModeNearActor>                      MovementModesNearActors;                                 // 0x0158(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      RepathInterval;                                          // 0x0168(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseAccelerationForPaths;                                 // 0x016C(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEX2[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathReachedPointRadius;                                  // 0x0170(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UseContextualAcceptableRadius;                           // 0x0174(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FindRelevantDangerInterval;                              // 0x0180(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateTraverseStatesInterval;                            // 0x0184(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FailTaskOnUndodgeableDangerObject;                       // 0x0188(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreDangerObjects;                                     // 0x0189(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5U3[0x16];                                  // 0x018A(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActor*, bool>                                  _seenActorsMap;                                          // 0x01A0(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CUU0[0x58];                                  // 0x01F0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_ExtWait
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UBTTask_ExtWait : public UBTTask_Wait
	{
	public:
		struct FAITunableParameter                                 WaitTimeInterval;                                        // 0x0080(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 WaitRandomDeviation;                                     // 0x0090(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_FleeMoveTo
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class UBTTask_FleeMoveTo : public UBTTask_ExtMoveTo
	{
	public:
		float                                                      InScrambleMovementMinDistance;                           // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutScrambleMovementMinDistance;                          // 0x024C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InScrambleMovementInterval;                              // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopScrambleMovementInterval;                            // 0x0254(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopScrambleMovementRandomDeviation;                     // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchWithinLastEvadeLoopPointRadius;                    // 0x025C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_InputPress
	 * Size -> 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
	 */
	class UBTTask_InputPress : public UBTTaskNode
	{
	public:
		EPawnInputPressTypes                                       Input;                                                   // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETaskInputPressModes                                       InputMode;                                               // 0x0079(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8X8R[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 InputPressLoopInterval;                                  // 0x007C(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       LockInput;                                               // 0x008C(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22MO[0xB];                                   // 0x008D(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_Interact
	 * Size -> 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
	 */
	class UBTTask_Interact : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BBInteractorObj;                                         // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EPawnInputPressTypes                                       Input;                                                   // 0x00A8(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAAL[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OnFailFocusCooldownDuration;                             // 0x00AC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PropagateCooldownOnInteractable;                         // 0x00B0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EUK[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FailStartInteractTimeLimit;                              // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_RotateToBBInteractor
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UBTTask_RotateToBBInteractor : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              BBInteractorObj;                                         // 0x00B0(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class FString>                                      InteractionIds;                                          // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_RunSkills
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UBTTask_RunSkills : public UBTTaskNode
	{
	public:
		struct FGameplayTag                                        Context;                                                 // 0x0078(0x000C) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIQJ[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_SetBBEntry
	 * Size -> 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
	 */
	class UBTTask_SetBBEntry : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BBToSetKey;                                              // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FString                                              ToSetValue;                                              // 0x00A8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_SetBBEntryTime
	 * Size -> 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
	 */
	class UBTTask_SetBBEntryTime : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BBToSetKey;                                              // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_SetFleeLoopCooldown
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_SetFleeLoopCooldown : public UBTTaskNode
	{
	public:
		float                                                      Duration;                                                // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0AK[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_SetFocusCooldown
	 * Size -> 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
	 */
	class UBTTask_SetFocusCooldown : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BBOnObject;                                              // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FName                                                ContextName;                                             // 0x00A8(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InfiniteDuration;                                        // 0x00B4(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1IW[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUM9[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_SetIsChased
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_SetIsChased : public UBTTaskNode
	{
	public:
		bool                                                       ToSetValue;                                              // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3MT[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_SetMovementMode
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_SetMovementMode : public UBTTaskNode
	{
	public:
		ECharacterMovementTypes                                    MovementMode;                                            // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71Y9[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_SetRandomNavPoint
	 * Size -> 0x0078 (FullSize[0x00F0] - InheritedSize[0x0078])
	 */
	class UBTTask_SetRandomNavPoint : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BBFromLocation;                                          // 0x0078(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBToLocation;                                            // 0x00A8(0x0030) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      MinAroundRadius;                                         // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAroundRadius;                                         // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNbAttempts;                                           // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSafeNbAttempts;                                       // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FilterClass;                                             // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.BTTask_StealthMoveTo
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class UBTTask_StealthMoveTo : public UBTTask_ExtMoveTo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDAIBTController
	 * Size -> 0x0138 (FullSize[0x0720] - InheritedSize[0x05E8])
	 */
	class ADBDAIBTController : public ADBDAIController
	{
	public:
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x05E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAISkill*>                                    BaseSkills;                                              // 0x05F0(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UAISkill*>                                    RoleSkills;                                              // 0x0600(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FAISkillPerk>                                PerkSkills;                                              // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       ListenToAttackEvents;                                    // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SC9P[0x7];                                   // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDAIPerceptionComponent*                           _dbdPerception;                                          // 0x0628(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDBlackboardComponent*                             _dbdBlackboard;                                          // 0x0630(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDPathFollowingComponent*                          _dbdPathFollowing;                                       // 0x0638(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDBehaviorTreeComponent*                           _dbdBehaviorTree;                                        // 0x0640(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDNavMeshExplorerComponent*                        _navMeshExplorer;                                        // 0x0648(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDAIStateComponent*                                _aiState;                                                // 0x0650(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDAIGoalComponent*                                 _aiGoal;                                                 // 0x0658(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_73I3[0x8];                                   // 0x0660(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, class UBehaviorTree*>            _setDynamicSubtrees;                                     // 0x0668(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<class UAISkill*>                                    _aiSkills;                                               // 0x06B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y8L2[0x58];                                  // 0x06C8(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnPawnBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void Authority_FinishedPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDAIBTUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDBDAIBTUtilities : public UDBDAIUtilities
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDAIGoalComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class UDBDAIGoalComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_A8HM[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UObject*, struct FAIGoal>                       _activeGoals;                                            // 0x00C0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class UObject*, struct FAIGoalWeightContainer>        _foundWeightedGoals;                                     // 0x0110(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDAIPerceptionComponent
	 * Size -> 0x01E8 (FullSize[0x0380] - InheritedSize[0x0198])
	 */
	class UDBDAIPerceptionComponent : public UAIPerceptionComponent
	{
	public:
		unsigned char                                              UnknownData_TPTO[0x20];                                  // 0x0198(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAttackType>                                        RangedAttackTypes;                                       // 0x01B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<EKillerAbilities>                                   RangedKillerAbilities;                                   // 0x01C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UClass*, class UObject*>                        _objOverridingSenses;                                    // 0x01D8(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<class UAISenseConfig*>                              _originalSenseConfigs;                                   // 0x0228(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FAIDetectedStimulus>                         _detectedHostileStimuli;                                 // 0x0238(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FAIDetectedStimulus                                 _bestDetectedHostileStimulus;                            // 0x0248(0x005C) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FAIDetectedStimulus                                 _lastBestDetectedHostileStimulusInMemory;                // 0x02A4(0x005C) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z0JK[0x60];                                  // 0x0300(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 _activePhaseWalkingNoiseMaxRange;                        // 0x0360(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      ThreatDividerForNonControlledActor;                      // 0x0370(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HighThreatDistanceForNonControlledActor;                 // 0x0374(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TerrorDistanceMultiplierForNonControlledActor;           // 0x0378(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V1S1[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDAIStateComponent
	 * Size -> 0x0258 (FullSize[0x0310] - InheritedSize[0x00B8])
	 */
	class UDBDAIStateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_B8T7[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UnsafeStateAtHookedCount;                                // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DireStateAtHookedCount;                                  // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MidObjectiveStateProgressionRatio;                       // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8M7[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EAIObjectiveState, struct FDangerStateGameStateMapContainer> GameStateTable;                                          // 0x00D0(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EAIDifficultyLevel, struct FGameStatePressureZoneLevelMapContainer> PressureZoneLevelTable;                                  // 0x0120(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EAIDifficultyLevel, float>                            MinRadiusPressureZoneHabituation;                        // 0x0170(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EAIPressureZoneLevel, float>                          PressureZoneHighToLowRangeLerpRatios;                    // 0x01C0(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      DefaultChasedPhaseOutDuration;                           // 0x0210(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InjuredChasedPhaseOutDuration;                           // 0x0214(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultBeingAimedAtPhaseOutDuration;                     // 0x0218(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InjuredBeingAimedAtPhaseOutDuration;                     // 0x021C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StimulusWasInSightDuration;                              // 0x0220(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoSFoVToStimulusCheckPeriod;                             // 0x0224(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoSToStimulusValidDuration;                              // 0x0228(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoVToStimulusValidDuration;                              // 0x022C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockingSurvivorLocationLifetime;                        // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockingSurvivorLocationAcceptableDistSq;                // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumBlockingSurvivorLocationDist;                     // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDNP[0xD4];                                  // 0x023C(0x00D4) MISSED OFFSET (PADDING)

	public:
		void OnUniqueGameplayEvent(EDBDScoreTypes EventType, float Amount, class AActor* Instigator, class AActor* Target);
		void OnStartAimingEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnSpecialAttackEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDBehaviorTreeComponent
	 * Size -> 0x0068 (FullSize[0x0300] - InheritedSize[0x0298])
	 */
	class UDBDBehaviorTreeComponent : public UBehaviorTreeComponent
	{
	public:
		unsigned char                                              UnknownData_3VLV[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FRelevantNodeMemory>            _lastRelevantNodeMemories;                               // 0x02A0(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     _createdObjects;                                         // 0x02F0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDBlackboardComponent
	 * Size -> 0x02E0 (FullSize[0x04A0] - InheritedSize[0x01C0])
	 */
	class UDBDBlackboardComponent : public UBlackboardComponent
	{
	public:
		unsigned char                                              UnknownData_R00C[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UObject*, struct FMindFocusObjectEntry>         _mindFocusEntries;                                       // 0x01D0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, struct FVector>                  _pinLocations;                                           // 0x0220(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, class UObject*>                  _pinObjects;                                             // 0x0270(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class UObject*, float>                                _lostMindFocusEntries;                                   // 0x02C0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, struct FWeightedWishedObjectMapContainer> _objectWishListMap;                                      // 0x0310(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              _discoveredObjects[0x50];                                // 0x0360(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _intentionValidators[0x50];                              // 0x03B0(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class AActor*, struct FDistanceToTargetData>          _killerToTargetDistances;                                // 0x0400(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              _convincingDreamPallets[0x50];                           // 0x0450(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDNavLinkCustomComponent
	 * Size -> 0x0070 (FullSize[0x0208] - InheritedSize[0x0198])
	 */
	class UDBDNavLinkCustomComponent : public UNavLinkCustomComponent
	{
	public:
		struct FVector                                             BaseLinkRelativeStart;                                   // 0x0198(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaseLinkRelativeEnd;                                     // 0x01A4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavLinkDirection                                          BaseLinkDirection;                                       // 0x01B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSNX[0x3];                                   // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoSnapSmartLinkPointsUpHeight;                         // 0x01B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoSnapSmartLinkPointsDownHeight;                       // 0x01B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          AutoSnapCollisionChannel;                                // 0x01BC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YYD[0x3];                                   // 0x01BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoSmartLinkDirectionMaxHeight;                         // 0x01C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableSmartLinkOnPathObstruction;                       // 0x01C4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGIZ[0x3];                                   // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathObstructionTestDistance;                             // 0x01C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathObstructionTestShapeRadius;                          // 0x01CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathObstructionTestHeightOffset;                         // 0x01D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          PathObstructionCollisionChannel;                         // 0x01D4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableOtherSmartLinkInProximityOnEnable;                // 0x01D5(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableOtherSmartLinkInProximityOnDisable;                // 0x01D6(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QW8X[0x1];                                   // 0x01D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OtherSmartLinkInProximitySearchDistance;                 // 0x01D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowDebugInfo;                                           // 0x01DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XON0[0x1B];                                  // 0x01DD(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ANavLinkProxy*>                               _navLinkProxyInProximity;                                // 0x01F8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDNavMeshExplorerComponent
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UDBDNavMeshExplorerComponent : public UActorComponent
	{
	public:
		float                                                      ExploreAtAgentMoveDistance;                              // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExploreAtInterval;                                       // 0x00BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 ExplorationBoxHalfExtent;                                // 0x00C0(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    FullyAutoExploredAtGameTime;                             // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DK2O[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDPathFollowingComponent*                          _pathFollowingComponent;                                 // 0x00D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CUCS[0x60];                                  // 0x00E0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.DBDPathFollowingComponent
	 * Size -> 0x0230 (FullSize[0x0488] - InheritedSize[0x0258])
	 */
	class UDBDPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_NGF0[0x10];                                  // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnblockPathDeviationRadius;                              // 0x0268(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnblockPathTimeLimit;                                    // 0x026C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnblockPathReachDistance;                                // 0x0270(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GINZ[0x124];                                 // 0x0274(0x0124) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _onNavLinkProxies[0x50];                                 // 0x0398(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_AQAX[0xA0];                                  // 0x03E8(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_CenterOfMap
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_CenterOfMap : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_EscapeDoors
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_EscapeDoors : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_Generators
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_Generators : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_Hooks
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_Hooks : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_Lockers
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_Lockers : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_PinActor
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_PinActor : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_PinLocation
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_PinLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryContext_TerrorRadius
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_TerrorRadius : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryTest_IsInDangerObjectRange
	 * Size -> 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
	 */
	class UEnvQueryTest_IsInDangerObjectRange : public UEnvQueryTest
	{
	public:
		class UClass*                                              QuerierContext;                                          // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            Invert;                                                  // 0x0240(0x0040) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryTest_IsValidDestination
	 * Size -> 0x0098 (FullSize[0x02D0] - InheritedSize[0x0238])
	 */
	class UEnvQueryTest_IsValidDestination : public UEnvQueryTest
	{
	public:
		class UClass*                                              QuerierContext;                                          // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            Invert;                                                  // 0x0240(0x0040) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            ExcludeEscapeZoneIfReverseBearTrapIsActivated;           // 0x0280(0x0040) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VYZ[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.EnvQueryTest_LineOfSight
	 * Size -> 0x00E8 (FullSize[0x0320] - InheritedSize[0x0238])
	 */
	class UEnvQueryTest_LineOfSight : public UEnvQueryTest
	{
	public:
		class UClass*                                              QuerierContext;                                          // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ToContext;                                               // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ItemHeightOffset;                                        // 0x0248(0x0040) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            Invert;                                                  // 0x0288(0x0040) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CQ9[0x58];                                  // 0x02C8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavArea_Blink
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UNavArea_Blink : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavArea_Breakable
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UNavArea_Breakable : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavArea_Vault
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UNavArea_Vault : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavigationQueryFilter_Player
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UNavigationQueryFilter_Player : public UNavigationQueryFilter
	{
	public:
		int32_t                                                    MaxSearchNodes;                                          // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWKJ[0x1C];                                  // 0x0054(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavigationQueryFilter_Camper
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UNavigationQueryFilter_Camper : public UNavigationQueryFilter_Player
	{
	public:
		float                                                      SlasherAreaBoundsLimit;                                  // 0x0070(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlasherAreaPenetrationCost;                              // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlasherInSightCost;                                      // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlasherAreaExcludeUnderRange;                            // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlasherInExcludeAreaCost;                                // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T24[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavigationQueryFilter_Camper_Cheap
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UNavigationQueryFilter_Camper_Cheap : public UNavigationQueryFilter_Camper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavigationQueryFilter_CamperStealth
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UNavigationQueryFilter_CamperStealth : public UNavigationQueryFilter_Camper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavigationQueryFilter_Slasher
	 * Size -> 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
	 */
	class UNavigationQueryFilter_Slasher : public UNavigationQueryFilter_Player
	{
	public:
		TMap<class FString, float>                                 DefaultInteractionsTimeCost;                             // 0x0070(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class FString, float>                                 FrenzyInteractionsTimeCost;                              // 0x00C0(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavigationQueryFilter_Slasher_Limited
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNavigationQueryFilter_Slasher_Limited : public UNavigationQueryFilter_Player
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavLinkProxy_Base
	 * Size -> 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
	 */
	class ANavLinkProxy_Base : public ANavLinkProxy
	{
	public:
		float                                                      WaitLinkOffset;                                          // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveOnEndPointTimeLimit;                                 // 0x0284(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NbMaxLinkUsers;                                          // 0x0288(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4JI[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ADBDPlayer*, struct FMoveLinkPlayerInfo>        _players;                                                // 0x0290(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<class ADBDPlayer*>                                  _linkUsedByPlayers;                                      // 0x02E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void OnSmartLinkReachedCallback(class AActor* MovingActor, const struct FVector& DestinationPoint);
		void AutoAdjustSmartLinkPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavLinkProxy_DirectMove
	 * Size -> 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
	 */
	class ANavLinkProxy_DirectMove : public ANavLinkProxy_Base
	{
	public:
		TArray<struct FVector>                                     CustomPathPoints;                                        // 0x02F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MoveToPathPointTimeLimit;                                // 0x0300(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40W8[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ADBDPlayer*, class UNavMovePath*>               _playersOnPath;                                          // 0x0308(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void OnDisplayDebugInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavLinkProxy_Interaction
	 * Size -> 0x00A8 (FullSize[0x0398] - InheritedSize[0x02F0])
	 */
	class ANavLinkProxy_Interaction : public ANavLinkProxy_Base
	{
	public:
		TMap<EPlayerRole, struct FNavLinkInteractPlayerSetup>      PlayerSetups;                                            // 0x02F0(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      InteractionStartTimeLimit;                               // 0x0340(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOVL[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ADBDPlayer*, float>                             _playersInteractionInputAtTime;                          // 0x0348(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.NavMovePath
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UNavMovePath : public UObject
	{
	public:
		unsigned char                                              UnknownData_KSP8[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathBuilder
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UPathBuilder : public UObject
	{
	public:
		unsigned char                                              UnknownData_KCUX[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathReachedPointRadius;                                  // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAITerrorLevel                                             ToleratedTerrorPressure;                                 // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverridePreviousPathStrategy;                            // 0x003D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TETD[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavMovePath*                                        _path;                                                   // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ADBDAIBTController*                                  _aiOwner;                                                // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathBuilder_EQS
	 * Size -> 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
	 */
	class UPathBuilder_EQS : public UPathBuilder
	{
	public:
		struct FEQSParametrizedQueryExecutionRequest               EQSRequest;                                              // 0x0050(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    NbMaxEQSRequests;                                        // 0x00A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MergeToSinglePathPoint;                                  // 0x00A4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86Q1[0x23];                                  // 0x00A5(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPathBuilder_EQS*                                    _pendingEQSRequestBuilder;                               // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathBuilder_EvadeLoop
	 * Size -> 0x00B8 (FullSize[0x0108] - InheritedSize[0x0050])
	 */
	class UPathBuilder_EvadeLoop : public UPathBuilder
	{
	public:
		float                                                      AddDistanceToRequiredEvadeGap;                           // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceEvadePointUnderDistance;                            // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistToCheckEvadePointDistWhenCrossing;                // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChaserCrossingEvadeTimePenalty;                          // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwapPathReachTimeBuffer;                                 // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA4D[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BreakPalletInteractionId;                                // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OnPathRadius;                                            // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEvadeInteractableWeightDistance;                      // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightAtMaxDistance;                                     // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MaxWeightAtNearestDistanceIfHostileHasRangedAbility;     // 0x0084(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWK0[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightAtMaxSafety;                                       // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNearAllyPenaltyPathPointDistance;                     // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightWhenNearAlly;                                      // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MinSafetyRatingAgainstMeleeHostileStimulus;              // 0x0094(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MinSafetyRatingAgainstRangedHostileStimulus;             // 0x00A4(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDistanceFromHostileStimulusToClosestPoint;            // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFromHostileStimulusToClosestPointBuffer;         // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3YC[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavMovePath*                                        _originalEvadeLoopWorkPath;                              // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavMovePath*                                        _querierWorkPathA;                                       // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavMovePath*                                        _querierWorkPathB;                                       // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavMovePath*                                        _chaserWorkPath;                                         // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDNavEvadeLoopComponent*                           _pickedEvadeLoopComponent;                               // 0x00E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8SHK[0x20];                                  // 0x00E8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathBuilder_LastGoal
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UPathBuilder_LastGoal : public UPathBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathStrategy
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UPathStrategy : public UObject
	{
	public:
		unsigned char                                              UnknownData_O06O[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPathBuilder*>                                DefaultPathBuilders;                                     // 0x0040(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      RefreshPartialPathDelay;                                 // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartNextBranchBuildDelay;                               // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ADBDAIBTController*                                  _aiOwner;                                                // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPathBuilder*>                                _pathBuilders;                                           // 0x0060(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S77G[0x48];                                  // 0x0070(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathStrategy_Flee
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UPathStrategy_Flee : public UPathStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathStrategy_FleeLoop
	 * Size -> 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
	 */
	class UPathStrategy_FleeLoop : public UPathStrategy_Flee
	{
	public:
		TMap<EAIDifficultyLevel, struct FGameStateEvadeLoopStrategyMapContainer> GameStateFleeLoopStrategyTable;                          // 0x00B8(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EAIFleeLoopStrategy, class UPathBuilder_EvadeLoop*>   FleeLoopStrategyPathBuilders;                            // 0x0108(0x0050) Edit, ExportObject, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      CanBranchUnderEndPathDistance;                           // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K41K[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EAIFleeLoopStrategy, struct FAIRoll>                  BranchRolls;                                             // 0x0160(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      RejectLoopBranchUnderEndPointsDistance;                  // 0x01B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RejectBranchPointNearerHostileSourceDistance;            // 0x01B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RejectBranchUnderNavLinkDistance;                        // 0x01B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddDistanceToRequiredBranchEvadeGap;                     // 0x01BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P19H[0x50];                                  // 0x01C0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathStrategy_FleeLOS
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UPathStrategy_FleeLOS : public UPathStrategy_Flee
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathStrategySelector
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UPathStrategySelector : public UObject
	{
	public:
		unsigned char                                              UnknownData_4IP7[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDAIBTController*                                  _aiOwner;                                                // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPathStrategy*>                               _activePathStrategies;                                   // 0x0040(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UPathStrategy*>                               _nextPathStrategies;                                     // 0x0050(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_84JD[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDBots.PathStrategySelector_Flee
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	class UPathStrategySelector_Flee : public UPathStrategySelector
	{
	public:
		TMap<EAIFleePathStrategy, class UPathStrategy*>            FleePathStrategies;                                      // 0x0068(0x0050) Edit, ExportObject, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW84[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EAIFleePathStrategy, class UPathStrategy*>            _activeFleePathStrategiesMap;                            // 0x00C0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
