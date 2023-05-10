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
	 * Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened
	 */
	struct UAfterExitOpenQEEvaluator_OnExitGateOpened_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1I8Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying
	 */
	struct UBloodPointsQEEvaluator_OnFinishedPlaying_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NX55[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.ChaseInBasementQEEvaluator.OnEscapeChase
	 */
	struct UChaseInBasementQEEvaluator_OnEscapeChase_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O8E1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.ChaseInBasementQEEvaluator.OnChaseStart
	 */
	struct UChaseInBasementQEEvaluator_OnChaseStart_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EIWJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.ChaseInBasementQEEvaluator.OnChaseEnd
	 */
	struct UChaseInBasementQEEvaluator_OnChaseEnd_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R4WE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest
	 */
	struct UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SpecialBehaviourId;                                      // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
	 */
	struct UContextualQuestUtilities_PlayerHasAssociatedQuest_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SpecialBehaviourId;                                      // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped
	 */
	struct UDoBeforeEscapeQEEvaluator_OnEscaped_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0XJJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.DoBeforeHookQEEvaluator.OnHooked
	 */
	struct UDoBeforeHookQEEvaluator_OnHooked_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O9PD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
	 */
	struct UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LRKD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
	 */
	struct UEarnEmblemQualityQEEvaluator_OnFinishedPlaying_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5U8X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying
	 */
	struct UEndOfGameQEEvaluator_OnFinishedPlaying_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BSC1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.EscapeBasementItemQEEvaluator.OnTargetEscapeFromTrial
	 */
	struct UEscapeBasementItemQEEvaluator_OnTargetEscapeFromTrial_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_28UR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.EscapeBasementItemQEEvaluator.OnItemCollectedFromChest
	 */
	struct UEscapeBasementItemQEEvaluator_OnItemCollectedFromChest_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EMLM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.FragileObjectComponent.OnRep_Repaired
	 */
	struct UFragileObjectComponent_OnRep_Repaired_Params
	{	};

	/**
	 * DelegateFunction Archives.FragileObjectComponent.OnFragileObjectStateChanged__DelegateSignature
	 */
	struct UFragileObjectComponent_OnFragileObjectStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Archives.FragileObjectComponent.IsRepaired
	 */
	struct UFragileObjectComponent_IsRepaired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.FragileObjectComponent.GetPreviousCollector
	 */
	struct UFragileObjectComponent_GetPreviousCollector_Params
	{
	public:
		class ADBDPlayer*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.FragileObjectComponent.DBD_RepairFragileObject
	 */
	struct UFragileObjectComponent_DBD_RepairFragileObject_Params
	{	};

	/**
	 * Function Archives.Glyph.OnRep_PlayersWithVisibility
	 */
	struct AGlyph_OnRep_PlayersWithVisibility_Params
	{	};

	/**
	 * Function Archives.Glyph.IsPlayerOwner
	 */
	struct AGlyph_IsPlayerOwner_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.Glyph.DoesLocalPlayerHaveVisibility
	 */
	struct AGlyph_DoesLocalPlayerHaveVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.Glyph.Cosmetic_OnStoppedInteracting
	 */
	struct AGlyph_Cosmetic_OnStoppedInteracting_Params
	{	};

	/**
	 * Function Archives.Glyph.Cosmetic_OnStartedInteracting
	 */
	struct AGlyph_Cosmetic_OnStartedInteracting_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      interactionDuration;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.Glyph.Cosmetic_OnInteractionCompleted
	 */
	struct AGlyph_Cosmetic_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
	 */
	struct AGlyph_Cosmetic_OnGlyphVisibilityChanged_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.Glyph.Authority_TrackPlayerWithBehaviourID
	 */
	struct AGlyph_Authority_TrackPlayerWithBehaviourID_Params
	{
	public:
		class ADBDPlayer*                                          DBDPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
	 */
	struct AGlyph_Authority_OnPlayerBreachedRangeThreshold_Params
	{
	public:
		bool                                                       isWithinRange;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T5K2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              trackedActor;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.Glyph.Authority_OnIntroCompleted
	 */
	struct AGlyph_Authority_OnIntroCompleted_Params
	{	};

	/**
	 * Function Archives.Glyph.Authority_OnInteractionCompleted
	 */
	struct AGlyph_Authority_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.GreenGlyphActivatorComponent.DBD_ShowAuraGreenGlyphsActive
	 */
	struct UGreenGlyphActivatorComponent_DBD_ShowAuraGreenGlyphsActive_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.GreenGlyphActivatorComponent.Authority_OnActivateGlyphEvents
	 */
	struct UGreenGlyphActivatorComponent_Authority_OnActivateGlyphEvents_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQA2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.GreenGlyphActivatorComponent.Authority_EndGameScenarioBegins
	 */
	struct UGreenGlyphActivatorComponent_Authority_EndGameScenarioBegins_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1D5S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.GreenGlyphComponent.OnRep_SetShouldOutlineBeActive
	 */
	struct UGreenGlyphComponent_OnRep_SetShouldOutlineBeActive_Params
	{	};

	/**
	 * Function Archives.GreenGlyphComponent.Multicast_Cheat_ShowAuraGreenGlyphActive
	 */
	struct UGreenGlyphComponent_Multicast_Cheat_ShowAuraGreenGlyphActive_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShowAura;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnLevelReadyToPlay
	 */
	struct UHasInteractedMapTrackedInteractorQEEvaluator_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnActorTrackedByMap
	 */
	struct UHasInteractedMapTrackedInteractorQEEvaluator_OnActorTrackedByMap_Params
	{
	public:
		class AActor*                                              newActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.NearKillerQEEvaluator.OnRangeChanged
	 */
	struct UNearKillerQEEvaluator_OnRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
	 */
	struct UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8HT6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit
	 */
	struct UHideNearKillerQEEvaluator_OnHarpoonHit_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JTDL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
	 */
	struct UHideNearKillerQEEvaluator_OnFinishedPlaying_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DXAR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.HideNearKillerQEEvaluator.OnChaseStart
	 */
	struct UHideNearKillerQEEvaluator_OnChaseStart_Params
	{
	public:
		class ADBDPlayer*                                          chasedSurvivor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.HideNearKillerQEEvaluator.OnChaseEnd
	 */
	struct UHideNearKillerQEEvaluator_OnChaseEnd_Params
	{
	public:
		class ADBDPlayer*                                          chasedSurvivor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      chaseTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
	 */
	struct UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y71L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.MaxEventCountQEEvaluator.OnStopEventCount
	 */
	struct UMaxEventCountQEEvaluator_OnStopEventCount_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LPTV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
	 */
	struct UMaxEventCountQEEvaluator_OnIncrementEventCount_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_64N6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
	 */
	struct UMaxEventCountQEEvaluator_OnDecrementEventCount_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SXR2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
	 */
	struct USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQR1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
	 */
	struct USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RG9T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit
	 */
	struct UInLockerNearKillerQEEvaluator_OnClosetHideExit_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DKNR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
	 */
	struct UInLockerNearKillerQEEvaluator_OnClosetHideEnter_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_20G3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.ItemConsumedQEEvaluator.OnItemConsumed
	 */
	struct UItemConsumedQEEvaluator_OnItemConsumed_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VRA6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.ItemUsedQEEvaluator.OnItemUsed
	 */
	struct UItemUsedQEEvaluator_OnItemUsed_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X6C3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved
	 */
	struct ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Params
	{
	public:
		class ACamperPlayer*                                       survivorRemoved;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
	 */
	struct ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       survivorAdded;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.NearTrackedActorComponent.StopTrackingActor
	 */
	struct UNearTrackedActorComponent_StopTrackingActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.NearTrackedActorComponent.StartTrackingActor
	 */
	struct UNearTrackedActorComponent_StartTrackingActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.NearTrackedActorComponent.SetDistanceThreshold
	 */
	struct UNearTrackedActorComponent_SetDistanceThreshold_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
	 */
	struct UNearTrackedActorComponent_OnIsWithinRangeChanged__DelegateSignature_Params
	{
	public:
		bool                                                       isWithinRange;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_468O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              trackedActor;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.NearTrackedActorComponent.IsActorWithinRange
	 */
	struct UNearTrackedActorComponent_IsActorWithinRange_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.OrangeGlyphComponent.Cosmetic_ApplyNegativeEffects
	 */
	struct UOrangeGlyphComponent_Cosmetic_ApplyNegativeEffects_Params
	{
	public:
		class ADBDPlayer*                                          affectedPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PinkGlyphComponent.OnRep_MarkedProgress
	 */
	struct UPinkGlyphComponent_OnRep_MarkedProgress_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.OnRep_IsPinkGlyphActive
	 */
	struct UPinkGlyphComponent_OnRep_IsPinkGlyphActive_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.OnRep_IsMarking
	 */
	struct UPinkGlyphComponent_OnRep_IsMarking_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.OnRep_HasLineOfSightToSurvivor
	 */
	struct UPinkGlyphComponent_OnRep_HasLineOfSightToSurvivor_Params
	{	};

	/**
	 * DelegateFunction Archives.PinkGlyphComponent.OnMarkProgressChanged__DelegateSignature
	 */
	struct UPinkGlyphComponent_OnMarkProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Archives.PinkGlyphComponent.OnGlyphEvent__DelegateSignature
	 */
	struct UPinkGlyphComponent_OnGlyphEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.Multicast_TeleportGlyph
	 */
	struct UPinkGlyphComponent_Multicast_TeleportGlyph_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PinkGlyphComponent.Multicast_StartGlyphPreTeleport
	 */
	struct UPinkGlyphComponent_Multicast_StartGlyphPreTeleport_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.Multicast_IsFullyMarkedSurvivor
	 */
	struct UPinkGlyphComponent_Multicast_IsFullyMarkedSurvivor_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.Multicast_EnterGlyphRange
	 */
	struct UPinkGlyphComponent_Multicast_EnterGlyphRange_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.IsMarking
	 */
	struct UPinkGlyphComponent_IsMarking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PinkGlyphComponent.Authority_TeleportGlyph
	 */
	struct UPinkGlyphComponent_Authority_TeleportGlyph_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.Authority_OnSurvivorInMovementRangeChanged
	 */
	struct UPinkGlyphComponent_Authority_OnSurvivorInMovementRangeChanged_Params
	{
	public:
		bool                                                       inRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PinkGlyphComponent.Authority_OnPlayerBreachedRangeThreshold
	 */
	struct UPinkGlyphComponent_Authority_OnPlayerBreachedRangeThreshold_Params
	{
	public:
		bool                                                       isWithinRange;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MG2X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              trackedActor;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PinkGlyphComponent.Authority_OnLevelReadyToPlay
	 */
	struct UPinkGlyphComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Archives.PinkGlyphComponent.Authority_OnDamageStateChanged
	 */
	struct UPinkGlyphComponent_Authority_OnDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         newDamageState;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PreventExitGateOpenQEEvaluator.OnSurvivorLeftMatch
	 */
	struct UPreventExitGateOpenQEEvaluator_OnSurvivorLeftMatch_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C2TI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PreventExitGateOpenQEEvaluator.OnSurvivorAdded
	 */
	struct UPreventExitGateOpenQEEvaluator_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       survivorAdded;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PreventExitGateOpenQEEvaluator.OnExitGateOpened
	 */
	struct UPreventExitGateOpenQEEvaluator_OnExitGateOpened_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HT0H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.StopGlyphMovement
	 */
	struct UPurpleGlyphComponent_StopGlyphMovement_Params
	{
	public:
		bool                                                       useDeceleration;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.StartGlyphMovement
	 */
	struct UPurpleGlyphComponent_StartGlyphMovement_Params
	{	};

	/**
	 * Function Archives.PurpleGlyphComponent.ResumeGlyphMovement
	 */
	struct UPurpleGlyphComponent_ResumeGlyphMovement_Params
	{
	public:
		bool                                                       useAcceleration;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.OnLevelReadyToPlay
	 */
	struct UPurpleGlyphComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Archives.PurpleGlyphComponent.GetTrackedPlayer
	 */
	struct UPurpleGlyphComponent_GetTrackedPlayer_Params
	{
	public:
		class ADBDPlayer*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.GetOwningGlyph
	 */
	struct UPurpleGlyphComponent_GetOwningGlyph_Params
	{
	public:
		class AGlyph*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration
	 */
	struct UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Params
	{
	public:
		struct FVector                                             goalLocation;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.Authority_MoveTo
	 */
	struct UPurpleGlyphComponent_Authority_MoveTo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.Authority_GetNextLocation
	 */
	struct UPurpleGlyphComponent_Authority_GetNextLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration
	 */
	struct UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Params
	{	};

	/**
	 * Function Archives.PurpleGlyphComponent.Authority_AbortMove
	 */
	struct UPurpleGlyphComponent_Authority_AbortMove_Params
	{	};

	/**
	 * Function Archives.QuestEventsHandler.OnPlayerGameStateChanged
	 */
	struct UQuestEventsHandler_OnPlayerGameStateChanged_Params
	{
	public:
		class ADBDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameState                                                 GameState;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.QuestEventsHandler.OnGameEnded
	 */
	struct UQuestEventsHandler_OnGameEnded_Params
	{
	public:
		EEndGameReason                                             Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.QuestEventsHandler.OnFinishedPlaying
	 */
	struct UQuestEventsHandler_OnFinishedPlaying_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DYQC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
	 */
	struct UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params
	{	};

	/**
	 * Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
	 */
	struct UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler
	 */
	struct UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Params
	{
	public:
		class UQuestEventsHandler*                                 QuestEventsHandler;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest
	 */
	struct USearchItemRarityQEEvaluator_OnItemSpawnedFromChest_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3ECT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess
	 */
	struct USkillCheckConsecutiveQEEvaluator_OnSkillCheckSuccess_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8WR4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail
	 */
	struct USkillCheckConsecutiveQEEvaluator_OnSkillCheckFail_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_06S1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameEventData                                      GameEventData;                                           // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Archives.WhiteGlyphBasementComponent.OnReadyForInteractionDelegate__DelegateSignature
	 */
	struct UWhiteGlyphBasementComponent_OnReadyForInteractionDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function Archives.WhiteGlyphBasementComponent.GetOwningGlyph
	 */
	struct UWhiteGlyphBasementComponent_GetOwningGlyph_Params
	{
	public:
		class AGlyph*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.WhiteGlyphSpawnerComponent.GetOwningGlyph
	 */
	struct UWhiteGlyphSpawnerComponent_GetOwningGlyph_Params
	{
	public:
		class AGlyph*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.WhiteGlyphSpawnerComponent.Authority_OnLevelReadyToPlay
	 */
	struct UWhiteGlyphSpawnerComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Archives.WhiteGlyphSurfaceComponent.Multicast_TeleportGlyph
	 */
	struct UWhiteGlyphSurfaceComponent_Multicast_TeleportGlyph_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.WhiteGlyphSurfaceComponent.GetOwningGlyph
	 */
	struct UWhiteGlyphSurfaceComponent_GetOwningGlyph_Params
	{
	public:
		class AGlyph*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX
	 */
	struct UYellowGlyphComponent_StartGlyphPreTeleportVFX_Params
	{	};

	/**
	 * Function Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX
	 */
	struct UYellowGlyphComponent_StartGlyphPostTeleportVFX_Params
	{	};

	/**
	 * Function Archives.YellowGlyphComponent.OnLevelReadyToPlay
	 */
	struct UYellowGlyphComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Archives.YellowGlyphComponent.Multicast_TeleportGlyph
	 */
	struct UYellowGlyphComponent_Multicast_TeleportGlyph_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.YellowGlyphComponent.GetOwningGlyph
	 */
	struct UYellowGlyphComponent_GetOwningGlyph_Params
	{
	public:
		class AGlyph*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Archives.YellowGlyphComponent.Authority_TeleportGlyph
	 */
	struct UYellowGlyphComponent_Authority_TeleportGlyph_Params
	{
	public:
		int32_t                                                    maxNumberOfTries;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
