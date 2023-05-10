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
	 * Class TheWraith.WraithAnimInstance
	 * Size -> 0x00A0 (FullSize[0x06A0] - InheritedSize[0x0600])
	 */
	class UWraithAnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isRingingBell;                                          // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCloaking;                                             // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUncloaking;                                           // 0x0602(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_79G4[0x5];                                   // 0x0603(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerspectiveDependentAnimSequenceSelector           _cloakingInSelector;                                     // 0x0608(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _cloakingSelector;                                       // 0x0620(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _cloakingOutSelector;                                    // 0x0638(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _uncloakingInSelector;                                   // 0x0650(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _uncloakingSelector;                                     // 0x0668(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPerspectiveDependentAnimSequenceSelector           _uncloakingOutSelector;                                  // 0x0680(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      _cloakingPlayRate;                                       // 0x0698(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7ZRZ[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
