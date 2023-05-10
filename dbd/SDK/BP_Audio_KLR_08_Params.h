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
	 * Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.SelectAudioStatusStartEvent
	 */
	struct UBP_Audio_KLR_08_C_SelectAudioStatusStartEvent_Params
	{
	public:
		bool                                                       IsInMenu;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2K8V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.ReceiveBeginPlay
	 */
	struct UBP_Audio_KLR_08_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.ReceiveEndPlay
	 */
	struct UBP_Audio_KLR_08_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.ExecuteUbergraph_BP_Audio_KLR_08
	 */
	struct UBP_Audio_KLR_08_C_ExecuteUbergraph_BP_Audio_KLR_08_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
