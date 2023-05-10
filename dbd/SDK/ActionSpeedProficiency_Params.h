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
	 * Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
	 */
	struct UActionSpeedProficiency_C_FetchInteractingPlayers_Params
	{
	public:
		class UInteractionDefinition*                              ChargeableInteraction;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDPlayer*                                          InteractingPlayer;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ADBDPlayer*>                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
	 */
	struct UActionSpeedProficiency_C_ComputeOverallspeedincludingmultipleinteractors_Params
	{
	public:
		class UChargeableInteractionDefinition*                    ChargeableInteraction;                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDPlayer*                                          InteractingPlayer;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
	 */
	struct UActionSpeedProficiency_C_ShouldAndCanShowMultipleActorsSpeedProficiency_Params
	{
	public:
		class UChargeableInteractionDefinition*                    ChargeableInteraction;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WHWD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
	 */
	struct UActionSpeedProficiency_C_GetValue_Params
	{
	public:
		class UChargeableInteractionDefinition*                    chargeableInteraction;                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDPlayer*                                          Player;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
