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
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent
	 */
	struct UBP_Audio_KLR_Base_C_SelectAudioStatusStartEvent_Params
	{
	public:
		bool                                                       IsInMenu;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OI28[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded
	 */
	struct UBP_Audio_KLR_Base_C_OnKillerSoundbankLoaded_Params
	{
	public:
		EAkResult                                                  Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName
	 */
	struct UBP_Audio_KLR_Base_C_GetAudioCharacterName_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AudioCharacterName;                                      // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2GPR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent
	 */
	struct UBP_Audio_KLR_Base_C_InititializeComponent_Params
	{	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay
	 */
	struct UBP_Audio_KLR_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay
	 */
	struct UBP_Audio_KLR_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded
	 */
	struct UBP_Audio_KLR_Base_C_SoundbankKillerUnloaded_Params
	{
	public:
		EAkResult                                                  Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX
	 */
	struct UBP_Audio_KLR_Base_C_TriggerSurvivorDamageHitAudioSFX_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAttackType                                                attackType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CausedKO;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsWeaponHit;                                             // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isLightHit;                                              // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX
	 */
	struct UBP_Audio_KLR_Base_C_HitImpactOnSurvivorSFX_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAttackType                                                attackType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeaponHit;                                             // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base
	 */
	struct UBP_Audio_KLR_Base_C_ExecuteUbergraph_BP_Audio_KLR_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GERG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
