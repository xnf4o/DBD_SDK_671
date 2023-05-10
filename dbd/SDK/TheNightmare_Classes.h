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
	 * Class TheNightmare.BlackBox
	 * Size -> 0x0040 (FullSize[0x02F8] - InheritedSize[0x02B8])
	 */
	class UBlackBox : public UItemAddon
	{
	public:
		struct FDBDTunableRowHandle                                _blockDuration;                                          // 0x02B8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YYI0[0x18];                                  // 0x02E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.BloodWarden
	 * Size -> 0x0070 (FullSize[0x0438] - InheritedSize[0x03C8])
	 */
	class UBloodWarden : public UPerk
	{
	public:
		unsigned char                                              UnknownData_9KF8[0x50];                                  // 0x03C8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _bloodWardenBlockerStatusEffectClass;                    // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _revealPlayerStatusEffectClass;                          // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkLevelSpikeDurations[0x3];                           // 0x0428(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WBMF[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.DreamInducerComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UDreamInducerComponent : public UActorComponent
	{
	public:
		class UClass*                                              _generatorDreamworldClass;                               // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.DreamSnare
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ADreamSnare : public AActor
	{
	public:
		bool                                                       _isActive;                                               // 0x0230(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OB92[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.DreamSnareEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UDreamSnareEffect : public UStatusEffect
	{
	public:
		void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.GeneratorDreamworldComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UGeneratorDreamworldComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_3DLW[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        _beamSocketsForBloodEffect;                              // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		void OnRepairSkillCheckFailed(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);
		void Cosmetic_OnPlayerFailSkillCheck(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.GeneratorTeleportInteraction
	 * Size -> 0x00C0 (FullSize[0x0800] - InheritedSize[0x0740])
	 */
	class UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      OnBloodSpurtsAINoiseEventRange;                          // 0x0740(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QD4[0x4];                                   // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _teleportCooldownTimer;                                  // 0x0748(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GDYY[0x40];                                  // 0x0750(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGenerator*                                          _selectedGenerator;                                      // 0x0790(0x0008) BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGenerator*                                          _locallySelectedGenerator;                               // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          _selectedTeleportLocation;                               // 0x07A0(0x0030) BlueprintVisible, Net, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       _isInteractionOngoing;                                   // 0x07D0(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _teleportFailed;                                         // 0x07D1(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _noTeleportableGenerators;                               // 0x07D2(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BMZM[0x1];                                   // 0x07D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _bloodSpurtInterval;                                     // 0x07D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _collisionCheckCapsuleHalfHeight;                        // 0x07D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _collisionCheckCapsuleRadius;                            // 0x07DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _collisionCheckLocationOffset;                           // 0x07E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _capsuleTraceAngleIncrement;                             // 0x07EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _generatorTeleportMaxAngle;                              // 0x07F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _downRaycastLength;                                      // 0x07F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HT4A[0x8];                                   // 0x07F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopBloodSpurts();
		void StartBloodSpurts();
		void ShowBloodSpurtsVFX();
		void Server_SetSelectedGenerator(class AGenerator* Generator);
		void OnTeleportReady();
		void OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location);
		void OnTeleported(const struct FTransform& transformBeforeTeleport);
		void OnSelectedGeneratorSet(class AGenerator* selectedGenerator);
		void OnRep_TeleportCooldownTimer();
		void OnRep_SelectedGenerator();
		void OnLocallySelectedGeneratorSet(class AGenerator* selectedGenerator);
		void OnIntroCompleted();
		void OnBloodSpurts();
		void Multicast_TeleportPlayer(const struct FVector& Location, const struct FRotator& Rotation);
		void Multicast_OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location);
		bool IsTeleportAvailable();
		void InitializeTunableValues(class ASlasherPlayer* killer);
		bool HasTeleportFailed();
		class ADBDPlayer* GetOwningPlayer();
		class AGenerator* GetInlineGenerator(class ADBDPlayer* Player);
		bool CanTeleportAtGenerator(class AGenerator* Generator);
		bool Authority_TeleportPlayerToGenerator(class ADBDPlayer* playerToTeleport, class AGenerator* Generator);
		void Authority_StartTeleportCooldown(bool teleported);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.InDreamSurvivorSubAnimInstance
	 * Size -> 0x0028 (FullSize[0x0570] - InheritedSize[0x0548])
	 */
	class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2BG7[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _shouldLookSleepy;                                       // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingCarried;                                         // 0x0552(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDead;                                                 // 0x0553(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHooked;                                               // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x0555(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0556(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VKG3[0x1];                                   // 0x0557(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _walkAnimSpeed;                                          // 0x0558(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JWS3[0x14];                                  // 0x055C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.NightmareAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UNightmareAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.NightmareCheatComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UNightmareCheatComponent : public UActorComponent
	{
	public:
		bool                                                       _allowWakeUpAnyClock;                                    // 0x00B8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_98U1[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_AllowWakeUpAnyClock();
		void DBD_AllowWakeUpAtAnyClock(bool allow);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.PlaceDreamPalletInteraction
	 * Size -> 0x0028 (FullSize[0x0640] - InheritedSize[0x0618])
	 */
	class UPlaceDreamPalletInteraction : public UInteractionDefinition
	{
	public:
		TArray<class APalletTracker*>                              _palletTrackers;                                         // 0x0618(0x0010) BlueprintVisible, Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DP8O[0x8];                                   // 0x0628(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APalletTracker*                                      _closestTracker;                                         // 0x0630(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HPM2[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (PADDING)

	public:
		void SpawnDreamPallet(class APalletTracker* trackerAtLocation);
		void InitializeTunableValues(class ASlasherPlayer* killer);
		class APalletTracker* GetTargetedPallet();
		bool CanSpawnDreamPalletAtTracker(class APalletTracker* tracker);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.PresentationGeneratorTeleportProgressComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		unsigned char                                              UnknownData_JYFS[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.RememberMe
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class URememberMe : public UPerk
	{
	public:
		bool DidLoseHealthState(class AActor* DamagedActor, int32_t oldHealthStateCount);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.SetDreamSnareInteraction
	 * Size -> 0x0010 (FullSize[0x0750] - InheritedSize[0x0740])
	 */
	class USetDreamSnareInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      MinPitch;                                                // 0x0740(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinPlacementDistance;                                    // 0x0744(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxPlacementDistance;                                    // 0x0748(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9E2M[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool HasCancelledDreamSnare();
		float GetTrapDistanceFromControlRotation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
