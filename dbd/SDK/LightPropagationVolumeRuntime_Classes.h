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
	 * Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class ULightPropagationVolumeBlendable : public UObject
	{
	public:
		unsigned char                                              UnknownData_I43B[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLightPropagationVolumeSettings                     Settings;                                                // 0x0038(0x0040) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendWeight;                                             // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QAC6[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
