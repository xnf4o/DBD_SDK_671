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
	 * Class TheK29.AISkill_FindCollectable_K29SupplyCrate
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UAISkill_FindCollectable_K29SupplyCrate : public UAISkill_FindCollectable_Searchable
	{
	public:
		struct FAITunableParameter                                 UrgencyGoalWeight;                                       // 0x0148(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.AISkill_InteractionUseItem_K29StabilizingSpray
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_K29StabilizingSpray : public UAISkill_InteractionUseItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.AISkill_InteractionUseItem_K29StabilizingSprayOther
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UAISkill_InteractionUseItem_K29StabilizingSprayOther : public UAISkill_InteractionUseItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29AnimInstance
	 * Size -> 0x0030 (FullSize[0x0630] - InheritedSize[0x0600])
	 */
	class UK29AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isRushing;                                              // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHoldingSurvivor;                                      // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChargingRushing;                                      // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBetweenRushes;                                        // 0x0603(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isThrowing;                                             // 0x0604(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBouncingBack;                                         // 0x0605(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasStartedFinalRush;                                    // 0x0606(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasRushEndedInSurvivorImpact;                           // 0x0607(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasRushEndedInLedgeDrop;                                // 0x0608(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasInstantlyPickedUpSurvivor;                           // 0x0609(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isReadyToRushButHasNoPath;                              // 0x060A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZB1E[0x25];                                  // 0x060B(0x0025) MISSED OFFSET (PADDING)

	public:
		void ResetStartThrowingSurvivor();
		void ResetHasRushEndedInSurvivorImpact();
		void ResetHasRushEndedInLedgeDrop();
		void ResetHasInstantlyPickedUpSurvivor();
		void OnStartThrowingSurvivor();
		void OnHasRushEndedInSurvivorImpact();
		void OnHasRushEndedInLedgeDrop();
		void OnHasInstantlyPickedUpSurvivor();
		void OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29GateBlockerStatusEffect
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class UK29GateBlockerStatusEffect : public ULingeringMultiStateTagStatusEffect
	{
	public:
		class FName                                                _escapeZoneBoxComponentTagName;                          // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FUNE[0x14];                                  // 0x03DC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29HinderedStatusEffect
	 * Size -> 0x00D0 (FullSize[0x0420] - InheritedSize[0x0350])
	 */
	class UK29HinderedStatusEffect : public UStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _maximumMovementSpeedDecrease;                           // 0x0350(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _minimumMovementSpeedDecrease;                           // 0x0378(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U5J9[0x80];                                  // 0x03A0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29InfectionRemovalCollectable
	 * Size -> 0x0048 (FullSize[0x0540] - InheritedSize[0x04F8])
	 */
	class AK29InfectionRemovalCollectable : public ABaseCamperCollectable
	{
	public:
		class UK29InfectionRemovalItemOutlineUpdateStrategy*       _outlineUpdateStrategy;                                  // 0x04F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maxCharges;                                             // 0x0500(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XSU5[0x18];                                  // 0x0528(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29InfectionRemovalItemOutlineUpdateStrategy
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UK29InfectionRemovalItemOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		bool                                                       _isOutlineEnabled;                                       // 0x00C0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JQHP[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              _outlineColour;                                          // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetOutlineVisibility(bool IsActive);
		bool IsOutlineVisible();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29P01
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UK29P01 : public UPerk
	{
	public:
		float                                                      _survivorVaultRushedEventRange;                          // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownTime;                                           // 0x03CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8PE8[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetSurvivorVaultRushedEventRange();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29P02
	 * Size -> 0x00C8 (FullSize[0x0490] - InheritedSize[0x03C8])
	 */
	class UK29P02 : public UPerk
	{
	public:
		float                                                      _revealRange[0x3];                                       // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4A5D[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _effectClass;                                            // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<TWeakObjectPtr<class ACamperPlayer>, TWeakObjectPtr<class UStatusEffect>> _survivorRevealedEffects;                                // 0x03E0(0x0050) ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DH2A[0x60];                                  // 0x0430(0x0060) MISSED OFFSET (PADDING)

	public:
		float GetRevealRange();
		void Authority_OnInRangeChanged(bool inRange, class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29P03
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UK29P03 : public UPerk
	{
	public:
		float                                                      _brokenEffectDuration[0x3];                              // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2Z6[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _effectClass;                                            // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29P03StatusEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UK29P03StatusEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29PathingCalculatorComponent
	 * Size -> 0x0200 (FullSize[0x02B8] - InheritedSize[0x00B8])
	 */
	class UK29PathingCalculatorComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _maxStepHeight;                                          // 0x00B8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maxStepHeightDownwards;                                 // 0x00E0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _horizontalAngle;                                        // 0x0108(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _verticalAngle;                                          // 0x0130(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _gridLength;                                             // 0x0158(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _detectionHeightOffset;                                  // 0x0180(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _floorSearchLengthFromActorLocation;                     // 0x01A8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _minimumWallDashDistanceCarryingSurvivor;                // 0x01D0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _floorCheckDistance;                                     // 0x01F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6XYS[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _lineOfSightCapsuleRadius;                               // 0x0200(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _lineOfSightCapsuleHeight;                               // 0x0228(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _lineOfSightCapsuleHeightOffset;                         // 0x0250(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _maximumWalkableAngle;                                   // 0x0278(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _groundCollisionDetectionRadius;                         // 0x02A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _allowedGroundBlockerHeight;                             // 0x02A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minimalLedgeDistance;                                   // 0x02A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_27Y3[0xC];                                   // 0x02AC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29Power
	 * Size -> 0x01A0 (FullSize[0x0650] - InheritedSize[0x04B0])
	 */
	class AK29Power : public ACollectable
	{
	public:
		class UChargeableComponent*                                _rushChargeableComponent;                                // 0x04B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInteractor*                                         _interactor;                                             // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoxPlayerOverlapComponent*                          _interactionVolume;                                      // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK29PowerChargePresentationItemProgressComponent*    _powerChargePresentationItemProgressComponent;           // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK29PowerChargePresentationPowerFadeComponent*       _powerChargePresentationPowerFadeComponent;              // 0x04D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _powerStatusHandlerComponentClass;                       // 0x04D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _rushChargesHandlerComponentClass;                       // 0x04E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _pathingCalculatorComponentClass;                        // 0x04E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _blindnessProtectionStatusEffectClass;                   // 0x04F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _rushChargeTime;                                         // 0x04F8(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FStatProperty                                       _scorePercent;                                           // 0x0578(0x0088) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _moriTentaclesAnimationFollowerActorClass;               // 0x0600(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OBUH[0x8];                                   // 0x0608(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK29PowerStatusHandlerComponent*                     _powerStatusHandlerComponent;                            // 0x0610(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK29RushChargesHandlerComponent*                     _rushChargesHandlerComponent;                            // 0x0618(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK29PathingCalculatorComponent*                      _pathingCalculatorComponent;                             // 0x0620(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R4BN[0x28];                                  // 0x0628(0x0028) MISSED OFFSET (PADDING)

	public:
		class UInteractionDefinition* GetSlashSurvivorInteraction();
		class UInteractionDefinition* GetSlashBreakableInteraction();
		float GetScorePercent();
		class UK29RushCooldownInteraction* GetRushVaultCooldownInteraction();
		class UStaticMeshComponent* GetRushSurvivorDetectionBox();
		class UK29RushCooldownInteraction* GetRushCompleteSurvivorThrowCooldownInteraction();
		class UK29RushCooldownInteraction* GetRushCompleteSurvivorHitCooldownInteraction();
		class UK29RushCooldownInteraction* GetRushCompleteNoSurvivorCooldownInteraction();
		class UK29RushChargesHandlerComponent* GetRushChargesHandlerComponent();
		class UK29RushCooldownInteraction* GetRushChargeCancelCooldownInteraction();
		class UK29RushChargeableInteraction* GetRushChargeableInteraction();
		class UK29RushCooldownInteraction* GetRushBreakableCooldownInteraction();
		class UInteractionDefinition* GetPushSurvivorOverLedgeInteraction();
		class UK29PowerStatusHandlerComponent* GetPowerStatusHandlerComponent();
		class UK29RushCooldownInteraction* GetDropSurvivorCooldownInteraction();
		void Authority_OnStun(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29PowerChargePresentationItemProgressComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK29PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UK29PowerStatusHandlerComponent*                     _statusHandlerComponent;                                 // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK29RushChargesHandlerComponent*                     _rushChargesHandlerComponent;                            // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK29RushChargeableInteraction*                       _rushInteraction;                                        // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29PowerChargePresentationPowerFadeComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK29PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
	{
	public:
		class UK29RushChargesHandlerComponent*                     _rushChargesHandlerComponent;                            // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FGPJ[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetDependencies(class UK29RushChargesHandlerComponent* ammoHandler);
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29PowerStatusHandlerComponent
	 * Size -> 0x0370 (FullSize[0x0428] - InheritedSize[0x00B8])
	 */
	class UK29PowerStatusHandlerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YXN4[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxInfectionLevel;                                      // 0x00E8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _infectionAddedPerTickWhileActive;                       // 0x0110(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _stabilizingHealAmountByUsage;                           // 0x0190(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _initialInfectionLevel;                                  // 0x0198(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _addedInfectionLevelsOnGrab;                             // 0x0218(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _infectionHealingMultiplier;                             // 0x0298(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _infectionIncubationThreshold;                           // 0x0318(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _useInfectionRemoverChargeTime;                          // 0x0340(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _hinderedStatusEffectClass;                              // 0x03C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _gateBlockerStatusEffectClass;                           // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _survivorThrowableClass;                                 // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _useInfectionRemoverInteractionSelfClass;                // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _useInfectionRemoverInteractionOtherClass;               // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _maxInfectionLevelWhenHooked;                            // 0x03E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _recentlyGrabbedThresholdSeconds;                        // 0x03EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FK29SurvivorStatus>                          _survivorStatusList;                                     // 0x03F0(0x0010) Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KGAN[0x28];                                  // 0x0400(0x0028) MISSED OFFSET (PADDING)

	public:
		void Server_ReleaseSurvivor(class ACamperPlayer* Survivor, bool isForced);
		void Server_GrabSurvivor(class ACamperPlayer* Survivor, bool isProcessingInitialInfection);
		void OnRep_SurvivorStatusList(TArray<struct FK29SurvivorStatus> oldSurvivorStatus);
		void OnKillerSet(class ASlasherPlayer* killer);
		void Multicast_UseStabilizingSpray(class ACamperPlayer* targetSurvivor);
		void Multicast_RemoveSurvivorFromCloset(class ACamperPlayer* Survivor);
		void Multicast_ReleaseSurvivor(class ACamperPlayer* Survivor, bool isForced);
		void Multicast_GrabSurvivor(class ACamperPlayer* Survivor, bool isProcessingInitialInfection);
		void Multicast_DropSurvivor(class ACamperPlayer* leftSurvivor);
		int32_t GetMaxInfectionLevel();
		int32_t GetInfectionLevel(class ACamperPlayer* Survivor);
		void Cosmetic_OnGrabbingNonInfectedSurvivor();
		void Cosmetic_OnGrabbingInfectedSurvivor();
		void Authority_UseStabilizingSpray(class ACamperPlayer* instigatingSurvivor, class ACamperPlayer* targetSurvivor);
		void Authority_SetAllSurvivorsToMaxInfection();
		void Authority_SetAllSurvivorsToInitialInfection();
		void Authority_OnSurvivorImmoblizedChanged();
		void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);
		void Authority_OnSlash(class ACamperPlayer* targetSurvivor);
		void Authority_OnIntroCompleted();
		void Authority_HealInfectionLevels(class ACamperPlayer* Survivor, int32_t infectionLevelsToHeal, bool shouldSetInfectionActiveToFalse);
		void Authority_HealAllSurvivorsInfectionWithStabilizingSpray();
		void Authority_AddInfectionLevels(class ACamperPlayer* Survivor, int32_t infectionToAdd);
		void AddToTimesCuredByHeal(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29RushChargeableInteraction
	 * Size -> 0x0800 (FullSize[0x0F40] - InheritedSize[0x0740])
	 */
	class UK29RushChargeableInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_KF90[0x10];                                  // 0x0740(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK29RushChargesHandlerComponent*                     _rushChargesHandlerComponent;                            // 0x0750(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK29PowerStatusHandlerComponent*                     _powerStatusHandlerComponent;                            // 0x0758(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK29PathingCalculatorComponent*                      _pathingCalculatorComponent;                             // 0x0760(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AK29Power*                                           _powerCollectable;                                       // 0x0768(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EK29RushPhase, struct FK29RushMovementSpeedSetting>   _movementSpeedSettingsByState;                           // 0x0770(0x0050) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _subsequentRushTimerTimeoutMovementSpeedMultiplierCurve; // 0x07C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _subsequentRushTimerTimeoutMovementSpeedReductionDuration; // 0x07C8(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _subsequentRushOpportunityTimerDuration;                 // 0x0848(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _rushDuration;                                           // 0x08C8(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _rushDurationAfterFirst;                                 // 0x0948(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _capsuleRadius;                                          // 0x09C8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _survivorRevealTimeOnInstantPickup;                      // 0x09F0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _capsuleHeight;                                          // 0x0A18(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _capsuleHeightOffset;                                    // 0x0A40(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _bounceDuration;                                         // 0x0A68(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _rushAccelerationMultiplier;                             // 0x0A90(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _instantCarryAnimationDuration;                          // 0x0AB8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _percentageForRushChargeEndAvailability;                 // 0x0AE0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _distanceInCmForNearMiss;                                // 0x0AE4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rushDetectionBackwardsOffset;                           // 0x0AE8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WF8E[0x4];                                   // 0x0AEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _revealToSurvivorsStatusEffect;                          // 0x0AF0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _rushMovementSpeedInCmPerSecond;                         // 0x0AF8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _rushGrabMovementSpeedInCmPerSecond;                     // 0x0B20(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _grabRushDuration;                                       // 0x0B48(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rotationStrengthTransitionTime;                         // 0x0BC8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6VAC[0x4];                                   // 0x0BCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _minimumRushDistance;                                    // 0x0BD0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _intoGrabbingTime;                                       // 0x0BF8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _smashOutTimerDuration;                                  // 0x0C20(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _isStoppingMomentumAtIntoGrabbing;                       // 0x0C48(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _movementSpeedCurveBetweenRushesIncreased;               // 0x0C70(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _movementSpeedCurveChargingIncreased;                    // 0x0C78(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _rushMovementSpeedCurve;                                 // 0x0C80(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _rushMovementSpeedCurveWithSurvivor;                     // 0x0C88(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _killerRushSmashAnimationName;                           // 0x0C90(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _survivorRushSmashAnimationName;                         // 0x0C9C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _killerRushToCarryAnimationName;                         // 0x0CA8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _survivorRushToCarryAnimationName;                       // 0x0CB4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _survivorRushDropAnimationName;                          // 0x0CC0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _killerRushCooldownAnimationName;                        // 0x0CCC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _animTagFPV;                                             // 0x0CD8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lagInSecondsUntilRushIsInvalid;                         // 0x0CE4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _rushDropForwardDistance;                                // 0x0CE8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _decisiveStrikeSkillCheckDelay;                          // 0x0CEC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isLagChecked;                                           // 0x0CF0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_33ZJ[0x7];                                   // 0x0CF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      _survivorInteractionPreventingGrab;                      // 0x0CF8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AVN4[0x238];                                 // 0x0D08(0x0238) MISSED OFFSET (PADDING)

	public:
		void Server_SlashAtSurvivor(class ACamperPlayer* Survivor, const struct FVector& currentKillerPosition);
		void Server_SetCurrentRushAsEndingInCollision(bool hitOtherSurvivor);
		void Server_SetCurrentRushAsEndingAtLedge();
		void Server_SetCurrentRush(const struct FK29GuidedMovementInstance& newRushInstance, EK29RushPhase targetPhase);
		void Server_DestroyPalletOrBreakable(class AActor* destroyable);
		void Server_DamageSurvivorAsCollision(class ACamperPlayer* Survivor, const struct FVector& currentKillerPosition);
		void Server_ChangeRushPhase(EK29RushPhase newRushPhase, bool forceLocallyControlled);
		void Server_CancelInteraction();
		void RushComplete(bool rushEndedNaturally);
		void OnWindowOfOpportunityTimeoutCooldownEnd();
		void OnSubsequentRushOpportunityTimeout();
		void OnSmashOutTimerCompleted();
		void OnInstantCarryTimerComplete(class ACamperPlayer* survivorToCarry);
		void OnGrabbingTransitionComplete();
		void OnCollisionEnableTimerComplete();
		void Multicast_SmashSurvivor(class ACamperPlayer* survivorToCarry);
		void Multicast_SlashAtSurvivor(class ACamperPlayer* Survivor, const struct FVector& currentKillerPosition, ECamperDamageState survivorTargetDamageState);
		void Multicast_SetCurrentRushAsEndingInCollision();
		void Multicast_SetCurrentRushAsEndingAtLedge();
		void Multicast_SetCurrentRush(const struct FK29GuidedMovementInstance& newRushInstance);
		void Multicast_RushValid();
		void Multicast_RushInvalid();
		void Multicast_DestroyPalletOrBreakable(class AActor* destroyable);
		void Multicast_DamageSurvivorAsCollision(const struct FVector& currentKillerPosition, class ACamperPlayer* collidedSurvivor, ECamperDamageState survivorTargetDamageState);
		void Multicast_ChangeRushPhase(EK29RushPhase newRushPhase, bool forceLocallyControlled);
		void Multicast_CarrySurvivor(class ACamperPlayer* survivorToCarry);
		void Multicast_CancelInteraction();
		float GetRushTimeLeft();
		void Cosmetic_ShowEndIndicator(const struct FVector& endIndicatorLocation, const struct FRotator& forwardRotation);
		void Cosmetic_OnSlashAtSurvivor(class ACamperPlayer* Survivor, ECamperDamageState survivorTargetDamageState);
		void Cosmetic_OnRushStart();
		void Cosmetic_OnRushPhaseChanged(EK29RushPhase previousPhase, EK29RushPhase newPhase);
		void Cosmetic_OnRushEnd();
		void Cosmetic_OnChargeStart();
		void Cosmetic_OnChargeEnd();
		void Cosmetic_HideEndIndicator();
		void Cosmetic_DamageSurvivorAsCollision(class ACamperPlayer* Survivor, ECamperDamageState survivorTargetDamageState);
		void BounceComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29RushChargesHandlerComponent
	 * Size -> 0x0170 (FullSize[0x0228] - InheritedSize[0x00B8])
	 */
	class UK29RushChargesHandlerComponent : public UActorComponent
	{
	public:
		struct FTunableStat                                        _maximumRushCharges;                                     // 0x00B8(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _rechargeTimeByChargesLeft;                              // 0x0138(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _rechargeDurationMultiplier;                             // 0x0140(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _reducedChargeTimePerInfectionPlayers;                   // 0x01C0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1PX6[0x40];                                  // 0x01E8(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetToFullCharge();
		void OnMaximumChargesChanged(float NewValue);
		void OnKillerSet(class ASlasherPlayer* killer);
		float GetPercentageRemainingUntilNextCharge();
		int32_t GetMaximumCharges();
		int32_t GetAvailableCharges();
		void Cosmetic_OnRushChargeAdded();
		void Cosmetic_OnOutOfRushCharges();
		void AddSingleCharge();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29RushCooldownInteraction
	 * Size -> 0x00E8 (FullSize[0x0700] - InheritedSize[0x0618])
	 */
	class UK29RushCooldownInteraction : public UInteractionDefinition
	{
	public:
		struct FTunableStat                                        _cooldownTime;                                           // 0x0618(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCameraRestrictedForDuration;                          // 0x0698(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QSX3[0x7];                                   // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _cameraRestrictionTime;                                  // 0x06A0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QNO5[0x38];                                  // 0x06C8(0x0038) MISSED OFFSET (PADDING)

	public:
		void ResetCameraInputLimit();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29SurvivorAnimInstance
	 * Size -> 0x0068 (FullSize[0x05B0] - InheritedSize[0x0548])
	 */
	class UK29SurvivorAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_9KD1[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _isBeingGrabbed;                                         // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingThrown;                                          // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isKillerLocallyControlled;                              // 0x0552(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingInfectionRemoverOnSelf;                          // 0x0553(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingInfectionRemoverOnOther;                         // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInfectionRemoverUsedOnSelf;                           // 0x0555(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasLastThrowResultedInDamage;                           // 0x0556(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInfectionActive;                                      // 0x0557(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasBeenThrown;                                          // 0x0558(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCoughing;                                             // 0x0559(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IQNB[0x2];                                   // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _timeBetweenRandomCoughingTry;                           // 0x055C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _randomCoughMinProbabilityRange;                         // 0x0560(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _randomCoughMaxProbabilityRange;                         // 0x0564(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _randomCoughProbabilityThreshold;                        // 0x0568(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x056C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInsideCloset;                                         // 0x056D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDead;                                                 // 0x056E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteracting;                                          // 0x056F(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInjured;                                              // 0x0570(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHoldingObject;                                        // 0x0571(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x0572(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHooked;                                               // 0x0573(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0574(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingAimItem;                                         // 0x0575(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInAir;                                                // 0x0576(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingHealed;                                          // 0x0577(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2X1S[0x38];                                  // 0x0578(0x0038) MISSED OFFSET (PADDING)

	public:
		void ResetHasBeenThrown();
		void OnHasBeenThrown();
		void OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29SurvivorCarriableComponent
	 * Size -> 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
	 */
	class UK29SurvivorCarriableComponent : public UActorComponent
	{
	public:
		class FName                                                _rootJointName;                                          // 0x00B8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            _startingRotation;                                       // 0x00C4(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector                                             _startingPosition;                                       // 0x00D0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isCarriedByK29Rush;                                     // 0x00DC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EZTJ[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _killerIngoreTime;                                       // 0x00E0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ACamperPlayer>                        _owningSurvivor;                                         // 0x00E4(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BUVM[0x44];                                  // 0x00EC(0x0044) MISSED OFFSET (PADDING)

	public:
		void OnRep_OwningSurvivor();
		void OnKillerSet(class ASlasherPlayer* killer);
		bool IsBeingCarriedByK29RushOrMarkedForThrow();
		void EnableCollision();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29SurvivorCosmeticHelperActor
	 * Size -> 0x00C8 (FullSize[0x0330] - InheritedSize[0x0268])
	 */
	class AK29SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
	{
	public:
		unsigned char                                              UnknownData_AD75[0xC8];                                  // 0x0268(0x00C8) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorGrabbed(class ACamperPlayer* Survivor);
		void OnOwnerLocallyObserved(bool locallyObserved);
		void OnLevelReadyToPlay();
		void OnInfectionRemovalCollectableUsed(class ACamperPlayer* Survivor);
		void OnInfectionLevelsChanged(class ACamperPlayer* targetSurvivor, bool IsActive);
		bool IsInfectionIncubated();
		bool IsInfectionCritical();
		bool IsInfectionActive();
		bool IsInfected();
		int32_t GetMaximumInfectionLevels();
		float GetCurrentInfectionPercentage();
		int32_t GetCurrentInfectionLevels();
		void Cosmetic_OnOwningSurvivorHitCollisionWithRush();
		void Cosmetic_OnOwningSurvivorDied();
		void Cosmetic_OnLocallyObservedChanged();
		void Cosmetic_OnInfectionRemovalCollectableUsed();
		void Cosmetic_OnInfectionLevelsChanged(bool IsActive);
		void Cosmetic_IsInfectionIncubatedChanged(bool IsInfectionIncubated);
		void Cosmetic_IsInfectionCriticalChanged(bool IsInfectionCritical);
		void Cosmetic_IsInfectedChanged(bool IsInfected);
		void Cosmetic_IsInfectedActiveChanged(bool IsInfectionActive);
		void Cosmetic_GrabbedByKiller();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29SurvivorStatusComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK29SurvivorStatusComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1KK5[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UK29PowerStatusHandlerComponent>      _powerStatusHandlerComponent;                            // 0x00C0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ACamperPlayer>                        _owningSurvivor;                                         // 0x00C8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29SurvivorThrowableComponent
	 * Size -> 0x0318 (FullSize[0x03D0] - InheritedSize[0x00B8])
	 */
	class UK29SurvivorThrowableComponent : public UActorComponent
	{
	public:
		struct FTunableStat                                        _throwDuration;                                          // 0x00B8(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _capsuleRadius;                                          // 0x0138(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _capsuleHeight;                                          // 0x0160(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _capsuleHeightOffset;                                    // 0x0188(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _minimumThrowDistance;                                   // 0x01B0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _throwMovementSpeedInCmPerSecond;                        // 0x01D8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _movingDelay;                                            // 0x0200(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _throwDelay;                                             // 0x0228(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _throwLedgeDropDistance;                                 // 0x0250(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _throwLedgeDropTime;                                     // 0x0278(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _throwMovementSpeedMultiplierCurve;                      // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _throwAccelerationMultiplier;                            // 0x02A8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WBKV[0x100];                                 // 0x02D0(0x0100) MISSED OFFSET (PADDING)

	public:
		void Server_EndThrow();
		void Server_CancelThrowOnOtherSurvivorCollision(const struct FVector& collisionPosition, class ACamperPlayer* survivorUsedAsCollision);
		void OnWalkingAllowedAfterFall();
		void OnThrowTimeout();
		void Multicast_SetCurrentThrow(const struct FK29GuidedMovementInstance& throwInstance, class ACamperPlayer* thrownSurvivor);
		void Multicast_InstantlyLetGoSurvivor(bool hasDealtDamage);
		void Multicast_EndThrow();
		void Multicast_CancelThrowOnOtherSurvivorCollision(const struct FVector& collisionPosition, class ACamperPlayer* survivorUsedAsCollision);
		void EndThrow();
		void Cosmetic_OnSurvivorUsedAsCollision(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29UseInfectionRemoverInteraction
	 * Size -> 0x0038 (FullSize[0x0778] - InheritedSize[0x0740])
	 */
	class UK29UseInfectionRemoverInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UClass*                                              _killerInstinctClass;                                    // 0x0740(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _killerInstinctDuration;                                 // 0x0748(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZU4R[0x8];                                   // 0x0770(0x0008) Fix size for supers

	public:
		void OnSurvivorCured_Cosmetic();
		class ACamperPlayer* GetInteractionTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29UseInfectionRemoverInteractionOther
	 * Size -> 0x0018 (FullSize[0x0790] - InheritedSize[0x0778])
	 */
	class UK29UseInfectionRemoverInteractionOther : public UK29UseInfectionRemoverInteraction
	{
	public:
		class UClass*                                              _crouchBlockStatusEffectClass;                           // 0x0778(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q1ZA[0x8];                                   // 0x0780(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _crouchBlockStatusEffect;                                // 0x0788(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29UseInfectionRemoverInteractionSelf
	 * Size -> 0x0008 (FullSize[0x0780] - InheritedSize[0x0778])
	 */
	class UK29UseInfectionRemoverInteractionSelf : public UK29UseInfectionRemoverInteraction
	{
	public:
		unsigned char                                              UnknownData_17QB[0x8];                                   // 0x0778(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.K29Utilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK29Utilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsSurvivorAbleToBeAffectedByPower(class AActor* survivorAsActor, class ASlasherPlayer* killer);
		class AK29Power* STATIC_GetK29Power(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.ReassuranceCondition
	 * Size -> 0x0050 (FullSize[0x0230] - InheritedSize[0x01E0])
	 */
	class UReassuranceCondition : public UIsInRangeOfHookedSurvivor
	{
	public:
		unsigned char                                              UnknownData_BC6S[0x50];                                  // 0x01E0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S32P01
	 * Size -> 0x0040 (FullSize[0x04F8] - InheritedSize[0x04B8])
	 */
	class US32P01 : public UGeneratorTrapPerk
	{
	public:
		float                                                      _generatorRevealRange;                                   // 0x04B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTP1[0x4];                                   // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _revealEffect;                                           // 0x04C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _revealStatus;                                           // 0x04C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isKillerInRange;                                        // 0x04D0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_18LP[0x27];                                  // 0x04D1(0x0027) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsKillerInRange();
		float GetGeneratorRevealRange();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S32P02
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class US32P02 : public UPerk
	{
	public:
		float                                                      _hitDistanceToTriggerPerkEffect[0x3];                    // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _healingProgressionIncreasedOnHit[0x3];                  // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S32P03
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class US32P03 : public UPerk
	{
	public:
		float                                                      _activationTime[0x3];                                    // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OEI6[0xC];                                   // 0x03D4(0x000C) MISSED OFFSET (PADDING)

	public:
		float GetActivationTimeForLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S33P01
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class US33P01 : public UPerk
	{
	public:
		class UClass*                                              _S33P01StatusEffect;                                     // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _interactionProgressionAmount[0x3];                      // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AJ87[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S33P01StatusEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class US33P01StatusEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_ZX6P[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S33P02
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class US33P02 : public UPerk
	{
	public:
		float                                                      _distanceRadius;                                         // 0x03C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _struggleProgressionPausedDuration[0x3];                 // 0x03CC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _S33P02StatusEffect;                                     // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _reassuredSurvivors;                                     // 0x03E0(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WS8I[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReassuredSurvivors();
		void Local_EffectTriggered(const struct FTransform& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S33P02Interaction
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class US33P02Interaction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_RV0S[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S33p02StatusEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class US33p02StatusEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_BMBQ[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK29.S33P03
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class US33P03 : public UPerk
	{
	public:
		float                                                      _skillCheckTriggerPercentPerToken;                       // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _skillCheckCursorSpeedPerToken;                          // 0x03CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _skillCheckBonusPercentPerToken[0x3];                    // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6DHV[0x24];                                  // 0x03DC(0x0024) MISSED OFFSET (PADDING)

	public:
		float GetSkillCheckTriggerPercentPerToken();
		float GetSkillCheckCursorSpeedPerToken();
		float GetSkillCheckBonusPercentPerTokenAtLevel();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
