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
	 * Class SnowmanWinterEvent.HideInSnowmanInteraction
	 * Size -> 0x00D8 (FullSize[0x06F0] - InheritedSize[0x0618])
	 */
	class UHideInSnowmanInteraction : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _timeToEnterSnowman;                                     // 0x0618(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _attachToPlayerDelay;                                    // 0x0640(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P9N0[0x88];                                  // 0x0668(0x0088) MISSED OFFSET (PADDING)

	public:
		void Multicast_StopControllingSnowman(class ADBDPlayer* Player);
		void Multicast_StartControllingSnowman(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class SnowmanWinterEvent.KillerHideInSnowmanInteraction
	 * Size -> 0x0140 (FullSize[0x0830] - InheritedSize[0x06F0])
	 */
	class UKillerHideInSnowmanInteraction : public UHideInSnowmanInteraction
	{
	public:
		bool                                                       _shouldAttackOutOfSnowman;                               // 0x06F0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SXE7[0x7];                                   // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _minimumTimeToAttackAndExit;                             // 0x06F8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _mousePitchScaleMultiplier;                              // 0x0720(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _mouseYawScaleMultiplier;                                // 0x0748(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _gamepadPitchScaleMultiplier;                            // 0x0770(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _gamepadYawScaleMultiplier;                              // 0x0798(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _gamepadPitchCurve;                                      // 0x07C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _gamepadYawCurve;                                        // 0x07C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _rotationScaleAdjustmentTime;                            // 0x07D0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MVMR[0x38];                                  // 0x07F8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SnowmanWinterEvent.Snowman
	 * Size -> 0x02E8 (FullSize[0x0638] - InheritedSize[0x0350])
	 */
	class ASnowman : public ARespawnableInteractable
	{
	public:
		unsigned char                                              UnknownData_K0MS[0x90];                                  // 0x0350(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _timeToRespawn;                                          // 0x03E0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxRespawnsAfterKillerAttackWhileOccupied;              // 0x0408(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeToBeDestroyed;                                      // 0x0430(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _highFiveCooldown;                                       // 0x0458(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _attachToPlayerDelay;                                    // 0x0480(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESnowmanState                                              _snowmanState;                                           // 0x04A8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESnowmanDestructionType                                    _snowmanDestructionType;                                 // 0x04A9(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6R9S[0x6];                                   // 0x04AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _playerUsingThisSnowman;                                 // 0x04B0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCVO[0xE0];                                  // 0x04B8(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDSkeletalMeshComponentBudgeted*                   _snowmanSkeletalMesh;                                    // 0x0598(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _snowmanOutlineComponent;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   _snowmanCapsule;                                         // 0x05A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   _snowmanHandCapsule;                                     // 0x05B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _hideInSnowmanInteractionChargeable;                     // 0x05B8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _snowmanInteractor;                                      // 0x05C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _snowmanInteractionZone;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBaseActorAttackableComponent*                       _attackableComponent;                                    // 0x05D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isAcquiredFromPool;                                     // 0x05D8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SYK0[0x1F];                                  // 0x05D9(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isMoving;                                               // 0x05F8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7C7P[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASnowman*                                            _highFiveFollower;                                       // 0x0600(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T7DW[0x30];                                  // 0x0608(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnRep_SnowmanState();
		void OnRep_SnowmanDestructionType();
		void OnRep_PlayerUsingSnowman();
		void OnRep_IsMoving();
		void OnRep_HighFiveFollower();
		void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller, class ADBDPlayer* playerInSnowman);
		void Multicast_SpawnSnowman(const struct FSnowmanSpawnData& spawnData);
		void Multicast_SetSnowmanMaterialVariant(int32_t materialVariantIndex);
		void Multicast_SetSnowmanHiddenInGame(bool IsHidden);
		void Multicast_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman);
		void Multicast_OnSnowmanStartBeingUsedByKiller(class ASlasherPlayer* killerUsingSnowman);
		void Multicast_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman);
		void Multicast_OnSnowmanStartBeingControlledByKiller(class ASlasherPlayer* killerUsingSnowman);
		void Multicast_DrawDebugCollisionCheck(const struct FVector& BoxExtent, float debugLifetime);
		void Cosmetic_SetSnowmanMaterialVariant(int32_t materialVariantIndex);
		void Cosmetic_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman);
		void Cosmetic_OnSnowmanStartBeingUsedByKiller(class ASlasherPlayer* killerUsingSnowman);
		void Cosmetic_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman);
		void Cosmetic_OnSnowmanStartBeingControlledByKiller(class ASlasherPlayer* killerUsingSnowman);
		void Cosmetic_OnSnowmanSpawned();
		void Cosmetic_OnSnowmanHighFive(class ASnowman* otherSnowman);
		void Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(class ACamperPlayer* survivorUsingSnowman);
		void Cosmetic_OnSnowmanDestroyedByKillerCancelExit();
		void Cosmetic_OnSnowmanDestroyedByKillerAttackExit(class ASlasherPlayer* killerUsingSnowman);
		void Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(class ASlasherPlayer* killerAttackingSnowman);
		void Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(class ACamperPlayer* survivorUsingSnowman, class ASlasherPlayer* killerAttackingSnowman);
		void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(class ACamperPlayer* survivorUsingSnowman);
		void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(class ASlasherPlayer* killerAttackingSnowman);
		void Authority_OnSnowmanHandOverlapEnd(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Authority_OnSnowmanHandOverlapBegin(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class SnowmanWinterEvent.SnowmanAnimInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class USnowmanAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isIdle;                                                 // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingEntered;                                         // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isControlled;                                           // 0x02C2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDestroyed;                                            // 0x02C3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingDestroyedDueToSurvivorRunExit;                   // 0x02C4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingDestroyedDueToKillerAttackExit;                  // 0x02C5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingDestroyedDueToKillerAttackWhileControlled;       // 0x02C6(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingDestroyedDueToKillerAttackWhileEmpty;            // 0x02C7(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSurvivorUsingSnowmanMoving;                           // 0x02C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HSFG[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ASnowman>                             _snowman;                                                // 0x02CC(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ADBDPlayer>                           _playerUsingSnowman;                                     // 0x02D4(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6Z7H[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType);
		static UClass* StaticClass();
	};

	/**
	 * Class SnowmanWinterEvent.SnowmanSpawnPlacementStrategy
	 * Size -> 0x0240 (FullSize[0x02F8] - InheritedSize[0x00B8])
	 */
	class USnowmanSpawnPlacementStrategy : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _minDistanceFromOtherActiveSnowmen;                      // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minDistanceFromOtherPlayers;                            // 0x00E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minHatchDistance;                                       // 0x0108(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minPalletDistance;                                      // 0x0130(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _navmesh_radiusArea;                                     // 0x0158(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _navmesh_minimumDistanceFromOriginSpawnPoint;            // 0x0180(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _navmesh_minimumNumberOfNavmeshPointsToBeReady;          // 0x01A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _boxExtentXSize;                                         // 0x01D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _boxExtentYSize;                                         // 0x01F8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _boxExtentZSize;                                         // 0x0220(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _collisionBoxHalfExtent;                                 // 0x0248(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _collisionCapsuleHalfHeight;                             // 0x0254(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _collisionCapsuleRadius;                                 // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDistanceFromOtherActiveSnowmenSquared;               // 0x025C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDistanceFromOtherPlayersSquared;                     // 0x0260(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minPalletDistanceSquared;                               // 0x0264(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minHatchSquaredDistance;                                // 0x0268(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1SNG[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETileSpawnPointType>                                _spawnPointsTileTypes;                                   // 0x0270(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<EGameplayElementType>                               _spawnPointsGameplayElementTypes;                        // 0x0280(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSnowmanSpawnLocationData>                   _spawnLocationData;                                      // 0x0290(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AHatch*>                                      _hatches;                                                // 0x02A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class APallet*>                                     _pallets;                                                // 0x02B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BLC2[0x20];                                  // 0x02C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _collisionCheckBoxExtents;                               // 0x02E0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _downRaycastLength;                                      // 0x02EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _rayCastZOffet;                                          // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceToGroundToleranceSquared;                       // 0x02F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnIntroCompletedOrLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class SnowmanWinterEvent.SnowmanWinterEventComponent
	 * Size -> 0x00B0 (FullSize[0x0168] - InheritedSize[0x00B8])
	 */
	class USnowmanWinterEventComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _numbSnowmenToSpawnAtStart;                              // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IVPU[0x38];                                  // 0x00E0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _snowmanSpawnPlacementStrategyClass;                     // 0x0118(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _snowmanClass;                                           // 0x0120(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorInSnowmanEffect;                                // 0x0128(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerInSnowmanEffect;                                  // 0x0130(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USnowmanSpawnPlacementStrategy*                      _snowmanSpawnPlacementStrategy;                          // 0x0138(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F1IP[0x18];                                  // 0x0140(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASnowman*>                                    _snowmen;                                                // 0x0158(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds);
		void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds);
		void DBD_Winter2021RecalculateSpawnPoints();
		void DBD_Winter2021ForceRespawnAllSnowmen();
		static UClass* StaticClass();
	};

	/**
	 * Class SnowmanWinterEvent.SnowmanWinterEventPlayerComponent
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class USnowmanWinterEventPlayerComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _maxTrackedTimeSinceSnowmanExit;                         // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _previouslyHighFivedPlayers[0x50];                       // 0x00E0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_52WF[0x50];                                  // 0x0130(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SnowmanWinterEvent.SurvivorHideInSnowmanInteraction
	 * Size -> 0x0100 (FullSize[0x07F0] - InheritedSize[0x06F0])
	 */
	class USurvivorHideInSnowmanInteraction : public UHideInSnowmanInteraction
	{
	public:
		bool                                                       _shouldRunOutOfSnowman;                                  // 0x06F0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isSnowmanShieldDamaged;                                 // 0x06F1(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QYAQ[0x6];                                   // 0x06F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _nonDamagingSnowmanDestroyingEvents;                     // 0x06F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minimumTimeToRunAndExit;                                // 0x0708(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _cameraZoomBack;                                         // 0x0730(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeToZoomEnter;                                        // 0x0758(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeToZoomExit;                                         // 0x0780(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OFUD[0x48];                                  // 0x07A8(0x0048) MISSED OFFSET (PADDING)

	public:
		void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
