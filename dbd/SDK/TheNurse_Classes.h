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
	 * Class TheNurse.ActivateByBlinkAttackTimedEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UActivateByBlinkAttackTimedEffect : public UStatusEffect
	{
	public:
		float                                                      _activationDuration;                                     // 0x0350(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G95Z[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.AnxiousGaspAddon
	 * Size -> 0x0088 (FullSize[0x0340] - InheritedSize[0x02B8])
	 */
	class UAnxiousGaspAddon : public UItemAddon
	{
	public:
		class UAkAudioEvent*                                       _screamSoundEvent;                                       // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _scoreEventTag;                                          // 0x02C0(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _detectionCapsuleHalfHeight;                             // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _detectionCapsuleRadius;                                 // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HAXK[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   _survivorDetector;                                       // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _alreadyDetectedPlayers[0x50];                           // 0x02E0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_RS6J[0x10];                                  // 0x0330(0x0010) MISSED OFFSET (PADDING)

	public:
		void PlayScream(class ACamperPlayer* Survivor);
		void OnDetectorOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BaseInstantBlinkInteraction
	 * Size -> 0x0028 (FullSize[0x0640] - InheritedSize[0x0618])
	 */
	class UBaseInstantBlinkInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_6SEJ[0x8];                                   // 0x0618(0x0008) Fix Super Size
		unsigned char                                              UnknownData_5FI5[0x20];                                  // 0x0620(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.AutomaticBlinkInteraction
	 * Size -> 0x0030 (FullSize[0x0670] - InheritedSize[0x0640])
	 */
	class UAutomaticBlinkInteraction : public UBaseInstantBlinkInteraction
	{
	public:
		float                                                      _blinkDistancePercent;                                   // 0x0640(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3FE1[0x2C];                                  // 0x0644(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BadMansLastBreathAddon
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class UBadMansLastBreathAddon : public UItemAddon
	{
	public:
		float                                                      _activationDuration;                                     // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration;                                       // 0x02BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _cooldownIndicator;                                      // 0x02C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _undetectableEffect;                                     // 0x02C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BalancedLanding
	 * Size -> 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
	 */
	class UBalancedLanding : public UPerk
	{
	public:
		unsigned char                                              UnknownData_6X4D[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _staggerReductionEffect;                                 // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _activableExhaustedEffect;                               // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _sprintDuration;                                         // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _exhaustionDurationPerLevel[0x3];                        // 0x03E4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UActivatableExhaustedEffect*                         _exhaustedEffect;                                        // 0x03F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YXY2[0x48];                                  // 0x03F8(0x0048) MISSED OFFSET (PADDING)

	public:
		void Server_WarnBalancedLandingPredicted();
		float GetSprintDuration();
		float GetExhaustionDurationAtLevel();
		void Client_UnvalidateBalanceLanding();
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BaseNursePerk
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class UBaseNursePerk : public USpawningEffectPerk
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UBlinkAttack : public UPounceAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UBlinkAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkBackInteraction
	 * Size -> 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
	 */
	class UBlinkBackInteraction : public UBaseInstantBlinkInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkIndicatorController
	 * Size -> 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
	 */
	class UBlinkIndicatorController : public UActorComponent
	{
	public:
		class UClass*                                              _indicatorClass;                                         // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _activationFlag;                                         // 0x00C0(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _indicatorMinimumVelocity;                               // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _indicatorVelocityEasingFactor;                          // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KZ0T[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _indicator;                                              // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SHP7[0x58];                                  // 0x00E0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkInteraction
	 * Size -> 0x0120 (FullSize[0x0860] - InheritedSize[0x0740])
	 */
	class UBlinkInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_LBCY[0x60];                                  // 0x0740(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatProperty                                       _chargeTime;                                             // 0x07A0(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z8QA[0x38];                                  // 0x0828(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkPlayerComponent
	 * Size -> 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
	 */
	class UBlinkPlayerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VR4D[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _maxBlinkDuration;                                       // 0x00D0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minBlinkDuration;                                       // 0x0150(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _blinkFOVCurve;                                          // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J8OW[0x90];                                  // 0x0180(0x0090) MISSED OFFSET (PADDING)

	public:
		void Server_StartBlink(const struct FBlinkParams& Params);
		void Server_EndBlink();
		void Multicast_StartBlink(const struct FBlinkParams& Params);
		void Multicast_EndBlink();
		void Local_OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkPowerDebugComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UBlinkPowerDebugComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CS9Q[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkPowerEventDispatcher
	 * Size -> 0x01D0 (FullSize[0x0288] - InheritedSize[0x00B8])
	 */
	class UBlinkPowerEventDispatcher : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFinishPlaying;                                         // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartBlinkChargeEvent;                                 // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateBlinkChargeEvent;                                // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStopBlinkChargeEvent;                                  // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterBlinkEvent;                                       // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateBlinkEvent;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitBlinkEvent;                                        // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterChainBlinkEvent;                                  // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateChainBlinkEvent;                                 // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitChainBlinkEvent;                                   // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterCooldownEvent;                                    // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateCooldownEvent;                                   // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitCooldownEvent;                                     // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsBlinkingChangedEvent;                                // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsChargingBlinkChangedEvent;                           // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlinkChargeFullEvent;                                  // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlinkPowerStateChangedEvent;                           // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlinkChargesChangedEvent;                              // 0x01C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XASK[0xB0];                                  // 0x01D8(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkPowerItem
	 * Size -> 0x0020 (FullSize[0x04D0] - InheritedSize[0x04B0])
	 */
	class ABlinkPowerItem : public ACollectable
	{
	public:
		class UInteractor*                                         _powerInteractor;                                        // 0x04B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _blinkChargeable;                                        // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_URWQ[0x10];                                  // 0x04C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkPowerPlayerComponent
	 * Size -> 0x0500 (FullSize[0x05B8] - InheritedSize[0x00B8])
	 */
	class UBlinkPowerPlayerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NYTN[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _maxBlinkCharges;                                        // 0x00E8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _rechargeDuration;                                       // 0x0168(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chainBlinkDuration;                                     // 0x01E8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _allowedInteractionSemancticsDuringChainBlink;           // 0x0268(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _fatigueDuration;                                        // 0x0288(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _fatigueChainBlinkPenalty;                               // 0x0308(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _fatigueAttackPenalty;                                   // 0x0388(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _fatigueAttackMissPenaltyModifier;                       // 0x0408(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZQ69[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _fatigueSpeedCurve;                                      // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0PM9[0x90];                                  // 0x0420(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBlinkPowerState                                           _powerState;                                             // 0x04B0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X0IN[0x3];                                   // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _blinkCharges;                                           // 0x04B4(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _wasCurrentChargeSetByRecharge;                          // 0x04B8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LPV2[0xDF];                                  // 0x04B9(0x00DF) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _chainBlinkTimer;                                        // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimerObject*                                        _cooldownTimer;                                          // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimerObject*                                        _rechargeTimer;                                          // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YYM8[0x8];                                   // 0x05B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void Setup(const struct FBlinkPowerSetupParams& Params);
		void Server_TriggerCooldown(float Duration);
		void Server_TriggerChainBlink(int32_t remainingBlinkCharges);
		void Server_SetState(EBlinkPowerState State);
		void Server_InterruptDuringChainBlink(class AActor* interruptedPlayer);
		void OnRep_BlinkState(EBlinkPowerState oldState);
		void OnRep_BlinkCharges();
		void OnLevelReadyToPlay();
		void OnAttackStarted(EAttackType attackType);
		void OnAttackFinished(EAttackType attackType);
		bool IsChargingBlink();
		bool IsChargeFull();
		bool IsBlinking();
		float GetRechargeProgressPercent();
		EBlinkPowerState GetPowerState();
		float GetCooldownTimerDuration();
		float GetCooldownRemainingTime();
		float GetCooldownProgressPercent();
		float GetChainBlinkTimerDuration();
		float GetChainBlinkRemainingTime();
		float GetChainBlinkProgressPercent();
		int32_t GetBlinkCharges();
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.BlinkTargetFinder
	 * Size -> 0x0128 (FullSize[0x01E0] - InheritedSize[0x00B8])
	 */
	class UBlinkTargetFinder : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MZ55[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _minDistance;                                            // 0x00D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _maxDistance;                                            // 0x00F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _floorRaycastStartZOffset;                               // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _floorRaycastLength;                                     // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _locationClearStepHeight;                                // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9VA8[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              _horizontalSamplePercentages;                            // 0x0188(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      _blinkBlockerSphereCastRadius;                           // 0x0198(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CYV5[0x44];                                  // 0x019C(0x0044) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.DarkCinctureAddon
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class UDarkCinctureAddon : public UItemAddon
	{
	public:
		class UStatusEffect*                                       _speedEffect;                                            // 0x02B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _speedEffectClass;                                       // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementSpeedMultiplier;                                // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FHNT[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.FragileWheezeAddon
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UFragileWheezeAddon : public UItemAddon
	{
	public:
		class UClass*                                              _mangledEffectClass;                                     // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.IsChainBlinkingCondition
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UIsChainBlinkingCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_WSLN[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.IsInChainBlinkWindowCondition
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UIsInChainBlinkWindowCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_IRQZ[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.KavanaghsLastBreathAddon
	 * Size -> 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
	 */
	class UKavanaghsLastBreathAddon : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_WLGK[0x10];                                  // 0x02B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _blindnessEffectClass;                                   // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxBlindnessRange;                                      // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _blindedEffectDuration;                                  // 0x02D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.MatchboxAddon
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UMatchboxAddon : public UItemAddon
	{
	public:
		float                                                      _speedModifier;                                          // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QSSH[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.NurseAnimInstance
	 * Size -> 0x0080 (FullSize[0x0340] - InheritedSize[0x02C0])
	 */
	class UNurseAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isBlinkReady;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChargingBlink;                                        // 0x02C1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isFullyCharged;                                         // 0x02C2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VEBI[0x5];                                   // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _blinkSequence;                                          // 0x02C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChainBlinking;                                        // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBlinking;                                             // 0x02D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S2BU[0x2];                                   // 0x02D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _blinkPlayRate;                                          // 0x02D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _cooldownSequence;                                       // 0x02D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInCooldown;                                           // 0x02E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2QO1[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cooldownPlayRate;                                       // 0x02E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChainBlinkAttacking;                                  // 0x02E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isNurse;                                                // 0x02E9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F4X6[0x26];                                  // 0x02EA(0x0026) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimEffectHandler*                                  _animEffectHandlerForSFX;                                // 0x0310(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimEffectHandler*                                  _animEffectHandlerForVFX;                                // 0x0318(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _animEffectHandlerClassForSFX;                           // 0x0320(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _animEffectHandlerClassForVFX;                           // 0x0328(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlasherPlayer*                                      _mySlasher;                                              // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_79Q6[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnBlinkTriggered();
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.NurseAttackPicker
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UNurseAttackPicker : public USlasherAttackPickerComponent
	{
	public:
		unsigned char                                              UnknownData_I73V[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.NurseFXInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNurseFXInterface : public UInterface
	{
	public:
		void Cosmetic_SpawnSpasmodicBreathVignette();
		void Cosmetic_OnSpasmodicBreathAddonEffectActive(bool activeValue);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.NurseHelper
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNurseHelper : public UBlueprintFunctionLibrary
	{
	public:
		class ABlinkPowerItem* STATIC_GetBlinkPowerItem(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.SpasmodicBreathAddon
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class USpasmodicBreathAddon : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_JTPN[0x10];                                  // 0x02B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _speedEffect;                                            // 0x02C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _indicatorEffect;                                        // 0x02D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8EED[0x4];                                   // 0x02D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _speedModifier;                                          // 0x02DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _activationDuration;                                     // 0x02E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O82I[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.StreetwiseEffect
	 * Size -> 0x0030 (FullSize[0x0388] - InheritedSize[0x0358])
	 */
	class UStreetwiseEffect : public UBaseLingeringStatusEffect
	{
	public:
		float                                                      _range;                                                  // 0x0358(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RGCF[0x2C];                                  // 0x035C(0x002C) MISSED OFFSET (PADDING)

	public:
		void Authority_OnInRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.ThanatophobiaEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UThanatophobiaEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_2KG9[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNurse.ThanatophobiaPerk
	 * Size -> 0x0080 (FullSize[0x0500] - InheritedSize[0x0480])
	 */
	class UThanatophobiaPerk : public UBaseNursePerk
	{
	public:
		unsigned char                                              UnknownData_HCY6[0x18];                                  // 0x0480(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _actionSpeedModifier[0x3];                               // 0x0498(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _additionalActionSpeedModifier[0x3];                     // 0x04A4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _numSurvivorsForAdditionalSpeedModifier;                 // 0x04B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0CIY[0x4C];                                  // 0x04B4(0x004C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
