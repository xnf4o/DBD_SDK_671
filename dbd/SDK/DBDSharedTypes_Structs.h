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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DBDSharedTypes.EPlayerRole
	 */
	enum class EPlayerRole : uint8_t
	{
		VE_None     = 0,
		VE_Slasher  = 1,
		VE_Camper   = 2,
		VE_Observer = 3,
		Max         = 4,
		MAX         = 5
	};

	/**
	 * Enum DBDSharedTypes.ECurrencyType
	 */
	enum class ECurrencyType : uint8_t
	{
		None                   = 0,
		BloodPoints            = 1,
		FearTokens             = 2,
		Cells                  = 3,
		HalloweenCoins         = 4,
		LunarNewYearCoins      = 5,
		HalloweenEventCurrency = 6,
		MAX                    = 7
	};

	/**
	 * Enum DBDSharedTypes.EItemRarity
	 */
	enum class EItemRarity : uint8_t
	{
		Common       = 0,
		Uncommon     = 1,
		Rare         = 2,
		VeryRare     = 3,
		UltraRare    = 4,
		Artifact     = 5,
		Spectral     = 6,
		Teachable    = 7,
		SpecialEvent = 8,
		Legendary    = 9,
		Epic         = 10,
		SuperEpic    = 11,
		UltraEpic    = 12,
		Count        = 13,
		None         = 14,
		MAX          = 15
	};

	/**
	 * Enum DBDSharedTypes.EProgressionType
	 */
	enum class EProgressionType : uint8_t
	{
		None            = 0,
		Stars           = 1,
		ArchiveRiftPass = 2,
		MAX             = 3
	};

	/**
	 * Enum DBDSharedTypes.ECharacterDifficulty
	 */
	enum class ECharacterDifficulty : uint8_t
	{
		VE_None         = 0,
		VE_Easy         = 1,
		VE_Intermediate = 2,
		VE_Hard         = 3,
		VE_VeryHard     = 4,
		VE_MAX          = 5
	};

	/**
	 * Enum DBDSharedTypes.ERewardType
	 */
	enum class ERewardType : uint8_t
	{
		None          = 0,
		Character     = 1,
		Currency      = 2,
		Customization = 3,
		Progression   = 4,
		MAX           = 5
	};

	/**
	 * Enum DBDSharedTypes.EQuestProgressionType
	 */
	enum class EQuestProgressionType : uint8_t
	{
		None       = 0,
		Action     = 1,
		Percentage = 2,
		Time       = 3,
		MAX        = 4
	};

	/**
	 * Enum DBDSharedTypes.EStoryNodeState
	 */
	enum class EStoryNodeState : uint8_t
	{
		Unavailable      = 0,
		AvailableDefault = 1,
		AvailableActive  = 2,
		AvailablePaused  = 3,
		Completed        = 4,
		Claimed          = 5,
		None             = 6,
		MAX              = 7
	};

	/**
	 * Enum DBDSharedTypes.EArchiveNodeType
	 */
	enum class EArchiveNodeType : uint8_t
	{
		Narrative  = 0,
		Task       = 1,
		Challenge  = 2,
		Contextual = 3,
		Reward     = 4,
		None       = 5,
		MAX        = 6
	};

	/**
	 * Enum DBDSharedTypes.EArchiveMenuState
	 */
	enum class EArchiveMenuState : uint8_t
	{
		CurrentTome = 0,
		EventTome   = 1,
		PastTome    = 2,
		Rift        = 3,
		Compendium  = 4,
		MAX         = 5
	};

	/**
	 * Enum DBDSharedTypes.EHelpType
	 */
	enum class EHelpType : uint8_t
	{
		General  = 0,
		Survivor = 1,
		Killer   = 2,
		MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EPopupButtonType
	 */
	enum class EPopupButtonType : uint8_t
	{
		Regression  = 0,
		Progression = 1,
		Alternative = 2,
		MAX         = 3
	};

	/**
	 * Enum DBDSharedTypes.ELoadoutSlot
	 */
	enum class ELoadoutSlot : uint8_t
	{
		SKIN       = 0,
		ITEM_POWER = 1,
		ADD_ON     = 2,
		ADD_ON01   = 3,
		PERK       = 4,
		PERK01     = 5,
		PERK02     = 6,
		PERK03     = 7,
		FAVOR      = 8,
		COUNT      = 9,
		MAX        = 10
	};

	/**
	 * Enum DBDSharedTypes.EControlMode
	 */
	enum class EControlMode : uint8_t
	{
		MOUSE_KB   = 0,
		XBOX       = 1,
		PS         = 2,
		VITA       = 3,
		SWITCH     = 4,
		STADIA     = 5,
		SWITCH_PRO = 6,
		ATLANTA    = 7,
		UNDEFINED  = 8,
		MAX        = 9
	};

	/**
	 * Enum DBDSharedTypes.EInputInteractionType
	 */
	enum class EInputInteractionType : uint8_t
	{
		VE_None                                        = 0,
		VE_Interact                                    = 1,
		VE_ItemUse                                     = 2,
		VE_FastInteract                                = 3,
		VE_AttackInteract                              = 4,
		VE_ItemInteract                                = 5,
		VE_Rush                                        = 6,
		VE_AbilityUse                                  = 7,
		VE_ActivatablePerk01                           = 8,
		VE_ActivatablePerk02                           = 9,
		VE_ActivatablePerk03                           = 10,
		VE_ActivatablePerk04                           = 11,
		VE_Run                                         = 12,
		VE_ItemDrop                                    = 13,
		VE_InteractMash                                = 14,
		VE_Struggle                                    = 15,
		VE_AbilityTwo                                  = 16,
		VE_Action                                      = 17,
		VE_Crouch                                      = 18,
		VE_ActionKiller                                = 19,
		VE_CancelCharge                                = 20,
		VE_WiggleLeft                                  = 21,
		VE_WiggleRight                                 = 22,
		VE_SecondaryAction                             = 23,
		VE_Gesture01                                   = 24,
		VE_Gesture02                                   = 25,
		VE_Gesture03                                   = 26,
		VE_Gesture04                                   = 27,
		VE_ExternalChainBlink                          = 28,
		VE_ExternalRequestClosetExitFast               = 29,
		VE_ExternalRequestClosetStun                   = 30,
		VE_ExternalRequestDestroyWithPowerAttack       = 31,
		VE_ExternalRequestDrop                         = 32,
		VE_ExternalRequestDropBySkillCheck             = 33,
		VE_ExternalRequestDropByStunning               = 34,
		VE_ExternalRequestDropByStunningWithFlashlight = 35,
		VE_ExternalRequestDropByStunningByPallet       = 36,
		VE_ExternalRequestDropByWiggleFree             = 37,
		VE_ExternalRequestEscape                       = 38,
		VE_ExternalRequestFlashlightStunUncloak        = 39,
		VE_ExternalRequestGeneratorTrapStun            = 40,
		VE_ExternalRequestHarpoonRifleStun             = 41,
		VE_ExternalRequestKickStun                     = 42,
		VE_ExternalRequestKillerCaughtInBearTrap       = 43,
		VE_ExternalRequestPalletStun                   = 44,
		VE_ExternalRequestPalletStunUncloak            = 45,
		VE_ExternalRequestPutToSleepStun               = 46,
		VE_ExternalRequestRBTExecute                   = 47,
		VE_ExternalRequestRBTExecuteAtExit             = 48,
		VE_ExternalRequestSacrifice                    = 49,
		VE_ExternalRequestSlashedOutOfTrap             = 50,
		VE_ExternalRequestStun                         = 51,
		VE_ExternalRequestStunBySkillCheck             = 52,
		VE_ExternalRequestStunEvilWithin               = 53,
		VE_ExternalRequestStunUncloak                  = 54,
		VE_Count                                       = 55,
		VE_MAX                                         = 56
	};

	/**
	 * Enum DBDSharedTypes.EGameState
	 */
	enum class EGameState : uint8_t
	{
		VE_Active            = 0,
		VE_Killed            = 1,
		VE_Escaped           = 2,
		VE_EscapedInjured    = 3,
		VE_Sacrificed        = 4,
		VE_None              = 5,
		VE_Disconnected      = 6,
		VE_ManuallyLeftMatch = 7,
		VE_BledOut           = 8,
		VE_MAX               = 9
	};

	/**
	 * Enum DBDSharedTypes.EAttackType
	 */
	enum class EAttackType : uint8_t
	{
		VE_None                     = 0,
		VE_Slash                    = 1,
		VE_Pounce                   = 2,
		VE_Chainsaw                 = 3,
		VE_Blink                    = 4,
		VE_LFChainsaw               = 5,
		VE_Ambush                   = 6,
		VE_Frenzy                   = 7,
		VE_GhostCrouch              = 8,
		VE_QatarDash                = 9,
		VE_OniBasicAttack           = 10,
		VE_OniDemonBasicAttack      = 11,
		VE_OniDemonPowerAttack      = 12,
		VE_OniDemonDashAttack       = 13,
		VE_ExecutionerTormentAttack = 14,
		VE_BlightDash               = 15,
		VE_TwinJump                 = 16,
		VE_K24WhipAttack            = 17,
		VE_MAX                      = 18
	};

	/**
	 * Enum DBDSharedTypes.EDetectionZone
	 */
	enum class EDetectionZone : uint8_t
	{
		VE_None                   = 0,
		VE_Slash                  = 1,
		VE_Pounce                 = 2,
		VE_Chainsaw               = 3,
		VE_Obstructed             = 4,
		VE_Interruption           = 5,
		VE_ChainsawLockExtended   = 6,
		VE_Damage                 = 7,
		VE_ChainsawObstruction    = 8,
		VE_Blink                  = 9,
		VE_ChainsawDamageExtended = 10,
		VE_Stalker                = 11,
		VE_Lunge                  = 12,
		VE_PowerAttack            = 13,
		VE_Max                    = 14,
		VE_Max01                  = 15
	};

	/**
	 * Enum DBDSharedTypes.EStunType
	 */
	enum class EStunType : uint8_t
	{
		VE_None          = 0,
		VE_Pallet        = 1,
		VE_BearTrap      = 2,
		VE_Flashlight    = 3,
		VE_WiggleFree    = 4,
		VE_EvilWithin    = 5,
		VE_Kicked        = 6,
		VE_Closet        = 7,
		VE_HarpoonRifle  = 8,
		VE_GeneratorTrap = 9,
		VE_MAX           = 10
	};

	/**
	 * Enum DBDSharedTypes.EInteractionAnimation
	 */
	enum class EInteractionAnimation : uint8_t
	{
		VE_None                     = 0,
		VE_Generator                = 1,
		VE_PullDownLeft             = 2,
		VE_PullDownRight            = 3,
		VE_Hiding                   = 4,
		VE_SearchCloset             = 5,
		VE_HealingOther             = 6,
		VE_OpenEscape               = 7,
		VE_StruggleFree             = 8,
		VE_HealOther                = 9,
		VE_HealSelf                 = 10,
		VE_PickedUp                 = 11,
		VE_Unused01                 = 12,
		VE_Dropped                  = 13,
		VE_Unused02                 = 14,
		VE_BeingHooked              = 15,
		VE_Sabotage                 = 16,
		VE_ChargeBlink              = 17,
		VE_ThrowFirecracker         = 18,
		VE_WakeUpOther              = 19,
		VE_RemoveReverseBearTrap    = 20,
		VE_DeadHard                 = 21,
		VE_DestroyPortal            = 22,
		VE_OniDash                  = 23,
		VE_PickUpAnniversaryCrown   = 24,
		VE_InteractWithGlyph        = 25,
		VE_InteractWithUnstableRift = 26,
		VE_OpenChest                = 27,
		VE_MAX                      = 28
	};

	/**
	 * Enum DBDSharedTypes.EPawnType
	 */
	enum class EPawnType : uint8_t
	{
		VE_None     = 0,
		VE_Killer   = 1,
		VE_Survivor = 2,
		VE_Sidekick = 3,
		VE_MAX      = 4
	};

	/**
	 * Enum DBDSharedTypes.EPlayerTeam
	 */
	enum class EPlayerTeam : uint8_t
	{
		VE_None     = 0,
		VE_Killer   = 1,
		VE_Survivor = 2,
		VE_MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EAnimNotifyType
	 */
	enum class EAnimNotifyType : uint8_t
	{
		VE_None    = 0,
		VE_Pickup  = 1,
		VE_Release = 2,
		VE_MAX     = 3
	};

	/**
	 * Enum DBDSharedTypes.EAttackSubstate
	 */
	enum class EAttackSubstate : uint8_t
	{
		VE_None          = 0,
		VE_Open          = 1,
		VE_Hitting       = 2,
		VE_HitSucceed    = 3,
		VE_HitMiss       = 4,
		VE_HitObstructed = 5,
		VE_Done          = 6,
		VE_MAX           = 7
	};

	/**
	 * Enum DBDSharedTypes.ECamperState
	 */
	enum class ECamperState : uint8_t
	{
		VE_None     = 0,
		VE_Navigate = 1,
		VE_Interact = 2,
		VE_MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.ELoadoutPartState
	 */
	enum class ELoadoutPartState : uint8_t
	{
		None       = 0,
		Default    = 1,
		InProgress = 2,
		Ready      = 3,
		Active     = 4,
		Vanished   = 5,
		MAX        = 6
	};

	/**
	 * Enum DBDSharedTypes.EItemAvailability
	 */
	enum class EItemAvailability : uint8_t
	{
		Available = 0,
		Disabled  = 1,
		Retired   = 2,
		MAX       = 3
	};

	/**
	 * Enum DBDSharedTypes.EStatusEffectType
	 */
	enum class EStatusEffectType : uint8_t
	{
		None   = 0,
		Buff   = 1,
		Debuff = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum DBDSharedTypes.EInventoryItemType
	 */
	enum class EInventoryItemType : uint8_t
	{
		None                 = 0,
		Item                 = 1,
		ItemAddOn            = 2,
		CamperPerk           = 3,
		Power                = 4,
		PowerAddOn           = 5,
		SlasherPerk          = 6,
		Favor                = 7,
		Customization        = 8,
		IridescentShardsPack = 9,
		AuricCellsPack       = 10,
		BloodPointsPack      = 11,
		FreeTicket           = 12,
		Chest                = 13,
		SuperChest           = 14,
		EntityBox            = 15,
		Count                = 16,
		MAX                  = 17
	};

	/**
	 * Enum DBDSharedTypes.EKillerAbilities
	 */
	enum class EKillerAbilities : uint8_t
	{
		VE_None            = 0,
		VE_SpawnTraps      = 1,
		VE_Cloak           = 2,
		VE_Chainsaw        = 3,
		VE_Blink           = 4,
		VE_PhantomTrap     = 5,
		VE_Stalker         = 6,
		VE_Killer07Ability = 7,
		VE_Killer08Ability = 8,
		VE_LFChainsaw      = 9,
		VE_InduceDreams    = 10,
		VE_ReverseBearTrap = 11,
		VE_GasBomb         = 12,
		VE_PhaseWalk       = 13,
		VE_Frenzy          = 14,
		VE_Vomit           = 15,
		VE_GhostStalker    = 16,
		VE_GroundPortals   = 17,
		VE_DemonMode       = 18,
		VE_HarpoonRifle    = 19,
		VE_TormentMode     = 20,
		VE_K21Power        = 21,
		VE_K22Power        = 22,
		VE_ThrowingKnives  = 23,
		VE_K24Power        = 24,
		VE_Zombies         = 25,
		VE_K25Power        = 26,
		VE_K26Power        = 27,
		VE_OnryoPower      = 28,
		VE_K28Power        = 29,
		VE_K29Power        = 30,
		VE_K30Power        = 31,
		VE_K31Power        = 32,
		VE_MAX             = 33
	};

	/**
	 * Enum DBDSharedTypes.EKillerMoodInfluence
	 */
	enum class EKillerMoodInfluence : uint8_t
	{
		VE_None      = 0,
		VE_Chuckles  = 1,
		VE_Banshee   = 2,
		VE_Hillbilly = 3,
		VE_Nurse     = 4,
		VE_Shape     = 5,
		VE_MAX       = 6
	};

	/**
	 * Enum DBDSharedTypes.ESkillCheckCustomType
	 */
	enum class ESkillCheckCustomType : uint8_t
	{
		VE_None                          = 0,
		VE_OnPickedUp                    = 1,
		VE_OnAttacked                    = 2,
		VE_DecisiveStrikeWhileWiggling   = 3,
		VE_GeneratorOvercharge1          = 4,
		VE_GeneratorOvercharge2          = 5,
		VE_GeneratorOvercharge3          = 6,
		VE_BrandNewPart                  = 7,
		VE_Struggle                      = 8,
		VE_OppressionPerkGeneratorKicked = 9,
		VE_SoulChemical                  = 10,
		VE_Wiggle                        = 11,
		VE_YellowGlyph                   = 12,
		VE_K27P03Continuous              = 13,
		VE_MAX                           = 14
	};

	/**
	 * Enum DBDSharedTypes.ELoadoutItemType
	 */
	enum class ELoadoutItemType : uint8_t
	{
		None        = 0,
		Medkit      = 1,
		Toolbox     = 2,
		Flashlight  = 3,
		Key         = 4,
		Map         = 5,
		Firecracker = 6,
		Flashbang   = 7,
		Count       = 8,
		MAX         = 9
	};

	/**
	 * Enum DBDSharedTypes.ELeanState
	 */
	enum class ELeanState : uint8_t
	{
		NotLeaning = 0,
		LeanLeft   = 1,
		LeanRight  = 2,
		MAX        = 3
	};

	/**
	 * Enum DBDSharedTypes.EQuestOperationType
	 */
	enum class EQuestOperationType : uint8_t
	{
		EQ   = 0,
		GEQ  = 1,
		LEQ  = 2,
		G    = 3,
		L    = 4,
		None = 5,
		MAX  = 6
	};

	/**
	 * Enum DBDSharedTypes.EArchivesEventStyle
	 */
	enum class EArchivesEventStyle : uint8_t
	{
		None      = 0,
		Halloween = 1,
		MAX       = 2
	};

	/**
	 * Enum DBDSharedTypes.EArchivesStoryLevelAnimationType
	 */
	enum class EArchivesStoryLevelAnimationType : uint8_t
	{
		Completed = 0,
		Mastered  = 1,
		MAX       = 2
	};

	/**
	 * Enum DBDSharedTypes.EArchivesStoryLevelStatus
	 */
	enum class EArchivesStoryLevelStatus : uint8_t
	{
		Locked      = 0,
		Unavailable = 1,
		Available   = 2,
		Completed   = 3,
		Mastered    = 4,
		MAX         = 5
	};

	/**
	 * Enum DBDSharedTypes.EArchiveNodeStatus
	 */
	enum class EArchiveNodeStatus : uint8_t
	{
		Closed    = 0,
		Completed = 1,
		Open      = 2,
		Paused    = 3,
		Waiting   = 4,
		Error     = 5,
		MAX       = 6
	};

	/**
	 * Enum DBDSharedTypes.EKillerMatchResult
	 */
	enum class EKillerMatchResult : uint8_t
	{
		EntityDispleased = 0,
		BrutalKiller     = 1,
		RuthlessKiller   = 2,
		MercilessKiller  = 3,
		MAX              = 4
	};

	/**
	 * Enum DBDSharedTypes.EDailyRitualTileState
	 */
	enum class EDailyRitualTileState : uint8_t
	{
		None      = 0,
		Dismissed = 1,
		Claimed   = 2,
		MAX       = 3
	};

	/**
	 * Enum DBDSharedTypes.EDailyRitualState
	 */
	enum class EDailyRitualState : uint8_t
	{
		Assigned             = 0,
		DismissedReplacement = 1,
		ClaimedReplacement   = 2,
		MAX                  = 3
	};

	/**
	 * Enum DBDSharedTypes.EGameType
	 */
	enum class EGameType : uint8_t
	{
		Online           = 0,
		KillYourFriends  = 1,
		Tutorial         = 2,
		TutorialBotMatch = 3,
		SecretBotMatch   = 4,
		None             = 5,
		MAX              = 6
	};

	/**
	 * Enum DBDSharedTypes.EDirectionalMinigameResult
	 */
	enum class EDirectionalMinigameResult : uint8_t
	{
		VE_SUCCESS   = 0,
		VE_FAILED    = 1,
		VE_CANCELLED = 2,
		VE_MAX       = 3
	};

	/**
	 * Enum DBDSharedTypes.EDirectionalInputKey
	 */
	enum class EDirectionalInputKey : uint8_t
	{
		VE_INVALID = 0,
		VE_UP      = 1,
		VE_DOWN    = 2,
		VE_RIGHT   = 3,
		VE_LEFT    = 4,
		VE_MAX     = 5
	};

	/**
	 * Enum DBDSharedTypes.EGender
	 */
	enum class EGender : uint8_t
	{
		VE_Male      = 0,
		VE_Female    = 1,
		VE_Multiple  = 2,
		VE_NotHuman  = 3,
		VE_Undefined = 4,
		VE_MAX       = 5
	};

	/**
	 * Enum DBDSharedTypes.EAttackSuccess
	 */
	enum class EAttackSuccess : uint8_t
	{
		VE_None       = 0,
		VE_Success    = 1,
		VE_Failure    = 2,
		VE_Obstructed = 3,
		VE_MAX        = 4
	};

	/**
	 * Enum DBDSharedTypes.EBlindType
	 */
	enum class EBlindType : uint8_t
	{
		VE_None               = 0,
		VE_Flashlight         = 1,
		VE_SacrificeSuspended = 2,
		VE_Firecracker        = 3,
		VE_MAX                = 4
	};

	/**
	 * Enum DBDSharedTypes.EDBDScoreCategory
	 */
	enum class EDBDScoreCategory : uint8_t
	{
		DBD_CamperScoreCat_Objectives   = 0,
		DBD_CamperScoreCat_Survival     = 1,
		DBD_CamperScoreCat_Altruism     = 2,
		DBD_CamperScoreCat_Boldness     = 3,
		DBD_SlasherScoreCat_Brutality   = 4,
		DBD_SlasherScoreCat_Deviousness = 5,
		DBD_SlasherScoreCat_Hunter      = 6,
		DBD_SlasherScoreCat_Sacrifice   = 7,
		DBD_CamperScoreCat_Untracked    = 8,
		DBD_CamperScoreCat_Streak       = 9,
		DBD_ScoreCat_SpecialEvents      = 10,
		DBD_ScoreCat_Bonus              = 11,
		DBD_ScoreCat_MatchIncentive     = 12,
		DBD_ScoreCat_BonusEvents        = 13,
		Count                           = 14,
		MAX                             = 15
	};

	/**
	 * Enum DBDSharedTypes.ELoadingTransitionType
	 */
	enum class ELoadingTransitionType : uint8_t
	{
		TravelToMainMenu = 0,
		TravelToInGame   = 1,
		TravelToSplash   = 2,
		MAX              = 3
	};

	/**
	 * Enum DBDSharedTypes.EFriendshipStatus
	 */
	enum class EFriendshipStatus : uint8_t
	{
		None            = 0,
		RequestSent     = 1,
		RequestReceived = 2,
		Friend          = 3,
		MAX             = 4
	};

	/**
	 * Enum DBDSharedTypes.EFriendSuggestionType
	 */
	enum class EFriendSuggestionType : uint8_t
	{
		None     = 0,
		Facebook = 1,
		Google   = 2,
		MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EMatchingStatusEffectType
	 */
	enum class EMatchingStatusEffectType : uint8_t
	{
		None   = 0,
		Buff   = 1,
		Debuff = 2,
		Any    = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum DBDSharedTypes.EBarColor
	 */
	enum class EBarColor : uint8_t
	{
		Default = 0,
		Yellow  = 1,
		Red     = 2,
		MAX     = 3
	};

	/**
	 * Enum DBDSharedTypes.EHudScreenIndicatorType
	 */
	enum class EHudScreenIndicatorType : uint8_t
	{
		None                       = 0,
		LoudNoise                  = 1,
		StealthBroken              = 2,
		Objective                  = 3,
		TerrorRadiusVisualFeedback = 4,
		MAX                        = 5
	};

	/**
	 * Enum DBDSharedTypes.EHudParentContainerType
	 */
	enum class EHudParentContainerType : uint8_t
	{
		Widget   = 0,
		Outer    = 1,
		Spectate = 2,
		MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EInteractionLayer
	 */
	enum class EInteractionLayer : uint8_t
	{
		VE_Camper  = 0,
		VE_Slasher = 1,
		VE_MAX     = 2
	};

	/**
	 * Enum DBDSharedTypes.EOnboardingTutorialType
	 */
	enum class EOnboardingTutorialType : uint8_t
	{
		TutorialLevel = 0,
		BotMatchLevel = 1,
		FinalReward   = 2,
		GoToMainMenu  = 3,
		MAX           = 4
	};

	/**
	 * Enum DBDSharedTypes.EOnboardingTutorialButtonStyle
	 */
	enum class EOnboardingTutorialButtonStyle : uint8_t
	{
		Default      = 0,
		Survivor     = 1,
		Killer       = 2,
		Reward       = 3,
		GoToMainMenu = 4,
		MAX          = 5
	};

	/**
	 * Enum DBDSharedTypes.EOnboardingStepStatus
	 */
	enum class EOnboardingStepStatus : uint8_t
	{
		Unavailable = 0,
		Open        = 1,
		Completed   = 2,
		MAX         = 3
	};

	/**
	 * Enum DBDSharedTypes.EConnectionQuality
	 */
	enum class EConnectionQuality : uint8_t
	{
		Good  = 0,
		Bad   = 1,
		Awful = 2,
		MAX   = 3
	};

	/**
	 * Enum DBDSharedTypes.EPlayerStateChangeType
	 */
	enum class EPlayerStateChangeType : uint8_t
	{
		None     = 0,
		Negative = 1,
		Neutral  = 2,
		Positive = 3,
		MAX      = 4
	};

	/**
	 * Enum DBDSharedTypes.ESicknessLevel
	 */
	enum class ESicknessLevel : uint8_t
	{
		Off        = 0,
		InProgress = 1,
		Full       = 2,
		MAX        = 3
	};

	/**
	 * Enum DBDSharedTypes.EAfflictionLevel
	 */
	enum class EAfflictionLevel : uint8_t
	{
		Off    = 0,
		Level1 = 1,
		Level2 = 2,
		Level3 = 3,
		MAX    = 4
	};

	/**
	 * Enum DBDSharedTypes.EBloodDisplayType
	 */
	enum class EBloodDisplayType : uint8_t
	{
		Hidden = 0,
		Bottom = 1,
		Top    = 2,
		MAX    = 3
	};

	/**
	 * Enum DBDSharedTypes.EPlayerStatus
	 */
	enum class EPlayerStatus : uint8_t
	{
		Default      = 0,
		Hook         = 1,
		Trap         = 2,
		Dead         = 3,
		Escaped      = 4,
		Injured      = 5,
		Carried      = 6,
		Crawling     = 7,
		Sacrificed   = 8,
		Disconnected = 9,
		InDeathBed   = 10,
		MAX          = 11
	};

	/**
	 * Enum DBDSharedTypes.EReverseBearTrapUIState
	 */
	enum class EReverseBearTrapUIState : uint8_t
	{
		Off    = 0,
		Stage1 = 1,
		Stage2 = 2,
		MAX    = 3
	};

	/**
	 * Enum DBDSharedTypes.ESleepingUIState
	 */
	enum class ESleepingUIState : uint8_t
	{
		Off           = 0,
		FallingAsleep = 1,
		Asleep        = 2,
		MAX           = 3
	};

	/**
	 * Enum DBDSharedTypes.EObsessionUIState
	 */
	enum class EObsessionUIState : uint8_t
	{
		Off    = 0,
		Target = 1,
		Chased = 2,
		Dead   = 3,
		MAX    = 4
	};

	/**
	 * Enum DBDSharedTypes.EThemeColorId
	 */
	enum class EThemeColorId : uint8_t
	{
		Invalid = 0,
		Blue    = 1,
		Green   = 2,
		Yellow  = 3,
		MAX     = 4
	};

	/**
	 * Enum DBDSharedTypes.ESubtitlesSize
	 */
	enum class ESubtitlesSize : uint8_t
	{
		Small   = 0,
		Default = 1,
		Large   = 2,
		Huge    = 3,
		MAX     = 4
	};

	/**
	 * Enum DBDSharedTypes.ESubtitlesBackgroundOpacity
	 */
	enum class ESubtitlesBackgroundOpacity : uint8_t
	{
		None    = 0,
		Default = 1,
		High    = 2,
		Opaque  = 3,
		MAX     = 4
	};

	/**
	 * Enum DBDSharedTypes.ESubtitlesPosition
	 */
	enum class ESubtitlesPosition : uint8_t
	{
		HUD        = 0,
		Menus      = 1,
		Cinematics = 2,
		MAX        = 3
	};

	/**
	 * Enum DBDSharedTypes.ETutorialObjectivePlayerActionMapping
	 */
	enum class ETutorialObjectivePlayerActionMapping : uint8_t
	{
		None                    = 0,
		Action_Camper           = 1,
		Interact_Camper         = 2,
		Interact_Slasher        = 3,
		Run_Camper              = 4,
		Attack_Slasher          = 5,
		SecondaryAction_Camper  = 6,
		AbilityTwo_Camper       = 7,
		ItemUse_Camper          = 8,
		Crouch                  = 9,
		ItemDrop_Camper         = 10,
		ItemUse_Slasher         = 11,
		ItemDrop_Slasher        = 12,
		Mash_Camper             = 13,
		FastInteract_Camper     = 14,
		SecondaryAction_Slasher = 15,
		Action_Slasher          = 16,
		Struggle                = 17,
		MoveAxes                = 18,
		LookAxes                = 19,
		Count                   = 20,
		MAX                     = 21
	};

	/**
	 * Enum DBDSharedTypes.EChatType
	 */
	enum class EChatType : uint8_t
	{
		None     = 0,
		PreGame  = 1,
		PostGame = 2,
		Party    = 3,
		MAX      = 4
	};

	/**
	 * Enum DBDSharedTypes.EStickerType
	 */
	enum class EStickerType : uint8_t
	{
		None  = 0,
		Emoji = 1,
		Text  = 2,
		MAX   = 3
	};

	/**
	 * Enum DBDSharedTypes.ELobbyState
	 */
	enum class ELobbyState : uint8_t
	{
		Searching = 0,
		Joined    = 1,
		Offering  = 2,
		Fog       = 3,
		MAX       = 4
	};

	/**
	 * Enum DBDSharedTypes.EPopupPriority
	 */
	enum class EPopupPriority : uint8_t
	{
		ErrorSystem      = 0,
		ErrorGameHigh    = 1,
		ErrorGameLow     = 2,
		InfoHigh         = 3,
		InfoLow          = 4,
		ErrorUIThreshold = 5,
		LowestPriority   = 6,
		MAX              = 7
	};

	/**
	 * Enum DBDSharedTypes.EHudComponent
	 */
	enum class EHudComponent : uint8_t
	{
		ACTION_PROMPT          = 0,
		ACTION_PROGRESS_BAR    = 1,
		GENERATOR_ICON         = 2,
		HATCH_ICON             = 3,
		EXIT_ICON              = 4,
		LOCAL_PLAYER_STATUS    = 5,
		OTHER_PLAYER_STATUSES  = 6,
		SURVIVOR_HOOK_COUNT    = 7,
		CROUCH_BUTTON          = 8,
		CENTER_INTERACT_BUTTON = 9,
		DIRECTIONAL_STICK      = 10,
		WIGGLE_BUTTONS         = 11,
		STRUGGLE_BUTTONS       = 12,
		POWER_BUTTON           = 13,
		ATTACK_BUTTON          = 14,
		OBJECTIVES             = 15,
		LOUD_NOISE_INDICATOR   = 16,
		SECOND_ABILITY_BUTTON  = 17,
		ACTION_BUTTON          = 18,
		CANCEL_BUTTON          = 19,
		DROP_SURVIVOR_BUTTON   = 20,
		LOOK_BACK_BUTTON       = 21,
		CENTER_ITEM_CONTAINER  = 22,
		MOVEMENT_LOCK          = 23,
		MAX                    = 24
	};

	/**
	 * Enum DBDSharedTypes.ETestBuildType
	 */
	enum class ETestBuildType : uint8_t
	{
		None                 = 0,
		PublicTestBuild      = 1,
		PaxBuild             = 2,
		ConsolePreAlphaBuild = 3,
		MAX                  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDSharedTypes.ArchiveTomeSkinData
	 * Size -> 0x0038
	 */
	struct FArchiveTomeSkinData
	{
	public:
		class UMaterialInterface*                                  ArchiveTitleBarSkinMaterial;                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ArchiveSideNavSkinMaterial;                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ArchiveSideNavSmokeSkinMaterial;                         // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ArchiveTabsSkinMaterial;                                 // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ArchiveProgressPanelSmokeSkinMaterial;                   // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ArchiveSkinColor;                                        // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.ArchiveTomeSkinUIDataRow
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FArchiveTomeSkinUIDataRow : public FDBDTableRowBaseWithId
	{
	public:
		EArchiveMenuState                                          menuState;                                               // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1HM[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FArchiveTomeSkinData                                ArchiveSkinData;                                         // 0x0020(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.CurrencyProgressionUIData
	 * Size -> 0x00C0
	 */
	struct FCurrencyProgressionUIData
	{
	public:
		class FText                                                TooltipTitle;                                            // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                TooltipDescription;                                      // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              TooltipHeaderMaterial[0x30];                             // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RewardBackgroundMaterial[0x30];                          // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RewardIcon[0x30];                                        // 0x0090(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDSharedTypes.ProgressionUIDataRow
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FProgressionUIDataRow : public FDBDTableRowBase
	{
	public:
		EProgressionType                                           ProgressionType;                                         // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHKT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurrencyProgressionUIData                          CurrencyProgressionUIData;                               // 0x0010(0x00C0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.CurrencyUIDataRow
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FCurrencyUIDataRow : public FDBDTableRowBase
	{
	public:
		ECurrencyType                                              CurrencyType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FONM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurrencyProgressionUIData                          CurrencyProgressionUIData;                               // 0x0010(0x00C0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.EventProgressionData
	 * Size -> 0x0014
	 */
	struct FEventProgressionData
	{
	public:
		unsigned char                                              UnknownData_URIU[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDSharedTypes.FriendData
	 * Size -> 0x0060
	 */
	struct FFriendData
	{
	public:
		unsigned char                                              UnknownData_A997[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDSharedTypes.HelpCategoryData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FHelpCategoryData : public FDBDTableRowBase
	{
	public:
		EHelpType                                                  Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QL6A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        TopicIds;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.HelpContextMappingData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FHelpContextMappingData : public FDBDTableRowBase
	{
	public:
		class FString                                              ContextName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        TopicIds;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.HelpTopicData
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FHelpTopicData : public FDBDTableRowBase
	{
	public:
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ImagePath;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VideoId;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0068(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDSharedTypes.RarityMaterialData
	 * Size -> 0x0018
	 */
	struct FRarityMaterialData
	{
	public:
		class UMaterialInterface*                                  LoadoutPartMaterial;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  CustomizationMaterial;                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  TooltipHeaderMaterial;                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.RarityMaterialDataRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRarityMaterialDataRow : public FDBDTableRowBase
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNRN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRarityMaterialData                                 RarityData;                                              // 0x0010(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.ScreenIndicatorViewData
	 * Size -> 0x0038
	 */
	struct FScreenIndicatorViewData
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHudScreenIndicatorType                                    IndicatorType;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQYU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ViewportSize;                                            // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInFront;                                               // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OH4[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenPosition;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      distance;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7U5O[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             AdditionalData;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
