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
	 * BlueprintGeneratedClass BP_Menu_Slasher07.BP_Menu_Slasher07_C
	 * Size -> 0x0014 (FullSize[0x0700] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher07_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_AGDI[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Audio_KLR_07_C*                                  BP_Audio_KLR_07;                                         // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDBDPlayerPositionOffsetComponent*                   DBDPlayerPositionOffset;                                 // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
