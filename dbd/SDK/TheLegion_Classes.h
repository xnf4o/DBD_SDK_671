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
	 * Class TheLegion.Addon_Frenzy_ColdDirt
	 * Size -> 0x0068 (FullSize[0x0320] - InheritedSize[0x02B8])
	 */
	class UAddon_Frenzy_ColdDirt : public UItemAddon
	{
	public:
		TMap<int32_t, int32_t>                                     _mapTokenPerChainedHit;                                  // 0x02B8(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		int32_t                                                    _tokensToReachForActivation;                             // 0x0308(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementSpeedMultiplierModifier;                        // 0x030C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QB5O[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.BaseFrenzyMixtapeAddon
	 * Size -> 0x0028 (FullSize[0x02E0] - InheritedSize[0x02B8])
	 */
	class UBaseFrenzyMixtapeAddon : public UItemAddon
	{
	public:
		TArray<class FName>                                        _audioSwitchGroups;                                      // 0x02B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                _audioSwitchState;                                       // 0x02C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q67T[0xC];                                   // 0x02D4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.Addon_Frenzy_FranksMixTape
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class UAddon_Frenzy_FranksMixTape : public UBaseFrenzyMixtapeAddon
	{
	public:
		class UClass*                                              _statusEffectFranksWalls;                                // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _statusEffectFranksGenerators;                           // 0x02E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.Addon_Frenzy_FumingMixTape
	 * Size -> 0x0058 (FullSize[0x0338] - InheritedSize[0x02E0])
	 */
	class UAddon_Frenzy_FumingMixTape : public UBaseFrenzyMixtapeAddon
	{
	public:
		unsigned char                                              UnknownData_0AXC[0x50];                                  // 0x02E0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _regressionModifier;                                     // 0x0330(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4INR[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.Addon_Frenzy_JoeysMixTape
	 * Size -> 0x0020 (FullSize[0x0300] - InheritedSize[0x02E0])
	 */
	class UAddon_Frenzy_JoeysMixTape : public UBaseFrenzyMixtapeAddon
	{
	public:
		class UClass*                                              _statusEffectToImpose;                                   // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T3Z4[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.Addon_Frenzy_MuralSketch
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UAddon_Frenzy_MuralSketch : public UItemAddon
	{
	public:
		float                                                      _speedBonusPerHit;                                       // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQ2K[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.Addon_Frenzy_NeverSleepPills
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UAddon_Frenzy_NeverSleepPills : public UItemAddon
	{
	public:
		float                                                      _speedModifierDuringFrenzy;                              // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HR3[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.Addon_Frenzy_StolenSketchBook
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UAddon_Frenzy_StolenSketchBook : public UItemAddon
	{
	public:
		int32_t                                                    _dropItemAfterChainedHitNumber;                          // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCEV[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.BaseImposeEffectOnFrenzyBleedout
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UBaseImposeEffectOnFrenzyBleedout : public UItemAddon
	{
	public:
		class UClass*                                              _statusEffectToImpose;                                   // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.FrenzyAttack
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class UFrenzyAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_W7PM[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.FrenzyAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UFrenzyAttackHittingSubstate : public UPounceAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.FrenzyAttackSuccessSubstate
	 * Size -> 0x0090 (FullSize[0x01A8] - InheritedSize[0x0118])
	 */
	class UFrenzyAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		struct FDBDTunableRowHandle                                _healthyTime;                                            // 0x0118(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _injuredTime;                                            // 0x0140(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _bleedoutTime;                                           // 0x0168(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _healthyCurve;                                           // 0x0190(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _injuredCurve;                                           // 0x0198(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _bleedoutCurve;                                          // 0x01A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.FrenzyComponent
	 * Size -> 0x06A0 (FullSize[0x0758] - InheritedSize[0x00B8])
	 */
	class UFrenzyComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_0147[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFrenzyStarted;                                         // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFrenzyEnded;                                           // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFrenzyEndedNoCooldown;                                 // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInjuredBleedoutStartedDuringFrenzy;                    // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFrenzyReadyToStart;                                    // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFrenzyIncreasedTier;                                   // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91IY[0x150];                                 // 0x0120(0x0150) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _allowManuallyEndFrenzy;                                 // 0x0270(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chargeToLoseOnRemoveBleedoutTimeAttack;                 // 0x02F0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chargeToLoseOnNonFrenzyAttack;                          // 0x0370(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chargeToLoseOnMissedFrenzyAttack;                       // 0x03F0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _cooldownDuration;                                       // 0x0470(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _frenzyMaxDuration;                                      // 0x04F0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _frenzyRechargeDuration;                                 // 0x0570(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _usagePercentNeededToStartFrenzy;                        // 0x05F0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlasherPlayer*                                      _slasher;                                                // 0x0670(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L7A7[0x18];                                  // 0x0678(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractionDefinition*                              _cooldownInteraction;                                    // 0x0690(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _boltSlasherEffect;                                      // 0x0698(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzySlasherEffect;                                    // 0x06A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzyTier0SlasherEffect;                               // 0x06A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzyTier1SlasherEffect;                               // 0x06B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzyTier2SlasherEffect;                               // 0x06B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzyTier3SlasherEffect;                               // 0x06C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzyTier4SlasherEffect;                               // 0x06C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzyCooldownEffect;                                   // 0x06D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _boltCamperEffect;                                       // 0x06D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _frenzyCamperEffect;                                     // 0x06E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2NYZ[0x70];                                  // 0x06E8(0x0070) MISSED OFFSET (PADDING)

	public:
		void StartFrenzy();
		void SetStartingFrenzy(bool startingFrenzy);
		void SetObjectState(class UGameplayTagContainerComponent* objectState);
		void ResumeFrenzyChargeDepletion();
		void PauseFrenzyChargeDepletion();
		void OnMoriStarted();
		void OnFrenzyCooldownStarted();
		bool IsStartingFrenzy();
		bool IsInFrenzyCooldown();
		bool IsInFrenzy();
		void InitializeFrenzy();
		bool HasStartedInjuredBleedoutDuringThisFrenzy();
		void EndFrenzy(EFrenzyEndReason Reason);
		bool CanStartFrenzy();
		bool CanManuallyEndFrenzy();
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.FrenzySlasherVault
	 * Size -> 0x0040 (FullSize[0x0700] - InheritedSize[0x06C0])
	 */
	class UFrenzySlasherVault : public USlasherVaultDefinition
	{
	public:
		class UCurveFloat*                                         _vaultFallSpeedCurve;                                    // 0x06C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _frenzyWindowVaultDuration;                              // 0x06C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_43CT[0x10];                                  // 0x06F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.JoeysMixtapeEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UJoeysMixtapeEffect : public UStatusEffect
	{
	public:
		class UClass*                                              _statusEffectToImpose;                                   // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.LegionAnimInstance
	 * Size -> 0x0020 (FullSize[0x0620] - InheritedSize[0x0600])
	 */
	class ULegionAnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isFrenzy;                                               // 0x0600(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3IA0[0x1F];                                  // 0x0601(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.LegionAttackPicker
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class ULegionAttackPicker : public USlasherAttackPickerComponent
	{
	public:
		unsigned char                                              UnknownData_Y71B[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.LegionCheatComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class ULegionCheatComponent : public UActorComponent
	{
	public:
		void DBD_LegionFrenzyForever();
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.LegionKillerAnalyticsComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class ULegionKillerAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_S0JS[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher);
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.LegionSurvivorAnalyticsComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class ULegionSurvivorAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MZ57[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (PADDING)

	public:
		void SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher);
		void OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.Madgrit
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class UMadgrit : public UPerk
	{
	public:
		class UCurveFloat*                                         _slashHittingSpeedCurve;                                 // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.ModifyFrenzyFOVEffect
	 * Size -> 0x0038 (FullSize[0x0388] - InheritedSize[0x0350])
	 */
	class UModifyFrenzyFOVEffect : public UStatusEffect
	{
	public:
		float                                                      _increaseFOVPerHit;                                      // 0x0350(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_56G7[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _frenzyBaseFOV;                                          // 0x0358(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_195P[0x8];                                   // 0x0380(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnFrenzyTierIncreased(int32_t tier);
		static UClass* StaticClass();
	};

	/**
	 * Class TheLegion.OnSelfMendImposeEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UOnSelfMendImposeEffect : public UStatusEffect
	{
	public:
		float                                                      _statusEffectTime;                                       // 0x0350(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2A6A[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _statusEffectToImpose;                                   // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
