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
	 * Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnAlignmentChanged
	 */
	struct UWBP_CoreStandardButton_C_OnAlignmentChanged_Params
	{
	public:
		ETextJustify                                               newAlignment;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnHovered
	 */
	struct UWBP_CoreStandardButton_C_OnHovered_Params
	{	};

	/**
	 * Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnUnhovered
	 */
	struct UWBP_CoreStandardButton_C_OnUnhovered_Params
	{	};

	/**
	 * Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnPressed
	 */
	struct UWBP_CoreStandardButton_C_OnPressed_Params
	{	};

	/**
	 * Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnEnabledChanged
	 */
	struct UWBP_CoreStandardButton_C_OnEnabledChanged_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.ExecuteUbergraph_WBP_CoreStandardButton
	 */
	struct UWBP_CoreStandardButton_C_ExecuteUbergraph_WBP_CoreStandardButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q9VU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
