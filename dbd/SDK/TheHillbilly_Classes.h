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
	 * Class TheHillbilly.ChainsawAnalyticsBaseComponent
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UChainsawAnalyticsBaseComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MN7W[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _maxDistanceFromHookToBeConsideredCamping;               // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IB5D[0x2C];                                  // 0x00D4(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawAttack
	 * Size -> 0x0070 (FullSize[0x03F0] - InheritedSize[0x0380])
	 */
	class UHillbillyChainsawAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_J9CB[0x58];                                  // 0x0380(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _chainsawHitGameEventTag;                                // 0x03D8(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        _chainsawAttemptGameEventTag;                            // 0x03E4(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawAttackOpenSubstate
	 * Size -> 0x0048 (FullSize[0x0178] - InheritedSize[0x0130])
	 */
	class UHillbillyChainsawAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		unsigned char                                              UnknownData_IY9Z[0x48];                                  // 0x0130(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UHillbillyChainsawAttackHittingSubstate : public UPounceAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UHillbillyChainsawAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UHillbillyChainsawAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UHillbillyChainsawAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.ChainsawRevInteraction
	 * Size -> 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
	 */
	class UChainsawRevInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_34VQ[0x30];                                  // 0x0740(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _soundCueDistanceDataID;                                 // 0x0770(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U0TN[0x4];                                   // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       _chainsawRevStartAkAudioEvent;                           // 0x0780(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _chainsawRevEndAkAudioEvent;                             // 0x0788(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASlasherPlayer*                                      _owningSlasher;                                          // 0x0790(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_30XM[0x8];                                   // 0x0798(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.ApexMufflerAddon
	 * Size -> 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
	 */
	class UApexMufflerAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyAnalyticsComponent
	 * Size -> 0x0080 (FullSize[0x0180] - InheritedSize[0x0100])
	 */
	class UHillbillyAnalyticsComponent : public UChainsawAnalyticsBaseComponent
	{
	public:
		unsigned char                                              UnknownData_KAV8[0x80];                                  // 0x0100(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UHillbillyAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawHitEventAddon
	 * Size -> 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
	 */
	class UHillbillyChainsawHitEventAddon : public UOnEventBaseAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawOverheatComponent
	 * Size -> 0x0460 (FullSize[0x0518] - InheritedSize[0x00B8])
	 */
	class UHillbillyChainsawOverheatComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHeatChargeUpdateDelegate;                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VMN7[0x118];                                 // 0x00C8(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isChainsawOverheating;                                  // 0x01E0(0x0030) Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _chainsawHeatCharge;                                     // 0x0210(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _heatMaxCharge;                                          // 0x0218(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _heatRevStartAmount;                                     // 0x0298(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _heatRevChargeRate;                                      // 0x0318(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _heatDashChargeRate;                                     // 0x0398(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _heatDischargeRate;                                      // 0x0418(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _overheatDischargeRate;                                  // 0x0498(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_IsChainsawOverheating();
		void OnLevelReadyToPlay();
		void OnHeatChargeUpdate(float currentCharge, float previosCharge);
		bool IsChainsawOverheating();
		void Authority_OnHeatChargeFull();
		void Authority_OnHeatChargeEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawRevInteraction
	 * Size -> 0x0060 (FullSize[0x0800] - InheritedSize[0x07A0])
	 */
	class UHillbillyChainsawRevInteraction : public UChainsawRevInteraction
	{
	public:
		unsigned char                                              UnknownData_E7DK[0x60];                                  // 0x07A0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyChainsawSubAnimInstance
	 * Size -> 0x0030 (FullSize[0x0640] - InheritedSize[0x0610])
	 */
	class UHillbillyChainsawSubAnimInstance : public UBaseKillerAttackSubAnimInstance
	{
	public:
		bool                                                       _isRevvingChainsaw;                                      // 0x0610(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isRevvingChainsawCancelled;                             // 0x0611(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChainsawSprinting;                                    // 0x0612(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isWaitingForChainsaw;                                   // 0x0613(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TAE2[0x2C];                                  // 0x0614(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.HillbillyOverheatPresentationItemProgressComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UHillbillyOverheatPresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UHillbillyChainsawOverheatComponent*                 _hillbillyChainsawOverheatComponent;                     // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetHillbillyChainsawOverheatComponent(class UHillbillyChainsawOverheatComponent* HillbillyChainsawOverheatComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.IridescentBrickAddon
	 * Size -> 0x0038 (FullSize[0x0300] - InheritedSize[0x02C8])
	 */
	class UIridescentBrickAddon : public UOnEventBaseAddon
	{
	public:
		unsigned char                                              UnknownData_JDQC[0x28];                                  // 0x02C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _undetectableStatusEffectClass;                          // 0x02F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _undetectableStatusEffect;                               // 0x02F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.LightbornAuraRevealEffect
	 * Size -> 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
	 */
	class ULightbornAuraRevealEffect : public UBaseLingeringStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.LightbornBlindFailedIndicatorCondition
	 * Size -> 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
	 */
	class ULightbornBlindFailedIndicatorCondition : public UEventDrivenModifierCondition
	{
	public:
		float                                                      _conditionReevaluationTimerDurationAfterFailedBlind;     // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F21D[0x5C];                                  // 0x00EC(0x005C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHillbilly.LoProChainsAddon
	 * Size -> 0x0058 (FullSize[0x0310] - InheritedSize[0x02B8])
	 */
	class ULoProChainsAddon : public UItemAddon
	{
	public:
		struct FAnimationMontageDescriptor                         _breakPalletMontage;                                     // 0x02B8(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      _halfDamageDurationAfterBreakable;                       // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _doesAddonIncludeBreakableWalls;                         // 0x02DC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GACE[0x33];                                  // 0x02DD(0x0033) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
