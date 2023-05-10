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
	 * Class TheK26.AISkill_Interaction_DismissCrow
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UAISkill_Interaction_DismissCrow : public UAISkill_Interaction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.CorrectiveAction
	 * Size -> 0x0050 (FullSize[0x0418] - InheritedSize[0x03C8])
	 */
	class UCorrectiveAction : public UPerk
	{
	public:
		float                                                      _startingTokens[0x3];                                    // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _statusEffectName;                                       // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _allowedInteractionSemanticsForToken;                    // 0x03E0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IGRT[0x18];                                  // 0x0400(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.HexPentimento
	 * Size -> 0x0070 (FullSize[0x04B8] - InheritedSize[0x0448])
	 */
	class UHexPentimento : public UHexPerk
	{
	public:
		unsigned char                                              _statusEffectNames[0x50];                                // 0x0448(0x0050) UNKNOWN PROPERTY: SetProperty
		class UClass*                                              _rekindleInteractionClass;                               // 0x0498(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ATotem*>                                      _blockedTotems;                                          // 0x04A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0FMC[0x8];                                   // 0x04B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.HinderOnCrowAttachStatusEffect
	 * Size -> 0x00B8 (FullSize[0x0410] - InheritedSize[0x0358])
	 */
	class UHinderOnCrowAttachStatusEffect : public UBaseLingeringStatusEffect
	{
	public:
		struct FGameplayTag                                        _onCrowAttachStateTag;                                   // 0x0358(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MWVZ[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _hinderOnIdleLingerTime;                                 // 0x0368(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_256D[0x28];                                  // 0x03E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.HinderOnIdleAndAttachStatusEffect
	 * Size -> 0x0038 (FullSize[0x03C8] - InheritedSize[0x0390])
	 */
	class UHinderOnIdleAndAttachStatusEffect : public ULingeringStateTagStatusEffect
	{
	public:
		struct FGameplayTag                                        _onCrowAttachStateTag;                                   // 0x0390(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RD8D[0x2C];                                  // 0x039C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26AbilitySubAnimInstance
	 * Size -> 0x0090 (FullSize[0x05E0] - InheritedSize[0x0550])
	 */
	class UK26AbilitySubAnimInstance : public UBaseKillerAnimInstance
	{
	public:
		float                                                      _fireInteractionCooldownTime;                            // 0x0550(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLMF[0x4];                                   // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _fireInteractionCooldownTimeTunable;                     // 0x0558(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasChargingStarted;                                     // 0x05D8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasProjectileBeenSummoned;                              // 0x05D9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasChargingEnded;                                       // 0x05DA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasProjectileFired;                                     // 0x05DB(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IVAF[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnHasProjectileFired();
		void OnHasProjectileBeenSummoned(int32_t remainingAmmo, int32_t maxAmmo);
		void ConsumeHasProjectileFired();
		void ConsumeHasProjectileBeenSummoned();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26AimingGuide
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class AK26AimingGuide : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26AmmoHandlerComponent
	 * Size -> 0x0398 (FullSize[0x0450] - InheritedSize[0x00B8])
	 */
	class UK26AmmoHandlerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BFMP[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCurrentAmmoStateChanged;                               // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FTagStateBool                                       _isAmmoOnCooldown;                                       // 0x00D8(0x0030) Net, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onMaxAmmoSet;                                           // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		float                                                      _rechargeEndTime;                                        // 0x0118(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isTunableInit;                                          // 0x011C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8ILN[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _projectileClass;                                        // 0x0120(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _expirationCooldownTime;                                 // 0x0128(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDBDTunableRowHandle>                        _firedCooldownTimesPerCrow;                              // 0x01A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _cooldownReductionPerCrowFired;                          // 0x01B8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _expirationTime;                                         // 0x0238(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _expirationWarningBufferTime;                            // 0x02B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _maxAmmo;                                                // 0x02E0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _currentAmmo;                                            // 0x0360(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EK26AmmoCooldownReason                                     _lastCooldownReason;                                     // 0x0364(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EK26AmmoState                                              _currentAmmoState;                                       // 0x0365(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7SPJ[0x2];                                   // 0x0366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK26PathHandlerComponent*                            _pathHandler;                                            // 0x0368(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PowerStatusHandlerComponent*                     _statusHandler;                                          // 0x0370(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _authoritativeActorPoolComponent;                        // 0x0378(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isOutOfAmmo;                                            // 0x0380(0x0030) Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _fallbackFireCooldown;                                   // 0x03B0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DKTD[0x9C];                                  // 0x03B4(0x009C) MISSED OFFSET (PADDING)

	public:
		void SetDependencies(class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent);
		void SendHasExpiredDelegate();
		void OnMaxAmmoSetDelegate__DelegateSignature(int32_t maxAmmo);
		void OnLevelReadyToPlay();
		void OnKillerSet(class ASlasherPlayer* killer);
		void Multicast_StartRecharging(EK26AmmoCooldownReason lastCooldownReason);
		void Multicast_StartExpiring();
		void Multicast_OnCurrentAmmoStateChanged(EK26AmmoState NewState, int32_t currentAmmo, int32_t maxAmmo);
		void Multicast_OnAmmoHasBeenFired();
		void Multicast_OnAmmoExpired();
		int32_t GetMaxAmmo();
		EK26AmmoCooldownReason GetCurrentCooldownReason();
		EK26AmmoState GetCurrentAmmoState();
		int32_t GetCurrentAmmo();
		void Cosmetic_OnExpiringWarning();
		void Cosmetic_OnAmmoHasBeenFired();
		void Cosmetic_OnAmmoExpired();
		void CallOnMaxAmmoSet(const class FScriptDelegate& Callback);
		void Authority_OnAmmoInit(class AActor* initAmmo);
		void Authority_InitializePoolComponent(int32_t maxAmmo);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26AnimInstance
	 * Size -> 0x0010 (FullSize[0x0610] - InheritedSize[0x0600])
	 */
	class UK26AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isUsingPower;                                           // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CLW1[0xF];                                   // 0x0601(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26AttachedCrow
	 * Size -> 0x01C0 (FullSize[0x03F0] - InheritedSize[0x0230])
	 */
	class AK26AttachedCrow : public AActor
	{
	public:
		unsigned char                                              UnknownData_D5LZ[0x40];                                  // 0x0230(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _lingerTime;                                             // 0x0270(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _infectionDelay;                                         // 0x02F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _infectRadius;                                           // 0x0318(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PowerOutlineUpdateStrategy*                      _outlineUpdateStrategy;                                  // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _visualStaticMeshComponent;                              // 0x0350(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     _rootComponent;                                          // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PowerStatusHandlerComponent*                     _statusHandler;                                          // 0x0360(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _authority_isInfecting;                                  // 0x0368(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FK26AttachmentStatus                                _attachmentStatus;                                       // 0x0369(0x0002) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RQEN[0x85];                                  // 0x036B(0x0085) MISSED OFFSET (PADDING)

	public:
		void OnRep_AttachmentStatus();
		void Multicast_OnStopDetaching();
		void Multicast_OnStartDetaching();
		void HideOutline();
		void Cosmetic_OnStopDetaching();
		void Cosmetic_OnStartDetaching();
		void Cosmetic_OnCrowAttached();
		void Cosmetic_OnAuraShown();
		void Cosmetic_OnAuraHidden();
		void Cosmetic_OnAttachedCrowRemoved(EFK26AttachedCrowRemovalReason removalReason);
		void Authority_OnSurvivorWasUnhooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* Survivor, class AK26AttachedCrow* attachedCrow);
		void Authority_OnSurvivorExitLocker(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_OnSurvivorDroppedEnd();
		void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);
		void Authority_OnPlayerLeftGame(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_OnOtherSurvivorPerkFlagsChanged(const struct FGameplayTag& GameplayTag, bool isAdded);
		void Authority_OnOtherSurvivorGuidedActionChanged();
		void Authority_OnOtherSurvivorDamageStateChanged(ECamperDamageState before, ECamperDamageState after);
		void Authority_OnOtherAttachedCrowRemoved();
		void Authority_OnKillerSet(class ASlasherPlayer* killer);
		void Authority_OnIsWithinOtherSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange);
		void Authority_DeactivateInfection();
		void Authority_ActivateInfection();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26CooldownInteractionDefinition
	 * Size -> 0x0088 (FullSize[0x06A0] - InheritedSize[0x0618])
	 */
	class UK26CooldownInteractionDefinition : public UInteractionDefinition
	{
	public:
		struct FTunableStat                                        _cooldownTime;                                           // 0x0618(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_25WB[0x8];                                   // 0x0698(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26CrowAttachmentSubAnimInstance
	 * Size -> 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
	 */
	class UK26CrowAttachmentSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_JI98[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _hasCrowAttached;                                        // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isRemovingCrow;                                         // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0552(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0553(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDead;                                                 // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHooked;                                               // 0x0555(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInsideCloset;                                         // 0x0556(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteracting;                                          // 0x0557(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHoldingSmallItem;                                     // 0x0558(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingAimItem;                                         // 0x0559(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x055A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N1KZ[0x5];                                   // 0x055B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26CrowPlacementValidatorComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UK26CrowPlacementValidatorComponent : public UActorComponent
	{
	public:
		class UObjectPlacementValidationWithRestrictionStrategy*   _objectPlacementValidationStrategyWithRestrictions;      // 0x00B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26CrowProjectile
	 * Size -> 0x04C8 (FullSize[0x06F8] - InheritedSize[0x0230])
	 */
	class AK26CrowProjectile : public AActor
	{
	public:
		unsigned char                                              UnknownData_98D6[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCrowProjectileStateChanged;                            // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             _originalFireLocation;                                   // 0x0250(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WE4P[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EK26ProjectileState, struct FK26ProjectileStateDetails> _projectileStateDetails;                                 // 0x0260(0x0050) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _summonTime;                                             // 0x02B0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _detectionRadiusScaleX;                                  // 0x02D8(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _detectionRadiusScaleY;                                  // 0x0358(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _detectionRadiusScaleZ;                                  // 0x03D8(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _crowFireAuraVisibilityForSurvivorsTime;                 // 0x0458(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _crowSummonAuraVisibilityForSurvivorsTime;               // 0x0480(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _detectionRadiusFromAbove;                               // 0x04A8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _baseSpeed;                                              // 0x04D0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _selfDestructTimeOnDestroyed;                            // 0x04F8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _rangeToTriggerNearSurvivorSFX;                          // 0x0520(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _onPathMovementSpeedModifierCurve;                       // 0x0548(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _offPathMovementSpeedModifierCurve;                      // 0x0550(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _projectileOffPathCurveDuration;                         // 0x0558(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LCQO[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     _path;                                                   // 0x0560(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		int32_t                                                    _pooledPathIndex;                                        // 0x0570(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EK26ProjectileState                                        _currentProjectileState;                                 // 0x0574(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6K1E[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK26PowerOutlineUpdateStrategy*                      _outlineUpdateStrategy;                                  // 0x0578(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK26PowerOutlineUpdateStrategy*                      _crowFlockOutlineUpdateStrategy;                         // 0x0580(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0588(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USplineComponent*                                    _pathSplineComponent;                                    // 0x0590(0x0008) Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                _collisionStaticMeshComponent;                           // 0x0598(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                _killerInstinctStaticMeshComponent;                      // 0x05A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDSkeletalMeshComponentBudgeted*                   _visualSkeletalMeshComponent;                            // 0x05A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     _rootComponent;                                          // 0x05B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDNavModifierComponent*                            _dangerNavModifierComponent;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _k26ProjectileStateChangeDelegate;                       // 0x05C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnAcquiredChanged;                                       // 0x05D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6H3V[0x10];                                  // 0x05E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _forwardDirection;                                       // 0x05F0(0x000C) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _fireTime;                                               // 0x05FC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _currentDistanceAlongSpline;                             // 0x0600(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _offPathTime;                                            // 0x0604(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PowerStatusHandlerComponent*                     _statusHandlerComponent;                                 // 0x0608(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26AmmoHandlerComponent*                            _ammoHandlerComponent;                                   // 0x0610(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PathHandlerComponent*                            _pathHandlerComponent;                                   // 0x0618(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DEQW[0xD8];                                  // 0x0620(0x00D8) MISSED OFFSET (PADDING)

	public:
		void Server_OnSurvivorHit(EK26ProjectileState stateOnHit, class ACamperPlayer* hitSurvivor);
		void ProjectileWentOutOfBoundsEvent();
		void OnSurvivorAdded(class ACamperPlayer* survivorAdded);
		void OnRep_Path();
		void OnLevelReadyToPlay();
		void OnIsWithinSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange);
		void OnIntroCompleted();
		void Multicast_SetState(EK26ProjectileState NewState, int32_t pooledPathIndex);
		void Multicast_SetStartingPosition(const struct FVector& position, const struct FRotator& Angle);
		void Multicast_OnExpiration();
		void Local_OnSummonComplete();
		void Local_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult);
		bool IsHitboxBeingShown();
		void HideOutlineFromSurvivor();
		float GetDistanceFromFirePosition();
		void Cosmetic_OnExpiration();
		void Cosmetic_OnEnteredNearAudioRangeOfSurvivor(class ACamperPlayer* Survivor);
		void Client_LocalKillerStartSummonTimer(float killerLocalSummonTime);
		void Authority_OnSummonComplete();
		void Authority_OnScoutingOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult);
		void Authority_OnDestroyTimerExpired();
		void Authority_OnDestroyAttempt(TArray<class AActor*> instigatorsForCompletion);
		void Authority_OnCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Authority_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26CrowProjectileAnimInstance
	 * Size -> 0x0040 (FullSize[0x0300] - InheritedSize[0x02C0])
	 */
	class UK26CrowProjectileAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isInInvalidState;                                       // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInSummonState;                                        // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInIdleState;                                          // 0x02C2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInFollowPathState;                                    // 0x02C3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInOffPathState;                                       // 0x02C4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInDestroyedState;                                     // 0x02C5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingFlashlighted;                                    // 0x02C6(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4UEC[0x1];                                   // 0x02C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _flashlightProgress;                                     // 0x02C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7XQ[0x24];                                  // 0x02CC(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK26CrowProjectile*                                  _owningCrowProjectile;                                   // 0x02F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X387[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26CrowProjectilePlacementValidationStrategy
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UK26CrowProjectilePlacementValidationStrategy : public URestrictedPlacementAreaStrategy
	{
	public:
		unsigned char                                              UnknownData_SGUJ[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK26AmmoHandlerComponent*                            _ammoHandler;                                            // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26DismissCrowChargeableInteractionDefinition
	 * Size -> 0x00A0 (FullSize[0x07E0] - InheritedSize[0x0740])
	 */
	class UK26DismissCrowChargeableInteractionDefinition : public UChargeableInteractionDefinition
	{
	public:
		struct FTunableStat                                        _chargeTime;                                             // 0x0740(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK26PowerStatusHandlerComponent*                     _k26PowerStatusHandlerComponent;                         // 0x07C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isLevelReadyToPlay;                                     // 0x07C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RQD7[0x17];                                  // 0x07C9(0x0017) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		void OnKillerSet(class ASlasherPlayer* killer, class UChargeableComponent* ChargeableComponent);
		void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26FireCrowProjectileInteractionDefinition
	 * Size -> 0x0028 (FullSize[0x0640] - InheritedSize[0x0618])
	 */
	class UK26FireCrowProjectileInteractionDefinition : public UInteractionDefinition
	{
	public:
		class FScriptMulticastDelegate                             OnProjectileFired;                                       // 0x0618(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UK26CooldownInteractionDefinition*                   _cooldownInteraction;                                    // 0x0628(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26AmmoHandlerComponent*                            _ammoHandler;                                            // 0x0630(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PathHandlerComponent*                            _pathHandler;                                            // 0x0638(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26CooldownInteractionDefinition* cooldownInteraction);
		void Server_RequestFireOnAmmo(class ASlasherPlayer* killer);
		void Multicast_OnProjectileFired(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26IsLastCrowRemovalReasonDueToInteraction
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UK26IsLastCrowRemovalReasonDueToInteraction : public UEventDrivenModifierCondition
	{
	public:
		class AK26AttachedCrow*                                    _owningAttachedCrow;                                     // 0x00E8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PowerStatusHandlerComponent*                     _statusHandlerComponent;                                 // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BCST[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorStatusIndicatorSet(class AK26AttachedCrow* attachedCrow);
		void OnRep_OwningAttachedCrow();
		void OnLastRemovalReasonSet(EFK26AttachedCrowRemovalReason lastCrowRemovalReason);
		void Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* Survivor, class AK26AttachedCrow* attachedCrow);
		void Authority_OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26IsSurvivorInRangeOfAnyIdleCrow
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UK26IsSurvivorInRangeOfAnyIdleCrow : public UEventDrivenModifierCondition
	{
	public:
		class FScriptMulticastDelegate                             OnIsTrueChanged;                                         // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN1H[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _trackedSurvivor;                                        // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0JIE[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (PADDING)

	public:
		void Multicast_SetIsTrue(bool IsTrue);
		void Authority_SetVariables(class ACamperPlayer* trackedSurvivor, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent, float Range);
		void Authority_OnInRangeChanged(bool inRange);
		void Authority_OnCrowProjectileStateChanged(class AK26CrowProjectile* crowProjectile);
		void Authority_OnCrowAddedToPool(class AActor* crowProjectileActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26KillerInstinctStatusEffect
	 * Size -> 0x0090 (FullSize[0x03E0] - InheritedSize[0x0350])
	 */
	class UK26KillerInstinctStatusEffect : public UStatusEffect
	{
	public:
		struct FTunableStat                                        _lingerDuration;                                         // 0x0350(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _openExitGateInteractionClass;                           // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasInitializedLingerDuration;                           // 0x03D8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_50FV[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26OnCrowAttachLingeringStatusEffectBase
	 * Size -> 0x0060 (FullSize[0x03B0] - InheritedSize[0x0350])
	 */
	class UK26OnCrowAttachLingeringStatusEffectBase : public UStatusEffect
	{
	public:
		struct FGameplayTag                                        _onCrowAttachStateTag;                                   // 0x0350(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JNGF[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _lingerTime;                                             // 0x0360(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O8LX[0x28];                                  // 0x0388(0x0028) MISSED OFFSET (PADDING)

	public:
		float GetLingerTime();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26P01
	 * Size -> 0x0080 (FullSize[0x0448] - InheritedSize[0x03C8])
	 */
	class UK26P01 : public UPerk
	{
	public:
		float                                                      _generatorBlockDuration[0x3];                            // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _auraRevealDuration[0x3];                                // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _generatorAuraColorForKiller;                            // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _survivorsToBeHooked;                                    // 0x03F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XZQ3[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _timedRevealToKillerClass;                               // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AGenerator*>                                  _blockedGenerators;                                      // 0x0400(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      _hookedSurvivors;                                        // 0x0410(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FFastTimer>                                  _generatorBlockingTimers;                                // 0x0420(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _timedRevealToKillerEffect;                              // 0x0430(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TQ9A[0x10];                                  // 0x0438(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_BlockedGenerators();
		void Authority_OnBlockTimerDone(class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26P02
	 * Size -> 0x0070 (FullSize[0x0438] - InheritedSize[0x03C8])
	 */
	class UK26P02 : public UPerk
	{
	public:
		unsigned char                                              UnknownData_POPW[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _generatorRegressPercentage[0x3];                        // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_074E[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _hookedPlayers[0x50];                                    // 0x03E0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_T61J[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (PADDING)

	public:
		void Multicast_TriggerPerk(class AGenerator* explodingGenerator);
		float GetGeneratorRegressPercentageAtLevel();
		void Cosmetic_MakeSurvivorScream(class ADBDPlayer* screamingSurvivor);
		void Authority_OnSurvivorHookedOnScourgeHook(const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26PathHandlerComponent
	 * Size -> 0x0178 (FullSize[0x0230] - InheritedSize[0x00B8])
	 */
	class UK26PathHandlerComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _maxPathDistance;                                        // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _survivorPathVisibilityTimeOnFire;                       // 0x00E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _defaultProjectileDistanceFromFloor;                     // 0x0108(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxPathIterations;                                      // 0x0130(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxGroundSearchingDistance;                             // 0x0158(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _visualPathPart;                                         // 0x0180(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _visualPathEndArrow;                                     // 0x0188(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _projectileSummonDistance;                               // 0x0190(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26AmmoHandlerComponent*                            _ammoHandler;                                            // 0x01B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26CrowPlacementValidatorComponent*                 _placementValidator;                                     // 0x01C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FK26PathData>                                _availablePathData;                                      // 0x01C8(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<struct FK26Path>                                    _availablePaths;                                         // 0x01D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B6EU[0x48];                                  // 0x01E8(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26CrowPlacementValidatorComponent* placementValidator);
		void OnRep_AvailablePathData();
		void OnIterativeAvailablePathUpdate();
		void Multicast_FillAvailablePathArray(int32_t maxAmmo);
		void Authority_OnMaxAmmoSet(int32_t maxAmmo);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26PathPart
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class AK26PathPart : public AActor
	{
	public:
		class UStaticMeshComponent*                                _mesh;                                                   // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   _visualEffectKiller;                                     // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   _visualEffectSurvivor;                                   // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK26PowerOutlineUpdateStrategy*                      _outlineUpdateStrategy;                                  // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     _rootComponent;                                          // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isVisibleForSurvivor;                                   // 0x0260(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isVisibleForKiller;                                     // 0x0261(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z3BJ[0x6];                                   // 0x0262(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26PowerChargePresentationItemProgressComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UK26PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UK26AmmoHandlerComponent*                            _ammoHandler;                                            // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26PowerChargePresentationPowerFadeComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UK26PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
	{
	public:
		class UK26AmmoHandlerComponent*                            _ammoHandler;                                            // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26PowerOutlineUpdateStrategy
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UK26PowerOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _k26ProjectileOutlineColour;                             // 0x00C0(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isOutlineEnabled;                                       // 0x00D0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isOnlyVisibleForKiller;                                 // 0x00D1(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GUQL[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetOutlineVisibility(bool IsActive);
		bool IsOutlineVisible();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26PowerStatusHandlerComponent
	 * Size -> 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
	 */
	class UK26PowerStatusHandlerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ZYTH[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      _interactionsDuringWhichTheCrowIsIgnored;                // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OKUU[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _invincibilityTime;                                      // 0x00F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _killerInstinctDelay;                                    // 0x0118(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _killerInstinctGracePeriod;                              // 0x0140(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _statusIndicatorClass;                                   // 0x0168(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _k26KillerInstinctStatusEffectName;                      // 0x0170(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BGGI[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FK26SurvivorStatus>                          _survivorStatusList;                                     // 0x0180(0x0010) Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void Multicast_OnStopRemovingCrow(class ACamperPlayer* Survivor);
		void Multicast_OnStartRemovingCrow(class ACamperPlayer* Survivor);
		void Multicast_OnIdleCrowInterrupt(class ACamperPlayer* Survivor);
		void Multicast_OnCrowDetached(class ACamperPlayer* Survivor);
		void Multicast_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* Survivor);
		void Multicast_OnCrowAttached(class ACamperPlayer* Survivor);
		void Cosmetic_OnCrowIdleInterrupt(class ACamperPlayer* Survivor);
		void Cosmetic_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* Survivor);
		void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);
		void Authority_OnKillerInstinctTimePassed(class ACamperPlayer* Survivor);
		void Authority_OnIntroCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition
	 * Size -> 0x0220 (FullSize[0x0960] - InheritedSize[0x0740])
	 */
	class UK26SpawnCrowProjectileChargeableInteractionDefinition : public UChargeableInteractionDefinition
	{
	public:
		class FScriptMulticastDelegate                             OnChargingStarted;                                       // 0x0740(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChargingStopped;                                       // 0x0750(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProjectileSummoned;                                    // 0x0760(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _chargeCooldownTime;                                     // 0x0770(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _summonCooldownTime;                                     // 0x0798(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pathLength;                                             // 0x07C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _projectileHeight;                                       // 0x07E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _projectileSummonDistance;                               // 0x0810(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _cooldownGracePeriodPercentage;                          // 0x0838(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _globalSpawnCooldownTime;                                // 0x0860(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pathDistanceCheckAttempts;                              // 0x0888(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _aimingGuideClass;                                       // 0x08B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK26AimingGuide*                                     _local_aimingGuide;                                      // 0x08B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isConfirmButtonPressed;                                 // 0x08C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JMG1[0x7];                                   // 0x08C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK26AmmoHandlerComponent*                            _ammoHandler;                                            // 0x08C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PathHandlerComponent*                            _pathHandler;                                            // 0x08D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK26PowerStatusHandlerComponent*                     _statusHandler;                                          // 0x08D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _firedFullyChargedEvent;                                 // 0x08E0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isWaitingForSummonAcknowledgement;                      // 0x08E1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SH4S[0x6];                                   // 0x08E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _globalCooldownMovementSpeedCurve;                       // 0x08E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9XTI[0x70];                                  // 0x08F0(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetSummonCooldown();
		void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler);
		void Server_PlaceProjectileWithPath(class ASlasherPlayer* killer, const struct FVector& projectileSpawnPoint, float killerLocalTime);
		void OnSummonCooldownComplete();
		void OnConfirmButtonPressed(class ASlasherPlayer* killer);
		void Multicast_OnK26CrowSummoned(class ASlasherPlayer* killer, int32_t remainingAmmo, int32_t maxAmmo);
		void Multicast_OnK26CrowSummonAttemptAcknowledged();
		void Local_OnGlobalCooldownDone(class ADBDPlayer* Player);
		bool IsSummonOnCooldown();
		void Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible();
		void Cosmetic_OnFullyCharged(class ADBDPlayer* Player);
		void Cosmetic_LocalOnSummonCooldownComplete(int32_t amountOfAmmoLeft, bool isInteractionActive);
		bool CanSummonCrowOnceFullyCharged();
		bool CanSummonCrow();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.Overcome
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class UOvercome : public UPerk
	{
	public:
		float                                                      _exhaustionDuration[0x3];                                // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _injuredModifiedMovementSpeedBurstDurationWindow;        // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _exhaustedEffectToImpose;                                // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _injuredModifiedMovementSpeedBurstStatusEffectToImpose;  // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UActivatableExhaustedEffect*                         _exhaustedEffect;                                        // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _injuredModifiedMovementSpeedBurstStatusEffect;          // 0x03F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.RekindledTotem
	 * Size -> 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
	 */
	class ARekindledTotem : public AStaticMeshActor
	{
	public:
		struct FLinearColor                                        _auraColor;                                              // 0x0240(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USourceBasedOutlineUpdateStrategy*                   _outlineStrategy;                                        // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YZ0I[0x28];                                  // 0x0260(0x0028) MISSED OFFSET (PADDING)

	public:
		void RebuildTotem(class ATotem* Totem);
		void OnParentTotemEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void Cosmetic_ShowShadowTotem(bool instant);
		void Cosmetic_HideShadowTotem(bool instant);
		void CleanseTotem(class ATotem* Totem, ETotemState oldTotemState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.RekindleTotemInteraction
	 * Size -> 0x0028 (FullSize[0x0640] - InheritedSize[0x0618])
	 */
	class URekindleTotemInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_O1YV[0x8];                                   // 0x0618(0x0008) Fix Super Size
		class UClass*                                              _rekindledTotemClass;                                    // 0x0620(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ARekindledTotem*                                     _rekindledTotem;                                         // 0x0628(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9JTV[0x10];                                  // 0x0630(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK26.S29P03
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class US29P03 : public UBoonPerk
	{
	public:
		float                                                      _recoverSpeedPercentage[0x3];                            // 0x0480(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FT35[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
