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
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass ABSub_Slasher_01_BaseAttack_00.ABSub_Slasher_01_BaseAttack_00_C
	 * Size -> 0x00AE (FullSize[0x1A38] - InheritedSize[0x198A])
	 */
	class UABSub_Slasher_01_BaseAttack_00_C : public UAB_Slasher_SubGraph_BaseAttack_00_C
	{
	public:
		unsigned char                                              UnknownData_LBVL[0x6];                                   // 0x198A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1990(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FASet_Slasher_01_BaseAttack_00                      AttackAnimset;                                           // 0x1998(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_ABSub_Slasher_01_BaseAttack_00(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
