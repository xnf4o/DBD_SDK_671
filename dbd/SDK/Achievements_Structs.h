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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Achievements.GameEventSimpleAchievementInfo
	 * Size -> 0x0020
	 */
	struct FGameEventSimpleAchievementInfo
	{
	public:
		TArray<struct FGameplayTag>                                gameEvents;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        profileStats;                                            // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Achievements.ScoreEventSimpleAchievementInfo
	 * Size -> 0x0020
	 */
	struct FScoreEventSimpleAchievementInfo
	{
	public:
		TArray<EDBDScoreTypes>                                     scoreTypes;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        profileStats;                                            // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Achievements.GameEventClassAchievementInfo
	 * Size -> 0x0008
	 */
	struct FGameEventClassAchievementInfo
	{
	public:
		class UClass*                                              achievement;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Achievements.CustomAchievementInfo
	 * Size -> 0x0008
	 */
	struct FCustomAchievementInfo
	{
	public:
		class UClass*                                              achievement;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
