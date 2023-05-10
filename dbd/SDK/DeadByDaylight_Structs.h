﻿#pragma once

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
	 * Enum DeadByDaylight.EEndGameReason
	 */
	enum class EEndGameReason : uint8_t
	{
		None                    = 0,
		Normal                  = 1,
		KillerLeft              = 2,
		PlayerLeftDuringLoading = 3,
		KillerLeftEarly         = 4,
		InvalidPlayerRoles      = 5,
		LoadingTimeout          = 6,
		MAX                     = 7
	};

	/**
	 * Enum DeadByDaylight.ETileSpawnPointType
	 */
	enum class ETileSpawnPointType : uint8_t
	{
		Unspecified        = 0,
		Survivor           = 1,
		SurvivorItem       = 2,
		Killer             = 3,
		KillerItem         = 4,
		InteractableObject = 5,
		BasementObject     = 6,
		FinisherMori       = 7,
		Count              = 8,
		MAX                = 9
	};

	/**
	 * Enum DeadByDaylight.EServerUseNetAsyncLoading
	 */
	enum class EServerUseNetAsyncLoading : uint8_t
	{
		NotSet = 0,
		Yes    = 1,
		No     = 2,
		MAX    = 3
	};

	/**
	 * Enum DeadByDaylight.EIntroState
	 */
	enum class EIntroState : uint8_t
	{
		WaitingToStart    = 0,
		RotationStarted   = 1,
		RotationCompleted = 2,
		PanInStarted      = 3,
		PanInCompleted    = 4,
		MAX               = 5
	};

	/**
	 * Enum DeadByDaylight.EDBDScoreTypes
	 */
	enum class EDBDScoreTypes : uint8_t
	{
		DBDCamperScore_SurviveHealthy                         = 0,
		DBDCamperScore_SurviveWounded                         = 1,
		DBDCamperScore_SurviveKO                              = 2,
		DBDCamperScore_UnlockHatch                            = 3,
		DBDCamperScore_EscapeThroughHatch                     = 4,
		DBDCamperScore_AllEscapeThroughHatch                  = 5,
		DBDCamperScore_EscapeCarry                            = 6,
		DBDCamperScore_SurviveStreakSmall                     = 7,
		DBDCamperScore_SurviveStreakBig                       = 8,
		DBDCamperScore_DamageStateChanged                     = 9,
		DBDCamperScore_NearFriendInNeed                       = 10,
		DBDCamperScore_NearFriendInNeed_PostExit              = 11,
		DBDCamperScore_FoundCamper                            = 12,
		DBDCamperScore_CoopObjectives                         = 13,
		DBDCamperScore_OpenDoorPercent                        = 14,
		DBDCamperScore_OpenDoor                               = 15,
		DBDCamperScore_GeneratorPercent                       = 16,
		DBDCamperScore_GeneratorSkillCheckSuccess             = 17,
		DBDCamperScore_GeneratorSkillCheckBonus               = 18,
		DBDCamperScore_SearchablePercent                      = 19,
		DBDCamperScore_SearchCompleteFinalContributionPercent = 20,
		DBDCamperScore_AddItemToMap                           = 21,
		DBDCamperScore_FixGenerator                           = 22,
		DBDCamperScore_FixSpecialMapGenerator                 = 23,
		DBDCamperScore_LastSurvivorFixGenerator               = 24,
		DBDCamperScore_RepairDamagedGenerator                 = 25,
		DBDCamperScore_PowerExitGates                         = 26,
		DBDCamperScore_CoopAltruism                           = 27,
		DBDCamperScore_HealPercent                            = 28,
		DBDCamperScore_HealPercent_PostExit                   = 29,
		DBDCamperScore_HealFromDying                          = 30,
		DBDCamperScore_HealFromDying_PostExit                 = 31,
		DBDCamperScore_HealFromInjured                        = 32,
		DBDCamperScore_HealFromInjured_PostExit               = 33,
		DBDCamperScore_HealSkillCheckSuccess                  = 34,
		DBDCamperScore_HealSkillCheckBonus                    = 35,
		DBDCamperScore_HealSelfPercent                        = 36,
		DBDCamperScore_HealSelfSkillCheckSuccess              = 37,
		DBDCamperScore_HealSelfSkillCheckBonus                = 38,
		DBDCamperScore_HitAfterHookSave                       = 39,
		DBDCamperScore_HitNearFriendInNeed                    = 40,
		DBDCamperScore_HitNearUnhookedFriendInNeed            = 41,
		DBDCamperScore_SabotageHook                           = 42,
		DBDCamperScore_SabotageHookSkillCheckSuccess          = 43,
		DBDCamperScore_SabotageHookSkillCheckBonus            = 44,
		DBDCamperScore_EscapeFromHook                         = 45,
		DBDCamperScore_HookStrugglePerSecond                  = 46,
		DBDCamperScore_SaveFromHook                           = 47,
		DBDCamperScore_SaveFromHook_PostExit                  = 48,
		DBDCamperScore_WasUnhooked                            = 49,
		DBDCamperScore_SabotageBearTrap                       = 50,
		DBDCamperScore_SabotageBearTrapSkillCheckSuccess      = 51,
		DBDCamperScore_SabotageBearTrapSkillCheckBonus        = 52,
		DBDCamperScore_DisableBearTrap                        = 53,
		DBDCamperScore_SaveFromBearTrap                       = 54,
		DBDCamperScore_SaveFromBearTrap_PostExit              = 55,
		DBDCamperScore_EscapeBearTrap                         = 56,
		DBDCamperScore_BasementChillingPerSecond              = 57,
		DBDCamperScore_CoopBoldness                           = 58,
		DBDCamperScore_SlasherStun                            = 59,
		DBDCamperScore_SlasherStunCarrying                    = 60,
		DBDCamperScore_SlasherBlind                           = 61,
		DBDCamperScore_SlasherBurnInvisibility                = 62,
		DBDCamperScore_ChasePerSecond                         = 63,
		DBDCamperScore_ChaseEscape                            = 64,
		DBDCamperScore_ChaseSteal                             = 65,
		DBDCamperScore_ChaseBlind                             = 66,
		DBDCamperScore_VaultInChase                           = 67,
		DBDCamperScore_NoiseDistraction                       = 68,
		DBDCamperScore_SprintingNearSlasherPerSecond          = 69,
		DBDCamperScore_UnhideNearSlasher                      = 70,
		DBDCamperScore_EscapeWhileChased                      = 71,
		DBDCamperScore_DestroyPhantomTrap                     = 72,
		DBDCamperScore_NewItem                                = 73,
		DBDCamperScore_StartMatchWithUltraRareItem            = 74,
		DBDCamperScore_ItemFrom                               = 75,
		DBDCamperScore_ExposerAdded                           = 76,
		DBDSlasherScore_Destroy                               = 77,
		DBDSlasherScore_Kill                                  = 78,
		DBDSlasherScore_BleedOut                              = 79,
		DBDSlasherScore_BleedOutPercent                       = 80,
		DBDSlasherScore_AttackSuccess                         = 81,
		DBDSlasherScore_AttackDeviousness                     = 82,
		DBDSlasherScore_InterruptGenerator                    = 83,
		DBDSlasherScore_InterruptWindow                       = 84,
		DBDSlasherScore_InterruptHide                         = 85,
		DBDSlasherScore_InterruptExit                         = 86,
		DBDSlasherScore_InterruptUnhook                       = 87,
		DBDSlasherScore_InterruptChest                        = 88,
		DBDSlasherScore_InterruptOpenHatch                    = 89,
		DBDSlasherScore_InterruptExitHatch                    = 90,
		DBDSlasherScore_FindHiding                            = 91,
		DBDSlasherScore_PlaceTrap                             = 92,
		DBDSlasherScore_Trap                                  = 93,
		DBDSlasherScore_TrapPickup                            = 94,
		DBDSlasherScore_Hook                                  = 95,
		DBDSlasherScore_SacrificePercent                      = 96,
		DBDSlasherScore_SacrificeSuccess                      = 97,
		DBDSlasherScore_SacrificedCount                       = 98,
		DBDSlasherScore_NoEscape                              = 99,
		DBDSlasherScore_ChaseStart                            = 100,
		DBDSlasherScore_ChasePerSecond                        = 101,
		DBDSlasherScore_CloakStalkPerSecond                   = 102,
		DBDSlasherScore_UncloakInView                         = 103,
		DBDSlasherScore_UncloakAttack                         = 104,
		DBDSlasherScore_EvadeInvisBurn                        = 105,
		DBDSlasherScore_EvadeBlind                            = 106,
		DBDSlasherScore_CamperDisconnect                      = 107,
		DBDSlasherScore_HitCamperWithChainsaw                 = 108,
		DBDSlasherScore_RunningWithChainsaw                   = 109,
		DBDSlasherScore_ChainBlinkAttack                      = 110,
		DBDSlasherScore_ChainBlinkInterrupt                   = 111,
		DBDSlasherScore_ChainBlinkInterruptAfter3             = 112,
		DBDSlasherScore_ChainBlinkStartChase                  = 113,
		DBDSlasherScore_StalkpointGained                      = 114,
		DBDSlasherScore_StalkerTierIncrement                  = 115,
		DBDSlasherScore_StalkerTierFirstTime                  = 116,
		DBDSlasherScore_StalkerKillAllCampers                 = 117,
		DBDSlasherScore_PhantomTrapSet                        = 118,
		DBDSlasherScore_PhantomTrapTrigger                    = 119,
		DBDSlasherScore_PhantomTrapTriggerAttack              = 120,
		DBDSlasherScore_PhantomTrapTeleportAttack             = 121,
		DBDSlasherScore_PhantomTrapTeleportAttackAllCampers   = 122,
		DBDSlasherScore_ThrillOfTheHunt                       = 123,
		DBDPlayerScore_BloodwebLevelUp                        = 124,
		DBDPlayerScore_BloodwebPrestigeLevelUp                = 125,
		DBDPlayerScore_BloodwebPrestige3LevelUp               = 126,
		DBDPlayerScore_AwardPips                              = 127,
		DBDPlayerScore_AddBloodpoints                         = 128,
		DBDPlayerScore_BloodpointsOneCategory                 = 129,
		DBDPlayerScore_MaxBloodpointsAllCategories            = 130,
		DBDPlayerScore_AddNewPerk                             = 131,
		DBDPlayerScore_PerkLevelUp                            = 132,
		DBDPlayerScore_BurnOfferingUltraRare                  = 133,
		DBDPlayerScore_StartGame                              = 134,
		DBDPlayerScore_UnlockRanking                          = 135,
		DBDPlayerScore_FinishWithPerks                        = 136,
		DBDCamperScore_CheatObjectives                        = 137,
		DBDCamperScore_CheatSurvival                          = 138,
		DBDCamperScore_CheatAltruism                          = 139,
		DBDCamperScore_CheatBoldness                          = 140,
		DBDSlasherScore_CheatSacrifice                        = 141,
		DBDSlasherScore_CheatBrutality                        = 142,
		DBDSlasherScore_CheatDeviousness                      = 143,
		DBDSlasherScore_CheatHunter                           = 144,
		DBDCamperScore_CleanseDullTotem                       = 145,
		DBDCamperScore_CleanseHexTotem                        = 146,
		DBDPlayerScore_BalancedLanding                        = 147,
		DBDPlayerScore_Lithe                                  = 148,
		DBDSlasherScore_DamageGenerator                       = 149,
		DBDSlasherScore_Vault                                 = 150,
		DBDCamperScore_StartInjuredBleedout                   = 151,
		DBDCamperScore_FullRecovery                           = 152,
		DBDCamperScore_FirstTimeDying                         = 153,
		DBDCamperScore_SecondTimeDying                        = 154,
		DBDCamperScore_FirecrackerDisturbance                 = 155,
		DBDCamperScore_GeneratorSkillCheckRuinBonus           = 156,
		DBDCamperScore_SlasherBurnBlink                       = 157,
		DBDCamperScore_DieSacrificed                          = 158,
		DBDCamperScore_DieBleedOut                            = 159,
		DBDCamperScore_DieKill                                = 160,
		DBDPlayerScore_EndGame                                = 161,
		DBDPlayerScore_EnterParadise                          = 162,
		DBDSlasherScore_CamperHookedFirstTime                 = 163,
		DBDSlasherScore_CamperEnterHookStrugglePhase          = 164,
		DBDSlasherScore_ElectroShockSurvivor                  = 165,
		DBDSlasherScore_BringAllSurvivorsToMadnessTier3       = 166,
		DBDSlasherScore_BringSurvivorUpOneMadnessTier         = 167,
		DBDSlasherScore_HitSurvivorAfterElectroShock          = 168,
		DBDSlasherScore_PickupCamper                          = 169,
		DBDSlasherScore_Blink                                 = 170,
		DBDSlasherScore_TeleportToPhantomTrap                 = 171,
		DBDSlasherScore_HatchetThrow                          = 172,
		DBDSlasherScore_HatchetHit                            = 173,
		DBDSlasherScore_HatchetSkillShotHit                   = 174,
		DBDSlasherScore_HatchetFarHit                         = 175,
		DBDCamperScore_QuickVault                             = 176,
		DBDCamperScore_QuickCloset                            = 177,
		DBDCamperScore_StartGeneratorRepair                   = 178,
		DBDCamperScore_StartCleansingTotem                    = 179,
		DBDCamperScore_FirstRepairSkillCheck                  = 180,
		DBDSlasherScore_CamperDisconnectedBeforeMatchStart    = 181,
		DBDSlasherScore_CamperDisconnectedDuringMatch         = 182,
		DBDCamperScore_NearFriendInNeed_GeneratorsComplete    = 183,
		DBDCamperScore_HealPercent_GeneratorsComplete         = 184,
		DBDCamperScore_HealFromDying_GeneratorsComplete       = 185,
		DBDCamperScore_SaveFromHook_GeneratorsComplete        = 186,
		DBDCamperScore_SaveFromBearTrap_GeneratorsComplete    = 187,
		DBDCamperScore_SnapOutOfIt                            = 188,
		DBDSlasherScore_HookInBasement                        = 189,
		DBDSlasherScore_LFChainsawHit                         = 190,
		DBDCamperScore_PalletDrop                             = 191,
		DBDCamperScore_Vault                                  = 192,
		DBDSlasherScore_StartChaseWithChainsawAttack          = 193,
		DBDSlasherScore_MissedAttackInChase                   = 194,
		DBDCamperScore_DodgeAndVault                          = 195,
		DBDCamperScore_BeginQuickVault                        = 196,
		DBDSlasherScore_StartChainsawAttack                   = 197,
		DBDCamperScore_WakeUpBySkillCheck                     = 198,
		DBDCamperScore_FallAsleep                             = 199,
		DBDCamperScore_WakeUpSelf                             = 200,
		DBDCamperScore_WakeUpOther                            = 201,
		DBDSlasherScore_RecentlyAsleepAttack                  = 202,
		DBDSlasherScore_SurvivorPartyOnBasementHooks          = 203,
		DBDCamperScore_LootBasementChest                      = 204,
		DBDPlayerScore_OpenMysteryBox                         = 205,
		DBDGameEvent_SurvivorDowned                           = 206,
		DBDGameEvent_SurvivorDied                             = 207,
		DBDGameEvent_KillerCloak                              = 208,
		DBDSlasherScore_SetReverseBearTrap                    = 209,
		DBDSlasherScore_AbductionDash                         = 210,
		DBDSlasherScore_DashHitSuccess                        = 211,
		DBDSlasherScore_KillWithReverseBearTrap               = 212,
		DBDCamperScore_SearchRBTKey                           = 213,
		DBDCamperScore_EscapeRBT                              = 214,
		DBDGameEvent_ReplacedGoodSkillCheckAsGreat            = 215,
		DBDCamperScore_RemoveReverseBearTrapSkillCheckSuccess = 216,
		DBDCamperScore_RemoveReverseBearTrapSkillCheckBonus   = 217,
		DBDSlasherScore_DamageGeneratorWhileHooked            = 218,
		DBDGameEvent_SurvivorDamaged                          = 219,
		DBDGameEvent_SurvivorHealed                           = 220,
		DBDGameEvent_Interruption                             = 221,
		DBDGameEvent_SurvivorFailedHealSkillcheck             = 222,
		DBDGameEvent_HookedSurvivorSacrificeBegin             = 223,
		DBDGameEvent_AcquireEventKillerCoin                   = 224,
		DBDGameEvent_AcquireEventSurvivorCoin                 = 225,
		DBDCamperScore_EventGeneratorFixed                    = 226,
		DBDSlasherScore_HookedOnEventHook                     = 227,
		DBDGameEvent_GeneratorProgress                        = 228,
		DBDSlasherScore_DownSmokedCamper                      = 229,
		DBDSlasherScore_HitSmokedCamper                       = 230,
		DBDSlasherScore_SurvivorEnterGasCloud                 = 231,
		DBDSlasherScore_BombDirectHit                         = 232,
		DBDSlasherScore_ThrowBomb                             = 233,
		DBDGameEvent_CoopAction                               = 234,
		DBDSlasherScore_StartActivePhaseWalk                  = 235,
		DBDScore_Count                                        = 236,
		Count                                                 = 237,
		MAX                                                   = 238
	};

	/**
	 * Enum DeadByDaylight.ECustomizationCategory
	 */
	enum class ECustomizationCategory : uint8_t
	{
		None          = 0,
		SurvivorHead  = 1,
		SurvivorTorso = 2,
		SurvivorLegs  = 3,
		KillerHead    = 4,
		KillerBody    = 5,
		KillerWeapon  = 6,
		Outfits       = 7,
		Charm         = 8,
		MAX           = 9
	};

	/**
	 * Enum DeadByDaylight.EOfferingCategory
	 */
	enum class EOfferingCategory : uint8_t
	{
		None        = 0,
		Bloodpoints = 1,
		Mapmods     = 2,
		Realms      = 3,
		Shrouds     = 4,
		Wards       = 5,
		CharacterXP = 6,
		Luck        = 7,
		Moris       = 8,
		MAX         = 9
	};

	/**
	 * Enum DeadByDaylight.EPerkCategory
	 */
	enum class EPerkCategory : uint8_t
	{
		None        = 0,
		Navigation  = 1,
		Perception  = 2,
		Safeguard   = 3,
		Concealment = 4,
		Strategy    = 5,
		Support     = 6,
		Adaptation  = 7,
		Chasing     = 8,
		Tracking    = 9,
		Cruelty     = 10,
		Trickery    = 11,
		Obstruction = 12,
		Hinderance  = 13,
		Enhancement = 14,
		MAX         = 15
	};

	/**
	 * Enum DeadByDaylight.ETeachableStatus
	 */
	enum class ETeachableStatus : uint8_t
	{
		Unknown           = 0,
		Locked            = 1,
		AvailableInShrine = 2,
		Checked           = 3,
		MAX               = 4
	};

	/**
	 * Enum DeadByDaylight.EEmblemQuality
	 */
	enum class EEmblemQuality : uint8_t
	{
		None       = 0,
		Bronze     = 1,
		Silver     = 2,
		Gold       = 3,
		Iridescent = 4,
		Count      = 5,
		MAX        = 6
	};

	/**
	 * Enum DeadByDaylight.ECamperDamageState
	 */
	enum class ECamperDamageState : uint8_t
	{
		VE_Healthy = 0,
		VE_Injured = 1,
		VE_KO      = 2,
		VE_Dead    = 3,
		VE_MAX     = 4
	};

	/**
	 * Enum DeadByDaylight.EHealthType
	 */
	enum class EHealthType : uint8_t
	{
		Alive      = 0,
		Sacrificed = 1,
		Killed     = 2,
		BledOut    = 3,
		Left_Game  = 4,
		MAX        = 5
	};

	/**
	 * Enum DeadByDaylight.ECamperImmobilizeState
	 */
	enum class ECamperImmobilizeState : uint8_t
	{
		VE_None       = 0,
		VE_Hooked     = 1,
		VE_Trapped    = 2,
		VE_Hiding     = 3,
		VE_Dead       = 4,
		VE_InDeathBed = 5,
		VE_MAX        = 6
	};

	/**
	 * Enum DeadByDaylight.EAttackZoneSet
	 */
	enum class EAttackZoneSet : uint8_t
	{
		VE_OriginalZones = 0,
		VE_WedgeZones    = 1,
		VE_MAX           = 2
	};

	/**
	 * Enum DeadByDaylight.ESlasherGuidedAction
	 */
	enum class ESlasherGuidedAction : uint8_t
	{
		VE_None        = 0,
		VE_Hooking     = 1,
		VE_PickingUp   = 2,
		VE_PuttingDown = 3,
		VE_MAX         = 4
	};

	/**
	 * Enum DeadByDaylight.EOfferingAnimState
	 */
	enum class EOfferingAnimState : uint8_t
	{
		None            = 0,
		Idle            = 1,
		Init            = 2,
		Reveal          = 3,
		ShowInteraction = 4,
		Burned          = 5,
		Returned        = 6,
		Cancel          = 7,
		Hidden          = 8,
		MAX             = 9
	};

	/**
	 * Enum DeadByDaylight.EGeneratorTrapType
	 */
	enum class EGeneratorTrapType : uint8_t
	{
		None      = 0,
		BlastMine = 1,
		Wiretap   = 2,
		MAX       = 3
	};

	/**
	 * Enum DeadByDaylight.EInteractionComparisonPriority
	 */
	enum class EInteractionComparisonPriority : uint8_t
	{
		Lower  = 0,
		Equal  = 1,
		Higher = 2,
		MAX    = 3
	};

	/**
	 * Enum DeadByDaylight.EInteractionOwnership
	 */
	enum class EInteractionOwnership : uint8_t
	{
		AnyCanUse       = 0,
		OnlyOwnerCanUse = 1,
		OwnerCannotUse  = 2,
		MAX             = 3
	};

	/**
	 * Enum DeadByDaylight.ESnapBackPositionType
	 */
	enum class ESnapBackPositionType : uint8_t
	{
		SnapBackToInitialPosition        = 0,
		SnapBackToOffsetPositionFromSnap = 1,
		MAX                              = 2
	};

	/**
	 * Enum DeadByDaylight.ESnapBackType
	 */
	enum class ESnapBackType : uint8_t
	{
		None                       = 0,
		Always                     = 1,
		OnInteractionCancelledOnly = 2,
		OnInteractionEndOnly       = 3,
		OnSurvivorDownedOnly       = 4,
		MAX                        = 5
	};

	/**
	 * Enum DeadByDaylight.ETotemState
	 */
	enum class ETotemState : uint8_t
	{
		Cleansed = 0,
		Dull     = 1,
		Hex      = 2,
		Boon     = 3,
		MAX      = 4
	};

	/**
	 * Enum DeadByDaylight.ETutorialStep
	 */
	enum class ETutorialStep : uint8_t
	{
		Survivor_NotStarted        = 0,
		Survivor_CompleteGenerator = 1,
		Survivor_EvadeKiller       = 2,
		Survivor_OnHook            = 3,
		Done                       = 4,
		Invalid                    = 5,
		MAX                        = 6
	};

	/**
	 * Enum DeadByDaylight.EInventoryType
	 */
	enum class EInventoryType : uint8_t
	{
		Main     = 0,
		Backpack = 1,
		MAX      = 2
	};

	/**
	 * Enum DeadByDaylight.EAttachToSocketNameEnum
	 */
	enum class EAttachToSocketNameEnum : uint8_t
	{
		ManualAttachment         = 0,
		HandItemSocket           = 1,
		Weapon_SocketLT          = 2,
		Weapon_SocketRT          = 3,
		LanternCollectableSocket = 4,
		Tentacle_SocketLT        = 5,
		MAX                      = 6
	};

	/**
	 * Enum DeadByDaylight.ECollectableState
	 */
	enum class ECollectableState : uint8_t
	{
		OnGround     = 0,
		Stored       = 1,
		Equipped     = 2,
		ToBeDropped  = 3,
		InSearchable = 4,
		MAX          = 5
	};

	/**
	 * Enum DeadByDaylight.ECollectableCategory
	 */
	enum class ECollectableCategory : uint8_t
	{
		Common = 0,
		Rare   = 1,
		MAX    = 2
	};

	/**
	 * Enum DeadByDaylight.EItemHandPosition
	 */
	enum class EItemHandPosition : uint8_t
	{
		None              = 0,
		HandleItem        = 1,
		AimItem           = 2,
		SmallItem         = 3,
		FirecrackerItem   = 4,
		VaccineItem       = 5,
		FragileObjectItem = 6,
		SprayBottleItem   = 7,
		MAX               = 8
	};

	/**
	 * Enum DeadByDaylight.EAtlantaItemProgressionBarEnum
	 */
	enum class EAtlantaItemProgressionBarEnum : uint8_t
	{
		PrimaryBar   = 0,
		SecondaryBar = 1,
		MAX          = 2
	};

	/**
	 * Enum DeadByDaylight.ELanternState
	 */
	enum class ELanternState : uint8_t
	{
		Collectable = 0,
		Collected   = 1,
		Destroyed   = 2,
		Destroyable = 3,
		MAX         = 4
	};

	/**
	 * Enum DeadByDaylight.EHitValidatorConfigName
	 */
	enum class EHitValidatorConfigName : uint8_t
	{
		Default           = 0,
		Hatchet           = 1,
		Bomb              = 2,
		Harpoon           = 3,
		Oni               = 4,
		Whip              = 5,
		DefaultProjectile = 6,
		MAX               = 7
	};

	/**
	 * Enum DeadByDaylight.EMovementCurveType
	 */
	enum class EMovementCurveType : uint8_t
	{
		AdditiveSpeedCurve       = 0,
		MultiplicativeSpeedCurve = 1,
		MAX                      = 2
	};

	/**
	 * Enum DeadByDaylight.EAudioCustomizationCategory
	 */
	enum class EAudioCustomizationCategory : uint8_t
	{
		AudioCharacterName     = 0,
		AudioCharacterSubName  = 1,
		AudioCharacterHead     = 2,
		AudioCharacterClothes  = 3,
		AudioCharacterShoes    = 4,
		AudioCharacterWeapon   = 5,
		AudioCharacterAmbiance = 6,
		AudioCharacterState    = 7,
		MAX                    = 8
	};

	/**
	 * Enum DeadByDaylight.EActionButtonState
	 */
	enum class EActionButtonState : uint8_t
	{
		Normal   = 0,
		Toggled  = 1,
		Disabled = 2,
		Hidden   = 3,
		MAX      = 4
	};

	/**
	 * Enum DeadByDaylight.EKnowledgeSharingType
	 */
	enum class EKnowledgeSharingType : uint8_t
	{
		Possessor = 0,
		Survivors = 1,
		Killers   = 2,
		All       = 3,
		MAX       = 4
	};

	/**
	 * Enum DeadByDaylight.EGameplayElementType
	 */
	enum class EGameplayElementType : uint8_t
	{
		Generic              = 0,
		MeatLocker_Small     = 1,
		TileLights           = 2,
		MeatLocker_Big       = 3,
		Searchable           = 4,
		EdgeObjects          = 5,
		LivingWorldObjects   = 6,
		Hatch                = 7,
		Bookshelves          = 8,
		Totems               = 9,
		QuadrantSpawn        = 10,
		EdgeObjectsBlocker   = 11,
		BreakableWalls       = 12,
		Escape               = 13,
		ThemeSpawner         = 14,
		Basement_Attachments = 15,
		Count                = 16,
		MAX                  = 17
	};

	/**
	 * Enum DeadByDaylight.EAIHideInLockerState
	 */
	enum class EAIHideInLockerState : uint8_t
	{
		WalkToLocker   = 0,
		GetIntoLocker  = 1,
		HidingInLocker = 2,
		MAX            = 3
	};

	/**
	 * Enum DeadByDaylight.EAIRepairGeneratorState
	 */
	enum class EAIRepairGeneratorState : uint8_t
	{
		FindAvailableGeneratorPosition = 0,
		WalkToGenerator                = 1,
		RotateTowardsGenerator         = 2,
		BeginGeneratorRepairs          = 3,
		RepairingGenerator             = 4,
		MAX                            = 5
	};

	/**
	 * Enum DeadByDaylight.EOwnershipBehaviour
	 */
	enum class EOwnershipBehaviour : uint8_t
	{
		Personal = 0,
		Shared   = 1,
		MAX      = 2
	};

	/**
	 * Enum DeadByDaylight.EStackingBehaviours
	 */
	enum class EStackingBehaviours : uint8_t
	{
		Stackable = 0,
		Override  = 1,
		MAX       = 2
	};

	/**
	 * Enum DeadByDaylight.EAdditiveBehaviour
	 */
	enum class EAdditiveBehaviour : uint8_t
	{
		AddValues = 0,
		MaxValue  = 1,
		MAX       = 2
	};

	/**
	 * Enum DeadByDaylight.EContextualType
	 */
	enum class EContextualType : uint8_t
	{
		None                    = 0,
		RedGlyph                = 1,
		BlueGlyph               = 2,
		YellowGlyph             = 3,
		PurpleGlyph             = 4,
		IceBlueGlyph            = 5,
		GreenGlyph              = 6,
		OrangeGlyph             = 7,
		PinkGlyph               = 8,
		GlyphUpperBound         = 9,
		ToxinPlantHalloween2020 = 10,
		PumpkinHalloween2021    = 11,
		CoreMemoryPortal        = 12,
		MAX                     = 13
	};

	/**
	 * Enum DeadByDaylight.EArchiveStoryType
	 */
	enum class EArchiveStoryType : uint8_t
	{
		NotSet       = 0,
		CurrentStory = 1,
		PastStory    = 2,
		EventStory   = 3,
		MAX          = 4
	};

	/**
	 * Enum DeadByDaylight.EArm
	 */
	enum class EArm : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum DeadByDaylight.EAtlantaControlTypeSetting
	 */
	enum class EAtlantaControlTypeSetting : uint8_t
	{
		CameraFullScreen = 0,
		SnapOnJoystick   = 1,
		MAX              = 2
	};

	/**
	 * Enum DeadByDaylight.EDeepLinkUid
	 */
	enum class EDeepLinkUid : uint8_t
	{
		NONE                    = 0,
		StorefrontSpecialOffers = 1,
		StorefrontFeatured      = 2,
		StorefrontPremium       = 3,
		StorefrontSubscription  = 4,
		Calendar                = 5,
		RitualsStarter          = 6,
		RitualsDaily            = 7,
		RitualsWeekly           = 8,
		MenuCharactersSurvivors = 9,
		MenuCharactersKillers   = 10,
		MenuCustomizations      = 11,
		MenuEvents              = 12,
		MenuFriends             = 13,
		Loadout                 = 14,
		BloodmarketSurvivors    = 15,
		BloodmarketKillers      = 16,
		External                = 17,
		MAX                     = 18
	};

	/**
	 * Enum DeadByDaylight.EAtlantaDisplayStandPosition
	 */
	enum class EAtlantaDisplayStandPosition : uint8_t
	{
		Forefront  = 0,
		Background = 1,
		MAX        = 2
	};

	/**
	 * Enum DeadByDaylight.EEventsType
	 */
	enum class EEventsType : uint8_t
	{
		Generic              = 0,
		Calendar             = 1,
		BonusACEvent         = 2,
		FirstPremiumPurchase = 3,
		MonthlyPass          = 4,
		Count                = 5,
		MAX                  = 6
	};

	/**
	 * Enum DeadByDaylight.EFreeTicketButtonState
	 */
	enum class EFreeTicketButtonState : uint8_t
	{
		Disabled = 0,
		Enabled  = 1,
		InEffect = 2,
		None     = 3,
		MAX      = 4
	};

	/**
	 * Enum DeadByDaylight.EQuitGameReason
	 */
	enum class EQuitGameReason : uint8_t
	{
		None     = 0,
		Logout   = 1,
		Suspend  = 2,
		Shutdown = 3,
		Count    = 4,
		MAX      = 5
	};

	/**
	 * Enum DeadByDaylight.EFrameRateLimitButtonSetting
	 */
	enum class EFrameRateLimitButtonSetting : uint8_t
	{
		ThirtyFPS = 0,
		SixtyFPS  = 1,
		MAX       = 2
	};

	/**
	 * Enum DeadByDaylight.EKillerSoundComparisonType
	 */
	enum class EKillerSoundComparisonType : uint8_t
	{
		Equal         = 0,
		IsGreaterThan = 1,
		IsLesserThan  = 2,
		MAX           = 3
	};

	/**
	 * Enum DeadByDaylight.EMobileLoginAuthContext
	 */
	enum class EMobileLoginAuthContext : uint8_t
	{
		Splash            = 0,
		OverlayMenu       = 1,
		ResumeFromSuspend = 2,
		MAX               = 3
	};

	/**
	 * Enum DeadByDaylight.EAtlantaRewardType
	 */
	enum class EAtlantaRewardType : uint8_t
	{
		Item                = 0,
		AddOn               = 1,
		Offering            = 2,
		BloodPoints         = 3,
		IridescentShards    = 4,
		AuricCells          = 5,
		Customization       = 6,
		FreeTicket          = 7,
		MysteryBox          = 8,
		Character           = 9,
		DuplicatesRefundKey = 10,
		Count               = 11,
		MAX                 = 12
	};

	/**
	 * Enum DeadByDaylight.EAtlantaRitualRewardUIType
	 */
	enum class EAtlantaRitualRewardUIType : uint8_t
	{
		Item             = 0,
		AddOn            = 1,
		Offering         = 2,
		BloodPoints      = 3,
		IridescentShards = 4,
		AuricCells       = 5,
		Customization    = 6,
		CustoTicket      = 7,
		MysteryBox       = 8,
		MAX              = 9
	};

	/**
	 * Enum DeadByDaylight.EAltantaRitualUIType
	 */
	enum class EAltantaRitualUIType : uint8_t
	{
		Single  = 0,
		Master  = 1,
		Special = 2,
		MAX     = 3
	};

	/**
	 * Enum DeadByDaylight.EAttackEventType
	 */
	enum class EAttackEventType : uint8_t
	{
		VE_None                 = 0,
		VE_BasicAttackAttempt   = 1,
		VE_BasicAttackHit       = 2,
		VE_SpecialAttackAttempt = 3,
		VE_SpecialAttackHit     = 4,
		VE_MAX                  = 5
	};

	/**
	 * Enum DeadByDaylight.EBPBonusType
	 */
	enum class EBPBonusType : uint8_t
	{
		None      = 0,
		Event     = 1,
		Offerings = 2,
		Others    = 3,
		MAX       = 4
	};

	/**
	 * Enum DeadByDaylight.EBloodchestType
	 */
	enum class EBloodchestType : uint8_t
	{
		None        = 0,
		Chest       = 1,
		SuperChests = 2,
		EntityBox   = 3,
		MAX         = 4
	};

	/**
	 * Enum DeadByDaylight.EBloodwebFillingMethod
	 */
	enum class EBloodwebFillingMethod : uint8_t
	{
		RestrictionsBasedOnData = 0,
		FillAll                 = 1,
		MAX                     = 2
	};

	/**
	 * Enum DeadByDaylight.EBloodMarketRefreshMethod
	 */
	enum class EBloodMarketRefreshMethod : uint8_t
	{
		Automatic = 0,
		Manual    = 1,
		MAX       = 2
	};

	/**
	 * Enum DeadByDaylight.EBloodwebDefinitionContentType
	 */
	enum class EBloodwebDefinitionContentType : uint8_t
	{
		Empty         = 0,
		Nodes         = 1,
		Paths         = 2,
		NodesAndPaths = 3,
		NodesNoPath   = 4,
		MAX           = 5
	};

	/**
	 * Enum DeadByDaylight.EBloodwebDistributionType
	 */
	enum class EBloodwebDistributionType : uint8_t
	{
		PerWeb  = 0,
		PerRing = 1,
		MAX     = 2
	};

	/**
	 * Enum DeadByDaylight.EBloodwebDataSource
	 */
	enum class EBloodwebDataSource : uint8_t
	{
		ByLevel = 0,
		ByRing  = 1,
		MAX     = 2
	};

	/**
	 * Enum DeadByDaylight.EBloodwebSaveReason
	 */
	enum class EBloodwebSaveReason : uint8_t
	{
		PayToRefresh  = 0,
		PrestigeUp    = 1,
		ShouldRebuild = 2,
		Cheat         = 3,
		MAX           = 4
	};

	/**
	 * Enum DeadByDaylight.EBloodwebNodeGateTypes
	 */
	enum class EBloodwebNodeGateTypes : uint8_t
	{
		RequiredRank = 0,
		RequiredItem = 1,
		Count        = 2,
		MAX          = 3
	};

	/**
	 * Enum DeadByDaylight.EBloodwebNodeContentType
	 */
	enum class EBloodwebNodeContentType : uint8_t
	{
		Empty                           = 0,
		Perks                           = 1,
		PerkBuffs_Do_Not_Use_Deprecated = 2,
		Offerings                       = 3,
		Items                           = 4,
		AddOn                           = 5,
		Chests                          = 6,
		PerksPacks                      = 7,
		IridiscentShards                = 8,
		AuricCells                      = 9,
		SuperChests                     = 10,
		CosmeticItems                   = 11,
		Bloodpoints                     = 12,
		FreeTicket                      = 13,
		EntityBox                       = 14,
		Count                           = 15,
		MAX                             = 16
	};

	/**
	 * Enum DeadByDaylight.EBloodwebNodeState
	 */
	enum class EBloodwebNodeState : uint8_t
	{
		Inactive                     = 0,
		Available                    = 1,
		Locked_Do_Not_Use_Deprecated = 2,
		Collected                    = 3,
		Consumed                     = 4,
		Count                        = 5,
		MAX                          = 6
	};

	/**
	 * Enum DeadByDaylight.EBloodwebRing
	 */
	enum class EBloodwebRing : uint8_t
	{
		CenterRing = 0,
		InnerRing  = 1,
		MiddleRing = 2,
		OuterRing  = 3,
		EntityRing = 4,
		RingCount  = 5,
		Count      = 6,
		MAX        = 7
	};

	/**
	 * Enum DeadByDaylight.EBreakableState
	 */
	enum class EBreakableState : uint8_t
	{
		Unbroken = 0,
		Broken   = 1,
		MAX      = 2
	};

	/**
	 * Enum DeadByDaylight.ECameraOffsetState
	 */
	enum class ECameraOffsetState : uint8_t
	{
		None      = 0,
		Default   = 1,
		Crouching = 2,
		Crawling  = 3,
		Carried   = 4,
		MAX       = 5
	};

	/**
	 * Enum DeadByDaylight.ECameraFadeState
	 */
	enum class ECameraFadeState : uint8_t
	{
		FadedIn   = 0,
		FadingOut = 1,
		FadedOut  = 2,
		FadingIn  = 3,
		MAX       = 4
	};

	/**
	 * Enum DeadByDaylight.EManualZoomType
	 */
	enum class EManualZoomType : uint8_t
	{
		None                  = 0,
		TargetZoomValue       = 1,
		CurveFloatProgression = 2,
		MAX                   = 3
	};

	/**
	 * Enum DeadByDaylight.EDBDCameraSocketID
	 */
	enum class EDBDCameraSocketID : uint8_t
	{
		VE_None      = 0,
		VE_Default   = 1,
		VE_Killcam   = 2,
		VE_Reaction  = 3,
		VE_Struggle  = 4,
		VE_Sacrifice = 5,
		VE_MAX       = 6
	};

	/**
	 * Enum DeadByDaylight.EEscapeType
	 */
	enum class EEscapeType : uint8_t
	{
		Escape_ExitGate         = 0,
		Escape_Hatch            = 1,
		Escape_KillerDisconnect = 2,
		Escape_MAX              = 3
	};

	/**
	 * Enum DeadByDaylight.ECDNPatchCompleteStatus
	 */
	enum class ECDNPatchCompleteStatus : uint8_t
	{
		Success                             = 0,
		NotEnoughDiskSpace                  = 1,
		PatchInstallDownloadError           = 2,
		PatchInstallFileConstructionFail    = 3,
		PatchInstallMoveFileToInstallFail   = 4,
		PatchInstallBuildVerifyFail         = 5,
		PatchInstallApplicationClosing      = 6,
		PatchInstallApplicationError        = 7,
		PatchInstallUserCanceled            = 8,
		PatchInstallPrerequisiteError       = 9,
		PatchInstallInitializationError     = 10,
		PatchInstallPathLengthExceeded      = 11,
		PatchInstallOutOfDiskSpace          = 12,
		PatchInstallUnknownError            = 13,
		FailureToMountContent               = 14,
		InstalledContentNotFound            = 15,
		InvalidPendingContent               = 16,
		CantFindContentToDownload           = 17,
		NoPatchForCurrentPlatformAndVersion = 18,
		FailureToRetrieveContent            = 19,
		CancelledByUser                     = 20,
		MAX                                 = 21
	};

	/**
	 * Enum DeadByDaylight.ECharacterToolItemType
	 */
	enum class ECharacterToolItemType : uint8_t
	{
		None        = 0,
		Outfit      = 1,
		OutfitPiece = 2,
		Charm       = 3,
		MAX         = 4
	};

	/**
	 * Enum DeadByDaylight.EChargeableInteractionBarType
	 */
	enum class EChargeableInteractionBarType : uint8_t
	{
		VE_Normal       = 0,
		VE_ProgressPips = 1,
		VE_MAX          = 2
	};

	/**
	 * Enum DeadByDaylight.ECharmCategory
	 */
	enum class ECharmCategory : uint8_t
	{
		None   = 0,
		Small  = 1,
		Medium = 2,
		Big    = 3,
		Short  = 4,
		Wide   = 5,
		Chibi  = 6,
		Square = 7,
		Tablet = 8,
		Perk   = 9,
		MAX    = 10
	};

	/**
	 * Enum DeadByDaylight.EContext
	 */
	enum class EContext : uint8_t
	{
		None                        = 0,
		ArchiveIntro                = 1,
		ArchiveMenu                 = 2,
		ArchivePastStories          = 3,
		ArchiveRewards              = 4,
		ArchiveStory                = 5,
		ArchiveCompendium           = 6,
		ArchiveRift                 = 7,
		ArchiveTome                 = 8,
		BloodWeb                    = 9,
		Character                   = 10,
		Consent                     = 11,
		Credits                     = 12,
		Customization               = 13,
		GameFlowOff                 = 14,
		Hud                         = 15,
		Inbox                       = 16,
		LightSensitivity            = 17,
		Loading                     = 18,
		Loadout                     = 19,
		Lobby                       = 20,
		LobbyOff                    = 21,
		MainMenu                    = 22,
		Onboarding                  = 23,
		RoleSelection               = 24,
		SpecialEventLoading         = 25,
		Spectate                    = 26,
		Splash                      = 27,
		Store                       = 28,
		Tally                       = 29,
		Tutorial                    = 30,
		ArchivePassPurchasePopup    = 31,
		ArchiveTierPurchasePopup    = 32,
		CrowdChoiceTugOfWarPopup    = 33,
		DailyRewardsPopup           = 34,
		EventEntryPopup             = 35,
		FearMarketPopup             = 36,
		FriendSearchPopup           = 37,
		GenericPopup                = 38,
		GenericTextInputPopup       = 39,
		NewContentPopup             = 40,
		ProcessingPopup             = 41,
		ReportPlayerPopup           = 42,
		SeasonEndPopup              = 43,
		SeasonEndRankRewardsPopup   = 44,
		UnlockPersonalPerksPopup    = 45,
		LoadoutMenuPopup            = 46,
		UMGArchivePassPurchasePopup = 47,
		UMGArchiveTierPurchasePopup = 48,
		UMGDailyRitualsPopup        = 49,
		UMGEventEntryPopup          = 50,
		UMGFearMarketPopup          = 51,
		UMGGenericPopup             = 52,
		UMGGenericTextInputPopup    = 53,
		UMGUnlockPersonalPerksPopup = 54,
		Count                       = 55,
		MAX                         = 56
	};

	/**
	 * Enum DeadByDaylight.EItemDomain
	 */
	enum class EItemDomain : uint8_t
	{
		Store = 0,
		Local = 1,
		Any   = 2,
		MAX   = 3
	};

	/**
	 * Enum DeadByDaylight.EOwnership
	 */
	enum class EOwnership : uint8_t
	{
		Owned    = 0,
		NotOwned = 1,
		Any      = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EHudEditorDragAxisOption
	 */
	enum class EHudEditorDragAxisOption : uint8_t
	{
		PositiveSide = 0,
		NegativeSide = 1,
		BothSide     = 2,
		MAX          = 3
	};

	/**
	 * Enum DeadByDaylight.EUMGDailyRewardWidgetState
	 */
	enum class EUMGDailyRewardWidgetState : uint8_t
	{
		Unknown                = 0,
		Locked                 = 1,
		ReadyToCollect         = 2,
		NewlyCollected         = 3,
		Collected              = 4,
		MysteryLocked          = 5,
		MysteryReadyToDiscover = 6,
		MysteryNewlyDiscovered = 7,
		MAX                    = 8
	};

	/**
	 * Enum DeadByDaylight.DBDScalabilityLevel
	 */
	enum class EDBDScalabilityLevel : uint8_t
	{
		DBDScalabilityLevelLOW                     = 0,
		DBDScalabilityLevelMEDIUM                  = 1,
		DBDScalabilityLevelHIGH                    = 2,
		DBDScalabilityLevelEPIC                    = 3,
		DBDScalabilityLevelULTRA                   = 4,
		DBDScalabilityLevelDBDScalabilityLevel_MAX = 5
	};

	/**
	 * Enum DeadByDaylight.EAIDodgeType
	 */
	enum class EAIDodgeType : uint8_t
	{
		FORWARD_SIDE_STEP  = 0,
		SIDE_STEP          = 1,
		BACKWARD_SIDE_STEP = 2,
		MAX                = 3
	};

	/**
	 * Enum DeadByDaylight.EInLockerSkillsContext
	 */
	enum class EInLockerSkillsContext : uint8_t
	{
		None              = 0,
		Goal              = 1,
		OutOfTerrorRadius = 2,
		MAX               = 3
	};

	/**
	 * Enum DeadByDaylight.EPawnInputPressTypes
	 */
	enum class EPawnInputPressTypes : uint8_t
	{
		None                   = 0,
		FastInteract           = 1,
		Interact               = 2,
		Struggle               = 3,
		Slash                  = 4,
		Attack                 = 5,
		Action                 = 6,
		SecondaryAction        = 7,
		UseItem                = 8,
		DropItem               = 9,
		Gesture01              = 10,
		Gesture02              = 11,
		Gesture03              = 12,
		Gesture04              = 13,
		Run                    = 14,
		RunningFastInteraction = 15,
		CancelMinigame         = 16,
		MAX                    = 17
	};

	/**
	 * Enum DeadByDaylight.EAIDifficultyLevel
	 */
	enum class EAIDifficultyLevel : uint8_t
	{
		VeryEasy  = 0,
		Easy      = 1,
		Medium    = 2,
		Hard      = 3,
		Suggested = 4,
		Random    = 5,
		None      = 6,
		Max       = 7,
		MAX       = 8
	};

	/**
	 * Enum DeadByDaylight.ECharacterMovementTypes
	 */
	enum class ECharacterMovementTypes : uint8_t
	{
		Normal = 0,
		Run    = 1,
		Crouch = 2,
		MAX    = 3
	};

	/**
	 * Enum DeadByDaylight.EAITerrorLevel
	 */
	enum class EAITerrorLevel : uint8_t
	{
		None     = 0,
		Low      = 1,
		Min      = 2,
		Medium   = 3,
		High     = 4,
		VeryHigh = 5,
		Max      = 6,
		MAX      = 7
	};

	/**
	 * Enum DeadByDaylight.ECamperGuidedAction
	 */
	enum class ECamperGuidedAction : uint8_t
	{
		VE_None                        = 0,
		VE_PrepBeingKilled             = 1,
		VE_BeingKilled                 = 2,
		VE_PrepGuidedAction            = 3,
		VE_BeingHelpedOffHookFront     = 4,
		VE_BeingHelpedOffHookBack      = 5,
		VE_BeingPickedUp               = 6,
		VE_BeingPutDown                = 7,
		VE_BeingCarried                = 8,
		VE_BeingPutOnHook              = 9,
		VE_BeingHealed                 = 10,
		VE_BeingPulledFromCloset       = 11,
		VE_BeingHelpedFromTrap         = 12,
		VE_AttachReverseBearTrap       = 13,
		VE_BeingMended                 = 14,
		VE_BeingInjectedWithSerum      = 15,
		VE_CarriedByK29Rush            = 16,
		VE_BeingCleansedOfK29Infection = 17,
		VE_MAX                         = 18
	};

	/**
	 * Enum DeadByDaylight.ECustomMovementMode
	 */
	enum class ECustomMovementMode : uint8_t
	{
		CUSTOM_MOVE_None     = 0,
		CUSTOM_MOVE_Snapping = 1,
		CUSTOM_MOVE_MAX      = 2
	};

	/**
	 * Enum DeadByDaylight.EDangerTraverseState
	 */
	enum class EDangerTraverseState : uint8_t
	{
		SAFE            = 0,
		WAIT            = 1,
		TRAVERSE_CROUCH = 2,
		TRAVERSE_RUN    = 3,
		UNDODGEABLE     = 4,
		MAX             = 5
	};

	/**
	 * Enum DeadByDaylight.EDiceRollType
	 */
	enum class EDiceRollType : uint8_t
	{
		VE_EscapeHook        = 0,
		VE_EscapeTrap        = 1,
		VE_TrapInflictsDying = 2,
		VE_TriggerSkillCheck = 3,
		VE_TriggerFootNoise  = 4,
		VE_TriggerCrowAlert  = 5,
		VE_MAX               = 6
	};

	/**
	 * Enum DeadByDaylight.EEmblemProgressionType
	 */
	enum class EEmblemProgressionType : uint8_t
	{
		SurvivorLightbringerStartingValue   = 0,
		SurvivorLightbringerGeneratorRepair = 1,
		SurvivorLightbringerTotemCleanse    = 2,
		SurvivorLightbringerKillerDiversion = 3,
		SurvivorLightbringerExitGameOpen    = 4,
		SurvivorUnbrokenTimeAlive           = 5,
		SurvivorBenevolentStartingValue     = 6,
		SurvivorBenevolentHealing           = 7,
		SurvivorBenevolentHooked            = 8,
		SurvivorBenevolentUnhook            = 9,
		SurvivorBenevolentPerformUnhook     = 10,
		SurvivorBenevolentSaveFromKiller    = 11,
		SurvivorBenevolentUnsafeUnhook      = 12,
		SurvivorBenevolentHitWhileCarrying  = 13,
		SurvivorEvaderStartingValue         = 14,
		SurvivorEvaderSneaking              = 15,
		SurvivorEvaderChaseWon              = 16,
		SurvivorEvaderChaseLost             = 17,
		SurvivorEvaderPalletStun            = 18,
		KillerGatekeeperStartingValue       = 19,
		KillerGatekeeperGeneratorDefense    = 20,
		KillerGatekeeperGatesClosed         = 21,
		KillerDevoutStartingValue           = 22,
		KillerDevoutSacrifice               = 23,
		KillerDevoutDisconnect              = 24,
		KillerDevoutMoris                   = 25,
		KillerDevoutAllSurvivorsHooked      = 26,
		KillerDevoutHooksBonus              = 27,
		KillerMaliciousStartingValue        = 28,
		KillerMaliciousInjuries             = 29,
		KillerMaliciousHookStages           = 30,
		KillerMaliciousInjuriesHealed       = 31,
		KillerMaliciousEscapeGrasp          = 32,
		KillerMaliciousDisconnect           = 33,
		KillerChaserStartingValue           = 34,
		KillerChaserSurvivorFound           = 35,
		KillerChaserSurvivorLost            = 36,
		KillerChaserHit                     = 37,
		KillerChaserChaseWon                = 38,
		KillerChaserProximityToHookPenalty  = 39,
		Invalid                             = 40,
		MAX                                 = 41
	};

	/**
	 * Enum DeadByDaylight.EEmblemEvaluation
	 */
	enum class EEmblemEvaluation : uint8_t
	{
		Authority = 0,
		Local     = 1,
		MAX       = 2
	};

	/**
	 * Enum DeadByDaylight.EErrorCodes
	 */
	enum class EErrorCodes : uint8_t
	{
		None                                  = 0,
		SavefileDeserializationFailure        = 1,
		SavefileDecryptionFailure             = 2,
		SavefileEmpty                         = 3,
		SavefileBadPlayerId                   = 4,
		SavefileEmptyPlayerUID                = 5,
		SavefileInvalidUniqueNetID            = 6,
		SavefileInvalidPlayerState            = 7,
		SavefileBackendError                  = 8,
		KrakenRankError                       = 9,
		KrakenRatingsError                    = 10,
		SavefileKrakenPlayerForbidden         = 11,
		SyncCachedCurrencyError               = 12,
		CurrencyTransactionError              = 13,
		StateDownloadFailed                   = 14,
		StatcacheDecryptionFailed             = 15,
		SavefilePlayerLoadUIDMismatch         = 16,
		SavefilePlayerStateUIDMismatch        = 17,
		CharacterMigrationGetError            = 18,
		CharacterMigrationGetError_BadProfile = 19,
		SavefileEncryptionFailure             = 20,
		SaveFailedInvalidData                 = 21,
		SaveFailedInvalidJSON                 = 22,
		SaveFailedDecodeDataString            = 23,
		SaveFailedCompressDataString          = 24,
		SaveFailedEncryptString               = 25,
		StatcacheEncryptionFailed             = 26,
		SaveFailedCloudErrorTimeout           = 27,
		JsonToPersistenDataFailed             = 28,
		SaveFailedCloudErrorAfterRetries      = 29,
		StateUploadFailed                     = 30,
		GetPlayerLevelRequestError            = 31,
		EarnPlayerXpRequestError              = 32,
		EarnPlayerXpParamError                = 33,
		EndOfMatchError                       = 34,
		OnboardingFailGet                     = 35,
		OnboardingFailUpdate                  = 36,
		OnboardingFailRequest                 = 37,
		MatchCancelledPlayerLeftDuringLoading = 38,
		MatchCancelledInvalidPlayerRoles      = 39,
		MatchCancelledLoadingTimeout          = 40,
		PakValidationFailed                   = 41,
		KrakenSdkMismatch                     = 42,
		MAX                                   = 43
	};

	/**
	 * Enum DeadByDaylight.EGameIntroSteps
	 */
	enum class EGameIntroSteps : uint8_t
	{
		Idling         = 0,
		PlayingIntro   = 1,
		LoopingCamView = 2,
		MAX            = 3
	};

	/**
	 * Enum DeadByDaylight.EDisconnectErrors
	 */
	enum class EDisconnectErrors : uint8_t
	{
		None                                 = 0,
		SteamAuthFailure                     = 1,
		SteamAuthFailureKickedFromServer     = 2,
		EACServerValidationFailure           = 3,
		EACValidationFailureKickedFromServer = 4,
		EACClientNotRunning                  = 5,
		EACClientIntegrityViolation          = 6,
		PlayerRemovedOnSuspend               = 7,
		LostConnectionToHost                 = 8,
		LostConnectionToProfileService       = 9,
		MirrorsUnscheduledSessionDestruction = 10,
		SessionKilledByMirrors               = 11,
		UnableToSaveProfileAfterRetries      = 12,
		UnableToGetPlayerLevel               = 13,
		UnableToEarnPlayerXp                 = 14,
		UnableToUpdatePips                   = 15,
		UnableToUpdateRatings                = 16,
		ClientProviderAuthenticationFailed   = 17,
		UnableToSyncCachedCurrency           = 18,
		OwnershipValidationFailure           = 19,
		UnableToUpdateEndOfMatchInfo         = 20,
		TravelFailure                        = 21,
		MAX                                  = 22
	};

	/**
	 * Enum DeadByDaylight.ELevelLoadingSteps
	 */
	enum class ELevelLoadingSteps : uint8_t
	{
		Invalid                                = 0,
		WaitingForProceduralLevelBuilder       = 1,
		WaitingForPlayersToBeSpawned           = 2,
		WaitingForAIPawnToBeSpawned            = 3,
		WaitingForAssetPreloader               = 4,
		WaitingForLoadoutAndTheme              = 5,
		WaitingForPIAToBeSpawnedAndInitialized = 6,
		WaitingForNavmeshComputationToStart    = 7,
		WaitingForNavmeshComputationToFinish   = 8,
		SetGameLoadedAndReadyToPlay            = 9,
		WaitingForIntroToBeDone                = 10,
		LoadingCompleted                       = 11,
		FirstLoadingStep                       = 12,
		Count                                  = 13,
		MAX                                    = 14
	};

	/**
	 * Enum DeadByDaylight.ELoadProgress
	 */
	enum class ELoadProgress : uint8_t
	{
		NotStarted                        = 0,
		Init                              = 1,
		SetupPIE                          = 2,
		ArtificialDelay                   = 3,
		DisconnectingPresencePlugin       = 4,
		ValidateOnlineSubsystem           = 5,
		CheckingPlatformService           = 6,
		PreMirrorsLogin                   = 7,
		ConnectingToMirrors               = 8,
		StartEAC                          = 9,
		LoadingAuthInfo                   = 10,
		LoadingBackendConfigs             = 11,
		SetupRichPresence                 = 12,
		LoadingBackendTunables            = 13,
		ApplyingCDNPatch                  = 14,
		AquiringExternalAuthentication    = 15,
		LoadingPlayerIndependentShopData  = 16,
		LicenseCache                      = 17,
		LoadingEvents                     = 18,
		LoadingInventory                  = 19,
		LoadingCinematics                 = 20,
		SyncingOwnedCharacters            = 21,
		LoadingProfile                    = 22,
		LoadingMirrorCurrencies           = 23,
		LoadingWallet                     = 24,
		LoadingConsent                    = 25,
		LoadingGameConfigs                = 26,
		LoadingCharacterXPTables          = 27,
		CheckingPendingTransactions       = 28,
		LoadingContentSchedule            = 29,
		LoadingNews                       = 30,
		SendingAnalytics                  = 31,
		LoadingDailyRituals               = 32,
		CalculatingLatencies              = 33,
		ValidateData                      = 34,
		ValidatingClientVersion           = 35,
		CheckingNeedForCurrencyMigration  = 36,
		MigratingCurrenciesToMirror       = 37,
		SyncingFriendsList                = 38,
		Complete                          = 39,
		Locating                          = 40,
		InitializingRTMConnection         = 41,
		LoadingStreamVideoData            = 42,
		CollectingFreeCatalogItems        = 43,
		DownloadDynamicContent            = 44,
		CheckingMobilePendingTransactions = 45,
		LoadMarketingBanners              = 46,
		LoadingSubscriptionStatus         = 47,
		RequestingTrackingAuthorization   = 48,
		LoadingExperimentalFeatures       = 49,
		LoadingMatchIncentives            = 50,
		LoadingLoadoutPresets             = 51,
		LoadingBackendCharacterData       = 52,
		LoadingPrestige                   = 53,
		UpdatingOwnedContent              = 54,
		LoadingShrine                     = 55,
		LoadingReportFeedback             = 56,
		LoadingGameConfigsDS              = 57,
		LoadingCatalog                    = 58,
		LoadingS3PrestigeData             = 59,
		MAX                               = 60
	};

	/**
	 * Enum DeadByDaylight.EProceduralDebugMode
	 */
	enum class EProceduralDebugMode : uint8_t
	{
		None       = 0,
		NoMap      = 1,
		TilesSmall = 2,
		TilesBig   = 3,
		Count      = 4,
		MAX        = 5
	};

	/**
	 * Enum DeadByDaylight.EAIEvadeLoopSides
	 */
	enum class EAIEvadeLoopSides : uint8_t
	{
		Left  = 0,
		Right = 1,
		Count = 2,
		MAX   = 3
	};

	/**
	 * Enum DeadByDaylight.EAuthoritativeMovementFlag
	 */
	enum class EAuthoritativeMovementFlag : uint8_t
	{
		INTERACTION                   = 0,
		SLASHED                       = 1,
		CHEAT                         = 2,
		DROPPED                       = 3,
		NOPUSH                        = 4,
		INTERACTIONNOPUSH             = 5,
		DREAMWORLD_NOSLASHERCOLLISION = 6,
		NOPUSHFORCED                  = 7,
		COUNT                         = 8,
		MAX                           = 9
	};

	/**
	 * Enum DeadByDaylight.EPlayerMovementDirection
	 */
	enum class EPlayerMovementDirection : uint8_t
	{
		Left     = 0,
		Right    = 1,
		Forward  = 2,
		Backward = 3,
		MAX      = 4
	};

	/**
	 * Enum DeadByDaylight.ECharacterStance
	 */
	enum class ECharacterStance : uint8_t
	{
		VE_Stand  = 0,
		VE_Crouch = 1,
		VE_Crawl  = 2,
		VE_MAX    = 3
	};

	/**
	 * Enum DeadByDaylight.EPlayerGameplayEventType
	 */
	enum class EPlayerGameplayEventType : uint8_t
	{
		VE_UnhookedOther  = 0,
		VE_UntrappedOther = 1,
		VE_HealedOther    = 2,
		VE_MAX            = 3
	};

	/**
	 * Enum DeadByDaylight.EVisibleMenuActorType
	 */
	enum class EVisibleMenuActorType : uint8_t
	{
		None  = 0,
		Pawn  = 1,
		Hook  = 2,
		Charm = 3,
		MAX   = 4
	};

	/**
	 * Enum DeadByDaylight.EKillerImmobilizedState
	 */
	enum class EKillerImmobilizedState : uint8_t
	{
		VE_None           = 0,
		VE_HidingInLocker = 1,
		VE_MAX            = 2
	};

	/**
	 * Enum DeadByDaylight.EToastInputType
	 */
	enum class EToastInputType : uint8_t
	{
		Toast_Accept = 0,
		Toast_Reject = 1,
		Toast_Close  = 2,
		Toast_MAX    = 3
	};

	/**
	 * Enum DeadByDaylight.EShadowSystem
	 */
	enum class EShadowSystem : uint8_t
	{
		CascadedShadowMap = 0,
		AdaptiveShadowMap = 1,
		MAX               = 2
	};

	/**
	 * Enum DeadByDaylight.EDisplayStandActorType
	 */
	enum class EDisplayStandActorType : uint8_t
	{
		None      = 0,
		Character = 1,
		Hook      = 2,
		Charm     = 3,
		MAX       = 4
	};

	/**
	 * Enum DeadByDaylight.EDoctorAbilityPhase
	 */
	enum class EDoctorAbilityPhase : uint8_t
	{
		VE_Charging = 0,
		VE_Firing   = 1,
		VE_None     = 2,
		VE_MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EDoctorAbilityType
	 */
	enum class EDoctorAbilityType : uint8_t
	{
		VE_ShockTherapy = 0,
		VE_StaticBlast  = 1,
		VE_None         = 2,
		VE_MAX          = 3
	};

	/**
	 * Enum DeadByDaylight.EEndGameScenarioTrigger
	 */
	enum class EEndGameScenarioTrigger : uint8_t
	{
		ClosedHatch  = 0,
		OpenedGate   = 1,
		CheatUsed    = 2,
		NotActivated = 3,
		MAX          = 4
	};

	/**
	 * Enum DeadByDaylight.EEnergyTypeEnum
	 */
	enum class EEnergyTypeEnum : uint8_t
	{
		EInvalid = 0,
		EBattery = 1,
		EHealth  = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EErrorEventType
	 */
	enum class EErrorEventType : uint8_t
	{
		FailedToCalculateRankProgress = 0,
		FailedToEarnPlayerXp          = 1,
		FailedToGrandBloodPoints      = 2,
		FailedToSyncWalletChanges     = 3,
		InvalidLobbyId                = 4,
		InvalidGameState              = 5,
		InvalidSessionId              = 6,
		MAX                           = 7
	};

	/**
	 * Enum DeadByDaylight.EEscapeDoorActivationMode
	 */
	enum class EEscapeDoorActivationMode : uint8_t
	{
		Standard = 0,
		Tutorial = 1,
		MAX      = 2
	};

	/**
	 * Enum DeadByDaylight.EConditionSubject
	 */
	enum class EConditionSubject : uint8_t
	{
		Instigator = 0,
		Target     = 1,
		MAX        = 2
	};

	/**
	 * Enum DeadByDaylight.EEventItemContentType
	 */
	enum class EEventItemContentType : uint8_t
	{
		None           = 0,
		Cells          = 1,
		Character      = 2,
		Customization  = 3,
		NameChangeCard = 4,
		FreeTicket     = 5,
		OtherCurrency  = 6,
		Item           = 7,
		Addon          = 8,
		Offering       = 9,
		Count          = 10,
		MAX            = 11
	};

	/**
	 * Enum DeadByDaylight.EFeaturedStoreContentType
	 */
	enum class EFeaturedStoreContentType : uint8_t
	{
		None          = 0,
		Character     = 1,
		Customization = 2,
		Outfit        = 3,
		Count         = 4,
		MAX           = 5
	};

	/**
	 * Enum DeadByDaylight.ELoadoutType
	 */
	enum class ELoadoutType : uint8_t
	{
		Item     = 0,
		Perk     = 1,
		Offering = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.FlickeringLightType
	 */
	enum class EFlickeringLightType : uint8_t
	{
		FlickeringLightTypePoint                   = 0,
		FlickeringLightTypeRect                    = 1,
		FlickeringLightTypeSpot                    = 2,
		FlickeringLightTypeFlickeringLightType_MAX = 3
	};

	/**
	 * Enum DeadByDaylight.EFriendUIRichPresence
	 */
	enum class EFriendUIRichPresence : uint8_t
	{
		Undefined = 0,
		InMenus   = 1,
		InLobby   = 2,
		InMatch   = 3,
		Connected = 4,
		Closing   = 5,
		MAX       = 6
	};

	/**
	 * Enum DeadByDaylight.EFriendUIStatus
	 */
	enum class EFriendUIStatus : uint8_t
	{
		Offline                = 0,
		Online                 = 1,
		PlayingDBD             = 2,
		PendingSentRequest     = 3,
		PendingReceivedRequest = 4,
		NotFriend              = 5,
		Self                   = 6,
		MAX                    = 7
	};

	/**
	 * Enum DeadByDaylight.EFlowTransitionType
	 */
	enum class EFlowTransitionType : uint8_t
	{
		Tally         = 0,
		OnlineLobby   = 1,
		PartyLobby    = 2,
		OfflineLobby  = 3,
		Splash        = 4,
		RoleSelection = 5,
		None          = 6,
		MAX           = 7
	};

	/**
	 * Enum DeadByDaylight.EUIFlowEvent
	 */
	enum class EUIFlowEvent : uint8_t
	{
		None                            = 0,
		AtlantaRoleSelectionScreenReady = 1,
		AtlantaNavigationScreenReady    = 2,
		InGameHudReady                  = 3,
		LoadingScreenReady              = 4,
		OfflineLobbyScreenReady         = 5,
		OnlineLobbyScreenReady          = 6,
		RoleSelectionScreenReady        = 7,
		SplashScreenReady               = 8,
		TallyScreenReady                = 9,
		PartyLobbyScreenReady           = 10,
		StoreScreenReady                = 11,
		MAX                             = 12
	};

	/**
	 * Enum DeadByDaylight.EWorldFlowEvent
	 */
	enum class EWorldFlowEvent : uint8_t
	{
		None                    = 0,
		GameLevelLoaded         = 1,
		LoadingGameLevel        = 2,
		LoadingOfflineParadise  = 3,
		LoadingOnlineLobbyLevel = 4,
		OfflineLobbyMapLoaded   = 5,
		OfflineParadiseLoaded   = 6,
		OnlineLobbyMapLoaded    = 7,
		StartScreenMapLoaded    = 8,
		LoadingSplashScreen     = 9,
		MAX                     = 10
	};

	/**
	 * Enum DeadByDaylight.EGameFlowStep
	 */
	enum class EGameFlowStep : uint8_t
	{
		None          = 0,
		InGame        = 1,
		OfflineLobby  = 2,
		OfflineTally  = 3,
		OnlineLobby   = 4,
		SplashScreen  = 5,
		PartyLobby    = 6,
		Store         = 7,
		RoleSelection = 8,
		MAX           = 9
	};

	/**
	 * Enum DeadByDaylight.EGameplayModifierSource
	 */
	enum class EGameplayModifierSource : uint8_t
	{
		VE_Perk               = 0,
		VE_StatusEffect       = 1,
		VE_Item               = 2,
		VE_ItemAddon          = 3,
		VE_All                = 4,
		VE_PerkOrStatusEffect = 5,
		VE_PerkStatusOrAddon  = 6,
		VE_MAX                = 7
	};

	/**
	 * Enum DeadByDaylight.EGateType
	 */
	enum class EGateType : uint8_t
	{
		VE_AndGate   = 0,
		VE_TimerGate = 1,
		VE_MAX       = 2
	};

	/**
	 * Enum DeadByDaylight.ETrapRemovedReason
	 */
	enum class ETrapRemovedReason : uint8_t
	{
		KillerInteraction = 0,
		LifetimeExpired   = 1,
		EndPlay           = 2,
		GeneratorRepaired = 3,
		OwnerLeft         = 4,
		MAX               = 5
	};

	/**
	 * Enum DeadByDaylight.EGestureID
	 */
	enum class EGestureID : uint8_t
	{
		POINT = 0,
		COME  = 1,
		MAX   = 2
	};

	/**
	 * Enum DeadByDaylight.EHatchState
	 */
	enum class EHatchState : uint8_t
	{
		Hidden       = 0,
		DefaultClose = 1,
		Opened       = 2,
		ForcedClose  = 3,
		MAX          = 4
	};

	/**
	 * Enum DeadByDaylight.EHintCategory
	 */
	enum class EHintCategory : uint8_t
	{
		Lore     = 0,
		Survivor = 1,
		Killer   = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EHookType
	 */
	enum class EHookType : uint8_t
	{
		Hook     = 0,
		DeathBed = 1,
		None     = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EProgressModifier
	 */
	enum class EProgressModifier : uint8_t
	{
		Default = 0,
		Buff    = 1,
		Debuff  = 2,
		MAX     = 3
	};

	/**
	 * Enum DeadByDaylight.EKeyBindingsType
	 */
	enum class EKeyBindingsType : uint8_t
	{
		None                    = 0,
		Run                     = 1,
		Crouch                  = 2,
		UseItem                 = 3,
		DropItemSurvivor        = 4,
		PickUpItem              = 5,
		ActionSurvivor          = 6,
		SecondaryActionSurvivor = 7,
		AbilitySurvivor         = 8,
		AbilityTwoSurvivor      = 9,
		Gesture1                = 10,
		Gesture2                = 11,
		WiggleRightSkillCheck   = 12,
		WiggleLeftSkillCheck    = 13,
		Attack                  = 14,
		Power                   = 15,
		SecondaryPower          = 16,
		DropSurvivor            = 17,
		PickUp                  = 18,
		Aim                     = 19,
		ForwardSurvivor         = 20,
		BackSurvivor            = 21,
		LeftSurvivor            = 22,
		RightSurvivor           = 23,
		CameraUpSurvivor        = 24,
		CameraDownSurvivor      = 25,
		CameraLeftSurvivor      = 26,
		CameraRightSurvivor     = 27,
		ForwardKiller           = 28,
		BackKiller              = 29,
		LeftKiller              = 30,
		RightKiller             = 31,
		AimKiller               = 32,
		CameraUpKiller          = 33,
		CameraDownKiller        = 34,
		CameraLeftKiller        = 35,
		CameraRightKiller       = 36,
		MAX                     = 37
	};

	/**
	 * Enum DeadByDaylight.EKeyBindingsCategories
	 */
	enum class EKeyBindingsCategories : uint8_t
	{
		None         = 0,
		Movement     = 1,
		Interactions = 2,
		Camera       = 3,
		Gestures     = 4,
		MAX          = 5
	};

	/**
	 * Enum DeadByDaylight.EKillerTutorialEndGameType
	 */
	enum class EKillerTutorialEndGameType : uint8_t
	{
		DeathByHook            = 0,
		DeathByEndGameCollapse = 1,
		MAX                    = 2
	};

	/**
	 * Enum DeadByDaylight.EKillerHeight
	 */
	enum class EKillerHeight : uint8_t
	{
		Short   = 0,
		Average = 1,
		Tall    = 2,
		MAX     = 3
	};

	/**
	 * Enum DeadByDaylight.EFPVTransitionStrategy
	 */
	enum class EFPVTransitionStrategy : uint8_t
	{
		TurnInvisible       = 0,
		SquishTorsoBackward = 1,
		MAX                 = 2
	};

	/**
	 * Enum DeadByDaylight.EPlayerDataType
	 */
	enum class EPlayerDataType : uint8_t
	{
		None              = 0,
		PlayerState       = 1,
		SocialPartyMember = 2,
		BotPartyMember    = 3,
		MAX               = 4
	};

	/**
	 * Enum DeadByDaylight.ELobbyWaitStopReason
	 */
	enum class ELobbyWaitStopReason : uint8_t
	{
		StartMatchWait  = 0,
		PlayerCancelled = 1,
		Unknown         = 2,
		MAX             = 3
	};

	/**
	 * Enum DeadByDaylight.EMainMenuButton
	 */
	enum class EMainMenuButton : uint8_t
	{
		News                        = 0,
		PlaySurvivor                = 1,
		PlayKiller                  = 2,
		KillYourFriends             = 3,
		DailyRituals                = 4,
		Store                       = 5,
		Settings                    = 6,
		Onboarding                  = 7,
		Credits                     = 8,
		QuitGame                    = 9,
		Friends                     = 10,
		Archives                    = 11,
		CrowdChoice                 = 12,
		PlaySurvivorFromCrowdChoice = 13,
		PlayKillerFromCrowdChoice   = 14,
		MAX                         = 15
	};

	/**
	 * Enum DeadByDaylight.EMapActorCategory
	 */
	enum class EMapActorCategory : uint8_t
	{
		None         = 0,
		Objective    = 1,
		Chest        = 2,
		BlackLock    = 3,
		KillerObject = 4,
		ExitGate     = 5,
		MAX          = 6
	};

	/**
	 * Enum DeadByDaylight.EQuadDirection
	 */
	enum class EQuadDirection : uint8_t
	{
		None  = 0,
		Up    = 1,
		Down  = 2,
		Left  = 3,
		Right = 4,
		Empty = 5,
		MAX   = 6
	};

	/**
	 * Enum DeadByDaylight.ETileVariation
	 */
	enum class ETileVariation : uint8_t
	{
		None      = 0,
		BlueTag   = 1,
		PinkTag   = 2,
		YellowTag = 3,
		GreenTag  = 4,
		Empty     = 5,
		MAX       = 6
	};

	/**
	 * Enum DeadByDaylight.EPathType
	 */
	enum class EPathType : uint8_t
	{
		None               = 0,
		Straight           = 1,
		DeadEnd            = 2,
		Corner             = 3,
		Crossroads         = 4,
		TJunction          = 5,
		OrientationOnly    = 6,
		Unspecified        = 7,
		OrientedCrossroads = 8,
		MAX                = 9
	};

	/**
	 * Enum DeadByDaylight.EDensity
	 */
	enum class EDensity : uint8_t
	{
		Unspecified = 0,
		Light       = 1,
		Moderate    = 2,
		Heavy       = 3,
		Empty       = 4,
		MAX         = 5
	};

	/**
	 * Enum DeadByDaylight.ETileType
	 */
	enum class ETileType : uint8_t
	{
		None      = 0,
		Blocker   = 1,
		Any       = 2,
		Forest    = 3,
		Building  = 4,
		Maze      = 5,
		Landmark  = 6,
		Signature = 7,
		MAX       = 8
	};

	/**
	 * Enum DeadByDaylight.EDirection
	 */
	enum class EDirection : uint8_t
	{
		Up        = 0,
		Down      = 1,
		Left      = 2,
		Right     = 3,
		UpLeft    = 4,
		UpRight   = 5,
		DownLeft  = 6,
		DownRight = 7,
		MAX       = 8
	};

	/**
	 * Enum DeadByDaylight.EBasementType
	 */
	enum class EBasementType : uint8_t
	{
		None         = 0,
		Basic        = 1,
		MainBuilding = 2,
		Shack        = 3,
		Count        = 4,
		MAX          = 5
	};

	/**
	 * Enum DeadByDaylight.EQuadrantSpawnType
	 */
	enum class EQuadrantSpawnType : uint8_t
	{
		L_Shape = 0,
		Square  = 1,
		Rect_X  = 2,
		Rect_Y  = 3,
		Rect    = 4,
		None    = 5,
		MAX     = 6
	};

	/**
	 * Enum DeadByDaylight.EQuadrant
	 */
	enum class EQuadrant : uint8_t
	{
		BottomRight = 0,
		BottomLeft  = 1,
		TopLeft     = 2,
		TopRight    = 3,
		Count       = 4,
		MAX         = 5
	};

	/**
	 * Enum DeadByDaylight.EQueueingState
	 */
	enum class EQueueingState : uint8_t
	{
		None                   = 0,
		Queueing               = 1,
		MatchCreated           = 2,
		MatchOpened            = 3,
		WaitingForTransactions = 4,
		Complete               = 5,
		MAX                    = 6
	};

	/**
	 * Enum DeadByDaylight.EPlayerAnimState
	 */
	enum class EPlayerAnimState : uint8_t
	{
		VE_Default       = 0,
		VE_Injured       = 1,
		VE_InjuredCrouch = 2,
		VE_Crouch        = 3,
		VE_MAX           = 4
	};

	/**
	 * Enum DeadByDaylight.EOfferingEffectType
	 */
	enum class EOfferingEffectType : uint8_t
	{
		SlasherPointsAll                     = 0,
		PointsBrutality                      = 1,
		PointsDeviouness                     = 2,
		PointsSacrice                        = 3,
		PointsHunting                        = 4,
		CamperPointsAll                      = 5,
		PointsObjective                      = 6,
		PointsSurvival                       = 7,
		PointsAltruism                       = 8,
		PointsBoldness                       = 9,
		SurvivorCharacterXP                  = 10,
		KillerCharacterXP                    = 11,
		CamperItemLostPrevention             = 12,
		KillerItemLostPrevention             = 13,
		Luck                                 = 14,
		IndustrialThemeSelectionModifier     = 15,
		JunkyardThemeSelectionModifier       = 16,
		FarmThemeSelectionModifier           = 17,
		SwampThemeSelectionModifier          = 18,
		MapModifier                          = 19,
		ChestCountModifier                   = 20,
		PortableHookCountModifier            = 21,
		LairCountModifier                    = 22,
		PlayerGrouping                       = 23,
		FarKiller                            = 24,
		KillAllowedModifier                  = 25,
		LightingModification                 = 26,
		FogModification                      = 27,
		LivingWorldObjectCountModifier       = 28,
		LivingWorldObjectMultModifier        = 29,
		KillLastSurvivor                     = 30,
		SuburbsThemeSelectionModifier        = 31,
		AsylumThemeSelectionModifier         = 32,
		KillerSelectionModifier              = 33,
		HospitalThemeSelectionModifier       = 34,
		KillAllowedAfterStrugglePhase        = 35,
		BorealThemeSelectionModifier         = 36,
		SpringwoodThemeSelectionModifier     = 37,
		FinlandThemeSelectionModifier        = 38,
		JapaneseCountrySideSelectionModifier = 39,
		KenyaThemeSelectionModifier          = 40,
		QatarThemeSelectionModifier          = 41,
		UkraineThemeSelectionModifier        = 42,
		WalesThemeSelectionModifier          = 43,
		CancelThemeSelectionModifier         = 44,
		BasementMainBuildingModifier         = 45,
		BasementShackModifier                = 46,
		HatchMainBuildingModifier            = 47,
		HatchShackModifier                   = 48,
		EclipseThemeSelectionModifier        = 49,
		IonThemeSelectionModifier            = 50,
		MeteorThemeSelectionModifier         = 51,
		QuantumThemeSelectionModifier        = 52,
		SpecialEvent                         = 53,
		ObjectSubsitution                    = 54,
		ObjectAddition                       = 55,
		MAX                                  = 56
	};

	/**
	 * Enum DeadByDaylight.EOfferingType
	 */
	enum class EOfferingType : uint8_t
	{
		None                 = 0,
		Atmosphere           = 1,
		Lighting             = 2,
		Points               = 3,
		Zone                 = 4,
		Position             = 5,
		Chest                = 6,
		Hook                 = 7,
		Protection           = 8,
		Hatch                = 9,
		Odds                 = 10,
		Killing              = 11,
		World                = 12,
		Luck                 = 13,
		Killer               = 14,
		ProceduralGeneration = 15,
		CharacterXP          = 16,
		Count                = 17,
		MAX                  = 18
	};

	/**
	 * Enum DeadByDaylight.EOfferingCombinationResult
	 */
	enum class EOfferingCombinationResult : uint8_t
	{
		None        = 0,
		Stacked     = 1,
		CoConsummed = 2,
		Overruling  = 3,
		Cancelled   = 4,
		MAX         = 5
	};

	/**
	 * Enum DeadByDaylight.EOfferingSequenceState
	 */
	enum class EOfferingSequenceState : uint8_t
	{
		SmokeIn         = 0,
		FadeOut         = 1,
		FadeIn          = 2,
		NotInitialized  = 3,
		Idle            = 4,
		Init            = 5,
		InitDone        = 6,
		Reveal          = 7,
		RevealDone      = 8,
		ShowInteraction = 9,
		Finalize        = 10,
		Done            = 11,
		MAX             = 12
	};

	/**
	 * Enum DeadByDaylight.EOfflineLobbyState
	 */
	enum class EOfflineLobbyState : uint8_t
	{
		None          = 0,
		RoleSelection = 1,
		OfflineLobby  = 2,
		Store         = 3,
		PartyLobby    = 4,
		Archives      = 5,
		MAX           = 6
	};

	/**
	 * Enum DeadByDaylight.EOniAttackType
	 */
	enum class EOniAttackType : uint8_t
	{
		VE_NotDemonMode     = 0,
		VE_DemonBasicAttack = 1,
		VE_DemonPowerAttack = 2,
		VE_DemonDashAttack  = 3,
		VE_MAX              = 4
	};

	/**
	 * Enum DeadByDaylight.EJoinSessionFailureType
	 */
	enum class EJoinSessionFailureType : uint8_t
	{
		None                      = 0,
		JoiningAlreadyStartedGame = 1,
		JoiningPrivateGame        = 2,
		JoiningAlreadyFullGame    = 3,
		JoiningInvitation         = 4,
		JoiningFailedOnDisconnect = 5,
		JoiningHostUnreachable    = 6,
		JoiningIncompatibleServer = 7,
		MatchmakingInfoExpired    = 8,
		MAX                       = 9
	};

	/**
	 * Enum DeadByDaylight.EOnlineOperation
	 */
	enum class EOnlineOperation : uint8_t
	{
		None                  = 0,
		HostGame              = 1,
		EndingSession         = 2,
		DestroyingSession     = 3,
		PreparingJoinGame     = 4,
		JoinGame              = 5,
		JoinCancelled         = 6,
		OnlineCheck           = 7,
		CancellingMatchmaking = 8,
		MAX                   = 9
	};

	/**
	 * Enum DeadByDaylight.EOverlayMode
	 */
	enum class EOverlayMode : uint8_t
	{
		Default          = 0,
		TrialOrTally     = 1,
		TutorialLevel    = 2,
		TutorialBotMatch = 3,
		MAX              = 4
	};

	/**
	 * Enum DeadByDaylight.EOverlayTabs
	 */
	enum class EOverlayTabs : uint8_t
	{
		Settings     = 0,
		Controls     = 1,
		Help         = 2,
		Survivors    = 3,
		CoreTabCount = 4,
		About        = 5,
		Language     = 6,
		MAX          = 7
	};

	/**
	 * Enum DeadByDaylight.EPalletStunZoneSideStrategy
	 */
	enum class EPalletStunZoneSideStrategy : uint8_t
	{
		OppositeSideToPlayerExecutingPulldown = 0,
		SameSideToPlayerExecutingPulldown     = 1,
		MAX                                   = 2
	};

	/**
	 * Enum DeadByDaylight.EPalletPushSideStrategy
	 */
	enum class EPalletPushSideStrategy : uint8_t
	{
		PushToClosestPalletSide               = 0,
		PushOppositeToPlayerExecutingPulldown = 1,
		MAX                                   = 2
	};

	/**
	 * Enum DeadByDaylight.EPalletSide
	 */
	enum class EPalletSide : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum DeadByDaylight.EPalletState
	 */
	enum class EPalletState : uint8_t
	{
		Up        = 0,
		Falling   = 1,
		Fallen    = 2,
		Destroyed = 3,
		MAX       = 4
	};

	/**
	 * Enum DeadByDaylight.EPerkTokenSoundStrategy
	 */
	enum class EPerkTokenSoundStrategy : uint8_t
	{
		NoSound                 = 0,
		SoundOnEveryTokenChange = 1,
		SoundOnReachMaxTokens   = 2,
		MAX                     = 3
	};

	/**
	 * Enum DeadByDaylight.EPerspectiveActivationCondition
	 */
	enum class EPerspectiveActivationCondition : uint8_t
	{
		LocallyControlled  = 0,
		LocallyObserved    = 1,
		NotLocallyObserved = 2,
		MAX                = 3
	};

	/**
	 * Enum DeadByDaylight.ESaveGameFailureType
	 */
	enum class ESaveGameFailureType : uint8_t
	{
		None                = 0,
		InvalidPlayerID     = 1,
		InvalidGameInstance = 2,
		NoServerConnection  = 3,
		UserNotSignedIn     = 4,
		Unknown             = 5,
		MAX                 = 6
	};

	/**
	 * Enum DeadByDaylight.ERequestState
	 */
	enum class ERequestState : uint8_t
	{
		VE_None    = 0,
		VE_Pending = 1,
		VE_Success = 2,
		VE_Fail    = 3,
		VE_MAX     = 4
	};

	/**
	 * Enum DeadByDaylight.EInteractionValidationState
	 */
	enum class EInteractionValidationState : uint8_t
	{
		None                  = 0,
		Predicted             = 1,
		Authorized            = 2,
		DeniedByRaceCondition = 3,
		DeniedByTimeout       = 4,
		DeniedByError         = 5,
		MAX                   = 6
	};

	/**
	 * Enum DeadByDaylight.ESecondaryActionRequestTypes
	 */
	enum class ESecondaryActionRequestTypes : uint8_t
	{
		None                               = 0,
		SecondaryActionRequested           = 1,
		SecondaryActionRequestedFromCancel = 2,
		MAX                                = 3
	};

	/**
	 * Enum DeadByDaylight.ERadialProgressBarType
	 */
	enum class ERadialProgressBarType : uint8_t
	{
		Yellow = 0,
		Red    = 1,
		MAX    = 2
	};

	/**
	 * Enum DeadByDaylight.EPreLevelGenerationModifierType
	 */
	enum class EPreLevelGenerationModifierType : uint8_t
	{
		None                    = 0,
		ModifyKillerObjectCount = 1,
		MAX                     = 2
	};

	/**
	 * Enum DeadByDaylight.EPrestigeRewardType
	 */
	enum class EPrestigeRewardType : uint8_t
	{
		None          = 0,
		Customization = 1,
		Perk          = 2,
		MAX           = 3
	};

	/**
	 * Enum DeadByDaylight.ESurvivorGrouping
	 */
	enum class ESurvivorGrouping : uint8_t
	{
		Invalid   = 0,
		Separated = 1,
		Grouped2  = 2,
		Grouped3  = 3,
		Grouped4  = 4,
		MAX       = 5
	};

	/**
	 * Enum DeadByDaylight.EscapeStrategyType
	 */
	enum class EscapeStrategyType : uint8_t
	{
		EscapeDoor  = 0,
		EscapeHatch = 1,
		MAX         = 2
	};

	/**
	 * Enum DeadByDaylight.ELevelBuildingState
	 */
	enum class ELevelBuildingState : uint8_t
	{
		NotInitialized                   = 0,
		WaitingForInitialSync            = 1,
		SyncSeeds                        = 2,
		GetAvailableItems                = 3,
		PendingGettingItems              = 4,
		GettingLevelsDone                = 5,
		PendingPremadeMapStreaming       = 6,
		GetThemedTiles                   = 7,
		PendingGettingTiles              = 8,
		SpawnEscapeTiles                 = 9,
		SpawnBasementTile                = 10,
		SpawningLevelTiles               = 11,
		SpawnInterTileElements           = 12,
		PendingInterTileElementsSpawning = 13,
		SpawningActors                   = 14,
		SpawningMultiPassActors          = 15,
		StallingForRemotes               = 16,
		BuildingDone                     = 17,
		BuildingStateCount               = 18,
		MAX                              = 19
	};

	/**
	 * Enum DeadByDaylight.EPromoPackContentType
	 */
	enum class EPromoPackContentType : uint8_t
	{
		None             = 0,
		Item             = 1,
		Addon            = 2,
		Offering         = 3,
		Character        = 4,
		Customization    = 5,
		Bonus            = 6,
		BloodPoints      = 7,
		IridescentShards = 8,
		FreeTicket       = 9,
		Count            = 10,
		MAX              = 11
	};

	/**
	 * Enum DeadByDaylight.EConditionNeedsType
	 */
	enum class EConditionNeedsType : uint8_t
	{
		AllTrue = 0,
		AnyTrue = 1,
		MAX     = 2
	};

	/**
	 * Enum DeadByDaylight.ERefundSource
	 */
	enum class ERefundSource : uint8_t
	{
		None          = 0,
		BloodMarket   = 1,
		DailyCalendar = 2,
		PromoPack     = 3,
		Count         = 4,
		MAX           = 5
	};

	/**
	 * Enum DeadByDaylight.ESaveGameErrorCategory
	 */
	enum class ESaveGameErrorCategory : uint8_t
	{
		EvaluateDisconnectPenalty = 0,
		SaveGameSaveError         = 1,
		SaveGameUnreadable        = 2,
		SaveGameValidation        = 3,
		SaveFailed                = 4,
		MAX                       = 5
	};

	/**
	 * Enum DeadByDaylight.EScreenType
	 */
	enum class EScreenType : uint8_t
	{
		eScaleformScreen   = 0,
		eUMGScreen         = 1,
		eMixedScaleformUMG = 2,
		MAX                = 3
	};

	/**
	 * Enum DeadByDaylight.EScreenshotToolBatchType
	 */
	enum class EScreenshotToolBatchType : uint8_t
	{
		SelectedItemOrOutfit          = 0,
		SelectedItemOrOutfitSeparated = 1,
		SelectedCharacterItems        = 2,
		SelectedCharacterOutfits      = 3,
		SelectedCharacterAndCategory  = 4,
		ItemsMissingIcon              = 5,
		OutfitMissingIcon             = 6,
		CharmsMissingIcon             = 7,
		PerkCharmsMissingIcon         = 8,
		AllItems                      = 9,
		AllOutfits                    = 10,
		AllCharms                     = 11,
		AllPerkCharms                 = 12,
		MAX                           = 13
	};

	/**
	 * Enum DeadByDaylight.EScreenshotToolState
	 */
	enum class EScreenshotToolState : uint8_t
	{
		None              = 0,
		PrepareBatch      = 1,
		GenerateIcons     = 2,
		ShaderCompilation = 3,
		GenerateAsset     = 4,
		SaveAndCheckout   = 5,
		FinishSuccess     = 6,
		FinishFail        = 7,
		FinishCancel      = 8,
		MAX               = 9
	};

	/**
	 * Enum DeadByDaylight.SettingsId
	 */
	enum class ESettingsId : uint8_t
	{
		SettingsIdNone                          = 0,
		SettingsIdLanguage                      = 1,
		SettingsIdRevokeConsent                 = 2,
		SettingsIdRevokeMarketingConsent        = 3,
		SettingsIdBhvrAccount                   = 4,
		SettingsIdAllowCrossplayGeneric         = 5,
		SettingsIdAllowCrossplayLive            = 6,
		SettingsIdAutoDeclineFriendRequests     = 7,
		SettingsIdPlayerId                      = 8,
		SettingsIdPartyPrivacy                  = 9,
		SettingsIdQuality                       = 10,
		SettingsIdAutoAdjust                    = 11,
		SettingsIdResolution                    = 12,
		SettingsIdFullScreen                    = 13,
		SettingsIdHUDConstrainedAspectRatio     = 14,
		SettingsIdMenuScaleFactor               = 15,
		SettingsIdHudScaleFactor                = 16,
		SettingsIdSkillCheckScaleFactor         = 17,
		SettingsIdLargeText                     = 18,
		SettingsIdBloodwebInteractionBehaviour  = 19,
		SettingsIdTerrorRadiusVisualFeedback    = 20,
		SettingsIdHUDPlayerNamesVisibility      = 21,
		SettingsIdHUDKillerHookCountVisibility  = 22,
		SettingsIdHUDScoreEventsVisibility      = 23,
		SettingsIdLegacyPrestigePortraits       = 24,
		SettingsIdChallengeProgression          = 25,
		SettingsIdChallengeCompletion           = 26,
		SettingsIdMainVolume                    = 27,
		SettingsIdMenuMusicVolume               = 28,
		SettingsIdHeadphones                    = 29,
		SettingsIdMuteOnFocusLost               = 30,
		SettingsIdInvertYAxis                   = 31,
		SettingsIdSurvivorMouseSensitivity      = 32,
		SettingsIdSurvivorControllerSensitivity = 33,
		SettingsIdKillerMouseSensitivity        = 34,
		SettingsIdKillerControllerSensitivity   = 35,
		SettingsIdSurvivorToggleInteractions    = 36,
		SettingsIdKillerToggleInteractions      = 37,
		SettingsIdSprintToCancel                = 38,
		SettingsIdColorBarPalette               = 39,
		SettingsIdColorBlindMode                = 40,
		SettingsIdColorBlindModeIntensity       = 41,
		SettingsIdBeginnerMode                  = 42,
		SettingsIdSubtitles                     = 43,
		SettingsIdSubtitlesBackgroundOpacity    = 44,
		SettingsIdSubtitlesSize                 = 45,
		SettingsIdIsAnonymousMode               = 46,
		SettingsIdHideYourName                  = 47,
		SettingsIdHideOtherNames                = 48,
		SettingsIdHiddenMatchmakingDelay        = 49,
		SettingsIdSurvivorCameraSensitivity     = 50,
		SettingsIdKillerCameraSensitivity       = 51,
		SettingsIdMenuMusicVolumeOn             = 52,
		SettingsIdMainVolumeOn                  = 53,
		SettingsIdAimAssist                     = 54,
		SettingsIdSurvivorQuickTurn             = 55,
		SettingsIdKillerQuickTurn               = 56,
		SettingsIdFPSLimit                      = 57,
		SettingsIdAutoQuality                   = 58,
		SettingsIdControlType                   = 59,
		SettingsIdCustomizedControls            = 60,
		SettingsIdDynamicResolution             = 61,
		SettingsIdInvertYAxisSurvivor           = 62,
		SettingsIdBetaWiggleSkillCheck          = 63,
		SettingsIdHapticsVibrationPS5           = 64,
		SettingsIdSettingsId_MAX                = 65
	};

	/**
	 * Enum DeadByDaylight.SettingsSubCategory
	 */
	enum class ESettingsSubCategory : uint8_t
	{
		SettingsSubCategoryNone                    = 0,
		SettingsSubCategoryLanguage                = 1,
		SettingsSubCategoryTutorial                = 2,
		SettingsSubCategoryPrivacy                 = 3,
		SettingsSubCategoryAccessibility           = 4,
		SettingsSubCategoryInGameText              = 5,
		SettingsSubCategoryColorBlindMode          = 6,
		SettingsSubCategoryMotionSickness          = 7,
		SettingsSubCategorySocial                  = 8,
		SettingsSubCategoryGameplayPrivacy         = 9,
		SettingsSubCategoryGraphics                = 10,
		SettingsSubCategoryUIHud                   = 11,
		SettingsSubCategoryAudio                   = 12,
		SettingsSubCategoryCommonControls          = 13,
		SettingsSubCategorySurvivorControls        = 14,
		SettingsSubCategoryKillerControls          = 15,
		SettingsSubCategoryAtlanta                 = 16,
		SettingsSubCategorySettingsSubCategory_MAX = 17
	};

	/**
	 * Enum DeadByDaylight.SettingsCategory
	 */
	enum class ESettingsCategory : uint8_t
	{
		SettingsCategoryNone                 = 0,
		SettingsCategoryGeneral              = 1,
		SettingsCategoryAccessibility        = 2,
		SettingsCategoryBeta                 = 3,
		SettingsCategoryOnline               = 4,
		SettingsCategoryGraphics             = 5,
		SettingsCategoryAudio                = 6,
		SettingsCategoryControls             = 7,
		SettingsCategoryAtlanta              = 8,
		SettingsCategorySettingsCategory_MAX = 9
	};

	/**
	 * Enum DeadByDaylight.SettingsType
	 */
	enum class ESettingsType : uint8_t
	{
		SettingsTypeNone             = 0,
		SettingsTypeButton           = 1,
		SettingsTypePlayerId         = 2,
		SettingsTypeNumericStepper   = 3,
		SettingsTypeDropdown         = 4,
		SettingsTypeColorBar         = 5,
		SettingsTypeTextStepper      = 6,
		SettingsTypeBoolTextStepper  = 7,
		SettingsTypeCheckbox         = 8,
		SettingsTypeSettingsType_MAX = 9
	};

	/**
	 * Enum DeadByDaylight.EStoreUITag
	 */
	enum class EStoreUITag : uint8_t
	{
		None = 0,
		Sale = 1,
		New  = 2,
		MAX  = 3
	};

	/**
	 * Enum DeadByDaylight.ECatalogStatus
	 */
	enum class ECatalogStatus : uint8_t
	{
		NotReady = 0,
		Updating = 1,
		Fetched  = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EShopLoadProgress
	 */
	enum class EShopLoadProgress : uint8_t
	{
		None                 = 0,
		LoadCatalog          = 1,
		LoadCurrencyPacks    = 2,
		PlatformStoreCatalog = 3,
		Inventory            = 4,
		Wallet               = 5,
		FeaturedPageContent  = 6,
		MAX                  = 7
	};

	/**
	 * Enum DeadByDaylight.ESoftBanReason
	 */
	enum class ESoftBanReason : uint8_t
	{
		Invalid         = 0,
		Harassment      = 1,
		Griefing        = 2,
		Exploits        = 3,
		Unsportsmanlike = 4,
		Count           = 5,
		MAX             = 6
	};

	/**
	 * Enum DeadByDaylight.ESoundIndicatorType
	 */
	enum class ESoundIndicatorType : uint8_t
	{
		None                             = 0,
		CloseNoiseIndicator              = 1,
		ExitOpenedIndicator              = 2,
		GeneratorIndicator               = 3,
		HatchIndicator                   = 4,
		HookedIndicator                  = 5,
		KillerCuesIndicator              = 6,
		GlobalSoundIndicator             = 7,
		DirectionalTerrorRadiusIndicator = 8,
		MAX                              = 9
	};

	/**
	 * Enum DeadByDaylight.ESpawnerStrategyType
	 */
	enum class ESpawnerStrategyType : uint8_t
	{
		None              = 0,
		NoAccumulation    = 1,
		LimitAccumulation = 2,
		MAX               = 3
	};

	/**
	 * Enum DeadByDaylight.EGiftSpecialAction
	 */
	enum class EGiftSpecialAction : uint8_t
	{
		None       = 0,
		KeplerGift = 1,
		MAX        = 2
	};

	/**
	 * Enum DeadByDaylight.ESpecialEventBloodwebChestCondition
	 */
	enum class ESpecialEventBloodwebChestCondition : uint8_t
	{
		Default       = 0,
		All           = 1,
		WithEventItem = 2,
		MAX           = 3
	};

	/**
	 * Enum DeadByDaylight.ESpecialEventDependency
	 */
	enum class ESpecialEventDependency : uint8_t
	{
		None     = 0,
		Archives = 1,
		MAX      = 2
	};

	/**
	 * Enum DeadByDaylight.ESpecialEventGameMode
	 */
	enum class ESpecialEventGameMode : uint8_t
	{
		Progression = 0,
		Counter     = 1,
		Collection  = 2,
		MAX         = 3
	};

	/**
	 * Enum DeadByDaylight.ESpecialEventStatus
	 */
	enum class ESpecialEventStatus : uint8_t
	{
		Inactive   = 0,
		ActiveMain = 1,
		ActivePost = 2,
		MAX        = 3
	};

	/**
	 * Enum DeadByDaylight.ELoadCompleteState
	 */
	enum class ELoadCompleteState : uint8_t
	{
		InProgress                                                 = 0,
		Success                                                    = 1,
		ReloginRequested                                           = 2,
		FailedEAC                                                  = 3,
		FailedRecoverable                                          = 4,
		FailedRecoverableProfileLoad                               = 5,
		FailedRecoverableWindowsStoreAndXboxLiveAccountNotMatching = 6,
		FailedUnequipedDisableditems                               = 7,
		FailedBlocking                                             = 8,
		FailedBlockingNoDBDServer                                  = 9,
		FailedBlockingNotConnected                                 = 10,
		FailedBlockedNoNetworkConnection                           = 11,
		FailedBlockingSharedAuthenticationFailed                   = 12,
		FailedBlockingPlatformNotAuthenticated                     = 13,
		FailedBlockingPlatformSubsystemNotInitialized              = 14,
		FailedBlockingOnlinePresenceNotInitialized                 = 15,
		FailedBlockingPlatformNetUniqueIdInvalid                   = 16,
		FailedBlockingInvalidLocalPlayer                           = 17,
		FailedBlockingInvalidGameObjects                           = 18,
		FailedBlockingInvalidSDA                                   = 19,
		FailedBlockingInvalidClientVersion                         = 20,
		FailedBlockingInvalidAtlantaClientVersion                  = 21,
		FailedBlockingWindowsStoreAccountNotLoggedIn               = 22,
		FailedBlockingSSLCACert                                    = 23,
		FailedBlockingUserCancelled                                = 24,
		FailedBlockingCDNFailure                                   = 25,
		FailedBlockingCDNContentError                              = 26,
		FailedBlockingCDNCantFindContentToDownload                 = 27,
		FailedBlockingCDNNoPatchForCurrentPlatformAndVersion       = 28,
		FailedBlockingCDNNotEnoughDiskSpace                        = 29,
		FailedBlockingCDNFailureToRetrieveContent                  = 30,
		FailedRecoverableCDNUserCancelled                          = 31,
		FailedBlockingVersionFileError                             = 32,
		FailedBlockingRTMConnection                                = 33,
		FailedBlockingMaxTrialsReached                             = 34,
		FailedBlockingMirrorsHealthCheckFailed                     = 35,
		FailedBlockingTutorialRewardsFetchFailed                   = 36,
		FailedBlockingUserBanned                                   = 37,
		FailedRetrieveStoreItem                                    = 38,
		MAX                                                        = 39
	};

	/**
	 * Enum DeadByDaylight.EExternalEffectSource
	 */
	enum class EExternalEffectSource : uint8_t
	{
		None  = 0,
		Perk  = 1,
		Addon = 2,
		Power = 3,
		MAX   = 4
	};

	/**
	 * Enum DeadByDaylight.EStoreBannerLocation
	 */
	enum class EStoreBannerLocation : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		MAX       = 2
	};

	/**
	 * Enum DeadByDaylight.EInteractionStorerRole
	 */
	enum class EInteractionStorerRole : uint8_t
	{
		None                        = 0,
		AuthorityAndAutonomousProxy = 1,
		ClientAndAutonomousProxy    = 2,
		AuthorityAndSimulatedProxy  = 3,
		ClientAndSimulatedProxy     = 4,
		MAX                         = 5
	};

	/**
	 * Enum DeadByDaylight.ETextBannerPosition
	 */
	enum class ETextBannerPosition : uint8_t
	{
		TopLeft      = 0,
		MiddleLeft   = 1,
		BottomLeft   = 2,
		MiddleRight  = 3,
		BottomRight  = 4,
		TopCenter    = 5,
		MiddleCenter = 6,
		BottomCenter = 7,
		MAX          = 8
	};

	/**
	 * Enum DeadByDaylight.EStorefrontState
	 */
	enum class EStorefrontState : uint8_t
	{
		None            = 0,
		Character       = 1,
		Currency        = 2,
		Customization   = 3,
		Featured        = 4,
		PromoPacks      = 5,
		ShrineOfSecrets = 6,
		Subscriptions   = 7,
		LandingPage     = 8,
		Count           = 9,
		MAX             = 10
	};

	/**
	 * Enum DeadByDaylight.EStoreTab
	 */
	enum class EStoreTab : uint8_t
	{
		Featured        = 0,
		Characters      = 1,
		Currency        = 2,
		ShrineOfSecrets = 3,
		TabCount        = 4,
		MAX             = 5
	};

	/**
	 * Enum DeadByDaylight.EStoreState
	 */
	enum class EStoreState : uint8_t
	{
		None               = 0,
		Featured           = 1,
		CharacterSelection = 2,
		CharacterStory     = 3,
		CharacterCatalog   = 4,
		BuyCurrency        = 5,
		ShrineOfSecrets    = 6,
		MAX                = 7
	};

	/**
	 * Enum DeadByDaylight.EStreamVideoDataType
	 */
	enum class EStreamVideoDataType : uint8_t
	{
		None             = 0,
		LoreCinematic    = 1,
		SurvivorTutorial = 2,
		KillerTutorial   = 3,
		Count            = 4,
		MAX              = 5
	};

	/**
	 * Enum DeadByDaylight.ESubscriptionRewardType
	 */
	enum class ESubscriptionRewardType : uint8_t
	{
		None             = 0,
		Item             = 1,
		AddOn            = 2,
		Offering         = 3,
		FreeTicket       = 4,
		AuricCells       = 5,
		BloodPoints      = 6,
		IridescentShards = 7,
		Customization    = 8,
		Character        = 9,
		MAX              = 10
	};

	/**
	 * Enum DeadByDaylight.EPromptType
	 */
	enum class EPromptType : uint8_t
	{
		None         = 0,
		ExitsPowered = 1,
		HatchSpawned = 2,
		HatchOpened  = 3,
		MAX          = 4
	};

	/**
	 * Enum DeadByDaylight.ENotificationStyle
	 */
	enum class ENotificationStyle : uint8_t
	{
		None     = 0,
		Game     = 1,
		Tutorial = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EPromptPriority
	 */
	enum class EPromptPriority : uint8_t
	{
		Tutorial = 0,
		High     = 1,
		Medium   = 2,
		Low      = 3,
		MAX      = 4
	};

	/**
	 * Enum DeadByDaylight.ELegalTermsStatus
	 */
	enum class ELegalTermsStatus : uint8_t
	{
		None     = 0,
		Accepted = 1,
		Declined = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EInventoryGridFormat
	 */
	enum class EInventoryGridFormat : uint8_t
	{
		DEFAULT   = 0,
		DIAMOND   = 1,
		HONEYCOMB = 2,
		MAX       = 3
	};

	/**
	 * Enum DeadByDaylight.ENewContentType
	 */
	enum class ENewContentType : uint8_t
	{
		FEATURED_CONTENT = 0,
		NEW_CONTENT      = 1,
		PATCH_NOTES      = 2,
		DEV_MESSAGES     = 3,
		EVENTS           = 4,
		SALE             = 5,
		COMMUNITY        = 6,
		MAX              = 7
	};

	/**
	 * Enum DeadByDaylight.EOverlayButtonOptions
	 */
	enum class EOverlayButtonOptions : uint8_t
	{
		HIDDEN   = 0,
		DISABLED = 1,
		ENABLED  = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EUIControllerType
	 */
	enum class EUIControllerType : uint8_t
	{
		KeyboardMouse = 0,
		GamePad       = 1,
		MAX           = 2
	};

	/**
	 * Enum DeadByDaylight.EForumLanguages
	 */
	enum class EForumLanguages : uint8_t
	{
		None = 0,
		de   = 1,
		en   = 2,
		ja   = 3,
		ru   = 4,
		MAX  = 5
	};

	/**
	 * Enum DeadByDaylight.ECustomerSupportLanguages
	 */
	enum class ECustomerSupportLanguages : uint8_t
	{
		None = 0,
		de   = 1,
		en   = 2,
		ja   = 3,
		ru   = 4,
		es   = 5,
		fr   = 6,
		it   = 7,
		ko   = 8,
		pl   = 9,
		pt   = 10,
		th   = 11,
		zh   = 12,
		MAX  = 13
	};

	/**
	 * Enum DeadByDaylight.ELeaveLobbyReason
	 */
	enum class ELeaveLobbyReason : uint8_t
	{
		eNone                  = 0,
		eNetworkDisconnect     = 1,
		eProfileOffline        = 2,
		eAppSuspended          = 3,
		eInternetDisconnect    = 4,
		eHostDisconnect        = 5,
		eDLCInstalled          = 6,
		eTrialExtensionExpired = 7,
		ePartyManagementError  = 8,
		MAX                    = 9
	};

	/**
	 * Enum DeadByDaylight.EFriendSearchPanelOption
	 */
	enum class EFriendSearchPanelOption : uint8_t
	{
		NotFoundPanel              = 0,
		NonFriendPanel             = 1,
		FriendRequestReceivedPanel = 2,
		FriendRequestSentPanel     = 3,
		FriendPanel                = 4,
		IsOwnerPanel               = 5,
		MAX                        = 6
	};

	/**
	 * Enum DeadByDaylight.EFriendContainerType
	 */
	enum class EFriendContainerType : uint8_t
	{
		Connected              = 0,
		Disconnected           = 1,
		PendingSentRequest     = 2,
		RecentlyPlayed         = 3,
		SocialSuggestions      = 4,
		PendingReceivedRequest = 5,
		QueriedPlayer          = 6,
		Unknown                = 7,
		MAX                    = 8
	};

	/**
	 * Enum DeadByDaylight.EPurchasePopupState
	 */
	enum class EPurchasePopupState : uint8_t
	{
		Information = 0,
		TitleOnly   = 1,
		MAX         = 2
	};

	/**
	 * Enum DeadByDaylight.EAtlantaSettingMenuType
	 */
	enum class EAtlantaSettingMenuType : uint8_t
	{
		TabButton     = 0,
		AlwaysDisplay = 1,
		MAX           = 2
	};

	/**
	 * Enum DeadByDaylight.EBloodStoreRowStyle
	 */
	enum class EBloodStoreRowStyle : uint8_t
	{
		FiveItemRow  = 0,
		ThreeItemRow = 1,
		MAX          = 2
	};

	/**
	 * Enum DeadByDaylight.EButtonType
	 */
	enum class EButtonType : uint8_t
	{
		None                  = 0,
		AttackButton          = 1,
		PowerButton           = 2,
		CancelButton          = 3,
		SettingsButton        = 4,
		SecondaryActionButton = 5,
		PowerAttackJoystick   = 6,
		MAX                   = 7
	};

	/**
	 * Enum DeadByDaylight.EInboxMessageTimeUnit
	 */
	enum class EInboxMessageTimeUnit : uint8_t
	{
		Days    = 0,
		Hours   = 1,
		Minutes = 2,
		MAX     = 3
	};

	/**
	 * Enum DeadByDaylight.EInboxMessageUIState
	 */
	enum class EInboxMessageUIState : uint8_t
	{
		New      = 0,
		Read     = 1,
		Archived = 2,
		MAX      = 3
	};

	/**
	 * Enum DeadByDaylight.EInboxMessageUIType
	 */
	enum class EInboxMessageUIType : uint8_t
	{
		None    = 0,
		Social  = 1,
		Rewards = 2,
		News    = 3,
		MAX     = 4
	};

	/**
	 * Enum DeadByDaylight.EPartyPlayerSlotWidgetState
	 */
	enum class EPartyPlayerSlotWidgetState : uint8_t
	{
		None     = 0,
		Empty    = 1,
		NotReady = 2,
		Ready    = 3,
		Hidden   = 4,
		MAX      = 5
	};

	/**
	 * Enum DeadByDaylight.ERewardLayoutBox
	 */
	enum class ERewardLayoutBox : uint8_t
	{
		Top    = 0,
		Bottom = 1,
		MAX    = 2
	};

	/**
	 * Enum DeadByDaylight.ESettingScreenButtonData
	 */
	enum class ESettingScreenButtonData : uint8_t
	{
		PRIVACY           = 0,
		EULA              = 1,
		CREDITS           = 2,
		SURVIVORTUTORIAL  = 3,
		KILLERTUTORIAL    = 4,
		SURVIVORCINEMATIC = 5,
		KILLERCINEMATIC   = 6,
		LORECINEMATIC     = 7,
		COMMUNITY         = 8,
		PLAYERCLOUDID     = 9,
		SUBSCRIBE         = 10,
		TERMSOFUSE        = 11,
		MAX               = 12
	};

	/**
	 * Enum DeadByDaylight.ENavigationState
	 */
	enum class ENavigationState : uint8_t
	{
		RoleSelection      = 0,
		Customization      = 1,
		CharacterSelection = 2,
		Lobby              = 3,
		BloodStore         = 4,
		None               = 5,
		MAX                = 6
	};

	/**
	 * Enum DeadByDaylight.EInventoryButtonState
	 */
	enum class EInventoryButtonState : uint8_t
	{
		StateDisabled         = 0,
		StateEmpty            = 1,
		StateLocked           = 2,
		StateWithItem         = 3,
		StateWithItemDisabled = 4,
		StateWithItemLocked   = 5,
		StatePrivate          = 6,
		MAX                   = 7
	};

	/**
	 * Enum DeadByDaylight.EFogScreenButton
	 */
	enum class EFogScreenButton : uint8_t
	{
		AddCurrency = 0,
		Setting     = 1,
		Chat        = 2,
		MAX         = 3
	};

	/**
	 * Enum DeadByDaylight.ERoleSelectionScreenButton
	 */
	enum class ERoleSelectionScreenButton : uint8_t
	{
		DailyRitual  = 0,
		Inbox        = 1,
		InviteFriend = 2,
		Setting      = 3,
		Marketing    = 4,
		Events       = 5,
		MAX          = 6
	};

	/**
	 * Enum DeadByDaylight.ENavigationScreenButton
	 */
	enum class ENavigationScreenButton : uint8_t
	{
		AddCurrency           = 0,
		Back                  = 1,
		Bloodweb              = 2,
		ChangeRole            = 3,
		CharacterSelection    = 4,
		Customization         = 5,
		InviteFriend          = 6,
		Loadout               = 7,
		Start                 = 8,
		Subscriptions         = 9,
		EditCustomGame        = 10,
		CustomGameRequestRole = 11,
		MAX                   = 12
	};

	/**
	 * Enum DeadByDaylight.EInboxScreenButton
	 */
	enum class EInboxScreenButton : uint8_t
	{
		Rewards = 0,
		Social  = 1,
		News    = 2,
		Back    = 3,
		MAX     = 4
	};

	/**
	 * Enum DeadByDaylight.ETallyListPageID
	 */
	enum class ETallyListPageID : uint8_t
	{
		Scoreboard     = 0,
		Bloodpoints    = 1,
		Rank           = 2,
		PlayerLevel    = 3,
		CharacterLevel = 4,
		NumberOfPages  = 5,
		MAX            = 6
	};

	/**
	 * Enum DeadByDaylight.EToastWidgetType
	 */
	enum class EToastWidgetType : uint8_t
	{
		Simple       = 0,
		Interactable = 1,
		MAX          = 2
	};

	/**
	 * Enum DeadByDaylight.ELinkedVomitState
	 */
	enum class ELinkedVomitState : uint8_t
	{
		Idle     = 0,
		Charging = 1,
		Vomiting = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DeadByDaylight.SecondaryInteractionProperties
	 * Size -> 0x0038
	 */
	struct FSecondaryInteractionProperties
	{
	public:
		class FString                                              SecondaryInteractionID;                                  // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputInteractionType                                      SecondaryInteractionInputType;                           // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XQD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SecondaryInteractionDescriptionText;                     // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       ShouldShow;                                              // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V75Q[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.InteractionArray
	 * Size -> 0x0010
	 */
	struct FInteractionArray
	{
	public:
		TArray<TWeakObjectPtr<class UInteractionDefinition>>       _interactions;                                           // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.ArmIKSensorDatum
	 * Size -> 0x0030
	 */
	struct FArmIKSensorDatum
	{
	public:
		class FName                                                ShoulderBoneName;                                        // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4WO[0x24];                                  // 0x000C(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDAttackTargetTracker
	 * Size -> 0x00B8
	 */
	struct FDBDAttackTargetTracker
	{
	public:
		bool                                                       _useTargetTracking;                                      // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3WB3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatProperty                                       _targetSnapDistance;                                     // 0x0008(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _ownerEyeSocketName;                                     // 0x0090(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _targetBoneName;                                         // 0x009C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ACharacter>                           _trackedTarget;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ADBDPlayer>                           _owningPlayer;                                           // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.ModifierTickableConditionReplicatedData
	 * Size -> 0x0018
	 */
	struct FModifierTickableConditionReplicatedData
	{
	public:
		TArray<class UBaseModifierCondition*>                      Conditions;                                              // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       HasCondition;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AuthorityDataSet;                                        // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDRU[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StatusEffectInitializationData
	 * Size -> 0x0028
	 */
	struct FStatusEffectInitializationData
	{
	public:
		class ADBDPlayer*                                          originatingPlayer;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasOriginatingPlayer;                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWPG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayModifierContainer*                          originatingEffect;                                       // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasOriginatingEffect;                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPX2[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      customParam;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitializationLifeTime;                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AuthorityDataSet;                                        // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAFA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PerkInitializationData
	 * Size -> 0x0008
	 */
	struct FPerkInitializationData
	{
	public:
		int32_t                                                    PerkLevel;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputInteractionType                                      ActivatableInteractionInputType;                         // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AuthorityDataSet;                                        // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IO7X[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemAddonInitializationData
	 * Size -> 0x0002
	 */
	struct FItemAddonInitializationData
	{
	public:
		EInventoryItemType                                         InventoryItemType;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AuthorityDataSet;                                        // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.Dependency
	 * Size -> 0x0038
	 */
	struct FDependency
	{
	public:
		ETileSpawnPointType                                        Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_86QI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     AssetReference;                                          // 0x0008(0x0020) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              Object;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Unique;                                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AR22[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.BuiltLevelData
	 * Size -> 0x00B0
	 */
	struct FBuiltLevelData
	{
	public:
		class FName                                                ThemeName;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ThemeWeather;                                            // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioStateThemes;                                        // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioStateWeather;                                       // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioThemeEvent;                                         // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioLimitPointEvent;                                    // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AudioThemeSoundBank[0x30];                               // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              MapName;                                                 // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileCount;                                               // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0O1Z[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDependency>                                 Dependencies;                                            // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                SpecialEventId;                                          // 0x00A0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BS81[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SelectedOffering
	 * Size -> 0x0010
	 */
	struct FSelectedOffering
	{
	public:
		int32_t                                                    ownerId;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OfferingName;                                            // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OfferingData
	 * Size -> 0x0018
	 */
	struct FOfferingData
	{
	public:
		bool                                                       OfferingReady;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GE4N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSelectedOffering>                           offerings;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.GamePresetData
	 * Size -> 0x0090
	 */
	struct FGamePresetData
	{
	public:
		TArray<unsigned char>                                      _mapAvailabilities;                                      // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      _perkAvailabilities;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      _offeringAvailabilities;                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      _itemAvailabilities;                                     // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      _itemAddonAvailabilities;                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      _customizationItemAvailabilities;                        // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      _characterAvailabilities;                                // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       _allowDlcContent;                                        // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _privateMatch;                                           // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9N6H[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomGameBotsData                                 _botsData;                                               // 0x0078(0x0018) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.ProgressionPoints
	 * Size -> 0x0008
	 */
	struct FProgressionPoints
	{
	public:
		EEmblemProgressionType                                     Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGJO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Points;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ClippedActor
	 * Size -> 0x0060
	 */
	struct FClippedActor
	{
	public:
		TArray<TWeakObjectPtr<class UPrimitiveComponent>>          DisplayComponents;                                       // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		TMap<class UPrimitiveComponent*, TWeakObjectPtr<class UPrimitiveComponent>> CollidingPrimitives;                                     // 0x0010(0x0050) ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ActorSpawnerProperties
	 * Size -> 0x0038
	 */
	struct FActorSpawnerProperties
	{
	public:
		unsigned char                                              SceneElement[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      Weight;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3TY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SpawnerElement
	 * Size -> 0x0010
	 */
	struct FSpawnerElement
	{
	public:
		TArray<struct FActorSpawnerProperties>                     ObjectsToBeSpawned;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ActorVariationElements
	 * Size -> 0x0038
	 */
	struct FActorVariationElements
	{
	public:
		ETileVariation                                             Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_328R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Element[0x30];                                           // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.AITrailEvent
	 * Size -> 0x0030
	 */
	struct FAITrailEvent
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      starttime;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNDY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        IgnoreOnPerkTag;                                         // 0x0020(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGenericTeamId                                      TeamIdentifier;                                          // 0x002C(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XG8T[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AssetLibraryLoader
	 * Size -> 0x0028
	 */
	struct FAssetLibraryLoader
	{
	public:
		class UAssetLibrary*                                       AssetLibrary;                                            // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAT3[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.RoleDropdown
	 * Size -> 0x0002
	 */
	struct FRoleDropdown
	{
	public:
		bool                                                       ShowRoleSelection;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterDropdown
	 * Size -> 0x0006 (FullSize[0x0008] - InheritedSize[0x0002])
	 */
	struct FCharacterDropdown : public FRoleDropdown
	{
	public:
		unsigned char                                              UnknownData_SYJK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    characterId;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlCookedMapDescription
	 * Size -> 0x0040
	 */
	struct FAtlCookedMapDescription
	{
	public:
		class FName                                                ThemeName;                                               // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7YC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MapAsset[0x30];                                          // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.BlockableReplicatedDatum
	 * Size -> 0x0020
	 */
	struct FBlockableReplicatedDatum
	{
	public:
		TArray<TWeakObjectPtr<class UObject>>                      Sources;                                                 // 0x0000(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class ADBDPlayer>>                   BlockedPlayers;                                          // 0x0010(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodDecal
	 * Size -> 0x006C
	 */
	struct FBloodDecal
	{
	public:
		unsigned char                                              UnknownData_N2QC[0x6C];                                  // 0x0000(0x006C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BorderElements
	 * Size -> 0x0018
	 */
	struct FBorderElements
	{
	public:
		EDirection                                                 Direction;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A67D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorSpawner*>                               Elements;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CameraAttachment
	 * Size -> 0x0018
	 */
	struct FCameraAttachment
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUHB[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SurvivorSleepiness
	 * Size -> 0x0008
	 */
	struct FSurvivorSleepiness
	{
	public:
		float                                                      _sleepiness;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _sleepThreshold;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDTimer
	 * Size -> 0x0028
	 */
	struct FDBDTimer
	{
	public:
		unsigned char                                              UnknownData_NNA4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _startTime;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _startTimeDirty;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QN5P[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloat_NetQuantize8                                 _timeLeft;                                               // 0x0010(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _replicateTimeLeft;                                      // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F5X0[0xB];                                   // 0x0019(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _interpSpeed;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.ManagedMaterialGroup
	 * Size -> 0x0030
	 */
	struct FManagedMaterialGroup
	{
	public:
		class UObject*                                             Source;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Group;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Condition;                                               // 0x0018(0x0010) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W988[0x4];                                   // 0x0028(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_7QDE[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EffectCameraTypeSettings
	 * Size -> 0x0003
	 */
	struct FEffectCameraTypeSettings
	{
	public:
		ECustomizationCategory                                     Category;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VisibilityInFirstPerson;                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VisibilityInThirdPerson;                                 // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OnMovementCacheStruct
	 * Size -> 0x000C
	 */
	struct FOnMovementCacheStruct
	{
	public:
		unsigned char                                              UnknownData_2O7T[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterToolData
	 * Size -> 0x0080
	 */
	struct FCharacterToolData
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWVK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    characterId;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OutfitId;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CharmId;                                                 // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SurvivorHead;                                            // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SurvivorTorso;                                           // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SurvivorLegs;                                            // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KillerHead;                                              // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KillerBody;                                              // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KillerWeapon;                                            // 0x005C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAnimBP;                                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8P6A[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnimAsset;                                               // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterToolSpawnParameters
	 * Size -> 0x0003
	 */
	struct FCharacterToolSpawnParameters
	{
	public:
		bool                                                       IsAnimated;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowPower;                                               // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMasterPoseForItems;                                   // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.NamedButton
	 * Size -> 0x0018
	 */
	struct FNamedButton
	{
	public:
		int32_t                                                    ClickCounter;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2CQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterToolItemData
	 * Size -> 0x0010
	 */
	struct FCharacterToolItemData
	{
	public:
		ECharacterToolItemType                                     _type;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KFG8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _id;                                                     // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.ChargeData
	 * Size -> 0x0010
	 */
	struct FChargeData
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChargeAmount;                                            // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BypassSkillCheckFail;                                    // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOneTimeIncrease;                                       // 0x000D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11EO[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharmAttacherAnimationTweak
	 * Size -> 0x0020
	 */
	struct FCharmAttacherAnimationTweak
	{
	public:
		struct FVector                                             AttachPointTranslation;                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AttachPointRotation;                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ConstraintType;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MagicTweakingFloat;                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharmSlot
	 * Size -> 0x00B0
	 */
	struct FCharmSlot
	{
	public:
		int32_t                                                    slotIndex;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T48D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CharmAttacherClass[0x30];                                // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FCharmAttacherAnimationTweak                        DefaultAnimationTweak;                                   // 0x0038(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		TMap<class FName, struct FCharmAttacherAnimationTweak>     AnimationTweakByTag;                                     // 0x0058(0x0050) Edit, NativeAccessSpecifierPublic
		class ACharmAttacher*                                      CharmAttacherSpawned;                                    // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.TargetFocusTimer
	 * Size -> 0x0038
	 */
	struct FTargetFocusTimer
	{
	public:
		class ACamperPlayer*                                       _camper;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTimer                                           _cooldownTimer;                                          // 0x0008(0x0028) NativeAccessSpecifierPrivate
		float                                                      _totalTime;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WCUR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ChaseUpdateInfo
	 * Size -> 0x0048
	 */
	struct FChaseUpdateInfo
	{
	public:
		struct FTargetFocusTimer                                   ChaseTimer;                                              // 0x0000(0x0038) NativeAccessSpecifierPublic
		float                                                      SurvivorTravelDistance;                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KillerTravelDistance;                                    // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECamperDamageState                                         ChaseStartHealthStatus;                                  // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYDM[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.Cinematic
	 * Size -> 0x0058
	 */
	struct FCinematic
	{
	public:
		unsigned char                                              UnknownData_OS3P[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.MaterialOriginalState
	 * Size -> 0x0018
	 */
	struct FMaterialOriginalState
	{
	public:
		class UMeshComponent*                                      MeshWithChangedMaterials;                                // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OriginalMaterial;                                        // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.StaticMeshesArrayForClip
	 * Size -> 0x0010
	 */
	struct FStaticMeshesArrayForClip
	{
	public:
		unsigned char                                              UnknownData_RJR4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialBehaviourObjectsInfo
	 * Size -> 0x0014
	 */
	struct FSpecialBehaviourObjectsInfo
	{
	public:
		class FName                                                SpecialBehaviourId;                                      // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    amountRequired;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesInteractedWith;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DataTableDropdown
	 * Size -> 0x0030
	 */
	struct FDataTableDropdown
	{
	public:
		class FName                                                RowValue;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9WUP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DataTableName;                                           // 0x0010(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ColumnName;                                              // 0x0020(0x000C) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D8PL[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomizedMeshPart
	 * Size -> 0x0048
	 */
	struct FCustomizedMeshPart
	{
	public:
		ECustomizationCategory                                     Category;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XO0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableDropdown                                  DefaultItemId;                                           // 0x0008(0x0030) Edit, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9JG[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CosmeticPieceMeshLoadingData
	 * Size -> 0x0370
	 */
	struct FCosmeticPieceMeshLoadingData
	{
	public:
		unsigned char                                              UnknownData_Z3F0[0x368];                                 // 0x0000(0x0368) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0368(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.HudEditorDragFromParentAxisLimit
	 * Size -> 0x0014
	 */
	struct FHudEditorDragFromParentAxisLimit
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHudEditorDragAxisOption                                   AxisOption;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGIL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDragDistance;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScaleMinDragDistanceWithParent;                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXZN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDragDistance;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScaleMaxDragDistanceWithParent;                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFPH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.MapMeshToAkAudioEvent
	 * Size -> 0x0040
	 */
	struct FMapMeshToAkAudioEvent
	{
	public:
		unsigned char                                              Mesh[0x30];                                              // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UAkAudioEvent*                                       SoundEvent;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDelayBetweenEvents;                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDelayBetweenObject;                                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.MapSoundsToAvoid
	 * Size -> 0x0010
	 */
	struct FMapSoundsToAvoid
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWDJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DBD_SoundSpawnerData
	 * Size -> 0x0028
	 */
	struct FDBD_SoundSpawnerData
	{
	public:
		unsigned char                                              TriggerObject[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       TriggerVisualForCamper;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TriggerVisualForSlasher;                                 // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9R83[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActorToSpawnVisual[0x10];                                // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.AttackDelegatePair
	 * Size -> 0x0010
	 */
	struct FAttackDelegatePair
	{
	public:
		class UDBDAttack*                                          _attack;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZFAO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AuthenticationInfo
	 * Size -> 0x0018
	 */
	struct FAuthenticationInfo
	{
	public:
		unsigned char                                              UnknownData_QHP5[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PerMeshInstancingData
	 * Size -> 0x0190
	 */
	struct FPerMeshInstancingData
	{
	public:
		TMap<uint32_t, class UInstancedStaticMeshComponent*>       gpuCulling_hashToInstancedMeshes;                        // 0x0000(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<uint32_t, class UInstancedStaticMeshComponent*>       gpuCullingSwap_hashToInstancedMeshes;                    // 0x0050(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<uint32_t, class UInstancedStaticMeshComponent*>       hism_hashToInstancedMeshes;                              // 0x00A0(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0NA[0xA0];                                  // 0x00F0(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StaticMeshAutoBatch
	 * Size -> 0x0030
	 */
	struct FStaticMeshAutoBatch
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGS0[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        staticMeshComponents;                                    // 0x0020(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpawnInfo
	 * Size -> 0x0040
	 */
	struct FSpawnInfo
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DV6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AffectedMaterialAndVariant
	 * Size -> 0x0010
	 */
	struct FAffectedMaterialAndVariant
	{
	public:
		class UMaterialInterface*                                  AffectedMaterial;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MaterialVariant;                                         // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CurrencyConversion
	 * Size -> 0x0050
	 */
	struct FCurrencyConversion
	{
	public:
		TMap<ECurrencyType, float>                                 AmountInOtherCurrency;                                   // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomTransformation
	 * Size -> 0x0014
	 */
	struct FCustomTransformation
	{
	public:
		bool                                                       UseCustomTransformation;                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V35N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CustomScale;                                             // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           CustomTranslation;                                       // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemUIData
	 * Size -> 0x00C0
	 */
	struct FItemUIData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPrivate
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, NativeAccessSpecifierPrivate
		TArray<class FString>                                      IconFilePathList;                                        // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              IconAssetList[0x10];                                     // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FCustomTransformation                               CustomTransformation;                                    // 0x0050(0x0014) Edit, NoDestructor, NativeAccessSpecifierPrivate
		uint32_t                                                   PlatformsUnlicensedNameOverride;                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   PlatformsUnlicensedDescriptionOverride;                  // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   PlatformsForIconUnlicensedFilePathListOverride;          // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FString>                                      IconUnlicensedFilePathListOverride;                      // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       LicenseExpirationOverride;                               // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3WR[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayNameUnlicensedOverride;                           // 0x0088(0x0018) Edit, NativeAccessSpecifierPrivate
		class FText                                                DescriptionUnlicensedOverride;                           // 0x00A0(0x0018) Edit, NativeAccessSpecifierPrivate
		int32_t                                                    AssociatedCharacterIndex;                                // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YOW7[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemAvailability
	 * Size -> 0x0030
	 */
	struct FItemAvailability
	{
	public:
		EItemAvailability                                          ItemAvailability;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K19N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DLCId;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    CloudInventoryId;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NXVW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommunityId;                                             // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomizationData
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FCustomizationData : public FDBDTableRowBase
	{
	public:
		int32_t                                                    AssociatedCharacter;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                AssociatedRole;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9T94[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemUIData                                         UIData;                                                  // 0x0010(0x00C0) Edit, NativeAccessSpecifierPublic
		struct FItemAvailability                                   Availability;                                            // 0x00D0(0x0030) Edit, NativeAccessSpecifierPublic
		class FString                                              InclusionVersion;                                        // 0x0100(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomizationId;                                         // 0x0110(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJBE[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.MaterialReplacerData
	 * Size -> 0x0060
	 */
	struct FMaterialReplacerData
	{
	public:
		unsigned char                                              From[0x30];                                              // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              To[0x30];                                                // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.MaterialReplacerArray
	 * Size -> 0x0010
	 */
	struct FMaterialReplacerArray
	{
	public:
		TArray<struct FMaterialReplacerData>                       MaterialsMap;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ConditionalMaterialReplacer
	 * Size -> 0x0060
	 */
	struct FConditionalMaterialReplacer
	{
	public:
		class FName                                                ItemTag;                                                 // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73RR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FMaterialReplacerArray>           ConditionalMaterials;                                    // 0x0010(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.TextureReplacerData
	 * Size -> 0x0070
	 */
	struct FTextureReplacerData
	{
	public:
		unsigned char                                              BaseMaterial[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ReplacementTexture[0x30];                                // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                TextureParameterName;                                    // 0x0060(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplicitMaterialSlot;                                    // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BPAttachementSocketData
	 * Size -> 0x00E0
	 */
	struct FBPAttachementSocketData
	{
	public:
		unsigned char                                              AccessoryBlueprint[0x30];                                // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              SkeletalMesh[0x30];                                      // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                SocketName;                                              // 0x0060(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A3O[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMaterialReplacerData>                       MaterialsMap;                                            // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FConditionalMaterialReplacer                        ConditionalMaterialReplacer;                             // 0x0080(0x0060) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.UnlockSaveStatCondition
	 * Size -> 0x0014
	 */
	struct FUnlockSaveStatCondition
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueRequired;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isCharacterSpecific;                                     // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XC6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomSoundFXData
	 * Size -> 0x0018
	 */
	struct FCustomSoundFXData
	{
	public:
		EAudioCustomizationCategory                                AudioCategory;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCG5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              switchState;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomAnimData
	 * Size -> 0x0060
	 */
	struct FCustomAnimData
	{
	public:
		unsigned char                                              MenuAnimationBlueprint[0x30];                            // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              InGameAnimationBlueprint[0x30];                          // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomizationItemData
	 * Size -> 0x0238 (FullSize[0x0368] - InheritedSize[0x0130])
	 */
	struct FCustomizationItemData : public FCustomizationData
	{
	public:
		ECustomizationCategory                                     Category;                                                // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYDH[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ItemMesh[0x30];                                          // 0x0138(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AnimClass[0x30];                                         // 0x0168(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ItemBlueprint[0x30];                                     // 0x0198(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FMaterialReplacerData>                       MaterialsMap;                                            // 0x01C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FConditionalMaterialReplacer                        ConditionalMaterialReplacer;                             // 0x01D8(0x0060) Edit, NativeAccessSpecifierPublic
		TArray<struct FTextureReplacerData>                        TexturesMap;                                             // 0x0238(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        SkeletalComponentTags;                                   // 0x0248(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               CosmeticOverrideSemanticTags;                            // 0x0258(0x0020) Edit, NativeAccessSpecifierPublic
		class FText                                                CollectionName;                                          // 0x0278(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CollectionDescription;                                   // 0x0290(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeUlockLevel;                                      // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3TX[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrestigeUnlockDate;                                      // 0x02B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventId;                                                 // 0x02C0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharmCategory                                             CharmCategory;                                           // 0x02CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMVJ[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPAttachementSocketData>                    SocketAttachements;                                      // 0x02D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FUnlockSaveStatCondition>                    UnlockingConditions;                                     // 0x02E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsInStore;                                               // 0x02F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInNonViolentBuild;                                     // 0x02F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableInAtlantaBuild;                               // 0x02F2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5FH[0x1];                                   // 0x02F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   PlatformExclusiveFlag;                                   // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCustomSoundFXData>                          CustomSFXs;                                              // 0x02F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCustomAnimData                                     AnimationData;                                           // 0x0308(0x0060) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDCustomizationToolData
	 * Size -> 0x0E18
	 */
	struct FDBDCustomizationToolData
	{
	public:
		struct FCustomizationItemData                              Head;                                                    // 0x0000(0x0368) Edit, NativeAccessSpecifierPublic
		struct FCustomizationItemData                              Torso;                                                   // 0x0368(0x0368) Edit, NativeAccessSpecifierPublic
		struct FCustomizationItemData                              Leg;                                                     // 0x06D0(0x0368) Edit, NativeAccessSpecifierPublic
		struct FCustomizationItemData                              Bodies;                                                  // 0x0A38(0x0368) Edit, NativeAccessSpecifierPublic
		class FString                                              characterName;                                           // 0x0DA0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleName;                                                // 0x0DB0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       BaseSkeleton;                                            // 0x0DC0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          MaskTexture;                                             // 0x0DC8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimationAsset*                                     AnimationToPlay;                                         // 0x0DD0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StrHeadDLC;                                              // 0x0DD8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StrTorsoDLC;                                             // 0x0DE8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StrLegDLC;                                               // 0x0DF8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StrBodiesDLC;                                            // 0x0E08(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterCustomizationDropdown
	 * Size -> 0x0054 (FullSize[0x005C] - InheritedSize[0x0008])
	 */
	struct FCharacterCustomizationDropdown : public FCharacterDropdown
	{
	public:
		class FName                                                OutfitId;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SurvivorHead;                                            // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SurvivorTorso;                                           // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SurvivorLegs;                                            // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KillerHead;                                              // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KillerBody;                                              // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KillerWeapon;                                            // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharmDropdown
	 * Size -> 0x000E (FullSize[0x0010] - InheritedSize[0x0002])
	 */
	struct FCharmDropdown : public FRoleDropdown
	{
	public:
		unsigned char                                              UnknownData_J9KW[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CharmId;                                                 // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemIdDropdown
	 * Size -> 0x000E (FullSize[0x0010] - InheritedSize[0x0002])
	 */
	struct FItemIdDropdown : public FRoleDropdown
	{
	public:
		unsigned char                                              UnknownData_PY7O[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemId;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AddonDropdown
	 * Size -> 0x000E (FullSize[0x0010] - InheritedSize[0x0002])
	 */
	struct FAddonDropdown : public FRoleDropdown
	{
	public:
		unsigned char                                              UnknownData_ITIL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AddonID;                                                 // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DebugLoadoutAddon
	 * Size -> 0x0010
	 */
	struct FDebugLoadoutAddon
	{
	public:
		struct FAddonDropdown                                      AddonDropdown;                                           // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PerkDropdown
	 * Size -> 0x000E (FullSize[0x0010] - InheritedSize[0x0002])
	 */
	struct FPerkDropdown : public FRoleDropdown
	{
	public:
		unsigned char                                              UnknownData_5H5Z[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                perkId;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DebugLoadoutPerk
	 * Size -> 0x0014
	 */
	struct FDebugLoadoutPerk
	{
	public:
		struct FPerkDropdown                                       PerkDropdown;                                            // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    PerkLevel;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CamperLoadout
	 * Size -> 0x00C0
	 */
	struct FCamperLoadout
	{
	public:
		struct FCharacterCustomizationDropdown                     camper;                                                  // 0x0000(0x005C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharmDropdown                                      Slot0_CharmID;                                           // 0x005C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharmDropdown                                      Slot1_CharmID;                                           // 0x006C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCharmDropdown                                      Slot2_CharmID;                                           // 0x007C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FItemIdDropdown                                     Item;                                                    // 0x008C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IHU[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDebugLoadoutAddon>                          AddonIDs;                                                // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDebugLoadoutPerk>                           Perks;                                                   // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SlasherLoadout
	 * Size -> 0x0080
	 */
	struct FSlasherLoadout
	{
	public:
		TArray<struct FDebugLoadoutPerk>                           Perks;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDebugLoadoutAddon>                          PowerAddonIDs;                                           // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCharacterCustomizationDropdown                     Slasher;                                                 // 0x0020(0x005C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCO0[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DebugQuestModelExtArchiveCondition
	 * Size -> 0x0020
	 */
	struct FDebugQuestModelExtArchiveCondition
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      value;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DebugModelExtArchiveQuestEvent
	 * Size -> 0x0028
	 */
	struct FDebugModelExtArchiveQuestEvent
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QuestEventId;                                            // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Repetition;                                              // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K72E[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DebugModelExtArchiveQuestSpecialBehaviours
	 * Size -> 0x0020
	 */
	struct FDebugModelExtArchiveQuestSpecialBehaviours
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Params;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DebugQuestModelExtArchiveObjective
	 * Size -> 0x0038
	 */
	struct FDebugQuestModelExtArchiveObjective
	{
	public:
		TArray<struct FDebugQuestModelExtArchiveCondition>         Conditions;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NeededProgression;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E114[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDebugModelExtArchiveQuestEvent>             QuestEvents;                                             // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDebugModelExtArchiveQuestSpecialBehaviours> SpecialBehaviours;                                       // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PerkLevelDefinition
	 * Size -> 0x0004
	 */
	struct FPerkLevelDefinition
	{
	public:
		int32_t                                                    CountRequired;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.GameEventForwarderInfo
	 * Size -> 0x0020
	 */
	struct FGameEventForwarderInfo
	{
	public:
		TArray<struct FGameplayTag>                                GameEventsToRegister;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ForwardedEvent;                                          // 0x0010(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMWE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ForceSpawnTileData
	 * Size -> 0x0020
	 */
	struct FForceSpawnTileData
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    matrixX;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    matrixY;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rotation;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SZH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ParadiseData
	 * Size -> 0x0058
	 */
	struct FParadiseData
	{
	public:
		unsigned char                                              UnknownData_VBXV[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SharedAuthenticationTokenInformation
	 * Size -> 0x0030
	 */
	struct FSharedAuthenticationTokenInformation
	{
	public:
		class FString                                              LoginProvider;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuthToken;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TokenType;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BonusTierTooltipVisibility
	 * Size -> 0x0018
	 */
	struct FBonusTierTooltipVisibility
	{
	public:
		class FString                                              ArchiveId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsVisible;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0LY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaCustomizedHudSettings
	 * Size -> 0x0040
	 */
	struct FAtlantaCustomizedHudSettings
	{
	public:
		struct FGameplayTag                                        ID;                                                      // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           NormalizedOffset;                                        // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RenderOpacity;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               OverlapWrapperIds;                                       // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDFoliageInstance
	 * Size -> 0x004C
	 */
	struct FDBDFoliageInstance
	{
	public:
		int32_t                                                    BaseId;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ProceduralGuid;                                          // 0x0004(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0014(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0020(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            PreAlignRotation;                                        // 0x002C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             DrawScale3D;                                             // 0x0038(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZOffset;                                                 // 0x0044(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Flags;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDFoliageInfo
	 * Size -> 0x0018
	 */
	struct FDBDFoliageInfo
	{
	public:
		class UFoliageType*                                        FoliageType;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDBDFoliageInstance>                         Instances;                                               // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.KeyDisplayInfo
	 * Size -> 0x0040
	 */
	struct FKeyDisplayInfo
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeyDisplayName;                                          // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PromptType;                                              // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.TypeFoliageToAutomateDensity
	 * Size -> 0x0068
	 */
	struct FTypeFoliageToAutomateDensity
	{
	public:
		unsigned char                                              SourceMesh[0x30];                                        // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ReplacementMesh[0x30];                                   // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bGenerateOverlaps;                                       // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceiveDecals;                                          // 0x0061(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECanBeCharacterBase                                        bCanCharacterStepOn;                                     // 0x0062(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetailMode                                                DetailMode;                                              // 0x0063(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFoliageRadius;                                    // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDOutlineRenderStrategySelector
	 * Size -> 0x0040
	 */
	struct FDBDOutlineRenderStrategySelector
	{
	public:
		unsigned char                                              UnknownData_GW2Z[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _actorForStrategy;                                       // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBaseOutlineRenderStrategy*                          _selectedStrategy;                                       // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ANVG[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.OutlineColourConfiguration
	 * Size -> 0x0010
	 */
	struct FOutlineColourConfiguration
	{
	public:
		struct FLinearColor                                        ColourValue;                                             // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.GamePersistentData
	 * Size -> 0x0108
	 */
	struct FGamePersistentData
	{
	public:
		int32_t                                                    PlayerCount;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    spectatorCount;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGamePresetData                                     GamePresetData;                                          // 0x0008(0x0090) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86FY[0x70];                                  // 0x0098(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerLoadoutData
	 * Size -> 0x0098
	 */
	struct FPlayerLoadoutData
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ES77[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ItemAddOns;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CamperPerks;                                             // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CamperPerkLevels;                                        // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                CamperFavor;                                             // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Power;                                                   // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PowerAddOns;                                             // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        SlasherPerks;                                            // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            SlasherPerkLevels;                                       // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                SlasherFavor;                                            // 0x0088(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVQU[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerSavedProfileDataShared
	 * Size -> 0x0068
	 */
	struct FPlayerSavedProfileDataShared
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedCamperIndex;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedSlasherIndex;                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEquippedPlayerCustomization                        SelectedCharacterCustomization;                          // 0x0018(0x0038) NativeAccessSpecifierPublic
		int32_t                                                    CamperStreak;                                            // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowPortraitBorder;                                      // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasActiveSubscription;                                   // 0x0055(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SDK[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlatformId;                                              // 0x0058(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.DailyRitualSaveData
	 * Size -> 0x0008
	 */
	struct FDailyRitualSaveData
	{
	public:
		struct FDateTime                                           LastRitualPopupDate;                                     // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.UIViewFlagSaveData
	 * Size -> 0x0050
	 */
	struct FUIViewFlagSaveData
	{
	public:
		TMap<class FString, bool>                                  CharactersFirstBloodweb;                                 // 0x0000(0x0050) SaveGame, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.FearMarketItemInstance
	 * Size -> 0x0030
	 */
	struct FFearMarketItemInstance
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodpointConversion;                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Purchased;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCCJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DiscountPercentage;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88YZ[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.FearMarketOfferingInstance
	 * Size -> 0x0020
	 */
	struct FFearMarketOfferingInstance
	{
	public:
		TArray<struct FFearMarketItemInstance>                     ObjectsForSale;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           starttime;                                               // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndTime;                                                 // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebNodeProperties
	 * Size -> 0x0020
	 */
	struct FBloodwebNodeProperties
	{
	public:
		EBloodwebNodeContentType                                   ContentType;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBQN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Tags;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    characterId;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VU6N[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebNodeGate
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FBloodwebNodeGate : public FDBDTableRowBase
	{	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebChest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FBloodwebChest : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventId;                                                 // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBloodchestType                                            ChestType;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIMY[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              GivenItemRarity;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebNode
	 * Size -> 0x0090
	 */
	struct FBloodwebNode
	{
	public:
		struct FBloodwebNodeProperties                             Properties;                                              // 0x0000(0x0020) NativeAccessSpecifierPublic
		TArray<struct FBloodwebNodeGate>                           Gates;                                                   // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EBloodwebNodeState                                         State;                                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O22H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nodeId;                                                  // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ContentId;                                               // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SN0M[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBloodwebChest                                      BloodwebChest;                                           // 0x0058(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodWebRingPersistentData
	 * Size -> 0x0010
	 */
	struct FBloodWebRingPersistentData
	{
	public:
		TArray<struct FBloodwebNode>                               NodeData;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodWebPersistentData
	 * Size -> 0x0050
	 */
	struct FBloodWebPersistentData
	{
	public:
		int32_t                                                    VersionNumber;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBloodWebRingPersistentData>                 RingData;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        Paths;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              EntityCurrentNode;                                       // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           GenerationDate;                                          // 0x0038(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Seed;                                                    // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterCustomizationPreset
	 * Size -> 0x0038
	 */
	struct FCharacterCustomizationPreset
	{
	public:
		class FName                                                Head;                                                    // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TorsoOrBody;                                             // 0x000C(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LegsOrWeapon;                                            // 0x0018(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNRR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharmIdSlot>                                Charms;                                                  // 0x0028(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterCustomizationPresetsList
	 * Size -> 0x0018
	 */
	struct FCharacterCustomizationPresetsList
	{
	public:
		int32_t                                                    characterId;                                             // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActivePreset;                                            // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharacterCustomizationPreset>               Presets;                                                 // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterLoadoutPreset
	 * Size -> 0x0040
	 */
	struct FCharacterLoadoutPreset
	{
	public:
		class FName                                                PowerOrItem;                                             // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE5O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        addons;                                                  // 0x0010(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        Perks;                                                   // 0x0020(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		class FName                                                Favor;                                                   // 0x0030(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V81U[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterLoadoutPresetsList
	 * Size -> 0x0018
	 */
	struct FCharacterLoadoutPresetsList
	{
	public:
		int32_t                                                    characterId;                                             // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActivePreset;                                            // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharacterLoadoutPreset>                     Presets;                                                 // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerSavedProfileCumulativeData
	 * Size -> 0x0038
	 */
	struct FPlayerSavedProfileCumulativeData
	{
	public:
		bool                                                       FirstTimePlaying;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94MN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CumulativeMatches;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivor;                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKiller;                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivorNoFriends;                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKillerNoFriends;                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastMatchTimestamp;                                      // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastSessionTimestamp;                                    // 0x0020(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeSessions;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WASG[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           CumulativePlaytime;                                      // 0x0030(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedStatsData
	 * Size -> 0x0014
	 */
	struct FSavedStatsData
	{
	public:
		uint32_t                                                   Version;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterSavedInventoryData
	 * Size -> 0x0010
	 */
	struct FCharacterSavedInventoryData
	{
	public:
		uint32_t                                                   Version;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AssignedPerkProperties
	 * Size -> 0x0014
	 */
	struct FAssignedPerkProperties
	{
	public:
		class FName                                                perkId;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerkLevel;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTeachable;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAN4[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedCharacterLevelData
	 * Size -> 0x0018
	 */
	struct FSavedCharacterLevelData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPerksBeenSelected;                                    // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPerkSelectionBeenGenerated;                           // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9EP[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAssignedPerkProperties>                     PerkSelection;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterSavedProfileData
	 * Size -> 0x0190
	 */
	struct FCharacterSavedProfileData
	{
	public:
		int32_t                                                    BloodWebLevel;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesConfronted;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDateTime>                                   PrestigeEarnedDates;                                     // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBloodWebPersistentData                             BloodWebData;                                            // 0x0018(0x0050) NativeAccessSpecifierPublic
		struct FPlayerLoadoutData                                  CharacterLoadoutData;                                    // 0x0068(0x0098) NativeAccessSpecifierPublic
		struct FEquippedPlayerCustomization                        CurrentCustomization;                                    // 0x0100(0x0038) NativeAccessSpecifierPublic
		TArray<class FName>                                        UniquePerksAdded;                                        // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CharacterBloodwebMigrationIsDone;                        // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELHD[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterSavedInventoryData>                InventoryData;                                           // 0x0150(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSavedCharacterLevelData>                    CharacterLevelData;                                      // 0x0160(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSavedStatsData>                             StatProgression;                                         // 0x0170(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    PrestigeLevel;                                           // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    LegacyPrestigeLevel;                                     // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    CharacterExperience;                                     // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D67U[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventSavedData
	 * Size -> 0x0002
	 */
	struct FSpecialEventSavedData
	{
	public:
		bool                                                       EventEntryScreenOpened;                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EventSplashScreenSeen;                                   // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ReleaseSavedData
	 * Size -> 0x0001
	 */
	struct FReleaseSavedData
	{
	public:
		bool                                                       NewChapterPopupSeen;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerSavedProfileDataLocal
	 * Size -> 0x04C0
	 */
	struct FPlayerSavedProfileDataLocal
	{
	public:
		int32_t                                                    Tokens;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5JV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        offerings;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, bool>                                    PageVisited;                                             // 0x0018(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, bool>                                    ChatVisible;                                             // 0x0068(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, bool>                                    OnboardingCompleted;                                     // 0x00B8(0x0050) NativeAccessSpecifierPublic
		int32_t                                                    ConsecutiveMatchStreak;                                  // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Wins;                                                    // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Losses;                                                  // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQ1P[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CurrentSeasonTicks;                                      // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDailyRitualSaveData                                DailyRitualSaveData;                                     // 0x0120(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FUIViewFlagSaveData                                 UIViewFlags;                                             // 0x0128(0x0050) NativeAccessSpecifierPublic
		struct FFearMarketOfferingInstance                         FearMarket;                                              // 0x0178(0x0020) NativeAccessSpecifierPublic
		struct FPlayerLoadoutData                                  LastConnectedLoadout;                                    // 0x0198(0x0098) NativeAccessSpecifierPublic
		int32_t                                                    LastConnectedCharacterIndex;                             // 0x0230(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_657O[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DisconnectPenaltyTime;                                   // 0x0238(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastMatchEndTime;                                        // 0x0240(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastMatchStartTime;                                      // 0x0248(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastKillerMatchEndTime;                                  // 0x0250(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastSurvivorMatchEndTime;                                // 0x0258(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBloodWebPersistentData                             BloodStoreKillers;                                       // 0x0260(0x0050) NativeAccessSpecifierPublic
		struct FBloodWebPersistentData                             BloodStoreSurvivors;                                     // 0x02B0(0x0050) NativeAccessSpecifierPublic
		bool                                                       CrossplayAllowed;                                        // 0x0300(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoDeclineFriendInvites;                                // 0x0301(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IN5B[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterCustomizationPresetsList>          CharacterCustomizationPresets;                           // 0x0308(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterLoadoutPresetsList>                CharacterLoadoutPresets;                                 // 0x0318(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FPlayerSavedProfileCumulativeData                   _cumulativeData;                                         // 0x0328(0x0038) NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FSavedStatsData>                             _savedPlayerStats;                                       // 0x0360(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       _hasBeenGivenKillerTutorialEndReward;                    // 0x0370(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasBeenGivenSurvivorTutorialEndReward;                  // 0x0371(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasSeenBloodpointsOnboardingCurrencyPopup;              // 0x0372(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasSeenAuricCellsOnboardingCurrencyPopup;               // 0x0373(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasSeenIridescentShardsOnboardingCurrencyPopup;         // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasSeenLightSensitivity;                                // 0x0375(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasSeenMainMenu;                                        // 0x0376(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZC4G[0x1];                                   // 0x0377(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FCharacterSavedProfileData>           _characterData;                                          // 0x0378(0x0050) NativeAccessSpecifierPrivate
		TMap<class FName, struct FSpecialEventSavedData>           _specialEvent;                                           // 0x03C8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              _seenCinematics[0x50];                                   // 0x0418(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class FString, struct FReleaseSavedData>              _releases;                                               // 0x0468(0x0050) NativeAccessSpecifierPrivate
		bool                                                       _hasBeginnerTooltipsBeenDisabledAtLevel;                 // 0x04B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_329Q[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ConsoleUserSettings
	 * Size -> 0x00D0
	 */
	struct FConsoleUserSettings
	{
	public:
		unsigned char                                              UnknownData_NJ22[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputActionKeyMapping>                      ActionMappings;                                          // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FInputAxisKeyMapping>                        AxisMappings;                                            // 0x0018(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    MenuScaleFactor;                                         // 0x0028(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HudScaleFactor;                                          // 0x002C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillCheckScaleFactor;                                   // 0x0030(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LargeText;                                               // 0x0034(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BloodwebInteractionBehaviour;                            // 0x0035(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TerrorRadiusVisualFeedback;                              // 0x0036(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8E1Q[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Gamma;                                                   // 0x0038(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HUDPlayerNamesVisibility;                                // 0x003C(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HUDScoreEventsVisibility;                                // 0x003D(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HUDKillerHookCountVisibility;                            // 0x003E(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SurvivorSpecificPingIcon;                                // 0x003F(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LegacyPrestigePortraits;                                 // 0x0040(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ChallengeProgression;                                    // 0x0041(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ChallengeCompletion;                                     // 0x0042(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WM7B[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MainVolume;                                              // 0x0044(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MenuMusicVolume;                                         // 0x0048(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadphones;                                           // 0x004C(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MuteOnFocusLost;                                         // 0x004D(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HapticsVibrationPS5;                                     // 0x004E(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DQ8[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KillerMouseSensitivity;                                  // 0x0050(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivorMouseSensitivity;                                // 0x0054(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillerControllerSensitivity;                             // 0x0058(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivorControllerSensitivity;                           // 0x005C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvertY;                                                 // 0x0060(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SurvivorInvertY;                                         // 0x0061(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KillerToggleInteractions;                                // 0x0062(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SurvivorToggleInteractions;                              // 0x0063(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SprintToCancel;                                          // 0x0064(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TLJ[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HighestWeightSeenNews;                                   // 0x0068(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseAtlantaCustomizedHuds;                                // 0x006C(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseAtlantaSurvivorQuickTurn;                             // 0x006D(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseAtlantaKillerQuickTurn;                               // 0x006E(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWXL[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAtlantaCustomizedHudSettings>               AtlantaCustomizedHuds;                                   // 0x0070(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		bool                                                       HasAcceptedCrossplayPopup;                               // 0x0080(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasAcceptedProgressionSystemInfoPopup;                   // 0x0081(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasAcceptedCrossProgressionPopup;                        // 0x0082(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DHW[0x5];                                   // 0x0083(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBonusTierTooltipVisibility                         BonusTierTooltipVisibility;                              // 0x0088(0x0018) SaveGame, NativeAccessSpecifierPublic
		class FString                                              PartyPrivacyState;                                       // 0x00A0(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorBlindMode;                                          // 0x00B0(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorBlindModeIntensity;                                 // 0x00B4(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BeginnerMode;                                            // 0x00B8(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Subtitles;                                               // 0x00B9(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LEA[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubtitlesBackgroundOpacity;                              // 0x00BC(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubtitlesSize;                                           // 0x00C0(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAnonymousMode;                                         // 0x00C4(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideYourName;                                            // 0x00C5(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideOtherNames;                                          // 0x00C6(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HiddenMatchmakingDelay;                                  // 0x00C7(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasAcceptedHapticsVibrationPopup;                        // 0x00C8(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86EO[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerSavedProfileData
	 * Size -> 0x0608
	 */
	struct FPlayerSavedProfileData
	{
	public:
		class FString                                              PlayerUID;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerSavedProfileDataShared                       SharedData;                                              // 0x0010(0x0068) NativeAccessSpecifierPublic
		struct FPlayerSavedProfileDataLocal                        LocalData;                                               // 0x0078(0x04C0) NativeAccessSpecifierPublic
		struct FConsoleUserSettings                                ConsoleUserSettings;                                     // 0x0538(0x00D0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerPersistentData
	 * Size -> 0x0828
	 */
	struct FPlayerPersistentData
	{
	public:
		EPlayerRole                                                GameRole;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0F0H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerLoadoutData                                  StartingLoadout;                                         // 0x0008(0x0098) Transient, NativeAccessSpecifierPublic
		struct FPlayerLoadoutData                                  CurrentLoadout;                                          // 0x00A0(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQ40[0x98];                                  // 0x0138(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerSavedProfileData                             SavedData;                                               // 0x01D0(0x0608) NativeAccessSpecifierPublic
		EPlatformFlag                                              PlayerPlatform;                                          // 0x07D8(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EDB[0x3];                                   // 0x07D9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EProviderFlag                                              PlayerProvider;                                          // 0x07DC(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TQC[0x3];                                   // 0x07DD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_IDGP[0x48];                                  // 0x07E0(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CloudInventoryItem
	 * Size -> 0x0010
	 */
	struct FCloudInventoryItem
	{
	public:
		int32_t                                                    DefinitionId;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NQH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   InstanceId;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterStateData
	 * Size -> 0x0020
	 */
	struct FCharacterStateData
	{
	public:
		int32_t                                                    _pips;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _powerId;                                                // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        _addonIds;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerStateData
	 * Size -> 0x0038
	 */
	struct FPlayerStateData
	{
	public:
		int32_t                                                    CharacterLevel;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EquipedFavorId;                                          // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        EquipedPerkIds;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            EquipedPerkLevels;                                       // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EGameState                                                 _playerGameState;                                        // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XDJ2[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _prestigeLevel;                                          // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.AwardedScore
	 * Size -> 0x0010
	 */
	struct FAwardedScore
	{
	public:
		class FName                                                ScoreTypeId;                                             // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloodpointsAwarded;                                      // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AwardedScores
	 * Size -> 0x0010
	 */
	struct FAwardedScores
	{
	public:
		TArray<struct FAwardedScore>                               Array;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.UserGameStats
	 * Size -> 0x00B0
	 */
	struct FUserGameStats
	{
	public:
		bool                                                       Disconnected;                                            // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WL47[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FearTokens;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Skulls;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XHS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EDBDScoreCategory, int32_t>                           BonusBloodpoints;                                        // 0x0010(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<EDBDScoreCategory, int32_t>                           _bloodpoints;                                            // 0x0060(0x0050) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.OngoingScoreData
	 * Size -> 0x0030
	 */
	struct FOngoingScoreData
	{
	public:
		EDBDScoreTypes                                             scoreType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILBV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        scoreTypeTag;                                            // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceScore;                                          // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApplyScoreTimeout;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedPercent;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQ74[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             CustomObjectParameter;                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.StreamerModePlayerData
	 * Size -> 0x0008
	 */
	struct FStreamerModePlayerData
	{
	public:
		bool                                                       IsAnonymousMode;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3I62[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AnonymousSuffix;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualDifficulty
	 * Size -> 0x000C
	 */
	struct FAtlantaRitualDifficulty
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayThreshold;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualInstance
	 * Size -> 0x0060
	 */
	struct FAtlantaRitualInstance
	{
	public:
		class FName                                                RitualKey;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    characterId;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT8I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EDBDScoreTypes>                                     TrackedEvents;                                           // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      TrackedGameEvents;                                       // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UAtlantaRitualEvaluatorBase*                         Evaluator;                                               // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAtlantaRitualDifficulty                            Difficulty;                                              // 0x0040(0x000C) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Active;                                                  // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0WF[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           ExpiryDate;                                              // 0x0058(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualSet
	 * Size -> 0x0038
	 */
	struct FAtlantaRitualSet
	{
	public:
		TArray<struct FAtlantaRitualInstance>                      Instances;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRewardItem>                                 RewardItems;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_524P[0x18];                                  // 0x0020(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DailyRitualInstance
	 * Size -> 0x0078
	 */
	struct FDailyRitualInstance
	{
	public:
		class FString                                              ritualId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EDBDScoreTypes>                                     TrackedEvents;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                TrackedGameEvents;                                       // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CharacterIDs;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPlayerRole>                                        Roles;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Threshold;                                               // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayThreshold;                                        // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpReward;                                               // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Active;                                                  // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTemporary;                                             // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYYY[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DateAssigned;                                            // 0x0068(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URitualEvaluatorBase*                                Evaluator;                                               // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DialogClipSettings
	 * Size -> 0x0028
	 */
	struct FDialogClipSettings
	{
	public:
		class UAkAudioEvent*                                       Clip;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ConditionClass;                                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogHandlerCondition*                             Condition;                                               // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOnlyPlayingOnce;                                       // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6LF[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DialogEventSettings
	 * Size -> 0x0030
	 */
	struct FDialogEventSettings
	{
	public:
		struct FGameplayTag                                        GameEventTrigger;                                        // 0x0000(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIBH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDialogClipSettings>                         Clips;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       OverrideCurrentAudio;                                    // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29P5[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayUntilPlay;                                          // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayProbability;                                         // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXVU[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.GeneratorQueryHandlePair
	 * Size -> 0x0028
	 */
	struct FGeneratorQueryHandlePair
	{
	public:
		unsigned char                                              UnknownData_HGF3[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EffectsLocatorTargets
	 * Size -> 0x0008
	 */
	struct FEffectsLocatorTargets
	{
	public:
		class UClass*                                              TargetActorClass;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.GameEventData
	 * Size -> 0x0028
	 */
	struct FGameEventData
	{
	public:
		class ADBDPlayer*                                          Instigator;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CustomValue;                                             // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H23D[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CustomObjectParameter;                                   // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomIntValue;                                          // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0S5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DamageData
	 * Size -> 0x0020
	 */
	struct FDamageData
	{
	public:
		bool                                                       _isRegressing;                                           // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isIntense;                                              // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A80M[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ADBDPlayer>                           _lastDamageChangeSource;                                 // 0x0004(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BJY4[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerFloatTuple
	 * Size -> 0x0010
	 */
	struct FPlayerFloatTuple
	{
	public:
		class ACharacter*                                          Player;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO0U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ReflectionCaptureTwoStates
	 * Size -> 0x0030
	 */
	struct FReflectionCaptureTwoStates
	{
	public:
		struct FComponentReference                                 ComponentReference;                                      // 0x0000(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.InboxMessageUIData
	 * Size -> 0x0060
	 */
	struct FInboxMessageUIData
	{
	public:
		class FString                                              MessageId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ReceivedTime;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInboxMessageUIType                                        MessageType;                                             // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTNZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageTitle;                                            // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MessageBody;                                             // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInboxMessageUIState                                       MessageState;                                            // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPY6[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClaimableInboxMessage                              AttachedClaimable;                                       // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ObjectLock
	 * Size -> 0x0008
	 */
	struct FObjectLock
	{
	public:
		TWeakObjectPtr<class UObject>                              _lockingObject;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.LandingPageTabData
	 * Size -> 0x0058
	 */
	struct FLandingPageTabData
	{
	public:
		class FText                                                DefaultText;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              DefaultImage[0x10];                                      // 0x0018(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		struct FSlateColor                                         BannerBackgroudColor;                                    // 0x0028(0x0028) Edit, NativeAccessSpecifierPublic
		bool                                                       IsButtonEnabled;                                         // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4ZP[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LevelReadyToPlayRequirements
	 * Size -> 0x0010
	 */
	struct FLevelReadyToPlayRequirements
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              perkCount;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              itemCount;                                               // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              addonCount;                                              // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BAH[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LightingSpecifics
	 * Size -> 0x0030
	 */
	struct FLightingSpecifics
	{
	public:
		unsigned char                                              LightBlueprint[0x30];                                    // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SceneLightingDescription
	 * Size -> 0x00D0
	 */
	struct FSceneLightingDescription
	{
	public:
		class FName                                                ThemeName;                                               // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RJH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLightingSpecifics                                  LightingDetailsLowMedium;                                // 0x0010(0x0030) Edit, NativeAccessSpecifierPublic
		struct FLightingSpecifics                                  LightingDetailsHighUltra;                                // 0x0040(0x0030) Edit, NativeAccessSpecifierPublic
		struct FLightingSpecifics                                  LightingAtlanta;                                         // 0x0070(0x0030) Edit, NativeAccessSpecifierPublic
		unsigned char                                              TextureCube[0x30];                                       // 0x00A0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.LoudNoiseIndicatorData
	 * Size -> 0x0020
	 */
	struct FLoudNoiseIndicatorData
	{
	public:
		class UStaticMeshComponent*                                MeshMask;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                DistortionMesh;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainingTime;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.TileProperties
	 * Size -> 0x0078
	 */
	struct FTileProperties
	{
	public:
		unsigned char                                              UnknownData_26BE[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.MontageInstanceInfo
	 * Size -> 0x0030
	 */
	struct FMontageInstanceInfo
	{
	public:
		unsigned char                                              UnknownData_959Z[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.RarityTexture
	 * Size -> 0x0030
	 */
	struct FRarityTexture
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLVF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     Texture;                                                 // 0x0010(0x0020) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OfferingTypeTexture
	 * Size -> 0x0030
	 */
	struct FOfferingTypeTexture
	{
	public:
		class FName                                                Type;                                                    // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S93W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     TextureBack;                                             // 0x0010(0x0020) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OfferingRevealDelays
	 * Size -> 0x0008
	 */
	struct FOfferingRevealDelays
	{
	public:
		EOfferingSequenceState                                     RevealState;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJX6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Delay;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OnScreenDebugInfo
	 * Size -> 0x0028
	 */
	struct FOnScreenDebugInfo
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL7Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   Key;                                                     // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToDisplay;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6ZB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PalletPushSettings
	 * Size -> 0x0002
	 */
	struct FPalletPushSettings
	{
	public:
		bool                                                       IgnorePlayerExecutingPulldown;                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPalletPushSideStrategy                                    PalletPushSideStrategy;                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventUIInfo
	 * Size -> 0x0060
	 */
	struct FSpecialEventUIInfo
	{
	public:
		class FString                                              EventId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventBannerFrameLabel;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventThemeFrameLabel;                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                EventName;                                               // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		bool                                                       IsPastEvent;                                             // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PK07[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BloodwebCollectSoundEvent;                               // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.InventorySlotData
	 * Size -> 0x0128
	 */
	struct FInventorySlotData
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BF0C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconFilePath;                                            // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ParentDisplayName;                                       // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ParentTypeDisplayName;                                   // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsParentAvailable;                                       // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6S5G[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPerkCategory>                                      PerkCategory;                                            // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		EOfferingCategory                                          OfferingCategory;                                        // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryItemType                                         ItemType;                                                // 0x0079(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x007A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x007B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Subtitle;                                                // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemAvailability                                          Availability;                                            // 0x0094(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTeachablePerk;                                         // 0x0095(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSlasherPerk;                                           // 0x0096(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPerkAvailableInFearMarket;                             // 0x0097(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPerkAvailableInBloodWeb;                               // 0x0098(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XV94[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeachableLevel;                                          // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DlcDisplayName;                                          // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x00B0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8ZM[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpecialEventUIInfo                                 EventInfo;                                               // 0x00B8(0x0060) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		int32_t                                                    UnlockableLevel;                                         // 0x0118(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLimitedItem;                                           // 0x011C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPrivateIcon;                                           // 0x011D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x011E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSharablePerk;                                          // 0x011F(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoadoutPartState                                          LoadoutPartState;                                        // 0x0120(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2I2W[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PerspectiveEffectData
	 * Size -> 0x001C
	 */
	struct FPerspectiveEffectData
	{
	public:
		bool                                                       WantsActive;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANEN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      ActivationEvent;                                         // 0x0004(0x0010) ELEMENT_SIZE_MISMATCH BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HK8R[0x4];                                   // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPerspectiveActivationCondition                            Condition;                                               // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4NK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AvailableInteractionCalculator
	 * Size -> 0x01C0
	 */
	struct FAvailableInteractionCalculator
	{
	public:
		unsigned char                                              UnknownData_FGC3[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _interactions[0x50];                                     // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_2HT3[0x118];                                 // 0x0098(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _fullEvaluationFrequency;                                // 0x01B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _maxFramesForFullEvaluation;                             // 0x01B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _secondsBetweenNullReferenceCleanup;                     // 0x01B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CWPP[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SectionLenghtsProperties
	 * Size -> 0x0008
	 */
	struct FSectionLenghtsProperties
	{
	public:
		EDirection                                                 Direction;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONX7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Length;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.QuadrantSpawnTypeProperties
	 * Size -> 0x0018
	 */
	struct FQuadrantSpawnTypeProperties
	{
	public:
		EQuadrantSpawnType                                         QuadrantSpawnType;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXXT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSectionLenghtsProperties>                   SectionLenghts;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.WeightedItem
	 * Size -> 0x0038
	 */
	struct FWeightedItem
	{
	public:
		unsigned char                                              Element[0x30];                                           // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      Weight;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEV2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.QuadrantSpawnItem
	 * Size -> 0x0018
	 */
	struct FQuadrantSpawnItem
	{
	public:
		EQuadrantSpawnType                                         Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WA4B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedItem>                               Elements;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.QuadrantSpawnCategories
	 * Size -> 0x0020
	 */
	struct FQuadrantSpawnCategories
	{
	public:
		class FName                                                QuadrantSpawnTag;                                        // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZJW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQuadrantSpawnItem>                          Items;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ElementSubstitutions
	 * Size -> 0x0010
	 */
	struct FElementSubstitutions
	{
	public:
		unsigned char                                              UnknownData_B4T6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SubstitutionElements
	 * Size -> 0x0060
	 */
	struct FSubstitutionElements
	{
	public:
		unsigned char                                              _elementToReplace[0x30];                                 // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              _elementToReplaceWith[0x30];                             // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.GameplayElementSubstitutions
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FGameplayElementSubstitutions : public FElementSubstitutions
	{
	public:
		TArray<struct FSubstitutionElements>                       _replacements;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		EGameplayElementType                                       _type;                                                   // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WFLY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ThemeProperties
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FThemeProperties : public FDBDTableRowBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Weather;                                                 // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioStateThemes;                                        // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioStateWeather;                                       // 0x002C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioThemeEvent;                                         // 0x0038(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AudioLimitPointEvent;                                    // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AudioThemeSoundBank[0x30];                               // 0x0050(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              TilePath;                                                // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapPath;                                                 // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ThemeNumber;                                             // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB5J[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x00A8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EThemeColorId                                              ThemeColorId;                                            // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOfferingEffectType                                        ThemeSelectionOfferingEffectType;                        // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1MQ[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayElementSubstitutions>               SubstitutionElements;                                    // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              DlcIDString;                                             // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardData*                                     Blackboard;                                              // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Gesture;                                                 // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XKV[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.KillerItemProperty
	 * Size -> 0x0070
	 */
	struct FKillerItemProperty
	{
	public:
		unsigned char                                              Object[0x30];                                            // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class UCurveFloat*                                         Population;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGameplayElementType                                       _gameplayElementType;                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RSUA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IterativeWeightAdjustmentStrategyClass[0x30];            // 0x0040(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.KillerItemDependencies
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FKillerItemDependencies : public FDBDTableRowBase
	{
	public:
		EKillerAbilities                                           killerAbility;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMMI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKillerItemProperty>                         Items;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SurvivorItemProperties
	 * Size -> 0x000C
	 */
	struct FSurvivorItemProperties
	{
	public:
		ECollectableCategory                                       Category;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9Z2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPopulation;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.EscapeStrategyProperty
	 * Size -> 0x0018
	 */
	struct FEscapeStrategyProperty
	{
	public:
		EscapeStrategyType                                         Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAVV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         Population;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PMC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EscapeTypeObjects
	 * Size -> 0x0018
	 */
	struct FEscapeTypeObjects
	{
	public:
		EscapeStrategyType                                         Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GXB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EscapeObjects[0x10];                                     // 0x0008(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.GameplayElementsPopulation
	 * Size -> 0x0078
	 */
	struct FGameplayElementsPopulation
	{
	public:
		EGameplayElementType                                       Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QCBW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GameplayElementBlueprint[0x30];                          // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    MinPopulation;                                           // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxPopulation;                                           // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinGuaranteePopulation;                                  // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    SpawnPass;                                               // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              IterativeWeightAdjustmentStrategyClass[0x30];            // 0x0048(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.ManagedGameplayElementsPopulation
	 * Size -> 0x0048
	 */
	struct FManagedGameplayElementsPopulation
	{
	public:
		EGameplayElementType                                       Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7JN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GameplayElementBlueprint[0x30];                          // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      MinDistance;                                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinPopulation;                                           // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPopulation;                                           // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LC43[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SurvivorGroupingProbability
	 * Size -> 0x0008
	 */
	struct FSurvivorGroupingProbability
	{
	public:
		ESurvivorGrouping                                          Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOVE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Probability;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialBehaviourPopulation
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FSpecialBehaviourPopulation : public FDBDTableRowBase
	{
	public:
		class FName                                                _name;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_91W5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EGameplayElementType>                               _spawnerTypes;                                           // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<ETileSpawnPointType>                                _spawnPointTypes;                                        // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              _actor[0x30];                                            // 0x0038(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              IterativeWeightAdjustmentStrategyClass[0x30];            // 0x0068(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.DependencyElementSubstitutions
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FDependencyElementSubstitutions : public FElementSubstitutions
	{
	public:
		TArray<struct FSubstitutionElements>                       _replacements;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		ETileSpawnPointType                                        _type;                                                   // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9M8X[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DependencyElementAddition
	 * Size -> 0x0038
	 */
	struct FDependencyElementAddition
	{
	public:
		unsigned char                                              _object[0x30];                                           // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		ETileSpawnPointType                                        _type;                                                   // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4VW7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _numberToAdd;                                            // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.GameplayElementAddition
	 * Size -> 0x0040
	 */
	struct FGameplayElementAddition
	{
	public:
		unsigned char                                              _elementToAdd[0x30];                                     // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		EGameplayElementType                                       _spawnerType;                                            // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JGB8[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _numberToAdd;                                            // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _numberToAddAffectedByOffering;                          // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KKJK[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EventSubstitionData
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FEventSubstitionData : public FDBDTableRowBase
	{
	public:
		class FName                                                _name;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _allowSubstitutionInKYF;                                 // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8O2O[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _baseNumOfSubstitutionPerGroup;                          // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PN2T[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayElementSubstitutions>               _gameplaySubstitutionElements;                           // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FDependencyElementSubstitutions>             _dependencySubstitutionElements;                         // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FDependencyElementAddition>                  _dependencyElementAdditions;                             // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGameplayElementAddition>                    _gameplayElementAdditions;                               // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.ArrayOfSceneComponent
	 * Size -> 0x0010
	 */
	struct FArrayOfSceneComponent
	{
	public:
		TArray<class USceneComponent*>                             sceneComp;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ManagedGameplayElementData
	 * Size -> 0x0050
	 */
	struct FManagedGameplayElementData
	{
	public:
		unsigned char                                              UnknownData_1173[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorSpawner*>                               ActivatedSpawners;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UActorSpawner*>                               RemovedSpawners;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EGameplayElementType                                       PopulationType;                                          // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M33W[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentPopulationCost;                                   // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPopulationCost;                                       // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinPopulationCost;                                       // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapWidth;                                                // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinProximityBetweenElements;                             // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistSqrBetweenElements;                               // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileWidth;                                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FactorToAdjustToWhenOutOfProximity;                      // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOEK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.GeneratedLevelData
	 * Size -> 0x0310
	 */
	struct FGeneratedLevelData
	{
	public:
		class FString                                              UsedPaperTileMap;                                        // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PremadeMap;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StreamRelatedSeed;                                       // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AvailableEscapeCount;                                    // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AvailableSurvivorItemCount;                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESurvivorGrouping                                          GroupingType;                                            // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYOJ[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     KillerSpawnPoint;                                        // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             SurvivorSpawnPoints;                                     // 0x0038(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             InteractableElementsSpawnPoints;                         // 0x0048(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 SpecialBehaviourRequestCounts;                           // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FName, struct FArrayOfSceneComponent>           SpecialBehaviourSpawnPoints;                             // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<class FName, struct FArrayOfSceneComponent>           SpecialBehaviourActorSpawners;                           // 0x00F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             SearchableSpawners;                                      // 0x0148(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             HexSpawners;                                             // 0x0158(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             KillerLairSpawners;                                      // 0x0168(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             HatchSpawners;                                           // 0x0178(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             MainBuildingHatchSpawners;                               // 0x0188(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             ShackHatchSpawners;                                      // 0x0198(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             BreakableWallSpawners;                                   // 0x01A8(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             EscapeSpawners;                                          // 0x01B8(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FManagedGameplayElementData                         BookshelfManagedGameplayElementData;                     // 0x01C8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FManagedGameplayElementData                         MeatHookManagedGameplayElementData;                      // 0x0218(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FDependency>                                 LevelDependencies;                                       // 0x0268(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDependency>                                 LateLevelDependencies;                                   // 0x0278(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      FixedMapTileIds;                                         // 0x0288(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      FixedMapOrphanSpawners;                                  // 0x0298(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class USceneComponent*>                             FinisherMoriSpawnPoints;                                 // 0x02A8(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                SpecialEventId;                                          // 0x02B8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseForcedMap;                                            // 0x02C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsePremadeMap;                                           // 0x02C5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MIM[0x2];                                   // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GenerationLogs;                                          // 0x02C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GenerationErrors;                                        // 0x02D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GenerationPlayerCount;                                   // 0x02E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH0X[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FForceSpawnTileData>                         ForceSpawnTileData;                                      // 0x02F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      LevelLightings;                                          // 0x0300(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackContentTypeData
	 * Size -> 0x0060
	 */
	struct FPromoPackContentTypeData
	{
	public:
		unsigned char                                              CorrespondingWidget[0x30];                               // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ContentTypeIcon[0x30];                                   // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.Region
	 * Size -> 0x0020
	 */
	struct FRegion
	{
	public:
		class FName                                                Region;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KOM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IP;                                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DailyRitualContainer
	 * Size -> 0x0028
	 */
	struct FDailyRitualContainer
	{
	public:
		struct FDateTime                                           LastRitualReceivedDate;                                  // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastRitualPopupDate;                                     // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastRitualDismissedDate;                                 // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDailyRitualInstance>                        rituals;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CoreRitualsTunables
	 * Size -> 0x0004
	 */
	struct FCoreRitualsTunables
	{
	public:
		int32_t                                                    MaxRituals;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RewardResponseItem
	 * Size -> 0x0030
	 */
	struct FRewardResponseItem
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Type_IsSet;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_K184[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ID;                                                      // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NI3V[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CoreRitualsDifficulty
	 * Size -> 0x0020
	 */
	struct FCoreRitualsDifficulty
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisplayThreshold;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZSD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         Rewards;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CoreRitualsEntry
	 * Size -> 0x0020
	 */
	struct FCoreRitualsEntry
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCoreRitualsDifficulty>                      Difficulty;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CoreRitualsContent
	 * Size -> 0x0018
	 */
	struct FCoreRitualsContent
	{
	public:
		struct FCoreRitualsTunables                                Config;                                                  // 0x0000(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSHC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoreRitualsEntry>                           Data;                                                    // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotViewSetting
	 * Size -> 0x0028
	 */
	struct FScreenshotViewSetting
	{
	public:
		float                                                      distance;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateralOffset;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOffset;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterYaw;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterRoll;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterPitch;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraPitch;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RoleItemCategoryDropdown
	 * Size -> 0x0004 (FullSize[0x000C] - InheritedSize[0x0008])
	 */
	struct FRoleItemCategoryDropdown : public FCharacterDropdown
	{
	public:
		bool                                                       IncludeOutfits;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeNone;                                             // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomizationCategory                                     Category;                                                // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SV1Q[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.GenderViewSetting
	 * Size -> 0x0044
	 */
	struct FGenderViewSetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoleItemCategoryDropdown                           RoleItemCategory;                                        // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		EGender                                                    Gender;                                                  // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQT1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenshotViewSetting                              Settings;                                                // 0x001C(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterItemCategoryViewSetting
	 * Size -> 0x0040
	 */
	struct FCharacterItemCategoryViewSetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoleItemCategoryDropdown                           CharacterDropdown;                                       // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScreenshotViewSetting                              Settings;                                                // 0x0018(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomizationItemDropdown
	 * Size -> 0x000E (FullSize[0x0010] - InheritedSize[0x0002])
	 */
	struct FCustomizationItemDropdown : public FRoleDropdown
	{
	public:
		unsigned char                                              UnknownData_LCL7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemId;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemViewSetting
	 * Size -> 0x0044
	 */
	struct FItemViewSetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCustomizationItemDropdown                          Item;                                                    // 0x000C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScreenshotViewSetting                              Settings;                                                // 0x001C(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RoleGenderViewSetting
	 * Size -> 0x0038
	 */
	struct FRoleGenderViewSetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoleDropdown                                       RoleDropdown;                                            // 0x000C(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		EGender                                                    Gender;                                                  // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ3M[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenshotViewSetting                              Settings;                                                // 0x0010(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterViewSetting
	 * Size -> 0x003C
	 */
	struct FCharacterViewSetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterDropdown                                  CharacterDropdown;                                       // 0x000C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScreenshotViewSetting                              Settings;                                                // 0x0014(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OutfitDropdown
	 * Size -> 0x000C (FullSize[0x0014] - InheritedSize[0x0008])
	 */
	struct FOutfitDropdown : public FCharacterDropdown
	{
	public:
		class FName                                                OutfitId;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OutfitViewSetting
	 * Size -> 0x0048
	 */
	struct FOutfitViewSetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOutfitDropdown                                     OutfitDropdown;                                          // 0x000C(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScreenshotViewSetting                              Settings;                                                // 0x0020(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterAnimationDropdown
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FCharacterAnimationDropdown : public FRoleItemCategoryDropdown
	{
	public:
		bool                                                       IncludeAllAnimations;                                    // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAnimBP;                                                // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CI13[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnimAsset;                                               // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterAnimationAssetDropdown
	 * Size -> 0x0018
	 */
	struct FCharacterAnimationAssetDropdown
	{
	public:
		bool                                                       IsAnimBP;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3I27[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnimAsset;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterAnimationAssetOutfitOverride
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FCharacterAnimationAssetOutfitOverride : public FCharacterAnimationAssetDropdown
	{
	public:
		class FName                                                OutfitId;                                                // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEE8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterAnimation
	 * Size -> 0x0040
	 */
	struct FCharacterAnimation
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18RY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimationDropdown                         Data;                                                    // 0x0010(0x0020) Edit, NativeAccessSpecifierPublic
		TArray<struct FCharacterAnimationAssetOutfitOverride>      OutfitOverrides;                                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharmCategorySetting
	 * Size -> 0x0038
	 */
	struct FCharmCategorySetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharmCategory                                             CharmCategory;                                           // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JXB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScreenshotViewSetting                              Settings;                                                // 0x0010(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharmViewSetting
	 * Size -> 0x0044
	 */
	struct FCharmViewSetting
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharmDropdown                                      CharmId;                                                 // 0x000C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScreenshotViewSetting                              Settings;                                                // 0x001C(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotVFXCharmHookCharmData
	 * Size -> 0x00B8
	 */
	struct FScreenshotVFXCharmHookCharmData
	{
	public:
		unsigned char                                              TargetSystem[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      VFXWarmupTime;                                           // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXV4[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TargetMaterial[0x30];                                    // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<class FName, float>                                   MaterialScalarParameters;                                // 0x0068(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotVFXCharmHookCharm
	 * Size -> 0x00C8
	 */
	struct FScreenshotVFXCharmHookCharm
	{
	public:
		struct FCharmDropdown                                      Charm;                                                   // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScreenshotVFXCharmHookCharmData                    Data;                                                    // 0x0010(0x00B8) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RoleGenderCharacterRotation
	 * Size -> 0x0014
	 */
	struct FRoleGenderCharacterRotation
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoleDropdown                                       Role;                                                    // 0x000C(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8R6[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rotation;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SimpleCharacterDropdown
	 * Size -> 0x0004
	 */
	struct FSimpleCharacterDropdown
	{
	public:
		int32_t                                                    characterId;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterCamera
	 * Size -> 0x0010
	 */
	struct FCharacterCamera
	{
	public:
		class FName                                                label;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSimpleCharacterDropdown                            Data;                                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterCameraTag
	 * Size -> 0x0018
	 */
	struct FCharacterCameraTag
	{
	public:
		class ACameraActor*                                        Camera;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharacterCamera>                            Characters;                                              // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.StorefrontStateData
	 * Size -> 0x0001
	 */
	struct FStorefrontStateData
	{
	public:
		unsigned char                                              UnknownData_9AQR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SubscriptionRewardTypeData
	 * Size -> 0x0030
	 */
	struct FSubscriptionRewardTypeData
	{
	public:
		unsigned char                                              RewardItemWidget[0x30];                                  // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SurvivorActivity
	 * Size -> 0x0028
	 */
	struct FSurvivorActivity
	{
	public:
		bool                                                       ShouldDisplayProgress;                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67J9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                TagsAssociatedWithAction;                                // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivityType;                                            // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPXA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArrayOfATile
	 * Size -> 0x0010
	 */
	struct FArrayOfATile
	{
	public:
		TArray<class ATile*>                                       ArrayOfTiles;                                            // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.QuadrantInfo
	 * Size -> 0x0020
	 */
	struct FQuadrantInfo
	{
	public:
		unsigned char                                              UnknownData_SUGA[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArrayOfInt32
	 * Size -> 0x0010
	 */
	struct FArrayOfInt32
	{
	public:
		TArray<int32_t>                                            value;                                                   // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SelectableTileSpawnPoint
	 * Size -> 0x0030
	 */
	struct FSelectableTileSpawnPoint
	{
	public:
		struct FComponentReference                                 ComponentReference;                                      // 0x0000(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RichTextFreeTicketImageInfo
	 * Size -> 0x00A0
	 */
	struct FRichTextFreeTicketImageInfo
	{
	public:
		unsigned char                                              UnknownData_GMZW[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0090(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RichTextFreeTicketTextInfo
	 * Size -> 0x02B0
	 */
	struct FRichTextFreeTicketTextInfo
	{
	public:
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0000(0x0288) Edit, NativeAccessSpecifierPublic
		class FText                                                Content;                                                 // 0x0288(0x0018) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x02A0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.FriendWidgetList
	 * Size -> 0x0010
	 */
	struct FFriendWidgetList
	{
	public:
		unsigned char                                              UnknownData_3C75[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PartyMemberUIData
	 * Size -> 0x0030
	 */
	struct FPartyMemberUIData
	{
	public:
		bool                                                       _isLocalPlayer;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isReady;                                                // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4QDU[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              _mirrorId;                                               // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _playerName;                                             // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _playerId;                                               // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_76FC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EventItemsContentTypeUIData
	 * Size -> 0x0090
	 */
	struct FEventItemsContentTypeUIData
	{
	public:
		EEventItemContentType                                      ContentType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NeedRemoveRarityBackground;                              // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDefaultRarityBackgroundColor;                         // 0x0002(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WVX[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         DefaultRarityBackgroundColor;                            // 0x0008(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              BackgroundTexture[0x30];                                 // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RarityBackgroundTexture[0x30];                           // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.PrestigeData
	 * Size -> 0x0008
	 */
	struct FPrestigeData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PurchaseCurrencyData
	 * Size -> 0x0020
	 */
	struct FPurchaseCurrencyData
	{
	public:
		unsigned char                                              UnknownData_OIF7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECurrencyType                                              CurrencyType;                                            // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQ81[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Price;                                                   // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiscountPercentage;                                      // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAffordable;                                            // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJ5L[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaFreeTicketAffectedUIData
	 * Size -> 0x0030
	 */
	struct FAtlantaFreeTicketAffectedUIData
	{
	public:
		class FString                                              InEffectBGFilePath;                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ID;                                                      // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMV9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           EndDate;                                                 // 0x0020(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasFreeTicketToUse;                                      // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BXL[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterSlotData
	 * Size -> 0x0180
	 */
	struct FCharacterSlotData
	{
	public:
		unsigned char                                              UnknownData_X4DK[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ID;                                                      // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    characterIndex;                                          // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconFilePath;                                            // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BackgroundImagePath;                                     // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Biography;                                               // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DLCId;                                                   // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DLCTitle;                                                // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrestigeData                                       PrestigeData;                                            // 0x007C(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic
		ECharacterDifficulty                                       Difficulty;                                              // 0x0084(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnlocked;                                              // 0x0085(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDLCPurchasable;                                        // 0x0086(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AGJ[0x1];                                   // 0x0087(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPurchaseCurrencyData>                       PurchaseDataList;                                        // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    ItemsOwned;                                              // 0x0098(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalItems;                                              // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowNew;                                                 // 0x00A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDlcLockedKiller;                                       // 0x00A1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFF3[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpecialEventUIInfo                                 EventInfo;                                               // 0x00A8(0x0060) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x0108(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFVA[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       HasNonSelectedPerks;                                     // 0x0110(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8L9[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAtlantaFreeTicketAffectedUIData                    FreeTicketAffectedData;                                  // 0x0118(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFT9[0x30];                                  // 0x0148(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPlayerRole                                                PlayerRole;                                              // 0x0178(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8OX[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StoreItemSlotData
	 * Size -> 0x01C0
	 */
	struct FStoreItemSlotData
	{
	public:
		unsigned char                                              UnknownData_1QL3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemId;                                                  // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomizationCategory                                     Category;                                                // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W64[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MirrorsId;                                               // 0x0018(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQM6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconPath;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayCollectionName;                                   // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleCategoryInfo;                                        // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RarityPartInfo;                                          // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGFE[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpecialEventUIInfo                                 EventInfo;                                               // 0x0090(0x0060) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		TArray<struct FPurchaseCurrencyData>                       PurchaseDataList;                                        // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class FName>                                        ParentBundleIds;                                         // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class FName>                                        ChildrenItemIds;                                         // 0x0110(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FCustomTransformation                               CustomTransformation;                                    // 0x0120(0x0014) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0134(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBuyable;                                               // 0x0135(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEquipped;                                              // 0x0136(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNewInStore;                                            // 0x0137(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x0138(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInStore;                                               // 0x0139(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                AssociatedRole;                                          // 0x013A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYVW[0x5];                                   // 0x013B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           ReleaseDate;                                             // 0x0140(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x0148(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GBI[0x77];                                  // 0x0149(0x0077) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomizedHudPlayerWrapperIdMapContainer
	 * Size -> 0x0010
	 */
	struct FCustomizedHudPlayerWrapperIdMapContainer
	{
	public:
		TArray<struct FGameplayTag>                                Ids;                                                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RewardLayoutWidgetToGenerate
	 * Size -> 0x0090
	 */
	struct FRewardLayoutWidgetToGenerate
	{
	public:
		unsigned char                                              CharacterRewardWidget[0x30];                             // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CurrencyRewardWidget[0x30];                              // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              SpacerWidget[0x30];                                      // 0x0060(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.StatusEffectSlotData
	 * Size -> 0x0048
	 */
	struct FStatusEffectSlotData
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconFilePath;                                            // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PBP[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CurrencyPurchaseData
	 * Size -> 0x0068
	 */
	struct FCurrencyPurchaseData
	{
	public:
		unsigned char                                              UnknownData_PBUE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconPath;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencyName;                                            // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencyIcon;                                            // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyAmount;                                          // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOX6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayedPrice;                                          // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusPercentage;                                         // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZJN[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           BonusEndDate;                                            // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BasicCurrencyAmount;                                     // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LH5[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ScoreCategoryUIExtraData
	 * Size -> 0x0028
	 */
	struct FScoreCategoryUIExtraData
	{
	public:
		class FText                                                ScoreCategoryName;                                       // 0x0000(0x0018) Edit, Transient, NativeAccessSpecifierPublic
		class UTexture2D*                                          ScoreCategoryAsset;                                      // 0x0018(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoreValue;                                              // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QB6P[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EmblemQualityImages
	 * Size -> 0x0120
	 */
	struct FEmblemQualityImages
	{
	public:
		struct FSlateBrush                                         HighlightImage;                                          // 0x0000(0x0090) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DarkImage;                                               // 0x0090(0x0090) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.EmblemProgressionData
	 * Size -> 0x0018
	 */
	struct FEmblemProgressionData
	{
	public:
		class FString                                              ProgressionText;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProgressionPercent;                                      // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5WJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EmblemSlotData
	 * Size -> 0x0070
	 */
	struct FEmblemSlotData
	{
	public:
		EEmblemQuality                                             Quality;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOY1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V12T[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      IconPaths;                                               // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ThresholdPoints;                                         // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      CurrentPoints;                                           // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SWO[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEmblemProgressionData>                      ProgressionData;                                         // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    CharacterExperience;                                     // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8O7[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TallyScorePipsData
	 * Size -> 0x0030
	 */
	struct FTallyScorePipsData
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOOD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              PipThresholds;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FEmblemSlotData>                             Scores;                                                  // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    PipsDelta;                                               // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSlasher;                                               // 0x002C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCustomMatch;                                           // 0x002D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9Y0[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TallyPlayerResultData
	 * Size -> 0x02F0
	 */
	struct FTallyPlayerResultData
	{
	public:
		class FName                                                CharacterIconPath;                                       // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BO5K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              playerID;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlatformAccountId;                                       // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MirrorsId;                                               // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerName;                                              // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              characterName;                                           // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerScore;                                             // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerRank;                                              // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameState                                                 PlayerStatus;                                            // 0x0068(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXML[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventorySlotData                                  OfferingData;                                            // 0x0070(0x0128) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		TArray<struct FInventorySlotData>                          PerksData;                                               // 0x0198(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FInventorySlotData                                  ItemData;                                                // 0x01A8(0x0128) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		TArray<struct FInventorySlotData>                          AddonsData;                                              // 0x02D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FPrestigeData                                       PrestigeData;                                            // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsReported;                                              // 0x02E8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSlasher;                                               // 0x02E9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMyScore;                                               // 0x02EA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOffNetwork;                                            // 0x02EB(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowPortraitBorder;                                      // 0x02EC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsABot;                                                  // 0x02ED(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_626J[0x2];                                   // 0x02EE(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TeachableData
	 * Size -> 0x0140
	 */
	struct FTeachableData
	{
	public:
		struct FInventorySlotData                                  InventorySlotData;                                       // 0x0000(0x0128) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		ETeachableStatus                                           Status;                                                  // 0x0128(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZQB[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UnlockLevel;                                             // 0x012C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.NativeBlockIndicatorData
	 * Size -> 0x0018
	 */
	struct FNativeBlockIndicatorData
	{
	public:
		bool                                                       IsBlockActive;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBlockUpdating;                                         // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SQ7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentBlockFade;                                        // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         FadeCurve;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActorComponent*                                     BlockIndicator;                                          // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.VaultData
	 * Size -> 0x0038
	 */
	struct FVaultData
	{
	public:
		unsigned char                                              UnknownData_HPP8[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ScoreEventData
	 * Size -> 0x0018
	 */
	struct FScoreEventData
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentToAward;                                          // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFA9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CustomObjectParameter;                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.InteractionPlayerProperties
	 * Size -> 0x0050
	 */
	struct FInteractionPlayerProperties
	{
	public:
		struct FVector_NetQuantize                                 AverageVelocityAtStart;                                  // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 PlayerPositionAtStart;                                   // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerRotationAtStart;                                   // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ADBDPlayer>                           requester;                                               // 0x0024(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 SnapPositionAtStart;                                     // 0x002C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SnapRotationAtStart;                                     // 0x0038(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SnapDistanceAtStart;                                     // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapTimeAtStart;                                         // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldSnapPosition;                                      // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE4M[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TooltipPressedData
	 * Size -> 0x0018
	 */
	struct FTooltipPressedData
	{
	public:
		struct FVector2D                                           touchPosition;                                           // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99I7[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CamperHealResult
	 * Size -> 0x0018
	 */
	struct FCamperHealResult
	{
	public:
		ECamperDamageState                                         PreviousDamageState;                                     // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECamperDamageState                                         CurrentDamageState;                                      // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERVN[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HealAmount;                                              // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ADBDPlayer*>                                  Healers;                                                 // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.FirecrackerEffectData
	 * Size -> 0x0010
	 */
	struct FFirecrackerEffectData
	{
	public:
		class AFirecracker*                                        Firecracker;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInRange;                                               // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFirstTime;                                             // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7710[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SnappingData
	 * Size -> 0x0024
	 */
	struct FSnappingData
	{
	public:
		bool                                                       DoSnapPosition;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoSnapRotation;                                          // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoSnapRoll;                                              // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useZCoord;                                               // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       sweepOnFinalSnap;                                        // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HGJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             targetPosition;                                          // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AIDetectedStimulus
	 * Size -> 0x005C
	 */
	struct FAIDetectedStimulus
	{
	public:
		TWeakObjectPtr<class AActor>                               Instigator;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AtTime;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9Y9[0x2C];                                  // 0x0030(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AITunableParameter
	 * Size -> 0x0010
	 */
	struct FAITunableParameter
	{
	public:
		float                                                      defaultValue;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TunableName;                                             // 0x0004(0x000C) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AIRoll
	 * Size -> 0x0024
	 */
	struct FAIRoll
	{
	public:
		struct FAITunableParameter                                 Random;                                                  // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 OnFailCooldown;                                          // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJN8[0x4];                                   // 0x0020(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PerkIdDropdown
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FPerkIdDropdown : public FPerkDropdown
	{	};

	/**
	 * ScriptStruct DeadByDaylight.AkObservedPlayerSoundLoop
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FAkObservedPlayerSoundLoop : public FAkSoundLoop
	{
	public:
		unsigned char                                              UnknownData_KLE8[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UPlayerPerspectiveComponent>          _perspectiveComponent;                                   // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.AimAssistInfo
	 * Size -> 0x0018
	 */
	struct FAimAssistInfo
	{
	public:
		unsigned char                                              UnknownData_O3NC[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AnimationMapping
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FAnimationMapping : public FDBDTableRowBase
	{
	public:
		unsigned char                                              MontageAsset[0x30];                                      // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class FName>                                        Tags;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UAnimMontage*                                        _montage;                                                // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _loadAttempted;                                          // 0x0050(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WTTV[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AnimationMappingRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAnimationMappingRow : public FDBDTableRowBase
	{
	public:
		TArray<struct FAnimationMapping>                           Mappings;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AnimBudgeterGameConfig
	 * Size -> 0x0028
	 */
	struct FAnimBudgeterGameConfig
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UM0I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Ps4Budget;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ps5Budget;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XboxOneBudget;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XsxBudget;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchBudget;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              SteamBudgets;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchiveS3Journal
	 * Size -> 0x0008
	 */
	struct FArchiveS3Journal
	{
	public:
		int32_t                                                    Nodes;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartingPages;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchiveQuestSpecialBehaviour
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FArchiveQuestSpecialBehaviour : public FDBDTableRowBaseWithId
	{
	public:
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EContextualType                                            Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFNP[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnObjectId;                                           // 0x0034(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAdditiveBehaviour                                         AdditiveBehaviour;                                       // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStackingBehaviours                                        StackableBehaviour;                                      // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOwnershipBehaviour                                        OwnershipBehaviour;                                      // 0x0042(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YN3Y[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpawnQuantity;                                           // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchiveDefinition
	 * Size -> 0x00C0 (FullSize[0x00D8] - InheritedSize[0x0018])
	 */
	struct FArchiveDefinition : public FDBDTableRowBaseWithId
	{
	public:
		class FText                                                Title;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              PurchasePassPicturePath;                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PurchaseTierPicturePath;                                 // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                PurchasePassPopupMessage;                                // 0x0068(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EArchivesEventStyle                                        EventStyle;                                              // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3I2J[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StoryBookMarkTexture[0x30];                              // 0x0088(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              StyleFrameLabel;                                         // 0x00B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventStoryLabel;                                         // 0x00C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.QuestEventDefinition
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FQuestEventDefinition : public FDBDTableRowBaseWithId
	{
	public:
		TArray<struct FGameplayTag>                                TrackedGameEvents;                                       // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              QuestEventEvaluator[0x30];                               // 0x0028(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchiveQuestObjectiveDefinition
	 * Size -> 0x0048 (FullSize[0x0060] - InheritedSize[0x0018])
	 */
	struct FArchiveQuestObjectiveDefinition : public FDBDTableRowBaseWithId
	{
	public:
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                RulesDescription;                                        // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EQuestProgressionType                                      ProgressionType;                                         // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HO36[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DescriptionParameters;                                   // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchiveNodeDefinition
	 * Size -> 0x0050 (FullSize[0x0068] - InheritedSize[0x0018])
	 */
	struct FArchiveNodeDefinition : public FDBDTableRowBaseWithId
	{
	public:
		class FText                                                DisplayName;                                             // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                PlayerRole;                                              // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W98B[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                cinematicId;                                             // 0x005C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RewardTrackTierData
	 * Size -> 0x0038
	 */
	struct FRewardTrackTierData
	{
	public:
		uint32_t                                                   TierId;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TierGroup;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRewardResponseItem>                         Free;                                                    // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Free_IsSet;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_OIG8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         Premium;                                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Premium_IsSet;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_YWIJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.RewardTrackData
	 * Size -> 0x0028
	 */
	struct FRewardTrackData
	{
	public:
		TArray<struct FRewardTrackTierData>                        TierInfo;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   Requirement;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1R3R[0x14];                                  // 0x0014(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchiveRewardsData
	 * Size -> 0x0078
	 */
	struct FArchiveRewardsData
	{
	public:
		int32_t                                                    XpRequirement;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StarsEarnedPerLevel;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreStartDate;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartDate;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EndDate;                                                 // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PostEndDate;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78DA[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesConfig
	 * Size -> 0x0004
	 */
	struct FArchivesConfig
	{
	public:
		int32_t                                                    CommunityNodeRefreshInterval;                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerDataForQuestConditions
	 * Size -> 0x0078
	 */
	struct FPlayerDataForQuestConditions
	{
	public:
		unsigned char                                              UnknownData_FOWM[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesNodeCoordinates
	 * Size -> 0x0010
	 */
	struct FArchivesNodeCoordinates
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesQuestCondition
	 * Size -> 0x0020
	 */
	struct FArchivesQuestCondition
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      value;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesQuestEvent
	 * Size -> 0x0040
	 */
	struct FArchivesQuestEvent
	{
	public:
		class FString                                              QuestEventId;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Repetition;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAFY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Parameters;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Operation;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Parameters_IsSet;                                        // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		bool                                                       Operation_IsSet;                                         // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_0JPT[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesQuestSpecialBehaviour
	 * Size -> 0x0028
	 */
	struct FArchivesQuestSpecialBehaviour
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Params;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Params_IsSet;                                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_JLLT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesObjective
	 * Size -> 0x0060
	 */
	struct FArchivesObjective
	{
	public:
		class FString                                              ObjectiveId;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ObjectiveId_IsSet;                                       // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		bool                                                       IncrementWithEventRepetitions;                           // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KMB[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NeededProgression;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FArchivesQuestCondition>                     Conditions;                                              // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Conditions_IsSet;                                        // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_MNQY[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FArchivesQuestEvent>                         QuestEvent;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       QuestEvent_IsSet;                                        // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_L0QW[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FArchivesQuestSpecialBehaviour>              SpecialBehaviours;                                       // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       SpecialBehaviours_IsSet;                                 // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		bool                                                       IsCommunityObjective;                                    // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCommunityObjective_IsSet;                              // 0x005A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_7JDP[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesNodeDefinition
	 * Size -> 0x00C8
	 */
	struct FArchivesNodeDefinition
	{
	public:
		class FString                                              ClientInfoId;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FArchivesNodeCoordinates                            Coordinates;                                             // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Neighbors;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              NodeType;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FArchivesObjective>             Objectives;                                              // 0x0040(0x0050) NativeAccessSpecifierPublic
		bool                                                       Objectives_IsSet;                                        // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_IG29[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Journal;                                                 // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Journal_IsSet;                                           // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_5UVI[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         Reward;                                                  // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Reward_IsSet;                                            // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_838Y[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StoryLevel
	 * Size -> 0x00E0
	 */
	struct FStoryLevel
	{
	public:
		TArray<class FString>                                      Start;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      End;                                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StartDate;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FArchivesNodeDefinition>        Nodes;                                                   // 0x0030(0x0050) NativeAccessSpecifierPublic
		TArray<struct FRewardResponseItem>                         EndNodeRewards;                                          // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       EndNodeRewards_IsSet;                                    // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_DE6G[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         LevelRewards;                                            // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       LevelRewards_IsSet;                                      // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_FTMC[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         TaskRewards;                                             // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       TaskRewards_IsSet;                                       // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_QL8A[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         ChallengeRewards;                                        // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ChallengeRewards_IsSet;                                  // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_VH3M[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesMapFromS3
	 * Size -> 0x0040
	 */
	struct FArchivesMapFromS3
	{
	public:
		TArray<struct FStoryLevel>                                 Level;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              RiftId;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RiftId_IsSet;                                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_VTTT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SpecialEventId;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpecialEventId_IsSet;                                    // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_2W4T[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaAuricCellPacksUIData
	 * Size -> 0x0038
	 */
	struct FAtlantaAuricCellPacksUIData
	{
	public:
		unsigned char                                              UnknownData_H49F[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCurrencyPurchaseData>                       CurrencyPurchaseData;                                    // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    FirstPurchaseBundleMultiplier;                           // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z533[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           FirstPurchaseBundleMultiplierEndDate;                    // 0x0028(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isSet;                                                   // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UHW[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaBaseEventsUIData
	 * Size -> 0x00E8
	 */
	struct FAtlantaBaseEventsUIData
	{
	public:
		class FString                                              EventId;                                                 // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0020(0x0018) Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0038(0x0018) Transient, NativeAccessSpecifierPublic
		class FString                                              CampaignName;                                            // 0x0050(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2DDynamic*                                   Image;                                                   // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventPriority;                                           // 0x0068(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BannerPriority;                                          // 0x006C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeepLink;                                                // 0x0070(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           StartDate;                                               // 0x0080(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndDate;                                                 // 0x0088(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DisplayStartDate;                                        // 0x0090(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DisplayEndDate;                                          // 0x0098(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           BannerStartDate;                                         // 0x00A0(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           BannerEndDate;                                           // 0x00A8(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           HotStartDate;                                            // 0x00B0(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           HotEndDate;                                              // 0x00B8(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           NewStartDate;                                            // 0x00C0(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           NewEndDate;                                              // 0x00C8(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      RelatedItemsId;                                          // 0x00D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       mustHideParticipateButton;                               // 0x00E0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5JL[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaBonusACEventsUIData
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	struct FAtlantaBonusACEventsUIData : public FAtlantaBaseEventsUIData
	{
	public:
		struct FAtlantaAuricCellPacksUIData                        auricPacksData;                                          // 0x00E8(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaCalendarEventsUIData
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	struct FAtlantaCalendarEventsUIData : public FAtlantaBaseEventsUIData
	{
	public:
		unsigned char                                              UnknownData_K9VU[0x30];                                  // 0x00E8(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaDeepLinkData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAtlantaDeepLinkData : public FDBDTableRowBase
	{
	public:
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeepLinkUid                                               DeepLink;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCustomParameters;                                     // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT52[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DeviceProfiles
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FDeviceProfiles : public FDBDTableRowBase
	{
	public:
		class FText                                                Cpu;                                                     // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                GPU;                                                     // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Quality;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40GC[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaEventElementUIData
	 * Size -> 0x0030
	 */
	struct FAtlantaEventElementUIData
	{
	public:
		EPromoPackContentType                                      ElementType;                                             // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPTH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Transient, NativeAccessSpecifierPublic
		class FName                                                NameID;                                                  // 0x0020(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BaseItemData
	 * Size -> 0x0160 (FullSize[0x0168] - InheritedSize[0x0008])
	 */
	struct FBaseItemData : public FDBDTableRowBase
	{
	public:
		EInventoryItemType                                         Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y482[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemUIData                                         UIData;                                                  // 0x0010(0x00C0) Edit, NativeAccessSpecifierPublic
		class FText                                                GenericDisplayName;                                      // 0x00D0(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              ItemBlueprint[0x30];                                     // 0x00E8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              AssetData[0x30];                                         // 0x0118(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              ItemId;                                                  // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2BND[0x10];                                  // 0x0158(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemData
	 * Size -> 0x0080 (FullSize[0x01E8] - InheritedSize[0x0168])
	 */
	struct FItemData : public FBaseItemData
	{
	public:
		unsigned char                                              ItemMesh[0x30];                                          // 0x0168(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EItemHandPosition                                          HandPosition;                                            // 0x0198(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0199(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x019A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Inventory;                                               // 0x019B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Chest;                                                   // 0x019C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKillerAbilities                                           RequiredKillerAbility;                                   // 0x019D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4S8[0x2];                                   // 0x019E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemAvailability                                   Availability;                                            // 0x01A0(0x0030) Edit, NativeAccessSpecifierPublic
		bool                                                       IsInNonViolentBuild;                                     // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableInAtlantaBuild;                               // 0x01D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AntiDLC;                                                 // 0x01D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Bloodweb;                                                // 0x01D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanKeepInLoadout;                                        // 0x01D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBotSupported;                                          // 0x01D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_263N[0x2];                                   // 0x01D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EventId;                                                 // 0x01D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanUseAfterEventEnd;                                     // 0x01E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoadoutItemType                                           ItemType;                                                // 0x01E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXL6[0x2];                                   // 0x01E6(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaFreeTicketUIData
	 * Size -> 0x0028 (FullSize[0x0210] - InheritedSize[0x01E8])
	 */
	struct FAtlantaFreeTicketUIData : public FItemData
	{
	public:
		struct FSlateColor                                         IconColor;                                               // 0x01E8(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaFreeTicketCombinedData
	 * Size -> 0x0220
	 */
	struct FAtlantaFreeTicketCombinedData
	{
	public:
		struct FAtlantaFreeTicketUIData                            UIData;                                                  // 0x0000(0x0210) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0210(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTHC[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DurationInMinutes;                                       // 0x0214(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0218(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TMU[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaGenericEventUIData
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	struct FAtlantaGenericEventUIData : public FAtlantaBaseEventsUIData
	{
	public:
		TArray<struct FAtlantaEventElementUIData>                  elementsUIData;                                          // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaKillerSoundDistanceData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAtlantaKillerSoundDistanceData : public FDBDTableRowBase
	{
	public:
		float                                                      MinRadiusSoundDistance;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRadiusSoundDistance;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRangeSoundHeard;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRZT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaKillerSoundConditionData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAtlantaKillerSoundConditionData : public FDBDTableRowBase
	{
	public:
		class FName                                                RTPCAudioID;                                             // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ComparisonValue;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKillerSoundComparisonType                                 ValueComparisonType;                                     // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVWA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaKillerSoundIndicatorData
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAtlantaKillerSoundIndicatorData : public FDBDTableRowBase
	{
	public:
		float                                                      MinRadiusSoundDistance;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRadiusSoundDistance;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRangeSoundHeard;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeGlobalSound;                                        // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanDiminishWithDistance;                                 // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5LN[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAtlantaKillerSoundConditionData>            GlobalSoundConditions;                                   // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAtlantaKillerSoundConditionData>            DiminishWithDistanceConditions;                          // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaMonthlyPassEventUIData
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	struct FAtlantaMonthlyPassEventUIData : public FAtlantaBaseEventsUIData
	{
	public:
		unsigned char                                              UnknownData_C0NJ[0x40];                                  // 0x00E8(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaNoiseIndicatorDistanceData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAtlantaNoiseIndicatorDistanceData : public FDBDTableRowBase
	{
	public:
		class FString                                              Description;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceForNoiseIndicatorToAppear;                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TCX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaOnBoardingData
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FAtlantaOnBoardingData : public FDBDTableRowBase
	{
	public:
		class FName                                                onBoardingID;                                            // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCDY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRewardUIData
	 * Size -> 0x0060
	 */
	struct FAtlantaRewardUIData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAtlantaRewardType                                         Type;                                                    // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CF3[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP8U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconFilePath;                                            // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurrencyType                                              Currency;                                                // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLX1[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualRewardUIData
	 * Size -> 0x0020
	 */
	struct FAtlantaRitualRewardUIData
	{
	public:
		EAtlantaRitualRewardUIType                                 Type;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBK9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Quantity;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconFilePath;                                            // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O453[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaSubRitualUIData
	 * Size -> 0x0018
	 */
	struct FAtlantaSubRitualUIData
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetNumber;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentNumber;                                           // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualUIData
	 * Size -> 0x0068
	 */
	struct FAtlantaRitualUIData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAltantaRitualUIType                                       Type;                                                    // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VYD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconFilePath;                                            // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNew;                                                   // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isClaimed;                                               // 0x0039(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IOC[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressPercentage;                                      // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RefreshPrice;                                            // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKIK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAtlantaRitualRewardUIData>                  Rewards;                                                 // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAtlantaSubRitualUIData>                     SubRituals;                                              // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualsUIScreenData
	 * Size -> 0x0030
	 */
	struct FAtlantaRitualsUIScreenData
	{
	public:
		struct FDateTime                                           DailyRefreshTime;                                        // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           WeeklyRefreshTime;                                       // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAtlantaRitualUIData>                        DailyRituals;                                            // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAtlantaRitualUIData>                        WeeklyRituals;                                           // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaTutorialEndReward
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAtlantaTutorialEndReward : public FDBDTableRowBase
	{
	public:
		int32_t                                                    BloodpointReward;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AuricCellsRewards;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FearTokensReward;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65BK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CharactersRewards;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaTutorialLevelData
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FAtlantaTutorialLevelData : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C5Y[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKillerTutorial;                                        // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XR3[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TutorialNotificationData
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FTutorialNotificationData : public FDBDTableRowBase
	{
	public:
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Image[0x30];                                             // 0x0078(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsShowAnalyticEnabled;                                   // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIE6[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaTutorialNotificationData
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	struct FAtlantaTutorialNotificationData : public FTutorialNotificationData
	{
	public:
		unsigned char                                              Textures[0x10];                                          // 0x00B0(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaTutorialTallyData
	 * Size -> 0x0020
	 */
	struct FAtlantaTutorialTallyData
	{
	public:
		bool                                                       IsKiller;                                                // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FirstTimeCompleted;                                      // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2K55[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BloodpointsScore;                                        // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AuricCells;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FearTokens;                                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        Characters;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AttackEventTypeDetails
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAttackEventTypeDetails : public FDBDTableRowBase
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackEventType                                           AttackEventType;                                         // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeProtective;                                         // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIK1[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssociatedCharacter;                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WA32[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AttackHitResult
	 * Size -> 0x0088
	 */
	struct FAttackHitResult
	{
	public:
		class ADBDPlayer*                                          Attacker;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ADBDPlayer*                                          Target;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDAttack*                                          Attack;                                                  // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBasicAttack;                                           // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CosmeticOnly;                                            // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF6A[0x6E];                                  // 0x001A(0x006E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BackendCinematicsContentData
	 * Size -> 0x0048
	 */
	struct FBackendCinematicsContentData
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       AllowSkip;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E5GP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartDate;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VRHF[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EndDate;                                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FZIE[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BackendCinematicsContent
	 * Size -> 0x0010
	 */
	struct FBackendCinematicsContent
	{
	public:
		TArray<struct FBackendCinematicsContentData>               Cinematics;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.BalanceToolOverrideEntry
	 * Size -> 0x0030
	 */
	struct FBalanceToolOverrideEntry
	{
	public:
		class FString                                              DbName;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RowName;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              value;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BalanceToolGameConfig
	 * Size -> 0x0010
	 */
	struct FBalanceToolGameConfig
	{
	public:
		TArray<struct FBalanceToolOverrideEntry>                   Overrides;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BaseTooltipData
	 * Size -> 0x0098
	 */
	struct FBaseTooltipData
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           touchPosition;                                           // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LeftTooltipWidgetAsset[0x30];                            // 0x0028(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              RightTooltipWidgetAsset[0x30];                           // 0x0058(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              UnknownData_41TP[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BlindPackData
	 * Size -> 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
	 */
	struct FBlindPackData : public FBaseItemData
	{	};

	/**
	 * ScriptStruct DeadByDaylight.BloodstoreRowUnlockThreshold
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBloodstoreRowUnlockThreshold : public FDBDTableRowBase
	{
	public:
		int32_t                                                    PreviousRowPurchasedItemsCount;                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HR2N[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebContentTypePerRingDistribution
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FBloodwebContentTypePerRingDistribution : public FDBDTableRowBase
	{
	public:
		int32_t                                                    PerkPerRingMinCount;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerkPerRingMaxCount;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerkPerRingWeight;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OfferingPerRingMinCount;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OfferingPerRingMaxCount;                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OfferingPerRingWeight;                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemPerRingMinCount;                                     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemPerRingMaxCount;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemPerRingWeight;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddOnPerRingMinCount;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddOnPerRingMaxCount;                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddOnPerRingWeight;                                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChestPerRingMinCount;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChestPerRingMaxCount;                                    // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChestPerRingWeight;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerksPackPerRingMinCount;                                // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerksPackPerRingMaxCount;                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerksPackPerRingWeight;                                  // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IridiscentShardsPackPerRingMinCount;                     // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IridiscentShardsPackPerRingMaxCount;                     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IridiscentShardsPackPerRingWeight;                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVUO[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebCostModifier
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBloodwebCostModifier : public FDBDTableRowBase
	{
	public:
		EBloodwebNodeContentType                                   Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RS9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CostModifier;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BlockingNode
	 * Size -> 0x0018
	 */
	struct FBlockingNode
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlockingCount;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II8E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebRingComposition
	 * Size -> 0x0018
	 */
	struct FBloodwebRingComposition
	{
	public:
		int32_t                                                    EntityStartingRound;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UFO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            NodeCountPerRing;                                        // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebRarityCost
	 * Size -> 0x0028
	 */
	struct FBloodwebRarityCost
	{
	public:
		int32_t                                                    Artifact;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Common;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Legendary;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rare;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialEvent;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Spectral;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Teachable;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraRare;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Uncommon;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VeryRare;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebTypeCostModifiers
	 * Size -> 0x0014
	 */
	struct FBloodwebTypeCostModifiers
	{
	public:
		float                                                      addon;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chest;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Items;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      offerings;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Perks;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebChestProbability
	 * Size -> 0x0020
	 */
	struct FBloodwebChestProbability
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChestRarity;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebEventChestProbability
	 * Size -> 0x0020
	 */
	struct FBloodwebEventChestProbability
	{
	public:
		class FString                                              EventId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBloodwebChestProbability>                   Chests;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebGenerationRulesData
	 * Size -> 0x0070
	 */
	struct FBloodwebGenerationRulesData
	{
	public:
		TArray<struct FBloodwebRingComposition>                    RingComposition;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBloodwebRarityCost                                 RarityCost;                                              // 0x0010(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FBloodwebTypeCostModifiers                          TypeCostModifiers;                                       // 0x0038(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OK9M[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBloodwebChestProbability>                   ChestProbability;                                        // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBloodwebEventChestProbability>              EventChestProbability;                                   // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebMandatoryContentByLevel
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FBloodwebMandatoryContentByLevel : public FDBDTableRowBase
	{
	public:
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ForcedItem01;                                            // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ForcedItem02;                                            // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ForcedItem03;                                            // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ContentPerWebDistribution
	 * Size -> 0x0010
	 */
	struct FContentPerWebDistribution
	{
	public:
		int32_t                                                    CumulativeWeight;                                        // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ContentPerRingDistribution
	 * Size -> 0x0030
	 */
	struct FContentPerRingDistribution
	{
	public:
		TArray<int32_t>                                            WeightList;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MinCountList;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MaxCountList;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RarityPerWebDistribution
	 * Size -> 0x000C
	 */
	struct FRarityPerWebDistribution
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RarityPerRingDistribution
	 * Size -> 0x0030
	 */
	struct FRarityPerRingDistribution
	{
	public:
		TArray<int32_t>                                            WeightList;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MinCountList;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MaxCountList;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AccessNode
	 * Size -> 0x0018
	 */
	struct FAccessNode
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccessCost;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75E1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebNodeCost
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBloodwebNodeCost : public FDBDTableRowBase
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RVF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Cost;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebNodeRarityCost
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBloodwebNodeRarityCost : public FDBDTableRowBase
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04QR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Cost;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebNodesPerRingDistribution
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBloodwebNodesPerRingDistribution : public FDBDTableRowBase
	{
	public:
		int32_t                                                    MinCount;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebPrestigeModifiers
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FBloodwebPrestigeModifiers : public FDBDTableRowBase
	{
	public:
		float                                                      CommonItemProbabilityModifier;                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UncommonItemProbabilityModifier;                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RareItemProbabilityModifier;                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VeryRareItemProbabilityModifier;                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UltraRareItemProbabilityModifier;                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArtifactItemProbabilityModifier;                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpectralItemProbabilityModifier;                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegendaryItemProbabilityModifier;                        // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebProgressionValue
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FBloodwebProgressionValue : public FDBDTableRowBase
	{
	public:
		int32_t                                                    InnerRingNodeCount;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingNodeCount;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingNodeCount;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Common_MinCount;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Common_MaxCount;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Uncommon_MinCount;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Uncommon_MaxCount;                                       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rare_MinCount;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rare_MaxCount;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VeryRare_MinCount;                                       // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VeryRare_MaxCount;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraRare_MinCount;                                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraRare_MaxCount;                                      // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Artifact_MinCount;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Artifact_MaxCount;                                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Spectral_MinCount;                                       // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Spectral_MaxCount;                                       // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialEvent_MinCount;                                   // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialEvent_MaxCount;                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Legendary_MinCount;                                      // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Legendary_MaxCount;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingCommonItemProbability;                          // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingCommonItemProbability;                         // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingCommonItemProbability;                          // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingUncommonItemProbability;                        // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingUncommonItemProbability;                       // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingUncommonItemProbability;                        // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingRareItemProbability;                            // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingRareItemProbability;                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingRareItemProbability;                            // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingVeryRareItemProbability;                        // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingVeryRareItemProbability;                       // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingVeryRareItemProbability;                        // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingUltraRareItemProbability;                       // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingUltraRareItemProbability;                      // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingUltraRareItemProbability;                       // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingArtifactItemProbability;                        // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingArtifactItemProbability;                       // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingArtifactItemProbability;                        // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingSpectralItemProbability;                        // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingSpectralItemProbability;                       // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingSpectralItemProbability;                        // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingSpecialEventItemProbability;                    // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingSpecialEventItemProbability;                   // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingSpecialEventItemProbability;                    // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingLegendaryItemProbability;                       // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingLegendaryItemProbability;                      // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingLegendaryItemProbability;                       // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingEpicItemProbability;                            // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingEpicItemProbability;                           // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingEpicItemProbability;                            // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingSuperEpicItemProbability;                       // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingSuperEpicItemProbability;                      // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingSuperEpicItemProbability;                       // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingUltraEpicItemProbability;                       // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingUltraEpicItemProbability;                      // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingUltraEpicItemProbability;                       // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EntityStartingRound;                                     // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BloodwebRarityPerRingDistribution
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FBloodwebRarityPerRingDistribution : public FDBDTableRowBase
	{
	public:
		int32_t                                                    CommonMinCount;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommonMaxCount;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommonWeight;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UncommonMinCount;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UncommonMaxCount;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UncommonWeight;                                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RareMinCount;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RareMaxCount;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RareWeight;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VeryRareMinCount;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VeryRareMaxCount;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VeryRareWeight;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraRareMinCount;                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraRareMaxCount;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraRareWeight;                                         // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArtefactMinCount;                                        // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArtefactMaxCount;                                        // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArtefactWeight;                                          // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpectralMinCount;                                        // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpectralMaxCount;                                        // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpectralWeight;                                          // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialEventMinCount;                                    // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialEventMaxCount;                                    // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialEventWeight;                                      // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LegendaryMinCount;                                       // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LegendaryMaxCount;                                       // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LegendaryWeight;                                         // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EpicMinCount;                                            // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EpicMaxCount;                                            // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EpicWeight;                                              // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuperEpicMinCount;                                       // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuperEpicMaxCount;                                       // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuperEpicWeight;                                         // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraEpicMinCount;                                       // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraEpicMaxCount;                                       // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UltraEpicWeight;                                         // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDPerPlatformFloat
	 * Size -> 0x0004
	 */
	struct FDBDPerPlatformFloat
	{
	public:
		struct FPerPlatformFloat                                   value;                                                   // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDPerPlatformInt
	 * Size -> 0x0004
	 */
	struct FDBDPerPlatformInt
	{
	public:
		struct FPerPlatformInt                                     value;                                                   // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BonusPointEventsItemData
	 * Size -> 0x00A0
	 */
	struct FBonusPointEventsItemData
	{
	public:
		class FString                                              EventTitle;                                              // 0x0000(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              EventDescription;                                        // 0x0010(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       EventDescription_IsSet;                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		unsigned char                                              UnknownData_C8EX[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   EventType;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     Multiplier;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              starttime;                                               // 0x0030(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              EndTime;                                                 // 0x0040(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TIUS[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.BonusPointEventsData
	 * Size -> 0x0010
	 */
	struct FBonusPointEventsData
	{
	public:
		TArray<struct FBonusPointEventsItemData>                   BonusPointEvents;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BotMatchConfig
	 * Size -> 0x0020
	 */
	struct FBotMatchConfig
	{
	public:
		TArray<class FString>                                      DSPlatformSBM;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      DSPlatformTutorialBotMatch;                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.BundleData
	 * Size -> 0x00D0
	 */
	struct FBundleData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMZT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemUIData                                         UIData;                                                  // 0x0010(0x00C0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CamperDamageResult
	 * Size -> 0x0060
	 */
	struct FCamperDamageResult
	{
	public:
		unsigned char                                              UnknownData_BFN3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              damageSource;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACharacter*                                          damagePlayerOwner;                                       // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65L5[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayModifierContainer*                          KOPreventedSource;                                       // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYHU[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterCustomizationDataTable
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FCharacterCustomizationDataTable : public FDBDTableRowBase
	{
	public:
		int32_t                                                    characterIndex;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOO3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomizationStoreDB[0x30];                              // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SlideShowDescription
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FSlideShowDescription : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6U6M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Overview;                                                // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Playstyle;                                               // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                              ImageFilePath;                                           // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPerkCategory>                                      PerkCategory;                                            // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterDescription
	 * Size -> 0x0228 (FullSize[0x0230] - InheritedSize[0x0008])
	 */
	struct FCharacterDescription : public FDBDTableRowBase
	{
	public:
		int32_t                                                    characterIndex;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterDifficulty                                       Difficulty;                                              // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POAI[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                BackStory;                                               // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Biography;                                               // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                IconFilePath;                                            // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OK1T[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HudIcon;                                                 // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BackgroundImagePath;                                     // 0x0070(0x000C) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JU1X[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomizedMeshPart>                         CustomizationDescription;                                // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ChapterDlcId;                                            // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      AdditionalDlcIds;                                        // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       AvailableIfDlcInstalled;                                 // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W33T[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DebugName;                                               // 0x00B4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInChunk0;                                              // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableInNonViolentBuild;                            // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableInAtlantaBuild;                               // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6TX[0x1];                                   // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   PlatformExclusiveFlag;                                   // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GamePawn[0x30];                                          // 0x00C8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              MenuPawn[0x30];                                          // 0x00F8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                DefaultItem;                                             // 0x0128(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGender                                                    Gender;                                                  // 0x0134(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLU1[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EKillerAbilities>                                   KillerAbilities;                                         // 0x0138(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDataTableProxy                                     TunableDB;                                               // 0x0148(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EKillerHeight                                              KillerHeight;                                            // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4AE[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlideShowDescription                               SlideShowDescriptions;                                   // 0x0190(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       HideStoreCustomizations;                                 // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PMZ[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CustomizationCategories;                                 // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class FString                                              characterId;                                             // 0x0210(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PRMR[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterDescriptionOverride
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FCharacterDescriptionOverride : public FDBDTableRowBase
	{
	public:
		TArray<class FName>                                        RequiredItemIds;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                DisplayNameOverride;                                     // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              HudIconOverride[0x30];                                   // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MenuBlueprint[0x30];                                     // 0x0060(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              GameBlueprint[0x30];                                     // 0x0090(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                IconFilePathOverride;                                    // 0x00C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXWY[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.KillerAttributesData
	 * Size -> 0x000C
	 */
	struct FKillerAttributesData
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TerrorRadius;                                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKillerHeight                                              Height;                                                  // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O9Q[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterInfoData
	 * Size -> 0x02D8
	 */
	struct FCharacterInfoData
	{
	public:
		struct FCharacterSlotData                                  SlotData;                                                // 0x0000(0x0180) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0180(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTeachableData>                              TeachablePerksData;                                      // 0x0190(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FInventorySlotData                                  PowerData;                                               // 0x01A0(0x0128) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FKillerAttributesData                               KillerAttributesData;                                    // 0x02C8(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsKiller;                                                // 0x02D4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x02D5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYAK[0x2];                                   // 0x02D6(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterLevelData
	 * Size -> 0x0020
	 */
	struct FCharacterLevelData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExperienceToNextLevel;                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsComplete;                                              // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPerksBeenSelected;                                    // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDF9[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAssignedPerkProperties>                     PerkSelection;                                           // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LoadoutPresetListId
	 * Size -> 0x0008
	 */
	struct FLoadoutPresetListId
	{
	public:
		unsigned char                                              UnknownData_BNRQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterSlideData
	 * Size -> 0x0068
	 */
	struct FCharacterSlideData
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Overview;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Playstyle;                                               // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX47[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ImageFilePath;                                           // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPerkCategory>                                      SurvivorPerkCategories;                                  // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FString                                              KillerPowerIconPath;                                     // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.MaterialMapForClip
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMaterialMapForClip : public FDBDTableRowBase
	{
	public:
		class UMaterialInterface*                                  SrcMaterial;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DstMaterial;                                             // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticMeshToApply[0x10];                                 // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.CombinedPartyFriendData
	 * Size -> 0x0168
	 */
	struct FCombinedPartyFriendData
	{
	public:
		unsigned char                                              UnknownData_B5OE[0x168];                                 // 0x0000(0x0168) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CombinedSpecialEventData
	 * Size -> 0x02F0
	 */
	struct FCombinedSpecialEventData
	{
	public:
		unsigned char                                              UnknownData_LTKE[0x2F0];                                 // 0x0000(0x02F0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ConsentContentVersionData
	 * Size -> 0x00C0
	 */
	struct FConsentContentVersionData
	{
	public:
		class FString                                              label;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    EntryDate;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Title;                                                   // 0x0018(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Content;                                                 // 0x0068(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPF2[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ConsentContentData
	 * Size -> 0x0020
	 */
	struct FConsentContentData
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConsentContentVersionData>                  Versions;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ConsentDefinitionData
	 * Size -> 0x0050
	 */
	struct FConsentDefinitionData
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      platform;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Sku;                                                     // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Sku_IsSet;                                               // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_3BOL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Language;                                                // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       NeedAcceptance;                                          // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMandatory;                                             // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AITV[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ContentScheduleRecord
	 * Size -> 0x0140
	 */
	struct FContentScheduleRecord
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHNQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Description_IsSet;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_1OPF[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LinkedEventId;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LinkedEventId_IsSet;                                     // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_BZLC[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, float>                                 MapsThemeWeight;                                         // 0x0038(0x0050) NativeAccessSpecifierPublic
		bool                                                       MapsThemeWeight_IsSet;                                   // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_MTXD[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, float>                                 MapsWeight;                                              // 0x0090(0x0050) NativeAccessSpecifierPublic
		bool                                                       MapsWeight_IsSet;                                        // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_R790[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      FeaturedMap;                                             // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       FeaturedMap_IsSet;                                       // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_SOLR[0x17];                                  // 0x00F9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartDate;                                               // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       StartDate_IsSet;                                         // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		unsigned char                                              UnknownData_QZP5[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EndDate;                                                 // 0x0128(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       EndDate_IsSet;                                           // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		unsigned char                                              UnknownData_380F[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ContentScheduleData
	 * Size -> 0x0020
	 */
	struct FContentScheduleData
	{
	public:
		TArray<struct FContentScheduleRecord>                      Schedule;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1D1[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ContextEventData
	 * Size -> 0x0068
	 */
	struct FContextEventData
	{
	public:
		class FString                                              ContextGroupName;                                        // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ContextGroupUid;                                         // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWUZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PreviousContextName;                                     // 0x0018(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PreviousContextUid;                                      // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OY87[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentContextName;                                      // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CurrentContextUid;                                       // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1I9[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NextContextName;                                         // 0x0048(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NextContextUid;                                          // 0x0058(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46JS[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           Timestamp;                                               // 0x0060(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CurrencyPackData
	 * Size -> 0x0008 (FullSize[0x01F0] - InheritedSize[0x01E8])
	 */
	struct FCurrencyPackData : public FItemData
	{
	public:
		ECurrencyType                                              CurrencyType;                                            // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DW4O[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CurrencyUIData
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FCurrencyUIData : public FDBDTableRowBase
	{
	public:
		ECurrencyType                                              CurrencyType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9S60[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         CurrencyColorTheme;                                      // 0x0050(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomizationCategoryData
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FCustomizationCategoryData : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomizationCategory                                     Category;                                                // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WX0G[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconPath;                                                // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZGL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomizationTooltipData
	 * Size -> 0x01D8 (FullSize[0x0270] - InheritedSize[0x0098])
	 */
	struct FCustomizationTooltipData : public FBaseTooltipData
	{
	public:
		unsigned char                                              UnknownData_L7Z5[0x1D8];                                 // 0x0098(0x01D8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemVfxLoadingData
	 * Size -> 0x0010
	 */
	struct FItemVfxLoadingData
	{
	public:
		class AItemVfx*                                            ItemVfx;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDMT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AccessoryLoadingData
	 * Size -> 0x00E8
	 */
	struct FAccessoryLoadingData
	{
	public:
		unsigned char                                              UnknownData_372W[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAccessory*                                          Accessory;                                               // 0x00E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DailyRewardData
	 * Size -> 0x0040
	 */
	struct FDailyRewardData
	{
	public:
		EAtlantaRewardType                                         RewardType;                                              // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TIGI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrencyAmount;                                          // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ParentIconPath;                                          // 0x0018(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemName;                                                // 0x0028(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMarkedSpecial;                                         // 0x003C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                ItemRarity;                                              // 0x003D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUMGDailyRewardWidgetState                                 State;                                                   // 0x003E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6SO[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DailyRewardCalendarData
	 * Size -> 0x0030
	 */
	struct FDailyRewardCalendarData
	{
	public:
		TArray<struct FDailyRewardData>                            DailyRewardList;                                         // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    CurrentlyActiveDailyRewardIndex;                         // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WQC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           CalendarStartDate;                                       // 0x0018(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CalendarExpirationDate;                                  // 0x0020(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isSet;                                                   // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3SK[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AICamperDodgeTunableRowData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAICamperDodgeTunableRowData : public FDBDTableRowBase
	{
	public:
		int32_t                                                    characterId;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHH7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		EAIDodgeType                                               BestDodgeType;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireInSight;                                          // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireAttackState;                                      // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDJ6[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackPlusSurvivorHalfWidth;                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FieldOfView;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EENV[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AIItemWeightTunableRowData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAIItemWeightTunableRowData : public FDBDTableRowBase
	{
	public:
		float                                                      CountWeight;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyWeight;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConditionalWeight;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6P8V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AIDifficultyTunableRowData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAIDifficultyTunableRowData : public FDBDTableRowBase
	{
	public:
		float                                                      VeryEasy;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Easy;                                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Medium;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hard;                                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualSetArray
	 * Size -> 0x0010
	 */
	struct FAtlantaRitualSetArray
	{
	public:
		TArray<struct FAtlantaRitualSet>                           rituals;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualContainer
	 * Size -> 0x0050
	 */
	struct FAtlantaRitualContainer
	{
	public:
		TMap<class FString, struct FAtlantaRitualSetArray>         RitualsMap;                                              // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualSetIndex
	 * Size -> 0x0018
	 */
	struct FAtlantaRitualSetIndex
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL4K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ritualType;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaRitualDefinition
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FAtlantaRitualDefinition : public FDBDTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              Texture[0x30];                                           // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.WebPath
	 * Size -> 0x0028
	 */
	struct FWebPath
	{
	public:
		unsigned char                                              UnknownData_D3J2[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.WebNode
	 * Size -> 0x0028
	 */
	struct FWebNode
	{
	public:
		unsigned char                                              UnknownData_O9RF[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DailyRitualPossibleCharacters
	 * Size -> 0x0030
	 */
	struct FDailyRitualPossibleCharacters
	{
	public:
		TArray<int32_t>                                            CharacterIDs;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPlayerRole>                                        Roles;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPlayerRole>                                        SelectOneCharacterFromRoles;                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DailyRitualDefinition
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FDailyRitualDefinition : public FDBDTableRowBase
	{
	public:
		class FString                                              ritualId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDailyRitualPossibleCharacters                      PossibleCharacters;                                      // 0x0058(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<EDBDScoreTypes>                                     TrackedEvents;                                           // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                TrackedGameEvents;                                       // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Evaluator[0x30];                                         // 0x00A8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.RitualEvent
	 * Size -> 0x0030
	 */
	struct FRitualEvent
	{
	public:
		EDBDScoreTypes                                             scoreType;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKXR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        gameEventType;                                           // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amount;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z72X[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          Instigator;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ADBDPlayerState*                                     InstigatorPlayerState;                                   // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AttackTypeDetails
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAttackTypeDetails : public FDBDTableRowBase
	{
	public:
		EAttackType                                                attackType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBasicAttack;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SM3D[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssociatedCharacter;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LevelUpDetails
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FLevelUpDetails : public FDBDTableRowBase
	{
	public:
		int32_t                                                    Level;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                ItemId;                                                  // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryItemType                                         ItemType;                                                // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_081X[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssociatedCharacter;                                     // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRXX[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EACClientInfo
	 * Size -> 0x0028
	 */
	struct FEACClientInfo
	{
	public:
		unsigned char                                              UnknownData_MYZ7[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.EmblemProgressionDescriptionByQuality
	 * Size -> 0x0020
	 */
	struct FEmblemProgressionDescriptionByQuality
	{
	public:
		EEmblemQuality                                             EmblemQuality;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDLN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.EmblemProgressionID
	 * Size -> 0x0030
	 */
	struct FEmblemProgressionID
	{
	public:
		EEmblemProgressionType                                     EmblemProgressionType;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6CW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DefaultDescription;                                      // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FEmblemProgressionDescriptionByQuality>      DescriptionsByQuality;                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDEmblemDefinition
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FDBDEmblemDefinition : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKGJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EPlayerRole>                                        Roles;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              CustomEmblem[0x30];                                      // 0x0058(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class FString>                                      IconFilePaths;                                           // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EEmblemEvaluation                                          EmblemEvaluation;                                        // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1I9[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEmblemProgressionID>                        EmblemProgressionData;                                   // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.EndOfMatchRPCData
	 * Size -> 0x0018
	 */
	struct FEndOfMatchRPCData
	{
	public:
		class FString                                              _jsonData;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isValid;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TCAG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LanguageMapping
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FLanguageMapping : public FTableRowBase
	{
	public:
		class FString                                              Language;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomerSupportLanguages                                  CustomerSupportId;                                       // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EForumLanguages                                            ForumId;                                                 // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZVO[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SaveDataBase
	 * Size -> 0x0010
	 */
	struct FSaveDataBase
	{
	public:
		unsigned char                                              UnknownData_NYQC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VersionNumber;                                           // 0x0008(0x0004) ZeroConstructor, SaveGame, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7T9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataShared
	 * Size -> 0x0040
	 */
	struct FLegacyPlayerSavedProfileDataShared
	{
	public:
		unsigned char                                              UnknownData_ZHAY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              playerName;                                              // 0x0008(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedCamperIndex;                                     // 0x0018(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedSlasherIndex;                                    // 0x001C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SelectedCharacterCustomization;                          // 0x0020(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    SlasherSkulls;                                           // 0x0030(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CamperSkulls;                                            // 0x0034(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CamperStreak;                                            // 0x0038(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VZ5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeProperties
	 * Size -> 0x0018
	 */
	struct FLegacySavedBloodwebNodeProperties
	{
	public:
		EBloodwebNodeContentType                                   ContentType;                                             // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0001(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QAF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Tags;                                                    // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeGate
	 * Size -> 0x0020
	 */
	struct FLegacySavedBloodwebNodeGate
	{
	public:
		class FName                                                Description;                                             // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x000C(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x000D(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBloodwebNodeGateTypes                                     GateType;                                                // 0x000E(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VR2U[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Param;                                                   // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedBloodwebChest
	 * Size -> 0x0030
	 */
	struct FLegacySavedBloodwebChest
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventId;                                                 // 0x000C(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0018(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QJV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              GivenItemRarity;                                         // 0x0020(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedBloodwebNode
	 * Size -> 0x0080
	 */
	struct FLegacySavedBloodwebNode
	{
	public:
		struct FLegacySavedBloodwebNodeProperties                  Properties;                                              // 0x0000(0x0018) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FLegacySavedBloodwebNodeGate>                Gates;                                                   // 0x0018(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		EBloodwebNodeState                                         State;                                                   // 0x0028(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CF29[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nodeId;                                                  // 0x0030(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ContentId;                                               // 0x0040(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HKS[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLegacySavedBloodwebChest                           BloodwebChest;                                           // 0x0050(0x0030) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedBloodWebRingPersistentData
	 * Size -> 0x0010
	 */
	struct FLegacySavedBloodWebRingPersistentData
	{
	public:
		TArray<struct FLegacySavedBloodwebNode>                    NodeData;                                                // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedBloodWebPersistentData
	 * Size -> 0x0040
	 */
	struct FLegacySavedBloodWebPersistentData
	{
	public:
		int32_t                                                    VersionNumber;                                           // 0x0000(0x0004) ZeroConstructor, SaveGame, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLegacySavedBloodWebRingPersistentData>      RingData;                                                // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        Paths;                                                   // 0x0018(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		class FString                                              EntityCurrentNode;                                       // 0x0028(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           GenerationDate;                                          // 0x0038(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedPlayerLoadoutData
	 * Size -> 0x0098
	 */
	struct FLegacySavedPlayerLoadoutData
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUJY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ItemAddOns;                                              // 0x0010(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        CamperPerks;                                             // 0x0020(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CamperPerkLevels;                                        // 0x0030(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		class FName                                                CamperFavor;                                             // 0x0040(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Power;                                                   // 0x004C(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PowerAddOns;                                             // 0x0058(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        SlasherPerks;                                            // 0x0068(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<int32_t>                                            SlasherPerkLevels;                                       // 0x0078(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		class FName                                                SlasherFavor;                                            // 0x0088(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2EK[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacyCharacterSavedInventoryData
	 * Size -> 0x0018
	 */
	struct FLegacyCharacterSavedInventoryData
	{
	public:
		uint32_t                                                   Version;                                                 // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0004(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TimeObtainedSinceEpoch;                                  // 0x0010(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacyCharacterSavedProfileData
	 * Size -> 0x0130
	 */
	struct FLegacyCharacterSavedProfileData
	{
	public:
		int32_t                                                    VersionNumber;                                           // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodPoints;                                             // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodWebLevel;                                           // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeLevel;                                           // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesConfronted;                                         // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D049[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDateTime>                                   PrestigeDates;                                           // 0x0018(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedBloodWebPersistentData                  BloodWebData;                                            // 0x0028(0x0040) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedPlayerLoadoutData                       CharacterLoadoutData;                                    // 0x0068(0x0098) SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        Inventory;                                               // 0x0100(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FLegacyCharacterSavedInventoryData>          InventoryData;                                           // 0x0110(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        CurrentCustomization;                                    // 0x0120(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedDailyRitualInstance
	 * Size -> 0x0078
	 */
	struct FLegacySavedDailyRitualInstance
	{
	public:
		class FName                                                RitualKey;                                               // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOB3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            CharacterIDs;                                            // 0x0010(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<EPlayerRole>                                        Roles;                                                   // 0x0020(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x0030(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Threshold;                                               // 0x0034(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0038(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayThreshold;                                        // 0x003C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpReward;                                               // 0x0040(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Active;                                                  // 0x0044(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Rewarded;                                                // 0x0045(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StateChanged;                                            // 0x0046(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_255Z[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DateAssigned;                                            // 0x0048(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NbGameElapsed;                                           // 0x0050(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0F8[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EDBDScoreTypes>                                     TrackedEvents;                                           // 0x0058(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                TrackedGameEvents;                                       // 0x0068(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedDailyRitualContainer
	 * Size -> 0x0018
	 */
	struct FLegacySavedDailyRitualContainer
	{
	public:
		struct FDateTime                                           LastRitualReceivedDate;                                  // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLegacySavedDailyRitualInstance>             rituals;                                                 // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedFearMarketItemInstance
	 * Size -> 0x0018
	 */
	struct FLegacySavedFearMarketItemInstance
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Cost;                                                    // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodpointConversion;                                    // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Purchased;                                               // 0x0014(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BIRB[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacySavedFearMarketOfferingInstance
	 * Size -> 0x0020
	 */
	struct FLegacySavedFearMarketOfferingInstance
	{
	public:
		TArray<struct FLegacySavedFearMarketItemInstance>          ObjectsForSale;                                          // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		struct FDateTime                                           starttime;                                               // 0x0010(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndTime;                                                 // 0x0018(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataLocal
	 * Size -> 0x0180
	 */
	struct FLegacyPlayerSavedProfileDataLocal
	{
	public:
		int32_t                                                    Tokens;                                                  // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZMM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        offerings;                                               // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		bool                                                       FirstTimePlaying;                                        // 0x0018(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenGivenKillerTutorialEndReward;                     // 0x0019(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenGivenSurvivorTutorialEndReward;                   // 0x001A(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODED[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Wins;                                                    // 0x001C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Losses;                                                  // 0x0020(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIZV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FLegacyCharacterSavedProfileData>     CharacterData;                                           // 0x0028(0x0050) SaveGame, NativeAccessSpecifierPublic
		uint64_t                                                   CurrentSeasonTicks;                                      // 0x0078(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLegacySavedDailyRitualContainer                    DailyRituals;                                            // 0x0080(0x0018) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedFearMarketOfferingInstance              FearMarket;                                              // 0x0098(0x0020) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedPlayerLoadoutData                       LastConnectedLoadout;                                    // 0x00B8(0x0098) SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    LastConnectedCharacterIndex;                             // 0x0150(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNQC[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DisconnectPenaltyTime;                                   // 0x0158(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    _bloodpoints;                                            // 0x0160(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    _bonusBloodpoints;                                       // 0x0164(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    _unclampedBloodpoints;                                   // 0x0168(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    _fearTokens;                                             // 0x016C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           _ongoingGameTime;                                        // 0x0170(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _fearTokensMigrated;                                     // 0x0178(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENMQ[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileData
	 * Size -> 0x01D0 (FullSize[0x01E0] - InheritedSize[0x0010])
	 */
	struct FLegacyPlayerSavedProfileData : public FSaveDataBase
	{
	public:
		class FString                                              PlayerUID;                                               // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLegacyPlayerSavedProfileDataShared                 SharedData;                                              // 0x0020(0x0040) SaveGame, NativeAccessSpecifierPublic
		struct FLegacyPlayerSavedProfileDataLocal                  LocalData;                                               // 0x0060(0x0180) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OutlineConfig
	 * Size -> 0x0010
	 */
	struct FOutlineConfig
	{
	public:
		unsigned char                                              TranslucencyMaterials[0x10];                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SessionInfos
	 * Size -> 0x0048
	 */
	struct FSessionInfos
	{
	public:
		unsigned char                                              UnknownData_UFQ7[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.AnimData
	 * Size -> 0x0001
	 */
	struct FAnimData
	{
	public:
		ECharacterStance                                           Stance;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerFinishStats
	 * Size -> 0x0001
	 */
	struct FPlayerFinishStats
	{
	public:
		int8_t                                                     NumberOfSurvivorsKilled;                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.LookInputScalingData
	 * Size -> 0x0080
	 */
	struct FLookInputScalingData
	{
	public:
		unsigned char                                              UnknownData_691J[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LookInputAxisScalingData
	 * Size -> 0x0040
	 */
	struct FLookInputAxisScalingData
	{
	public:
		struct FDBDTimer                                           ScalingTimer;                                            // 0x0000(0x0028) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R92B[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerDataSync
	 * Size -> 0x0090
	 */
	struct FPlayerDataSync
	{
	public:
		struct FPlayerStateData                                    PlayerData;                                              // 0x0000(0x0038) NativeAccessSpecifierPublic
		struct FEquippedPlayerCustomization                        EquippedCustomization;                                   // 0x0038(0x0038) NativeAccessSpecifierPublic
		class FName                                                EquipedItemId;                                           // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBDD[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        EquipedItemAddonIds;                                     // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerHUDInfos
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FPlayerHUDInfos : public FDBDTableRowBase
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_848F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HUDClass[0x30];                                          // 0x0010(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FSoftObjectPath                                     TouchInterfaceName;                                      // 0x0040(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AttackSubstateRequestResult
	 * Size -> 0x0003
	 */
	struct FAttackSubstateRequestResult
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackSubstate                                            RequestedNextSubstate;                                   // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackSubstate                                            ServerNextSubstate;                                      // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RankResetStartingPips
	 * Size -> 0x0004
	 */
	struct FRankResetStartingPips
	{
	public:
		int32_t                                                    NewPipAmount;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RankGroupDefinition
	 * Size -> 0x0018
	 */
	struct FRankGroupDefinition
	{
	public:
		int32_t                                                    RankThreshold;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1JX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              PipThresholds;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RankDefinition
	 * Size -> 0x0004
	 */
	struct FRankDefinition
	{
	public:
		int32_t                                                    PipsRequired;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.KeyTupleBool
	 * Size -> 0x0010
	 */
	struct FKeyTupleBool
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       value;                                                   // 0x000C(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J1J[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterSavedInventoryDataV7
	 * Size -> 0x0020
	 */
	struct FCharacterSavedInventoryDataV7
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Num;                                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              I;                                                       // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AssignedPerkPropertiesV7
	 * Size -> 0x0014
	 */
	struct FAssignedPerkPropertiesV7
	{
	public:
		class FName                                                perkId;                                                  // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerkLevel;                                               // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTeachable;                                             // 0x0010(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8MP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedCharacterLevelDataV7
	 * Size -> 0x0018
	 */
	struct FSavedCharacterLevelDataV7
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPerksBeenSelected;                                    // 0x0004(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasPerkSelectionBeenGenerated;                           // 0x0005(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKSO[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAssignedPerkPropertiesV7>                   PerkSelection;                                           // 0x0008(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedStatsDataV7
	 * Size -> 0x0010
	 */
	struct FSavedStatsDataV7
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      value;                                                   // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedCharmSlotData
	 * Size -> 0x0010
	 */
	struct FSavedCharmSlotData
	{
	public:
		int8_t                                                     slotIndex;                                               // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RZZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CharmId;                                                 // 0x0004(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterSavedProfileDataV7
	 * Size -> 0x0158
	 */
	struct FCharacterSavedProfileDataV7
	{
	public:
		int32_t                                                    BloodWebLevel;                                           // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeLevel;                                           // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharacterExperience;                                     // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesConfronted;                                         // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PrestigeDates;                                           // 0x0010(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedBloodWebPersistentData                  BloodWebData;                                            // 0x0020(0x0040) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedPlayerLoadoutData                       CharacterLoadoutData;                                    // 0x0060(0x0098) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FCharacterSavedInventoryDataV7>              Inventory;                                               // 0x00F8(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedCharacterLevelDataV7>                  CharacterProgression;                                    // 0x0108(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedStatsDataV7>                           StatProgression;                                         // 0x0118(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        CurrentCustomization;                                    // 0x0128(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedCharmSlotData>                         CurrentCharmCustomization;                               // 0x0138(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        UniquePerksAdded;                                        // 0x0148(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterKeyTuple
	 * Size -> 0x0160
	 */
	struct FCharacterKeyTuple
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TIF9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterSavedProfileDataV7                        Data;                                                    // 0x0008(0x0158) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedDailyRitualContainerV7
	 * Size -> 0x0040
	 */
	struct FSavedDailyRitualContainerV7
	{
	public:
		class FString                                              LastRitualReceivedDate;                                  // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastRitualPopupDate;                                     // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastRitualDismissedDate;                                 // 0x0020(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLegacySavedDailyRitualInstance>             rituals;                                                 // 0x0030(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedFearMarketOfferingInstanceV7
	 * Size -> 0x0030
	 */
	struct FSavedFearMarketOfferingInstanceV7
	{
	public:
		TArray<struct FLegacySavedFearMarketItemInstance>          ObjectsForSale;                                          // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		class FString                                              starttime;                                               // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EndTime;                                                 // 0x0020(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedSpecialEventDataV7
	 * Size -> 0x0028
	 */
	struct FSavedSpecialEventDataV7
	{
	public:
		class FName                                                EventId;                                                 // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTZE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            SeenCinematics;                                          // 0x0010(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		bool                                                       EventEntryScreenOpened;                                  // 0x0020(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D28P[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SaveDataV7
	 * Size -> 0x03D8 (FullSize[0x03E8] - InheritedSize[0x0010])
	 */
	struct FSaveDataV7 : public FSaveDataBase
	{
	public:
		class FString                                              PlayerUID;                                               // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedCamperIndex;                                     // 0x0020(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedSlasherIndex;                                    // 0x0024(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        offerings;                                               // 0x0028(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		bool                                                       FirstTimePlaying;                                        // 0x0038(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMC0[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConsecutiveMatchStreak;                                  // 0x003C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenGivenKillerTutorialEndReward;                     // 0x0040(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenGivenSurvivorTutorialEndReward;                   // 0x0041(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenBloodpointsOnboardingCurrencyPopup;               // 0x0042(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenAuricCellsOnboardingCurrencyPopup;                // 0x0043(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenIridescentShardsOnboardingCurrencyPopup;          // 0x0044(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GBI[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CurrentSeasonTicks;                                      // 0x0048(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastConnectedCharacterIndex;                             // 0x0050(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRDG[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisconnectPenaltyTime;                                   // 0x0058(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMatchEndTime;                                        // 0x0068(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMatchStartTime;                                      // 0x0078(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastKillerMatchEndTime;                                  // 0x0088(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastSurvivorMatchEndTime;                                // 0x0098(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Experience;                                              // 0x00A8(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusExperience;                                         // 0x00AC(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FearTokens;                                              // 0x00B0(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FearTokensMigrated;                                      // 0x00B4(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNXW[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OngoingGameTime;                                         // 0x00B8(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatches;                                       // 0x00C8(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TRR[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKeyTupleBool>                               PageVisited;                                             // 0x00D0(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FKeyTupleBool>                               ChatVisible;                                             // 0x00E0(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivor;                             // 0x00F0(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKiller;                               // 0x00F4(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivorNoFriends;                    // 0x00F8(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKillerNoFriends;                      // 0x00FC(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastMatchTimestamp;                                      // 0x0100(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastSessionTimestamp;                                    // 0x0108(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeSessions;                                      // 0x0110(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZK0X[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CumulativePlaytime;                                      // 0x0118(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharacterKeyTuple>                          CharacterData;                                           // 0x0128(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        OwnedCharms;                                             // 0x0138(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		struct FSavedDailyRitualContainerV7                        DailyRituals;                                            // 0x0148(0x0040) SaveGame, NativeAccessSpecifierPublic
		struct FSavedFearMarketOfferingInstanceV7                  FearMarket;                                              // 0x0188(0x0030) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedPlayerLoadoutData                       LastLoadout;                                             // 0x01B8(0x0098) SaveGame, NativeAccessSpecifierPublic
		struct FConsoleUserSettings                                ConsoleUserSettings;                                     // 0x0250(0x00D0) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedStatsDataV7>                           PlayerStatProgression;                                   // 0x0320(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FString>                                      OwnedContent;                                            // 0x0330(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedSpecialEventDataV7>                    SpecialEvent;                                            // 0x0340(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedBloodWebPersistentData                  BloodStoreKillers;                                       // 0x0350(0x0040) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedBloodWebPersistentData                  BloodStoreSurvivors;                                     // 0x0390(0x0040) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FKeyTupleBool>                               OnboardingCompleted;                                     // 0x03D0(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		bool                                                       IsCrossplayAllowed;                                      // 0x03E0(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoDeclineFriendInvites;                                // 0x03E1(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWM5[0x6];                                   // 0x03E2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedSpecialEventDataV8
	 * Size -> 0x0010
	 */
	struct FSavedSpecialEventDataV8
	{
	public:
		class FName                                                EventId;                                                 // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EventEntryScreenOpened;                                  // 0x000C(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EventSplashScreenSeen;                                   // 0x000D(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUV5[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SavedReleaseDataV8
	 * Size -> 0x0018
	 */
	struct FSavedReleaseDataV8
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NewChapterPopupSeen;                                     // 0x0010(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SWZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SaveDataV8
	 * Size -> 0x0490 (FullSize[0x04A0] - InheritedSize[0x0010])
	 */
	struct FSaveDataV8 : public FSaveDataBase
	{
	public:
		class FString                                              PlayerUID;                                               // 0x0010(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedCamperIndex;                                     // 0x0020(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedSlasherIndex;                                    // 0x0024(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        offerings;                                               // 0x0028(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		bool                                                       FirstTimePlaying;                                        // 0x0038(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenLightSensitivity;                                 // 0x0039(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenMainMenu;                                         // 0x003A(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8IV[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConsecutiveMatchStreak;                                  // 0x003C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenGivenKillerTutorialEndReward;                     // 0x0040(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenGivenSurvivorTutorialEndReward;                   // 0x0041(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenBloodpointsOnboardingCurrencyPopup;               // 0x0042(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenAuricCellsOnboardingCurrencyPopup;                // 0x0043(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeenIridescentShardsOnboardingCurrencyPopup;          // 0x0044(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX8W[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CurrentSeasonTicks;                                      // 0x0048(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastConnectedCharacterIndex;                             // 0x0050(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YIL[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisconnectPenaltyTime;                                   // 0x0058(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMatchEndTime;                                        // 0x0068(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMatchStartTime;                                      // 0x0078(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastKillerMatchEndTime;                                  // 0x0088(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastSurvivorMatchEndTime;                                // 0x0098(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatches;                                       // 0x00A8(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_260X[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKeyTupleBool>                               PageVisited;                                             // 0x00B0(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FKeyTupleBool>                               ChatVisible;                                             // 0x00C0(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivor;                             // 0x00D0(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKiller;                               // 0x00D4(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivorNoFriends;                    // 0x00D8(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKillerNoFriends;                      // 0x00DC(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastMatchTimestamp;                                      // 0x00E0(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastSessionTimestamp;                                    // 0x00E8(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeSessions;                                      // 0x00F0(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSTL[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CumulativePlaytime;                                      // 0x00F8(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCharacterKeyTuple>                          CharacterData;                                           // 0x0108(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        OwnedCharms;                                             // 0x0118(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		struct FSavedDailyRitualContainerV7                        DailyRituals;                                            // 0x0128(0x0040) SaveGame, NativeAccessSpecifierPublic
		struct FSavedFearMarketOfferingInstanceV7                  FearMarket;                                              // 0x0168(0x0030) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedPlayerLoadoutData                       LastLoadout;                                             // 0x0198(0x0098) SaveGame, NativeAccessSpecifierPublic
		struct FConsoleUserSettings                                ConsoleUserSettings;                                     // 0x0230(0x00D0) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedStatsDataV7>                           PlayerStatProgression;                                   // 0x0300(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<class FString>                                      OwnedContent;                                            // 0x0310(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedSpecialEventDataV8>                    SpecialEvent;                                            // 0x0320(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FSavedReleaseDataV8>                         Releases;                                                // 0x0330(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		unsigned char                                              SeenCinematics[0x50];                                    // 0x0340(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FLegacySavedBloodWebPersistentData                  BloodStoreKillers;                                       // 0x0390(0x0040) SaveGame, NativeAccessSpecifierPublic
		struct FLegacySavedBloodWebPersistentData                  BloodStoreSurvivors;                                     // 0x03D0(0x0040) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FKeyTupleBool>                               OnboardingCompleted;                                     // 0x0410(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		struct FDailyRitualSaveData                                DailyRitualSaveData;                                     // 0x0420(0x0008) SaveGame, NoDestructor, NativeAccessSpecifierPublic
		struct FUIViewFlagSaveData                                 UIViewFlags;                                             // 0x0428(0x0050) SaveGame, NativeAccessSpecifierPublic
		bool                                                       IsCrossplayAllowed;                                      // 0x0478(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoDeclineFriendInvites;                                // 0x0479(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeginnerTooltipsBeenDisabledAtLevel;                  // 0x047A(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowPortraitBorder;                                      // 0x047B(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YUJ[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterCustomizationPresetsList>          CharacterCustomizationPresets;                           // 0x0480(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<struct FCharacterLoadoutPresetsList>                CharacterLoadoutPresets;                                 // 0x0490(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SaveValidationData
	 * Size -> 0x0030
	 */
	struct FSaveValidationData
	{
	public:
		class FString                                              PlayerUID;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CharacterData;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QSW[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ScoreValue
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FScoreValue : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDBDScoreCategory                                          Category;                                                // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRIF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BloodpointValue;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBloodpointValue;                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         BloodpointDepreciationCurve;                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OngoingWaitTime;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLTC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScoreCategoryData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FScoreCategoryData : public FDBDTableRowBase
	{
	public:
		EDBDScoreCategory                                          Category;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1ZN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScoreCap;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProgressionCap;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AchievementCap;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerstateDataCache
	 * Size -> 0x0058
	 */
	struct FPlayerstateDataCache
	{
	public:
		TMap<class FName, struct FAwardedScores>                   awardedScoresByType;                                     // 0x0000(0x0050) NativeAccessSpecifierPublic
		bool                                                       IsDataCacheValid;                                        // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MHP[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SurfaceTypeName
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FSurfaceTypeName : public FDBDTableRowBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUTU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ToastButton
	 * Size -> 0x0020
	 */
	struct FToastButton
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       IsRegression;                                            // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7GH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.Toast
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FToast : public FDBDTableRowBase
	{
	public:
		float                                                      DisplayDuration;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      lifetime;                                                // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ToastText;                                               // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EToastInputType, struct FToastButton>                 ButtonsData;                                             // 0x0028(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      DelayBeforeInteraction;                                  // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAI2[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ToastIcon[0x30];                                         // 0x0080(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.DDosGameConfigDS
	 * Size -> 0x0002
	 */
	struct FDDosGameConfigDS
	{
	public:
		bool                                                       DDoSDetection;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DDoSDetectionAnalytics;                                  // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DedicatedServerGameConfig
	 * Size -> 0x0010
	 */
	struct FDedicatedServerGameConfig
	{
	public:
		int32_t                                                    LatencyRetryCooldownSeconds;                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NewContentShutdown;                                      // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45QJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NewContentShutdownMaxMinutes;                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewContentShutdownMinMinutes;                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DedicatedSessionSearchCompletedEventData
	 * Size -> 0x0058
	 */
	struct FDedicatedSessionSearchCompletedEventData
	{
	public:
		class FString                                              GameLiftSessionId;                                       // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FleetId;                                                 // 0x0020(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IpAddress;                                               // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZAM[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DnsName;                                                 // 0x0048(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ResolutionQualityPair
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FResolutionQualityPair : public FDBDTableRowBase
	{
	public:
		int32_t                                                    ResX;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResY;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quality;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoAdjust;                                              // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGYQ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScreenScaleForWindowedMode;                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScreenResolution;                                        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PCDeviceProfiles
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FPCDeviceProfiles : public FDBDTableRowBase
	{
	public:
		class FName                                                Cpu;                                                     // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GPU;                                                     // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FResolutionQualityPair>                      Pairs;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AkEventWithSubtitle
	 * Size -> 0x0038
	 */
	struct FAkEventWithSubtitle
	{
	public:
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Weight;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSubtitles;                                            // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQXJ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomSoundFXData>                          RequiredAudioSwitch;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomSoundFXData>                          ForbiddenAudioSwitch;                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   DelayMsBeforeSubtitles;                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJG4[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DialogPlannedPlayback
	 * Size -> 0x0020
	 */
	struct FDialogPlannedPlayback
	{
	public:
		TArray<struct FAkEventWithSubtitle>                        PlannedClip;                                             // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameEventTrigger;                                        // 0x0010(0x000C) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDeletingAfterTrigger;                                  // 0x001C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPZD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DisplayStandControllerData
	 * Size -> 0x0070
	 */
	struct FDisplayStandControllerData
	{
	public:
		unsigned char                                              UnknownData_3DDH[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DownloadProgression
	 * Size -> 0x0030
	 */
	struct FDownloadProgression
	{
	public:
		float                                                      DownloadSize;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalDownloadedSize;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownloadSpeed;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstallProgress;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDownloading;                                           // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2S6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DownloadStatus;                                          // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.EmblemTooltipData
	 * Size -> 0x0070 (FullSize[0x0108] - InheritedSize[0x0098])
	 */
	struct FEmblemTooltipData : public FBaseTooltipData
	{
	public:
		struct FEmblemSlotData                                     EmblemSlotData;                                          // 0x0098(0x0070) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PathPosition
	 * Size -> 0x0018
	 */
	struct FPathPosition
	{
	public:
		unsigned char                                              UnknownData_LMTS[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ExternalEffectData
	 * Size -> 0x0038
	 */
	struct FExternalEffectData
	{
	public:
		unsigned char                                              UnknownData_ZY4X[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.FakePalletData
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FFakePalletData : public FDBDTableRowBase
	{
	public:
		unsigned char                                              LevelPalletBP[0x30];                                     // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              DreamPalletBP[0x30];                                     // 0x0038(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              PalletTrackerBP[0x30];                                   // 0x0068(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              IllusionaryPalletStaticMesh[0x30];                       // 0x0098(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                ID;                                                      // 0x00C8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIKW[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.FilterLoadoutData
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FFilterLoadoutData : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8VL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon[0x30];                                              // 0x0018(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Title;                                                   // 0x0048(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<EPlayerRole>                                        Role;                                                    // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ELoadoutType                                               LoadoutType;                                             // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IMF[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.FreeToPlayData
	 * Size -> 0x0030
	 */
	struct FFreeToPlayData
	{
	public:
		unsigned char                                              UnknownData_KDUW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Start;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              End;                                                     // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.FreeToPlayEventData
	 * Size -> 0x0030
	 */
	struct FFreeToPlayEventData
	{
	public:
		struct FFreeToPlayData                                     Event;                                                   // 0x0000(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.GameEventDispatcherHandleBP
	 * Size -> 0x0020
	 */
	struct FGameEventDispatcherHandleBP
	{
	public:
		struct FGameplayTag                                        Filter;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      GameEventDelegate;                                       // 0x000C(0x0010) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GTB[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DeadByDaylight.GameNotificationData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FGameNotificationData : public FDBDTableRowBase
	{
	public:
		EPromptType                                                PromptType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPromptPriority                                            Priority;                                                // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYNW[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Content;                                                 // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.NotificationHistoryElement
	 * Size -> 0x0018
	 */
	struct FNotificationHistoryElement
	{
	public:
		unsigned char                                              UnknownData_6LCR[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.GameplayNotificationData
	 * Size -> 0x0058
	 */
	struct FGameplayNotificationData
	{
	public:
		class FName                                                SourceID;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInventoryItemType                                         SourceType;                                              // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9PGE[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SourceIconIndex;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SourceLevel;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                EffectId;                                                // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V68B[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EffectIconFilePath;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EStatusEffectType                                          EffectType;                                              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YMPZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EffectDisplayName;                                       // 0x0040(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.GarantiedRarityRingDistributionValues
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FGarantiedRarityRingDistributionValues : public FDBDTableRowBase
	{
	public:
		int32_t                                                    InnerRingCommonItemProbability;                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingCommonItemProbability;                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingCommonItemProbability;                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingUncommonItemProbability;                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingUncommonItemProbability;                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingUncommonItemProbability;                        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingRareItemProbability;                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingRareItemProbability;                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingRareItemProbability;                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingVeryRareItemProbability;                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingVeryRareItemProbability;                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingVeryRareItemProbability;                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingUltraRareItemProbability;                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingUltraRareItemProbability;                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingUltraRareItemProbability;                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingArtifactItemProbability;                        // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingArtifactItemProbability;                       // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingArtifactItemProbability;                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingSpectralItemProbability;                        // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingSpectralItemProbability;                       // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingSpectralItemProbability;                        // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingSpecialEventItemProbability;                    // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingSpecialEventItemProbability;                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingSpecialEventItemProbability;                    // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingLegendaryItemProbability;                       // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingLegendaryItemProbability;                      // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingLegendaryItemProbability;                       // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingEpicItemProbability;                            // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingEpicItemProbability;                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingEpicItemProbability;                            // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingSuperEpicItemProbability;                       // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingSuperEpicItemProbability;                      // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingSuperEpicItemProbability;                       // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InnerRingUltraEpicItemProbability;                       // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRingUltraEpicItemProbability;                      // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRingUltraEpicItemProbability;                       // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.HintData
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FHintData : public FDBDTableRowBase
	{
	public:
		EHintCategory                                              Category;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OP6O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    levelMin;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    levelMax;                                                // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    relevantCharacterID;                                     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XY1Z[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.HitValidationEditorConfig
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FHitValidationEditorConfig : public FTableRowBase
	{
	public:
		EHitValidatorConfigName                                    ConfigName;                                              // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5B6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CapsuleInflation;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ML91[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.HitValidationRecorder
	 * Size -> 0x0004
	 */
	struct FHitValidationRecorder
	{
	public:
		float                                                      CacheTimespan;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.HitValidationValidator
	 * Size -> 0x0018
	 */
	struct FHitValidationValidator
	{
	public:
		float                                                      CapsuleInflation;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.HitValidationGameConfig
	 * Size -> 0x0018
	 */
	struct FHitValidationGameConfig
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableCollisionCheck;                                    // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUAH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitValidationRecorder                              Recorder;                                                // 0x0004(0x0004) NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FHitValidationValidator>                     Validators;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.HookLingerTimerHandleContainer
	 * Size -> 0x0010
	 */
	struct FHookLingerTimerHandleContainer
	{
	public:
		class AMeatHook*                                           Hook;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z411[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerInfoCache
	 * Size -> 0x0038
	 */
	struct FPlayerInfoCache
	{
	public:
		unsigned char                                              UnknownData_LTHZ[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.InteractionProficiencyProperties
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FInteractionProficiencyProperties : public FDBDTableRowBase
	{
	public:
		class FName                                                ProficiencyID;                                           // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6EUK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ProficiencyBlueprint[0x30];                              // 0x0018(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<float>                                              BuffLevelThresholds;                                     // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              DebuffLevelThresholds;                                   // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       HasLevels;                                               // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GVLD[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconFilePath;                                            // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.InteractionProficiencyData
	 * Size -> 0x0010
	 */
	struct FInteractionProficiencyData
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GEAR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EStatusEffectType                                          ProficiencyType;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E2Q0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.InteractionRequest
	 * Size -> 0x0018
	 */
	struct FInteractionRequest
	{
	public:
		class UInteractionDefinition*                              _interaction;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2AKP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _requester;                                              // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.ParentItemIDs
	 * Size -> 0x0018
	 */
	struct FParentItemIDs
	{
	public:
		bool                                                       MatchAnyItemID;                                          // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q4F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        itemIds;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemAddonProperties
	 * Size -> 0x0058 (FullSize[0x0240] - InheritedSize[0x01E8])
	 */
	struct FItemAddonProperties : public FItemData
	{
	public:
		unsigned char                                              ItemAddonBlueprint[0x30];                                // 0x01E8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FParentItemIDs                                      parentItem;                                              // 0x0218(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        PreLevelGenerationModifierID;                            // 0x0230(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.CharacterFallbackData
	 * Size -> 0x0020
	 */
	struct FCharacterFallbackData
	{
	public:
		class FString                                              DefaultKiller;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultSurvivor;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemCharacterKillswitchData
	 * Size -> 0x0038
	 */
	struct FItemCharacterKillswitchData
	{
	public:
		struct FCharacterFallbackData                              CharacterFallback;                                       // 0x0000(0x0020) NativeAccessSpecifierPublic
		TArray<class FString>                                      DisabledItems;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       DisabledItems_IsSet;                                     // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_8CHI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemTooltipData
	 * Size -> 0x0088 (FullSize[0x0120] - InheritedSize[0x0098])
	 */
	struct FItemTooltipData : public FBaseTooltipData
	{
	public:
		unsigned char                                              UnknownData_2PE9[0x88];                                  // 0x0098(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ItemTypeData
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FItemTypeData : public FDBDTableRowBase
	{
	public:
		ELoadoutItemType                                           ItemType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K71Y[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemUIData                                         UIData;                                                  // 0x0010(0x00C0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.JwtGameConfig
	 * Size -> 0x0001
	 */
	struct FJwtGameConfig
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.KillerSoundCueTracker
	 * Size -> 0x001C
	 */
	struct FKillerSoundCueTracker
	{
	public:
		unsigned char                                              UnknownData_AJEI[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LandingPageStorefrontTabData
	 * Size -> 0x0058
	 */
	struct FLandingPageStorefrontTabData
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           NewStartDate;                                            // 0x0010(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           NewEndDate;                                              // 0x0018(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2DDynamic*                                   Image;                                                   // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0028(0x0018) Transient, NativeAccessSpecifierPublic
		class FText                                                TagText;                                                 // 0x0040(0x0018) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DirectionalHeightFogInterpolationValues
	 * Size -> 0x0098
	 */
	struct FDirectionalHeightFogInterpolationValues
	{
	public:
		float                                                      FogDensity;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FogInscatteringColor;                                    // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionalInscatteringExponent;                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionalInscatteringStartDistance;                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DirectionalInscatteringColor;                            // 0x001C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogHeightFalloff;                                        // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogMaxOpacity;                                           // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDistance;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondFogDensity;                                        // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondFogHeightFalloff;                                  // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondFogHeightOffset;                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3B6P[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHeightFogGradientEntry>                     FogGradient;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bReplaceVolumetricFogAlbedoWithColorGradient;            // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NT8Q[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumetricFogGradientIntensityMultiplier;                // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceUntilFlatFog;                                    // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceUntilNoFog;                                      // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableVolumetricFog;                                    // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWKS[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumetricFogScatteringDistribution;                     // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VolumetricFogAlbedo;                                     // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VolumetricFogEmissive;                                   // 0x0074(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricFogExtinctionScale;                            // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricFogDistance;                                   // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricFogStaticLightingScatteringIntensity;          // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLightColorsWithFogInscatteringColors;           // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78IG[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LoadingInfoData
	 * Size -> 0x0068
	 */
	struct FLoadingInfoData
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsAvailableForKiller;                                    // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableForSurvivor;                                  // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS6X[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LoadingImagesData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FLoadingImagesData : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AOJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Images[0x10];                                            // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FLoadingInfoData>                            InfoData;                                                // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsAvailableForSurvivor;                                  // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableForKiller;                                    // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGenericImages;                                         // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1RD[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LoadingTimeoutPerStep
	 * Size -> 0x0020
	 */
	struct FLoadingTimeoutPerStep
	{
	public:
		class FString                                              StepName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpectedTimeout;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HardCapTimeout;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeCapWithoutProgress;                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM6I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LoadoutSlotUnlockLevelValue
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FLoadoutSlotUnlockLevelValue : public FDBDTableRowBase
	{
	public:
		ELoadoutSlot                                               LoadoutSlot;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61HB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BloodWebLevel;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerLobbyOrderData
	 * Size -> 0x0018
	 */
	struct FPlayerLobbyOrderData
	{
	public:
		class FString                                              playerID;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    slotIndex;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7BL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.LobbyPlayerData
	 * Size -> 0x0050
	 */
	struct FLobbyPlayerData
	{
	public:
		unsigned char                                              UnknownData_98MU[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.KillerClosetActorsTypes
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FKillerClosetActorsTypes : public FDBDTableRowBase
	{
	public:
		struct FGameplayTag                                        KillerPresenceTag;                                       // 0x0008(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61SQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClosetActorClass[0x30];                                  // 0x0018(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                SocketToSpawnOn;                                         // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2LXU[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.CustomLockerOutlineOverride
	 * Size -> 0x0050
	 */
	struct FCustomLockerOutlineOverride
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6RN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                LockerStateTags;                                         // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                PlayerStateTags;                                         // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                PlayerPerkFlags;                                         // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutlineColor;                                            // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAlwaysVisible;                                         // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FadeOutAsClosingIn;                                      // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N172[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.MainMenuButtonData
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FMainMenuButtonData : public FDBDTableRowBase
	{
	public:
		EMainMenuButton                                            ButtonType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K05X[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                label;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                InfoTitle;                                               // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                LockedInfoTitle;                                         // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsDisabled;                                              // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHidden;                                                // 0x005A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMHP[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.MatchmakingContextData
	 * Size -> 0x0004
	 */
	struct FMatchmakingContextData
	{
	public:
		uint32_t                                                   ContextId;                                               // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.MenuCharacterUIData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMenuCharacterUIData : public FDBDTableRowBase
	{
	public:
		int32_t                                                    characterIndex;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             offsetMainMenuForwardPosition;                           // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             offsetMainMenuBackwardPosition;                          // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXT9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.MenuIndexChangeEventData
	 * Size -> 0x0004
	 */
	struct FMenuIndexChangeEventData
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.MenuRoleChangeEventData
	 * Size -> 0x0001
	 */
	struct FMenuRoleChangeEventData
	{
	public:
		EPlayerRole                                                PlayerRole;                                              // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.GameInfoEventData
	 * Size -> 0x0002
	 */
	struct FGameInfoEventData
	{
	public:
		EPlayerRole                                                PlayerRole;                                              // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameType                                                  GameType;                                                // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.NewsContentDetails
	 * Size -> 0x00B8
	 */
	struct FNewsContentDetails
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Version;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImagePath;                                               // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ImagePath_IsSet;                                         // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_FW0R[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DwnImagePath;                                            // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DwnImagePath_IsSet;                                      // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_EAPG[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ImageHeight;                                             // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ImageHeight_IsSet;                                       // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		bool                                                       IsHidden;                                                // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHidden_IsSet;                                          // 0x006A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_O590[0x21];                                  // 0x006B(0x0021) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Type;                                                    // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Type_IsSet;                                              // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		unsigned char                                              UnknownData_MYVQ[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ContentTags;                                             // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              StartDate;                                               // 0x00A8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.NewsContentOnlineData
	 * Size -> 0x0018
	 */
	struct FNewsContentOnlineData
	{
	public:
		TArray<struct FNewsContentDetails>                         News;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       News_isset;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_483U[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.NodeContentDistributionValue
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FNodeContentDistributionValue : public FDBDTableRowBase
	{
	public:
		int32_t                                                    Empty_Weight;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Empty_MinCount;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Empty_MaxCount;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Perks_Weight;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Perks_MinCount;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Perks_MaxCount;                                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerksPacks_Weight;                                       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerksPacks_MinCount;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerksPacks_MaxCount;                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Offerings_Weight;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Offerings_MinCount;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Offerings_MaxCount;                                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Items_Weight;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Items_MinCount;                                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Items_MaxCount;                                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddOn_Weight;                                            // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddOn_MinCount;                                          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddOn_MaxCount;                                          // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Chests_Weight;                                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Chests_MinCount;                                         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Chests_MaxCount;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WK0[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.Offering
	 * Size -> 0x0220
	 */
	struct FOffering
	{
	public:
		unsigned char                                              UnknownData_PAGN[0x220];                                 // 0x0000(0x0220) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.OfferingEffect
	 * Size -> 0x0028
	 */
	struct FOfferingEffect
	{
	public:
		EOfferingEffectType                                        Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHOJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                value;                                                   // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Modifier;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OfferingProperties
	 * Size -> 0x0038 (FullSize[0x0220] - InheritedSize[0x01E8])
	 */
	struct FOfferingProperties : public FItemData
	{
	public:
		EOfferingType                                              OfferingType;                                            // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5PF[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOfferingEffect>                             Effects;                                                 // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              BigIconFilePath;                                         // 0x0210(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OfferingCategoryData
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FOfferingCategoryData : public FDBDTableRowBase
	{
	public:
		EOfferingCategory                                          OfferingCategory;                                        // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM2R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPlayerRole>                                        Role;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FItemUIData                                         UIData;                                                  // 0x0020(0x00C0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OfferingTriggerPositionData
	 * Size -> 0x0010
	 */
	struct FOfferingTriggerPositionData
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PosX;                                                    // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PosY;                                                    // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CardIndex;                                               // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDQueueTimeInfo
	 * Size -> 0x0018
	 */
	struct FDBDQueueTimeInfo
	{
	public:
		unsigned char                                              UnknownData_VYVL[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDConnectionStatus
	 * Size -> 0x0010
	 */
	struct FDBDConnectionStatus
	{
	public:
		unsigned char                                              UnknownData_0BS7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDGameInstance*                                    _gameInstance;                                           // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDSearchParams
	 * Size -> 0x0080
	 */
	struct FDBDSearchParams
	{
	public:
		unsigned char                                              UnknownData_5HZ1[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDJoinParams
	 * Size -> 0x0001
	 */
	struct FDBDJoinParams
	{
	public:
		EGameType                                                  GameType;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.OutfitData
	 * Size -> 0x0160 (FullSize[0x0168] - InheritedSize[0x0008])
	 */
	struct FOutfitData : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJE1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemUIData                                         UIData;                                                  // 0x0018(0x00C0) Edit, NativeAccessSpecifierPublic
		struct FItemAvailability                                   Availability;                                            // 0x00D8(0x0030) Edit, NativeAccessSpecifierPublic
		TArray<class FName>                                        OutfitItems;                                             // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                CollectionName;                                          // 0x0118(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CollectionDescription;                                   // 0x0130(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                              InclusionVersion;                                        // 0x0148(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableInAtlantaBuild;                               // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2U1[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomizedAudioStateCollection;                          // 0x015C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RevealOptions
	 * Size -> 0x0018
	 */
	struct FRevealOptions
	{
	public:
		bool                                                       IsUnaffectedByBlindness;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOutlineAlwaysVisible;                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnaffectedByFadeout;                                   // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3AS[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTRX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActorToTestRangeFrom;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SurvivorInfoData
	 * Size -> 0x0038
	 */
	struct FSurvivorInfoData
	{
	public:
		unsigned char                                              UnknownData_4UBU[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PerkLevelText
	 * Size -> 0x0028
	 */
	struct FPerkLevelText
	{
	public:
		TArray<class FString>                                      Tunables;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                TextOverride;                                            // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PerkProperties
	 * Size -> 0x00F0 (FullSize[0x02D8] - InheritedSize[0x01E8])
	 */
	struct FPerkProperties : public FItemData
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOfferingEffect>                             Effects;                                                 // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    AssociatedPlayerIndex;                                   // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MandatoryOnBloodweblevel;                                // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeachableOnBloodweblevel;                                // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AtlantaTeachableLevel;                                   // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPerkCategory>                                      PerkCategory;                                            // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              PerkBlueprint[0x30];                                     // 0x0228(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<EItemRarity>                                        PerkLevelRarity;                                         // 0x0258(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPerkLevelText>                              PerkLevelTunables;                                       // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                PerkLevel1Description;                                   // 0x0278(0x0018) Edit, EditFixedSize, NativeAccessSpecifierPublic
		class FText                                                PerkLevel2Description;                                   // 0x0290(0x0018) Edit, EditFixedSize, NativeAccessSpecifierPublic
		class FText                                                PerkLevel3Description;                                   // 0x02A8(0x0018) Edit, EditFixedSize, NativeAccessSpecifierPublic
		TArray<class FString>                                      AtlantaActivatableInteractionIDs;                        // 0x02C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       AtlantaLowPriority;                                      // 0x02D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZYK[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlatformDlcData
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FPlatformDlcData : public FDBDTableRowBase
	{
	public:
		class FString                                              ID;                                                      // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UnlockDescription;                                       // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UISortOrder;                                             // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBGY[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DlcIdSteam;                                              // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdEpic;                                               // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdDmm;                                                // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdPS4;                                                // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdXB1LegacyXDK;                                       // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcId_XB1_XSX_GDK;                                       // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdSwitch;                                             // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdGRDK;                                               // 0x00B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdPS5;                                                // 0x00C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdStadia;                                             // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DlcIdMobile;                                             // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerCapsuleQueryParams
	 * Size -> 0x0078
	 */
	struct FPlayerCapsuleQueryParams
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6744[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ignoreActors[0x50];                                      // 0x0018(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_P43W[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerLevelData
	 * Size -> 0x000C
	 */
	struct FPlayerLevelData
	{
	public:
		int32_t                                                    LevelValue;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeValue;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxXp;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerLevelTooltipData
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	struct FPlayerLevelTooltipData : public FBaseTooltipData
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0098(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerPrestige;                                          // 0x009C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentExperience;                                       // 0x00A0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NextLevelExperience;                                     // 0x00A4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerReadyStatusData
	 * Size -> 0x000C
	 */
	struct FPlayerReadyStatusData
	{
	public:
		int32_t                                                    playerID;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    slotIndex;                                               // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReady;                                                 // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSlasher;                                               // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocalPlayer;                                           // 0x000A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAPR[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerRoleRankData
	 * Size -> 0x0010
	 */
	struct FPlayerRoleRankData
	{
	public:
		EPlayerRole                                                PlayerRole;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REFK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Rank;                                                    // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PipsRequiredForNextRank;                                 // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActivePips;                                              // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerRankData
	 * Size -> 0x0018
	 */
	struct FPlayerRankData
	{
	public:
		class FString                                              MirrorsId;                                               // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                PlayerRole;                                              // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OK3N[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerRankForRole;                                       // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerRoundStartEventData
	 * Size -> 0x0050
	 */
	struct FPlayerRoundStartEventData
	{
	public:
		EPlayerRole                                                PlayerRole;                                              // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsABot;                                                  // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIDifficultyLevel                                         BotDifficultyLevel;                                      // 0x0002(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWVJ[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BotName;                                                 // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BotMirrorID;                                             // 0x0018(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    characterId;                                             // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerRankForRole;                                       // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeLevel;                                           // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodWebLevel;                                           // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pips;                                                    // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFQR[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerRankData>                             PlayerRankDataArray;                                     // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerScoreEmitterData
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FPlayerScoreEmitterData : public FDBDTableRowBase
	{
	public:
		struct FGameplayTagQuery                                   PawnSemanticTags;                                        // 0x0008(0x0048) Edit, NativeAccessSpecifierPublic
		unsigned char                                              Emitter[0x30];                                           // 0x0050(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.PostAttackData
	 * Size -> 0x0007
	 */
	struct FPostAttackData
	{
	public:
		bool                                                       IsOblivious;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKO;                                                    // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsExposed;                                               // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPostPhaseWalkAttack;                                   // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDownedInDemonMode;                                     // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLegionBleedOutAttack;                                  // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDemogorgonPounceAttack;                                // 0x0006(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PreLevelGenerationModifierProperties
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FPreLevelGenerationModifierProperties : public FDBDTableRowBase
	{
	public:
		class FName                                                modifierID;                                              // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPreLevelGenerationModifierType                            modifierType;                                            // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EKillerAbilities                                           KillerAbiliy;                                            // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OH1T[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModifierValue;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F81R[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PrestigeIconData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FPrestigeIconData : public FDBDTableRowBase
	{
	public:
		EPlayerRole                                                PlayerRole;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOQD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PrestigeLevel;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.PrestigeRewardStruct
	 * Size -> 0x0018
	 */
	struct FPrestigeRewardStruct
	{
	public:
		class FString                                              RewardId;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrestigeRewardType                                        RewardType;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q46B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RewardPerkLevel;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PrestigeRewardData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FPrestigeRewardData : public FDBDTableRowBase
	{
	public:
		int32_t                                                    AssociatedCharacter;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeLevel;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrestigeRewardStruct                               Rewards[0x3];                                            // 0x0010(0x0048) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.GenerationParams
	 * Size -> 0x0004
	 */
	struct FGenerationParams
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ProceduralMap
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FProceduralMap : public FDBDTableRowBase
	{
	public:
		class FName                                                MapId;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5N9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ThemeName;                                               // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      HookMinDistance;                                         // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HookMinCount;                                            // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HookMaxCount;                                            // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BookShelvesMinDistance;                                  // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BookShelvesMinCount;                                     // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BookShelvesMaxCount;                                     // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LivingWorldObjectsMinCount;                              // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LivingWorldObjectsMaxCount;                              // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ThumbnailPath;                                           // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SortingIndex;                                            // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFFA[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DlcIDString;                                             // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FixedLayoutSeed;                                         // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsInNonViolentBuild;                                     // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLicensed;                                              // 0x00B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3C5[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ProfileLoadEventData
	 * Size -> 0x0010
	 */
	struct FProfileLoadEventData
	{
	public:
		bool                                                       FirstTimePlaying;                                        // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35TV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           Timestamp;                                               // 0x0008(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackItemPayloadData
	 * Size -> 0x0001
	 */
	struct FPromoPackItemPayloadData
	{
	public:
		unsigned char                                              UnknownData_J99G[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackCharacterPayloadData
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FPromoPackCharacterPayloadData : public FPromoPackItemPayloadData
	{	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackCurrencyPayloadData
	 * Size -> 0x0003 (FullSize[0x0004] - InheritedSize[0x0001])
	 */
	struct FPromoPackCurrencyPayloadData : public FPromoPackItemPayloadData
	{
	public:
		unsigned char                                              UnknownData_VHLK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackData
	 * Size -> 0x0100 (FullSize[0x0108] - InheritedSize[0x0008])
	 */
	struct FPromoPackData : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7O7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PromoPackIcon[0x30];                                     // 0x0018(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FItemUIData                                         UIData;                                                  // 0x0048(0x00C0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackItemData
	 * Size -> 0x0030
	 */
	struct FPromoPackItemData
	{
	public:
		class UTexture2D*                                          ItemIcon;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ItemId;                                                  // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                ItemRarity;                                              // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KX5P[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Amount;                                                  // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7K1[0x14];                                  // 0x001C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackPurchaseUIData
	 * Size -> 0x0058
	 */
	struct FPromoPackPurchaseUIData
	{
	public:
		unsigned char                                              UnknownData_10B1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPurchaseCurrencyData                               AuricCellsPurchaseData;                                  // 0x0008(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       HasAuricCellsData;                                       // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NGN[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPurchaseCurrencyData                               IridescentShardsPurchaseData;                            // 0x0030(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       HasIridescentShards;                                     // 0x0050(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTLD[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PromoPackSelectedItemData
	 * Size -> 0x0058
	 */
	struct FPromoPackSelectedItemData
	{
	public:
		class UTexture2D*                                          ItemTypeIcon;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ItemName;                                                // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ItemSubTitle;                                            // 0x0020(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ItemDescription;                                         // 0x0038(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class UUMGPromoPackItemWidget*                             Widget;                                                  // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PurchaseItemUIData
	 * Size -> 0x0050
	 */
	struct FPurchaseItemUIData
	{
	public:
		unsigned char                                              UnknownData_O2JE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemId;                                                  // 0x0008(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8W6U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0018(0x0018) Transient, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J28K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconPath;                                                // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEventItemContentType                                      ContentType;                                             // 0x0048(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0049(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3SH[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.RankNameData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRankNameData : public FDBDTableRowBase
	{
	public:
		class FText                                                RankName;                                                // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    SubRanks;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1D8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.RankTooltipData
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	struct FRankTooltipData : public FBaseTooltipData
	{
	public:
		EPlayerRole                                                CurrentPlayerRole;                                       // 0x0098(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I472[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerRoleRankData                                 SurvivorRankData;                                        // 0x009C(0x0010) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FPlayerRoleRankData                                 KillerRankData;                                          // 0x00AC(0x0010) Transient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS7Y[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.RankUIData
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRankUIData : public FDBDTableRowBase
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                PlayerRole;                                              // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMX6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         Color;                                                   // 0x0010(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              Frame[0x30];                                             // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.RarityDistributionValue
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRarityDistributionValue : public FDBDTableRowBase
	{
	public:
		int32_t                                                    InnerRing;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiddleRing;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OuterRing;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TASO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.DBDRecentGameplayEvents
	 * Size -> 0x0050
	 */
	struct FDBDRecentGameplayEvents
	{
	public:
		TMap<EDBDScoreTypes, struct FDateTime>                     _recentGameplayEvents;                                   // 0x0000(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.RefundUIData
	 * Size -> 0x0078
	 */
	struct FRefundUIData
	{
	public:
		TArray<struct FAtlantaRewardUIData>                        OriginalRewards;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FAtlantaRewardUIData                                Refund;                                                  // 0x0010(0x0060) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		int32_t                                                    FragmentAmount;                                          // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FragmentRequiredAmount;                                  // 0x0074(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RefundKeyUIData
	 * Size -> 0x0058
	 */
	struct FRefundKeyUIData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPGX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IconFilePath;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0020(0x0018) NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0038(0x0018) NativeAccessSpecifierPublic
		ERefundSource                                              Source;                                                  // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCU8[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ReportData
	 * Size -> 0x0030
	 */
	struct FReportData
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ReportFeedbackData
	 * Size -> 0x0018
	 */
	struct FReportFeedbackData
	{
	public:
		struct FDateTime                                           BanTimestamp;                                            // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.RewardItemData
	 * Size -> 0x0038
	 */
	struct FRewardItemData
	{
	public:
		class FString                                              IconPath;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryItemType                                         ItemType;                                                // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDuplicate;                                             // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurrencyType                                              CurrencyType;                                            // 0x0033(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyAmount;                                          // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3AnalyticsConfig
	 * Size -> 0x0018
	 */
	struct FS3AnalyticsConfig
	{
	public:
		bool                                                       GameInitVerbose;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KNN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameConsoleLogMinimumVerbosity;                          // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3BeginnerTutorialLevelConfig
	 * Size -> 0x0008
	 */
	struct FS3BeginnerTutorialLevelConfig
	{
	public:
		int32_t                                                    LevelToHideTutorial;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeToHideTutorial;                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3FriendsListGameConfig
	 * Size -> 0x000C
	 */
	struct FS3FriendsListGameConfig
	{
	public:
		int32_t                                                    MaxFriendSuggestionsFacebook;                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFriendSuggestionsGoogle;                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFriendSuggestionsRecentlyPlayed;                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3MatchConfig
	 * Size -> 0x0008
	 */
	struct FS3MatchConfig
	{
	public:
		int32_t                                                    MaxMatchSeconds;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxEndGameCollapseSeconds;                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3LoadingConfig
	 * Size -> 0x0030
	 */
	struct FS3LoadingConfig
	{
	public:
		struct FLoadingTimeoutPerStep                              GlobalTimeout;                                           // 0x0000(0x0020) NativeAccessSpecifierPublic
		TArray<struct FLoadingTimeoutPerStep>                      TimeoutPerSteps;                                         // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3MirrorsDefaultRetryPolicyConfig
	 * Size -> 0x000C
	 */
	struct FS3MirrorsDefaultRetryPolicyConfig
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6U2C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RetryCount;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TIMEOUT;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3OnlineConfig
	 * Size -> 0x0020
	 */
	struct FS3OnlineConfig
	{
	public:
		TArray<int32_t>                                            HiddenProgressiveQueueDelays;                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    HiddenQueueDelayResetThreshold;                          // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomQueueDelayMin;                                     // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomQueueDelayMax;                                     // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPU9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.S3SecurityConfig
	 * Size -> 0x0002
	 */
	struct FS3SecurityConfig
	{
	public:
		bool                                                       AllowServerCheats;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowClientGuestProviderOnServerLogin;                   // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3GameConfigsData
	 * Size -> 0x0290
	 */
	struct FS3GameConfigsData
	{
	public:
		struct FS3AnalyticsConfig                                  Analytics;                                               // 0x0000(0x0018) NativeAccessSpecifierPublic
		struct FArchivesConfig                                     Archives;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE7K[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBalanceToolGameConfig                              BalanceTool;                                             // 0x0020(0x0010) NativeAccessSpecifierPublic
		bool                                                       BalanceTool_IsSet;                                       // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_UNVP[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS3BeginnerTutorialLevelConfig                      BeginnerTutorialLevel;                                   // 0x0034(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WS6F[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBotMatchConfig                                     BotMatch;                                                // 0x0040(0x0020) NativeAccessSpecifierPublic
		struct FDedicatedServerGameConfig                          DedicatedServer;                                         // 0x0060(0x0010) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       EnableNetAsyncLoading;                                   // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnablePlayersConnectionStatus;                           // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnablePlayerIdInSurvey;                                  // 0x0072(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableBotsInCustomMatch;                                 // 0x0073(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableNavigationDuringMatchmaking;                      // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIVY[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RTMTimeoutThreshold;                                     // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GameLoadingTimeout;                                      // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableHapticVibration;                                   // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableWinGDKAccountMismatchPopup;                        // 0x0081(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableAntiMoveHack;                                      // 0x0082(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKD4[0x5];                                   // 0x0083(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, bool>                                  CrossPromoManagerPlatforms;                              // 0x0088(0x0050) NativeAccessSpecifierPublic
		bool                                                       CrossPromoManagerPlatforms_IsSet;                        // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_QRF4[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS3FriendsListGameConfig                            FriendsList;                                             // 0x00DC(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FHitValidationGameConfig                            HitValidation;                                           // 0x00E8(0x0018) NativeAccessSpecifierPublic
		struct FAnimBudgeterGameConfig                             AnimBudgeter;                                            // 0x0100(0x0028) NativeAccessSpecifierPublic
		bool                                                       AnimBudgeter_IsSet;                                      // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		struct FJwtGameConfig                                      Jwt;                                                     // 0x0129(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IRC[0x2];                                   // 0x012A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS3MatchConfig                                      Match;                                                   // 0x012C(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGLZ[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS3LoadingConfig                                    Loading;                                                 // 0x0138(0x0030) NativeAccessSpecifierPublic
		TMap<class FString, bool>                                  MatchmakingCrossplayPlatforms;                           // 0x0168(0x0050) NativeAccessSpecifierPublic
		struct FS3MirrorsDefaultRetryPolicyConfig                  MirrorsDefaultRetryPolicy;                               // 0x01B8(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8H1[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS3OnlineConfig                                     Online;                                                  // 0x01C8(0x0020) NativeAccessSpecifierPublic
		struct FS3SecurityConfig                                   Security;                                                // 0x01E8(0x0002) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJCG[0x6];                                   // 0x01EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, bool>                                  SocialCrossfriendsPlatforms;                             // 0x01F0(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, bool>                                  SocialCrossprogressionPlatforms;                         // 0x0240(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3GameConfigsDSData
	 * Size -> 0x0058
	 */
	struct FS3GameConfigsDSData
	{
	public:
		struct FDDosGameConfigDS                                   Ddos;                                                    // 0x0000(0x0002) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWD3[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, float>                                       MapHistoryWeights;                                       // 0x0008(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3PrestigeConfig
	 * Size -> 0x0020
	 */
	struct FS3PrestigeConfig
	{
	public:
		int32_t                                                    MaxPrestige;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLT8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            PerkThresholds;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeCost;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YLQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.S3PrestigeRewardItem
	 * Size -> 0x0028
	 */
	struct FS3PrestigeRewardItem
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RewardType;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerkLevel;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerkLevel_IsSet;                                         // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_RJR8[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.S3PrestigeRewards
	 * Size -> 0x0018
	 */
	struct FS3PrestigeRewards
	{
	public:
		int32_t                                                    PrestigeLevel;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWMV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS3PrestigeRewardItem>                       Rewards;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3PrestigeCharacterRewards
	 * Size -> 0x0010
	 */
	struct FS3PrestigeCharacterRewards
	{
	public:
		TArray<struct FS3PrestigeRewards>                          RewardsByPrestigeLevel;                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.S3PrestigeData
	 * Size -> 0x0070
	 */
	struct FS3PrestigeData
	{
	public:
		struct FS3PrestigeConfig                                   Config;                                                  // 0x0000(0x0020) NativeAccessSpecifierPublic
		TMap<class FString, struct FS3PrestigeCharacterRewards>    RewardsByCharacters;                                     // 0x0020(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionVirtualCurrencyParameters
	 * Size -> 0x0028
	 */
	struct FShopTransactionVirtualCurrencyParameters
	{
	public:
		int32_t                                                    virtualCurrencyAmount;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIZ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              virtualCurrencyName;                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              virtualCurrencyType;                                     // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionVirtualCurrency
	 * Size -> 0x0028
	 */
	struct FShopTransactionVirtualCurrency
	{
	public:
		struct FShopTransactionVirtualCurrencyParameters           virtualCurrency;                                         // 0x0000(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionItemParameters
	 * Size -> 0x0028
	 */
	struct FShopTransactionItemParameters
	{
	public:
		int32_t                                                    itemAmount;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1W0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemName;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemType;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionItem
	 * Size -> 0x0028
	 */
	struct FShopTransactionItem
	{
	public:
		struct FShopTransactionItemParameters                      Item;                                                    // 0x0000(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionProducts
	 * Size -> 0x0020
	 */
	struct FShopTransactionProducts
	{
	public:
		TArray<struct FShopTransactionVirtualCurrency>             virtualCurrencies;                                       // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FShopTransactionItem>                        Items;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionCustomData
	 * Size -> 0x0040
	 */
	struct FShopTransactionCustomData
	{
	public:
		struct FShopTransactionProducts                            productsReceived;                                        // 0x0000(0x0020) NativeAccessSpecifierPublic
		class FString                                              transactionName;                                         // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionType;                                         // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionCurrencyProducts
	 * Size -> 0x0010
	 */
	struct FShopTransactionCurrencyProducts
	{
	public:
		TArray<struct FShopTransactionVirtualCurrency>             virtualCurrencies;                                       // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionCurrencyCustomData
	 * Size -> 0x0030
	 */
	struct FShopTransactionCurrencyCustomData
	{
	public:
		struct FShopTransactionCurrencyProducts                    productsReceived;                                        // 0x0000(0x0010) NativeAccessSpecifierPublic
		class FString                                              transactionName;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionType;                                         // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionItemProducts
	 * Size -> 0x0010
	 */
	struct FShopTransactionItemProducts
	{
	public:
		TArray<struct FShopTransactionItem>                        Items;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopTransactionItemCustomData
	 * Size -> 0x0030
	 */
	struct FShopTransactionItemCustomData
	{
	public:
		struct FShopTransactionItemProducts                        productsReceived;                                        // 0x0000(0x0010) NativeAccessSpecifierPublic
		class FString                                              transactionName;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionType;                                         // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ShopWalletUpdate
	 * Size -> 0x0018
	 */
	struct FShopWalletUpdate
	{
	public:
		unsigned char                                              UnknownData_LC5G[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SkillCheckDefinition
	 * Size -> 0x0028
	 */
	struct FSkillCheckDefinition
	{
	public:
		float                                                      SuccessZoneStart;                                        // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuccessZoneEnd;                                          // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusZoneLength;                                         // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusZoneStart;                                          // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProgressRate;                                            // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingTickerPosition;                                  // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDeactivatedAfterResponse;                              // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T28X[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarningSoundDelay;                                       // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAudioMuted;                                            // 0x0020(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsJittering;                                             // 0x0021(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSuccessZoneMirrorred;                                  // 0x0022(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInsane;                                                // 0x0023(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocallyPredicted;                                      // 0x0024(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BD42[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SkillCheckResponse
	 * Size -> 0x0020
	 */
	struct FSkillCheckResponse
	{
	public:
		float                                                      ChargeChange;                                            // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTriggeredByInput;                                      // 0x0004(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSuccessful;                                            // 0x0005(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBonus;                                                 // 0x0006(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInsane;                                                // 0x0007(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTriggeringLoudNoise;                                   // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FailedCountedAsGood;                                     // 0x0009(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkillCheckCustomType                                      Type;                                                    // 0x000A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UULO[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableInteractionDefinition*                    Interaction;                                             // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   VerificationKey;                                         // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZUA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SpawnPopulationHandler
	 * Size -> 0x00C8
	 */
	struct FSpawnPopulationHandler
	{
	public:
		unsigned char                                              UnknownData_LDKU[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             _allAvailableSpawners;                                   // 0x00B8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.GiftSpecialActionData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FGiftSpecialActionData : public FDBDTableRowBase
	{
	public:
		EGiftSpecialAction                                         ActionType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CV6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              VideoSource[0x30];                                       // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventObjectiveData
	 * Size -> 0x00E0
	 */
	struct FSpecialEventObjectiveData
	{
	public:
		class FName                                                ObjectiveId;                                             // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DAP8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ObjectiveFrameLabel;                                     // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CompletedTitle;                                          // 0x0060(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CompletedDescription;                                    // 0x0078(0x0018) Edit, NativeAccessSpecifierPublic
		class FName                                                RewardId;                                                // 0x0090(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0012[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LockedRewardGenericIconPath;                             // 0x00A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnlockedRewardGenericIconPath;                           // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                PlayerRole;                                              // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2US4[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatName;                                                // 0x00C8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Sections;                                                // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxValue;                                                // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventEntryPopupData
	 * Size -> 0x0058
	 */
	struct FSpecialEventEntryPopupData
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                              ImagePath;                                               // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ImageBannerText;                                         // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventBloodwebData
	 * Size -> 0x0001
	 */
	struct FSpecialEventBloodwebData
	{
	public:
		ESpecialEventBloodwebChestCondition                        EventChestCondition;                                     // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventOfferingSequenceData
	 * Size -> 0x0060
	 */
	struct FSpecialEventOfferingSequenceData
	{
	public:
		unsigned char                                              CardClass[0x30];                                         // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ManagerClass[0x30];                                      // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventSplashScreenData
	 * Size -> 0x0038
	 */
	struct FSpecialEventSplashScreenData
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60GC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Delay;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DBDLogoClass[0x30];                                      // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventData
	 * Size -> 0x0208 (FullSize[0x0210] - InheritedSize[0x0008])
	 */
	struct FSpecialEventData : public FDBDTableRowBase
	{
	public:
		class FName                                                EventId;                                                 // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurrencyType                                              CurrencyType;                                            // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGLX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EventName;                                               // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              EventBannerLabel;                                        // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventThemeLabel;                                         // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTrackedOnline;                                         // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecialEventLoadingScreen;                            // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCSK[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpecialEventObjectiveData>                  Objectives;                                              // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FColor                                              ObjectOutlineColour;                                     // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0FG[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyName;                                               // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShopName;                                                // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      AdditionalLobbyNames;                                    // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                AudioStateSpecialEvent;                                  // 0x00A0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZHE[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GameplayPlayerComponent[0x30];                           // 0x00B0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              GameplayStateComponent[0x30];                            // 0x00E0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		ESpecialEventGameMode                                      GameMode;                                                // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseEventEntryScreen;                                     // 0x0111(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXG1[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpecialEventEntryPopupData                         EventEntryData;                                          // 0x0118(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		ESpecialEventDependency                                    EventDependency;                                         // 0x0170(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMarketDiscount;                                       // 0x0171(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSpecialEventBloodwebData                           Bloodweb;                                                // 0x0172(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5PP[0x5];                                   // 0x0173(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpecialEventOfferingSequenceData                   OfferingSequence;                                        // 0x0178(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSpecialEventSplashScreenData                       SplashScreen;                                            // 0x01D8(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventLoadingTextData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FSpecialEventLoadingTextData : public FDBDTableRowBase
	{
	public:
		class FName                                                EventId;                                                 // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTZU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventsContentData
	 * Size -> 0x00E0
	 */
	struct FSpecialEventsContentData
	{
	public:
		class FString                                              EventId;                                                 // 0x0000(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              starttime;                                               // 0x0010(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              MainEndTime;                                             // 0x0020(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              PostEndTime;                                             // 0x0030(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M9K3[0xA0];                                  // 0x0040(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SPecialEventMiscRewards
	 * Size -> 0x0020
	 */
	struct FSPecialEventMiscRewards
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRewardResponseItem>                         Rewards;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScoreEventRewards
	 * Size -> 0x0018
	 */
	struct FScoreEventRewards
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0W4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         Rewards;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.EventPeriod
	 * Size -> 0x0040
	 */
	struct FEventPeriod
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartDate;                                               // 0x0010(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              EndDate;                                                 // 0x0020(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1PMP[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventsData
	 * Size -> 0x0070
	 */
	struct FSpecialEventsData
	{
	public:
		class FString                                              EventId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSPecialEventMiscRewards>                    MiscRewards;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       MiscRewards_IsSet;                                       // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_MGVC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardResponseItem>                         OwnerRewards;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       OwnerRewards_IsSet;                                      // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_3DIF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FScoreEventRewards>                          ScoreEventRewards;                                       // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ScoreEventRewards_IsSet;                                 // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_SA4Q[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEventPeriod>                                EventPeriods;                                            // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       EventPeriods_IsSet;                                      // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_JLDB[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SpecialEventContent
	 * Size -> 0x0028
	 */
	struct FSpecialEventContent
	{
	public:
		TArray<struct FSpecialEventsContentData>                   SpecialEvents;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSpecialEventsData>                          SpecialEventsData;                                       // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       SpecialEventsData_IsSet;                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_XHXE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StatusEffectProperties
	 * Size -> 0x0048 (FullSize[0x0230] - InheritedSize[0x01E8])
	 */
	struct FStatusEffectProperties : public FItemData
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              StatusEffectBlueprint[0x30];                             // 0x01F8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		EStatusEffectType                                          StatusEffectType;                                        // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EExternalEffectSource                                      ExternalEffectSource;                                    // 0x0229(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFKC[0x6];                                   // 0x022A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StatusViewProperties
	 * Size -> 0x00C0 (FullSize[0x00C8] - InheritedSize[0x0008])
	 */
	struct FStatusViewProperties : public FDBDTableRowBase
	{
	public:
		class FName                                                _statusViewID;                                           // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9TIX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                _description;                                            // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                _displayName;                                            // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _statusViewBlueprint[0x30];                              // 0x0048(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		EStatusEffectType                                          _statusType;                                             // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DCAV[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              _iconFilePath;                                           // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              _iconAsset[0x30];                                        // 0x0090(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       _playIntroAnimation;                                     // 0x00C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O293[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StatusViewSource
	 * Size -> 0x002C
	 */
	struct FStatusViewSource
	{
	public:
		class FName                                                _sourceID;                                               // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZLSG[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _remainingTime;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _percentageFill;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _level;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInventoryItemType                                         _sourceType;                                             // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F8GG[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _sourceIconIndex;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _sourceLevel;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isVisuallyInfinite;                                     // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SIS7[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StoreFeaturedBannerData
	 * Size -> 0x0080
	 */
	struct FStoreFeaturedBannerData
	{
	public:
		unsigned char                                              UnknownData_DTL0[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Subtitle;                                                // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              ImagePath;                                               // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssociatedDlcId;                                         // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssociatedCombinedItemId;                                // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssociatedCombinedOutfitId;                              // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextBannerPosition                                        TextPosition;                                            // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VWW[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StoreBannersData
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FStoreBannersData : public FDBDTableRowBase
	{
	public:
		class FName                                                BannerId;                                                // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXFV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStoreFeaturedBannerData                            BannerData;                                              // 0x0018(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       UseAsDefault;                                            // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStoreBannerLocation                                       DefaultLocation;                                         // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6O6[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StoredInteraction
	 * Size -> 0x0060
	 */
	struct FStoredInteraction
	{
	public:
		TWeakObjectPtr<class UInteractionDefinition>               _interaction;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EInputInteractionType                                      _inputType;                                              // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3B4K[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInteractionPlayerProperties                        _playerProperties;                                       // 0x000C(0x0050) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2GGC[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StoreFeaturedBannerUIData
	 * Size -> 0x0098
	 */
	struct FStoreFeaturedBannerUIData
	{
	public:
		class FName                                                BannerId;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFH1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStoreFeaturedBannerData                            BannerData;                                              // 0x0010(0x0080) NativeAccessSpecifierPublic
		bool                                                       IsNew;                                                   // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5D4L[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StorefrontCustomizationPayloadData
	 * Size -> 0x000B (FullSize[0x000C] - InheritedSize[0x0001])
	 */
	struct FStorefrontCustomizationPayloadData : public FPromoPackItemPayloadData
	{
	public:
		unsigned char                                              UnknownData_2LUD[0xB];                                   // 0x0001(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.StreamVideoUIData
	 * Size -> 0x00E0
	 */
	struct FStreamVideoUIData
	{
	public:
		class FString                                              VideoURL;                                                // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasAudio;                                                // 0x0020(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWPT[0xB];                                   // 0x0021(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrderWidget;                                            // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StreamVideoWidgetAsset[0x30];                            // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              MediaPlayerAsset[0x30];                                  // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_HT7U[0x50];                                  // 0x0090(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SubscriptionUIData
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FSubscriptionUIData : public FDBDTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		TMap<class FName, class FText>                             PlatformDetails;                                         // 0x0038(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              TitleTexture[0x30];                                      // 0x0088(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PortraitBorderTexture[0x30];                             // 0x00B8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SubtitlesDescription
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FSubtitlesDescription : public FDBDTableRowBase
	{
	public:
		class FText                                                SubtitlesText;                                           // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              AudioEvent[0x30];                                        // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.SurvivorActivityUIRowData
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FSurvivorActivityUIRowData : public FDBDTunableRowBase
	{
	public:
		struct FGameplayTag                                        ActivityType;                                            // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNR0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconAsset[0x30];                                         // 0x0018(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerHitCosmeticParams
	 * Size -> 0x0014
	 */
	struct FPlayerHitCosmeticParams
	{
	public:
		TWeakObjectPtr<class APawn>                                Attacker;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ACamperPlayer>                        Target;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackType                                                attackType;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CausedKO;                                                // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsWeaponHit;                                             // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T26I[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.SurvivorHookTimer
	 * Size -> 0x0038
	 */
	struct FSurvivorHookTimer
	{
	public:
		unsigned char                                              UnknownData_D7RU[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TallyItemChangedData
	 * Size -> 0x0380
	 */
	struct FTallyItemChangedData
	{
	public:
		struct FInventorySlotData                                  Item;                                                    // 0x0000(0x0128) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FInventorySlotData                                  addon1;                                                  // 0x0128(0x0128) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FInventorySlotData                                  addon2;                                                  // 0x0250(0x0128) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		bool                                                       isSet;                                                   // 0x0378(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnergyTypeEnum                                            EnergyType;                                              // 0x0379(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZRV[0x2];                                   // 0x037A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EnergyLevel;                                             // 0x037C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.TeachableTooltipData
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	struct FTeachableTooltipData : public FBaseTooltipData
	{
	public:
		EItemRarity                                                ItemRarity;                                              // 0x0098(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryItemType                                         ItemType;                                                // 0x0099(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXYJ[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              characterName;                                           // 0x00A0(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvailabilityMessage;                                     // 0x00B0(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EffectMessage;                                           // 0x00C0(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseInCharacterSelectionScreen;                           // 0x00D0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeachableStatus                                           TeachableStatus;                                         // 0x00D1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U9D2[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TransactionEventData
	 * Size -> 0x0088
	 */
	struct FTransactionEventData
	{
	public:
		class FString                                              TransactionType;                                         // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionSource;                                       // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceID;                                                // 0x0020(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SourceTier;                                              // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L4ZY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyType;                                            // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyAmount;                                          // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyBalance;                                         // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelAchieved;                                           // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x0054(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemIDAcquired;                                          // 0x0058(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x0068(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GA5J[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedCharacter;                                       // 0x0070(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TransactionTriggeredLevelUp;                             // 0x0080(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G32X[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.PerPlatformTunable
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FPerPlatformTunable : public FDBDTableRowBase
	{
	public:
		struct FPerPlatformFloat                                   value;                                                   // 0x0008(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_90LX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.TunableValue
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FTunableValue : public FDBDTunableRowBase
	{
	public:
		float                                                      value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AtlantaOverriddenValue;                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverriddenInAtlanta;                                     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LUQ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.TutorialObjective
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FTutorialObjective : public FDBDTableRowBase
	{
	public:
		class FText                                                Description;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsCompletionAnalyticEnabled;                             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionPromptType                                     InteractionPromptType;                                   // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETutorialObjectivePlayerActionMapping                      PlayerAction;                                            // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionPromptType                                     SecondaryInteractionPromptType;                          // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETutorialObjectivePlayerActionMapping                      SecondaryPlayerAction;                                   // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E083[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotPreviewActionConfig
	 * Size -> 0x0098
	 */
	struct FScreenshotPreviewActionConfig
	{
	public:
		bool                                                       SkyboxEnabled;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JJ5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ECharacterToolItemType, struct FIntPoint>             FrameSizes;                                              // 0x0008(0x0050) Edit, EditFixedSize, NativeAccessSpecifierPublic
		uint16_t                                                   RenderResolution;                                        // 0x0058(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84WD[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RenderTarget[0x30];                                      // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              EditorWidgetClass;                                       // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotPreviewAction
	 * Size -> 0x00B8
	 */
	struct FScreenshotPreviewAction
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YPE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNamedButton                                        RefreshBtn;                                              // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		struct FScreenshotPreviewActionConfig                      Configuration;                                           // 0x0020(0x0098) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotDebuggingAction
	 * Size -> 0x0001
	 */
	struct FScreenshotDebuggingAction
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotExportAction
	 * Size -> 0x0018
	 */
	struct FScreenshotExportAction
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExportOnce;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeDLCFolder;                                        // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOUQ[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Directories;                                             // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ScreenshotToolPathInfo
	 * Size -> 0x0018
	 */
	struct FScreenshotToolPathInfo
	{
	public:
		bool                                                       IncludeDLCFolder;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_COUW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Path;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.WidgetFriendData
	 * Size -> 0x0010
	 */
	struct FWidgetFriendData
	{
	public:
		unsigned char                                              UnknownData_18J4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMGBaseFriendListElement*                           CorrespondingWidget;                                     // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.AtlantaSettingMenuData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAtlantaSettingMenuData : public FDBDTableRowBase
	{
	public:
		EOverlayTabs                                               OverlayTab;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOverlayMode                                               OverlayMode;                                             // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3RYL[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		EAtlantaSettingMenuType                                    MenuType;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Q7Y[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.HtmlTagConvertRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FHtmlTagConvertRow : public FTableRowBase
	{
	public:
		class FString                                              HtmlTag;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RichTextTag;                                             // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.InteractButtonInfo
	 * Size -> 0x02F8 (FullSize[0x0300] - InheritedSize[0x0008])
	 */
	struct FInteractButtonInfo : public FTableRowBase
	{
	public:
		class FName                                                InteractButtonID;                                        // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                InteractionID;                                           // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                PlayerRole;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputInteractionType                                      interactionInputType;                                    // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSO8[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Icon;                                                    // 0x0028(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EButtonType                                                CancelButtonType;                                        // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonType                                                SecondaryActionButtonType;                               // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOMA[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         AttackIcon;                                              // 0x00C0(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         AbilityIcon;                                             // 0x0150(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ThumbJoystickUnpressedIcon;                              // 0x01E0(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ThumbJoystickPressedIcon;                                // 0x0270(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.InboxMessageElapsedTime
	 * Size -> 0x0008
	 */
	struct FInboxMessageElapsedTime
	{
	public:
		int32_t                                                    ElapsedTime;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInboxMessageTimeUnit                                      TimeUnit;                                                // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFYS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.RichTextRewardRow
	 * Size -> 0x0448 (FullSize[0x0450] - InheritedSize[0x0008])
	 */
	struct FRichTextRewardRow : public FTableRowBase
	{
	public:
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0008(0x0288) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             TextMargin;                                              // 0x0290(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Brush;                                                   // 0x02A0(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         TintsBrush;                                              // 0x0330(0x0090) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x03C0(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.PlayerInfoData
	 * Size -> 0x0058
	 */
	struct FPlayerInfoData
	{
	public:
		class FString                                              characterName;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterIconPath;                                       // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharacterLevel;                                          // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeLevel;                                           // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanPrestige;                                             // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED7K[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              playerName;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerLevel;                                             // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DevotionLevel;                                           // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerRank;                                              // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActivePips;                                              // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPipsToNextRank;                                       // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Ready;                                                   // 0x0054(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSlasher;                                               // 0x0055(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowPortraitBorder;                                      // 0x0056(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasActiveSubscription;                                   // 0x0057(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.VariationData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FVariationData : public FDBDTableRowBase
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSWV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesVignetteEntry
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FArchivesVignetteEntry : public FDBDTableRowBase
	{
	public:
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Text;                                                    // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       HasAudio;                                                // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZICM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RewardImage[0x30];                                       // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      PreviewTextureOffset;                                    // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13GZ[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesVignettes
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FArchivesVignettes : public FDBDTableRowBase
	{
	public:
		class FString                                              VignetteId;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Subtitle;                                                // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FArchivesVignetteEntry>                      Entries;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              CinematicPaths[0x10];                                    // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct DeadByDaylight.ArchivesJournal
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FArchivesJournal : public FDBDTableRowBaseWithId
	{
	public:
		class FText                                                Title;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FArchivesVignettes>                          Vignettes;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DeadByDaylight.WalesCypherEventData
	 * Size -> 0x0030
	 */
	struct FWalesCypherEventData
	{
	public:
		class FString                                              EnteredSequence;                                         // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpectedSequence;                                        // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeoutThreshold;                                        // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x0024(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TIMEOUT;                                                 // 0x0025(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharmGranted;                                            // 0x0026(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKZJ[0x1];                                   // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ValidCharacterSelcted;                                   // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPX7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DeadByDaylight.WalletUpdateTracker
	 * Size -> 0x0050
	 */
	struct FWalletUpdateTracker
	{
	public:
		TMap<class FString, int32_t>                               _walletChangeMap;                                        // 0x0000(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DeadByDaylight.XpBonusData
	 * Size -> 0x0018
	 */
	struct FXpBonusData
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XpValue;                                                 // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S64K[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
