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
	 * Function BP_Audio_KLR_20.BP_Audio_KLR_19_C.ReceiveBeginPlay
	 */
	struct UBP_Audio_KLR_19_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Audio_KLR_20.BP_Audio_KLR_19_C.ReceiveEndPlay
	 */
	struct UBP_Audio_KLR_19_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_20.BP_Audio_KLR_19_C.ExecuteUbergraph_BP_Audio_KLR_20
	 */
	struct UBP_Audio_KLR_19_C_ExecuteUbergraph_BP_Audio_KLR_20_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
