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
	 * Class TheSpirit.ActivePhaseWalkInteraction
	 * Size -> 0x0190 (FullSize[0x08D0] - InheritedSize[0x0740])
	 */
	class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FTunableStat                                        _fullyChargedSpeed;                                      // 0x0740(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _accelerationMultiplier;                                 // 0x07C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8N3V[0x4];                                   // 0x07C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _chargingSpeedCurve;                                     // 0x07C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _phaseWalkPenaltyThreshold;                              // 0x07D0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _phaseWalkPenaltyValue;                                  // 0x07F8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TBKC[0x8];                                   // 0x0820(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _activePhaseWalkChargeDuration;                          // 0x0828(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        _activePhaseWalkChargingMontage;                         // 0x08A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AWMB[0x20];                                  // 0x08B0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnPowerCollected(class ADBDPlayer* collector);
		void OnPlayerLocallyObservedChanged(class ADBDPlayer* Player);
		float GetChargeTime();
		void Cosmetic_ResetChargeVFX(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.Autodidact
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UAutodidact : public UPerk
	{
	public:
		int32_t                                                    _maxTokenCountPerLevel[0x3];                             // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _progressionBonusPerToken;                               // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _initialSkillCheckProgressionPenalty;                    // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P45O[0xC];                                   // 0x03DC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.Deliverance
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UDeliverance : public UPerk
	{
	public:
		float                                                      _brokenEffectDurationPerLevel[0x3];                      // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QM3V[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _selfUnhookAlwaysSucceedEffectClass;                     // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _selfUnhookAlwaysSucceedEffect;                          // 0x03E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.Diversion
	 * Size -> 0x0068 (FullSize[0x0430] - InheritedSize[0x03C8])
	 */
	class UDiversion : public UPerk
	{
	public:
		unsigned char                                              UnknownData_N8TV[0x58];                                  // 0x03C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _diversionActivationTimePerLevel[0x3];                   // 0x0420(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _throwPebbleDistance;                                    // 0x042C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnOwningSurvivorImmobilizedStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState);
		void Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.DriedCherryBlossom
	 * Size -> 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
	 */
	class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
	{
	public:
		unsigned char                                              UnknownData_8590[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.KatsumoriTalisman
	 * Size -> 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
	 */
	class UKatsumoriTalisman : public UItemAddon
	{
	public:
		TArray<class AActor*>                                      _blockableWindows;                                       // 0x02B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float                                                      _explosionRadius;                                        // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _blockDuration;                                          // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RTMY[0x8];                                   // 0x02D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.MotherDaughterRing
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UMotherDaughterRing : public UItemAddon
	{
	public:
		class UClass*                                              _hideFootstepsEffect;                                    // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.OwningPlayerInSpiritHuskRange
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		unsigned char                                              UnknownData_85LA[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.PhaseWalkingComponent
	 * Size -> 0x0500 (FullSize[0x05B8] - InheritedSize[0x00B8])
	 */
	class UPhaseWalkingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_FZ3G[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPhaseWalkInfoReceived;                                 // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameEndedVFX;                                          // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             TriggerSurvivorVisibilityVFX;                            // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             TriggerKillerVisibilityVFX;                              // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMaxActivePhaseWalkCharges;                             // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              _huskClass;                                              // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isActivePhaseWalking;                                   // 0x0118(0x0030) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isPassivePhaseWalking;                                  // 0x0148(0x0030) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isInPostActivePhaseWalk;                                // 0x0178(0x0030) Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInteractionPhaseWalking;                              // 0x01A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GUYK[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _husk;                                                   // 0x01B0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDBidirectionalTimer                              _activePhaseWalkCharges;                                 // 0x01B8(0x0028) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B5GR[0x28];                                  // 0x01E0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _survivorsAreVisible;                                    // 0x0208(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R3ER[0x37];                                  // 0x0209(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _passivePhaseWalkHusksCount;                             // 0x0240(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2Y8D[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _isVisibleDuringPhaseWalkTags;                           // 0x0248(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _activePhaseWalkChargeGainRate;                          // 0x0258(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _passivePhaseWalkDuration;                               // 0x02D8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _passivePhaseWalkFirstCooldownDuration;                  // 0x0358(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _passivePhaseWalkCooldownDurationMin;                    // 0x0380(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _passivePhaseWalkCooldownDurationMax;                    // 0x0400(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _activePhaseWalkMaxCharge;                               // 0x0480(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _activePhaseWalkMaxAcceleration;                         // 0x0500(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _defaultMaxAcceleration;                                 // 0x0528(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9LIB[0x68];                                  // 0x0550(0x0068) MISSED OFFSET (PADDING)

	public:
		void UpdateSurvivorVisibility(bool visible);
		void UpdateKillerVisibility();
		void SpawnPassivePhaseWalkHusks();
		void Server_Broadcast_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo);
		void RefillActivePhaseWalkCharges();
		void OnLevelReadyToPlay();
		void Multicast_Broadcast_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo);
		void ModifyActivePhaseWalkCharges(float Delta);
		void MakePassivePhaseWalkHusksVisible(const struct FTransform& huskTransform, float opacityValue, float speedValue);
		void Local_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo);
		void Local_EndPhaseWalks();
		bool IsPhaseWalking();
		bool IsPassivePhaseWalking();
		bool IsDecoyActive();
		bool IsActivePhaseWalking();
		int32_t GetSpiritPassivePhaseWalkHusksCountToSpawn();
		struct FDBDTimer GetPassivePhaseWalkTimer();
		class AActor* GetHusk();
		class UDecoySlasherComponent* GetDecoySlasherComponent();
		float GetActivePhaseWalkCharges();
		float GetActivePhaseWalkChargePercentage();
		void DBD_RefillActivePhaseWalkCharges();
		bool CanStartActivePhaseWalk();
		void Authority_SetIsInPostActivePhaseWalk(bool value);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.Rancor
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class URancor : public UPerk
	{
	public:
		float                                                      _survivorRevealDuration;                                 // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _killerRevealToObsessionDuration[0x3];                   // 0x03CC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LWYJ[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SpawnBubbleAtSurvivorsLocation();
		float GetSurvivorRevealDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritFury
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class USpiritFury : public UPerk
	{
	public:
		unsigned char                                              UnknownData_M3BQ[0x4];                                   // 0x03C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _palletToBreakCountPerLevel[0x3];                        // 0x03CC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		int32_t GetPalletToBreakCountAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritHuskAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class USpiritHuskAnimInstance : public UAnimInstance
	{
	public:
		class USkeletalMeshComponent*                              _killerMesh;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RQFW[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance
	 * Size -> 0x0030 (FullSize[0x0300] - InheritedSize[0x02D0])
	 */
	class USpiritHuskActivePhaseWalkAnimInstance : public USpiritHuskAnimInstance
	{
	public:
		float                                                      _elapsedTimeSinceFakingRealKillerPose;                   // 0x02D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _idleAnimationExplicitTime;                              // 0x02D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FEW2[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _idleAnimationSequence;                                  // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P1ZJ[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritHuskOutlineUpdateStrategy
	 * Size -> 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
	 */
	class USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		unsigned char                                              UnknownData_ER6T[0x28];                                  // 0x00C0(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.ThrowRockInteraction
	 * Size -> 0x0068 (FullSize[0x0680] - InheritedSize[0x0618])
	 */
	class UThrowRockInteraction : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _loudNoiseAudioRange;                                    // 0x0618(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _scratchMarksApplicationDelay;                           // 0x0640(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _scratchMarksCountToSpawn;                               // 0x0644(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2A4I[0x4];                                   // 0x0648(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _diversionHeightOffset;                                  // 0x064C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RKTQ[0x30];                                  // 0x0650(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
