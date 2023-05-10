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
	 * Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.SetHeaderColor
	 */
	struct UWBP_CoreGenericPopup_C_SetHeaderColor_Params
	{
	public:
		class UBasePopupViewData*                                  Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Show
	 */
	struct UWBP_CoreGenericPopup_C_Show_Params
	{
	public:
		class UBasePopupViewData*                                  Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Hide
	 */
	struct UWBP_CoreGenericPopup_C_Hide_Params
	{	};

	/**
	 * Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.HandleAnalogInputEvent
	 */
	struct UWBP_CoreGenericPopup_C_HandleAnalogInputEvent_Params
	{
	public:
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.ExecuteUbergraph_WBP_CoreGenericPopup
	 */
	struct UWBP_CoreGenericPopup_C_ExecuteUbergraph_WBP_CoreGenericPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H76M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
