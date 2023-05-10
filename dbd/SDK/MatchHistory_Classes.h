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
	 * Class MatchHistory.MatchHistorySubsystem
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UMatchHistorySubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_DP4D[0xB8];                                  // 0x0038(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplinteredStatesSubsystem*                          _splinteredStatesSubsystem;                              // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
