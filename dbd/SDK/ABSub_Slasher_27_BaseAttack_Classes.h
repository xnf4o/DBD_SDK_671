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
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C
	 * Size -> 0x00A8 (FullSize[0x1AE0] - InheritedSize[0x1A38])
	 */
	class UABSub_Slasher_27_BaseAttack_C : public UABSub_Slasher_01_BaseAttack_00_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1A38(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FASet_Slasher_27_BaseAttack                         AnimSet;                                                 // 0x1A40(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_ABSub_Slasher_27_BaseAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
