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
	 * Class TheHuntress.DeadHard
	 * Size -> 0x00B0 (FullSize[0x0478] - InheritedSize[0x03C8])
	 */
	class UDeadHard : public UPerk
	{
	public:
		float                                                      _deadHardCooldownDuration;                               // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8MMI[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatusEffectSpawnData>                      _effectsToSpawn;                                         // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FPlayerStatusEffectSpawnerHelper                    _spawnerHelper;                                          // 0x03E0(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      _exhaustedCooldownPerLevel[0x3];                         // 0x0468(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KQJP[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (PADDING)

	public:
		float GetExhaustedDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.DeadHardEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UDeadHardEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.DeadHardInteraction
	 * Size -> 0x0018 (FullSize[0x0630] - InheritedSize[0x0618])
	 */
	class UDeadHardInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_G3JW[0x8];                                   // 0x0618(0x0008) Fix Super Size
		unsigned char                                              UnknownData_3CT5[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetCooldown
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class UHatchetCooldown : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_S9RM[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetLauncher
	 * Size -> 0x0120 (FullSize[0x02A0] - InheritedSize[0x0180])
	 */
	class UHatchetLauncher : public UKillerProjectileLauncher
	{
	public:
		struct FRotator                                            _angleOffset;                                            // 0x0180(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_54SV[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _angleOffsetCurve;                                       // 0x0190(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _speedCurve;                                             // 0x0198(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _hatchetSpeedWhenThrowFullyCharged;                      // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ERCD[0x4];                                   // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _hatchetPitchCurve;                                      // 0x01A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMinAngleOffset;                                  // 0x01B0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMaxAngleOffset;                                  // 0x01D8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMinSpeed;                                        // 0x0200(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMaxSpeed;                                        // 0x0228(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetLaunchPitchMin;                                  // 0x0250(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetLaunchPitchMax;                                  // 0x0278(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool IsLaunchedHatchetFullyCharged();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetProjectile
	 * Size -> 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
	 */
	class AHatchetProjectile : public AKillerProjectile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetRack
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class AHatchetRack : public ABaseLockerItem
	{
	public:
		void SetMovableHatchetVisibility(bool visible);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetThrow
	 * Size -> 0x0030 (FullSize[0x0780] - InheritedSize[0x0750])
	 */
	class UHatchetThrow : public UThrowInteraction
	{
	public:
		struct FDBDTunableRowHandle                                _hatchetThrowCancellationCooldown;                       // 0x0750(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NAY3[0x8];                                   // 0x0778(0x0008) MISSED OFFSET (PADDING)

	public:
		class ATheHuntressPower* GetOwningHatchetSpawner();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HexHuntressLullabyEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UHexHuntressLullabyEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_CO3A[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HexHuntressLullabyPerk
	 * Size -> 0x0050 (FullSize[0x0498] - InheritedSize[0x0448])
	 */
	class UHexHuntressLullabyPerk : public UHexPerk
	{
	public:
		unsigned char                                              UnknownData_2VL1[0x18];                                  // 0x0448(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _huntressLullabyEffectID;                                // 0x0460(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E708[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _huntressLullabyStatusEffect;                            // 0x0470(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _possiblePlayerStateTagsInProgress;                      // 0x0478(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HuntressPowerSubAnimInstance
	 * Size -> 0x0040 (FullSize[0x0300] - InheritedSize[0x02C0])
	 */
	class UHuntressPowerSubAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _powerIsActive;                                          // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _powerIsReleased;                                        // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _powerIsCancelled;                                       // 0x02C2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _powerIsInCooldown;                                      // 0x02C3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _aimingPlayRate;                                         // 0x02C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _launchPlayRate;                                         // 0x02C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _cancelPlayRate;                                         // 0x02CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _cooldownPlayRate;                                       // 0x02D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5ZT2[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _aimingAnimationSequence;                                // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _launchAnimationSequence;                                // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _cancelAnimationSequence;                                // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _cooldownAnimationSequence;                              // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O4G2[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.ReloadHatchet
	 * Size -> 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
	 */
	class UReloadHatchet : public UBaseLockerInteraction
	{
	public:
		unsigned char                                              UnknownData_QPS5[0x8];                                   // 0x0648(0x0008) Fix Super Size

	public:
		bool IsInteractionPossible_Shared(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.TheHuntressPower
	 * Size -> 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
	 */
	class ATheHuntressPower : public ACollectable
	{
	public:
		class UClass*                                              _reloadHatchetClass;                                     // 0x04B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1VOA[0x8];                                   // 0x04B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartHatchetShineCosmetic();
		void SetPercentThrowStrength(float percentStrength);
		void SetHatchetVisible(bool visible);
		void PrintDebugThrowInfo();
		bool IsHatchetThrowFullyCharged();
		bool HasHatchet();
		class ASlasherPlayer* GetOwningKiller();
		class UBaseProjectileLauncher* GetHatchetProjectileLauncher();
		class UHatchetCooldown* GetHatchetCooldown();
		class UAkComponent* GetAkAudioHatchetSpawner();
		void Cosmetic_OnThrowInteractionStart();
		void Cosmetic_OnThrowInteractionCancelled();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
