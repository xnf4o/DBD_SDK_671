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
	 * Function DBDCompetence.ActivatableEnduranceEffect.Authority_Start
	 */
	struct UActivatableEnduranceEffect_Authority_Start_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start
	 */
	struct UActivatableExhaustedEffect_Authority_Start_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
	 */
	struct UActivatableExhaustedEffect_Authority_OnHookCamper_Params
	{
	public:
		struct FGameplayTag                                        GameEvent;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SZJ2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Adrenaline.Multicast_DispatchAdrenalineEvents
	 */
	struct UAdrenaline_Multicast_DispatchAdrenalineEvents_Params
	{
	public:
		bool                                                       IsHealthy;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TCUS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      HealAmount;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Adrenaline.Authority_AttemptApplyPerk
	 */
	struct UAdrenaline_Authority_AttemptApplyPerk_Params
	{	};

	/**
	 * Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
	 */
	struct UAnyActorPairQueryRangeIsTrue_OnInRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
	 */
	struct UAnyMeansNecessary_Authority_OnPalletPulledUp_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_93P1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
	 */
	struct UAnySurvivorHasObjectState_OnSurvivorRemoved_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
	 */
	struct UAnySurvivorHasObjectState_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
	 */
	struct UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params
	{
	public:
		class UInteractionDefinition*                              InteractionDefinition;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
	 */
	struct UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params
	{
	public:
		struct FGameplayTagContainer                               interactionSemantics;                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
	 */
	struct UBaseLingeringStatusEffect_SetLingerDuration_Params
	{
	public:
		float                                                      lingerDuration;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect
	 */
	struct UBaseLingeringStatusEffect_Authority_DeactivateEffect_Params
	{	};

	/**
	 * Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect
	 */
	struct UBaseLingeringStatusEffect_Authority_ActivateEffect_Params
	{	};

	/**
	 * Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
	 */
	struct UBetterTogether_OnStartedGeneratorRepair_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XQWY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BetterTogether.GetRevealDistance
	 */
	struct UBetterTogether_GetRevealDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange
	 */
	struct UBlessedStatusEffect_OnExitBoonRange_Params
	{	};

	/**
	 * Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange
	 */
	struct UBlessedStatusEffect_OnEnterBoonRange_Params
	{	};

	/**
	 * Function DBDCompetence.BlessedStatusEffect.GetBoundTotem
	 */
	struct UBlessedStatusEffect_GetBoundTotem_Params
	{
	public:
		class ATotem*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange
	 */
	struct UBlessedStatusEffect_GetBoonTotemBlessingRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame
	 */
	struct UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BloodEcho.GetCooldownDurationAtLevel
	 */
	struct UBloodEcho_GetCooldownDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved
	 */
	struct UBoonPerk_Authority_OnSurvivorRemoved_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Breakout.OnSlasherSet
	 */
	struct UBreakout_OnSlasherSet_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Breakout.OnRep_IsPerkActive
	 */
	struct UBreakout_OnRep_IsPerkActive_Params
	{	};

	/**
	 * Function DBDCompetence.Breakout.Authority_OnRangeChanged
	 */
	struct UBreakout_Authority_OnRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
	 */
	struct UBreakout_Authority_ImposeWiggleStatusEffect_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
	 */
	struct UCorruptIntervention_OnRep_BlockedGenerators_Params
	{	};

	/**
	 * Function DBDCompetence.CorruptIntervention.LevelReadyToBlockedGenerators
	 */
	struct UCorruptIntervention_LevelReadyToBlockedGenerators_Params
	{	};

	/**
	 * Function DBDCompetence.CorruptIntervention.GetGeneratorBlockDuration
	 */
	struct UCorruptIntervention_GetGeneratorBlockDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.CorruptIntervention.Authority_TryActivatePerk
	 */
	struct UCorruptIntervention_Authority_TryActivatePerk_Params
	{	};

	/**
	 * Function DBDCompetence.CorruptIntervention.Authority_OnLevelReadyToPlay
	 */
	struct UCorruptIntervention_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDCompetence.CruelConfinement.GetEffectiveRadiusAtLevel
	 */
	struct UCruelConfinement_GetEffectiveRadiusAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.CruelConfinement.GetBlockDurationAtLevel
	 */
	struct UCruelConfinement_GetBlockDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DarkSense.Authority_OnInRangeChanged
	 */
	struct UDarkSense_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
	 */
	struct UDBDConditionFactory_IsPlayerPerformingInteraction_Params
	{
	public:
		unsigned char                                              UnknownData_6R7D[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTagContainer                               interactionSemantics;                                    // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UIsPlayerPerformingInteraction*                      ReturnValue;                                             // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
	 */
	struct UDBDConditionFactory_DoesPerkHaveToken_Params
	{
	public:
		unsigned char                                              UnknownData_RU1A[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPerk*                                               Perk;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDoesPerkHaveToken*                                  ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
	 */
	struct UDecisiveStrike_OnUnhookedTimerEnded_Params
	{	};

	/**
	 * Function DBDCompetence.DecisiveStrike.OnSkillCheck
	 */
	struct UDecisiveStrike_OnSkillCheck_Params
	{
	public:
		bool                                                       hadInput;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PXEU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
	 */
	struct UDecisiveStrike_OnRep_HasBeenAttempted_Params
	{	};

	/**
	 * Function DBDCompetence.DecisiveStrike.OnPickUpEnded
	 */
	struct UDecisiveStrike_OnPickUpEnded_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
	 */
	struct UDecisiveStrike_OnOwnerPickedUp_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DecisiveStrike.GetDurationAfterUnhook
	 */
	struct UDecisiveStrike_GetDurationAfterUnhook_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DejaVu.OnRep_RevealedGenerators
	 */
	struct UDejaVu_OnRep_RevealedGenerators_Params
	{	};

	/**
	 * Function DBDCompetence.DejaVu.LevelReadyToRevealOutlineGenerators
	 */
	struct UDejaVu_LevelReadyToRevealOutlineGenerators_Params
	{	};

	/**
	 * Function DBDCompetence.DejaVu.GetPerkDurationAtLevel
	 */
	struct UDejaVu_GetPerkDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DejaVu.GetActionSpeedsAtLevel
	 */
	struct UDejaVu_GetActionSpeedsAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DejaVu.Authority_TryActivatePerk
	 */
	struct UDejaVu_Authority_TryActivatePerk_Params
	{	};

	/**
	 * Function DBDCompetence.DejaVu.Authority_OnGeneratorRepaired
	 */
	struct UDejaVu_Authority_OnGeneratorRepaired_Params
	{
	public:
		int32_t                                                    activatedGeneratorCount;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
	 */
	struct UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
	 */
	struct UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Params
	{
	public:
		ECamperDamageState                                         before;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         after;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
	 */
	struct UDelayedHealEffect_Authority_OnActivationTimerComplete_Params
	{	};

	/**
	 * Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
	 */
	struct UDistortion_OnRep_AuraBlockIsActive_Params
	{	};

	/**
	 * Function DBDCompetence.Distortion.OnAuraBlockedCosmetic
	 */
	struct UDistortion_OnAuraBlockedCosmetic_Params
	{	};

	/**
	 * Function DBDCompetence.Distortion.AuraBlockCanBeActive
	 */
	struct UDistortion_AuraBlockCanBeActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DoesPerkHaveToken.SetPerk
	 */
	struct UDoesPerkHaveToken_SetPerk_Params
	{
	public:
		class UPerk*                                               Perk;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
	 */
	struct UDoesPerkHaveToken_OnRep_Perk_Params
	{	};

	/**
	 * Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
	 */
	struct UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Params
	{	};

	/**
	 * Function DBDCompetence.DyingLight.OnObsessionChanged
	 */
	struct UDyingLight_OnObsessionChanged_Params
	{
	public:
		class ACamperPlayer*                                       newObsession;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       previousObsession;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.FlipFlop.Authority_OnPickedUp
	 */
	struct UFlipFlop_Authority_OnPickedUp_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag
	 */
	struct UGateBlockerEffect_RemoveCantEscapeFlag_Params
	{	};

	/**
	 * Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
	 */
	struct UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Params
	{	};

	/**
	 * Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
	 */
	struct UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HeadOn.OnPawnOverlapExit
	 */
	struct UHeadOn_OnPawnOverlapExit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HeadOn.OnPawnOverlapEnter
	 */
	struct UHeadOn_OnPawnOverlapEnter_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_81VN[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
	 */
	struct UHeadOn_OnHeadOnAnimationComplete_Params
	{	};

	/**
	 * Function DBDCompetence.HeadOn.Multicast_TriggerStunOnActor
	 */
	struct UHeadOn_Multicast_TriggerStunOnActor_Params
	{
	public:
		class UObject*                                             stunnableInterfaceUObject;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          stunner;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HeadOn.GetHideDuration
	 */
	struct UHeadOn_GetHideDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
	 */
	struct UHeadOn_CanApplyHeadOnInteraction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HeadOn.Authority_ActivatePerk
	 */
	struct UHeadOn_Authority_ActivatePerk_Params
	{	};

	/**
	 * Function DBDCompetence.HemorrhageStatusEffect.OnStoppedHealing
	 */
	struct UHemorrhageStatusEffect_OnStoppedHealing_Params
	{
	public:
		class ADBDPlayer*                                          Instigator;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Target;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HemorrhageStatusEffect.Authority_OnSurvivorHealed
	 */
	struct UHemorrhageStatusEffect_Authority_OnSurvivorHealed_Params
	{
	public:
		struct FCamperHealResult                                   healResult;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer
	 */
	struct UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Params
	{	};

	/**
	 * Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
	 */
	struct UHexPerk_OnRep_PlayersWhoKnowCurse_Params
	{	};

	/**
	 * Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
	 */
	struct UHexPerk_IsCurseRevealedToPlayer_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
	 */
	struct UHexPerk_Authority_SetCurseRevealedToPlayer_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       revealed;                                                // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
	 */
	struct UHexPerk_Authority_RevealCurseToAllSurvivors_Params
	{
	public:
		bool                                                       revealed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexDevourHope.GetRangeFromUnhookedSurvivorNeeded
	 */
	struct UHexDevourHope_GetRangeFromUnhookedSurvivorNeeded_Params
	{
	public:
		int32_t                                                    PerkLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexDevourHope.GetMoveSpeedIncrement
	 */
	struct UHexDevourHope_GetMoveSpeedIncrement_Params
	{
	public:
		int32_t                                                    PerkLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexNoOneEscapesDeath.OnRep_SetShouldActivateTotemOutline
	 */
	struct UHexNoOneEscapesDeath_OnRep_SetShouldActivateTotemOutline_Params
	{	};

	/**
	 * Function DBDCompetence.HexNoOneEscapesDeath.GetHasteAtLevel
	 */
	struct UHexNoOneEscapesDeath_GetHasteAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexRuin.GetRegressionModifierByLevel
	 */
	struct UHexRuin_GetRegressionModifierByLevel_Params
	{
	public:
		int32_t                                                    PerkLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HexRuin.Authority_SetupCurseOnAllGenerators
	 */
	struct UHexRuin_Authority_SetupCurseOnAllGenerators_Params
	{	};

	/**
	 * Function DBDCompetence.HexThirdSeal.OnRep_NumOfHitPlayers
	 */
	struct UHexThirdSeal_OnRep_NumOfHitPlayers_Params
	{	};

	/**
	 * Function DBDCompetence.HideSurvivorVFXForKillerEffect.HideVFX
	 */
	struct UHideSurvivorVFXForKillerEffect_HideVFX_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
	 */
	struct UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
	 */
	struct UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params
	{
	public:
		class FName                                                effectIDLevel1;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                effectIDLevel2;                                          // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                effectIDLevel3;                                          // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
	 */
	struct UImAllEars_Server_OnCamperLoudNoise_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PMBG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ImAllEars.GetDurationAtLevel
	 */
	struct UImAllEars_GetDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ImAllEars.GetCooldownAtLevel
	 */
	struct UImAllEars_GetCooldownAtLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.OnEventBaseAddon.OnEventFired
	 */
	struct UOnEventBaseAddon_OnEventFired_Params
	{
	public:
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
	 */
	struct UInfectiousFright_RevealSurvivorLocation_Params
	{
	public:
		class ACamperPlayer*                                       Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
	 */
	struct UInfectiousFright_OnRep_PerkActivationCount_Params
	{	};

	/**
	 * Function DBDCompetence.InnerStrength.GetHideDuration
	 */
	struct UInnerStrength_GetHideDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.InnerStrength.Authority_OnPlayerImmobilizeStateChanged
	 */
	struct UInnerStrength_Authority_OnPlayerImmobilizeStateChanged_Params
	{
	public:
		ECamperImmobilizeState                                     oldImmobilizeState;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperImmobilizeState                                     newImmobilizeState;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged
	 */
	struct UIsBestProveThyselfEffectInRange_OnInRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KHOC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UProveThyselfEffect*                                 ProveThyselfEffect;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
	 */
	struct UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Params
	{
	public:
		class UStatusEffect*                                       effect;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged
	 */
	struct UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Params
	{
	public:
		class UGameplayModifierContainer*                          GameplayModifierContainer;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsApplicable;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved
	 */
	struct UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Params
	{
	public:
		class UStatusEffect*                                       effect;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsInRangeOfOriginatingPlayer.OnInRangeChanged
	 */
	struct UIsInRangeOfOriginatingPlayer_OnInRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount
	 */
	struct UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Params
	{	};

	/**
	 * Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init
	 */
	struct UIsOriginatingPerkBoundToTotems_Init_Params
	{
	public:
		EComparisonOperation                                       comparisonOperator;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OD87[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    totemCount;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
	 */
	struct UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnRep_IsLookingTowards
	 */
	struct UIsPlayerLookingAtKillerCondition_OnRep_IsLookingTowards_Params
	{
	public:
		bool                                                       IsLookingTowards;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnPawnControllerChanged
	 */
	struct UIsPlayerLookingAtKillerCondition_OnPawnControllerChanged_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange
	 */
	struct UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Params
	{
	public:
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
	 */
	struct UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
	 */
	struct UIsPlayerPerformingItemInteraction_OnCollectableDropped_Params
	{	};

	/**
	 * Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
	 */
	struct UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Params
	{
	public:
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
	 */
	struct UIsPlayerPerformingInteraction_UpdateIsTrue_Params
	{
	public:
		class UInteractionDefinition*                              InteractionDefinition;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
	 */
	struct UIsPlayerPerformingInteraction_SetInteractionSemantics_Params
	{
	public:
		struct FGameplayTagContainer                               interactionSemantics;                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
	 */
	struct UKillerSubjectProvider_RegisterWhenKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration
	 */
	struct ULingeringBlessedStatusEffect_SetLingerDuration_Params
	{
	public:
		float                                                      lingerDuration;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged
	 */
	struct ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.LuckyBreak.Authority_TryActivatePerk
	 */
	struct ULuckyBreak_Authority_TryActivatePerk_Params
	{	};

	/**
	 * Function DBDCompetence.LuckyBreak.Authority_OnDamageStateChanged
	 */
	struct ULuckyBreak_Authority_OnDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         CurrentDamageState;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.LuckyBreak.ActivationTimerEnded
	 */
	struct ULuckyBreak_ActivationTimerEnded_Params
	{	};

	/**
	 * Function DBDCompetence.MakeYourChoice.CanApplyExposedEffect
	 */
	struct UMakeYourChoice_CanApplyExposedEffect_Params
	{
	public:
		class AActor*                                              unhooker;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorUnhookedOnScourgeHook
	 */
	struct UMonstrousShrine_Authority_OnSurvivorUnhookedOnScourgeHook_Params
	{
	public:
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorHookedOnScourgeHook
	 */
	struct UMonstrousShrine_Authority_OnSurvivorHookedOnScourgeHook_Params
	{
	public:
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.NoOneLeftBehind.Authority_OnExitGatePoweredApplicableChanged
	 */
	struct UNoOneLeftBehind_Authority_OnExitGatePoweredApplicableChanged_Params
	{
	public:
		class UGameplayModifierContainer*                          Container;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Active;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
	 */
	struct UOwningPlayerInTotemRange_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
	 */
	struct UPlayerIsInExitArea_PlayerExitExitArea_Params
	{	};

	/**
	 * Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
	 */
	struct UPlayerIsInExitArea_PlayerEnterExitArea_Params
	{	};

	/**
	 * Function DBDCompetence.PlayWithYourFood.Authority_OnChaseEnded
	 */
	struct UPlayWithYourFood_Authority_OnChaseEnded_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      chaseTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Poised.GetActivationTime
	 */
	struct UPoised_GetActivationTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged
	 */
	struct UProveThyself_OnSurvivorInOwnerRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
	 */
	struct URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged
	 */
	struct UProveThyselfEffect_OnInRangeOfOriginatorChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TRVS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACamperPlayer*                                       Survivor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Saboteur.GetCooldownDurationAtLevel
	 */
	struct USaboteur_GetCooldownDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SecondWind.Authority_OnHealProgress
	 */
	struct USecondWind_Authority_OnHealProgress_Params
	{
	public:
		float                                                      individualChargeAmount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      totalChargeAmount;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              chargeInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       wasCoop;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8IGM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SmallGame.VFXTotemFound
	 */
	struct USmallGame_VFXTotemFound_Params
	{	};

	/**
	 * Function DBDCompetence.SmallGame.SearchForTotems
	 */
	struct USmallGame_SearchForTotems_Params
	{	};

	/**
	 * Function DBDCompetence.SmallGame.Multicast_TotemFound
	 */
	struct USmallGame_Multicast_TotemFound_Params
	{	};

	/**
	 * Function DBDCompetence.SmallGame.GetDetectionConeAngle
	 */
	struct USmallGame_GetDetectionConeAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SmallGame.Authority_SetTotemDetected
	 */
	struct USmallGame_Authority_SetTotemDetected_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
	 */
	struct USoleSurvivor_Authority_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
	 */
	struct USolidarity_Authority_OnSkillCheckResponse_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Bonus;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4A1W[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerLoudNoise;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hadInput;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESkillCheckCustomType                                      Type;                                                    // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6VLE[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ChargeChange;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
	 */
	struct USolidarity_Authority_OnHealthChargeApplied_Params
	{
	public:
		float                                                      individualChargeAmount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      totalChargeAmount;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              chargeInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       wasCoop;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MTPK[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.OnRep_IsInRange
	 */
	struct USpineChillPerk_OnRep_IsInRange_Params
	{	};

	/**
	 * Function DBDCompetence.SpineChillPerk.IsLookingTowards
	 */
	struct USpineChillPerk_IsLookingTowards_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.IsInRange
	 */
	struct USpineChillPerk_IsInRange_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.HasLineOfSight
	 */
	struct USpineChillPerk_HasLineOfSight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.GetRange
	 */
	struct USpineChillPerk_GetRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.GetLingerDuration
	 */
	struct USpineChillPerk_GetLingerDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.GetActionSpeed
	 */
	struct USpineChillPerk_GetActionSpeed_Params
	{
	public:
		int32_t                                                    PerkLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.Authority_OnIsLookingTowardsChanged
	 */
	struct USpineChillPerk_Authority_OnIsLookingTowardsChanged_Params
	{
	public:
		bool                                                       IsLookingTowards;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.Authority_OnIsInLineOfSightChanged
	 */
	struct USpineChillPerk_Authority_OnIsInLineOfSightChanged_Params
	{
	public:
		bool                                                       isInLineOfSight;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.Authority_OnInRangeChanged
	 */
	struct USpineChillPerk_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SpineChillPerk.AreTriggersMet
	 */
	struct USpineChillPerk_AreTriggersMet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SprintBurst.GetSprintDuration
	 */
	struct USprintBurst_GetSprintDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SprintBurst.GetExhaustedDuration
	 */
	struct USprintBurst_GetExhaustedDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SprintBurst.Authority_OnPerkFlagsChanged
	 */
	struct USprintBurst_Authority_OnPerkFlagsChanged_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isAdded;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
	 */
	struct USprintBurst_Authority_OnIsRunningAndMovingChanged_Params
	{
	public:
		bool                                                       isRunningAndMoving;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.StakeOutPerk.Server_ConsumeToken
	 */
	struct UStakeOutPerk_Server_ConsumeToken_Params
	{	};

	/**
	 * Function DBDCompetence.StakeOutPerk.Local_BroadcastConsumeToken
	 */
	struct UStakeOutPerk_Local_BroadcastConsumeToken_Params
	{	};

	/**
	 * Function DBDCompetence.StatsSystemUtilities.InitStatBP
	 */
	struct UStatsSystemUtilities_InitStatBP_Params
	{
	public:
		struct FTunableStat                                        theStat;                                                 // 0x0000(0x0080)  (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.StatsSystemUtilities.GetStatValueBP
	 */
	struct UStatsSystemUtilities_GetStatValueBP_Params
	{
	public:
		struct FTunableStat                                        theStat;                                                 // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0080(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Surge.GetZoneRadius
	 */
	struct USurge_GetZoneRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Surge.GetInstantRegressionAtLevel
	 */
	struct USurge_GetInstantRegressionAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Surge.GetHasCooldown
	 */
	struct USurge_GetHasCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Surge.GetCooldownDurationAtLevel
	 */
	struct USurge_GetCooldownDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Surge.Client_TriggerEffects
	 */
	struct USurge_Client_TriggerEffects_Params
	{
	public:
		TArray<class AGenerator*>                                  generators;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
	 */
	struct UTheMettleOfMan_OnRep_NumTokenSoFar_Params
	{	};

	/**
	 * Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
	 */
	struct UTheMettleOfMan_OnRep_CurrentPhase_Params
	{	};

	/**
	 * Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
	 */
	struct UThrillingTremors_OnRep_BlockedGenerators_Params
	{	};

	/**
	 * Function DBDCompetence.ThrillingTremors.GetDurationAtLevel
	 */
	struct UThrillingTremors_GetDurationAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.ThrillingTremors.GetCooldownAtLevel
	 */
	struct UThrillingTremors_GetCooldownAtLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Tinkerer.GetTriggerThreshold
	 */
	struct UTinkerer_GetTriggerThreshold_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Tinkerer.GetActivationTimeAtLevel
	 */
	struct UTinkerer_GetActivationTimeAtLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Tinkerer.Authority_OnUndetectableGeneratorInterrupt
	 */
	struct UTinkerer_Authority_OnUndetectableGeneratorInterrupt_Params
	{
	public:
		class ADBDPlayer*                                          Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Tinkerer.Authority_OnUndetectableAttackSuccessNearActiveGenerator
	 */
	struct UTinkerer_Authority_OnUndetectableAttackSuccessNearActiveGenerator_Params
	{
	public:
		class ADBDPlayer*                                          Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Tinkerer.Authority_OnLevelReadyToPlay
	 */
	struct UTinkerer_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDCompetence.Tinkerer.Authority_OnGeneratorReachedThreshold
	 */
	struct UTinkerer_Authority_OnGeneratorReachedThreshold_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.Tinkerer.Authority_OnGeneratorChargePercentChanged
	 */
	struct UTinkerer_Authority_OnGeneratorChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.WereGonnaLiveForever.OnRep_PerkEnabled
	 */
	struct UWereGonnaLiveForever_OnRep_PerkEnabled_Params
	{	};

	/**
	 * Function DBDCompetence.Whispers.OnWhispersAudio
	 */
	struct UWhispers_OnWhispersAudio_Params
	{	};

	/**
	 * Function DBDCompetence.Whispers.OnRep_SurvivorsInRange
	 */
	struct UWhispers_OnRep_SurvivorsInRange_Params
	{	};

	/**
	 * Function DBDCompetence.Whispers.Multicast_FireAudioEvent
	 */
	struct UWhispers_Multicast_FireAudioEvent_Params
	{
	public:
		int32_t                                                    survivorsInRange;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
	 */
	struct UYamaokaFamilyCrest_RevealSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivorToReveal;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
	 */
	struct UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
