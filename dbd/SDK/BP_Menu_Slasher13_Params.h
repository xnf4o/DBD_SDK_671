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
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetShard
	 */
	struct ABP_Menu_Slasher13_C_GetShard_Params
	{
	public:
		class USkeletalMeshComponent*                              Shard;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetSword
	 */
	struct ABP_Menu_Slasher13_C_GetSword_Params
	{
	public:
		class USkeletalMeshComponent*                              Sword;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__FinishedFunc
	 */
	struct ABP_Menu_Slasher13_C_MakeSwordDisappear__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__UpdateFunc
	 */
	struct ABP_Menu_Slasher13_C_MakeSwordDisappear__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__FinishedFunc
	 */
	struct ABP_Menu_Slasher13_C_ShowSword__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__UpdateFunc
	 */
	struct ABP_Menu_Slasher13_C_ShowSword__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__FinishedFunc
	 */
	struct ABP_Menu_Slasher13_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__UpdateFunc
	 */
	struct ABP_Menu_Slasher13_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_Slasher13_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnCustomizationUpdated
	 */
	struct ABP_Menu_Slasher13_C_OnCustomizationUpdated_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnAttack_StopTimeline
	 */
	struct ABP_Menu_Slasher13_C_OnAttack_StopTimeline_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordInvisible
	 */
	struct ABP_Menu_Slasher13_C_K13_FX_MakeSwordInvisible_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordVisible
	 */
	struct ABP_Menu_Slasher13_C_K13_FX_MakeSwordVisible_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordDisappear
	 */
	struct ABP_Menu_Slasher13_C_K13_FX_MakeSwordDisappear_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordAppear
	 */
	struct ABP_Menu_Slasher13_C_K13_FX_MakeSwordAppear_Params
	{	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_ModifyFace
	 */
	struct ABP_Menu_Slasher13_C_K13_FX_ModifyFace_Params
	{
	public:
		float                                                      SadFaceCurveValue;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MadFaceCurveValue;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.ExecuteUbergraph_BP_Menu_Slasher13
	 */
	struct ABP_Menu_Slasher13_C_ExecuteUbergraph_BP_Menu_Slasher13_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GME[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
