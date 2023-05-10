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
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimGraph
	 */
	struct UAB_Menu_Slasher08_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller
	 */
	struct UAB_Menu_Slasher08_C_GetKiller_Params
	{
	public:
		unsigned char                                              UnknownData_3EST[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation
	 */
	struct UAB_Menu_Slasher08_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear
	 */
	struct UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetAppear_Params
	{	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear
	 */
	struct UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetDisappear_Params
	{	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08
	 */
	struct UAB_Menu_Slasher08_C_ExecuteUbergraph_AB_Menu_Slasher08_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3ITJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
