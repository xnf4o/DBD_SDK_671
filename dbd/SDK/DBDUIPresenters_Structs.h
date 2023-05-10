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
	 * Enum DBDUIPresenters.EContextSection
	 */
	enum class EContextSection : uint8_t
	{
		None             = 0,
		Hud              = 1,
		MainMenu         = 2,
		Lobby            = 3,
		Store            = 4,
		Tally            = 5,
		Archive          = 6,
		Credits          = 7,
		Onboarding       = 8,
		Popups           = 9,
		GenericPopups    = 10,
		LightSensitivity = 11,
		MAX              = 12
	};

	/**
	 * Enum DBDUIPresenters.EPlayerProfileFilter
	 */
	enum class EPlayerProfileFilter : uint8_t
	{
		Wallet      = 0,
		PlayerName  = 1,
		PlayerLevel = 2,
		PlayerRank  = 3,
		MAX         = 4
	};

	/**
	 * Enum DBDUIPresenters.EPresenterPhase
	 */
	enum class EPresenterPhase : uint8_t
	{
		Initialization  = 0,
		StartPresenting = 1,
		MAX             = 2
	};

	/**
	 * Enum DBDUIPresenters.EGameLayer
	 */
	enum class EGameLayer : uint8_t
	{
		Default   = 0,
		UMGPopup  = 1,
		Watermark = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDUIPresenters.PresenterContainerInfo
	 * Size -> 0x0028
	 */
	struct FPresenterContainerInfo
	{
	public:
		class UClass*                                              ContainerClass;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           Nudge;                                                   // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   row;                                                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Column;                                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIPresenters.SubtitlesEntry
	 * Size -> 0x0018
	 */
	struct FSubtitlesEntry
	{
	public:
		class FString                                              Subtitle;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isAOneLiner;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N44W[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIPresenters.QuestEventsTrackingData
	 * Size -> 0x0020
	 */
	struct FQuestEventsTrackingData
	{
	public:
		class FString                                              QuestEventId;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentProgressionValue;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxProgressionValue;                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuestOperationType                                        OperationType;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGL2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIPresenters.PresenterGroupData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FPresenterGroupData : public FDBDTableRowBase
	{
	public:
		class UClass*                                              PresenterGroup;                                          // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
