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
	 * Function TheK30.DrawPatrolPathInteraction.SetIsCharging
	 */
	struct UDrawPatrolPathInteraction_SetIsCharging_Params
	{
	public:
		bool                                                       IsCharging;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.DrawPatrolPathInteraction.Server_StartPatrol
	 */
	struct UDrawPatrolPathInteraction_Server_StartPatrol_Params
	{	};

	/**
	 * Function TheK30.DrawPatrolPathInteraction.Server_SendOrder
	 */
	struct UDrawPatrolPathInteraction_Server_SendOrder_Params
	{
	public:
		class AInteractable*                                       Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheK30.DrawPatrolPathInteraction.OnChargeStateChanged__DelegateSignature
	 */
	struct UDrawPatrolPathInteraction_OnChargeStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsCharging;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsChargeCompleted;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.DrawPatrolPathInteraction.OnCancellationTimerCompleted
	 */
	struct UDrawPatrolPathInteraction_OnCancellationTimerCompleted_Params
	{	};

	/**
	 * Function TheK30.DrawPatrolPathInteraction.IsCharging
	 */
	struct UDrawPatrolPathInteraction_IsCharging_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.DrawPatrolPathInteraction.IsChargeCompleted
	 */
	struct UDrawPatrolPathInteraction_IsChargeCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.FloatingCameraNavigationComponent.Server_EnableWalkOffLegdes
	 */
	struct UFloatingCameraNavigationComponent_Server_EnableWalkOffLegdes_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.FloatingCameraNavigationComponent.Multicast_EnableWalkOffLegdes
	 */
	struct UFloatingCameraNavigationComponent_Multicast_EnableWalkOffLegdes_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardController.OnTargetPerceptionUpdated
	 */
	struct AGuardController_OnTargetPerceptionUpdated_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x0044)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardController.OnLoudNoiseTriggered
	 */
	struct AGuardController_OnLoudNoiseTriggered_Params
	{
	public:
		class AActor*                                              originator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              instigatingActor;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       shouldTrack;                                             // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UNCS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      audibleRange;                                            // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isQuickAction;                                           // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isDeceivingNoise;                                        // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardFlag.OnRep_HuntedSurvivor
	 */
	struct AGuardFlag_OnRep_HuntedSurvivor_Params
	{	};

	/**
	 * Function TheK30.GuardFlag.Multicast_OnCamperCapturedFlag
	 */
	struct AGuardFlag_Multicast_OnCamperCapturedFlag_Params
	{
	public:
		class ADBDPlayer*                                          huntedSurvivor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardFlag.GetHuntedSurvivor
	 */
	struct AGuardFlag_GetHuntedSurvivor_Params
	{
	public:
		class ADBDPlayer*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardFlag.GetActivationTimeLeft
	 */
	struct AGuardFlag_GetActivationTimeLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardFlag.Cosmetic_OnSurvivorCapturedFlag
	 */
	struct AGuardFlag_Cosmetic_OnSurvivorCapturedFlag_Params
	{
	public:
		class ADBDPlayer*                                          previouslyHuntedSurvivor;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardFlag.Cosmetic_OnFlagSpawned
	 */
	struct AGuardFlag_Cosmetic_OnFlagSpawned_Params
	{
	public:
		float                                                      activationTimerDuration;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardFlag.Cosmetic_OnFlagDisappearDueToHuntEnding
	 */
	struct AGuardFlag_Cosmetic_OnFlagDisappearDueToHuntEnding_Params
	{
	public:
		class ADBDPlayer*                                          previouslyHuntedSurvivor;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardFlag.Cosmetic_OnFlagActivationTimerCompleted
	 */
	struct AGuardFlag_Cosmetic_OnFlagActivationTimerCompleted_Params
	{	};

	/**
	 * Function TheK30.GuardFlag.Authority_OnBeginOverlap
	 */
	struct AGuardFlag_Authority_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XO6T[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardHuntComponent.OnRep_HuntStartingLocation
	 */
	struct UGuardHuntComponent_OnRep_HuntStartingLocation_Params
	{	};

	/**
	 * Function TheK30.GuardHuntComponent.OnRep_HuntedSurvivor
	 */
	struct UGuardHuntComponent_OnRep_HuntedSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       previousChasedSurvivor;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheK30.GuardHuntComponent.OnGuardPhaseProgressUpdate__DelegateSignature
	 */
	struct UGuardHuntComponent_OnGuardPhaseProgressUpdate__DelegateSignature_Params
	{
	public:
		float                                                      completionProgress;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardHuntComponent.GetHuntedSurvivor
	 */
	struct UGuardHuntComponent_GetHuntedSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardHuntComponent.Authority_OnCamperUnhooked
	 */
	struct UGuardHuntComponent_Authority_OnCamperUnhooked_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9BKW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardHuntComponent.Authority_OnCamperInjuredOrDowned
	 */
	struct UGuardHuntComponent_Authority_OnCamperInjuredOrDowned_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D7VM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardPatrolComponent.OnRep_IsPatrolling
	 */
	struct UGuardPatrolComponent_OnRep_IsPatrolling_Params
	{	};

	/**
	 * Function TheK30.GuardSlowingZone.OnZoneEndOverlap
	 */
	struct AGuardSlowingZone_OnZoneEndOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardSlowingZone.OnZoneBeginOverlap
	 */
	struct AGuardSlowingZone_OnZoneBeginOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.GuardPalletSlowingZone.OnRep_LinkedPallet
	 */
	struct AGuardPalletSlowingZone_OnRep_LinkedPallet_Params
	{	};

	/**
	 * Function TheK30.K30InflictStatusOnEndHuntAddon.Authority_OnEndHunt
	 */
	struct UK30InflictStatusOnEndHuntAddon_Authority_OnEndHunt_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGuardHuntEndReason                                        huntEndReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30ApplyStatusOnWakeUpAddon.Authority_OnWakeUp
	 */
	struct UK30ApplyStatusOnWakeUpAddon_Authority_OnWakeUp_Params
	{
	public:
		class AKnightGuard*                                        currentGuard;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Addon17.Multicast_OnMakeSurvivorScream
	 */
	struct UK30Addon17_Multicast_OnMakeSurvivorScream_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      lifetime;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Addon17.BP_RevealAndMakeSurvivorScream
	 */
	struct UK30Addon17_BP_RevealAndMakeSurvivorScream_Params
	{
	public:
		class ADBDPlayer*                                          survivorPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      screamRevealDuration;                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Addon20.Authority_OnTrailCameraGoThroughWindow
	 */
	struct UK30Addon20_Authority_OnTrailCameraGoThroughWindow_Params
	{
	public:
		class AWindow*                                             Window;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Addon20.Authority_OnStartHunt
	 */
	struct UK30Addon20_Authority_OnStartHunt_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Addon20.Authority_OnHuntedSurvivorVault
	 */
	struct UK30Addon20_Authority_OnHuntedSurvivorVault_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TDJX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Addon20.Authority_OnEndHunt
	 */
	struct UK30Addon20_Authority_OnEndHunt_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGuardHuntEndReason                                        huntEndReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30CheatComponent.DBD_K30ToggleGuardAttackDespawn
	 */
	struct UK30CheatComponent_DBD_K30ToggleGuardAttackDespawn_Params
	{
	public:
		int32_t                                                    despawnOnAttack;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30CheatComponent.DBD_K30SetPatrolAndHuntDuration
	 */
	struct UK30CheatComponent_DBD_K30SetPatrolAndHuntDuration_Params
	{
	public:
		float                                                      secondsToPatrol;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30CheatComponent.DBD_K30SetNextGuardIndex
	 */
	struct UK30CheatComponent_DBD_K30SetNextGuardIndex_Params
	{
	public:
		int32_t                                                    nextGuardIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30InflictStatusOnDetectedAddon.Authority_OnDetected
	 */
	struct UK30InflictStatusOnDetectedAddon_Authority_OnDetected_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30InflictStatusOnGuardHitAddon.Authority_OnGuardHit
	 */
	struct UK30InflictStatusOnGuardHitAddon_Authority_OnGuardHit_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02.GetScreamInterval
	 */
	struct UK30P02_GetScreamInterval_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02.Authority_UncursePlayer
	 */
	struct UK30P02_Authority_UncursePlayer_Params
	{	};

	/**
	 * Function TheK30.K30P02.Authority_OnTotemStateChanged
	 */
	struct UK30P02_Authority_OnTotemStateChanged_Params
	{
	public:
		ETotemState                                                oldState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETotemState                                                NewState;                                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02.Authority_OnSurvivorFirstScream
	 */
	struct UK30P02_Authority_OnSurvivorFirstScream_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02ScreamStatusEffect.Multicast_MakePlayerScream
	 */
	struct UK30P02ScreamStatusEffect_Multicast_MakePlayerScream_Params
	{
	public:
		float                                                      screamRevealDuration;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02ScreamStatusEffect.IsTimerPaused
	 */
	struct UK30P02ScreamStatusEffect_IsTimerPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02ScreamStatusEffect.IsTimerActive
	 */
	struct UK30P02ScreamStatusEffect_IsTimerActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02ScreamStatusEffect.GetTimerRemainingTime
	 */
	struct UK30P02ScreamStatusEffect_GetTimerRemainingTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02ScreamStatusEffect.GetTimerElapsedTime
	 */
	struct UK30P02ScreamStatusEffect_GetTimerElapsedTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02ScreamStatusEffect.GetTimerDuration
	 */
	struct UK30P02ScreamStatusEffect_GetTimerDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30P02ScreamStatusEffect.BP_MakeSurvivorScream
	 */
	struct UK30P02ScreamStatusEffect_BP_MakeSurvivorScream_Params
	{
	public:
		class ADBDPlayer*                                          survivorPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      screamRevealDuration;                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.Server_OnSnappingStateChanged
	 */
	struct AK30Power_Server_OnSnappingStateChanged_Params
	{
	public:
		bool                                                       IsSnapping;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.SendPathNearlyEndingWarning
	 */
	struct AK30Power_SendPathNearlyEndingWarning_Params
	{	};

	/**
	 * Function TheK30.K30Power.OnRep_KnightHusk
	 */
	struct AK30Power_OnRep_KnightHusk_Params
	{	};

	/**
	 * DelegateFunction TheK30.K30Power.OnPowerStateChanged__DelegateSignature
	 */
	struct AK30Power_OnPowerStateChanged__DelegateSignature_Params
	{
	public:
		EPowerState                                                previousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPowerState                                                NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.OnOrderTargetChanged
	 */
	struct AK30Power_OnOrderTargetChanged_Params
	{	};

	/**
	 * DelegateFunction TheK30.K30Power.OnMoriStateChanged__DelegateSignature
	 */
	struct AK30Power_OnMoriStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function TheK30.K30Power.OnInteractionStateChanged
	 */
	struct AK30Power_OnInteractionStateChanged_Params
	{
	public:
		bool                                                       IsCharging;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsChargeCompleted;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.OnEndOverlapWindow
	 */
	struct AK30Power_OnEndOverlapWindow_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.Multicast_OnSnappingStateChanged
	 */
	struct AK30Power_Multicast_OnSnappingStateChanged_Params
	{
	public:
		bool                                                       IsSnapping;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.IsSnapping
	 */
	struct AK30Power_IsSnapping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.IsDrawingPath
	 */
	struct AK30Power_IsDrawingPath_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.IsChargingPower
	 */
	struct AK30Power_IsChargingPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.Cosmetic_UpdateRemainingPathLength
	 */
	struct AK30Power_Cosmetic_UpdateRemainingPathLength_Params
	{
	public:
		float                                                      remainingPathLengthPercent;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableEnd
	 */
	struct AK30Power_Cosmetic_OnPathDrawAvailableEnd_Params
	{	};

	/**
	 * Function TheK30.K30Power.Cosmetic_OnPathDrawAvailableBegin
	 */
	struct AK30Power_Cosmetic_OnPathDrawAvailableBegin_Params
	{	};

	/**
	 * Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged
	 */
	struct AK30SurvivorCosmeticHelperActor_Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged_Params
	{
	public:
		bool                                                       isFlagCaptureBuffActive;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntEnd
	 */
	struct AK30SurvivorCosmeticHelperActor_Cosmetic_OnHuntEnd_Params
	{	};

	/**
	 * Function TheK30.K30SurvivorCosmeticHelperActor.Cosmetic_OnHuntBegin
	 */
	struct AK30SurvivorCosmeticHelperActor_Cosmetic_OnHuntBegin_Params
	{	};

	/**
	 * Function TheK30.K30Utilities.GetNextGuardIndex
	 */
	struct UK30Utilities_GetNextGuardIndex_Params
	{
	public:
		class AActor*                                              TheK30;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Utilities.GetNextGuard
	 */
	struct UK30Utilities_GetNextGuard_Params
	{
	public:
		class AActor*                                              TheK30;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AKnightGuard*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Utilities.GetK30Power
	 */
	struct UK30Utilities_GetK30Power_Params
	{
	public:
		class AActor*                                              TheK30;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AK30Power*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Utilities.GetCurrentGuardIndex
	 */
	struct UK30Utilities_GetCurrentGuardIndex_Params
	{
	public:
		class AActor*                                              TheK30;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.K30Utilities.GetCurrentGuard
	 */
	struct UK30Utilities_GetCurrentGuard_Params
	{
	public:
		class AActor*                                              TheK30;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AKnightGuard*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.OnRep_OwningKiller
	 */
	struct AKnightGuard_OnRep_OwningKiller_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.OnRep_IsActive
	 */
	struct AKnightGuard_OnRep_IsActive_Params
	{
	public:
		bool                                                       previousIsActive;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.Multicast_OnPatrolEnded
	 */
	struct AKnightGuard_Multicast_OnPatrolEnded_Params
	{
	public:
		class ADBDPlayer*                                          foundSurvivor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.Multicast_OnOrderEnded
	 */
	struct AKnightGuard_Multicast_OnOrderEnded_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Multicast_CosmeticHuntEnded
	 */
	struct AKnightGuard_Multicast_CosmeticHuntEnded_Params
	{
	public:
		EGuardHuntEndReason                                        Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.GetPatrolComponent
	 */
	struct AKnightGuard_GetPatrolComponent_Params
	{
	public:
		class UGuardPatrolComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.GetOwningKiller
	 */
	struct AKnightGuard_GetOwningKiller_Params
	{
	public:
		class ASlasherPlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_StopOverlappingVaultOrSurvivor
	 */
	struct AKnightGuard_Cosmetic_StopOverlappingVaultOrSurvivor_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_StartOverlappingVaultOrSurvivor
	 */
	struct AKnightGuard_Cosmetic_StartOverlappingVaultOrSurvivor_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_ShowGuard
	 */
	struct AKnightGuard_Cosmetic_ShowGuard_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_OnPatrolStarted
	 */
	struct AKnightGuard_Cosmetic_OnPatrolStarted_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_OnPatrolEnded
	 */
	struct AKnightGuard_Cosmetic_OnPatrolEnded_Params
	{
	public:
		class ADBDPlayer*                                          foundSurvivor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_OnOrderStarted
	 */
	struct AKnightGuard_Cosmetic_OnOrderStarted_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_OnOrderEnded
	 */
	struct AKnightGuard_Cosmetic_OnOrderEnded_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_OnHuntTeleportStarted
	 */
	struct AKnightGuard_Cosmetic_OnHuntTeleportStarted_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_OnHuntEnded
	 */
	struct AKnightGuard_Cosmetic_OnHuntEnded_Params
	{
	public:
		EGuardHuntEndReason                                        Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_OnGuardVisionRadiusChanged
	 */
	struct AKnightGuard_Cosmetic_OnGuardVisionRadiusChanged_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9LG7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Radius;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Angle;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_HuntChaseStarted
	 */
	struct AKnightGuard_Cosmetic_HuntChaseStarted_Params
	{	};

	/**
	 * Function TheK30.KnightGuard.Cosmetic_HideGuard
	 */
	struct AKnightGuard_Cosmetic_HideGuard_Params
	{	};

	/**
	 * DelegateFunction TheK30.KnightOrderComponent.OnTargetChanged__DelegateSignature
	 */
	struct UKnightOrderComponent_OnTargetChanged__DelegateSignature_Params
	{	};

	/**
	 * Function TheK30.KnightOrderComponent.OnGameEventDispatched
	 */
	struct UKnightOrderComponent_OnGameEventDispatched_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F6XU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightOrderComponent.OnCurrentInteractionFinished
	 */
	struct UKnightOrderComponent_OnCurrentInteractionFinished_Params
	{	};

	/**
	 * Function TheK30.KnightOrderComponent.Cosmetic_OnTargetableObjectsChanged
	 */
	struct UKnightOrderComponent_Cosmetic_OnTargetableObjectsChanged_Params
	{
	public:
		class AInteractable*                                       Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isTargetable;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.KnightOrderComponent.Cosmetic_OnNewTargetSelected
	 */
	struct UKnightOrderComponent_Cosmetic_OnNewTargetSelected_Params
	{
	public:
		class AInteractable*                                       newTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInteractable*                                       oldTarget;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.IsTrailCompleted
	 */
	struct UPatrolTrailComponent_IsTrailCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.GetPreviousNode
	 */
	struct UPatrolTrailComponent_GetPreviousNode_Params
	{
	public:
		class ATrailNode*                                          currentNode;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATrailNode*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.GetNextNode
	 */
	struct UPatrolTrailComponent_GetNextNode_Params
	{
	public:
		class ATrailNode*                                          currentNode;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATrailNode*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.GetLastPosition
	 */
	struct UPatrolTrailComponent_GetLastPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.GetLastNode
	 */
	struct UPatrolTrailComponent_GetLastNode_Params
	{
	public:
		class ATrailNode*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.GetFirstNode
	 */
	struct UPatrolTrailComponent_GetFirstNode_Params
	{
	public:
		class ATrailNode*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.GetCurrentTrailLength
	 */
	struct UPatrolTrailComponent_GetCurrentTrailLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.DoesTrailExist
	 */
	struct UPatrolTrailComponent_DoesTrailExist_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.PatrolTrailComponent.Authority_StopRecordingTrail
	 */
	struct UPatrolTrailComponent_Authority_StopRecordingTrail_Params
	{	};

	/**
	 * Function TheK30.PatrolTrailComponent.Authority_StartRecordingTrail
	 */
	struct UPatrolTrailComponent_Authority_StartRecordingTrail_Params
	{	};

	/**
	 * Function TheK30.S34P01.Server_AbilityTwoPressed
	 */
	struct US34P01_Server_AbilityTwoPressed_Params
	{
	public:
		bool                                                       IsPressed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.OnRep_IsPerkActive
	 */
	struct US34P01_OnRep_IsPerkActive_Params
	{	};

	/**
	 * Function TheK30.S34P01.OnRep_IsAccumulatingTokens
	 */
	struct US34P01_OnRep_IsAccumulatingTokens_Params
	{	};

	/**
	 * Function TheK30.S34P01.OnDamageStateChanged
	 */
	struct US34P01_OnDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         CurrentDamageState;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.Multicast_OnUseTokens
	 */
	struct US34P01_Multicast_OnUseTokens_Params
	{	};

	/**
	 * Function TheK30.S34P01.IsPerkActive
	 */
	struct US34P01_IsPerkActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.GetInitialCountdownAtLevel
	 */
	struct US34P01_GetInitialCountdownAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.Cosmetic_OnUseCharge
	 */
	struct US34P01_Cosmetic_OnUseCharge_Params
	{
	public:
		class ADBDPlayer*                                          OwningPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.Cosmetic_OnStopChargingPerk
	 */
	struct US34P01_Cosmetic_OnStopChargingPerk_Params
	{
	public:
		class ADBDPlayer*                                          OwningPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.Cosmetic_OnStartChargingPerk
	 */
	struct US34P01_Cosmetic_OnStartChargingPerk_Params
	{
	public:
		class ADBDPlayer*                                          OwningPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.Cosmetic_OnFullCharge
	 */
	struct US34P01_Cosmetic_OnFullCharge_Params
	{
	public:
		class ADBDPlayer*                                          OwningPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.Authority_OnSkillCheckResponse
	 */
	struct US34P01_Authority_OnSkillCheckResponse_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J2RA[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerLoudNoise;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hadInput;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_893F[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ChargeChange;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P01.Authority_OnAccumulateRedirectedCharge
	 */
	struct US34P01_Authority_OnAccumulateRedirectedCharge_Params
	{
	public:
		float                                                      ChargeAmount;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      maxCharge;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P03.GetRepairSpeedAtLevel
	 */
	struct US34P03_GetRepairSpeedAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.S34P03.GetGeneratorRangeFromPlayer
	 */
	struct US34P03_GetGeneratorRangeFromPlayer_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.TrailNode.OnRep_PreviousNodePosition
	 */
	struct ATrailNode_OnRep_PreviousNodePosition_Params
	{	};

	/**
	 * Function TheK30.TrailNode.IsOwnerLocallyObserved
	 */
	struct ATrailNode_IsOwnerLocallyObserved_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.TrailNode.IsFirstNode
	 */
	struct ATrailNode_IsFirstNode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK30.TrailNode.Cosmetic_PrepareForRemoval
	 */
	struct ATrailNode_Cosmetic_PrepareForRemoval_Params
	{	};

	/**
	 * Function TheK30.TrailNode.Client_UpdateTrail
	 */
	struct ATrailNode_Client_UpdateTrail_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
