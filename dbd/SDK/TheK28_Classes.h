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
	 * Class TheK28.Addon_K28Power_04
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class UAddon_K28Power_04 : public UItemAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.Addon_K28Power_16
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class UAddon_K28Power_16 : public UOnEventBaseAddon
	{
	public:
		TArray<class UClass*>                                      _survivorImposedEffectClasses;                           // 0x02C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		float                                                      _statusEffectTime;                                       // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WTCJ[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.Addon_K28Power_17
	 * Size -> 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
	 */
	class UAddon_K28Power_17 : public UOnEventBaseAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.Addon_K28Power_18
	 * Size -> 0x0010 (FullSize[0x02D8] - InheritedSize[0x02C8])
	 */
	class UAddon_K28Power_18 : public UOnEventBaseAddon
	{
	public:
		class UClass*                                              _survivorImposedEffectClass;                             // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _statusEffectDuration;                                   // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9T6L[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_OnIntroComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.Addon_K28Power_19
	 * Size -> 0x0038 (FullSize[0x0300] - InheritedSize[0x02C8])
	 */
	class UAddon_K28Power_19 : public UOnEventBaseAddon
	{
	public:
		class UClass*                                              _survivorImposedEffectClass;                             // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorStatusEffectTime;                               // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lockersToSlamRange;                                     // 0x02D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _montage;                                                // 0x02D8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P9UB[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Multicast_TriggerLockerAnimationOnAllLockers(TArray<class ALocker*> lockers);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.Addon_K28Power_20
	 * Size -> 0x0020 (FullSize[0x02E8] - InheritedSize[0x02C8])
	 */
	class UAddon_K28Power_20 : public UOnEventBaseAddon
	{
	public:
		unsigned char                                              UnknownData_ISQN[0x10];                                  // 0x02C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _blockingRadius;                                         // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _blockDuration;                                          // 0x02DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A751[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.Addon_K28Power_21
	 * Size -> 0x0090 (FullSize[0x0348] - InheritedSize[0x02B8])
	 */
	class UAddon_K28Power_21 : public UItemAddon
	{
	public:
		class UClass*                                              _survivorImposedEffectClass;                             // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _effectDuration;                                         // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ANQ9[0x84];                                  // 0x02C4(0x0084) MISSED OFFSET (PADDING)

	public:
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.AISkill_FindInteractable_Lockbar
	 * Size -> 0x0138 (FullSize[0x0260] - InheritedSize[0x0128])
	 */
	class UAISkill_FindInteractable_Lockbar : public UAISkill_FindInteractable
	{
	public:
		float                                                      LockerTopHeightDiffFromActorLocation;                    // 0x0128(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 LockbarMaxDistanceFromCamper;                            // 0x012C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 LockbarMaxDistanceFromCamperTolerance;                   // 0x013C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MinLockbarWeight;                                        // 0x014C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MaxLockbarWeight;                                        // 0x015C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 HighLockbarWeightLastSeconds;                            // 0x016C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MinDistanceToReachMaxLockbarWeight;                      // 0x017C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MaxDistanceToReachMinLockbarWeight;                      // 0x018C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MaxDistanceToReachMinLockbarWeightIfNearGenerator;       // 0x019C(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 MaxHeightDifferenceFromGenerator;                        // 0x01AC(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDRH[0xA4];                                  // 0x01BC(0x00A4) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.BTService_FindObject_K28Remnant
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UBTService_FindObject_K28Remnant : public UBTService_FindObject
	{
	public:
		unsigned char                                              UnknownData_95CT[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28TeleportTarget
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK28TeleportTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.IsInRangeOfK28UsedLocker
	 * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
	 */
	class UIsInRangeOfK28UsedLocker : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_TY5V[0x38];                                  // 0x00F0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28AnimInstance
	 * Size -> 0x0040 (FullSize[0x0640] - InheritedSize[0x0600])
	 */
	class UK28AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isInLocker;                                             // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInChase;                                              // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChargingTeleportation;                                // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasTeleportationPowerCharged;                           // 0x0603(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasTeleportationBeenCancelled;                          // 0x0604(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hideHandsInFPV;                                         // 0x0605(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9R8Q[0x2];                                   // 0x0606(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _customizationAnimationSelectorClass;                    // 0x0608(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomizationAnimationSelector*                     _customizationAnimationSelector;                         // 0x0610(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_19PW[0x28];                                  // 0x0618(0x0028) MISSED OFFSET (PADDING)

	public:
		TArray<class FName> GetCustomAnimationTags();
		int32_t GetAnimationMappingIndex();
		void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28CheatComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK28CheatComponent : public UActorComponent
	{
	public:
		void DBD_K28UnlockAllLockbars();
		void DBD_K28TriggerNextNightCycle();
		void DBD_K28SetPowerNoCooldown(bool noCooldown);
		void DBD_K28LockAllLockbars();
		void DBD_K28DisplayLockerClusters(float secondsToDisplayDebugElements);
		void DBD_K28DebugCosmetics(bool noCooldown);
		void DBD_K28BreakAllLocks();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28DayNightComponent
	 * Size -> 0x0530 (FullSize[0x05E8] - InheritedSize[0x00B8])
	 */
	class UK28DayNightComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_JMQI[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _killerK28ComponentClass;                                // 0x0100(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorK28ComponentClass;                              // 0x0108(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _chargesRequiredForNightCharge;                          // 0x0110(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _transitionToNightDuration;                              // 0x0138(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _transitiionToDayDuration;                               // 0x0160(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chargesRequiredForNightDischarge;                       // 0x0188(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _killerInjuresSurvivorChargeAmount;                      // 0x0208(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _killerHookSurvivorChargeAmount;                         // 0x0288(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _killerTeleportsToRemnantChargeAmount;                   // 0x0308(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _defaultNightChargeTime;                                 // 0x0330(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _injuredSurvivorsChargeTime;                             // 0x03B0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _killerHidingInLockerChargeTime;                         // 0x0430(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _defaultNightTimeDischargeRate;                          // 0x04B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _survivorInLockerDischargeRate;                          // 0x04D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _nighttimeNearingActivationThresholdPercent;             // 0x0500(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _nightCycleNearingEndThresholdPercent;                   // 0x0528(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EK28NightCycleState                                        _currentNightCycleState;                                 // 0x0550(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WMD8[0x1F];                                  // 0x0551(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _authority_numberInjuredSurvivors;                       // 0x0570(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxChargeAmount;                                        // 0x0574(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _currentChargeAmount;                                    // 0x0578(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZBGT[0x35];                                  // 0x057C(0x0035) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _nighttimeNearingActivationThresholdReached;             // 0x05B1(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasReachedNightCycleNearEndThreshold;                   // 0x05B2(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UL1P[0x35];                                  // 0x05B3(0x0035) MISSED OFFSET (PADDING)

	public:
		void OnRep_NighttimeNearingActivation();
		void OnRep_HasReachedNightCycleNearEndThreshold();
		void OnRep_CurrentDayNightCycle();
		void Cosmetic_OnNightCycleChanged(class UAkComponent* AkComponent, EK28NightCycleState newNightCycleState);
		void Cosmetic_OnIsInLastTwentySecondsOfNightCycle(class UAkComponent* AkComponent);
		void Authority_OnSurvivorDamageStateChanged(ECamperDamageState PreviousDamageState, ECamperDamageState newDamageState);
		void Authority_OnIntroCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28FXInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK28FXInterface : public UInterface
	{
	public:
		void Cosmetic_TriggerFadeOut();
		void Cosmetic_TriggerFadeIn();
		void Cosmetic_SetDebugCosmetics(bool isDebugCosmeticsActive);
		void Cosmetic_SetBlackMaterialOnKiller(bool blackMaterialApplied);
		void Cosmetic_OnTeleportCooldownEnded();
		void Cosmetic_OnTeleportationToLockerStart(float teleportationDuration, bool isKillerAlreadyHidingInLocker);
		void Cosmetic_OnTeleportationToLockerEnd();
		void Cosmetic_OnShowKiller(bool isInstantShow);
		void Cosmetic_OnLockerTeleportTargetHighlighted();
		void Cosmetic_OnLocallyObservedChanged();
		void Cosmetic_OnKillerEnterLocker();
		void Cosmetic_OnIsKillingSurvivorWithMoriStateChanged(bool isKillingSurvivorWithMori);
		void Cosmetic_OnHideKiller();
		void Cosmetic_OnChargeTeleportStart();
		void Cosmetic_OnChargeTeleportComplete();
		void Cosmetic_OnChargeTeleportCancelled();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28IsNightCycleState
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UK28IsNightCycleState : public UEventDrivenModifierCondition
	{
	public:
		EK28NightCycleState                                        _nightCycleState;                                        // 0x00E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5BSM[0xF];                                   // 0x00E9(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28PlayerComponent
	 * Size -> 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
	 */
	class UK28PlayerComponent : public UActorComponent
	{
	public:
		TWeakObjectPtr<class UK28DayNightComponent>                _dayNightComponent;                                      // 0x00B8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _nightEffectMinimumDistance;                             // 0x00C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _nightEffectMaximumDistance;                             // 0x00E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X378[0x60];                                  // 0x0110(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorInRangeChanged(bool inRange, class ACamperPlayer* Player);
		void OnRep_DayNightComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerComponent
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	class UK28KillerComponent : public UK28PlayerComponent
	{
	public:
		unsigned char                                              UnknownData_YBKX[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_OnNighttimeNearingActivation(class ASlasherPlayer* killer);
		void Cosmetic_OnNightCycleStateChanged(class ASlasherPlayer* killer, EK28NightCycleState dayNightCycleState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerEnterLockerInteraction
	 * Size -> 0x0038 (FullSize[0x0680] - InheritedSize[0x0648])
	 */
	class UK28KillerEnterLockerInteraction : public UBaseLockerInteraction
	{
	public:
		unsigned char                                              UnknownData_7SY7[0x8];                                   // 0x0648(0x0008) Fix Super Size
		unsigned char                                              UnknownData_3D23[0x30];                                  // 0x0650(0x0030) MISSED OFFSET (PADDING)

	public:
		bool IsKillerAllowedToEnterLocker(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerExitLockerInteraction
	 * Size -> 0x00B8 (FullSize[0x0700] - InheritedSize[0x0648])
	 */
	class UK28KillerExitLockerInteraction : public UBaseLockerInteraction
	{
	public:
		unsigned char                                              UnknownData_ISN3[0x8];                                   // 0x0648(0x0008) Fix Super Size
		struct FDBDTunableRowHandle                                _timeSearchLockerInteractionBlocked;                     // 0x0650(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDotProductFadeOutThreshold;                          // 0x0678(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _rotationMaxTime;                                        // 0x067C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _fadeOutTime;                                            // 0x0680(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _fovChangeTime;                                          // 0x0684(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _fovChangeTeleportationCurve;                            // 0x0688(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DC5S[0x70];                                  // 0x0690(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerExitLockedLockerInteraction
	 * Size -> 0x0050 (FullSize[0x0750] - InheritedSize[0x0700])
	 */
	class UK28KillerExitLockedLockerInteraction : public UK28KillerExitLockerInteraction
	{
	public:
		float                                                      _lockbarBreakTimePercentage;                             // 0x0700(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minInteractionTime;                                     // 0x0704(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2U3F[0x48];                                  // 0x0708(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerExitLockerWithSurvivorInteraction
	 * Size -> 0x00A0 (FullSize[0x07A0] - InheritedSize[0x0700])
	 */
	class UK28KillerExitLockerWithSurvivorInteraction : public UK28KillerExitLockerInteraction
	{
	public:
		float                                                      _waitTimeBeforeSettingIntoCarryState;                    // 0x0700(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MIGA[0xC];                                   // 0x0704(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimationMontageDescriptor                         _montageFromTeleportation;                               // 0x0710(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _montageFromAbduction;                                   // 0x0730(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CW58[0x50];                                  // 0x0750(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerInstinctEffect
	 * Size -> 0x00D8 (FullSize[0x0428] - InheritedSize[0x0350])
	 */
	class UK28KillerInstinctEffect : public UStatusEffect
	{
	public:
		struct FTunableStat                                        _secondsToLinger;                                        // 0x0350(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxDistanceToApplyRemnantTeleportKillerInstinct;        // 0x03D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _lingeringEffectClass;                                   // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _lingeringEffect;                                        // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26KS[0x20];                                  // 0x0408(0x0020) MISSED OFFSET (PADDING)

	public:
		void Authority_OnLevelReadyToPlay();
		void Authority_OnKillerInstinctApplicableChanged(bool Active);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerLockerComponent
	 * Size -> 0x0150 (FullSize[0x0208] - InheritedSize[0x00B8])
	 */
	class UK28KillerLockerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_J4PH[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _targetLockerFOV;                                        // 0x00D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _fovChangeTeleportationCurve;                            // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _fovChangeTime;                                          // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_279Q[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FK28KillerLockerState                               _lockerState_replicated;                                 // 0x0108(0x0010) Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3TYC[0xA0];                                  // 0x0118(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _extraArmsAnimationFollowerActorClass;                   // 0x01B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AAnimationFollowerActor*                             _extraArmsAnimationFollowerActor;                        // 0x01C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6VPQ[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _timeBetweenAttemptTrigger;                              // 0x01D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KP7A[0x34];                                  // 0x01D4(0x0034) MISSED OFFSET (PADDING)

	public:
		void OnRep_LockerState_Replicated();
		void OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerPlayerViewComponent
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UK28KillerPlayerViewComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1BLX[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28KillerTeleportationComponent
	 * Size -> 0x0230 (FullSize[0x02E8] - InheritedSize[0x00B8])
	 */
	class UK28KillerTeleportationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M22L[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _teleportationSpeed_DayCycle;                            // 0x00C8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _teleportationSpeed_NightCycle;                          // 0x0148(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _teleportationTimeForSurvivorGrab;                       // 0x0170(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _survivorPanicInLockerAnimationMontageDescriptor;        // 0x0198(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PI9V[0x10];                                  // 0x01B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isTeleporting;                                          // 0x01C8(0x0030) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QQNP[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _defaultTeleportationCurve;                              // 0x0200(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _grabTeleportationCurve;                                 // 0x0208(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F2ES[0xC8];                                  // 0x0210(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      _actorsHiddenDuringTeleport;                             // 0x02D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void OnPlayerFinishedEnteringLocker(class ADBDPlayer* playerThatWasInLocker, class ADBDPlayer* playerNowInLocker);
		void OnLevelReadyToPlay();
		void Multicast_TeleportToLockerStart(const struct FK28SecondaryCameraMovementData& cameraMovementData, class UK28LockerComponent* lockerBeingTeleportedTo, class ACamperPlayer* survivorToGrab);
		void Multicast_TeleportToLockerEnd(class UK28LockerComponent* lockerTeleportedTo, class ACamperPlayer* survivorInLocker);
		void Local_OnTeleportCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Local_OnTeleportCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28LockAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UK28LockAnimInstance : public UAnimInstance
	{
	public:
		EK28LockbarState                                           _lockbarState;                                           // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S4R1[0xF];                                   // 0x02C1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28Lockbar
	 * Size -> 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
	 */
	class AK28Lockbar : public ABaseLockerItem
	{
	public:
		EK28LockbarState                                           _state;                                                  // 0x0248(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I3WH[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         _lockbarStaticMesh;                                      // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDSkeletalMeshComponentBudgeted*                   _skeletalMeshComponent;                                  // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _staticLockMesh;                                         // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       _boxComponent;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBaseActorAttackableComponent*                       _lockAttackableComponent;                                // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMontagePlayer*                                      _montagePlayer;                                          // 0x0278(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimationMontageSlave*                              _animationMontageSlave;                                  // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isLocked;                                               // 0x0288(0x0030) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I6I4[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_State();
		void OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker);
		void OnLocallyObservedChanged();
		class UMontagePlayer* GetMontagePlayer();
		void Cosmetic_TriggerLockbarBreak();
		void Cosmetic_SetLockbarHighlightActivationState(bool isHightlightActive);
		void Cosmetic_OnStateChanged(EK28LockbarState NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28LockerComponent
	 * Size -> 0x0250 (FullSize[0x0308] - InheritedSize[0x00B8])
	 */
	class UK28LockerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_OB5O[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK28LockerCosmeticHelperActor*                       _lockerCosmeticHelper;                                   // 0x00D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3MJL[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarningSoundTimeInterval;                                // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WarningSoundRange;                                       // 0x00E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _timeToTriggerWarningReveal;                             // 0x00E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minDistanceFromHookedSurvivor;                          // 0x0110(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minDistanceFromKillerForTeleportationEligibility;       // 0x0138(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _lockerShakeTeleportAnimation;                           // 0x0160(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _lockerTeleportCompletedAnimation;                       // 0x0180(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _lockerTeleportationAbductionAnimation;                  // 0x01A0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      _lockerInteractionClasses;                               // 0x01C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		class UClass*                                              _lockerCosmeticHelperClass;                              // 0x01D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _lockerGrabOverridingClass;                              // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      _lockerInteractionClassesToOverride;                     // 0x01E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FCustomLockerOutlineOverride>                _lockedOutlineOverrides;                                 // 0x01F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _maxSqrtDistanceForCluster;                              // 0x0200(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDotProductForCluster;                                // 0x0204(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _lockerLineTraceOffset;                                  // 0x0208(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4RE9[0xD0];                                  // 0x0214(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _abductionCameraOffset;                                  // 0x02E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XYYF[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASlasherPlayer*                                      _killer;                                                 // 0x0300(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28LockerCosmeticHelperActor
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class AK28LockerCosmeticHelperActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_MJ6V[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnAssociatedLockerActorSet();
		class USkeletalMeshComponent* GetSkeletalMesh();
		class UMaterialHelper* GetMaterialHelper();
		class ALocker* GetLocker();
		void Cosmetic_OnLockerGrabStateChanged(bool isLockerGrabOngoing);
		void Cosmetic_OnLockedStateChanged(bool isLockerLocked);
		void Cosmetic_OnKillerTeleportationToLockerStart();
		void Cosmetic_OnKillerTeleportationToLockerEnd();
		void Cosmetic_OnKillerInsideLockerRevealed();
		void Cosmetic_OnKillerExitLocker();
		void Cosmetic_OnKillerEnteredLocker();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28LockerEntitySpikesUpdateStrategy
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UK28LockerEntitySpikesUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _outlineColor;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C37E[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28LockerTeleportSwapInteraction
	 * Size -> 0x0028 (FullSize[0x0640] - InheritedSize[0x0618])
	 */
	class UK28LockerTeleportSwapInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_C25R[0x8];                                   // 0x0618(0x0008) Fix Super Size
		unsigned char                                              UnknownData_REI2[0x20];                                  // 0x0620(0x0020) MISSED OFFSET (PADDING)

	public:
		void Server_RequestTeleportToTarget(class ASlasherPlayer* killer, class UActorComponent* teleportTarget);
		void Multicast_RefuseTeleportationRequest();
		void Multicast_ConfirmTeleportationRequest(class ASlasherPlayer* killer, class UActorComponent* teleportTarget);
		void Multicast_CompleteTeleportation();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28LockLockbarInteraction
	 * Size -> 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
	 */
	class UK28LockLockbarInteraction : public UBaseLockerInteraction
	{
	public:
		unsigned char                                              UnknownData_CRY3[0x8];                                   // 0x0648(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28MenuAnimInstance
	 * Size -> 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
	 */
	class UK28MenuAnimInstance : public UBaseMenuAnimInstance
	{
	public:
		class UClass*                                              _customizationAnimationSelectorClass;                    // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCustomizationAnimationSelector*                     _customizationAnimationSelector;                         // 0x0300(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1NPA[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		int32_t GetAnimationMappingIndex();
		void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28P01
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class UK28P01 : public UPerk
	{
	public:
		float                                                      _perkActivationDuration[0x3];                            // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PDRF[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _effectClass;                                            // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _injuryTimerDuration;                                    // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VVV3[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _injuryTimer;                                            // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N8IP[0x8];                                   // 0x03F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28P01Effect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UK28P01Effect : public UStatusEffect
	{
	public:
		class ADBDPlayer*                                          _playerOwner;                                            // 0x0350(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28P02
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UK28P02 : public UPerk
	{
	public:
		float                                                      PerkActivationTime;                                      // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LockerDetectionRadius;                                   // 0x03CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J581[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetPerkActivationTime();
		float GetLockerDetectionRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28Power
	 * Size -> 0x0370 (FullSize[0x0820] - InheritedSize[0x04B0])
	 */
	class AK28Power : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_N36K[0x10];                                  // 0x04B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractor*                                         _interactor;                                             // 0x04C0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _powerChargeComponent;                                   // 0x04C8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK28PowerChargePresentationPowerFadeComponent*       _k28PowerChargePresentationPowerFadeComponent;           // 0x04D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK28PowerPresentationItemProgressComponent*          _k28PowerPresentationItemProgressComponent;              // 0x04D8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _dayNightComponentClass;                                 // 0x04E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _teleportationStrategyComponentClass;                    // 0x04E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerTeleportationComponentClass;                      // 0x04F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerPlayerViewComponentClass;                         // 0x04F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerLockerComponentClass;                             // 0x0500(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _secondaryCameraClass;                                   // 0x0508(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _k28RemnantClass;                                        // 0x0510(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _moriArmsAnimationFollowerActorClass;                    // 0x0518(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK28SecondaryCamera*                                 _secondaryCamera;                                        // 0x0520(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK28KillerLockerComponent*                           _killerLockerComponent;                                  // 0x0528(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK28Remnant*                                         _k28Remnant;                                             // 0x0530(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      _killerStatusEffects;                                    // 0x0538(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      _survivorStatusEffects;                                  // 0x0548(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorAbductionCameraBehaviourClass;                  // 0x0558(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK28DayNightComponent*                               _dayNightComponent;                                      // 0x0560(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK28TeleportationStrategyComponent*                  _teleportationStrategyComponent;                         // 0x0568(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _tokensWhenPowerIsFullyCharged;                          // 0x0570(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _secondsRequiredToChargePowerStartOfMatch;               // 0x05F0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _secondsRequiredToChargePowerDayTime;                    // 0x0670(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _secondsRequiredToChargePowerNightTime;                  // 0x06F0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxTrackedTimeSinceLockerOrRemnantExit;                 // 0x0770(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _teleportTokens;                                         // 0x0798(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MV4Z[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FK28InteractionPreventingTagsModification>   _survivorInteractionsPreventingTagModifications;         // 0x07A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KWZK[0x68];                                  // 0x07B0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isTunableInit;                                          // 0x0818(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D11A[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_TeleportTokens();
		void OnIntroCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28PowerChargePresentationPowerFadeComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK28PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28PowerPresentationItemProgressComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UK28PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		TWeakObjectPtr<class AK28Power>                            _k28Power;                                               // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28Remnant
	 * Size -> 0x01E0 (FullSize[0x0410] - InheritedSize[0x0230])
	 */
	class AK28Remnant : public AActor
	{
	public:
		unsigned char                                              UnknownData_QXCB[0x60];                                  // 0x0230(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _teleportToRemnantSpeedCurve_Normal;                     // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _teleportToRemnantSpeedCurve_Penalty;                    // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDSkeletalMeshComponentBudgeted*                   _skeletalMesh;                                           // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   _capsuleComponent;                                       // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimationMontageSlave*                              _montageFollower;                                        // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMontagePlayer*                                      _montagePlayer;                                          // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK28RemnantOutlineUpdateStrategy*                    _remnantOutlineStrategy;                                 // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _teleportationFadeInTime;                                // 0x02D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _teleportationFadeOutTime;                               // 0x02F8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minDistanceFromHookedSurvivor;                          // 0x0320(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _renmantDeactivationTime;                                // 0x0348(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _remnantDestructionTime;                                 // 0x034C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _slowTeleportToRenmantAnimationMontage;                  // 0x0350(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         _fastTeleportToRenmantAnimationMontage;                  // 0x0370(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		EK28RemnantState                                           _remnantState;                                           // 0x0390(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_02CZ[0x77];                                  // 0x0391(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerceptionStimuliSourceComponent*                 _perceptionStimuliComponent;                             // 0x0408(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_RemnantState();
		void Multicast_TriggerTeleportStart(class ASlasherPlayer* killer);
		void Multicast_TeleportToRemnant(class ASlasherPlayer* killer, const struct FRotator& teleportRotation, bool isAnimationSlowed);
		void Multicast_SurvivorDestroyedRemnant(class ACamperPlayer* Survivor);
		void Multicast_DeactivateRemnant();
		void Multicast_ActivateRemnant(const struct FVector& Location, const struct FRotator& Rotation);
		void Cosmetic_SurvivorDestroyedRemnant(class ACamperPlayer* Survivor);
		void Cosmetic_OnTeleportationStartVFX(class ASlasherPlayer* killer);
		void Cosmetic_OnTeleportationPerformedVFX(class ASlasherPlayer* killer, bool isSlowTeleportation);
		void Cosmetic_OnRemnantStateChanged(EK28RemnantState remnantState);
		void Cosmetic_OnRemnantDeactivated();
		void Cosmetic_OnRemnantActivated();
		void Authority_OnCollisionDetected(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28RemnantAnimInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UK28RemnantAnimInstance : public UAnimInstance
	{
	public:
		EK28RemnantState                                           _currentRemnantState;                                    // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isTeleportingToRemnant;                                 // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KF97[0x1E];                                  // 0x02C2(0x001E) MISSED OFFSET (PADDING)

	public:
		class ACamperPlayer* ConsumeSurvivorWhoDestroyedRemnant();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28RemnantOutlineUpdateStrategy
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UK28RemnantOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _availableForTeleportSelectionColor;                     // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GK7L[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28SecondaryCamera
	 * Size -> 0x0158 (FullSize[0x0388] - InheritedSize[0x0230])
	 */
	class AK28SecondaryCamera : public AActor
	{
	public:
		unsigned char                                              UnknownData_M1OZ[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       _teleportCollision;                                      // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YR8K[0x4];                                   // 0x0240(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _minimumCameraPitchOrientationAngle;                     // 0x0244(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maximumCameraPitchOrientationAngle;                     // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _observerRotationSpeed;                                  // 0x024C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minTimeBetweenCameraRotationUpdateRPC;                  // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorGrabTransition_CameraRotationEndPercentage;     // 0x0254(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorGrabTransition_DistanceFromLocker;              // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4TYA[0x124];                                 // 0x025C(0x0124) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isKillerPlayerViewTarget;                               // 0x0380(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QJME[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (PADDING)

	public:
		void Server_SetIsKillerPlayerViewTarget(bool isKillerPlayerViewTarget);
		void Server_SetCameraOrientation(const struct FRotator& NewOrientation);
		void OnRep_IsKillerPlayerViewTarget();
		void OnLevelReadyToPlay();
		void Multicast_SetCameraOrientation(const struct FRotator& NewOrientation, bool isRelativeRotation);
		bool GetIsKillerPlayerViewTarget();
		struct FRotator GetCameraWorldRotation();
		void Cosmetic_UpdateDarknessPlaneVisibility(bool IsVisible);
		void Cosmetic_TriggerTeleportStartVisuals();
		void Cosmetic_TriggerTeleportEndVisuals();
		void Cosmetic_TriggerFadeOut();
		void Cosmetic_TriggerFadeIn();
		void Cosmetic_OnNightCycleChanged(EK28NightCycleState newNightCycleState);
		void Cosmetic_OnKillerExitLocker();
		void Cosmetic_OnKillerEnterLocker();
		void Cosmetic_OnIsLocallyObservingKillerChanged(bool isLocallyObservingKiller);
		void Cosmetic_DisableAllEffects();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28SurvivorAbductionCameraBehaviourComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UK28SurvivorAbductionCameraBehaviourComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_90XN[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _targetSpringArmLength;                                  // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _targetLockerOffsetForCameraView;                        // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           _cameraLocationOffset;                                   // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M2A0[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28SurvivorComponent
	 * Size -> 0x0060 (FullSize[0x01D0] - InheritedSize[0x0170])
	 */
	class UK28SurvivorComponent : public UK28PlayerComponent
	{
	public:
		unsigned char                                              UnknownData_JCGA[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _killerBlackMaterialDarknessEffect;                      // 0x0178(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GOO8[0x30];                                  // 0x01A0(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnKillerInRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28SurvivorCosmeticHelperActor
	 * Size -> 0x0028 (FullSize[0x0290] - InheritedSize[0x0268])
	 */
	class AK28SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
	{
	public:
		unsigned char                                              UnknownData_8CGV[0x28];                                  // 0x0268(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		class UStaticMeshComponent* GetDarknessPlaneMesh();
		void Cosmetic_OnNighttimeNearingActivation();
		void Cosmetic_OnNightCycleChanged(EK28NightCycleState nightCycleState);
		void Cosmetic_OnLocallyObservedChanged();
		void Cosmetic_DeactivateNightGlowVFX();
		void Cosmetic_ActivateNightGlowVFX();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28SurvivorLockerAbductionInteraction
	 * Size -> 0x0088 (FullSize[0x06D0] - InheritedSize[0x0648])
	 */
	class UK28SurvivorLockerAbductionInteraction : public UBaseLockerInteraction
	{
	public:
		struct FAnimationMontageDescriptor                         _survivorPanicInLockerAnimationMontageDescriptor;        // 0x0648(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UBaseLockerInteraction>               _overriddenInteractionInstance;                          // 0x0668(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _overridingTags;                                         // 0x0670(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _fadeOutTime;                                            // 0x0680(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDotProductFadeOutThreshold;                          // 0x0684(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _rotationMaxTime;                                        // 0x0688(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FLN5[0x44];                                  // 0x068C(0x0044) MISSED OFFSET (PADDING)

	public:
		void OnRep_OverriddenInteractionInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28TeleportationStrategyComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class UK28TeleportationStrategyComponent : public UActorComponent
	{
	public:
		TArray<struct FK28LockerCluster>                           _lockerClusters;                                         // 0x00B8(0x0010) Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      _minMovementSquaredDistanceForBestClusterRecalculation;  // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDeltaSquaredDistanceForBestTargetRecalculation;      // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDeltaDotProductForBestTargetRecalculation;           // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDotProductToBeEligibleForBestCluster;                // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _lockerComponentClass;                                   // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _teleportIndicatorClass;                                 // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDActorIndicator*                                  _teleportIndicator;                                      // 0x00E8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V29Z[0x70];                                  // 0x00F0(0x0070) MISSED OFFSET (PADDING)

	public:
		void Server_UpdateBestTeleportTarget(int32_t bestTeleportTargetID);
		void Multicast_UpdateBestTeleportTarget(int32_t bestTeleportTargetID);
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28TeleportInteraction
	 * Size -> 0x00F0 (FullSize[0x0830] - InheritedSize[0x0740])
	 */
	class UK28TeleportInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FSecondaryInteractionProperties                     _confirmTeleportationProperties;                         // 0x0740(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FSecondaryInteractionProperties                     _returnToRemnantProperties;                              // 0x0778(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		EInputInteractionType                                      _triggerTeleportInputType;                               // 0x07B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2EIE[0x7];                                   // 0x07B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _chargingSpeedCurve;                                     // 0x07B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _chargedSpeedCurve;                                      // 0x07C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _cancelledSpeedCurve;                                    // 0x07C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _releaseInputMaxTime;                                    // 0x07D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumChargePercentageToConsiderTeleportButtonPress;   // 0x07D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MTOI[0x58];                                  // 0x07D8(0x0058) MISSED OFFSET (PADDING)

	public:
		void Server_RequestTeleportToTarget(class ASlasherPlayer* killer, class UObject* teleportTarget);
		void Multicast_RefuseTeleportationRequest();
		void Multicast_ConfirmTeleportationRequest(class ASlasherPlayer* killer, class UObject* teleportTarget);
		void Multicast_CompleteTeleportation();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.K28Utilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK28Utilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsLockerUsedByKillerLocked(class UObject* WorldContextObject);
		class UK28TeleportationStrategyComponent* STATIC_GetTeleportationStrategyComponent(class UObject* WorldContextObject);
		class AK28SecondaryCamera* STATIC_GetSecondaryCamera(class UObject* WorldContextObject);
		class AK28Remnant* STATIC_GetRemnant(class UObject* WorldContextObject);
		class AK28Power* STATIC_GetK28Power(class UObject* WorldContextObject);
		class UK28DayNightComponent* STATIC_GetDayNightComponent(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.S31P01
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class US31P01 : public UPerk
	{
	public:
		float                                                      _loseHealthStateDetectionRadius;                         // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I7EK[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _killerAuraRevealDuration[0x3];                          // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AAEP[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _timedAuraReveal;                                        // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.S31P02
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class US31P02 : public UPerk
	{
	public:
		float                                                      _blindnessDurationPerLevel[0x3];                         // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PQM3[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _blindnessEffect;                                        // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _itemFlag;                                               // 0x03E0(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DAF9[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK28.S31P03
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class US31P03 : public UPerk
	{
	public:
		float                                                      _genRepairSpeedBoostForDullTotem[0x3];                   // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _genRepairSpeedBoostForHexTotem[0x3];                    // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _effectClass;                                            // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N4NV[0x10];                                  // 0x03E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
