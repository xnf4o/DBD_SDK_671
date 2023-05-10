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
	 * Class Halloween2022.VoidEnergyChangeQEEvaluator
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UVoidEnergyChangeQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_ZMNO[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void ListenToOnComponentAddedEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.DepositEnergyInMatchQEEvaluator
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UDepositEnergyInMatchQEEvaluator : public UVoidEnergyChangeQEEvaluator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.DepositVoidEnergyTierQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UDepositVoidEnergyTierQEEvaluator : public UQuestEventEvaluatorBase
	{
	public:
		unsigned char                                              UnknownData_SVIV[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnVoidEnergyDeposited(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.HalloweenCentrifugeAnimInstance
	 * Size -> 0x0040 (FullSize[0x0300] - InheritedSize[0x02C0])
	 */
	class UHalloweenCentrifugeAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isActive;                                               // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3OWA[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _blendSpaceValue;                                        // 0x02C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _timeToChangeBlendValue;                                 // 0x02C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FSDR[0x34];                                  // 0x02CC(0x0034) MISSED OFFSET (PADDING)

	public:
		void SetDesiredBlendValue(float blendValue);
		void OnEnergySpawned(int32_t previousEnergy, int32_t currentEnergy);
		void OnBlendValueChanged(float blendValue);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.GeneratorCentrifugeAnimInstance
	 * Size -> 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
	 */
	class UGeneratorCentrifugeAnimInstance : public UHalloweenCentrifugeAnimInstance
	{
	public:
		unsigned char                                              UnknownData_9KDB[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopRepairing(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void StartRepairing(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnStopRepair(class AGenerator* Generator);
		void OnStartRepair(class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.MeatHookCentrifugeAnimInstance
	 * Size -> 0x0040 (FullSize[0x0340] - InheritedSize[0x0300])
	 */
	class UMeatHookCentrifugeAnimInstance : public UHalloweenCentrifugeAnimInstance
	{
	public:
		unsigned char                                              UnknownData_9YPD[0x30];                                  // 0x0300(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _animationLength;                                        // 0x0330(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1OA1[0xC];                                   // 0x0334(0x000C) MISSED OFFSET (PADDING)

	public:
		void PlayerNoLongerOnHook(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void PlayerHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnPlayerNoLongerOnHook(class AMeatHook* MeatHook);
		void OnPlayerHooked(class AMeatHook* MeatHook);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.PlayerVoidEnergy
	 * Size -> 0x0250 (FullSize[0x0308] - InheritedSize[0x00B8])
	 */
	class UPlayerVoidEnergy : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Z7JJ[0x60];                                  // 0x00B8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EVoidEnergyChangeReason                                    _reasonLastVoidEnergyChangeOccurred;                     // 0x0118(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EJ6R[0xB];                                   // 0x0119(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _currentVoidEnergy;                                      // 0x0124(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDBDTunableRowHandle>                        _bloodPointMultiplierTiers;                              // 0x0128(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		int32_t                                                    _totalVoidEnergySpent;                                   // 0x0138(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _currentBloodpointsMultiplier;                           // 0x013C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WFSG[0x28];                                  // 0x0140(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDBDTunableRowHandle>                        _voidEnergyLevelsToStartNextTier;                        // 0x0168(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxEnergyOnPlayerAllowed;                               // 0x0178(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxEnergyPlayerCanBank;                                 // 0x01A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _amountLostOnDownAsSurvivor;                             // 0x01C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _amountGainedOnDownAsKiller;                             // 0x01F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _amountGainedOnStunAsSurvivor;                           // 0x0218(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _amountLostOnStunAsKiller;                               // 0x0240(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDBDTunableRowHandle>                        _hasteValueTiers;                                        // 0x0268(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeHasteEffectLasts;                                   // 0x0278(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteStatusEffect;                                      // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _voidEnergyOrbSpawnerClass;                              // 0x02A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8BXE[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _scoreEventTiers;                                        // 0x02B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _scoreEventTiersWithoutOffering;                         // 0x02C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6NBY[0x30];                                  // 0x02D8(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnVoidEnergySpent();
		void OnVoidEnergyLost();
		void OnVoidEnergyGained();
		void OnRep_TotalVoidEnergySpent();
		void OnRep_CurrentVoidEnergy(int32_t previousEnergyCount);
		void OnLocallyObservedChanged(class ADBDPlayer* Player);
		void OnLocallyControlledChanged();
		int32_t GetTotalVoidEnergyDeposited();
		int32_t GetMaxAmountOfVoidEnergyCanReceive();
		int32_t GetCurrentVoidEnergyRewardTier();
		int32_t GetCurrentVoidEnergyCount();
		float GetCurrentBloodPointMultiplier();
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.UnstableRift
	 * Size -> 0x0108 (FullSize[0x0470] - InheritedSize[0x0368])
	 */
	class AUnstableRift : public ASpecialBehaviourInteractable
	{
	public:
		bool                                                       _isInitialized;                                          // 0x0368(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WZDP[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUnstableRiftInteraction*                            _unstableRiftInteractionSurvivor;                        // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUnstableRiftInteraction*                            _unstableRiftInteractionKiller;                          // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _unstableRiftInteractionChargeableSurvivor;              // 0x0380(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _unstableRiftInteractionChargeableKiller;                // 0x0388(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _unstableRiftInteractor;                                 // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _unstableRiftInteractionZone;                            // 0x0398(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x03A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUnstableRiftOutlineStrategy*                        _outlineStrategy;                                        // 0x03A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _unstableRiftMesh;                                       // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUnstableRiftTeleportationComponent*                 _unstableRiftTeleportationComponent;                     // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNearTrackedActorComponent*                          _nearTrackedActorComponent;                              // 0x03C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _unstableRiftInteractionSecondsToChargeSurvivor;         // 0x03C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _unstableRiftInteractionSecondsToChargeKiller;           // 0x03F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _unstableRiftSecondsBeforeTeleport;                      // 0x0418(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _offeringDirectionalAudioCueDistance;                    // 0x0440(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAkAudioEvent*                                       _offeringAudioEvent;                                     // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnIntroCompleted();
		void Cosmetic_OnTeleportStart(bool hadPlayerInteraction);
		void Cosmetic_OnTeleportFinished();
		void Cosmetic_OnTeleportDelayStarted();
		void Cosmetic_OnStoppedInteracting();
		void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
		void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		void Cosmetic_ChangeUnstableVisibility(bool IsVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.UnstableRiftInteraction
	 * Size -> 0x0040 (FullSize[0x0780] - InheritedSize[0x0740])
	 */
	class UUnstableRiftInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_CZ0E[0x34];                                  // 0x0740(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _heightOffsetForOrbs;                                    // 0x0774(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L0X0[0x8];                                   // 0x0778(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.UnstableRiftOutlineStrategy
	 * Size -> 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
	 */
	class UUnstableRiftOutlineStrategy : public USourceBasedOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _displayColor;                                           // 0x0138(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TVI0[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.UnstableRiftTeleportationComponent
	 * Size -> 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
	 */
	class UUnstableRiftTeleportationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NTRA[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _unstableRiftTeleportDelay;                              // 0x00D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _teleportationVisualsDelay;                              // 0x00F8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minDistanceFromOtherUnstableRifts;                      // 0x0120(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TCHD[0x90];                                  // 0x0148(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayElementType                                       _spawnType;                                              // 0x01D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PZL9[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AUnstableRift*>                               _allUnstableRifts;                                       // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DL9X[0x10];                                  // 0x01F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void Multicast_TeleportUnstableRift(const struct FVector& Location);
		void Multicast_PreTeleportation(const struct FVector& teleportLocation, bool hadPlayerInteraction);
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.VoidEnergyAmountInMatchQEEvaluator
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UVoidEnergyAmountInMatchQEEvaluator : public UVoidEnergyChangeQEEvaluator
	{
	public:
		unsigned char                                              UnknownData_1N2Y[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.VoidEnergyProducer
	 * Size -> 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
	 */
	class UVoidEnergyProducer : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AZVO[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxEnergyCanAward;                                      // 0x00D0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _energyToGiveOnEvent;                                    // 0x00F8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               _gameEventToRewardEnergy;                                // 0x0120(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		int32_t                                                    _totalEnergyGiven;                                       // 0x0140(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_42SB[0x1C];                                  // 0x0144(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _voidEnergySpawnObjectName;                              // 0x0160(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _voidEnergyHoverObjectName;                              // 0x016C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8Q24[0x18];                                  // 0x0178(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_TotalEnergyGiven(int32_t lastTotalEnergyGivenValue);
		bool HasEnergyLeftToGive();
		int32_t GetRemainingEnergy();
		void Cosmetic_OnVoidOrbsSpawned(int32_t orbsSpawned);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.VoidEnergyGeneratorComponent
	 * Size -> 0x0080 (FullSize[0x0210] - InheritedSize[0x0190])
	 */
	class UVoidEnergyGeneratorComponent : public UVoidEnergyProducer
	{
	public:
		struct FDBDTunableRowHandle                                _timeWorkingOnGeneratorNeededToAwardEnergy;              // 0x0190(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6BOA[0x58];                                  // 0x01B8(0x0058) MISSED OFFSET (PADDING)

	public:
		float GetCurrentTimeDoneOnGenerator(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.VoidEnergyMeatHookComponent
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UVoidEnergyMeatHookComponent : public UVoidEnergyProducer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.VoidEnergyOrb
	 * Size -> 0x00C8 (FullSize[0x02F8] - InheritedSize[0x0230])
	 */
	class AVoidEnergyOrb : public AActor
	{
	public:
		unsigned char                                              UnknownData_H8PH[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _characterBoneName;                                      // 0x0240(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C7FV[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _timeHoverDuration;                                      // 0x0250(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeToMoveToTarget;                                     // 0x0278(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _timeBeforeCollectionToPlaySound;                        // 0x02A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5K6P[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _minAmplitudeAllowed;                                    // 0x02A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxAmplitudeAllowed;                                    // 0x02AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U0CA[0x48];                                  // 0x02B0(0x0048) MISSED OFFSET (PADDING)

	public:
		void PlaceOrbInQueue();
		void Cosmetic_OnOrbSpawned(class ADBDPlayer* playerGivingOrbTo, bool isLargeOrb);
		void Cosmetic_OnOrbDisappearWithoutCollection(bool isLargeOrb);
		void Cosmetic_OnOrbDisappearWithCollection(class ADBDPlayer* playerGivingOrbTo);
		void Cosmetic_DelayBeforeCollection(class ADBDPlayer* playerGivingOrbTo);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.VoidEnergyOrbSpawner
	 * Size -> 0x0168 (FullSize[0x0220] - InheritedSize[0x00B8])
	 */
	class UVoidEnergyOrbSpawner : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_JJBK[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _timeBetweenEachSpawn;                                   // 0x00C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _totalDistanceForOrbs;                                   // 0x00F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxDistanceDown;                                        // 0x0118(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeOrbMoves;                                           // 0x0140(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeOrbHovers;                                          // 0x0168(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _downedSurviorSpawnOffsetHeight;                         // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _palletSpawnHeightOfOrbs;                                // 0x0194(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lockerSpawnForwardOffset;                               // 0x0198(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lockerSpawnUpwardOffset;                                // 0x019C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _slasherSpawnOffset;                                     // 0x01A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _slasherSpawnOffsetFarDown;                              // 0x01A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ITMH[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _voidEnergyOrbClass;                                     // 0x01B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7I5P[0x60];                                  // 0x01C0(0x0060) MISSED OFFSET (PADDING)

	public:
		void Multicast_SpawnVoidEnergyOrb(const struct FOrbProperties& OrbProperties, bool isLargeOrb);
		void Authority_TimerSpawnVoidEnergyOrb(const struct FOrbProperties& OrbProperties, bool isLargeOrb);
		void Authority_SurvivorStunOnKiller(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_SurvivorStunKillerWithPallet(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_SurvivorStunKillerWithHeadOn(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_SurvivorStunKillerWithFlashLight(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_SpawnVoidEnergyOrbs(const struct FOrbProperties& OrbProperties, int32_t numberOfOrbsToSpawn, int32_t numberOfOrbsThatCanBeAbsorbed);
		void Authority_KillerDownSurvivor(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_GiveVoidEnergyToPlayer(EVoidEnergyType VoidEnergyType, int32_t voidEnergyToAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2022.VoidEnergyPumpkinComponent
	 * Size -> 0x0078 (FullSize[0x0208] - InheritedSize[0x0190])
	 */
	class UVoidEnergyPumpkinComponent : public UVoidEnergyProducer
	{
	public:
		struct FDBDTunableRowHandle                                _treatVoidEnergyAmount;                                  // 0x0190(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _trickVoidEnergyAmount;                                  // 0x01B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _neutralVoidEnergyAmount;                                // 0x01E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
