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
	 * Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StopControllingSnowman
	 */
	struct UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StartControllingSnowman
	 */
	struct UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.OnRep_SnowmanState
	 */
	struct ASnowman_OnRep_SnowmanState_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.Snowman.OnRep_SnowmanDestructionType
	 */
	struct ASnowman_OnRep_SnowmanDestructionType_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.Snowman.OnRep_PlayerUsingSnowman
	 */
	struct ASnowman_OnRep_PlayerUsingSnowman_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.Snowman.OnRep_IsMoving
	 */
	struct ASnowman_OnRep_IsMoving_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.Snowman.OnRep_HighFiveFollower
	 */
	struct ASnowman_OnRep_HighFiveFollower_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.Snowman.OnFinishedPlaying
	 */
	struct ASnowman_OnFinishedPlaying_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TWBA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_StartSnowmanDestruction
	 */
	struct ASnowman_Multicast_StartSnowmanDestruction_Params
	{
	public:
		ESnowmanDestructionType                                    snowmanDestructionType;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       unlockRequirementsSatisfiedForSurvivor;                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       unlockRequirementsSatisfiedForKiller;                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XAZY[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          playerInSnowman;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_SpawnSnowman
	 */
	struct ASnowman_Multicast_SpawnSnowman_Params
	{
	public:
		struct FSnowmanSpawnData                                   spawnData;                                               // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanMaterialVariant
	 */
	struct ASnowman_Multicast_SetSnowmanMaterialVariant_Params
	{
	public:
		int32_t                                                    materialVariantIndex;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanHiddenInGame
	 */
	struct ASnowman_Multicast_SetSnowmanHiddenInGame_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor
	 */
	struct ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedByKiller
	 */
	struct ASnowman_Multicast_OnSnowmanStartBeingUsedByKiller_Params
	{
	public:
		class ASlasherPlayer*                                      killerUsingSnowman;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor
	 */
	struct ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledByKiller
	 */
	struct ASnowman_Multicast_OnSnowmanStartBeingControlledByKiller_Params
	{
	public:
		class ASlasherPlayer*                                      killerUsingSnowman;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Multicast_DrawDebugCollisionCheck
	 */
	struct ASnowman_Multicast_DrawDebugCollisionCheck_Params
	{
	public:
		struct FVector                                             BoxExtent;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      debugLifetime;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_SetSnowmanMaterialVariant
	 */
	struct ASnowman_Cosmetic_SetSnowmanMaterialVariant_Params
	{
	public:
		int32_t                                                    materialVariantIndex;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor
	 */
	struct ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedByKiller
	 */
	struct ASnowman_Cosmetic_OnSnowmanStartBeingUsedByKiller_Params
	{
	public:
		class ASlasherPlayer*                                      killerUsingSnowman;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor
	 */
	struct ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledByKiller
	 */
	struct ASnowman_Cosmetic_OnSnowmanStartBeingControlledByKiller_Params
	{
	public:
		class ASlasherPlayer*                                      killerUsingSnowman;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanSpawned
	 */
	struct ASnowman_Cosmetic_OnSnowmanSpawned_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanHighFive
	 */
	struct ASnowman_Cosmetic_OnSnowmanHighFive_Params
	{
	public:
		class ASnowman*                                            otherSnowman;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerCancelExit
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedByKillerCancelExit_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerAttackExit
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedByKillerAttackExit_Params
	{
	public:
		class ASlasherPlayer*                                      killerUsingSnowman;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Params
	{
	public:
		class ASlasherPlayer*                                      killerAttackingSnowman;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled
	 */
	struct ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASlasherPlayer*                                      killerAttackingSnowman;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor
	 */
	struct ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorUsingSnowman;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller
	 */
	struct ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Params
	{
	public:
		class ASlasherPlayer*                                      killerAttackingSnowman;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapEnd
	 */
	struct ASnowman_Authority_OnSnowmanHandOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapBegin
	 */
	struct ASnowman_Authority_OnSnowmanHandOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KY0B[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent
	 */
	struct USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Params
	{
	public:
		ESnowmanDestructionType                                    snowmanDestructionType;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay
	 */
	struct USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021VisualizeCalculatedSpawnData
	 */
	struct USnowmanWinterEventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Params
	{
	public:
		float                                                      numberOfSeconds;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks
	 */
	struct USnowmanWinterEventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Params
	{
	public:
		float                                                      numberOfSeconds;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021RecalculateSpawnPoints
	 */
	struct USnowmanWinterEventComponent_DBD_Winter2021RecalculateSpawnPoints_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ForceRespawnAllSnowmen
	 */
	struct USnowmanWinterEventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Params
	{	};

	/**
	 * Function SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Authority_OnDamageStateChanged
	 */
	struct USurvivorHideInSnowmanInteraction_Authority_OnDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         CurrentDamageState;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
