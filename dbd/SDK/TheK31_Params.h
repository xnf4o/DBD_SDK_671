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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TheK31.Addon_K31Power_19.Authority_OnLevelReadyToPlay
	 */
	struct UAddon_K31Power_19_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK31.Addon_K31Power_21.OnRep_TargetDrone
	 */
	struct UAddon_K31Power_21_OnRep_TargetDrone_Params
	{	};

	/**
	 * Function TheK31.Addon_K31Power_21.Authority_OnTerrorRadiusLifetimeTimerDone
	 */
	struct UAddon_K31Power_21_Authority_OnTerrorRadiusLifetimeTimerDone_Params
	{	};

	/**
	 * Function TheK31.Addon_K31Power_21.Authority_OnGameEventReceived
	 */
	struct UAddon_K31Power_21_Authority_OnGameEventReceived_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HUGY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneEndPlay
	 */
	struct UDroneRestrictedPlacementAreaStrategy_OnDroneEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneAcquiredChanged
	 */
	struct UDroneRestrictedPlacementAreaStrategy_OnDroneAcquiredChanged_Params
	{
	public:
		bool                                                       acquired;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.InspectK31DroneInteraction.Server_SetIsPressingInput
	 */
	struct UInspectK31DroneInteraction_Server_SetIsPressingInput_Params
	{
	public:
		bool                                                       isPressing;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.InspectK31DroneInteraction.OnChargeCompletedChanged
	 */
	struct UInspectK31DroneInteraction_OnChargeCompletedChanged_Params
	{
	public:
		bool                                                       COMPLETED;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AEOH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      instigatorsForCompletion;                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31AnimInstance.ResetIsReceivingADronePassively
	 */
	struct UK31AnimInstance_ResetIsReceivingADronePassively_Params
	{	};

	/**
	 * Function TheK31.K31AnimInstance.ResetIsRecallingADrone
	 */
	struct UK31AnimInstance_ResetIsRecallingADrone_Params
	{	};

	/**
	 * Function TheK31.K31AnimInstance.ResetIsDeployingADrone
	 */
	struct UK31AnimInstance_ResetIsDeployingADrone_Params
	{	};

	/**
	 * Function TheK31.K31AnimInstance.ResetIsActivatingADrone
	 */
	struct UK31AnimInstance_ResetIsActivatingADrone_Params
	{	};

	/**
	 * Function TheK31.K31AnimInstance.OnGameEventReceived
	 */
	struct UK31AnimInstance_OnGameEventReceived_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JZGS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31AnimInstance.OnCustomizationAnimationMappingIDChanged
	 */
	struct UK31AnimInstance_OnCustomizationAnimationMappingIDChanged_Params
	{
	public:
		int32_t                                                    animationMappingIndex;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31AnimInstance.GetCustomizationMappingID
	 */
	struct UK31AnimInstance_GetCustomizationMappingID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31AnimInstance.GetCustoAnimTags
	 */
	struct UK31AnimInstance_GetCustoAnimTags_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31ClawTrap.OnAnimNotifyManuallyRemoveTrap
	 */
	struct AK31ClawTrap_OnAnimNotifyManuallyRemoveTrap_Params
	{	};

	/**
	 * Function TheK31.K31ClawTrap.Cosmetic_Spark
	 */
	struct AK31ClawTrap_Cosmetic_Spark_Params
	{	};

	/**
	 * Function TheK31.K31ClawTrap.Cosmetic_OnTrapRemoved
	 */
	struct AK31ClawTrap_Cosmetic_OnTrapRemoved_Params
	{
	public:
		bool                                                       wasRemovedAutomatically;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31ClawTrap.Cosmetic_OnTrapAdded
	 */
	struct AK31ClawTrap_Cosmetic_OnTrapAdded_Params
	{	};

	/**
	 * Function TheK31.K31ClawTrap.Cosmetic_OnIsBroadcastingChanged
	 */
	struct AK31ClawTrap_Cosmetic_OnIsBroadcastingChanged_Params
	{
	public:
		bool                                                       isBroadcasting;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31ClawTrap.Cosmetic_OnBatteryChargeUpdated
	 */
	struct AK31ClawTrap_Cosmetic_OnBatteryChargeUpdated_Params
	{
	public:
		float                                                      newCharge;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31Drone.OnAcquiredChanged
	 */
	struct AK31Drone_OnAcquiredChanged_Params
	{
	public:
		bool                                                       acquired;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31Drone.Native_OnLocallyObservedChanged
	 */
	struct AK31Drone_Native_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheK31.K31Drone.Cosmetic_OnRevertToScoutingCurrentChargeChanged
	 */
	struct AK31Drone_Cosmetic_OnRevertToScoutingCurrentChargeChanged_Params
	{
	public:
		float                                                      chargePercentage;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31Drone.Cosmetic_OnLocallyObservedChanged
	 */
	struct AK31Drone_Cosmetic_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheK31.K31Drone.Cosmetic_OnIsHackableStateChanged
	 */
	struct AK31Drone_Cosmetic_OnIsHackableStateChanged_Params
	{
	public:
		bool                                                       IsHackable;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneActionProcessor.Server_RequestAction
	 */
	struct UK31DroneActionProcessor_Server_RequestAction_Params
	{
	public:
		struct FK31DroneActionRequest                              Request;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneActionProcessor.Client_ReceiveActionResponse
	 */
	struct UK31DroneActionProcessor_Client_ReceiveActionResponse_Params
	{
	public:
		struct FK31DroneActionResponse                             Response;                                                // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneActiveState.GetRevertToScoutingMaxCharge
	 */
	struct UK31DroneActiveState_GetRevertToScoutingMaxCharge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneActiveState.GetRevertToScoutingCurrentCharge
	 */
	struct UK31DroneActiveState_GetRevertToScoutingCurrentCharge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneActiveState.Authority_OnChargeDepleted
	 */
	struct UK31DroneActiveState_Authority_OnChargeDepleted_Params
	{	};

	/**
	 * Function TheK31.K31DroneHackableAvoidanceSensor.Init
	 */
	struct UK31DroneHackableAvoidanceSensor_Init_Params
	{
	public:
		class UPrimitiveComponent*                                 killerPrimitive;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 survivorPrimitive;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionEnd
	 */
	struct UK31DroneHackableAvoidanceSensor_Authority_OnSurvivorCollisionEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionBegin
	 */
	struct UK31DroneHackableAvoidanceSensor_Authority_OnSurvivorCollisionBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NIJI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionEnd
	 */
	struct UK31DroneHackableAvoidanceSensor_Authority_OnKillerCollisionEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionBegin
	 */
	struct UK31DroneHackableAvoidanceSensor_Authority_OnKillerCollisionBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A58V[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneHackableComponent.OnRep_IsHackable
	 */
	struct UK31DroneHackableComponent_OnRep_IsHackable_Params
	{	};

	/**
	 * Function TheK31.K31DroneHackableComponent.IsHackable
	 */
	struct UK31DroneHackableComponent_IsHackable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneLaserController.OnLocallyObservedChanged
	 */
	struct UK31DroneLaserController_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheK31.K31DroneLaserScanActor.UpdateLaserScanMeshMaterial
	 */
	struct AK31DroneLaserScanActor_UpdateLaserScanMeshMaterial_Params
	{
	public:
		class UMaterialInstance*                                   newLaserScanMeshMaterial;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneLaserScanActor.RequestStaticDepthCapturesUpdate
	 */
	struct AK31DroneLaserScanActor_RequestStaticDepthCapturesUpdate_Params
	{	};

	/**
	 * Function TheK31.K31DroneLaserScanActor.InitDroneLaserScan
	 */
	struct AK31DroneLaserScanActor_InitDroneLaserScan_Params
	{	};

	/**
	 * Function TheK31.K31DroneLaserScanActor.DeactivateDroneLaserScan
	 */
	struct AK31DroneLaserScanActor_DeactivateDroneLaserScan_Params
	{	};

	/**
	 * Function TheK31.K31DroneLaserScanActor.ActivateDroneLaserScan
	 */
	struct AK31DroneLaserScanActor_ActivateDroneLaserScan_Params
	{	};

	/**
	 * Function TheK31.K31DroneMovementComponent.OnRep_ReplicatedMovement
	 */
	struct UK31DroneMovementComponent_OnRep_ReplicatedMovement_Params
	{
	public:
		struct FDroneRepMovement                                   oldRepMovement;                                          // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneMovementComponent.OnRep_DeployDatum
	 */
	struct UK31DroneMovementComponent_OnRep_DeployDatum_Params
	{
	public:
		struct FDroneDeployDatum                                   oldDeployDatum;                                          // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheK31.K31DroneMovementComponent.OnDeployLocationChangedEvent__DelegateSignature
	 */
	struct UK31DroneMovementComponent_OnDeployLocationChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction TheK31.K31DroneMovementComponent.OnAttachToCharacterForDeployChangedEvent__DelegateSignature
	 */
	struct UK31DroneMovementComponent_OnAttachToCharacterForDeployChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction TheK31.K31DroneMovementComponent.OnAccelerationChangedEvent__DelegateSignature
	 */
	struct UK31DroneMovementComponent_OnAccelerationChangedEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             Acceleration;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheK31.K31DroneMovementComponent.MovementBlueprintEvent__DelegateSignature
	 */
	struct UK31DroneMovementComponent_MovementBlueprintEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TheK31.K31DroneMovementComponent.IsMeshAttachedToCharacterForDeploy
	 */
	struct UK31DroneMovementComponent_IsMeshAttachedToCharacterForDeploy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneMovementComponent.HasReachedDeployLocation
	 */
	struct UK31DroneMovementComponent_HasReachedDeployLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneMovementComponent.GetTargetFlightHeight
	 */
	struct UK31DroneMovementComponent_GetTargetFlightHeight_Params
	{
	public:
		EDroneFlyingHeight                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneMovementComponent.GetMovementMode
	 */
	struct UK31DroneMovementComponent_GetMovementMode_Params
	{
	public:
		EK31DroneMovementMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneMovementComponent.GetDistanceToTarget
	 */
	struct UK31DroneMovementComponent_GetDistanceToTarget_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneScoutDetectionComponent.OnLaserDeactivate
	 */
	struct UK31DroneScoutDetectionComponent_OnLaserDeactivate_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneScoutDetectionComponent.OnLaserActive
	 */
	struct UK31DroneScoutDetectionComponent_OnLaserActive_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Reset;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheK31.K31DroneStateController.OnStateChangedBlueprintEvent__DelegateSignature
	 */
	struct UK31DroneStateController_OnStateChangedBlueprintEvent__DelegateSignature_Params
	{
	public:
		EK31DroneStateID                                           oldState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EK31DroneStateID                                           NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31DroneStateController.OnRep_States
	 */
	struct UK31DroneStateController_OnRep_States_Params
	{	};

	/**
	 * Function TheK31.K31DroneStateController.OnRep_AuthorityRepCurrentState
	 */
	struct UK31DroneStateController_OnRep_AuthorityRepCurrentState_Params
	{	};

	/**
	 * Function TheK31.K31DroneStateController.GetCurrentStateID
	 */
	struct UK31DroneStateController_GetCurrentStateID_Params
	{
	public:
		EK31DroneStateID                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31MenuAnimInstance.OnCustomizationAnimationMappingIDChanged
	 */
	struct UK31MenuAnimInstance_OnCustomizationAnimationMappingIDChanged_Params
	{
	public:
		int32_t                                                    animationMappingIndex;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31MenuAnimInstance.GetCustomizationMappingID
	 */
	struct UK31MenuAnimInstance_GetCustomizationMappingID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31MenuAnimInstance.GetCustoAnimTags
	 */
	struct UK31MenuAnimInstance_GetCustoAnimTags_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P01.GetHasteEffectMovementSpeedIncrease
	 */
	struct UK31P01_GetHasteEffectMovementSpeedIncrease_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P01.GetHasteEffectDurationAtLevel
	 */
	struct UK31P01_GetHasteEffectDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P02.Multicast_RevealAndMakeSurvivorScream
	 */
	struct UK31P02_Multicast_RevealAndMakeSurvivorScream_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P02.GetScreamDistance
	 */
	struct UK31P02_GetScreamDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P02.GetRevealAuraSeconds
	 */
	struct UK31P02_GetRevealAuraSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P02.GetActivePerkDurationAtLevel
	 */
	struct UK31P02_GetActivePerkDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P02.BP_RevealAndMakeSurvivorScream
	 */
	struct UK31P02_BP_RevealAndMakeSurvivorScream_Params
	{
	public:
		class ACamperPlayer*                                       survivorPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P03.GetReduceHealingSpeedEffectSeconds
	 */
	struct UK31P03_GetReduceHealingSpeedEffectSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31P03.GetHealPenaltyAtLevel
	 */
	struct UK31P03_GetHealPenaltyAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31Power.OnRepPowerState
	 */
	struct AK31Power_OnRepPowerState_Params
	{	};

	/**
	 * Function TheK31.K31Power.OnRepPowerCooldownTimer
	 */
	struct AK31Power_OnRepPowerCooldownTimer_Params
	{	};

	/**
	 * Function TheK31.K31Power.Authority_UpdateHasteBasedOnScannedSurvivors
	 */
	struct AK31Power_Authority_UpdateHasteBasedOnScannedSurvivors_Params
	{	};

	/**
	 * Function TheK31.K31PowerCosmeticHelper.Cosmetic_IsOnPowerCooldownUpdatedEvent
	 */
	struct UK31PowerCosmeticHelper_Cosmetic_IsOnPowerCooldownUpdatedEvent_Params
	{
	public:
		bool                                                       isPowerOnCooldown;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31PowerCosmeticHelper.Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent
	 */
	struct UK31PowerCosmeticHelper_Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent_Params
	{
	public:
		bool                                                       doesRadarDetectAnySurvivors;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31RadarAnimInstance.ResetIsRecallingADrone
	 */
	struct UK31RadarAnimInstance_ResetIsRecallingADrone_Params
	{	};

	/**
	 * Function TheK31.K31RadarAnimInstance.ResetIsActivatingADrone
	 */
	struct UK31RadarAnimInstance_ResetIsActivatingADrone_Params
	{	};

	/**
	 * Function TheK31.K31RadarAnimInstance.OnGameEventReceived
	 */
	struct UK31RadarAnimInstance_OnGameEventReceived_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E0G9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheK31.K31Scanner.OnScannerUpdated__DelegateSignature
	 */
	struct UK31Scanner_OnScannerUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function TheK31.K31Scanner.GetEncodedPoints
	 */
	struct UK31Scanner_GetEncodedPoints_Params
	{
	public:
		TArray<struct FLinearColor>                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorClawTrapComponent.OnRep_RemoveClawTrapInteraction
	 */
	struct UK31SurvivorClawTrapComponent_OnRep_RemoveClawTrapInteraction_Params
	{	};

	/**
	 * Function TheK31.K31SurvivorClawTrapComponent.OnRep_OriginatingPower
	 */
	struct UK31SurvivorClawTrapComponent_OnRep_OriginatingPower_Params
	{
	public:
		class AK31Power*                                           oldPower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsTrapped
	 */
	struct UK31SurvivorClawTrapComponent_OnRep_IsTrapped_Params
	{	};

	/**
	 * Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsBroadcasting
	 */
	struct UK31SurvivorClawTrapComponent_OnRep_IsBroadcasting_Params
	{	};

	/**
	 * Function TheK31.K31SurvivorClawTrapComponent.OnIntroCompleted
	 */
	struct UK31SurvivorClawTrapComponent_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheK31.K31SurvivorClawTrapComponent.OnCamperEscaped
	 */
	struct UK31SurvivorClawTrapComponent_OnCamperEscaped_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VLE4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorClawTrapComponent.Authority_OnDamageStateChanged
	 */
	struct UK31SurvivorClawTrapComponent_Authority_OnDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         newDamageState;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_UpdateLockOnProgress
	 */
	struct AK31SurvivorCosmeticHelperActor_Cosmetic_UpdateLockOnProgress_Params
	{
	public:
		float                                                      currentProgressPercent;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsFullyLockedOn;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsTrappedByClawTrap
	 */
	struct AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsTrappedByClawTrap_Params
	{
	public:
		bool                                                       IsTrapped;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner
	 */
	struct AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner_Params
	{
	public:
		bool                                                       isSurvivorDetectedAndVisibleOnScanner;                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsOverlappingActiveZoneChanged
	 */
	struct AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsOverlappingActiveZoneChanged_Params
	{
	public:
		bool                                                       isOverlappingActiveZone;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsBroadcasting
	 */
	struct AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsBroadcasting_Params
	{
	public:
		bool                                                       isBroadcasting;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnDetectedByDrone
	 */
	struct AK31SurvivorCosmeticHelperActor_Cosmetic_OnDetectedByDrone_Params
	{
	public:
		class AK31Drone*                                           Drone;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isOnCooldown;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorDetection.OnRep_OriginatingPower
	 */
	struct UK31SurvivorDetection_OnRep_OriginatingPower_Params
	{
	public:
		class AK31Power*                                           oldPower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorDetection.OnRep_IsFullyLockedOn
	 */
	struct UK31SurvivorDetection_OnRep_IsFullyLockedOn_Params
	{	};

	/**
	 * Function TheK31.K31SurvivorDetection.OnRep_ChargeableComponent
	 */
	struct UK31SurvivorDetection_OnRep_ChargeableComponent_Params
	{	};

	/**
	 * Function TheK31.K31SurvivorDetection.Authority_OnDamageStateChanged
	 */
	struct UK31SurvivorDetection_Authority_OnDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         newDamageState;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31SurvivorDetection.Authority_OnChargeCompleted
	 */
	struct UK31SurvivorDetection_Authority_OnChargeCompleted_Params
	{
	public:
		bool                                                       COMPLETED;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_25IH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      instigatorsForCompletion;                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31WeakPointScoreEmitter.Authority_OnLevelReadyToPlay
	 */
	struct UK31WeakPointScoreEmitter_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeEnd
	 */
	struct UK31WeakPointScoreEmitter_Authority_OnDechargeEnd_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeBegin
	 */
	struct UK31WeakPointScoreEmitter_Authority_OnDechargeBegin_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S35P01.GetFastVaultsTimeSecondsAtLevel
	 */
	struct US35P01_GetFastVaultsTimeSecondsAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S35P01.GetCooldownDurationSeconds
	 */
	struct US35P01_GetCooldownDurationSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S35P02.GetHasteEffectDurationAtLevel
	 */
	struct US35P02_GetHasteEffectDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S35P03.OnRep_IsStatusEffectActiveOnOwningSurvivor
	 */
	struct US35P03_OnRep_IsStatusEffectActiveOnOwningSurvivor_Params
	{	};

	/**
	 * Function TheK31.S35P03.GetPerkRange
	 */
	struct US35P03_GetPerkRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S35P03.GetCooldownDurationAtLevel
	 */
	struct US35P03_GetCooldownDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S35P03Effect.OnRep_GiveBuffToPlayer
	 */
	struct US35P03Effect_OnRep_GiveBuffToPlayer_Params
	{	};

	/**
	 * Function TheK31.S36P01.GetHasteEffectMovementSpeedIncrease
	 */
	struct US36P01_GetHasteEffectMovementSpeedIncrease_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P01.GetHasteEffectDurationSeconds
	 */
	struct US36P01_GetHasteEffectDurationSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P01.GetExhaustedEffectDurationAtLevel
	 */
	struct US36P01_GetExhaustedEffectDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P01.Authority_OnIsRunningAndMovingChanged
	 */
	struct US36P01_Authority_OnIsRunningAndMovingChanged_Params
	{
	public:
		bool                                                       isRunningAndMoving;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P02.OnRecoverAbilityButtonTriggeredCosmetic
	 */
	struct US36P02_OnRecoverAbilityButtonTriggeredCosmetic_Params
	{
	public:
		class ACamperPlayer*                                       OwningSurvivor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P02.GetBrokenStatusDurationAtLevel
	 */
	struct US36P02_GetBrokenStatusDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P02Interaction.OnRecoverInteractionUsed_Cosmetic
	 */
	struct US36P02Interaction_OnRecoverInteractionUsed_Cosmetic_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P03.OnRep_IsStatusEffectActiveOnOwningSurvivor
	 */
	struct US36P03_OnRep_IsStatusEffectActiveOnOwningSurvivor_Params
	{	};

	/**
	 * Function TheK31.S36P03.GetPerkRange
	 */
	struct US36P03_GetPerkRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P03.GetCooldownDurationAtLevel
	 */
	struct US36P03_GetCooldownDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P03Effect.ShouldGiveBuff
	 */
	struct US36P03Effect_ShouldGiveBuff_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.S36P03Effect.OnRep_GiveBuffToPlayer
	 */
	struct US36P03Effect_OnRep_GiveBuffToPlayer_Params
	{	};

	/**
	 * Function TheK31.SurvivorHackDroneInteraction.Authority_OnMinigameEnd
	 */
	struct USurvivorHackDroneInteraction_Authority_OnMinigameEnd_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDirectionalMinigameResult                                 Result;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK31.SurvivorRemoveClawTrapInteraction.Authority_OnMinigameEnd
	 */
	struct USurvivorRemoveClawTrapInteraction_Authority_OnMinigameEnd_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDirectionalMinigameResult                                 Result;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
