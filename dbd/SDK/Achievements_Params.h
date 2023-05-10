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
	 * Function Achievements.OnGameEventAchievement.OnScoreTypeEvent
	 */
	struct UOnGameEventAchievement_OnScoreTypeEvent_Params
	{
	public:
		EDBDScoreTypes                                             scoreType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PDHO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Target;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Achievements.SurvivorRevealedKillerAuraAchievement.OnLevelReadyToPlay
	 */
	struct USurvivorRevealedKillerAuraAchievement_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function Achievements.SurvivorRevealedKillerAuraAchievement.Local_OnRevealKillerAura
	 */
	struct USurvivorRevealedKillerAuraAchievement_Local_OnRevealKillerAura_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
