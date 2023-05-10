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
	 * Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet
	 */
	struct UDemogorgonHuskAnimInstance_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.TriggerDirtExplosion
	 */
	struct ADemogorgonPortal_TriggerDirtExplosion_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.ShowPortalTeleportInteractionStartVFX
	 */
	struct ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.ShowPortalActiveVFX
	 */
	struct ADemogorgonPortal_ShowPortalActiveVFX_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.RemovePortalTeleportInteractionStartVFX
	 */
	struct ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.RemovePortalActiveVFX
	 */
	struct ADemogorgonPortal_RemovePortalActiveVFX_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.PlaySoundFromPortal
	 */
	struct ADemogorgonPortal_PlaySoundFromPortal_Params
	{
	public:
		class UAkAudioEvent*                                       SoundEvent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.OnTeleportAbilityCooldownChangedVFX
	 */
	struct ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Params
	{
	public:
		bool                                                       isOnCooldown;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.OnTargetedChanged
	 */
	struct ADemogorgonPortal_OnTargetedChanged_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.OnPortalStateChanged
	 */
	struct ADemogorgonPortal_OnPortalStateChanged_Params
	{
	public:
		EDemogorgonPortalState                                     State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.OnPortalDestroyed
	 */
	struct ADemogorgonPortal_OnPortalDestroyed_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.OnEndOverlapPortalArea
	 */
	struct ADemogorgonPortal_OnEndOverlapPortalArea_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.OnBeginOverlapPortalArea
	 */
	struct ADemogorgonPortal_OnBeginOverlapPortalArea_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SXSL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.MakePortalDisappearVFX
	 */
	struct ADemogorgonPortal_MakePortalDisappearVFX_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.IsTargeted
	 */
	struct ADemogorgonPortal_IsTargeted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.Authority_StopDestroyingPlayers
	 */
	struct ADemogorgonPortal_Authority_StopDestroyingPlayers_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.Authority_OnTeleportChargePercentChanged
	 */
	struct ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortal.Authority_OnDestroyChargePercentChanged
	 */
	struct ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.UpdateRemainingPortalCount
	 */
	struct UDemogorgonPortalPlacerStateComponent_UpdateRemainingPortalCount_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnLevelReadyToPlay
	 */
	struct UDemogorgonPortalPlacerStateComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * DelegateFunction TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnDemogorgonTeleportCooldownComplete__DelegateSignature
	 */
	struct UDemogorgonPortalPlacerStateComponent_OnDemogorgonTeleportCooldownComplete__DelegateSignature_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.IsUsePortalCooldownDone
	 */
	struct UDemogorgonPortalPlacerStateComponent_IsUsePortalCooldownDone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.InitializeTunableValues
	 */
	struct UDemogorgonPortalPlacerStateComponent_InitializeTunableValues_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetTeleportDuration
	 */
	struct UDemogorgonPortalPlacerStateComponent_GetTeleportDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetRemainingPortalCount
	 */
	struct UDemogorgonPortalPlacerStateComponent_GetRemainingPortalCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnRep_PlayersInsideRadius
	 */
	struct UDemogorgonPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Params
	{	};

	/**
	 * DelegateFunction TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnPortalEffectsAppliedMultiDelegate__DelegateSignature
	 */
	struct UDemogorgonPortalRadiusDetectorComponent_OnPortalEffectsAppliedMultiDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_OnLevelReadyToPlay
	 */
	struct UDemogorgonPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_CallOnPortalEffectsApplied
	 */
	struct UDemogorgonPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalTargetingComponent.SetIsPorting
	 */
	struct UDemogorgonPortalTargetingComponent_SetIsPorting_Params
	{
	public:
		bool                                                       isPorting;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalTargetingComponent.Server_SetTargetedPortal
	 */
	struct UDemogorgonPortalTargetingComponent_Server_SetTargetedPortal_Params
	{
	public:
		class ADemogorgonPortal*                                   targetedPortal;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalTargetingComponent.Multicast_SetTargetedPortal
	 */
	struct UDemogorgonPortalTargetingComponent_Multicast_SetTargetedPortal_Params
	{
	public:
		class ADemogorgonPortal*                                   targetedPortal;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPortalTargetingComponent.GetTargetedPortal
	 */
	struct UDemogorgonPortalTargetingComponent_GetTargetedPortal_Params
	{
	public:
		class ADemogorgonPortal*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
	 */
	struct UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params
	{
	public:
		bool                                                       isHunting;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
	 */
	struct UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
	 */
	struct UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
	 */
	struct UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonStealthComponent.Authority_OnLevelReadyToPlay
	 */
	struct UDemogorgonStealthComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheDemogorgon.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
	 */
	struct UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params
	{
	public:
		float                                                      individualChargeAmount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      totalChargeAmount;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              chargeInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       wasCoop;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SBND[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
	 */
	struct UElevensSodaAddon_Multicast_UnhighlightGenerator_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
	 */
	struct UElevensSodaAddon_Multicast_HighlightGenerator_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
	 */
	struct UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params
	{	};

	/**
	 * Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnSlasherSet
	 */
	struct UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnLocallyObservedChanged
	 */
	struct UTeleportToDemogorgonPortalInteraction_OnLocallyObservedChanged_Params
	{
	public:
		bool                                                       isKillerLocallyObserved;                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
