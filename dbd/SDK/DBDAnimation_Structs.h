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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DBDAnimation.EArmIkMode
	 */
	enum class EArmIkMode : uint8_t
	{
		None           = 0,
		BothHand       = 1,
		OnlyRight      = 2,
		OnlyLeft       = 3,
		OneHandAtTime  = 4,
		BothAtSameTime = 5,
		MAX            = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDAnimation.FootBoneData
	 * Size -> 0x0030
	 */
	struct FFootBoneData
	{
	public:
		class UCurveVector*                                        RightFootCurve;                                          // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2UR[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        LeftFootCurve;                                           // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBEI[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnimation.CustomizationCategoryAnimationMappingInfo
	 * Size -> 0x0018
	 */
	struct FCustomizationCategoryAnimationMappingInfo
	{
	public:
		ECustomizationCategory                                     CustomizationCategory;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPO6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnimation.CustomizationAnimationMapping
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FCustomizationAnimationMapping : public FDBDTableRowBase
	{
	public:
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KW0V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AnimTags;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomizationCategoryAnimationMappingInfo>  _mappingInfos;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnimation.KillerSpecificSurvivorAnimationsRow
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FKillerSpecificSurvivorAnimationsRow : public FDBDTableRowBase
	{
	public:
		struct FGameplayTag                                        KillerPresenceStateTag;                                  // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3J2Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              KillerSpecificSurvivorAnimation[0x30];                   // 0x0018(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DBDAnimation.PerspectiveDependentAnimSequenceSelector
	 * Size -> 0x0018
	 */
	struct FPerspectiveDependentAnimSequenceSelector
	{
	public:
		class UAnimSequence*                                       _current;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _thirdPerson;                                            // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequence*                                       _firstPerson;                                            // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
