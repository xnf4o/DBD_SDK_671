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
	 * Class TheK31.K31DroneBaseAction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK31DroneBaseAction : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneChangeStateAction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UK31DroneChangeStateAction : public UK31DroneBaseAction
	{
	public:
		unsigned char                                              UnknownData_PGQK[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.ActivateK31DroneAction
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UActivateK31DroneAction : public UK31DroneChangeStateAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.ActiveDroneZoneLingeringEffect
	 * Size -> 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
	 */
	class UActiveDroneZoneLingeringEffect : public UBaseLingeringStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.Addon_K31Power_01
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UAddon_K31Power_01 : public UItemAddon
	{
	public:
		class UClass*                                              _modifySkillCheckDifficultyEffectClass;                  // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _skillCheckDifficultyModifier;                           // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4SOB[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.Addon_K31Power_02
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class UAddon_K31Power_02 : public UItemAddon
	{
	public:
		class UClass*                                              _blindnessEffectClass;                                   // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _blindnessEffectDuration;                                // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EC24[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _blindnessEffect;                                        // 0x02C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.Addon_K31Power_03
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UAddon_K31Power_03 : public UItemAddon
	{
	public:
		class UClass*                                              _actionSpeedEffect;                                      // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteEffect;                                            // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.Addon_K31Power_19
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UAddon_K31Power_19 : public UItemAddon
	{
	public:
		float                                                      _batteryPercent;                                         // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_13LE[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.Addon_K31Power_20
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class UAddon_K31Power_20 : public UItemAddon
	{
	public:
		class UK31PlayerZoneStatus*                                _playerZoneStatus;                                       // 0x02B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffectPercentageMultiplier;                        // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9XLI[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _hasteEffectClass;                                       // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _hasteEffect;                                            // 0x02D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AK31Drone*>                                   _survivorActivatedDrones;                                // 0x02D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.Addon_K31Power_21
	 * Size -> 0x0080 (FullSize[0x0338] - InheritedSize[0x02B8])
	 */
	class UAddon_K31Power_21 : public UItemAddon
	{
	public:
		float                                                      _terrorRadiusSize;                                       // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _terrorRadiusDuration;                                   // 0x02BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<EK31DroneStateID>                                   _allowedDroneStatesForEffectToApply;                     // 0x02C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class AK31Drone*                                           _targetDrone;                                            // 0x02D0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTerrorRadiusEmitterComponent*                       _terrorRadius;                                           // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D14V[0x30];                                  // 0x02E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _indicatorEffectClass;                                   // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _indicatorEffect;                                        // 0x0318(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PZ6X[0x18];                                  // 0x0320(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_TargetDrone();
		void Authority_OnTerrorRadiusLifetimeTimerDone();
		void Authority_OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.DeployDroneInteraction
	 * Size -> 0x0018 (FullSize[0x0630] - InheritedSize[0x0618])
	 */
	class UDeployDroneInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_WGXT[0x8];                                   // 0x0618(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WE9K[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.DronePoolInitializer
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UDronePoolInitializer : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _droneCount;                                             // 0x00B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1AFN[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.DroneRestrictedPlacementAreaStrategy
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class UDroneRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
	{
	public:
		unsigned char                                              UnknownData_SU7L[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnDroneEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnDroneAcquiredChanged(bool acquired);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.HackableDroneState
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHackableDroneState : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.HitPlayerInActiveZoneScoreEmitter
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UHitPlayerInActiveZoneScoreEmitter : public UPlayerScoreEmitter
	{
	public:
		float                                                      _activeZoneLingeringDuration;                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _scoreEvent;                                             // 0x003C(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AActor*, struct FActiveZoneOverlapTracker>      _trackers;                                               // 0x0048(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O23O[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.InspectK31DroneInteraction
	 * Size -> 0x0160 (FullSize[0x08A0] - InheritedSize[0x0740])
	 */
	class UInspectK31DroneInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_70AE[0x18];                                  // 0x0740(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _actionProcessorClass;                                   // 0x0758(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _inputInterval;                                          // 0x0760(0x0028) Edit, DisableEditOnInstance, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _chargingSpeedCurve;                                     // 0x0788(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _dechargingSpeedCurve;                                   // 0x0790(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WJ00[0x20];                                  // 0x0798(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK31DroneActionProcessor*                            _actionProcessor;                                        // 0x07B8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_98DO[0xE0];                                  // 0x07C0(0x00E0) MISSED OFFSET (PADDING)

	public:
		void Server_SetIsPressingInput(bool isPressing);
		void OnChargeCompletedChanged(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31AnalyticsComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UK31AnalyticsComponent : public UActorComponent
	{
	public:
		float                                                      _analyticInspectionTime;                                 // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EQUH[0x1C];                                  // 0x00BC(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31AnimInstance
	 * Size -> 0x0040 (FullSize[0x0640] - InheritedSize[0x0600])
	 */
	class UK31AnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isInspecting;                                           // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDeployingADrone;                                      // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isReceivingADronePassively;                             // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isRecallingADrone;                                      // 0x0603(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActivatingADrone;                                     // 0x0604(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5I23[0x3];                                   // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomizationAnimationSelector*                     _animationSelector;                                      // 0x0608(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TIFG[0x30];                                  // 0x0610(0x0030) MISSED OFFSET (PADDING)

	public:
		void ResetIsReceivingADronePassively();
		void ResetIsRecallingADrone();
		void ResetIsDeployingADrone();
		void ResetIsActivatingADrone();
		void OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);
		int32_t GetCustomizationMappingID();
		TArray<class FName> GetCustoAnimTags();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31ClawTrap
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class AK31ClawTrap : public AActor
	{
	public:
		void OnAnimNotifyManuallyRemoveTrap();
		void Cosmetic_Spark();
		void Cosmetic_OnTrapRemoved(bool wasRemovedAutomatically);
		void Cosmetic_OnTrapAdded();
		void Cosmetic_OnIsBroadcastingChanged(bool isBroadcasting);
		void Cosmetic_OnBatteryChargeUpdated(float newCharge);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31Drone
	 * Size -> 0x00F0 (FullSize[0x0418] - InheritedSize[0x0328])
	 */
	class AK31Drone : public AInteractable
	{
	public:
		unsigned char                                              UnknownData_EU87[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     _movingRootComponent;                                    // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChildActorComponent*                                _laserChildActorComponent;                               // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneLaserController*                            _laserController;                                        // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDSkeletalMeshComponentBudgeted*                   _droneMesh;                                              // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _activeZoneMesh;                                         // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneMovementComponent*                          _movementComponent;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneFlightController*                           _flightController;                                       // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativePoolableActorComponent*                _poolableActorComponent;                                 // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneOwnershipComponent*                         _ownershipComponent;                                     // 0x0380(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneStateController*                            _stateController;                                        // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneDebugComponent*                             _debugComponent;                                         // 0x0390(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneZoneComponent*                              _droneZoneComponent;                                     // 0x0398(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31TrapProximitySensor*                             _trapProximitySensor;                                    // 0x03A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DronePlacementRecaller*                          _placementRecallerComponent;                             // 0x03A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameplayTagContainerComponent*                      _objectState;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneHackableComponent*                          _hackableComponent;                                      // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneHackableAvoidanceSensor*                    _avoidanceSensor;                                        // 0x03C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDeployDroneInteraction*                             _deployInteraction;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDNavModifierComponent*                            _navModifierComponent;                                   // 0x03D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31DroneDangerPredictionComponent*                  _dangerPredictionComponent;                              // 0x03D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _lastOwner;                                              // 0x03E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULocalPlayerTrackerComponent*                        _localPlayerTracker;                                     // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QA3G[0x28];                                  // 0x03F0(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnAcquiredChanged(bool acquired);
		void Native_OnLocallyObservedChanged();
		void Cosmetic_OnRevertToScoutingCurrentChargeChanged(float chargePercentage);
		void Cosmetic_OnLocallyObservedChanged();
		void Cosmetic_OnIsHackableStateChanged(bool IsHackable);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneActionProcessor
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK31DroneActionProcessor : public UActorComponent
	{
	public:
		void Server_RequestAction(const struct FK31DroneActionRequest& Request);
		void Client_ReceiveActionResponse(const struct FK31DroneActionResponse& Response);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneState
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UK31DroneState : public UObject
	{
	public:
		EK31DroneStateID                                           _id;                                                     // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1RWN[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK31DroneStateController*                            _stateController;                                        // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MMWV[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneActiveState
	 * Size -> 0x03B0 (FullSize[0x0408] - InheritedSize[0x0058])
	 */
	class UK31DroneActiveState : public UK31DroneState
	{
	public:
		unsigned char                                              UnknownData_4RH3[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatProperty                                       _unhackableDuration;                                     // 0x0078(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _revertToScoutingMaxDuration;                            // 0x0100(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _revertToScoutingMinDuration;                            // 0x0188(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _revertToScoutingRechargeRate;                           // 0x0210(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _revertToScoutingDechargeRate;                           // 0x0298(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _revertToScoutingDechargeDelay;                          // 0x0320(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _doNearbyClawTrapsDisableHacking;                        // 0x03A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DFGH[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _revertToScoutingCharge;                                 // 0x03B0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimerObject*                                        _unhackableTimer;                                        // 0x03B8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EFNM[0x48];                                  // 0x03C0(0x0048) MISSED OFFSET (PADDING)

	public:
		float GetRevertToScoutingMaxCharge();
		float GetRevertToScoutingCurrentCharge();
		void Authority_OnChargeDepleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneAnimInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UK31DroneAnimInstance : public UAnimInstance
	{
	public:
		EK31DroneStateID                                           _droneState;                                             // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JNYE[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK31DroneStateController*                            _droneStateController;                                   // 0x02C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AK31Drone*                                           _owningDrone;                                            // 0x02D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C0PE[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneBeingDeployed
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UK31DroneBeingDeployed : public UK31DroneState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneBeingHackedState
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UK31DroneBeingHackedState : public UK31DroneState
	{
	public:
		unsigned char                                              UnknownData_ZP3Q[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneDangerPredictionComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UK31DroneDangerPredictionComponent : public UDBDDangerPredictionComponent
	{
	public:
		unsigned char                                              UnknownData_LLG5[0x40];                                  // 0x00C8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _minimumTraverseAngle;                                   // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maximumTraverseAngle;                                   // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _waitRangeMargin;                                        // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _crouchingHeightDifference;                              // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxCrouchRange;                                         // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _activeUnhackableWeight;                                 // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _activeHackableWeight;                                   // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _scoutingWeight;                                         // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneDebugComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UK31DroneDebugComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BWKN[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneDestroyedState
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UK31DroneDestroyedState : public UK31DroneState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneFlightController
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK31DroneFlightController : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M19X[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTagContainerComponent*                      _objectState;                                            // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneHackableAvoidanceSensor
	 * Size -> 0x0178 (FullSize[0x0230] - InheritedSize[0x00B8])
	 */
	class UK31DroneHackableAvoidanceSensor : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_LCAE[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _survivorOverlapDetectionTime;                           // 0x0100(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _killerDetectionPrimitive;                               // 0x0128(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _survivorDetectionPrimitive;                             // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R8KM[0x30];                                  // 0x0138(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _overlappingSurvivors[0x50];                             // 0x0168(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_8H9L[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ADBDPlayer*, bool>                              _overlappingKillerToVisibilityMap;                       // 0x01C0(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G06P[0x20];                                  // 0x0210(0x0020) MISSED OFFSET (PADDING)

	public:
		void Init(class UPrimitiveComponent* killerPrimitive, class UPrimitiveComponent* survivorPrimitive);
		void Authority_OnSurvivorCollisionEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Authority_OnSurvivorCollisionBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Authority_OnKillerCollisionEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Authority_OnKillerCollisionBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneHackableComponent
	 * Size -> 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
	 */
	class UK31DroneHackableComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _unhackableClearanceCooldownDuration;                    // 0x00B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isHackable;                                             // 0x00E0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1U41[0x57];                                  // 0x00E1(0x0057) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsHackable();
		bool IsHackable();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneInitializingState
	 * Size -> 0x0090 (FullSize[0x00E8] - InheritedSize[0x0058])
	 */
	class UK31DroneInitializingState : public UK31DroneState
	{
	public:
		struct FStatProperty                                       _initializingDuration;                                   // 0x0058(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimerObject*                                        _initializingTimer;                                      // 0x00E0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneInStashState
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UK31DroneInStashState : public UK31DroneState
	{
	public:
		unsigned char                                              UnknownData_LQ61[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneLaserController
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UK31DroneLaserController : public UActorComponent
	{
	public:
		class ULocalPlayerTrackerComponent*                        _localPlayerTracker;                                     // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _locallyObservedPlayer;                                  // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U0TG[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK31DroneLaserScanActor*                             _laserActor;                                             // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnLocallyObservedChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneLaserScanActor
	 * Size -> 0x0320 (FullSize[0x0550] - InheritedSize[0x0230])
	 */
	class AK31DroneLaserScanActor : public AActor
	{
	public:
		class UMaterialInstance*                                   LaserScanMeshMaterial;                                   // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticCapturesLightAngle;                                // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicCapturesLightAngle;                               // 0x023C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthCaptureNearPlaneOffset;                             // 0x0240(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40Y1[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                FrontLaserScanSM;                                        // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                BackLaserScanSM;                                         // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGMShadowDepthCaptureComponent*                      FrontDepthCaptureComponentDynamic;                       // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGMShadowDepthCaptureComponent*                      BackDepthCaptureComponentDynamic;                        // 0x0260(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGMShadowDepthCaptureComponent*                      XDepthCaptureComponentStatic;                            // 0x0268(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGMShadowDepthCaptureComponent*                      YDepthCaptureComponentStatic;                            // 0x0270(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGMShadowDepthCaptureComponent*                      NegXDepthCaptureComponentStatic;                         // 0x0278(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGMShadowDepthCaptureComponent*                      NegYDepthCaptureComponentStatic;                         // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBHVRPerDetailModeInt                               DynamicDepthCaptureSizeWidth;                            // 0x0288(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FBHVRPerDetailModeInt                               DynamicDepthCaptureSizeHeight;                           // 0x0328(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FBHVRPerDetailModeInt                               StaticDepthCaptureSizeWidth;                             // 0x03C8(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FBHVRPerDetailModeInt                               StaticDepthCaptureSizeHeight;                            // 0x0468(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6NQ[0x48];                                  // 0x0508(0x0048) MISSED OFFSET (PADDING)

	public:
		void UpdateLaserScanMeshMaterial(class UMaterialInstance* newLaserScanMeshMaterial);
		void RequestStaticDepthCapturesUpdate();
		void InitDroneLaserScan();
		void DeactivateDroneLaserScan();
		void ActivateDroneLaserScan();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneMovementComponent
	 * Size -> 0x0448 (FullSize[0x0540] - InheritedSize[0x00F8])
	 */
	class UK31DroneMovementComponent : public UMovementComponent
	{
	public:
		unsigned char                                              UnknownData_1359[0x48];                                  // 0x00F8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDeployLocationChangedEvent;                            // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttachToCharacterForDeployChangedEvent;                // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAccelerationChangedEvent;                              // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlightHeightChangedBlueprintEvent;                     // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMovementModeChangedBlueprintEvent;                     // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FStatProperty                                       _rotationRate;                                           // 0x0190(0x0088) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _rotationLerpTime;                                       // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KOIP[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _minHeightAboveGround;                                   // 0x0220(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxHeightAboveGround;                                   // 0x0248(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _heightAdjustmentMovingTime;                             // 0x0270(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _deployMovementSpeed;                                    // 0x0298(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _replicationFrequency;                                   // 0x029C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _smoothingTime;                                          // 0x02A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxSmoothUpdateDistance;                                // 0x02A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _noSmoothUpdateDistance;                                 // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _deployCharacterSocket;                                  // 0x02AC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxTravelDistance;                                      // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AGDO[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _maxDeployTime;                                          // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _gravity;                                                // 0x02C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _velocityInterpolationAlpha;                             // 0x02C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DOGM[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _constantSpeedToAccelerationCurve;                       // 0x02D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XCEG[0x58];                                  // 0x02D8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameStateBase*                                      _gameState;                                              // 0x0330(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BCUU[0x40];                                  // 0x0338(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDroneDeployDatum                                   _localDeployDatum;                                       // 0x0378(0x0030) NoDestructor, NativeAccessSpecifierPrivate
		class AActor*                                              _interactingActor;                                       // 0x03A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K6Q8[0x30];                                  // 0x03B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             _additionalRotatingComponents;                           // 0x03E0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class USceneComponent*                                     _updatedComponentOriginalParent;                         // 0x03F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y75E[0xD8];                                  // 0x03F8(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDroneRepMovement                                   _replicatedMovement;                                     // 0x04D0(0x0038) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		struct FDroneDeployDatum                                   _repDeployDatum;                                         // 0x0508(0x0030) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SARI[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicatedMovement(const struct FDroneRepMovement& oldRepMovement);
		void OnRep_DeployDatum(const struct FDroneDeployDatum& oldDeployDatum);
		void OnDeployLocationChangedEvent__DelegateSignature();
		void OnAttachToCharacterForDeployChangedEvent__DelegateSignature();
		void OnAccelerationChangedEvent__DelegateSignature(const struct FVector& Acceleration);
		void MovementBlueprintEvent__DelegateSignature();
		bool IsMeshAttachedToCharacterForDeploy();
		bool HasReachedDeployLocation();
		EDroneFlyingHeight GetTargetFlightHeight();
		EK31DroneMovementMode GetMovementMode();
		float GetDistanceToTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneOutlineUpdateStrategy
	 * Size -> 0x0070 (FullSize[0x0130] - InheritedSize[0x00C0])
	 */
	class UK31DroneOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _killerColorNormal;                                      // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _killerColorActive;                                      // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _killerColorSelected;                                    // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _survivorColor;                                          // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<EK31DroneStateID>                                   _invalidStates;                                          // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _killerMinimumDistance;                                  // 0x0110(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorMinimumDistance;                                // 0x0114(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorMaximumDistanceXY;                              // 0x0118(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YTWG[0x14];                                  // 0x011C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneOwnershipComponent
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UK31DroneOwnershipComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_PWAZ[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DronePlacementRecaller
	 * Size -> 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
	 */
	class UK31DronePlacementRecaller : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IYNX[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxDistanceXY;                                          // 0x00C8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxDistanceZ;                                           // 0x00F0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AQ47[0x18];                                  // 0x0118(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DronePlacementStrategy
	 * Size -> 0x0078 (FullSize[0x0168] - InheritedSize[0x00F0])
	 */
	class UK31DronePlacementStrategy : public UObjectPlacementValidationWithRestrictionStrategy
	{
	public:
		struct FDBDTunableRowHandle                                _sphereSweepRadius;                                      // 0x00F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minHeightAboveGround;                                   // 0x0118(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxHeightAboveGround;                                   // 0x0140(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneRecallingState
	 * Size -> 0x0058 (FullSize[0x00B0] - InheritedSize[0x0058])
	 */
	class UK31DroneRecallingState : public UK31DroneState
	{
	public:
		unsigned char                                              UnknownData_PS9Q[0x30];                                  // 0x0058(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _recallingDuration;                                      // 0x0088(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneScoutDetectionComponent
	 * Size -> 0x0200 (FullSize[0x02B8] - InheritedSize[0x00B8])
	 */
	class UK31DroneScoutDetectionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_UT8P[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FK31DroneScoutDetectionSphereRaycastStruct>  _raycastSphereData;                                      // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TMap<class ACamperPlayer*, struct FSurvivorDroneFrameDatum> _survivorLastFrameData;                                  // 0x00E0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class ACamperPlayer*, struct FSurvivorDroneFrameDatum> _survivorCurrentFrameData;                               // 0x0130(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _detectedSurvivors;                                      // 0x0180(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X6XT[0x88];                                  // 0x0190(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _baseDetectionConeYawHalfAngleDegrees;                   // 0x0218(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _baseDetectionHalfHeight;                                // 0x0240(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _baseDetectionRadius;                                    // 0x0268(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _sphereTraceRadius;                                      // 0x0290(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnLaserDeactivate(class UActorComponent* Component);
		void OnLaserActive(class UActorComponent* Component, bool Reset);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneScoutingState
	 * Size -> 0x0060 (FullSize[0x00B8] - InheritedSize[0x0058])
	 */
	class UK31DroneScoutingState : public UK31DroneState
	{
	public:
		unsigned char                                              UnknownData_BPH9[0x60];                                  // 0x0058(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneStateController
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UK31DroneStateController : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MH1D[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStateChangedBlueprintEvent;                            // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      _stateClasses;                                           // 0x00F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		class UClass*                                              _defaultStateClass;                                      // 0x0108(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGameStateBase*                                      _gameState;                                              // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A6C7[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UK31DroneState*>                              _states;                                                 // 0x0128(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8QKW[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FK31DroneTimestampedState                           _local_currentState;                                     // 0x0148(0x0018) Transient, NativeAccessSpecifierPrivate
		struct FK31DroneTimestampedState                           _authority_RepCurrentState;                              // 0x0160(0x0018) Net, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VEI5[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnStateChangedBlueprintEvent__DelegateSignature(EK31DroneStateID oldState, EK31DroneStateID NewState);
		void OnRep_States();
		void OnRep_AuthorityRepCurrentState();
		EK31DroneStateID GetCurrentStateID();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneTargeter
	 * Size -> 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
	 */
	class UK31DroneTargeter : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L48B[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _indicatorClass;                                         // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxAngleFromScreenCenter;                               // 0x00D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GWIH[0x20];                                  // 0x0100(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDActorIndicator*                                  _indicator;                                              // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZSU4[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK31Drone*                                           _target;                                                 // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C6Z0[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31DroneZoneComponent
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UK31DroneZoneComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4VMH[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ADBDPlayer*, struct FK31PlayerDroneZoneStruct>  _playerDroneZoneStructMap;                               // 0x00D0(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F86P[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxDistanceXY;                                          // 0x0130(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxDistanceZ;                                           // 0x0158(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31HasteEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UK31HasteEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31InspectRadarScoreEmitter
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UK31InspectRadarScoreEmitter : public UPlayerScoreEmitter
	{
	public:
		float                                                      _timeAwaitingForInspect;                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JYJI[0x64];                                  // 0x003C(0x0064) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31MenuAnimInstance
	 * Size -> 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
	 */
	class UK31MenuAnimInstance : public UBaseMenuAnimInstance
	{
	public:
		class UCustomizationAnimationSelector*                     _animationSelector;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XI8T[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);
		int32_t GetCustomizationMappingID();
		TArray<class FName> GetCustoAnimTags();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31P01
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UK31P01 : public UPerk
	{
	public:
		float                                                      _hasteEffectMovementSpeedIncrease;                       // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffectDurationSeconds[0x3];                        // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _authority_hasteStatusEffect;                            // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteEffectClass;                                       // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPerkActive;                                           // 0x03E8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CMW3[0x17];                                  // 0x03E9(0x0017) MISSED OFFSET (PADDING)

	public:
		float GetHasteEffectMovementSpeedIncrease();
		float GetHasteEffectDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31P02
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UK31P02 : public UPerk
	{
	public:
		class UClass*                                              _revealAuraToKillerEffectClass;                          // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealAuraSeconds;                                      // 0x03D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _screamDistance[0x3];                                    // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MJWI[0x4];                                   // 0x03E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isPerkActive;                                           // 0x03E4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TVIR[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (PADDING)

	public:
		void Multicast_RevealAndMakeSurvivorScream(class ACamperPlayer* Survivor);
		float GetScreamDistance();
		float GetRevealAuraSeconds();
		float GetActivePerkDurationAtLevel();
		void BP_RevealAndMakeSurvivorScream(class ACamperPlayer* survivorPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31P03
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UK31P03 : public UPerk
	{
	public:
		float                                                      _healPenalty[0x3];                                       // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _reduceHealingSpeedEffectSeconds;                        // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _reduceHealingSpeedEffectClass;                          // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UStatusEffect*>                               _survivorDebuffs;                                        // 0x03E0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YCAK[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetReduceHealingSpeedEffectSeconds();
		float GetHealPenaltyAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31PlayerZoneStatus
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UK31PlayerZoneStatus : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XLA1[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UK31DroneZoneComponent*, struct FK31DroneZoneOverlapDatum> _overlappingZones;                                       // 0x0100(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9ZXZ[0x30];                                  // 0x0150(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31Power
	 * Size -> 0x0240 (FullSize[0x06F0] - InheritedSize[0x04B0])
	 */
	class AK31Power : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_9L45[0x48];                                  // 0x04B0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK31PowerChargePresentationItemProgressComponent*    _powerChargePresentationItemProgressComponent;           // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UK31PowerChargePresentationPowerFadeComponent*       _powerChargePresentationPowerFadeComponent;              // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _survivorDetectionClass;                                 // 0x0508(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FStatusEffectSpawnData>                      _effects;                                                // 0x0510(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _authority_scannerHasteEffect;                           // 0x0520(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _scannerHasteEffectClass;                                // 0x0528(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _interactor;                                             // 0x0530(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDronePoolInitializer*                               _poolInitializer;                                        // 0x0538(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _dronePool;                                              // 0x0540(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31Scanner*                                         _scanner;                                                // 0x0548(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VOYP[0x30];                                  // 0x0550(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EK31PowerState                                             _powerState;                                             // 0x0580(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9YM4[0xF];                                   // 0x0581(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerStatusEffectSpawnerHelper                    _effectSpawner;                                          // 0x0590(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorClawTrapComponentClass;                         // 0x0618(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimerObject*                                        _powerCooldownTimer;                                     // 0x0620(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7DC0[0x38];                                  // 0x0628(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatProperty                                       _powerCooldownDuration;                                  // 0x0660(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _hasteCurveBasedOnScannedSurvivors;                      // 0x06E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRepPowerState();
		void OnRepPowerCooldownTimer();
		void Authority_UpdateHasteBasedOnScannedSurvivors();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31PowerChargePresentationItemProgressComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK31PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		unsigned char                                              UnknownData_Y1RY[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK31Power*                                           _originatingPower;                                       // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31PowerChargePresentationPowerFadeComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UK31PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
	{
	public:
		class AK31Power*                                           _originatingPower;                                       // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31PowerCosmeticHelper
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UK31PowerCosmeticHelper : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7U3Q[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_IsOnPowerCooldownUpdatedEvent(bool isPowerOnCooldown);
		void Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent(bool doesRadarDetectAnySurvivors);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31PowerSubAnimInstance
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UK31PowerSubAnimInstance : public UDBDBaseAnimInstance
	{
	public:
		bool                                                       _isChargingInspection;                                   // 0x02F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4EPS[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _inspectPlayRate;                                        // 0x02F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _inspectSequenceStartPosition;                           // 0x02F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4BY6[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _inspectSequence;                                        // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6QO3[0x18];                                  // 0x0308(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31RadarAnimInstance
	 * Size -> 0x0040 (FullSize[0x0300] - InheritedSize[0x02C0])
	 */
	class UK31RadarAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isRecallingADrone;                                      // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActivatingADrone;                                     // 0x02C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAbleToPlaceDrone;                                     // 0x02C2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPowerOnCooldown;                                      // 0x02C3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_THJ9[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK31Power*                                           _owningK31Power;                                         // 0x02C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlasherPlayer*                                      _killer;                                                 // 0x02D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0ORB[0x28];                                  // 0x02D8(0x0028) MISSED OFFSET (PADDING)

	public:
		void ResetIsRecallingADrone();
		void ResetIsActivatingADrone();
		void OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31Scanner
	 * Size -> 0x0170 (FullSize[0x0228] - InheritedSize[0x00B8])
	 */
	class UK31Scanner : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnScannerUpdated;                                        // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDGK[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatProperty                                       _radarRadius;                                            // 0x00E0(0x0088) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _levelHeightThreshold;                                   // 0x0168(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            _debugPointTexture;                                      // 0x0190(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AS5Z[0x20];                                  // 0x0198(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _owningActor;                                            // 0x01B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UZPG[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _playersShownOnRadar[0x50];                              // 0x01D0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_NAT0[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnScannerUpdated__DelegateSignature();
		TArray<struct FLinearColor> GetEncodedPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31SurvivorAnimInstance
	 * Size -> 0x0028 (FullSize[0x0570] - InheritedSize[0x0548])
	 */
	class UK31SurvivorAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_KXYJ[0x8];                                   // 0x0548(0x0008) Fix Super Size
		bool                                                       _hasBeenSpottedByDrone;                                  // 0x0550(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInsideAnActiveDroneZone;                              // 0x0551(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isClawTrapped;                                          // 0x0552(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isRemovingClawTrap;                                     // 0x0553(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHackingDrone;                                         // 0x0554(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6QQ8[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _walkAnimSpeed;                                          // 0x0558(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawling;                                             // 0x055C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInsideCloset;                                         // 0x055D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDead;                                                 // 0x055E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteracting;                                          // 0x055F(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInjured;                                              // 0x0560(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrouched;                                             // 0x0561(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isHooked;                                               // 0x0562(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x0563(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUsingAimItem;                                         // 0x0564(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInAir;                                                // 0x0565(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingHealed;                                          // 0x0566(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingCarried;                                         // 0x0567(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K96X[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31SurvivorClawTrapComponent
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UK31SurvivorClawTrapComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_E812[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _batteryChargeTimer;                                     // 0x00C0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GU9L[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK31Power*                                           _originatingPower;                                       // 0x00D0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isTrapped;                                              // 0x00D8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isBroadcasting;                                         // 0x00D9(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OBPU[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USurvivorRemoveClawTrapInteraction*                  _removeClawTrapInteraction;                              // 0x00E0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _removeClawTrapInteractionClass;                         // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK31ClawTrap*                                        _clawTrap;                                               // 0x00F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _clawTrapClass;                                          // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _clawTrapAttachSocket;                                   // 0x0100(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IR55[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UK31PlayerZoneStatus*                                _authority_playerZoneStatus;                             // 0x0110(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FClawTrapUntrapDatum                                _lastUntrapDatum;                                        // 0x0118(0x0008) Transient, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       _wasLastRemovedAutomatically;                            // 0x0120(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HQC7[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AK31Drone*                                           _authority_originatingDrone;                             // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _batteryMaxCharge;                                       // 0x0130(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KOCH[0x18];                                  // 0x01B8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_RemoveClawTrapInteraction();
		void OnRep_OriginatingPower(class AK31Power* oldPower);
		void OnRep_IsTrapped();
		void OnRep_IsBroadcasting();
		void OnIntroCompleted();
		void OnCamperEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31SurvivorCosmeticHelperActor
	 * Size -> 0x0060 (FullSize[0x02C8] - InheritedSize[0x0268])
	 */
	class AK31SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
	{
	public:
		class UK31PlayerZoneStatus*                                _playerZoneStatus;                                       // 0x0268(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UPZN[0x30];                                  // 0x0270(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _enterActiveZoneCosmeticCooldown;                        // 0x02A0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Cosmetic_UpdateLockOnProgress(float currentProgressPercent, bool IsFullyLockedOn);
		void Cosmetic_OnIsTrappedByClawTrap(bool IsTrapped);
		void Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner(bool isSurvivorDetectedAndVisibleOnScanner);
		void Cosmetic_OnIsOverlappingActiveZoneChanged(bool isOverlappingActiveZone);
		void Cosmetic_OnIsBroadcasting(bool isBroadcasting);
		void Cosmetic_OnDetectedByDrone(class AK31Drone* Drone, bool isOnCooldown);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31SurvivorDetection
	 * Size -> 0x03B8 (FullSize[0x0470] - InheritedSize[0x00B8])
	 */
	class UK31SurvivorDetection : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2IC0[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _effectClass;                                            // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _secondsToCharge;                                        // 0x00C8(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _chargeRate;                                             // 0x0150(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _chargeModifierWhenClawTrapped;                          // 0x01D8(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _dechargeDelay;                                          // 0x0260(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _dechargeRate;                                           // 0x02E8(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _fullyLockedOnDuration;                                  // 0x0370(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31PlayerZoneStatus*                                _playerZoneStatus;                                       // 0x03F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AK31Power*                                           _originatingPower;                                       // 0x0400(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _chargingLockedOnChargeableComponent;                    // 0x0408(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimerObject*                                        _fullyLockedOnTimer;                                     // 0x0410(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isFullyLockedOn;                                        // 0x0418(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YVP2[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _effect;                                                 // 0x0420(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AK31Drone*>                                   _overlappingDrones;                                      // 0x0428(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AK31Drone*>                                   _overlappingActiveDrones;                                // 0x0438(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float                                                      _lastActiveTime;                                         // 0x0448(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_291E[0x24];                                  // 0x044C(0x0024) MISSED OFFSET (PADDING)

	public:
		void OnRep_OriginatingPower(class AK31Power* oldPower);
		void OnRep_IsFullyLockedOn();
		void OnRep_ChargeableComponent();
		void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);
		void Authority_OnChargeCompleted(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31SurvivorExposedEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UK31SurvivorExposedEffect : public UExposedEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31SurvivorInActiveZoneCondition
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UK31SurvivorInActiveZoneCondition : public UEventDrivenModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31TrapProximitySensor
	 * Size -> 0x00E0 (FullSize[0x0198] - InheritedSize[0x00B8])
	 */
	class UK31TrapProximitySensor : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_C1OX[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _registeredObjectStates[0x50];                           // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _trappedPlayersInZone[0x50];                             // 0x0140(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_PC2Y[0x8];                                   // 0x0190(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31UndetectableEffect
	 * Size -> 0x0148 (FullSize[0x04A0] - InheritedSize[0x0358])
	 */
	class UK31UndetectableEffect : public UBaseLingeringStatusEffect
	{
	public:
		struct FStatProperty                                       _activateDelay;                                          // 0x0358(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _lingerDurationStat;                                     // 0x03E0(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK31PlayerZoneStatus*                                _zoneStatus;                                             // 0x0468(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O0SJ[0x30];                                  // 0x0470(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31Utilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UK31Utilities : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.K31WeakPointScoreEmitter
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UK31WeakPointScoreEmitter : public UPlayerScoreEmitter
	{
	public:
		unsigned char                                              UnknownData_4RPC[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ACamperPlayer*, struct FSurvivorWeakPointScoreDatum> _registeredSurvivors;                                    // 0x0048(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void Authority_OnLevelReadyToPlay();
		void Authority_OnDechargeEnd(class UChargeableComponent* ChargeableComponent);
		void Authority_OnDechargeBegin(class UChargeableComponent* ChargeableComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.KillerMakeUniqueSurvivorsScreamAchievement
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UKillerMakeUniqueSurvivorsScreamAchievement : public UOnGameEventAchievement
	{
	public:
		unsigned char                                              _alreadyProcessedSurvivors[0x50];                        // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.RecallK31DroneAction
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class URecallK31DroneAction : public UK31DroneChangeStateAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S35P01
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class US35P01 : public UPerk
	{
	public:
		float                                                      _fastVaultsTimeSeconds[0x3];                             // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDurationSeconds;                                // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CANW[0x10];                                  // 0x03D8(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetFastVaultsTimeSecondsAtLevel();
		float GetCooldownDurationSeconds();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S35P02
	 * Size -> 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
	 */
	class US35P02 : public UPerk
	{
	public:
		float                                                      _hasteEffectDurationSeconds[0x3];                        // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffectMovementSpeedIncrease;                       // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteEffectClass;                                       // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class ADBDPlayer*, class UStatusEffect*>              _survivorBuffs;                                          // 0x03E0(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LXX4[0x10];                                  // 0x0430(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetHasteEffectDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S35P02Effect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class US35P02Effect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_CZ0S[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S35P03
	 * Size -> 0x0098 (FullSize[0x0460] - InheritedSize[0x03C8])
	 */
	class US35P03 : public UPerk
	{
	public:
		bool                                                       _isStatusEffectActiveOnOwningSurvivor;                   // 0x03C8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B250[0x3];                                   // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cooldownDuration[0x3];                                  // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _speedBoost;                                             // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkRange;                                              // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteEffectClass;                                       // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _healedSurvivorsAffected;                                // 0x03E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M80B[0x68];                                  // 0x03F8(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsStatusEffectActiveOnOwningSurvivor();
		float GetPerkRange();
		float GetCooldownDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S35P03Effect
	 * Size -> 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
	 */
	class US35P03Effect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_1QRS[0x10];                                  // 0x0350(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _shouldGiveBuff;                                         // 0x0360(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isStatusEffectGivenToSelf;                              // 0x0361(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9J3Q[0x6];                                   // 0x0362(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnRep_GiveBuffToPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S36P01
	 * Size -> 0x0050 (FullSize[0x0418] - InheritedSize[0x03C8])
	 */
	class US36P01 : public UPerk
	{
	public:
		float                                                      _hasteEffectDurationSeconds;                             // 0x03C8(0x0004) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffectMovementSpeedIncrease;                       // 0x03CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _activationDurationSeconds[0x3];                         // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _exhaustedEffectDurationSeconds[0x3];                    // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _hasteStatusEffect;                                      // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteEffectClass;                                       // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UActivatableExhaustedEffect*                         _exhaustedStatusEffect;                                  // 0x03F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _exhaustedEffectClass;                                   // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NV6Y[0x10];                                  // 0x0408(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetHasteEffectMovementSpeedIncrease();
		float GetHasteEffectDurationSeconds();
		float GetExhaustedEffectDurationAtLevel();
		void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S36P02
	 * Size -> 0x0048 (FullSize[0x0410] - InheritedSize[0x03C8])
	 */
	class US36P02 : public UPerk
	{
	public:
		float                                                      _brokenStatusEffectSeconds[0x3];                         // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _requiredHookStage;                                      // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _currentHookStage;                                       // 0x03D8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LXYK[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _perkInteractionClass;                                   // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _perkInteraction;                                        // 0x03E8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _brokenStatusEffect;                                     // 0x03F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _brokenEffectClass;                                      // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _exhaustedEffectClass;                                   // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G3W7[0x8];                                   // 0x0408(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRecoverAbilityButtonTriggeredCosmetic(class ACamperPlayer* OwningSurvivor);
		float GetBrokenStatusDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S36P02Interaction
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class US36P02Interaction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_0SK5[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		void OnRecoverInteractionUsed_Cosmetic(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S36P03
	 * Size -> 0x0098 (FullSize[0x0460] - InheritedSize[0x03C8])
	 */
	class US36P03 : public UPerk
	{
	public:
		bool                                                       _isStatusEffectActiveOnOwningSurvivor;                   // 0x03C8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_60AH[0x3];                                   // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cooldownDuration[0x3];                                  // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkRange;                                              // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TFHS[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _noScratchMarksEffectClass;                              // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _healersAffected;                                        // 0x03E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A06I[0x68];                                  // 0x03F8(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsStatusEffectActiveOnOwningSurvivor();
		float GetPerkRange();
		float GetCooldownDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.S36P03Effect
	 * Size -> 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
	 */
	class US36P03Effect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_PDWQ[0x10];                                  // 0x0350(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _shouldGiveBuff;                                         // 0x0360(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isStatusEffectGivenToSelf;                              // 0x0361(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KHYC[0x6];                                   // 0x0362(0x0006) MISSED OFFSET (PADDING)

	public:
		bool ShouldGiveBuff();
		void OnRep_GiveBuffToPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.SurvivorHackDroneInteraction
	 * Size -> 0x00B8 (FullSize[0x06D0] - InheritedSize[0x0618])
	 */
	class USurvivorHackDroneInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_ZVBM[0x8];                                   // 0x0618(0x0008) Fix Super Size
		unsigned char                                              UnknownData_VXKB[0x18];                                  // 0x0620(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isHackingComplete;                                      // 0x0638(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MNL9[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _batteryStartingChargePercent;                           // 0x0640(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _playerSnapSocket;                                       // 0x0668(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6K2B[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maximumTimeToAttemptDuration;                           // 0x0678(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U2KM[0x30];                                  // 0x06A0(0x0030) MISSED OFFSET (PADDING)

	public:
		void Authority_OnMinigameEnd(class ACamperPlayer* Survivor, EDirectionalMinigameResult Result);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK31.SurvivorRemoveClawTrapInteraction
	 * Size -> 0x00B8 (FullSize[0x06D0] - InheritedSize[0x0618])
	 */
	class USurvivorRemoveClawTrapInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_HTWG[0x8];                                   // 0x0618(0x0008) Fix Super Size
		class UK31SurvivorClawTrapComponent*                       _survivorClawTrapComponent;                              // 0x0620(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _batteryRechargeOnFailedRemovalPercent;                  // 0x0628(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _requiredTimeToRemainStillBeforeInteractingDuration;     // 0x0650(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XT18[0x58];                                  // 0x0678(0x0058) MISSED OFFSET (PADDING)

	public:
		void Authority_OnMinigameEnd(class ACamperPlayer* Survivor, EDirectionalMinigameResult Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
