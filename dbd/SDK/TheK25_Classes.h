﻿#pragma once

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
	 * Class TheK25.Addon_K25Power_17
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class UAddon_K25Power_17 : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_YI09[0x18];                                  // 0x02B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.AISkill_FindCollectable_LamentConfiguration
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UAISkill_FindCollectable_LamentConfiguration : public UAISkill_FindCollectable
	{
	public:
		struct FAITunableParameter                                 StopChainHuntGoalWeight;                                 // 0x0130(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PreemptiveFindLamentGoalWeight;                          // 0x0140(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.AISkill_InteractionBreakFreeFromChains
	 * Size -> 0x0028 (FullSize[0x01A8] - InheritedSize[0x0180])
	 */
	class UAISkill_InteractionBreakFreeFromChains : public UAISkill_Interaction
	{
	public:
		struct FDBDTunableRowHandle                                _breakFreeFromChainsMaxCharge;                           // 0x0180(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.AISkill_InteractionUseItem_LamentConfiguration
	 * Size -> 0x0038 (FullSize[0x01C0] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_LamentConfiguration : public UAISkill_InteractionUseItem
	{
	public:
		struct FAITunableParameter                                 SolveLamentThreshold;                                    // 0x0188(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _solveLamentMaxCharge;                                   // 0x0198(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.ChainAttachedGateBlockerEffect
	 * Size -> 0x0028 (FullSize[0x03B0] - InheritedSize[0x0388])
	 */
	class UChainAttachedGateBlockerEffect : public UGateBlockerEffect
	{
	public:
		struct FDBDTunableRowHandle                                _blockGateLingeringTimeDyingState;                       // 0x0388(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnSurvivorDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.IsChainHuntActive
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UIsChainHuntActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_CVGH[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25AnimInstance
	 * Size -> 0x0010 (FullSize[0x0610] - InheritedSize[0x0600])
	 */
	class UK25AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isTeleporting;                                          // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPossessingGateway;                                    // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSelectingGatewayLocation;                             // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HNRR[0xD];                                   // 0x0603(0x000D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25AttackSubAnimInstance
	 * Size -> 0x0010 (FullSize[0x0630] - InheritedSize[0x0620])
	 */
	class UK25AttackSubAnimInstance : public UKillerAttackSubAnimInstance
	{
	public:
		unsigned char                                              UnknownData_BQZB[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnAttackStart(EAttackType attackType);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25Chain
	 * Size -> 0x0200 (FullSize[0x0430] - InheritedSize[0x0230])
	 */
	class AK25Chain : public AActor
	{
	public:
		unsigned char                                              UnknownData_MZ2E[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAcquiredChanged;                                       // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCurveFloat*                                         _attachedToProjectileInfluenceCurve;                     // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         _reelbackInfluenceCurve;                                 // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         _offsetMultiplierInfluenceCurve;                         // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDG9[0x50];                                  // 0x0260(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _reelingBackSpeed;                                       // 0x02B0(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _chainOffsetMinValue;                                    // 0x02D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _chainOffsetMaxValue;                                    // 0x02DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _reelbackChainOffsetMinValue;                            // 0x02E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _reelbackChainOffsetMaxValue;                            // 0x02E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _chainInstanceSpacing;                                   // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _quickChainOffsetTimerLength;                            // 0x02EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _reachingSurvivorAnchorTime;                             // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             _chainScale;                                             // 0x02F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _chainOffsetTimerLength;                                 // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U35K[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     _currentChainPoints;                                     // 0x0308(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       _isAcquiredFromPool;                                     // 0x0318(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4W9H[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _sphereTraceRadius;                                      // 0x031C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _chainStartPosition;                                     // 0x0320(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _reelBackPosition;                                       // 0x032C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _reelbackStartPosition;                                  // 0x0338(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V25V[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK25Projectile*                                      _projectileAttachedTo;                                   // 0x0348(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AK25SurvivorChainAttachmentAnchor>    _survivorAnchorAttachedTo;                               // 0x0350(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AK25SurvivorChainAttachmentAnchor>    _targetAnchorToReach;                                    // 0x0358(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USplineComponent*                                    _chainSplineComponent;                                   // 0x0360(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedStaticMeshComponent*                       _chainInstancedMesh;                                     // 0x0368(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _currentInfluenceCurve;                                  // 0x0370(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _chainCurveOffset;                                       // 0x0378(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EK25ChainState                                             _chainState;                                             // 0x0384(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O6EI[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFastTimer                                          _curveOffsetStrengthTimer;                               // 0x0388(0x0030) Transient, NativeAccessSpecifierPrivate
		struct FFastTimer                                          _reelbackTimer;                                          // 0x03B8(0x0030) Transient, NativeAccessSpecifierPrivate
		struct FFastTimer                                          _reachSurvivorAnchorPositionTimer;                       // 0x03E8(0x0030) Transient, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     _forcedPositions;                                        // 0x0418(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		EK25ChainCreationStrategy                                  _chainCreationStrategy;                                  // 0x0428(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TTRE[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetSplineComponent(class USplineComponent* Component);
		void SetInstancedMeshComponent(class UInstancedStaticMeshComponent* InstancedMesh);
		bool IsAttachedToControlledProjectile();
		class AK25SurvivorChainAttachmentAnchor* GetSurvivorChainAttachmentAnchor();
		struct FVector GetChainStartLocation();
		struct FVector GetChainEndLocation();
		void Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction);
		void Cosmetic_OnSurvivorStartedRemovingChainSFX();
		void Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX();
		void Cosmetic_OnChainUnleashedWithProjectile();
		void Cosmetic_OnChainStartedToReelback();
		void Cosmetic_OnChainDisappears();
		void Cosmetic_OnChainDetachedFromSurvivor(EK25ChainDetachmentReason detachmentReason);
		void Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint);
		void Cosmetic_OnChainAppears();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainAttachedStatusEffect
	 * Size -> 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
	 */
	class UK25ChainAttachedStatusEffect : public UStatusEffect
	{
	public:
		class UCurveFloat*                                         _percentageReductionSpeedPerChainCurve;                  // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK25SurvivorChainAttachmentComponent*                _chainAttachmentComponent;                               // 0x0358(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _cachedNumberOfChainsAttached;                           // 0x0360(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_METV[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnRep_ChainAttachementComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainAttachmentReplicationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK25ChainAttachmentReplicationComponent : public UActorComponent
	{
	public:
		void Multicast_StartChainReelback(class AK25Chain* chainToAttach);
		void Multicast_LaunchInstantHitChainTowardsSurvivor(class AK25Chain* newChainToAttach, class AK25SurvivorChainAttachmentAnchor* targetAnchor, const struct FVector& StartPosition);
		void Multicast_DetachChains(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, TArray<class AK25Chain*> chainsToDetach, EK25ChainDetachmentReason detachmentReason, TArray<class AK25Chain*> chainsAttached);
		void Multicast_AttachChainToAnchor(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, class AK25Chain* chainToAttach, class AK25SurvivorChainAttachmentAnchor* anchorPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainHuntEffectsComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UK25ChainHuntEffectsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_INDT[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (PADDING)

	public:
		class ADBDPlayer* GetOwningPlayer();
		void Cosmetic_TriggerChainHuntActivationSFX();
		void Cosmetic_DeactivateChainHuntEffects();
		void Cosmetic_ActivateChainHuntEffects(bool hasChainHuntStarted);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainLocomotionSurvivorAnimInstance
	 * Size -> 0x0188 (FullSize[0x06D0] - InheritedSize[0x0548])
	 */
	class UK25ChainLocomotionSurvivorAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_5EB3[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _hasChainsAttached;                                      // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPerformingBreakChainInteraction;                      // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5PQ3[0x2];                                   // 0x0552(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _forwardDirectionDotProductResult;                       // 0x0554(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lateralDirectionDotProductResult;                       // 0x0558(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2CXO[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK25Chain*                                           _currentChainBeingDetached;                              // 0x0560(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FK25ChainAnchorAnimationData                        _leftHandAttachmentData;                                 // 0x0568(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FK25ChainAnchorAnimationData                        _rightHandAttachmentData;                                // 0x0580(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FK25ChainAnchorAnimationData                        _leftShoulderAttachmentData;                             // 0x0598(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FK25ChainAnchorAnimationData                        _rightShoulderAttachmentData;                            // 0x05B0(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FK25ChainAnchorAnimationData                        _stomachAttachmentData;                                  // 0x05C8(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FK25ChainAnchorAnimationData                        _backAttachmentData;                                     // 0x05E0(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		EK25ChainAnchorPointDirection                              _chainDirection;                                         // 0x05F8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasBrokenFreeFromChain;                                 // 0x05F9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F1ZD[0x2];                                   // 0x05FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _hasBrokenFreeTime;                                      // 0x05FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasBeenHitByChain;                                      // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isMale;                                                 // 0x0603(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingCarried;                                         // 0x0604(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W5T8[0x3];                                   // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _hasBeenHitByChainTime;                                  // 0x0608(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _hitChainName;                                           // 0x060C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _detachedChainAnchorName;                                // 0x0618(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OI44[0xAC];                                  // 0x0624(0x00AC) MISSED OFFSET (PADDING)

	public:
		void OnChainDetached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason);
		void OnChainAttached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainPool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UK25ChainPool : public UAuthoritativeActorPoolComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrike_IsGatewayOrientationTimerExpired
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UK25ChainStrike_IsGatewayOrientationTimerExpired : public UFSM_Condition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrike_IsGatewayPlacementValidCondition
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UK25ChainStrike_IsGatewayPlacementValidCondition : public UFSM_Condition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrike_IsPlayerPressingInputCondition
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UK25ChainStrike_IsPlayerPressingInputCondition : public UFSM_Condition
	{
	public:
		EInputInteractionType                                      _inputType;                                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RS8T[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeBaseState
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UK25ChainStrikeBaseState : public UFSM_State
	{
	public:
		unsigned char                                              _secondaryInteractionIDs[0x50];                          // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		class ADBDPlayer* GetPlayerOwner();
		class AK25Power* GetK25Power();
		class AK25Gateway* GetK25Gateway();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeImmunityEffect
	 * Size -> 0x0028 (FullSize[0x03A8] - InheritedSize[0x0380])
	 */
	class UK25ChainStrikeImmunityEffect : public UActivateOnEventTimedStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _chainStrikeImmunityDuration;                            // 0x0380(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeInteraction
	 * Size -> 0x0230 (FullSize[0x0970] - InheritedSize[0x0740])
	 */
	class UK25ChainStrikeInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UClass*                                              _chainStrikeStateMachineclass;                           // 0x0740(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _repossessFadeOutTime;                                   // 0x0748(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G2FB[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _repossessFadeInTime;                                    // 0x0750(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _gatewayPossessionFovModifierCurve;                      // 0x0778(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _controlledProjectilePossessionFovModifierCurve;         // 0x0780(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _chargeTimeAfterGatewayPlacementCancelled;               // 0x0788(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _chargeTimeAfterGatewayPossessionCancelled;              // 0x07B0(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _chargeTimeAfterControlledChainShot;                     // 0x07D8(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gatewayPossessionFovChangeDuration;                     // 0x0800(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gatewayPossessionCameraPanTime;                         // 0x0828(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _controlledProjectilePossessionCameraPanTime;            // 0x0850(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _controlledProjectilePossessionFovTimeChangeDuration;    // 0x0878(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFiniteStateMachine*                                 _stateMachine;                                           // 0x08A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _authority_shouldIncrementChargeableComponent;           // 0x08A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XWAC[0x68];                                  // 0x08A9(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EChainStrikeCameraViewTarget                               _chainStrikeCameraViewTarget;                            // 0x0911(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasHitSurvivor;                                         // 0x0912(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LNI9[0x5D];                                  // 0x0913(0x005D) MISSED OFFSET (PADDING)

	public:
		void Server_UpdateCameraViewTargetForObservers(EChainStrikeCameraViewTarget NewViewTarget);
		void Server_SetShouldIncrementChargeableComponent(bool shouldIncrement);
		void Server_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);
		void Server_RemoveStateTagFromPlayer(const struct FGameplayTag& Tag);
		void Server_AddStateTagToPlayer(const struct FGameplayTag& Tag);
		void OnRep_ChainStrikeCameraViewTarget();
		void Multicast_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);
		void Multicast_RemoveStateTagFromPlayer(const struct FGameplayTag& Tag);
		void Multicast_AddStateTagToPlayer(const struct FGameplayTag& Tag);
		void Cosmetic_TriggerKillerRepossessionFadeOutEffects(class ASlasherPlayer* killer, bool preventAudioTriggers);
		void Cosmetic_TriggerKillerRepossessionFadeInEffects(class ASlasherPlayer* killer, bool hasHitSurvivor, bool preventAudioTriggers);
		void Cosmetic_TriggerGatewayPossessionEffects(float TransitionTime);
		void Cosmetic_ResetAllVignetteValues(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeReplicationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK25ChainStrikeReplicationComponent : public UActorComponent
	{
	public:
		void Server_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, EChainStrikeEndReason endReason);
		void Multicast_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, EChainStrikeEndReason endReason);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeState_EndChainStrike
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UK25ChainStrikeState_EndChainStrike : public UK25ChainStrikeBaseState
	{
	public:
		EChainStrikeEndReason                                      _chainStrikeEndReason;                                   // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5SY7[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeState_GatewayPlacement
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UK25ChainStrikeState_GatewayPlacement : public UK25ChainStrikeBaseState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeState_OutOfBodyState
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UK25ChainStrikeState_OutOfBodyState : public UK25ChainStrikeBaseState
	{
	public:
		struct FDBDTunableRowHandle                                _fovTimeChangeDuration;                                  // 0x00C8(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeState_PossessGateway
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UK25ChainStrikeState_PossessGateway : public UK25ChainStrikeBaseState
	{
	public:
		unsigned char                                              UnknownData_MC3W[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeState_SelectGatewayOrientation
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UK25ChainStrikeState_SelectGatewayOrientation : public UK25ChainStrikeBaseState
	{
	public:
		unsigned char                                              UnknownData_ULL4[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ChainStrikeState_ShootControlledProjectile
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UK25ChainStrikeState_ShootControlledProjectile : public UK25ChainStrikeBaseState
	{
	public:
		float                                                      _minimumThrottleTimeForInputServerCall;                  // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _inputResetSpeed;                                        // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AC7V[0x38];                                  // 0x00D0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25CheatComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK25CheatComponent : public UActorComponent
	{
	public:
		void DBD_K25TriggerUncontrolledChainsOnLocalSurvivor(int32_t numbChains);
		void DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition(float X, float Y, float Z, int32_t numbChains);
		void DBD_K25TriggerUncontrolledChainsOnAllSurvivors(int32_t numbChains);
		void DBD_K25ShowAllLamentConfigurationSpawnPoints(float timeDisplayed);
		void DBD_K25SetPowerNoCooldown(bool noCooldown);
		void DBD_K25RevealLamentConfigurationLocation(float timeDisplayed);
		void DBD_K25ForceRespawnLamentConfiguration();
		void DBD_K25ForceRemoveAllChainsOnLocalSurvivor();
		void DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition(float X, float Y, float Z);
		void DBD_K25ForceRemoveAllChainsOnAllSurvivors();
		void DBD_K25ComeToPositionLamentConfiguration(float X, float Y, float Z);
		void DBD_K25ComeToMeLamentConfiguration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25CollectLamentConfigurationInteraction
	 * Size -> 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
	 */
	class UK25CollectLamentConfigurationInteraction : public UCollectItemInteraction
	{
	public:
		unsigned char                                              UnknownData_LPM9[0x10];                                  // 0x0640(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25Projectile
	 * Size -> 0x00F8 (FullSize[0x0430] - InheritedSize[0x0338])
	 */
	class AK25Projectile : public AKillerProjectile
	{
	public:
		unsigned char                                              UnknownData_50MG[0x48];                                  // 0x0338(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                _staticMesh;                                             // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 _characterCollider;                                      // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 _environmentCollider;                                    // 0x0390(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UKillerProjectileDodgeComponent*                     _projectileDodgeComponent;                               // 0x0398(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLaunchInfo                                         _launchInfo;                                             // 0x03A0(0x001C) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z6S7[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK25Chain*                                           _attachedChain;                                          // 0x03C0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _timeIgnoreSlasherCollision;                             // 0x03C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x03CC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8OK8[0x3];                                   // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FK25ProjectileDeactivationData                      _lastDeactivationData;                                   // 0x03D0(0x0020) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VFFA[0x40];                                  // 0x03F0(0x0040) MISSED OFFSET (PADDING)

	public:
		void Server_RequestDisableProjectile(EK25ProjectileDeactivateReason deactivateReason);
		void OnProjectileStopped(const struct FHitResult& Result);
		class UDBDProjectileMovementComponent* GetMovementComponent();
		struct FVector GetChainAttachmentLocation();
		void Cosmetic_OnProjectileDeactivated(const struct FK25ProjectileDeactivationData& deactivationData);
		void Cosmetic_OnProjectileActivated();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ControlledProjectile
	 * Size -> 0x0270 (FullSize[0x06A0] - InheritedSize[0x0430])
	 */
	class AK25ControlledProjectile : public AK25Projectile
	{
	public:
		unsigned char                                              UnknownData_06LU[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                _killerViewProjectileStaticMesh;                         // 0x0438(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpringArmComponent*                                 _killerSpringArm;                                        // 0x0440(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraComponent*                                    _killerCameraPlacement;                                  // 0x0448(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _pitchClampAngle;                                        // 0x0450(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SWNI[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _maximumYawTurnRate;                                     // 0x0458(0x0080) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _maximumPitchTurnRate;                                   // 0x04D8(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _cameraRollSpeedMultiplier;                              // 0x0558(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _cameraRollGoBackSpeedMultiplier;                        // 0x0580(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _cameraMaximumRollDegree;                                // 0x05A8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _numbExtraChainsOnControlledProjectileHit;               // 0x05D0(0x0080) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK25ControlledProjectileMovementComponent*           _controlledProjectileMovementComponent;                  // 0x0650(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _currentRoll;                                            // 0x0658(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _targetRoll;                                             // 0x065C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5LXP[0x30];                                  // 0x0660(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 _lastAppliedAngularVelocity;                             // 0x0690(0x000C) Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7NYP[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (PADDING)

	public:
		void Server_ProcessYawInput(float DeltaTime, float scaledInput);
		void Server_ProcessPitchInput(float DeltaTime, float scaledInput);
		void OnRep_AngularVelocity();
		void Cosmetic_OnKillerPossessProjectileEffects();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ControlledProjectileMovementComponent
	 * Size -> 0x0140 (FullSize[0x03A0] - InheritedSize[0x0260])
	 */
	class UK25ControlledProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
	{
	public:
		struct FDBDTunableRowHandle                                _projectileBaseSpeed;                                    // 0x0260(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _baseProjectileMaximumDistance;                          // 0x0288(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _projectileSpeedIncreaseTime;                            // 0x02B0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _maximumTravelDistanceStat;                              // 0x02D8(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _projectileSpeedIncreaseMultiplier;                      // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _totaldistanceTravelled;                                 // 0x0360(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MOCN[0x3C];                                  // 0x0364(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25EscapeLamentConfigurationGrasp
	 * Size -> 0x0010 (FullSize[0x0750] - InheritedSize[0x0740])
	 */
	class UK25EscapeLamentConfigurationGrasp : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_6RV0[0x10];                                  // 0x0740(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25Gateway
	 * Size -> 0x02A0 (FullSize[0x04D0] - InheritedSize[0x0230])
	 */
	class AK25Gateway : public AActor
	{
	public:
		unsigned char                                              UnknownData_NYB4[0x20];                                  // 0x0230(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _rayCastZOffet;                                          // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rayCastLength;                                          // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<float>                                              _distancePercentLocations;                               // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      _survivorGatewayRotationSpeed;                           // 0x0268(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minimumIndicatorVelocity;                               // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _indicatorVelocityEasingFactor;                          // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minimumTimeBeforeTargetLocationMulticast;               // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R5FJ[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _gatewayNoiseEventTimeInterval;                          // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _gatewayNoiseEventRange;                                 // 0x0284(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _minDistanceFromPlayer;                                  // 0x0288(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _maxDistanceFromPlayer;                                  // 0x02B0(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gatewayPlacementSpeed;                                  // 0x0330(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _pitchLevelChangeAngleThreshold;                         // 0x0358(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _pitchLevelChangeZoneThreshold;                          // 0x0380(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maximumCameraPitchOrientationAngle;                     // 0x03A8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _minimumCameraPitchOrientationAngle;                     // 0x03D0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maxGatewayPossessionDuration;                           // 0x03F8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActorComponent*                                     _visualComponent;                                        // 0x0420(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _targetLocation;                                         // 0x0428(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5AO0[0x14];                                  // 0x0434(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    _cameraPlacementComponent;                               // 0x0448(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isGatewayPossessed;                                     // 0x0450(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TZYQ[0x1B];                                  // 0x0451(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isBeingPositionned;                                     // 0x046C(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0LH4[0x1B];                                  // 0x046D(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFastTimer                                          _possessionTimer;                                        // 0x0488(0x0030) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3ITA[0x10];                                  // 0x04B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerceptionStimuliSourceComponent*                 _perceptionStimuliComponent;                             // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Server_StartGatewayPossession(const struct FVector& possessionLocation, const struct FRotator& gatewayRotation);
		void Server_SetIsGatewayBeingPositionned(bool isBeingPositionned);
		void Server_SetGatewayTargetLocation(const struct FVector& targetLocation, bool isValidLocation);
		void Server_SetGatewayOrientation(const struct FRotator& Rotation);
		void Server_EndGatewayPossession();
		void OnRep_IsGatewayPossessed();
		void OnRep_IsBeingPositionned();
		void Multicast_SetGatewayTargetLocation(const struct FVector& targetLocation, bool isValidLocation);
		void Multicast_SetGatewayOrientation(const struct FRotator& Rotation);
		void Multicast_SetGatewayLocation(const struct FVector& possessionLocation);
		bool IsGatewayPossessed();
		class UCameraComponent* GetCameraComponent();
		void Cosmetic_TriggerInvalidGatewayPlacementSFX();
		void Cosmetic_TriggerGatewayUnpossessedEffects();
		void Cosmetic_TriggerGatewayPossessionCancel();
		void Cosmetic_TriggerGatewayPossessedEffects(float TransitionTime);
		void Cosmetic_TriggerGatewayPlacementStop();
		void Cosmetic_TriggerGatewayPlacementStart();
		void Cosmetic_TriggerGatewayPlacementCancel();
		void Cosmetic_SetKillerVisualVisibility(bool IsVisible);
		void Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25Husk
	 * Size -> 0x0040 (FullSize[0x05A0] - InheritedSize[0x0560])
	 */
	class AK25Husk : public ADBDBasePlayer
	{
	public:
		class UCustomizedSkeletalMesh*                             _customizedSkeletalMeshComponent;                        // 0x0560(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimationMontageSlave*                              _montageFollower;                                        // 0x0568(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMontagePlayer*                                      _montagePlayer;                                          // 0x0570(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _k25CharacterOverrideID;                                 // 0x0578(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HY6X[0x24];                                  // 0x057C(0x0024) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_StartDisappearing();
		void Cosmetic_StartAppearing();
		void Cosmetic_HideHusk();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25KillerChainHuntEffectsComponent
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UK25KillerChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25KillerTeleportationPositionFinderComponent
	 * Size -> 0x0120 (FullSize[0x01D8] - InheritedSize[0x00B8])
	 */
	class UK25KillerTeleportationPositionFinderComponent : public UActorComponent
	{
	public:
		float                                                      _rayCastZOffet;                                          // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rayCastLength;                                          // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _killerInRangeMinimumDistanceCheck;                      // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _killerInRangeMaxRangePercentage;                        // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _deltaHeightThreshold;                                   // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ODKA[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _minDistanceFromLamentConfiguration;                     // 0x00D0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maxDistanceFromLamentConfiguration;                     // 0x00F8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MGUQ[0x20];                                  // 0x0120(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _timeBetweenFailsafeChecks;                              // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DZGO[0x44];                                  // 0x0144(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EK25TeleportLocationStatus                                 _teleportLocationStatus;                                 // 0x0188(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NGSM[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _bestTeleportLocation;                                   // 0x018C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AEscapeDoor*>                                 _escapeDoors;                                            // 0x0198(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M6U2[0x30];                                  // 0x01A8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25LamentConfigurationPossessionChainAttacksEffect
	 * Size -> 0x0090 (FullSize[0x03E0] - InheritedSize[0x0350])
	 */
	class UK25LamentConfigurationPossessionChainAttacksEffect : public UStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _timeBetweenChainTargettingAttempt;                      // 0x0350(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _numberOfChainsToTriggerTowardsSurvivor;                 // 0x0378(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8EE2[0x40];                                  // 0x03A0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25LamentConfigurationPossessionStatusEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UK25LamentConfigurationPossessionStatusEffect : public UObliviousEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25LamentConfigurationTeleportIndicator
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AK25LamentConfigurationTeleportIndicator : public AActor
	{
	public:
		unsigned char                                              UnknownData_L9KD[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_UpdateIndicatorVisibility(bool IsVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25P01
	 * Size -> 0x0060 (FullSize[0x0428] - InheritedSize[0x03C8])
	 */
	class UK25P01 : public UPerk
	{
	public:
		float                                                      _generatorBlockDuration[0x3];                            // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _auraRevealDuration[0x3];                                // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _allowPerkToBlockZeroProgressionGenerators;              // 0x03E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CMS6[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        _generatorAuraColorForKiller;                            // 0x03E4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LPQM[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFastTimer>                                  _generatorBlockingTimers;                                // 0x03F8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AGenerator*>                                  _generatorsBlocked;                                      // 0x0408(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<class AGenerator*>                                  _local_generatorsBlocked;                                // 0x0418(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void OnRep_GeneratorsBlocked();
		void Authority_OnBlockTimerDone(class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25P02
	 * Size -> 0x0080 (FullSize[0x04C8] - InheritedSize[0x0448])
	 */
	class UK25P02 : public UHexPerk
	{
	public:
		float                                                      _totemAuraRevealRadius[0x3];                             // 0x0448(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _totemBlockerHasLifetime;                                // 0x0454(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PQLM[0x3];                                   // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _totemBlockerDuration[0x3];                              // 0x0458(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SA3C[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _obliviousStatusEffectClass;                             // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F7G0[0x8];                                   // 0x0470(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDBDPlayerTotemPair>                         _cursedSurvivors;                                        // 0x0478(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KCE0[0x10];                                  // 0x0488(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADBDPlayer*>                                  _hookedSurvivors;                                        // 0x0498(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ATotem*>                                      _previouslyBoundTotems;                                  // 0x04A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FDBDPlayerTotemPair                                 _lastPlayerTotemPair;                                    // 0x04B8(0x0010) Transient, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void OnRep_CursedSurvivors();
		bool GetTotemBlockerHasLifetime();
		float GetTotemBlockerDuration();
		float GetTotemAuraRevealRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25P03
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UK25P03 : public UPerk
	{
	public:
		class UClass*                                              _hemorrhageEffect;                                       // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _mangledEffect;                                          // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _K25P03SurvivorStateTwoEffect;                           // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_339I[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _numberOfSurvivorsWaitingForDamageStateChange;           // 0x03E8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _state2ActionSpeedDebuffPercentage[0x3];                 // 0x03EC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6RJ8[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorRemoved(class ACamperPlayer* Survivor);
		void OnDamageStateChanged(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		void OnCamperUnhookedFromScourgeHook(const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25PounceAttack
	 * Size -> 0x0020 (FullSize[0x03A0] - InheritedSize[0x0380])
	 */
	class UK25PounceAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_SN20[0x20];                                  // 0x0380(0x0020) MISSED OFFSET (PADDING)

	public:
		void Multicast_DownedTargetHoldingLamentConfiguration();
		void Client_InvalidateDownedTargetHoldingLamentConfiguration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25PounceAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UK25PounceAttackHittingSubstate : public UPounceAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25Power
	 * Size -> 0x0158 (FullSize[0x0608] - InheritedSize[0x04B0])
	 */
	class AK25Power : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_NC5S[0x18];                                  // 0x04B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _k25ChainStrikeInteractionChargeableComponent;           // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _k25TeleportChargeableComponent;                         // 0x04D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FCustomKillerInstinctData>                   _customKillerInstinctDatas;                              // 0x04D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        _survivorStatusEffectID;                                 // 0x04E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        _killerStatusEffectID;                                   // 0x04F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UClass*                                              _survivorChainAttachmentComponentClass;                  // 0x0508(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _survivorChainTargetterComponentClass;                   // 0x0510(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _k25GatewayClass;                                        // 0x0518(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _controlledProjectileClass;                              // 0x0520(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _lamentConfigurationClass;                               // 0x0528(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _k25HuskClass;                                           // 0x0530(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _killerTeleportFinderComponentClass;                     // 0x0538(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _chainAnimationActorClass;                               // 0x0540(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UDataTable*>                                  _chainAnimationMappingsTables;                           // 0x0548(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UClass*                                              _pillarAnimationActorClass;                              // 0x0558(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK25ProjectileLauncher*                              _k25ProjectileLauncher;                                  // 0x0560(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _k25ProjectilePool;                                      // 0x0568(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _k25ChainPool;                                           // 0x0570(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _k25PowerChargeComponent;                                // 0x0578(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativePoolProjectileProviderAdapter*         _k25ProjectileProvider;                                  // 0x0580(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK25PowerChargePresentationItemProgressComponent*    _k25PowerPresentationItemProgressComponent;              // 0x0588(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK25Gateway*                                         _gateway;                                                // 0x0590(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK25ControlledProjectile*                            _controlledProjectileInstance;                           // 0x0598(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ALamentConfiguration*                                _lamentConfiguration;                                    // 0x05A0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK25Husk*                                            _k25Husk;                                                // 0x05A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK25ChainAttachmentReplicationComponent*             _chainAttachmentReplicationComponent;                    // 0x05B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OQM2[0x48];                                  // 0x05B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isPowerCharged;                                         // 0x0600(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WDVF[0x7];                                   // 0x0601(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorAdded(class ACamperPlayer* Survivor, class ASlasherPlayer* killer);
		void OnRep_LamentConfiguration();
		void OnRep_K25Gateway();
		void OnRep_K25ControlledProjectile();
		void OnKillerAdded(class ASlasherPlayer* killer);
		void Cosmetic_OnKillerInterruptSFX(class ASlasherPlayer* killer);
		void Cosmetic_OnKillerInterruptOpenHatchSFX(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25PowerChargePresentationItemProgressComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UK25PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UPowerChargeComponent*                               _powerChargeComponent;                                   // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK25Power*                                           _k25Power;                                               // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ProjectileLauncher
	 * Size -> 0x0038 (FullSize[0x01B8] - InheritedSize[0x0180])
	 */
	class UK25ProjectileLauncher : public UBaseProjectileLauncher
	{
	public:
		struct FDBDTunableRowHandle                                _controlledProjectileInitialSpeed;                       // 0x0180(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isControlledProjectileRequested;                        // 0x01A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MJIG[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK25ControlledProjectile*                            _controlledProjectile;                                   // 0x01B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ProjectilePool
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UK25ProjectilePool : public UAuthoritativeActorPoolComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25ProjectileReplicationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK25ProjectileReplicationComponent : public UBaseProjectileReplicationComponent
	{
	public:
		void Multicast_SetAttachedChain(class AK25Projectile* Projectile, class AK25Chain* chainToAttach, const struct FLaunchInfo& LaunchInfo);
		void Multicast_DeactivateProjectile(class AK25Projectile* Projectile, const struct FK25ProjectileDeactivationData& deactivationData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25RemoveChainInteraction
	 * Size -> 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
	 */
	class UK25RemoveChainInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_BG74[0x18];                                  // 0x0740(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _interactionTimePerChainsAttached;                       // 0x0758(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK25SurvivorChainAttachmentComponent*                _cachedSurvivorChainAttachmentComponent;                 // 0x0780(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AK25Chain>                            _chainBeingRemoved;                                      // 0x0788(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UK25SurvivorChainAttachmentComponent> _chainAttachmentComponent;                               // 0x0790(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H6GN[0x8];                                   // 0x0798(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25SolveLamentConfigurationInteraction
	 * Size -> 0x00E0 (FullSize[0x0820] - InheritedSize[0x0740])
	 */
	class UK25SolveLamentConfigurationInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      _timeBufferBeforeAllowedToUseInteractionAgain;           // 0x0740(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KD73[0x4];                                   // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _failSkillCheckTimePenalty;                              // 0x0748(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimationMontageDescriptor                         _failMontage;                                            // 0x0770(0x0020) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SANZ[0x90];                                  // 0x0790(0x0090) MISSED OFFSET (PADDING)

	public:
		void Multicast_TriggerKillerStoppedInteractionViaAttackSFX(class ASlasherPlayer* killer);
		void Cosmetic_TriggerKillerStoppedInteractionViaAttackSFX(class ASlasherPlayer* killer);
		void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType Type);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25SurvivorChainAttachmentAnchor
	 * Size -> 0x00C0 (FullSize[0x02F0] - InheritedSize[0x0230])
	 */
	class AK25SurvivorChainAttachmentAnchor : public AActor
	{
	public:
		unsigned char                                              UnknownData_UDET[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _chainMaxBreakingLength;                                 // 0x0248(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _timeBetweenTrace;                                       // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OL7O[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FK25SurvivorChainAttachmentData                     _attachmentData;                                         // 0x0278(0x0028) Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ACamperPlayer>                        _owningSurvivor;                                         // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AK25Chain>                            _attachedChain;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8647[0x28];                                  // 0x02B0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _cachedPullDirection;                                    // 0x02D8(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E3QS[0xC];                                   // 0x02E4(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnRep_AttachmentData();
		int32_t GetNumberOfChainsAttached();
		struct FVector GetChainsPullLocation();
		struct FVector GetChainsPullDirection();
		float GetChainPullDirectionAngle();
		struct FVector GetChainAttachmentLocation();
		struct FK25SurvivorChainAttachmentData GetChainAttachmentData();
		void Cosmetic_OnChainDetached(class AK25Chain* chainToDetach);
		void Cosmetic_OnChainAttached(class AK25Chain* chainToAttach);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25SurvivorChainAttachmentComponent
	 * Size -> 0x00E0 (FullSize[0x0198] - InheritedSize[0x00B8])
	 */
	class UK25SurvivorChainAttachmentComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SUDN[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _attachmentAnchorClass;                                  // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FK25SurvivorChainAttachmentData>             _survivorAnchorData;                                     // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UClass*                                              _survivorChainRotationStrategyClass;                     // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      _interruptableInteractionClasses;                        // 0x0108(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maximumNumberOfChainsAttached;                          // 0x0118(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AK25SurvivorChainAttachmentAnchor*>           _chainAttachmentAnchors;                                 // 0x0140(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<TWeakObjectPtr<class AK25Chain>>                    _chainsAttached;                                         // 0x0150(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _removeChainChargeableComponent;                         // 0x0160(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QHVQ[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK25SurvivorChainRotationStrategy*                   _survivorChainRotationStrategy;                          // 0x0170(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK25ChainAttachmentReplicationComponent*             _chainAttachmentReplicationComponent;                    // 0x0178(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A40L[0x18];                                  // 0x0180(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_RemoveChainChargeableComponent();
		void Multicast_TriggerHitSurvivorInExitAreaSFX(class ASlasherPlayer* killer);
		class AK25Chain* GetFirstChainToRelease();
		void Cosmetic_TriggerHitSurvivorInExitAreaSFX(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25SurvivorChainHuntEffectsComponent
	 * Size -> 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
	 */
	class UK25SurvivorChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent
	{
	public:
		unsigned char                                              UnknownData_8WZ6[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		class ACamperPlayer* GetOwningSurvivor();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25SurvivorChainRotationStrategy
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UK25SurvivorChainRotationStrategy : public UBaseCharacterRotationStrategy
	{
	public:
		TWeakObjectPtr<class ACamperPlayer>                        _cachedSurvivor;                                         // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK25SurvivorChainAttachmentComponent*                _cachedChainAttachmentComponent;                         // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25SurvivorChainTargetterComponent
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UK25SurvivorChainTargetterComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _timeBetweenQueuedChainsLaunch;                          // 0x00B8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt; // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DC1K[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _minimumSpawnDistance;                                   // 0x00E8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maximumSpawnDistance;                                   // 0x0110(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _sphereCastRadius;                                       // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _numberOfPositionFindingTries;                           // 0x013C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MQ9O[0x4];                                   // 0x0140(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _maxNumberOfChainRetries;                                // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LBGU[0x88];                                  // 0x0148(0x0088) MISSED OFFSET (PADDING)

	public:
		void Multicast_DebugPositionFind(const struct FVector& startSweepPosition, const struct FVector& endSweepPosition, bool hasFoundPosition, const struct FVector& foundPosition, bool hasFoundCollision, const struct FVector& collisionPosition);
		void Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25TeleportInteraction
	 * Size -> 0x00B0 (FullSize[0x07F0] - InheritedSize[0x0740])
	 */
	class UK25TeleportInteraction : public UChargeableInteractionDefinition
	{
	public:
		int32_t                                                    _maxNumberLocationQueriesPerTick;                        // 0x0740(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _timeSensingLamentConfigurationAfterInteractionEnded;    // 0x0744(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XZL2[0x20];                                  // 0x0748(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _slowdownAfterTeleportDuration;                          // 0x0768(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V9MJ[0x60];                                  // 0x0790(0x0060) MISSED OFFSET (PADDING)

	public:
		void Multicast_TeleportKillerToTargetPosition(class ASlasherPlayer* killer, const struct FVector& Location, const struct FRotator& Rotation);
		void Multicast_InitializeHusk(const struct FVector& Location, const struct FRotator& Rotation);
		void Cosmetic_TeleportStartEffects(class ASlasherPlayer* killer);
		void Cosmetic_TeleportEndEffects(class ASlasherPlayer* killer);
		void Cosmetic_TeleportAbortedEffects(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25UncontrolledProjectile
	 * Size -> 0x00F8 (FullSize[0x0528] - InheritedSize[0x0430])
	 */
	class AK25UncontrolledProjectile : public AK25Projectile
	{
	public:
		unsigned char                                              UnknownData_1U9D[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAcquiredChanged;                                       // 0x0438(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _minimumTimeBeforeProjectileLaunch;                      // 0x0448(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _maximumTimeBeforeProjectileLaunch;                      // 0x0470(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _projectileSpeed;                                        // 0x0498(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _projectileMaximumTravelDistance;                        // 0x04C0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _isAcquiredFromPool;                                     // 0x04E8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_67BD[0x37];                                  // 0x04E9(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _targetSurvivor;                                         // 0x0520(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_TargetSurvivor();
		void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25UncontrolledProjectileReplicationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK25UncontrolledProjectileReplicationComponent : public UK25ProjectileReplicationComponent
	{
	public:
		void Multicast_LaunchProjectile(class AK25UncontrolledProjectile* Projectile, const struct FLaunchInfo& LaunchInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25Utilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK25Utilities : public UBlueprintFunctionLibrary
	{
	public:
		class ALamentConfiguration* STATIC_GetLamentConfiguration(class UObject* WorldContextObject);
		class AK25Power* STATIC_GetK25Power(class UObject* WorldContextObject);
		class AK25Husk* STATIC_GetK25Husk(class UObject* WorldContextObject);
		class AK25Gateway* STATIC_GetK25Gateway(class UObject* WorldContextObject);
		class AK25ControlledProjectile* STATIC_GetK25ControlledProjectile(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.K25WeaponAnimInstance
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UK25WeaponAnimInstance : public UBaseKillerWeaponAnimInstance
	{
	public:
		void OnAttackStart(EAttackType attackType);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.LamentConfiguration
	 * Size -> 0x02C0 (FullSize[0x0770] - InheritedSize[0x04B0])
	 */
	class ALamentConfiguration : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_BA8O[0x38];                                  // 0x04B0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpherePlayerOverlapComponent*                       _interactable;                                           // 0x04E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInteractor*                                         _collectableInteractor;                                  // 0x04F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK25CollectLamentConfigurationInteraction*           _survivorCollectItemInteraction;                         // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK25CollectLamentConfigurationInteraction*           _killerCollectItemInteraction;                           // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0508(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialHelper*                                     _materialHelper;                                         // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULamentConfigurationOutlineStrategy*                 _outlineStrategy;                                        // 0x0518(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULamentConfigurationSpawnStrategy*                   _spawnStrategy;                                          // 0x0520(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULamentConfigurationChainHuntComponent*              _chainHuntComponent;                                     // 0x0528(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _dotProductMinValue;                                     // 0x0530(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAttachToSocketNameEnum                                    _survivorAttachmentSocket;                               // 0x0534(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAttachToSocketNameEnum                                    _killerAttachmentSocket;                                 // 0x0535(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IU3A[0x2];                                   // 0x0536(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationMontageSlave*                              _montageFollower;                                        // 0x0538(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMontagePlayer*                                      _montagePlayer;                                          // 0x0540(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _chainAnimationActorClass;                               // 0x0548(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _lamentConfigurationTeleportIndicatorClass;              // 0x0550(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _chainAnimationFollowerAttachmentSocketName;             // 0x0558(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S23B[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkObservedPlayerSoundLoop                          _possessionSoundLoop;                                    // 0x0568(0x0040) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _respawnTimeAfterLamentConfigurationSolved;              // 0x05A8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _respawnTimeAfterKillerPickUp;                           // 0x05D0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _respawnTimeAfterSurvivorFreeBySelf;                     // 0x05F8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _respawnTimeAfterSurvivorFreeByAttack;                   // 0x0620(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _numberChainsToLaunchUponKillerPickUpLamentConfiguration; // 0x0648(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hostageInteractionTime;                                 // 0x0670(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELamentConfigurationState                                  _localLamentConfigurationState;                          // 0x0698(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ELamentConfigurationState                                  _lamentconfigurationState;                               // 0x0699(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CA1W[0x6];                                   // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAnimationFollowerActor*                             _chainAnimationActor;                                    // 0x06A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K8IJ[0x48];                                  // 0x06A8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _survivorHeldHostage;                                    // 0x06F0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CJT0[0x58];                                  // 0x06F8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       _standingOnLamentConfigurationCollisionChecker;          // 0x0750(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _timeAllowedToStandOnCubeBeforeTeleport;                 // 0x0758(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _solvedLamentConfigurationDropDistanceToCollectorCentimeters; // 0x075C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters; // 0x0760(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _solved;                                                 // 0x0764(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _releasedByAttack;                                       // 0x0765(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RAMW[0x2];                                   // 0x0766(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK25LamentConfigurationTeleportIndicator*            _lamentConfigurationTeleportIndicator;                   // 0x0768(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TriggerKillerPickUpSFX(TArray<class ACamperPlayer*> affectedSurvivors);
		void OnRep_SurvivorHeldHostage(class ACamperPlayer* oldSurvivorHeldHostage);
		void OnRep_LamentConfigurationState();
		void OnCamperEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Multicast_TriggerSolvedSFX();
		void Multicast_TriggerKillerPickUpSFX(TArray<class ACamperPlayer*> affectedSurvivors);
		void Multicast_DownedSurvivorHoldingLamentConfiguration(class ACamperPlayer* Survivor);
		void Multicast_CorrectLamentConfigurationPosition(const struct FVector& NewPosition);
		float GetChainHuntProgressPercentage();
		void Cosmetic_TriggerSurvivorPickUpSFX();
		void Cosmetic_TriggerSpawnedSFX();
		void Cosmetic_TriggerSolvedSFX();
		void Cosmetic_TriggerRespawnDuringChainHuntSFX();
		void Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX();
		void Cosmetic_TriggerDisappearsSFX();
		void Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(class ASlasherPlayer* killer, class ACamperPlayer* survivorDowned);
		void Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration);
		void Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack);
		void Cosmetic_OnChainHuntStartedEffects();
		void Cosmetic_OnChainHuntEndedEffects();
		void Cosmetic_OnChainHuntChargeStart(float chargeTime);
		void Cosmetic_OnChainHuntChargeEnd();
		void Cosmetic_EndSolvingCubeSFX(bool hasBeenSolved);
		void Cosmetic_BeginSolvingCubeSFX();
		void Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning);
		void Authority_OnSurvivorHitByControlledProjectile(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Authority_OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Authority_OnIntroCompletedOrLevelReadyToPlay();
		void Authority_OnGameEnded(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_OnEndGameOver(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.LamentConfigurationAnalyticsComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class ULamentConfigurationAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_9SD0[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.LamentConfigurationChainHuntComponent
	 * Size -> 0x01D0 (FullSize[0x0288] - InheritedSize[0x00B8])
	 */
	class ULamentConfigurationChainHuntComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5VWZ[0x78];                                  // 0x00B8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _floorChainHuntTimeBetweenChainStrikes;                  // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9LO5[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _chainHuntChargeTime;                                    // 0x0138(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _chainNumberPerChainHuntCluster;                         // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _timeBetweenChainHuntClusterStrikes;                     // 0x01C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _killerChainHuntEffectsComponentClass;                   // 0x01C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _survivorChainHuntEffectsComponentClass;                 // 0x01D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK25KillerChainHuntEffectsComponent*                 _killerChainHuntEffectsComponent;                        // 0x01D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UK25SurvivorChainHuntEffectsComponent*>       _chainHuntEffectsComponents;                             // 0x01E0(0x0010) ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4SOH[0x30];                                  // 0x01F0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cachedAdditiveChainStrikeDelayTime;                     // 0x0220(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T9F2[0x34];                                  // 0x0224(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FChainHuntStateData                                 _chainHuntStateData;                                     // 0x0258(0x0010) Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		EChainHuntState                                            _oldChainHuntState;                                      // 0x0268(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LRPW[0x1F];                                  // 0x0269(0x001F) MISSED OFFSET (PADDING)

	public:
		void OnRep_ChainHuntStateData();
		float GetChainHuntProgressPercentage();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.LamentConfigurationOutlineStrategy
	 * Size -> 0x0068 (FullSize[0x0128] - InheritedSize[0x00C0])
	 */
	class ULamentConfigurationOutlineStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _noChainHuntProgressColor;                               // 0x00C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _chainHuntActiveColor;                                   // 0x00D0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _killerColor;                                            // 0x00E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GML4[0x38];                                  // 0x00F0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.LamentConfigurationPlayerAnalyticsComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class ULamentConfigurationPlayerAnalyticsComponent : public UActorComponent
	{
	public:
		int32_t                                                    _analyticsCount;                                         // 0x00B8(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3W29[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLamentConfigurationPlayerPossessionData            _possessionAnalytics;                                    // 0x00C0(0x0018) Net, NativeAccessSpecifierPrivate

	public:
		void OnRep_AnalyticsCount();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.LamentConfigurationSpawnStrategy
	 * Size -> 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
	 */
	class ULamentConfigurationSpawnStrategy : public UActorComponent
	{
	public:
		float                                                      _killerPointDistanceMultiplier;                          // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _survivorPointDistanceMultiplier;                        // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _maxDistancePointAllowed;                                // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minSurvivorDistance;                                    // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minSurvivorDistancePointPenalty;                        // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minKillerDistance;                                      // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minHatchDistance;                                       // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minDistanceFromOtherSpawns;                             // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X112[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _minKillerDistancePointPenalty;                          // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _numberOfSpawnPointInLottery;                            // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _pointPenaltyPerUsedLocationTime;                        // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AU5Q[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETileSpawnPointType>                                _spawnPointsTypes;                                       // 0x00F0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      _downRaycastLength;                                      // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rayCastZOffet;                                          // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _navmeshCheckRadius;                                     // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G28H[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLamentConfigurationSpawnInfo>               _cached_spawnsInfo;                                      // 0x0110(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AHatch*>                                      _hatches;                                                // 0x0120(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.OwningPlayerInLamentConfigurationRange
	 * Size -> 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
	 */
	class UOwningPlayerInLamentConfigurationRange : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		unsigned char                                              UnknownData_NW6P[0x20];                                  // 0x0100(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.S28P01
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class US28P01 : public UPerk
	{
	public:
		float                                                      _auraRevealDuration[0x3];                                // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _auraRevealRange[0x3];                                   // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _S28P01ChargeableComponent;                              // 0x03E0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPerkActive;                                           // 0x03E8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInteractionOngoing;                                   // 0x03E9(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_94EE[0x6];                                   // 0x03EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _playerOwner;                                            // 0x03F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_S28P01ChargeableComponent();
		void OnRep_IsPerkActive();
		void OnRep_IsInteractionOngoing();
		float GetAuraRevealRange();
		float GetAuraRevealDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.S28P01AuraReveal
	 * Size -> 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
	 */
	class US28P01AuraReveal : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_4VBV[0x60];                                  // 0x0740(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.S28P02
	 * Size -> 0x0040 (FullSize[0x04C0] - InheritedSize[0x0480])
	 */
	class US28P02 : public UBoonPerk
	{
	public:
		float                                                      _healingSpeedGainPercentage[0x3];                        // 0x0480(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _canSelfHeal;                                            // 0x048C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ALN6[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _selfHealSpeedPenalty[0x3];                              // 0x0490(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QXZ1[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _healingSpeedIncreaseEffect;                             // 0x04A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _allowSelfHealEffectClass;                               // 0x04A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _selfHealSpeedPenaltyEffectClass;                        // 0x04B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _revealInjuredPlayersInBoonRangeEffectClass;             // 0x04B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetSelfHealSpeedPenaltyAtLevel();
		float GetHealingSpeedGainPercentageAtLevel();
		bool CanSelfHeal();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK25.S28P03
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class US28P03 : public UBoonPerk
	{
	public:
		float                                                      _lingerDuration[0x3];                                    // 0x0480(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S7U0[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (PADDING)

	public:
		float GetLingerDurationAtLevel();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
