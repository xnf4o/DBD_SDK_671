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
	 * Class TheK30.BTService_FindObject_GuardFlag
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UBTService_FindObject_GuardFlag : public UBTService_FindObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.DrawPatrolPathInteraction
	 * Size -> 0x01A8 (FullSize[0x0920] - InheritedSize[0x0778])
	 */
	class UDrawPatrolPathInteraction : public UBasicChargeableInteraction
	{
	public:
		class FScriptMulticastDelegate                             OnChargeStateChanged;                                    // 0x0778(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TH0[0x38];                                  // 0x0788(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSecondaryInteractionProperties                     _giveOrderProperties;                                    // 0x07C0(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FSecondaryInteractionProperties                     _releaseInteractionProperties;                           // 0x07F8(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maximumInteractionDuration;                             // 0x0830(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pathLengthWarningPercent;                               // 0x0858(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pathDrawingDurationWarningPercent;                      // 0x0880(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _postPowerHasteClass;                                    // 0x08A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _postPowerHasteValue;                                    // 0x08B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _hasteDurationByPathLength;                              // 0x08D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_62T3[0x40];                                  // 0x08E0(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetIsCharging(bool IsCharging);
		void Server_StartPatrol();
		void Server_SendOrder(class AInteractable* Target);
		void OnChargeStateChanged__DelegateSignature(bool IsCharging, bool IsChargeCompleted);
		void OnCancellationTimerCompleted();
		bool IsCharging();
		bool IsChargeCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.FloatingCameraNavigationComponent
	 * Size -> 0x01B8 (FullSize[0x0270] - InheritedSize[0x00B8])
	 */
	class UFloatingCameraNavigationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L6WV[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObjectPlacerComponent>               _ownerObjectPlacer;                                      // 0x00D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _snappingDistance;                                       // 0x00D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _previewSnappingTime;                                    // 0x0100(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _drawPathModeYawInputLimit;                              // 0x0128(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _floatingCameraMaxSpeed;                                 // 0x0150(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _floatingCameraAccelerationMultiplier;                   // 0x01D0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _strafeMovementSpeedMultiplier;                          // 0x01F8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ADBDPlayer>                           _playerOwner;                                            // 0x0220(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V9GH[0x48];                                  // 0x0228(0x0048) MISSED OFFSET (PADDING)

	public:
		void Server_EnableWalkOffLegdes(bool IsEnabled);
		void Multicast_EnableWalkOffLegdes(bool IsEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardAttackableComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UGuardAttackableComponent : public UAttackableComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardAttackComponent
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UGuardAttackComponent : public UActorComponent
	{
	public:
		class UClass*                                              _killerInstinctEffectClass;                              // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _killerInstinctEffectDuration;                           // 0x00C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDetectionZone                                             _detectionZoneToUse;                                     // 0x00E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZZY5[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _survivorsInZone[0x50];                                  // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardOrderBase
	 * Size -> 0x0018 (FullSize[0x0630] - InheritedSize[0x0618])
	 */
	class UGuardOrderBase : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_98CU[0x4];                                   // 0x0618(0x0004) Fix Super Size
		class FName                                                _explodeInteractableAnimNotifyID;                        // 0x061C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LD2L[0x8];                                   // 0x0628(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardBreakPallet
	 * Size -> 0x0000 (FullSize[0x0630] - InheritedSize[0x0630])
	 */
	class UGuardBreakPallet : public UGuardOrderBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardBreakWall
	 * Size -> 0x0000 (FullSize[0x0630] - InheritedSize[0x0630])
	 */
	class UGuardBreakWall : public UGuardOrderBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardController
	 * Size -> 0x0078 (FullSize[0x0798] - InheritedSize[0x0720])
	 */
	class AGuardController : public ADBDAIBTController
	{
	public:
		unsigned char                                              UnknownData_I0QE[0x8];                                   // 0x0720(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _cannotHuntWhileIdleTags;                                // 0x0728(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FName                                                _isPatrollingKey;                                        // 0x0738(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _patrolDestinationKey;                                   // 0x0744(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _patrolUseDirectPathKey;                                 // 0x0750(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _isHuntingKey;                                           // 0x075C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _huntedSurvivorKey;                                      // 0x0768(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _huntDestinationKey;                                     // 0x0774(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _huntUseDirectPathKey;                                   // 0x0780(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _huntShouldSearchLockerKey;                              // 0x078C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction, bool isDeceivingNoise);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardDamageGenerator
	 * Size -> 0x0000 (FullSize[0x0630] - InheritedSize[0x0630])
	 */
	class UGuardDamageGenerator : public UGuardOrderBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardFlag
	 * Size -> 0x00E0 (FullSize[0x0310] - InheritedSize[0x0230])
	 */
	class AGuardFlag : public AActor
	{
	public:
		class UPrimitiveComponent*                                 _flagPickupHitbox;                                       // 0x0230(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AKnightGuard*                                        _owningGuard;                                            // 0x0238(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _huntedSurvivor;                                         // 0x0240(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _flagPickupEnduranceEffectClass;                         // 0x0248(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _flagPickupEnduranceDuration;                            // 0x0250(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _flagPickupHasteEffectClass;                             // 0x0278(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _flagPickupHasteDuration;                                // 0x0280(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _flagPickupHasteModifier;                                // 0x02A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8PHS[0x38];                                  // 0x02D0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _clientHuntedSurvivor;                                   // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_HuntedSurvivor();
		void Multicast_OnCamperCapturedFlag(class ADBDPlayer* huntedSurvivor);
		class ADBDPlayer* GetHuntedSurvivor();
		float GetActivationTimeLeft();
		void Cosmetic_OnSurvivorCapturedFlag(class ADBDPlayer* previouslyHuntedSurvivor);
		void Cosmetic_OnFlagSpawned(float activationTimerDuration);
		void Cosmetic_OnFlagDisappearDueToHuntEnding(class ADBDPlayer* previouslyHuntedSurvivor);
		void Cosmetic_OnFlagActivationTimerCompleted();
		void Authority_OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardFlagOUtlineUpdateStrategy
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UGuardFlagOUtlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _killerColor;                                            // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _survivorColor;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardHuntComponent
	 * Size -> 0x00D0 (FullSize[0x0188] - InheritedSize[0x00B8])
	 */
	class UGuardHuntComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnGuardPhaseProgressUpdate;                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGIT[0x24];                                  // 0x00C8(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _maxPathingDetourLength;                                 // 0x00EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceBeforeGoingToNextWaypoint;                      // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceBeforeGoingToNextWaypointOffNavmesh;            // 0x00F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceFromLockerToClearWaypoints;                     // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _underWaypointZDistance;                                 // 0x00FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSpeedBasedNetSyncedValue                           _huntTimeLeft;                                           // 0x0100(0x0038) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ACamperPlayer*                                       _huntedSurvivor;                                         // 0x0138(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DHWF[0x4];                                   // 0x0140(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _huntStartingLocation;                                   // 0x0144(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3NSN[0x20];                                  // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _speedConsideredStuck;                                   // 0x0170(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _timeStuckToResetPathing;                                // 0x0174(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CRCQ[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_HuntStartingLocation();
		void OnRep_HuntedSurvivor(class ACamperPlayer* previousChasedSurvivor);
		void OnGuardPhaseProgressUpdate__DelegateSignature(float completionProgress);
		class ACamperPlayer* GetHuntedSurvivor();
		void Authority_OnCamperUnhooked(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		void Authority_OnCamperInjuredOrDowned(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardHuntTeleport
	 * Size -> 0x0038 (FullSize[0x0650] - InheritedSize[0x0618])
	 */
	class UGuardHuntTeleport : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _huntStartUpDuration;                                    // 0x0618(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _huntStartUpDurationPathLengthMultiplier;                // 0x0640(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V27R[0x8];                                   // 0x0648(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardInteractable
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class AGuardInteractable : public APlayerInteractable
	{
	public:
		class UInteractionDefinition*                              _startHuntInteraction;                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardOutlineUpdateStrategy
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UGuardOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _killerColor;                                            // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardPatrolComponent
	 * Size -> 0x0120 (FullSize[0x01D8] - InheritedSize[0x00B8])
	 */
	class UGuardPatrolComponent : public UActorComponent
	{
	public:
		unsigned char                                              _currentDirection;                                       // 0x00B8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VKTU[0x17];                                  // 0x00B9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _patrolPathLength;                                       // 0x00D0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInPatrolStartup;                                      // 0x00D4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPatrolling;                                           // 0x00D5(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OBPW[0x2];                                   // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpeedBasedNetSyncedValue                           _patrolTimeLeft;                                         // 0x00D8(0x0038) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6V76[0x30];                                  // 0x0110(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _patrolTotalDuration;                                    // 0x0140(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceBeforeHeadingToNextNode;                        // 0x0144(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EEC3[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _spawningVisionAngle;                                    // 0x0150(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _patrollingVisionAngle;                                  // 0x0178(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeToInterpolateVisionRadius;                          // 0x01A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _detectionRadiusInterpolationDurationPathLengthMultiplier; // 0x01C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _detectionRadiusPathLenghtMultiplier;                    // 0x01D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_IsPatrolling();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardPullSurvivorOutOfLocker
	 * Size -> 0x0078 (FullSize[0x06C0] - InheritedSize[0x0648])
	 */
	class UGuardPullSurvivorOutOfLocker : public UBaseLockerInteraction
	{
	public:
		class ACamperPlayer*                                       _targetSurvivor;                                         // 0x0648(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimationMontageDescriptor                         _healthySurvivorUpdateMontage;                           // 0x0650(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FAnimationMontageDescriptor                         _injuredSurvivorUpdateMontage;                           // 0x0670(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _pullOutOfLockerDuration;                                // 0x0690(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_19JP[0x8];                                   // 0x06B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardSlowingZone
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class AGuardSlowingZone : public AActor
	{
	public:
		void OnZoneEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnZoneBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardPalletSlowingZone
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AGuardPalletSlowingZone : public AGuardSlowingZone
	{
	public:
		class APallet*                                             _linkedPallet;                                           // 0x0230(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_LinkedPallet();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30BaseStatusEffectAddon
	 * Size -> 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
	 */
	class UK30BaseStatusEffectAddon : public UItemAddon
	{
	public:
		TArray<class UClass*>                                      _baseStatusEffectClasses;                                // 0x02B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		float                                                      _lifetime;                                               // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _customParam;                                            // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldDisplay;                                          // 0x02D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LPFQ[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30InflictStatusOnEndHuntAddon
	 * Size -> 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
	 */
	class UK30InflictStatusOnEndHuntAddon : public UK30BaseStatusEffectAddon
	{
	public:
		TArray<EGuardHuntEndReason>                                _huntEndReasonsToApplyEffect;                            // 0x02D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void Authority_OnEndHunt(class ADBDPlayer* Player, EGuardHuntEndReason huntEndReason);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30Addon14
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UK30Addon14 : public UK30InflictStatusOnEndHuntAddon
	{
	public:
		int32_t                                                    _numberOfEscapesBeforeEffect;                            // 0x02E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TIMK[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30ApplyStatusOnWakeUpAddon
	 * Size -> 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
	 */
	class UK30ApplyStatusOnWakeUpAddon : public UK30BaseStatusEffectAddon
	{
	public:
		class UClass*                                              _applicableGuard;                                        // 0x02D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Authority_OnWakeUp(class AKnightGuard* currentGuard);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30Addon16
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UK30Addon16 : public UK30ApplyStatusOnWakeUpAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30Addon17
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class UK30Addon17 : public UK30ApplyStatusOnWakeUpAddon
	{
	public:
		class UClass*                                              _revealAuraToKillerEffectClass;                          // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceForScreams;                                     // 0x02E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TPS7[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void Multicast_OnMakeSurvivorScream(class ADBDPlayer* Player, float lifetime);
		void BP_RevealAndMakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30Addon19
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class UK30Addon19 : public UK30ApplyStatusOnWakeUpAddon
	{
	public:
		int32_t                                                    _numberOfSummonsBeforeEffect;                            // 0x02E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceThresholdForEffect;                             // 0x02E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4IAN[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30Addon20
	 * Size -> 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
	 */
	class UK30Addon20 : public UK30BaseStatusEffectAddon
	{
	public:
		unsigned char                                              UnknownData_BC1B[0x10];                                  // 0x02D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AWindow*>                                     _blockedWindows;                                         // 0x02E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _huntedSurvivor;                                         // 0x02F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _gateBlockerEffectClass;                                 // 0x0300(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _trailPassThroughWindowBlockTime;                        // 0x0308(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KORJ[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_OnTrailCameraGoThroughWindow(class AWindow* Window);
		void Authority_OnStartHunt(class ADBDPlayer* Player);
		void Authority_OnHuntedSurvivorVault(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_OnEndHunt(class ADBDPlayer* Player, EGuardHuntEndReason huntEndReason);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30AnimInstance
	 * Size -> 0x0010 (FullSize[0x0610] - InheritedSize[0x0600])
	 */
	class UK30AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isChargingPower;                                        // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSnapping;                                             // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDrawingPath;                                          // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1QDE[0xD];                                   // 0x0603(0x000D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30CheatComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UK30CheatComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GQ8E[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void DBD_K30ToggleGuardAttackDespawn(int32_t despawnOnAttack);
		void DBD_K30SetPatrolAndHuntDuration(float secondsToPatrol);
		void DBD_K30SetNextGuardIndex(int32_t nextGuardIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30InflictStatusOnDetectedAddon
	 * Size -> 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
	 */
	class UK30InflictStatusOnDetectedAddon : public UK30BaseStatusEffectAddon
	{
	public:
		void Authority_OnDetected(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30InflictStatusOnGuardHitAddon
	 * Size -> 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
	 */
	class UK30InflictStatusOnGuardHitAddon : public UK30BaseStatusEffectAddon
	{
	public:
		void Authority_OnGuardHit(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30KnightHuskOutlineUpdateStrategy
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UK30KnightHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		unsigned char                                              UnknownData_719B[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30P01
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UK30P01 : public UPerk
	{
	public:
		float                                                      _revealRange;                                            // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DD3B[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _revealToKillerEffectClass;                              // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealDuration[0x3];                                    // 0x03D8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UG8R[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30P02
	 * Size -> 0x0040 (FullSize[0x0488] - InheritedSize[0x0448])
	 */
	class UK30P02 : public UHexPerk
	{
	public:
		class ADBDPlayer*                                          _cursedPlayer;                                           // 0x0448(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UStatusEffect*>                               _activeStatusEffects;                                    // 0x0450(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UClass*                                              _screamEffectClass;                                      // 0x0460(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _screamLoudNoiseDuration;                                // 0x0468(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JGCG[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _screamRevealAuraToKillerEffectClass;                    // 0x0470(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _screamRevealAuraToKillerDuration;                       // 0x0478(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _screamInterval[0x3];                                    // 0x047C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetScreamInterval();
		void Authority_UncursePlayer();
		void Authority_OnTotemStateChanged(ETotemState oldState, ETotemState NewState);
		void Authority_OnSurvivorFirstScream(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30P02ScreamStatusEffect
	 * Size -> 0x0080 (FullSize[0x03D0] - InheritedSize[0x0350])
	 */
	class UK30P02ScreamStatusEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_R7AF[0x28];                                  // 0x0350(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _screamingPlayerRevealAuraEffectClass;                   // 0x0378(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _screamPreventingTags;                                   // 0x0380(0x0020) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H7YC[0x30];                                  // 0x03A0(0x0030) MISSED OFFSET (PADDING)

	public:
		void Multicast_MakePlayerScream(float screamRevealDuration);
		bool IsTimerPaused();
		bool IsTimerActive();
		float GetTimerRemainingTime();
		float GetTimerElapsedTime();
		float GetTimerDuration();
		void BP_MakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30P03
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UK30P03 : public UPerk
	{
	public:
		class UClass*                                              _exposedEffectClass;                                     // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownTime;                                           // 0x03D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H4E1[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30Power
	 * Size -> 0x0350 (FullSize[0x0800] - InheritedSize[0x04B0])
	 */
	class AK30Power : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_M4MO[0x8];                                   // 0x04B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMoriBegin;                                             // 0x04B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMoriEnd;                                               // 0x04C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPowerStateChanged;                                     // 0x04D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMHZ[0x30];                                  // 0x04E8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractor*                                         _interactor;                                             // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDrawPatrolPathInteraction*                          _drawPathInteraction;                                    // 0x0520(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UKnightOrderComponent*                               _orderComponent;                                         // 0x0528(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0NU6[0x48];                                  // 0x0530(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AKnightGuard*>                                _guards;                                                 // 0x0578(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      _guardClasses;                                           // 0x0588(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		class UClass*                                              _drawPathStatusEffectClass;                              // 0x0598(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hideSurvivorVFXEffectClass;                             // 0x05A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _immuneToBlindEffectClass;                               // 0x05A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _knightHuskClass;                                        // 0x05B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _palletSlowingZoneClass;                                 // 0x05B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _vaultSlowingZoneClass;                                  // 0x05C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _k30SurvivorStatusComponentClass;                        // 0x05C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _pullSurvivorOutOfLockerInteractionClass;                // 0x05D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APoseableHusk*                                       _knightHusk;                                             // 0x05D8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _drawPathIndicatorClass;                                 // 0x05E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              _drawPathIndicator;                                      // 0x05E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPatrolTrailComponent*                               _patrolTrailComponent;                                   // 0x05F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFloatingCameraNavigationComponent*                  _floatingCameraNavigationComponent;                      // 0x05F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK30PowerPresentationComponent*                      _powerPresentationComponent;                             // 0x0600(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PVSZ[0x8];                                   // 0x0608(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerInteractionHandler*                           _interactionHandler;                                     // 0x0610(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _currentGuardIndex;                                      // 0x0618(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _nextGuardIndex;                                         // 0x0619(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_86ZN[0x6E];                                  // 0x061A(0x006E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _lookAtPreviewSpeed;                                     // 0x0688(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _maxPathLength;                                          // 0x06B0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _remainingPathLengthPercent;                             // 0x0730(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AGIQ[0x4];                                   // 0x0734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _powerReadyDelay;                                        // 0x0738(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _isVisibleDuringPathCreationModeTags;                    // 0x0760(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pathCreationModeOverFadeInTime;                         // 0x0770(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _enableInteractionAfterTeleportationDelay;               // 0x0798(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7ZJ5[0x64];                                  // 0x079C(0x0064) MISSED OFFSET (PADDING)

	public:
		void Server_OnSnappingStateChanged(bool IsSnapping);
		void SendPathNearlyEndingWarning();
		void OnRep_KnightHusk();
		void OnPowerStateChanged__DelegateSignature(EPowerState previousState, EPowerState NewState);
		void OnOrderTargetChanged();
		void OnMoriStateChanged__DelegateSignature();
		void OnInteractionStateChanged(bool IsCharging, bool IsChargeCompleted);
		void OnEndOverlapWindow(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Multicast_OnSnappingStateChanged(bool IsSnapping);
		bool IsSnapping();
		bool IsDrawingPath();
		bool IsChargingPower();
		void Cosmetic_UpdateRemainingPathLength(float remainingPathLengthPercent);
		void Cosmetic_OnPathDrawAvailableEnd();
		void Cosmetic_OnPathDrawAvailableBegin();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30PowerPresentationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK30PowerPresentationComponent : public UPresentationItemProgressComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30PresentationPowerFadeComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK30PresentationPowerFadeComponent : public UPresentationPowerFadeComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30RepeatGuardSpawnAddon
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UK30RepeatGuardSpawnAddon : public UItemAddon
	{
	public:
		unsigned char                                              _guardIndexToRepeat;                                     // 0x02B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MR49[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30SurvivorCosmeticHelperActor
	 * Size -> 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
	 */
	class AK30SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
	{
	public:
		unsigned char                                              UnknownData_B0C5[0x20];                                  // 0x0268(0x0020) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged(bool isFlagCaptureBuffActive);
		void Cosmetic_OnHuntEnd();
		void Cosmetic_OnHuntBegin();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30SurvivorStatusComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UK30SurvivorStatusComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_B446[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _owningSurvivor;                                         // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ACamperPlayer>                        _detectedSurvivor;                                       // 0x00C8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AK30Power>                            _k30Power;                                               // 0x00D0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.K30Utilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK30Utilities : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_GetNextGuardIndex(class AActor* TheK30);
		class AKnightGuard* STATIC_GetNextGuard(class AActor* TheK30);
		class AK30Power* STATIC_GetK30Power(class AActor* TheK30);
		int32_t STATIC_GetCurrentGuardIndex(class AActor* TheK30);
		class AKnightGuard* STATIC_GetCurrentGuard(class AActor* TheK30);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.KnightGuard
	 * Size -> 0x05F8 (FullSize[0x1750] - InheritedSize[0x1158])
	 */
	class AKnightGuard : public ADBDPlayer
	{
	public:
		unsigned char                                              UnknownData_ONGN[0x8];                                   // 0x1158(0x0008) Fix Super Size
		unsigned char                                              UnknownData_SIY4[0x58];                                  // 0x1160(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     _attackZonePivot;                                        // 0x11B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HEL4[0x8];                                   // 0x11C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _guardNoiseEventTimeInterval;                            // 0x11C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _guardNoiseEventRange;                                   // 0x11CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x11D0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1356[0x7];                                   // 0x11D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASlasherPlayer*                                      _owningKiller;                                           // 0x11D8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK30Power*                                           _killerPower;                                            // 0x11E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _flagClass;                                              // 0x11E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGuardFlag*                                          _guardFlag;                                              // 0x11F0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _attackComponentClass;                                   // 0x11F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGuardAttackComponent*                               _attackComponent;                                        // 0x1200(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGuardAttackableComponent*                           _attackableComponent;                                    // 0x1208(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   _attackableCapsule;                                      // 0x1210(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _huntComponentClass;                                     // 0x1218(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGuardHuntComponent*                                 _huntComponent;                                          // 0x1220(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _patrolComponentClass;                                   // 0x1228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGuardPatrolComponent*                               _patrolComponent;                                        // 0x1230(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _controllerClass;                                        // 0x1238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimationMontageSlave*                              _animationFollower;                                      // 0x1240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _gravityScale;                                           // 0x1248(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _patrolMovementSpeed;                                    // 0x1270(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _patrolStartupDelay;                                     // 0x12F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _patrolDuration;                                         // 0x1318(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _huntMovementSpeed;                                      // 0x1398(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _huntDuration;                                           // 0x13C0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _orderDuration;                                          // 0x1440(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _flagActivationTime;                                     // 0x14C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _shouldInflictBleed;                                     // 0x14E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _spawningVisionRange;                                    // 0x1510(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _patrollingVisionRange;                                  // 0x1538(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _palletAndVaultsSlowedDownSpeed;                         // 0x15B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _palletAndVaultsSlowDownDuration;                        // 0x15E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _immediateGeneratorRegressionPercent;                    // 0x1608(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _huntAuraVisibilityMinDistanceToKiller;                  // 0x1630(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _guardHitSurvivorScoreEvent;                             // 0x1658(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _guardDetectSurvivorScoreEvent;                          // 0x1664(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _guardBreakInteractableEvent;                            // 0x1670(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _guardChaseEndedEvent;                                   // 0x167C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TECJ[0x4];                                   // 0x1688(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _guardAnimTag;                                           // 0x168C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VPAU[0x60];                                  // 0x1698(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _overlappingSurvivorsAndVaults[0x50];                    // 0x16F8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_CPK1[0x8];                                   // 0x1748(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_OwningKiller();
		void OnRep_IsActive(bool previousIsActive);
		void Multicast_OnPatrolEnded(class ADBDPlayer* foundSurvivor);
		void Multicast_OnOrderEnded();
		void Multicast_CosmeticHuntEnded(EGuardHuntEndReason Reason);
		class UGuardPatrolComponent* GetPatrolComponent();
		class ASlasherPlayer* GetOwningKiller();
		void Cosmetic_StopOverlappingVaultOrSurvivor();
		void Cosmetic_StartOverlappingVaultOrSurvivor();
		void Cosmetic_ShowGuard();
		void Cosmetic_OnPatrolStarted();
		void Cosmetic_OnPatrolEnded(class ADBDPlayer* foundSurvivor);
		void Cosmetic_OnOrderStarted();
		void Cosmetic_OnOrderEnded();
		void Cosmetic_OnHuntTeleportStarted(float Duration);
		void Cosmetic_OnHuntEnded(EGuardHuntEndReason Reason);
		void Cosmetic_OnGuardVisionRadiusChanged(bool IsVisible, float Radius, float Angle);
		void Cosmetic_HuntChaseStarted();
		void Cosmetic_HideGuard();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.GuardAnimInstance
	 * Size -> 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
	 */
	class UGuardAnimInstance : public UPlayerAnimInstance
	{
	public:
		class AKnightGuard*                                        _owningGuard;                                            // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _forwardVelocity;                                        // 0x0548(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lateralVelocity;                                        // 0x054C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animSpeed;                                              // 0x0550(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animDirection;                                          // 0x0554(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x0558(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPatrolling;                                           // 0x0559(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPatrollingForward;                                    // 0x055A(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHunting;                                              // 0x055B(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isTeleporting;                                          // 0x055C(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PUYJ[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.KnightGuardStateMachine
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UKnightGuardStateMachine : public UPlayerStateMachine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.KnightHuskStunnableComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UKnightHuskStunnableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2VX7[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.KnightOrderComponent
	 * Size -> 0x0138 (FullSize[0x01F0] - InheritedSize[0x00B8])
	 */
	class UKnightOrderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ODH2[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AInteractable*>                               _possiblyTargetableObjects;                              // 0x00C8(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AInteractable*>                               _targetableObjects;                                      // 0x00D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _targetedColor;                                          // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _showTargetableAura;                                     // 0x00F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z5VX[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        _targetableColor;                                        // 0x00FC(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _showTargetableVFXWhilePowerIsReady;                     // 0x010C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2TDX[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AInteractable*                                       _currentTarget;                                          // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AInteractable*                                       _orderTarget;                                            // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _bestInteraction;                                        // 0x0120(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _currentInteraction;                                     // 0x0128(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AKnightGuard*                                        _guardWaitingForInteraction;                             // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8VOR[0x38];                                  // 0x0138(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _targetingRange;                                         // 0x0170(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _palletOrderClass;                                       // 0x0198(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerBreakPalletClass;                                 // 0x01A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _generatorOrderClass;                                    // 0x01A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerBreakGeneratorClass;                              // 0x01B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _breakableOrderClass;                                    // 0x01B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _killerBreakBreakableClass;                              // 0x01C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _updateRate;                                             // 0x01C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxTargetingAngle;                                      // 0x01CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _downRaycastLength;                                      // 0x01D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7WWY[0x1C];                                  // 0x01D4(0x001C) MISSED OFFSET (PADDING)

	public:
		void OnTargetChanged__DelegateSignature();
		void OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnCurrentInteractionFinished();
		void Cosmetic_OnTargetableObjectsChanged(class AInteractable* Object, bool isTargetable);
		void Cosmetic_OnNewTargetSelected(class AInteractable* newTarget, class AInteractable* oldTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.NavigationQueryFilter_Guard
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNavigationQueryFilter_Guard : public UNavigationQueryFilter_Player
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.NearUndestroyedPallet
	 * Size -> 0x0058 (FullSize[0x0148] - InheritedSize[0x00F0])
	 */
	class UNearUndestroyedPallet : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_2FZP[0x58];                                  // 0x00F0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.NearFallenPallet
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UNearFallenPallet : public UNearUndestroyedPallet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.PatrolTrailComponent
	 * Size -> 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
	 */
	class UPatrolTrailComponent : public UActorComponent
	{
	public:
		struct FTrailData                                          _trail;                                                  // 0x00B8(0x0030) Net, NativeAccessSpecifierPrivate
		struct FTrailSettings                                      _trailSettings;                                          // 0x00E8(0x0068) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BXTF[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      clearPathNodeDelay;                                      // 0x0160(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HQHQ[0x3C];                                  // 0x0164(0x003C) MISSED OFFSET (PADDING)

	public:
		bool IsTrailCompleted();
		class ATrailNode* GetPreviousNode(class ATrailNode* currentNode);
		class ATrailNode* GetNextNode(class ATrailNode* currentNode);
		struct FVector GetLastPosition();
		class ATrailNode* GetLastNode();
		class ATrailNode* GetFirstNode();
		float GetCurrentTrailLength();
		bool DoesTrailExist();
		void Authority_StopRecordingTrail();
		void Authority_StartRecordingTrail();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.S34P01
	 * Size -> 0x0140 (FullSize[0x0508] - InheritedSize[0x03C8])
	 */
	class US34P01 : public UPerk
	{
	public:
		class UChargeStrategy*                                     _chargeStrategyWhenActive;                               // 0x03C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableInteractionDefinition*                    _redirectedInteraction;                                  // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSecondaryInteractionProperties                     _startAccumulateSecondaryActionProperties;               // 0x03D8(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FSecondaryInteractionProperties                     _useTokensSecondaryActionProperties;                     // 0x0410(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YQX5[0x30];                                  // 0x0448(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isPerkActive;                                           // 0x0478(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XNWI[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isAccumulatingTokens;                                   // 0x0480(0x0030) Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W4OH[0x4];                                   // 0x04B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _initialCountdownTime[0x3];                              // 0x04B4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _accumulatedPercentMultiplier;                           // 0x04C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Q7N[0x44];                                  // 0x04C4(0x0044) MISSED OFFSET (PADDING)

	public:
		void Server_AbilityTwoPressed(bool IsPressed);
		void OnRep_IsPerkActive();
		void OnRep_IsAccumulatingTokens();
		void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		void Multicast_OnUseTokens();
		bool IsPerkActive();
		float GetInitialCountdownAtLevel();
		void Cosmetic_OnUseCharge(class ADBDPlayer* OwningPlayer);
		void Cosmetic_OnStopChargingPerk(class ADBDPlayer* OwningPlayer);
		void Cosmetic_OnStartChargingPerk(class ADBDPlayer* OwningPlayer);
		void Cosmetic_OnFullCharge(class ADBDPlayer* OwningPlayer);
		void Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);
		void Authority_OnAccumulateRedirectedCharge(float ChargeAmount, float maxCharge);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.S34P02
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class US34P02 : public UPerk
	{
	public:
		class UClass*                                              _revealKillerStatusClass;                                // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.S34P03
	 * Size -> 0x00D0 (FullSize[0x0498] - InheritedSize[0x03C8])
	 */
	class US34P03 : public UPerk
	{
	public:
		TArray<class AGenerator*>                                  _generatorsInRange;                                      // 0x03C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class ADBDPlayer*, class UStatusEffect*>              _activeStatusEffects;                                    // 0x03D8(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5OUA[0x50];                                  // 0x0428(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _generatorRangeFromPlayer;                               // 0x0478(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NYZ7[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _repairSpeedModifierClass;                               // 0x0480(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _repairSpeedValues[0x3];                                 // 0x0488(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BURS[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (PADDING)

	public:
		float GetRepairSpeedAtLevel();
		float GetGeneratorRangeFromPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK30.TrailNode
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ATrailNode : public AActor
	{
	public:
		struct FVector                                             PreviousNodePosition;                                    // 0x0230(0x000C) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXCT[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnRep_PreviousNodePosition();
		bool IsOwnerLocallyObserved();
		bool IsFirstNode();
		void Cosmetic_PrepareForRemoval();
		void Client_UpdateTrail();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
