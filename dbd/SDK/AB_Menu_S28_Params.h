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
	 * Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_ShowProps
	 */
	struct UAB_Menu_S28_C_AnimNotify_FX_ShowProps_Params
	{	};

	/**
	 * Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_HideProps
	 */
	struct UAB_Menu_S28_C_AnimNotify_FX_HideProps_Params
	{	};

	/**
	 * Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_IsPlayingMenuInterruptFromTransition
	 */
	struct UAB_Menu_S28_C_AnimNotify_IsPlayingMenuInterruptFromTransition_Params
	{	};

	/**
	 * Function AB_Menu_S28.AB_Menu_S28_C.ExecuteUbergraph_AB_Menu_S28
	 */
	struct UAB_Menu_S28_C_ExecuteUbergraph_AB_Menu_S28_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FSNU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
