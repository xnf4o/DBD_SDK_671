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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Audio_KLR_32.BP_Audio_KLR_31_C.OnKillerSoundbankLoaded
	 */
	struct UBP_Audio_KLR_31_C_OnKillerSoundbankLoaded_Params
	{
	public:
		EAkResult                                                  Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_32.BP_Audio_KLR_31_C.IsCharacter
	 */
	struct UBP_Audio_KLR_31_C_IsCharacter_Params
	{
	public:
		class ADBDPlayer*                                          CamperPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      characterName;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsCharacter;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GPT7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Audio_KLR_32.BP_Audio_KLR_31_C.SelectAudioStatusStartEvent
	 */
	struct UBP_Audio_KLR_31_C_SelectAudioStatusStartEvent_Params
	{
	public:
		bool                                                       IsInMenu;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IB00[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_32.BP_Audio_KLR_31_C.HitImpactOnSurvivorSFX
	 */
	struct UBP_Audio_KLR_31_C_HitImpactOnSurvivorSFX_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAttackType                                                attackType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeaponHit;                                             // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Audio_KLR_32.BP_Audio_KLR_31_C.ExecuteUbergraph_BP_Audio_KLR_32
	 */
	struct UBP_Audio_KLR_31_C_ExecuteUbergraph_BP_Audio_KLR_32_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6G99[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
