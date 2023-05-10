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
	 * Class TheDoctor.Alert
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UAlert : public UPerk
	{
	public:
		float                                                      _killerAuraRevealDuration[0x3];                          // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XFTP[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _alertKillerRevealEffect;                                // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _alertKillerRevealEffectClass;                           // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnPerkActivate_Cosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.CalmBaseAddon
	 * Size -> 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
	 */
	class UCalmBaseAddon : public USimpleSpawnEffectsOnAllSurvivorsAddon
	{
	public:
		float                                                      _terrorRadiusModification;                               // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OWZW[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.CalmIntermittentFakeTerrorRadiusEffect
	 * Size -> 0x0048 (FullSize[0x0398] - InheritedSize[0x0350])
	 */
	class UCalmIntermittentFakeTerrorRadiusEffect : public UStatusEffect
	{
	public:
		float                                                      _fakeTerrorRadiusDuration;                               // 0x0350(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _fakeTerrorRadiusIntermittenceMin;                       // 0x0354(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _fakeTerrorRadiusIntermittenceMax;                       // 0x0358(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2HN0[0x3C];                                  // 0x035C(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.CartersSpark
	 * Size -> 0x00D8 (FullSize[0x0588] - InheritedSize[0x04B0])
	 */
	class ACartersSpark : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_J68V[0x18];                                  // 0x04B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _shockAttackComboTimerDuration;                          // 0x04C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorCartersSparkComponentClass;                     // 0x04F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q94N[0x70];                                  // 0x04F8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _doctorBlockInterruptEffect;                             // 0x0568(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _madnessStatusEffect;                                    // 0x0570(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _illusionaryDoctorEffect;                                // 0x0578(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCartersSparkComponent*                              _cartersSparkComponent;                                  // 0x0580(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Cosmetic_OnShockTherapyZoneDetonated(class ADBDPlayer* killer, int32_t survivorsHitCount);
		void CancelSurvivorInteraction(class ACamperPlayer* Survivor);
		void Authority_StartShockAttackComboTimer(class ACamperPlayer* shockedSurvivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.DisciplineEffect
	 * Size -> 0x00A8 (FullSize[0x03F8] - InheritedSize[0x0350])
	 */
	class UDisciplineEffect : public UStatusEffect
	{
	public:
		float                                                      _deactivationDelay;                                      // 0x0350(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XSF2[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _redStainInterpolating;                                  // 0x0358(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IFCG[0x9F];                                  // 0x0359(0x009F) MISSED OFFSET (PADDING)

	public:
		void SetRedStainInterpolating(bool isInterpolating);
		void Cosmetic_UpdateSurvivorRedStain(bool visible, float DeltaTime);
		void Cosmetic_UpdateKillerRedStain(bool visible, float DeltaTime);
		void Cosmetic_SpawnRedStains();
		void Cosmetic_ActivateSurvivorRedStain(bool Activate);
		void Cosmetic_ActivateKillerRedStain(bool Activate);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.DoctorAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UDoctorAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.DoctorCheatComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UDoctorCheatComponent : public UActorComponent
	{
	public:
		void DBD_AddMadness(float madnessToAdd, const class FString& localPlayerId);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.DoctorPowerSubAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UDoctorPowerSubAnimInstance : public UAnimInstance
	{
	public:
		EDoctorAbilityType                                         _abilityType;                                            // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDoctorAbilityPhase                                        _abilityPhase;                                           // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isShockTherapyInCooldown;                               // 0x02C2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DWIR[0x1];                                   // 0x02C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UDoctorPowerAnimStateComponent>       _powerStateComponent;                                    // 0x02C4(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T1F1[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnShockTherapyAnimationAttackStop();
		void OnShockTherapyAnimationAttackStart();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.DoctorSurvivorCosmeticHelperActor
	 * Size -> 0x0080 (FullSize[0x02E8] - InheritedSize[0x0268])
	 */
	class ADoctorSurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
	{
	public:
		unsigned char                                              UnknownData_NF54[0x80];                                  // 0x0268(0x0080) MISSED OFFSET (PADDING)

	public:
		bool IsSurvivorOperatingLocker();
		class USurvivorMadnessEffect* GetSurvivorMadnessEffect();
		class AIllusionaryDoctor* GetIllusionaryDoctor();
		void Cosmetic_OnOwningSurvivorShocked();
		void Cosmetic_OnMadnessIntermittentScream();
		void Cosmetic_OnMadnessChanged(int32_t newTier, bool increased);
		void Cosmetic_OnInsaneSkillCheck();
		void Cosmetic_OnIllusionaryPalletDeactivated(class APallet* Pallet);
		void Cosmetic_OnIllusionaryPalletActivated(class APallet* Pallet);
		void Cosmetic_OnIllusionaryDoctorApparitionSequenceStart(const struct FTransform& illusionaryDoctorTransform, float apparitionDuration);
		bool CanPlayShockedAnimation();
		bool CanPlayOverwhelmingMadnessAudio();
		bool CanPlayOverwhelmingMadnessAnimation();
		bool CanPlayerSeeIllusionaryPalletGlitch(class APallet* Pallet);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.IllusionaryDoctor
	 * Size -> 0x0030 (FullSize[0x0288] - InheritedSize[0x0258])
	 */
	class AIllusionaryDoctor : public ABaseHusk
	{
	public:
		class UDBDOutlineComponent*                                _dbdOutline;                                             // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _revealedAuraColor;                                      // 0x0260(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _unrevealedAuraColor;                                    // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UYXL[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (PADDING)

	public:
		void DeactivateIllusion();
		void ActivateIllusion(const struct FTransform& Transform);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.IllusionaryDoctorEffect
	 * Size -> 0x01D0 (FullSize[0x0520] - InheritedSize[0x0350])
	 */
	class UIllusionaryDoctorEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_3LBX[0x18];                                  // 0x0350(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _illusionaryDoctorClass;                                 // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AIllusionaryDoctor*                                  _illusionaryDoctor;                                      // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_484P[0x38];                                  // 0x0378(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _madness2IllusionaryDoctorIntervalMinimum;               // 0x03B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _madness2IllusionaryDoctorIntervalMaximum;               // 0x03D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _madness3IllusionaryDoctorIntervalMinimum;               // 0x0400(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _madness3IllusionaryDoctorIntervalMaximum;               // 0x0428(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _illusionaryDoctorFrontalDistance;                       // 0x0450(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _illusionaryDoctorRadialVarianceMaximum;                 // 0x0478(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _illusionaryDoctorApparitionDuration;                    // 0x04A0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Multicast_StartIllusionaryDoctorAppearSequence(const struct FTransform& illusionaryDoctorTransform);
		void Multicast_DebugDisplayInfo(float timeRemainingBeforeActivation, const struct FColor& messageColor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.IllusionaryPalletBaseAddon
	 * Size -> 0x0060 (FullSize[0x0338] - InheritedSize[0x02D8])
	 */
	class UIllusionaryPalletBaseAddon : public USimpleSpawnEffectsOnAllSurvivorsAddon
	{
	public:
		unsigned char                                              UnknownData_NWBY[0x50];                                  // 0x02D8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _illusionaryPalletInterval;                              // 0x0328(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5JA1[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _palletComponentClass;                                   // 0x0330(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Multicast_DeactivateIllusionaryPallet(class APallet* Pallet, class ADBDPlayer* triggeringPlayer);
		void Multicast_ActivateIllusionaryPallet(class APallet* Pallet, bool isPalletDown);
		void Authority_OnIllusionaryPalletActorOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.IllusionaryPalletComponent
	 * Size -> 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
	 */
	class UIllusionaryPalletComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_0V2K[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          _illusionaryPalletDownTransform;                         // 0x00C0(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       _illusionaryPalletTriggerZone;                           // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _illusionaryPalletTriggerZoneBoxExtent;                  // 0x00F8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _illusionaryPalletTriggerZoneLocation;                   // 0x0104(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _glitchEffectRange;                                      // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KK9W[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                _illusionaryPalletStaticMeshComponent;                   // 0x0118(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D1JM[0xE0];                                  // 0x0120(0x00E0) MISSED OFFSET (PADDING)

	public:
		void OnStartIllusionaryPalletDeactivation(class ADBDPlayer* triggeringPlayer);
		void OnStartIllusionaryPalletActivation(bool isPalletDown);
		float GetGlitchEffectRange();
		void DeactivateIllusionaryPallet();
		bool CanLocallyObservedPlayerSeeIllusionaryPallet();
		void ActivateIllusionaryPallet(bool isPalletDown);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.IridescentQueenEffect
	 * Size -> 0x0050 (FullSize[0x03A0] - InheritedSize[0x0350])
	 */
	class UIridescentQueenEffect : public UStatusEffect
	{
	public:
		class UCapsuleComponent*                                   _authority_iridescentQueenDischargeDetectionZone;        // 0x0350(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _dischargeDetectionZoneHalfHeight;                       // 0x0358(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _dischargeDetectionZoneRadius;                           // 0x035C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _madnessToAddOnDischarge;                                // 0x0360(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HMHW[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _chargeActive;                                           // 0x0390(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _charged;                                                // 0x0391(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RT11[0xE];                                   // 0x0392(0x000E) MISSED OFFSET (PADDING)

	public:
		void OnRep_ChargeActive();
		void Multicast_DischargeOnSurvivor(class ACamperPlayer* Survivor);
		EStaticFieldMovementSpeed GetStaticFieldMovementSpeed();
		void Cosmetic_UpdateStaticFieldFX();
		void Cosmetic_SpawnStaticFieldFX();
		void Cosmetic_OnDischargeZoneDeactivated();
		void Cosmetic_OnDischargeZoneActivated();
		void Cosmetic_OnDischargeOnSurvivor(class ADBDPlayer* survivorToShock);
		void Authority_OnSurvivorOverlappedDischargeZone(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.Lithe
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class ULithe : public UPerk
	{
	public:
		class UClass*                                              _exhaustedStatusEffectClass;                             // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _movementSpeedStatusEffectClass;                         // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementSpeedPercentage;                                // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementSpeedDuration;                                  // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetMovementSpeedPercentage();
		float GetMovementSpeedDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.MadnessSurvivorSubAnimInstance
	 * Size -> 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
	 */
	class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_AW7K[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _isTotallyInsane;                                        // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInjured;                                              // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0552(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0553(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3HOY[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _walkAnimSpeed;                                          // 0x0558(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCarried;                                              // 0x055C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInAir;                                                // 0x055D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDead;                                                 // 0x055E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GG24[0x1];                                   // 0x055F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.Overcharge
	 * Size -> 0x00E8 (FullSize[0x04B0] - InheritedSize[0x03C8])
	 */
	class UOvercharge : public UPerk
	{
	public:
		float                                                      _skillCheckFailurePenalty[0x3];                          // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JYB1[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _regressionRateMultiplierCurve;                          // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AGenerator*, struct FFastTimer>                 _overchargedGeneratorTimers;                             // 0x03E0(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P8CQ[0x30];                                  // 0x0430(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AGenerator*, uint64_t>                          _gameplayModifierHandles;                                // 0x0460(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		float GetSkillCheckFailurePenaltyAtLevel();
		class UCurveFloat* GetRegressionRateMultiplierCurve();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.RestraintRevealToKillerEffect
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class URestraintRevealToKillerEffect : public UActivateOnEventTimedStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.ShockTherapy
	 * Size -> 0x01B0 (FullSize[0x08F0] - InheritedSize[0x0740])
	 */
	class UShockTherapy : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_MI8U[0x38];                                  // 0x0740(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _shockTherapyConeAOEClass;                               // 0x0778(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _shockTherapyLineAOEClass;                               // 0x0780(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _shockTherapyCircleAOEClass;                             // 0x0788(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AShockTherapyAOE*>                            _shockTherapyZones;                                      // 0x0790(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7A63[0x30];                                  // 0x07A0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _shockTherapyDetonationDelay;                            // 0x07D0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _shockTherapyBlockActionDuration;                        // 0x0850(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _shockTherapySecondsToCharge;                            // 0x0878(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _shockTherapyBlockAllInteractionsEffectClass;            // 0x08A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HIT6[0x10];                                  // 0x08A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _shockTherapyMadnessGain;                                // 0x08B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T21Z[0x10];                                  // 0x08E0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		void Multicast_DetonateShockTherapy(TArray<class ACamperPlayer*> shockedSurvivors, float madnessToAdd);
		void Multicast_ActivateShockTherapyAOE(const struct FTransform& shockTherapyZoneTransform);
		void Cosmetic_OnShockTherapyChargeEnd(class ADBDPlayer* Player, bool charged);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.ShockTherapyAOE
	 * Size -> 0x00F0 (FullSize[0x0320] - InheritedSize[0x0230])
	 */
	class AShockTherapyAOE : public AActor
	{
	public:
		class UStaticMeshComponent*                                _attackZone;                                             // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     _rootComponent;                                          // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTunableStat                                        _shockTherapyRange;                                      // 0x0240(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _killerOffset;                                           // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _baseZoneSize;                                           // 0x02C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _shockTherapyPreviewClass;                               // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AShockTherapyAOEPreview*                             _shockTherapyPreview;                                    // 0x02D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ROFQ[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          _previewTransform;                                       // 0x02E0(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KGHZ[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnScaleInitialized();
		void Cosmetic_ActivateShockTherapyAOE();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.ShockTherapyAOEPreview
	 * Size -> 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
	 */
	class AShockTherapyAOEPreview : public AActor
	{
	public:
		struct FVector                                             _baseWorldScale;                                         // 0x0230(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_THMQ[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _shockTherapyRange;                                      // 0x0240(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M4WC[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetAttackZonePreviewScale(const struct FVector& Scale);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.SnapOutOfIt
	 * Size -> 0x0090 (FullSize[0x07D0] - InheritedSize[0x0740])
	 */
	class USnapOutOfIt : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_3KVW[0x8];                                   // 0x0740(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _postSnapOutOfItMadnessTier;                             // 0x0748(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _snapOutOfItSkillCheckFailTimePenalty;                   // 0x0770(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R0PA[0x30];                                  // 0x0798(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isSkillCheckFailureTimerActive;                         // 0x07C8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SN5G[0x7];                                   // 0x07C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType Type);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.StaticBlast
	 * Size -> 0x0100 (FullSize[0x0840] - InheritedSize[0x0740])
	 */
	class UStaticBlast : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_B08T[0x90];                                  // 0x0740(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _staticBlastActivationDelay;                             // 0x07D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YZBV[0x4];                                   // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _staticBlastMadnessGain;                                 // 0x07D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _staticBlastSecondsToCharge;                             // 0x0800(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E1NR[0x18];                                  // 0x0828(0x0018) MISSED OFFSET (PADDING)

	public:
		void Multicast_StaticBlastShockSurvivors(TArray<class ACamperPlayer*> survivorsToShock);
		void Cosmetic_OnStaticBlastChargeEnd(class ADBDPlayer* Player, bool charged);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.SurvivorCartersSparkComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class USurvivorCartersSparkComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_DSKQ[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.SurvivorMadnessEffect
	 * Size -> 0x0148 (FullSize[0x0498] - InheritedSize[0x0350])
	 */
	class USurvivorMadnessEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_J3U9[0x20];                                  // 0x0350(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _madnessAmount;                                          // 0x0370(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCI6[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxMadnessTier;                                         // 0x0378(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDBDTunableRowHandle>                        _madnessThresholds;                                      // 0x03A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FDBDTunableRowHandle>                        _insaneSkillCheckChances;                                // 0x03B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _screamDelayMin;                                         // 0x03C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _screamDelayMax;                                         // 0x03E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                madnessStatusViewId;                                     // 0x0410(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U7IB[0x4C];                                  // 0x041C(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _survivorOperatingLockerSemanticTags;                    // 0x0468(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BV4Y[0x10];                                  // 0x0488(0x0010) MISSED OFFSET (PADDING)

	public:
		void SpawnMadnessBubbleIndicator();
		void OnRep_MadnessAmount();
		void Multicast_OnMadnessTierChanged(int32_t newMadnessTier, int32_t oldMadnessTier);
		void Multicast_MadnessIntermittentScream();
		int32_t GetMadnessTier();
		void Authority_AddMadness(float amountToAdd);
		void ActivateMadnessBubbleIndicator();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDoctor.TheDoctorUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTheDoctorUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsTotallyInsane(class ADBDPlayer* Player);
		class USurvivorMadnessEffect* STATIC_GetSurvivorMadnessEffect(class ADBDPlayer* Player);
		int32_t STATIC_GetMadnessTier(class ADBDPlayer* Player);
		bool STATIC_CanGainInsanity(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
