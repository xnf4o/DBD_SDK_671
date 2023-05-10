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
	 * Function TheK29.K29AnimInstance.ResetStartThrowingSurvivor
	 */
	struct UK29AnimInstance_ResetStartThrowingSurvivor_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.ResetHasRushEndedInSurvivorImpact
	 */
	struct UK29AnimInstance_ResetHasRushEndedInSurvivorImpact_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.ResetHasRushEndedInLedgeDrop
	 */
	struct UK29AnimInstance_ResetHasRushEndedInLedgeDrop_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.ResetHasInstantlyPickedUpSurvivor
	 */
	struct UK29AnimInstance_ResetHasInstantlyPickedUpSurvivor_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.OnStartThrowingSurvivor
	 */
	struct UK29AnimInstance_OnStartThrowingSurvivor_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.OnHasRushEndedInSurvivorImpact
	 */
	struct UK29AnimInstance_OnHasRushEndedInSurvivorImpact_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.OnHasRushEndedInLedgeDrop
	 */
	struct UK29AnimInstance_OnHasRushEndedInLedgeDrop_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.OnHasInstantlyPickedUpSurvivor
	 */
	struct UK29AnimInstance_OnHasInstantlyPickedUpSurvivor_Params
	{	};

	/**
	 * Function TheK29.K29AnimInstance.OnGameEventReceived
	 */
	struct UK29AnimInstance_OnGameEventReceived_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1OVW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29InfectionRemovalItemOutlineUpdateStrategy.SetOutlineVisibility
	 */
	struct UK29InfectionRemovalItemOutlineUpdateStrategy_SetOutlineVisibility_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29InfectionRemovalItemOutlineUpdateStrategy.IsOutlineVisible
	 */
	struct UK29InfectionRemovalItemOutlineUpdateStrategy_IsOutlineVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29P01.GetSurvivorVaultRushedEventRange
	 */
	struct UK29P01_GetSurvivorVaultRushedEventRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29P02.GetRevealRange
	 */
	struct UK29P02_GetRevealRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29P02.Authority_OnInRangeChanged
	 */
	struct UK29P02_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KEYH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACamperPlayer*                                       Survivor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetSlashSurvivorInteraction
	 */
	struct AK29Power_GetSlashSurvivorInteraction_Params
	{
	public:
		class UInteractionDefinition*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetSlashBreakableInteraction
	 */
	struct AK29Power_GetSlashBreakableInteraction_Params
	{
	public:
		class UInteractionDefinition*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetScorePercent
	 */
	struct AK29Power_GetScorePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushVaultCooldownInteraction
	 */
	struct AK29Power_GetRushVaultCooldownInteraction_Params
	{
	public:
		class UK29RushCooldownInteraction*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushSurvivorDetectionBox
	 */
	struct AK29Power_GetRushSurvivorDetectionBox_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushCompleteSurvivorThrowCooldownInteraction
	 */
	struct AK29Power_GetRushCompleteSurvivorThrowCooldownInteraction_Params
	{
	public:
		class UK29RushCooldownInteraction*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushCompleteSurvivorHitCooldownInteraction
	 */
	struct AK29Power_GetRushCompleteSurvivorHitCooldownInteraction_Params
	{
	public:
		class UK29RushCooldownInteraction*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushCompleteNoSurvivorCooldownInteraction
	 */
	struct AK29Power_GetRushCompleteNoSurvivorCooldownInteraction_Params
	{
	public:
		class UK29RushCooldownInteraction*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushChargesHandlerComponent
	 */
	struct AK29Power_GetRushChargesHandlerComponent_Params
	{
	public:
		class UK29RushChargesHandlerComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushChargeCancelCooldownInteraction
	 */
	struct AK29Power_GetRushChargeCancelCooldownInteraction_Params
	{
	public:
		class UK29RushCooldownInteraction*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushChargeableInteraction
	 */
	struct AK29Power_GetRushChargeableInteraction_Params
	{
	public:
		class UK29RushChargeableInteraction*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetRushBreakableCooldownInteraction
	 */
	struct AK29Power_GetRushBreakableCooldownInteraction_Params
	{
	public:
		class UK29RushCooldownInteraction*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetPushSurvivorOverLedgeInteraction
	 */
	struct AK29Power_GetPushSurvivorOverLedgeInteraction_Params
	{
	public:
		class UInteractionDefinition*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetPowerStatusHandlerComponent
	 */
	struct AK29Power_GetPowerStatusHandlerComponent_Params
	{
	public:
		class UK29PowerStatusHandlerComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.GetDropSurvivorCooldownInteraction
	 */
	struct AK29Power_GetDropSurvivorCooldownInteraction_Params
	{
	public:
		class UK29RushCooldownInteraction*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Power.Authority_OnStun
	 */
	struct AK29Power_Authority_OnStun_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JQZF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerChargePresentationPowerFadeComponent.SetDependencies
	 */
	struct UK29PowerChargePresentationPowerFadeComponent_SetDependencies_Params
	{
	public:
		class UK29RushChargesHandlerComponent*                     ammoHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerChargePresentationPowerFadeComponent.OnKillerSet
	 */
	struct UK29PowerChargePresentationPowerFadeComponent_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Server_ReleaseSurvivor
	 */
	struct UK29PowerStatusHandlerComponent_Server_ReleaseSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isForced;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Server_GrabSurvivor
	 */
	struct UK29PowerStatusHandlerComponent_Server_GrabSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isProcessingInitialInfection;                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.OnRep_SurvivorStatusList
	 */
	struct UK29PowerStatusHandlerComponent_OnRep_SurvivorStatusList_Params
	{
	public:
		TArray<struct FK29SurvivorStatus>                          oldSurvivorStatus;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.OnKillerSet
	 */
	struct UK29PowerStatusHandlerComponent_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Multicast_UseStabilizingSpray
	 */
	struct UK29PowerStatusHandlerComponent_Multicast_UseStabilizingSpray_Params
	{
	public:
		class ACamperPlayer*                                       targetSurvivor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Multicast_RemoveSurvivorFromCloset
	 */
	struct UK29PowerStatusHandlerComponent_Multicast_RemoveSurvivorFromCloset_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Multicast_ReleaseSurvivor
	 */
	struct UK29PowerStatusHandlerComponent_Multicast_ReleaseSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isForced;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Multicast_GrabSurvivor
	 */
	struct UK29PowerStatusHandlerComponent_Multicast_GrabSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isProcessingInitialInfection;                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Multicast_DropSurvivor
	 */
	struct UK29PowerStatusHandlerComponent_Multicast_DropSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       leftSurvivor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.GetMaxInfectionLevel
	 */
	struct UK29PowerStatusHandlerComponent_GetMaxInfectionLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.GetInfectionLevel
	 */
	struct UK29PowerStatusHandlerComponent_GetInfectionLevel_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingNonInfectedSurvivor
	 */
	struct UK29PowerStatusHandlerComponent_Cosmetic_OnGrabbingNonInfectedSurvivor_Params
	{	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingInfectedSurvivor
	 */
	struct UK29PowerStatusHandlerComponent_Cosmetic_OnGrabbingInfectedSurvivor_Params
	{	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_UseStabilizingSpray
	 */
	struct UK29PowerStatusHandlerComponent_Authority_UseStabilizingSpray_Params
	{
	public:
		class ACamperPlayer*                                       instigatingSurvivor;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       targetSurvivor;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToMaxInfection
	 */
	struct UK29PowerStatusHandlerComponent_Authority_SetAllSurvivorsToMaxInfection_Params
	{	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToInitialInfection
	 */
	struct UK29PowerStatusHandlerComponent_Authority_SetAllSurvivorsToInitialInfection_Params
	{	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorImmoblizedChanged
	 */
	struct UK29PowerStatusHandlerComponent_Authority_OnSurvivorImmoblizedChanged_Params
	{	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorAdded
	 */
	struct UK29PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSlash
	 */
	struct UK29PowerStatusHandlerComponent_Authority_OnSlash_Params
	{
	public:
		class ACamperPlayer*                                       targetSurvivor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_OnIntroCompleted
	 */
	struct UK29PowerStatusHandlerComponent_Authority_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_HealInfectionLevels
	 */
	struct UK29PowerStatusHandlerComponent_Authority_HealInfectionLevels_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    infectionLevelsToHeal;                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       shouldSetInfectionActiveToFalse;                         // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_HealAllSurvivorsInfectionWithStabilizingSpray
	 */
	struct UK29PowerStatusHandlerComponent_Authority_HealAllSurvivorsInfectionWithStabilizingSpray_Params
	{	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.Authority_AddInfectionLevels
	 */
	struct UK29PowerStatusHandlerComponent_Authority_AddInfectionLevels_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    infectionToAdd;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29PowerStatusHandlerComponent.AddToTimesCuredByHeal
	 */
	struct UK29PowerStatusHandlerComponent_AddToTimesCuredByHeal_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_SlashAtSurvivor
	 */
	struct UK29RushChargeableInteraction_Server_SlashAtSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             currentKillerPosition;                                   // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingInCollision
	 */
	struct UK29RushChargeableInteraction_Server_SetCurrentRushAsEndingInCollision_Params
	{
	public:
		bool                                                       hitOtherSurvivor;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingAtLedge
	 */
	struct UK29RushChargeableInteraction_Server_SetCurrentRushAsEndingAtLedge_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRush
	 */
	struct UK29RushChargeableInteraction_Server_SetCurrentRush_Params
	{
	public:
		struct FK29GuidedMovementInstance                          newRushInstance;                                         // 0x0000(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		EK29RushPhase                                              targetPhase;                                             // 0x0050(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_DestroyPalletOrBreakable
	 */
	struct UK29RushChargeableInteraction_Server_DestroyPalletOrBreakable_Params
	{
	public:
		class AActor*                                              destroyable;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_DamageSurvivorAsCollision
	 */
	struct UK29RushChargeableInteraction_Server_DamageSurvivorAsCollision_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             currentKillerPosition;                                   // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_ChangeRushPhase
	 */
	struct UK29RushChargeableInteraction_Server_ChangeRushPhase_Params
	{
	public:
		EK29RushPhase                                              newRushPhase;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       forceLocallyControlled;                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Server_CancelInteraction
	 */
	struct UK29RushChargeableInteraction_Server_CancelInteraction_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.RushComplete
	 */
	struct UK29RushChargeableInteraction_RushComplete_Params
	{
	public:
		bool                                                       rushEndedNaturally;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.OnWindowOfOpportunityTimeoutCooldownEnd
	 */
	struct UK29RushChargeableInteraction_OnWindowOfOpportunityTimeoutCooldownEnd_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.OnSubsequentRushOpportunityTimeout
	 */
	struct UK29RushChargeableInteraction_OnSubsequentRushOpportunityTimeout_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.OnSmashOutTimerCompleted
	 */
	struct UK29RushChargeableInteraction_OnSmashOutTimerCompleted_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.OnInstantCarryTimerComplete
	 */
	struct UK29RushChargeableInteraction_OnInstantCarryTimerComplete_Params
	{
	public:
		class ACamperPlayer*                                       survivorToCarry;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.OnGrabbingTransitionComplete
	 */
	struct UK29RushChargeableInteraction_OnGrabbingTransitionComplete_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.OnCollisionEnableTimerComplete
	 */
	struct UK29RushChargeableInteraction_OnCollisionEnableTimerComplete_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_SmashSurvivor
	 */
	struct UK29RushChargeableInteraction_Multicast_SmashSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorToCarry;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_SlashAtSurvivor
	 */
	struct UK29RushChargeableInteraction_Multicast_SlashAtSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             currentKillerPosition;                                   // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         survivorTargetDamageState;                               // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingInCollision
	 */
	struct UK29RushChargeableInteraction_Multicast_SetCurrentRushAsEndingInCollision_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingAtLedge
	 */
	struct UK29RushChargeableInteraction_Multicast_SetCurrentRushAsEndingAtLedge_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRush
	 */
	struct UK29RushChargeableInteraction_Multicast_SetCurrentRush_Params
	{
	public:
		struct FK29GuidedMovementInstance                          newRushInstance;                                         // 0x0000(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_RushValid
	 */
	struct UK29RushChargeableInteraction_Multicast_RushValid_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_RushInvalid
	 */
	struct UK29RushChargeableInteraction_Multicast_RushInvalid_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_DestroyPalletOrBreakable
	 */
	struct UK29RushChargeableInteraction_Multicast_DestroyPalletOrBreakable_Params
	{
	public:
		class AActor*                                              destroyable;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_DamageSurvivorAsCollision
	 */
	struct UK29RushChargeableInteraction_Multicast_DamageSurvivorAsCollision_Params
	{
	public:
		struct FVector                                             currentKillerPosition;                                   // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DU0J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACamperPlayer*                                       collidedSurvivor;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         survivorTargetDamageState;                               // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_ChangeRushPhase
	 */
	struct UK29RushChargeableInteraction_Multicast_ChangeRushPhase_Params
	{
	public:
		EK29RushPhase                                              newRushPhase;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       forceLocallyControlled;                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_CarrySurvivor
	 */
	struct UK29RushChargeableInteraction_Multicast_CarrySurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorToCarry;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Multicast_CancelInteraction
	 */
	struct UK29RushChargeableInteraction_Multicast_CancelInteraction_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.GetRushTimeLeft
	 */
	struct UK29RushChargeableInteraction_GetRushTimeLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_ShowEndIndicator
	 */
	struct UK29RushChargeableInteraction_Cosmetic_ShowEndIndicator_Params
	{
	public:
		struct FVector                                             endIndicatorLocation;                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            forwardRotation;                                         // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_OnSlashAtSurvivor
	 */
	struct UK29RushChargeableInteraction_Cosmetic_OnSlashAtSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         survivorTargetDamageState;                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushStart
	 */
	struct UK29RushChargeableInteraction_Cosmetic_OnRushStart_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushPhaseChanged
	 */
	struct UK29RushChargeableInteraction_Cosmetic_OnRushPhaseChanged_Params
	{
	public:
		EK29RushPhase                                              previousPhase;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EK29RushPhase                                              newPhase;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushEnd
	 */
	struct UK29RushChargeableInteraction_Cosmetic_OnRushEnd_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeStart
	 */
	struct UK29RushChargeableInteraction_Cosmetic_OnChargeStart_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeEnd
	 */
	struct UK29RushChargeableInteraction_Cosmetic_OnChargeEnd_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_HideEndIndicator
	 */
	struct UK29RushChargeableInteraction_Cosmetic_HideEndIndicator_Params
	{	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.Cosmetic_DamageSurvivorAsCollision
	 */
	struct UK29RushChargeableInteraction_Cosmetic_DamageSurvivorAsCollision_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         survivorTargetDamageState;                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargeableInteraction.BounceComplete
	 */
	struct UK29RushChargeableInteraction_BounceComplete_Params
	{	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.SetToFullCharge
	 */
	struct UK29RushChargesHandlerComponent_SetToFullCharge_Params
	{	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.OnMaximumChargesChanged
	 */
	struct UK29RushChargesHandlerComponent_OnMaximumChargesChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.OnKillerSet
	 */
	struct UK29RushChargesHandlerComponent_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.GetPercentageRemainingUntilNextCharge
	 */
	struct UK29RushChargesHandlerComponent_GetPercentageRemainingUntilNextCharge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.GetMaximumCharges
	 */
	struct UK29RushChargesHandlerComponent_GetMaximumCharges_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.GetAvailableCharges
	 */
	struct UK29RushChargesHandlerComponent_GetAvailableCharges_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnRushChargeAdded
	 */
	struct UK29RushChargesHandlerComponent_Cosmetic_OnRushChargeAdded_Params
	{	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnOutOfRushCharges
	 */
	struct UK29RushChargesHandlerComponent_Cosmetic_OnOutOfRushCharges_Params
	{	};

	/**
	 * Function TheK29.K29RushChargesHandlerComponent.AddSingleCharge
	 */
	struct UK29RushChargesHandlerComponent_AddSingleCharge_Params
	{	};

	/**
	 * Function TheK29.K29RushCooldownInteraction.ResetCameraInputLimit
	 */
	struct UK29RushCooldownInteraction_ResetCameraInputLimit_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorAnimInstance.ResetHasBeenThrown
	 */
	struct UK29SurvivorAnimInstance_ResetHasBeenThrown_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorAnimInstance.OnHasBeenThrown
	 */
	struct UK29SurvivorAnimInstance_OnHasBeenThrown_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorAnimInstance.OnGameEventReceived
	 */
	struct UK29SurvivorAnimInstance_OnGameEventReceived_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BBIX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCarriableComponent.OnRep_OwningSurvivor
	 */
	struct UK29SurvivorCarriableComponent_OnRep_OwningSurvivor_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorCarriableComponent.OnKillerSet
	 */
	struct UK29SurvivorCarriableComponent_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCarriableComponent.IsBeingCarriedByK29RushOrMarkedForThrow
	 */
	struct UK29SurvivorCarriableComponent_IsBeingCarriedByK29RushOrMarkedForThrow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCarriableComponent.EnableCollision
	 */
	struct UK29SurvivorCarriableComponent_EnableCollision_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.OnSurvivorGrabbed
	 */
	struct AK29SurvivorCosmeticHelperActor_OnSurvivorGrabbed_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.OnOwnerLocallyObserved
	 */
	struct AK29SurvivorCosmeticHelperActor_OnOwnerLocallyObserved_Params
	{
	public:
		bool                                                       locallyObserved;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.OnLevelReadyToPlay
	 */
	struct AK29SurvivorCosmeticHelperActor_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionRemovalCollectableUsed
	 */
	struct AK29SurvivorCosmeticHelperActor_OnInfectionRemovalCollectableUsed_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionLevelsChanged
	 */
	struct AK29SurvivorCosmeticHelperActor_OnInfectionLevelsChanged_Params
	{
	public:
		class ACamperPlayer*                                       targetSurvivor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsActive;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionIncubated
	 */
	struct AK29SurvivorCosmeticHelperActor_IsInfectionIncubated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionCritical
	 */
	struct AK29SurvivorCosmeticHelperActor_IsInfectionCritical_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionActive
	 */
	struct AK29SurvivorCosmeticHelperActor_IsInfectionActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.IsInfected
	 */
	struct AK29SurvivorCosmeticHelperActor_IsInfected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.GetMaximumInfectionLevels
	 */
	struct AK29SurvivorCosmeticHelperActor_GetMaximumInfectionLevels_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionPercentage
	 */
	struct AK29SurvivorCosmeticHelperActor_GetCurrentInfectionPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionLevels
	 */
	struct AK29SurvivorCosmeticHelperActor_GetCurrentInfectionLevels_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorHitCollisionWithRush
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_OnOwningSurvivorHitCollisionWithRush_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorDied
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_OnOwningSurvivorDied_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionRemovalCollectableUsed
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_OnInfectionRemovalCollectableUsed_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionLevelsChanged
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_OnInfectionLevelsChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionIncubatedChanged
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectionIncubatedChanged_Params
	{
	public:
		bool                                                       IsInfectionIncubated;                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionCriticalChanged
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectionCriticalChanged_Params
	{
	public:
		bool                                                       IsInfectionCritical;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedChanged
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectedChanged_Params
	{
	public:
		bool                                                       IsInfected;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedActiveChanged
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectedActiveChanged_Params
	{
	public:
		bool                                                       IsInfectionActive;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_GrabbedByKiller
	 */
	struct AK29SurvivorCosmeticHelperActor_Cosmetic_GrabbedByKiller_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.Server_EndThrow
	 */
	struct UK29SurvivorThrowableComponent_Server_EndThrow_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.Server_CancelThrowOnOtherSurvivorCollision
	 */
	struct UK29SurvivorThrowableComponent_Server_CancelThrowOnOtherSurvivorCollision_Params
	{
	public:
		struct FVector                                             collisionPosition;                                       // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4N74[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACamperPlayer*                                       survivorUsedAsCollision;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.OnWalkingAllowedAfterFall
	 */
	struct UK29SurvivorThrowableComponent_OnWalkingAllowedAfterFall_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.OnThrowTimeout
	 */
	struct UK29SurvivorThrowableComponent_OnThrowTimeout_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.Multicast_SetCurrentThrow
	 */
	struct UK29SurvivorThrowableComponent_Multicast_SetCurrentThrow_Params
	{
	public:
		struct FK29GuidedMovementInstance                          throwInstance;                                           // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       thrownSurvivor;                                          // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.Multicast_InstantlyLetGoSurvivor
	 */
	struct UK29SurvivorThrowableComponent_Multicast_InstantlyLetGoSurvivor_Params
	{
	public:
		bool                                                       hasDealtDamage;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.Multicast_EndThrow
	 */
	struct UK29SurvivorThrowableComponent_Multicast_EndThrow_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.Multicast_CancelThrowOnOtherSurvivorCollision
	 */
	struct UK29SurvivorThrowableComponent_Multicast_CancelThrowOnOtherSurvivorCollision_Params
	{
	public:
		struct FVector                                             collisionPosition;                                       // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W0JR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACamperPlayer*                                       survivorUsedAsCollision;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.EndThrow
	 */
	struct UK29SurvivorThrowableComponent_EndThrow_Params
	{	};

	/**
	 * Function TheK29.K29SurvivorThrowableComponent.Cosmetic_OnSurvivorUsedAsCollision
	 */
	struct UK29SurvivorThrowableComponent_Cosmetic_OnSurvivorUsedAsCollision_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29UseInfectionRemoverInteraction.OnSurvivorCured_Cosmetic
	 */
	struct UK29UseInfectionRemoverInteraction_OnSurvivorCured_Cosmetic_Params
	{	};

	/**
	 * Function TheK29.K29UseInfectionRemoverInteraction.GetInteractionTarget
	 */
	struct UK29UseInfectionRemoverInteraction_GetInteractionTarget_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Utilities.IsSurvivorAbleToBeAffectedByPower
	 */
	struct UK29Utilities_IsSurvivorAbleToBeAffectedByPower_Params
	{
	public:
		class AActor*                                              survivorAsActor;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASlasherPlayer*                                      killer;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.K29Utilities.GetK29Power
	 */
	struct UK29Utilities_GetK29Power_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AK29Power*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.S32P01.OnRep_IsKillerInRange
	 */
	struct US32P01_OnRep_IsKillerInRange_Params
	{	};

	/**
	 * Function TheK29.S32P01.GetGeneratorRevealRange
	 */
	struct US32P01_GetGeneratorRevealRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.S32P03.GetActivationTimeForLevel
	 */
	struct US32P03_GetActivationTimeForLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.S33P02.OnRep_ReassuredSurvivors
	 */
	struct US33P02_OnRep_ReassuredSurvivors_Params
	{	};

	/**
	 * Function TheK29.S33P02.Local_EffectTriggered
	 */
	struct US33P02_Local_EffectTriggered_Params
	{
	public:
		struct FTransform                                          Location;                                                // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.S33P03.GetSkillCheckTriggerPercentPerToken
	 */
	struct US33P03_GetSkillCheckTriggerPercentPerToken_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.S33P03.GetSkillCheckCursorSpeedPerToken
	 */
	struct US33P03_GetSkillCheckCursorSpeedPerToken_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK29.S33P03.GetSkillCheckBonusPercentPerTokenAtLevel
	 */
	struct US33P03_GetSkillCheckBonusPercentPerTokenAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
