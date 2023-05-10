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
	 * Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandlePromptDataRow
	 */
	struct UWBP_CoreInputPrompt_C_HandlePromptDataRow_Params
	{
	public:
		struct FInputPromptDataRow                                 PromptDataRow;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandleUnfoundPrompt
	 */
	struct UWBP_CoreInputPrompt_C_HandleUnfoundPrompt_Params
	{	};

	/**
	 * Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.GetDataTable
	 */
	struct UWBP_CoreInputPrompt_C_GetDataTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFound;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DSPQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.SetIconTexture
	 */
	struct UWBP_CoreInputPrompt_C_SetIconTexture_Params
	{
	public:
		class UTexture2D*                                          IconTexture;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.PreConstruct
	 */
	struct UWBP_CoreInputPrompt_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.DisplayPrompt
	 */
	struct UWBP_CoreInputPrompt_C_DisplayPrompt_Params
	{	};

	/**
	 * Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.ExecuteUbergraph_WBP_CoreInputPrompt
	 */
	struct UWBP_CoreInputPrompt_C_ExecuteUbergraph_WBP_CoreInputPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OVJZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
