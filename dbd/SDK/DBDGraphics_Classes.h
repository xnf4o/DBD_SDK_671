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
	 * Class DBDGraphics.FogOverrideComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UFogOverrideComponent : public UActorComponent
	{
	public:
		float                                                      _interpolationDistance;                                  // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1HX1[0x34];                                  // 0x00BC(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGraphics.FogOverrideManager
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UFogOverrideManager : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_A8F7[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
