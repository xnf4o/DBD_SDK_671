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
	 * Function TheSpirit.ActivePhaseWalkInteraction.OnPowerCollected
	 */
	struct UActivePhaseWalkInteraction_OnPowerCollected_Params
	{
	public:
		class ADBDPlayer*                                          collector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged
	 */
	struct UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.ActivePhaseWalkInteraction.GetChargeTime
	 */
	struct UActivePhaseWalkInteraction_GetChargeTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX
	 */
	struct UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.Diversion.Authority_OnOwningSurvivorImmobilizedStateChanged
	 */
	struct UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Params
	{
	public:
		ECamperImmobilizeState                                     oldImmobilizeState;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperImmobilizeState                                     newImmobilizeState;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged
	 */
	struct UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         CurrentDamageState;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
	 */
	struct UOwningPlayerInSpiritHuskRange_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.UpdateSurvivorVisibility
	 */
	struct UPhaseWalkingComponent_UpdateSurvivorVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.UpdateKillerVisibility
	 */
	struct UPhaseWalkingComponent_UpdateKillerVisibility_Params
	{	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.SpawnPassivePhaseWalkHusks
	 */
	struct UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Params
	{	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.Server_Broadcast_PhaseWalk
	 */
	struct UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Params
	{
	public:
		struct FPhaseWalkInfo                                      PhaseWalkInfo;                                           // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.RefillActivePhaseWalkCharges
	 */
	struct UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Params
	{	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.OnLevelReadyToPlay
	 */
	struct UPhaseWalkingComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.Multicast_Broadcast_PhaseWalk
	 */
	struct UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Params
	{
	public:
		struct FPhaseWalkInfo                                      PhaseWalkInfo;                                           // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.ModifyActivePhaseWalkCharges
	 */
	struct UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.MakePassivePhaseWalkHusksVisible
	 */
	struct UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Params
	{
	public:
		struct FTransform                                          huskTransform;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      opacityValue;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      speedValue;                                              // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.Local_PhaseWalk
	 */
	struct UPhaseWalkingComponent_Local_PhaseWalk_Params
	{
	public:
		struct FPhaseWalkInfo                                      PhaseWalkInfo;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.Local_EndPhaseWalks
	 */
	struct UPhaseWalkingComponent_Local_EndPhaseWalks_Params
	{	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.IsPhaseWalking
	 */
	struct UPhaseWalkingComponent_IsPhaseWalking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.IsPassivePhaseWalking
	 */
	struct UPhaseWalkingComponent_IsPassivePhaseWalking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.IsDecoyActive
	 */
	struct UPhaseWalkingComponent_IsDecoyActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.IsActivePhaseWalking
	 */
	struct UPhaseWalkingComponent_IsActivePhaseWalking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.GetSpiritPassivePhaseWalkHusksCountToSpawn
	 */
	struct UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.GetPassivePhaseWalkTimer
	 */
	struct UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Params
	{
	public:
		struct FDBDTimer                                           ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.GetHusk
	 */
	struct UPhaseWalkingComponent_GetHusk_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.GetDecoySlasherComponent
	 */
	struct UPhaseWalkingComponent_GetDecoySlasherComponent_Params
	{
	public:
		class UDecoySlasherComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkCharges
	 */
	struct UPhaseWalkingComponent_GetActivePhaseWalkCharges_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkChargePercentage
	 */
	struct UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.DBD_RefillActivePhaseWalkCharges
	 */
	struct UPhaseWalkingComponent_DBD_RefillActivePhaseWalkCharges_Params
	{	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.CanStartActivePhaseWalk
	 */
	struct UPhaseWalkingComponent_CanStartActivePhaseWalk_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.PhaseWalkingComponent.Authority_SetIsInPostActivePhaseWalk
	 */
	struct UPhaseWalkingComponent_Authority_SetIsInPostActivePhaseWalk_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation
	 */
	struct URancor_SpawnBubbleAtSurvivorsLocation_Params
	{	};

	/**
	 * Function TheSpirit.Rancor.GetSurvivorRevealDuration
	 */
	struct URancor_GetSurvivorRevealDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.SpiritFury.GetPalletToBreakCountAtLevel
	 */
	struct USpiritFury_GetPalletToBreakCountAtLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
	 */
	struct USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
