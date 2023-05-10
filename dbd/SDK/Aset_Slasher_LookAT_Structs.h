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
	 * UserDefinedStruct Aset_Slasher_LookAT.Aset_Slasher_LookAT
	 * Size -> 0x0038
	 */
	struct FAset_Slasher_LookAT
	{
	public:
		class UAimOffsetBlendSpace*                                Aim_Offset_FPV_2_0D30D7AF43A97DEF2CB33C825855C394;       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAimOffsetBlendSpace*                                Aim_Offset_4_1C4638084F5FD3A1FEE14D988B989559;           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAimOffsetBlendSpace*                                Aim_Offset_Carry_17_4BC537B540DC2FF18DB12B9DB37C42E9;    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       TurnLeftSequence_7_FFD6BA49453CFEA6D8A893B6109C431F;     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       TurnRightSequence_9_31F0358C4D2070DFC9142F820362D54F;    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       CarryTurnLeftSequence_11_70DF6335436CE446A4DE3F8C8BB1C1F1; // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       CarryTurnRightSequence_14_C3347F184D63EDAEB91FDDBF844D04AD; // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
