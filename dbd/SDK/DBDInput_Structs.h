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
	 * Enum DBDInput.EAnalogCursorDataType
	 */
	enum class EAnalogCursorDataType : uint8_t
	{
		MaxSpeedDefault            = 0,
		MaxSpeedDefaultSlow        = 1,
		MaxSpeedStickyDefault      = 2,
		MaxSpeedStickySlow         = 3,
		MaxSpeedStickyButtonMedium = 4,
		MaxSpeedStickyButtonLarge  = 5,
		MaxSpeedDefaultBloodweb    = 6,
		MaxSpeedStickyBloodweb     = 7,
		CustomAcceleration         = 8,
		DeadZone                   = 9,
		HandheldSpeedBoostFactor   = 10,
		DragZoneMaxDelta           = 11,
		MAX                        = 12
	};

	/**
	 * Enum DBDInput.EDBDInputMode
	 */
	enum class EDBDInputMode : uint8_t
	{
		None      = 0,
		Scaleform = 1,
		UMG       = 2,
		Game      = 3,
		MAX       = 4
	};

	/**
	 * Enum DBDInput.EUIActionType
	 */
	enum class EUIActionType : uint8_t
	{
		None                          = 0,
		Accept                        = 1,
		Cancel                        = 2,
		Previous                      = 3,
		Next                          = 4,
		PreviousSecondary             = 5,
		NextSecondary                 = 6,
		ArchivesSurvivorSlot          = 7,
		ArchivesKillerAndSurvivorSlot = 8,
		ArchivesKillerSlot            = 9,
		FaceButtonTop                 = 10,
		Scroll                        = 11,
		Options                       = 12,
		MAX                           = 13
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDInput.AnalogCursorData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAnalogCursorData : public FDBDTableRowBase
	{
	public:
		EAnalogCursorDataType                                      Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDMC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScalesWithDPI;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z355[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
