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
	 * Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.AnimGraph
	 */
	struct UAB_K25_SW00_REF_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.ExecuteUbergraph_AB_K25_SW00_REF
	 */
	struct UAB_K25_SW00_REF_C_ExecuteUbergraph_AB_K25_SW00_REF_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
