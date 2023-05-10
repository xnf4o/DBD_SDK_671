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
	 * Function Halloween2022.VoidEnergyChangeQEEvaluator.ListenToOnComponentAddedEvent
	 */
	struct UVoidEnergyChangeQEEvaluator_ListenToOnComponentAddedEvent_Params
	{	};

	/**
	 * Function Halloween2022.DepositVoidEnergyTierQEEvaluator.OnVoidEnergyDeposited
	 */
	struct UDepositVoidEnergyTierQEEvaluator_OnVoidEnergyDeposited_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C9UM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.HalloweenCentrifugeAnimInstance.SetDesiredBlendValue
	 */
	struct UHalloweenCentrifugeAnimInstance_SetDesiredBlendValue_Params
	{
	public:
		float                                                      blendValue;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.HalloweenCentrifugeAnimInstance.OnEnergySpawned
	 */
	struct UHalloweenCentrifugeAnimInstance_OnEnergySpawned_Params
	{
	public:
		int32_t                                                    previousEnergy;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    currentEnergy;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.HalloweenCentrifugeAnimInstance.OnBlendValueChanged
	 */
	struct UHalloweenCentrifugeAnimInstance_OnBlendValueChanged_Params
	{
	public:
		float                                                      blendValue;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.GeneratorCentrifugeAnimInstance.StopRepairing
	 */
	struct UGeneratorCentrifugeAnimInstance_StopRepairing_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YMB2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.GeneratorCentrifugeAnimInstance.StartRepairing
	 */
	struct UGeneratorCentrifugeAnimInstance_StartRepairing_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RZS0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStopRepair
	 */
	struct UGeneratorCentrifugeAnimInstance_OnStopRepair_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStartRepair
	 */
	struct UGeneratorCentrifugeAnimInstance_OnStartRepair_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerNoLongerOnHook
	 */
	struct UMeatHookCentrifugeAnimInstance_PlayerNoLongerOnHook_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5S1G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerHooked
	 */
	struct UMeatHookCentrifugeAnimInstance_PlayerHooked_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D39S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerNoLongerOnHook
	 */
	struct UMeatHookCentrifugeAnimInstance_OnPlayerNoLongerOnHook_Params
	{
	public:
		class AMeatHook*                                           MeatHook;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerHooked
	 */
	struct UMeatHookCentrifugeAnimInstance_OnPlayerHooked_Params
	{
	public:
		class AMeatHook*                                           MeatHook;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.OnVoidEnergySpent
	 */
	struct UPlayerVoidEnergy_OnVoidEnergySpent_Params
	{	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyLost
	 */
	struct UPlayerVoidEnergy_OnVoidEnergyLost_Params
	{	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyGained
	 */
	struct UPlayerVoidEnergy_OnVoidEnergyGained_Params
	{	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.OnRep_TotalVoidEnergySpent
	 */
	struct UPlayerVoidEnergy_OnRep_TotalVoidEnergySpent_Params
	{	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.OnRep_CurrentVoidEnergy
	 */
	struct UPlayerVoidEnergy_OnRep_CurrentVoidEnergy_Params
	{
	public:
		int32_t                                                    previousEnergyCount;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.OnLocallyObservedChanged
	 */
	struct UPlayerVoidEnergy_OnLocallyObservedChanged_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.OnLocallyControlledChanged
	 */
	struct UPlayerVoidEnergy_OnLocallyControlledChanged_Params
	{	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.GetTotalVoidEnergyDeposited
	 */
	struct UPlayerVoidEnergy_GetTotalVoidEnergyDeposited_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.GetMaxAmountOfVoidEnergyCanReceive
	 */
	struct UPlayerVoidEnergy_GetMaxAmountOfVoidEnergyCanReceive_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyRewardTier
	 */
	struct UPlayerVoidEnergy_GetCurrentVoidEnergyRewardTier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyCount
	 */
	struct UPlayerVoidEnergy_GetCurrentVoidEnergyCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.PlayerVoidEnergy.GetCurrentBloodPointMultiplier
	 */
	struct UPlayerVoidEnergy_GetCurrentBloodPointMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.UnstableRift.OnIntroCompleted
	 */
	struct AUnstableRift_OnIntroCompleted_Params
	{	};

	/**
	 * Function Halloween2022.UnstableRift.Cosmetic_OnTeleportStart
	 */
	struct AUnstableRift_Cosmetic_OnTeleportStart_Params
	{
	public:
		bool                                                       hadPlayerInteraction;                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.UnstableRift.Cosmetic_OnTeleportFinished
	 */
	struct AUnstableRift_Cosmetic_OnTeleportFinished_Params
	{	};

	/**
	 * Function Halloween2022.UnstableRift.Cosmetic_OnTeleportDelayStarted
	 */
	struct AUnstableRift_Cosmetic_OnTeleportDelayStarted_Params
	{	};

	/**
	 * Function Halloween2022.UnstableRift.Cosmetic_OnStoppedInteracting
	 */
	struct AUnstableRift_Cosmetic_OnStoppedInteracting_Params
	{	};

	/**
	 * Function Halloween2022.UnstableRift.Cosmetic_OnStartedInteracting
	 */
	struct AUnstableRift_Cosmetic_OnStartedInteracting_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      interactionDuration;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.UnstableRift.Cosmetic_OnInteractionCompleted
	 */
	struct AUnstableRift_Cosmetic_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.UnstableRift.Cosmetic_ChangeUnstableVisibility
	 */
	struct AUnstableRift_Cosmetic_ChangeUnstableVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_TeleportUnstableRift
	 */
	struct UUnstableRiftTeleportationComponent_Multicast_TeleportUnstableRift_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_PreTeleportation
	 */
	struct UUnstableRiftTeleportationComponent_Multicast_PreTeleportation_Params
	{
	public:
		struct FVector                                             teleportLocation;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hadPlayerInteraction;                                    // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.UnstableRiftTeleportationComponent.Authority_OnLevelReadyToPlay
	 */
	struct UUnstableRiftTeleportationComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Halloween2022.VoidEnergyProducer.OnRep_TotalEnergyGiven
	 */
	struct UVoidEnergyProducer_OnRep_TotalEnergyGiven_Params
	{
	public:
		int32_t                                                    lastTotalEnergyGivenValue;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyProducer.HasEnergyLeftToGive
	 */
	struct UVoidEnergyProducer_HasEnergyLeftToGive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyProducer.GetRemainingEnergy
	 */
	struct UVoidEnergyProducer_GetRemainingEnergy_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyProducer.Cosmetic_OnVoidOrbsSpawned
	 */
	struct UVoidEnergyProducer_Cosmetic_OnVoidOrbsSpawned_Params
	{
	public:
		int32_t                                                    orbsSpawned;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyGeneratorComponent.GetCurrentTimeDoneOnGenerator
	 */
	struct UVoidEnergyGeneratorComponent_GetCurrentTimeDoneOnGenerator_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrb.PlaceOrbInQueue
	 */
	struct AVoidEnergyOrb_PlaceOrbInQueue_Params
	{	};

	/**
	 * Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbSpawned
	 */
	struct AVoidEnergyOrb_Cosmetic_OnOrbSpawned_Params
	{
	public:
		class ADBDPlayer*                                          playerGivingOrbTo;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isLargeOrb;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithoutCollection
	 */
	struct AVoidEnergyOrb_Cosmetic_OnOrbDisappearWithoutCollection_Params
	{
	public:
		bool                                                       isLargeOrb;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithCollection
	 */
	struct AVoidEnergyOrb_Cosmetic_OnOrbDisappearWithCollection_Params
	{
	public:
		class ADBDPlayer*                                          playerGivingOrbTo;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrb.Cosmetic_DelayBeforeCollection
	 */
	struct AVoidEnergyOrb_Cosmetic_DelayBeforeCollection_Params
	{
	public:
		class ADBDPlayer*                                          playerGivingOrbTo;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Multicast_SpawnVoidEnergyOrb
	 */
	struct UVoidEnergyOrbSpawner_Multicast_SpawnVoidEnergyOrb_Params
	{
	public:
		struct FOrbProperties                                      OrbProperties;                                           // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       isLargeOrb;                                              // 0x0030(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_TimerSpawnVoidEnergyOrb
	 */
	struct UVoidEnergyOrbSpawner_Authority_TimerSpawnVoidEnergyOrb_Params
	{
	public:
		struct FOrbProperties                                      OrbProperties;                                           // 0x0000(0x0030)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       isLargeOrb;                                              // 0x0030(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunOnKiller
	 */
	struct UVoidEnergyOrbSpawner_Authority_SurvivorStunOnKiller_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TRMF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithPallet
	 */
	struct UVoidEnergyOrbSpawner_Authority_SurvivorStunKillerWithPallet_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HAY1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithHeadOn
	 */
	struct UVoidEnergyOrbSpawner_Authority_SurvivorStunKillerWithHeadOn_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T6N5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithFlashLight
	 */
	struct UVoidEnergyOrbSpawner_Authority_SurvivorStunKillerWithFlashLight_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PXF7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_SpawnVoidEnergyOrbs
	 */
	struct UVoidEnergyOrbSpawner_Authority_SpawnVoidEnergyOrbs_Params
	{
	public:
		struct FOrbProperties                                      OrbProperties;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    numberOfOrbsToSpawn;                                     // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numberOfOrbsThatCanBeAbsorbed;                           // 0x0034(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_KillerDownSurvivor
	 */
	struct UVoidEnergyOrbSpawner_Authority_KillerDownSurvivor_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SMPM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2022.VoidEnergyOrbSpawner.Authority_GiveVoidEnergyToPlayer
	 */
	struct UVoidEnergyOrbSpawner_Authority_GiveVoidEnergyToPlayer_Params
	{
	public:
		EVoidEnergyType                                            VoidEnergyType;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VTYW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    voidEnergyToAdd;                                         // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
