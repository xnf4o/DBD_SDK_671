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
	 * Enum DBDAnalytics.EDBDAnalyticsGameMode
	 */
	enum class EDBDAnalyticsGameMode : uint8_t
	{
		AnalyticsServer       = 0,
		AnalyticsClient       = 1,
		AnalyticsLoading      = 2,
		AnalyticsLobby        = 3,
		AnalyticsMenu         = 4,
		AnalyticsPostGame     = 5,
		AnalyticsPerfTests    = 6,
		AnalyticsSplashScreen = 7,
		MAX                   = 8
	};

	/**
	 * Enum DBDAnalytics.ECharacterStatus
	 */
	enum class ECharacterStatus : uint8_t
	{
		Crawling              = 0,
		BeingPickedUp         = 1,
		BeingCarried          = 2,
		BeingHealed           = 3,
		BeingMended           = 4,
		BeingPutDown          = 5,
		BeingPutOnHook        = 6,
		BeingPulledFromCloset = 7,
		BeingKilled           = 8,
		OnHook                = 9,
		MAX                   = 10
	};

	/**
	 * Enum DBDAnalytics.EHealthStatus
	 */
	enum class EHealthStatus : uint8_t
	{
		Healthy     = 0,
		Wounded     = 1,
		DeepWounded = 2,
		Dying       = 3,
		MAX         = 4
	};

	/**
	 * Enum DBDAnalytics.EDoorStatus
	 */
	enum class EDoorStatus : uint8_t
	{
		Closed  = 0,
		Powered = 1,
		Open    = 2,
		MAX     = 3
	};

	/**
	 * Enum DBDAnalytics.EHatchStatus
	 */
	enum class EHatchStatus : uint8_t
	{
		Hidden         = 0,
		Visible        = 1,
		Open           = 2,
		Closed         = 3,
		ClosedOrHidden = 4,
		MAX            = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDAnalytics.UniquelyIdentifiedAnalytic
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FUniquelyIdentifiedAnalytic : public FBaseSingleStructIndexAnalytics
	{
	public:
		class FString                                              Version;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Branch;                                                  // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Changelist;                                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Configuration;                                           // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MirrorsId;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientId;                                                // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              platform;                                                // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BackendEnv;                                              // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DataContentVersion;                                      // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.ArchiveVignetteVideoAnalytics
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FArchiveVignetteVideoAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ArchiveId;                                               // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VignetteId;                                              // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VideoId;                                                 // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartVideoTimestamp;                                     // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     VideoTimeSpent;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasVideoWatchUntilEnd;                                   // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21ZU[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.ArchiveVignetteEntryAnalytics
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	struct FArchiveVignetteEntryAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ArchiveId;                                               // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VignetteId;                                              // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EntryId;                                                 // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGR5[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectEntryTimestamp;                                    // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     EntryTimeSpent;                                          // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTaggedAsNew;                                           // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasVoiceOver;                                            // 0x00E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartWithAutoplayEnable;                                 // 0x00EA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAutoplayEnableWhenDeselectingEntry;                    // 0x00EB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K72[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartVoiceoverTimestamp;                                 // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     VoiceoverLongestTimeSpent;                               // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.BotReplacementAnalytics
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FBotReplacementAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KrakenMatchId;                                           // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGVX[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MatchTime;                                               // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              characterName;                                           // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReplacedCharacterMirrorsId;                              // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIDifficultyLevel                                         BotDifficultyLevel;                                      // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHDO[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.Gameplay_ChaseAnalytics
	 * Size -> 0x00E0 (FullSize[0x0188] - InheritedSize[0x00A8])
	 */
	struct FGameplay_ChaseAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsABot;                                                  // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRXF[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MirrorsIdSurvivor;                                       // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordXStartKiller;                                       // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordYStartKiller;                                       // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordZStartKiller;                                       // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordXEndKiller;                                         // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordYEndKiller;                                         // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordZEndKiller;                                         // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletsDestroyedByKiller;                                // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WindowsVaultedByKiller;                                  // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletsVaultedByKiller;                                  // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BasicAttackSwingsByKiller;                               // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BasicAttackHitsByKiller;                                 // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialAttackAttemptsByKiller;                           // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecialAttackHitsByKiller;                               // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceCoveredKiller;                                   // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordXStartSurvivor;                                     // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordYStartSurvivor;                                     // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordZStartSurvivor;                                     // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordXEndSurvivor;                                       // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordYEndSurvivor;                                       // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoordZEndSurvivor;                                       // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletsDroppedBySurvivor;                                // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletsStunnedBySurvivor;                                // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WindowsVaultedBySurvivor;                                // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletsVaultedBySurvivor;                                // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartingHealthOfSurvivor;                                // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndingHealthOfSurvivor;                                  // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmountHealedOfSurvivor;                                  // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JXV[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartingTileSurvivor;                                    // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EndingTileSurvivor;                                      // 0x0150(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmountOfTilesVisitedSurvivor;                            // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2NW[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TilesVisitedSurvivor;                                    // 0x0168(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DistanceCoveredSurvivor;                                 // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplacementSurvivor;                                    // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChaseStartTimeInSecond;                                  // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChaseEndTimeInSecond;                                    // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.ChatAnalytics
	 * Size -> 0x0070 (FullSize[0x0118] - InheritedSize[0x00A8])
	 */
	struct FChatAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              SenderMirrorsId;                                         // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderPlayerName;                                        // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatContent;                                             // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OriginalChatContent;                                     // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatContext;                                             // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InGameTimestamp;                                         // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.BaseCheatAnalytics
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	struct FBaseCheatAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Location;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NetMode;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              requester;                                               // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequesterPlatform;                                       // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequesterRole;                                           // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequesterCharacterId;                                    // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_412R[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RequesterCharacterName;                                  // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchType;                                               // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SuspiciousBehaviourAnalytics
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	struct FSuspiciousBehaviourAnalytics : public FBaseCheatAnalytics
	{
	public:
		class FString                                              Type;                                                    // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExtraField1String;                                       // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ExtraField1Integer;                                      // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtraField1Floating;                                     // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExtraField2String;                                       // 0x0160(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ExtraField2Integer;                                      // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtraField2Floating;                                     // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.ExecExecutedAnalytics
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	struct FExecExecutedAnalytics : public FBaseCheatAnalytics
	{
	public:
		class FString                                              Command;                                                 // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Executed;                                                // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPB5[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.CheatExecutedAnalytics
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	struct FCheatExecutedAnalytics : public FBaseCheatAnalytics
	{
	public:
		class FString                                              Command;                                                 // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Successful;                                              // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCS5[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.CheatValidatedAnalytics
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	struct FCheatValidatedAnalytics : public FBaseCheatAnalytics
	{
	public:
		class FString                                              Command;                                                 // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Validated;                                               // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25RO[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.ClientConnectionBaseAnalytics
	 * Size -> 0x00A0 (FullSize[0x0148] - InheritedSize[0x00A8])
	 */
	struct FClientConnectionBaseAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ClientRole;                                              // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientSurvivorIndex;                                     // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientKillerIndex;                                       // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientPlatformAccountId;                                 // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientMirrorsId;                                         // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientPlatform;                                          // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientProvider;                                          // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientName;                                              // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0128(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameType;                                                // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.ClientLogoutAnalytics
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	struct FClientLogoutAnalytics : public FClientConnectionBaseAnalytics
	{
	public:
		class FString                                              GameState;                                               // 0x0148(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameFlowStep;                                            // 0x0158(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.ClientLoginAnalytics
	 * Size -> 0x0040 (FullSize[0x0188] - InheritedSize[0x0148])
	 */
	struct FClientLoginAnalytics : public FClientConnectionBaseAnalytics
	{
	public:
		class FString                                              ClientOptions;                                           // 0x0148(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientMatchId;                                           // 0x0158(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientGameType;                                          // 0x0168(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoginResult;                                             // 0x0178(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.CrossfriendsAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FCrossfriendsAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              action;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetKrakenUserId;                                      // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.CrowdChoiceVoteResultAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FCrowdChoiceVoteResultAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PollId;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VoteOption;                                              // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VoteCount;                                               // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5CJ[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.CrowdChoiceSummaryResultAnalytics
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	struct FCrowdChoiceSummaryResultAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PollId;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PollType;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Status;                                                  // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PollDuration;                                            // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IH9X[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              VoteTimestamps;                                          // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            NewVotesPerTimestampInterval;                            // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.CrowdChoiceOnGameRoundStartedAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FCrowdChoiceOnGameRoundStartedAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PollId;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.CrowdPlayLobbyEventsAnalytics
	 * Size -> 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
	 */
	struct FCrowdPlayLobbyEventsAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              CrowdPlayId;                                             // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyEventName;                                          // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviteId;                                                // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerID;                                                // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.CrowdPlayLobbyResultsAnalytics
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FCrowdPlayLobbyResultsAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              CrowdPlayId;                                             // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PartySize;                                               // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NbrQueueToPlayMembers;                                   // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NbrGamesInSameSession;                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K41[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.CurrencyBalanceAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FCurrencyBalanceAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              CurrencyName;                                            // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyBalance;                                         // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72Y7[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.CustomerSupportClientLoginAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FCustomerSupportClientLoginAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              playerName;                                              // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Provider;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.CustomerSupportAnalytics
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	struct FCustomerSupportAnalytics : public FUniquelyIdentifiedAnalytic
	{	};

	/**
	 * ScriptStruct DBDAnalytics.CustomizationBaseAnalytics
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	struct FCustomizationBaseAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              CustomizationSlot1;                                      // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomizationSlot2;                                      // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomizationSlot3;                                      // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Charm1;                                                  // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Charm2;                                                  // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Charm3;                                                  // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6SO[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.CustomizationLobbyAnalytics
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	struct FCustomizationLobbyAnalytics : public FCustomizationBaseAnalytics
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.CustomizationAnalytics
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	struct FCustomizationAnalytics : public FCustomizationBaseAnalytics
	{
	public:
		class FString                                              MatchID;                                                 // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.DailyRitualAnalytics
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	struct FDailyRitualAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Status;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ritualId;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoursElapsed;                                            // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Progress;                                                // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Threshold;                                               // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PendingRituals;                                          // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpecificCharacter;                                       // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EHH[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.DDoSDetectionAnalytics
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	struct FDDoSDetectionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Severity;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonConnPacketCounter;                                    // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NetConnPacketCounter;                                    // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisconnPacketCounter;                                    // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BadPacketCounter;                                        // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ErrorPacketCounter;                                      // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DroppedPacketCounter;                                    // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.DedicatedServerStatusAnalytics
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	struct FDedicatedServerStatusAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              DSSessionProvider;                                       // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerStatus;                                            // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameLiftSessionId;                                       // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionEndReason;                                        // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FleetId;                                                 // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IpAddress;                                               // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZYY[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DnsName;                                                 // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.DetailedHitAnalytics
	 * Size -> 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
	 */
	struct FDetailedHitAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorMirrorsId;                                     // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetMirrorsId;                                         // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ping;                                                    // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitTimestamp;                                            // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidHit;                                              // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidDistance;                                         // 0x00E1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValidCollision;                                        // 0x00E2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8AI[0x1];                                   // 0x00E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RecorderCacheTimespan;                                   // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleInflation;                                        // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorName;                                          // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HitPrimitiveName;                                        // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorCoordinateX;                                   // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorCoordinateY;                                   // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorCoordinateZ;                                   // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorRotationX;                                     // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorRotationY;                                     // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorRotationZ;                                     // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetLocationInstigatorTimestamp;                       // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetCoordinateX;                                       // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetCoordinateY;                                       // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetCoordinateZ;                                       // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      distance;                                                // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZED[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.DisconnectionAnalytics
	 * Size -> 0x0078 (FullSize[0x0120] - InheritedSize[0x00A8])
	 */
	struct FDisconnectionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		double                                                     TimeSinceLastPacket;                                     // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameFlowStep;                                            // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnrealMapName;                                           // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ThemeName;                                               // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FailureType;                                             // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ErrorString;                                             // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.DisconnectionDetailsAnalytics
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	struct FDisconnectionDetailsAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PlayerPlatform;                                          // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InGameTime;                                              // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CZ2[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Reason;                                                  // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHealthStatus                                              Health;                                                  // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F520[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ECharacterStatus>                                   CharacterStatus;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    GeneratorActivated;                                      // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHatchStatus                                               HatchStatus;                                             // 0x00FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDoorStatus                                                DoorStatus;                                              // 0x00FD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameState                                                 DisconnectionType;                                       // 0x00FE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJQF[0x1];                                   // 0x00FF(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.DedicatedServerPlayerEquipDisabledItemAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FDedicatedServerPlayerEquipDisabledItemAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PlayerMirrorsId;                                         // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EquipedDisabledItemIds;                                  // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.EACAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FEACAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              LogMessage;                                              // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.EACClientViolationAnalytics
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	struct FEACClientViolationAnalytics : public FEACAnalytics
	{
	public:
		class FString                                              ViolationCase;                                           // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.EACClientInitAnalytics
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	struct FEACClientInitAnalytics : public FEACAnalytics
	{
	public:
		unsigned char                                              ValidationErrorType;                                     // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42DB[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.EACServerValidateAnalytics
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FEACServerValidateAnalytics : public FEACClientInitAnalytics
	{	};

	/**
	 * ScriptStruct DBDAnalytics.EACClientAuthChallengeAnalytics
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FEACClientAuthChallengeAnalytics : public FEACClientInitAnalytics
	{	};

	/**
	 * ScriptStruct DBDAnalytics.EACClientAuthInitAnalytics
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FEACClientAuthInitAnalytics : public FEACClientInitAnalytics
	{	};

	/**
	 * ScriptStruct DBDAnalytics.EmblemProgressionDetailsAnalytics
	 * Size -> 0x0018
	 */
	struct FEmblemProgressionDetailsAnalytics
	{
	public:
		class FString                                              ProgressionType;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProgressionPoint;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC3H[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.EmblemProgressionAnalytics
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	struct FEmblemProgressionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmblemId;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmblemValue;                                             // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7IN[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EmblemQuality;                                           // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEmblemProgressionDetailsAnalytics>          ProgressionDetails;                                      // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.EndpointLatencyData
	 * Size -> 0x0018
	 */
	struct FEndpointLatencyData
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Latency;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O4T[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.EndpointLatencyAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FEndpointLatencyAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		TArray<struct FEndpointLatencyData>                        Endpoints;                                               // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.EnvironmentAnalytics
	 * Size -> 0x0158 (FullSize[0x0200] - InheritedSize[0x00A8])
	 */
	struct FEnvironmentAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Environment;                                             // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Endpoint;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SelectedCountry;                                         // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timezone;                                                // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceProfile;                                           // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GpuAdapter;                                              // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GpuProviderName;                                         // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GpuDriverVersion;                                        // 0x0128(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RHIName;                                                 // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Cpu;                                                     // 0x0148(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QualitySetting;                                          // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFullScreen;                                            // 0x015C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAutomaticResolution;                                   // 0x015D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDO5[0x2];                                   // 0x015E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScreenResolutionSetting;                                 // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EngineResolutionX;                                       // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EngineResolutionY;                                       // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4Q9[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Provider;                                                // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Device;                                                  // 0x0180(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperatingSystem;                                         // 0x0190(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPlayingUsingStreaming;                                 // 0x01A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLLM[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StreamingService;                                        // 0x01A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StreamingServerLocation;                                 // 0x01B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KrakenVersion;                                           // 0x01C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContentVersion;                                          // 0x01D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUsingKeyboard;                                         // 0x01E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0RA[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ControllerType;                                          // 0x01F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.ErrorAnalytics
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FErrorAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ErrorCategory;                                           // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatField1;                                             // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatField2;                                             // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatField3;                                             // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M21Y[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringField1;                                            // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StringField2;                                            // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StringField3;                                            // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.FallOutOfWorldAnalytics
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	struct FFallOutOfWorldAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FallOutMirrorsId;                                        // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X;                                                       // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQ78[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TileName;                                                // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedMatchTime;                                        // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7RE[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.FrameHikeAnalytics
	 * Size -> 0x00D0 (FullSize[0x0178] - InheritedSize[0x00A8])
	 */
	struct FFrameHikeAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		float                                                      FrameDeltaTime;                                          // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceApplicationStarted;                             // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentTimeoutThreshold;                                 // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOverConnectionTimeLimit;                               // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HD1F[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentMap;                                              // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentGameMap;                                          // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameFlowStep;                                            // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentGameFlowContext;                                  // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviousGameFlowContext;                                 // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NavigationContext;                                       // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviousNavigationContext;                               // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RecentLogs;                                              // 0x0128(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KrakenMatchId;                                           // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlushAsyncLoadingTime;                                   // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FlushAsyncLoadingCount;                                  // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SyncLoadCount;                                           // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0BS[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameType;                                                // 0x0158(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NetMode;                                                 // 0x0168(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.FreeTrialLoginAnalytics
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	struct FFreeTrialLoginAnalytics : public FUniquelyIdentifiedAnalytic
	{	};

	/**
	 * ScriptStruct DBDAnalytics.GameConsoleLogAnalytics
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	struct FGameConsoleLogAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Verbosity;                                               // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   FrameCounter;                                            // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XBV[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StackTrace;                                              // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.GameInitAnalytics
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FGameInitAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              InitGuid;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProgressionName;                                         // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJE9[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LoadCompleteState;                                       // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedTime;                                             // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   FailureCount;                                            // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AdditionalInfo;                                          // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.Gameplay_PigKillerAnalytics
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	struct FGameplay_PigKillerAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmbushHitCount;                                          // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtKilledCount;                                          // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rbt1GeneratorCount;                                      // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rbt2GeneratorCount;                                      // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rbt3GeneratorCount;                                      // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rbt4GeneratorCount;                                      // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rbt5GeneratorCount;                                      // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchDuration;                                          // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtExitKill;                                             // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtHookKill;                                             // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.Gameplay_KillerAnalytics
	 * Size -> 0x00B8 (FullSize[0x0160] - InheritedSize[0x00A8])
	 */
	struct FGameplay_KillerAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodlustTier1Count;                                     // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodlustTier2Count;                                     // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodlustTier3Count;                                     // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloodlustTier1Duration;                                  // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloodlustTier2Duration;                                  // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloodlustTier3Duration;                                  // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BloodlustSpeed;                                          // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCount;                                              // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountFail;                                          // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountSuccess;                                       // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountTier1Fail;                                     // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountTier1Success;                                  // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountTier2Fail;                                     // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountTier2Success;                                  // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountTier3Fail;                                     // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChaseCountTier3Success;                                  // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HookCount;                                               // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MurderCount;                                             // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletSpawned;                                           // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProcedural;                                        // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProceduralSetCount;                                // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PalletGenerationId;                                      // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletGeneric;                                           // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletDestroyed;                                         // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BreakableWallSpawned;                                    // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BreakableWallDestroyed;                                  // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DropCount;                                               // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitCloseCount;                                           // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitCloseCountSuccess;                                    // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitFarCount;                                             // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitFarCountSuccess;                                      // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitSpecialCount;                                         // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitSpecialCountSuccess;                                  // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClosetOpen;                                              // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClosetOpenSuccess;                                       // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EscapeesHatchCount;                                      // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondesAtLeastOneSurvivorHooked;                        // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   AmountTilesVisited;                                      // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartX;                                                  // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartY;                                                  // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartZ;                                                  // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.Gameplay_PigSurvivorAnalytics
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	struct FGameplay_PigSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtAttachedCount;                                        // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActivatedRbtTimerCount;                                  // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtSuccessSearchCount;                                   // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtFailedSearchCount;                                    // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtDisabledPreActivation;                                // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RbtDisabledPostActivation;                               // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RbtChaseDuration;                                        // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RbtAverageTimeLeftBeforeDisable;                         // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RbtDuration;                                             // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L782[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.Gameplay_SurvivorAnalytics
	 * Size -> 0x0090 (FullSize[0x0138] - InheritedSize[0x00A8])
	 */
	struct FGameplay_SurvivorAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InjuredSpeed;                                            // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InjuredDuration;                                         // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthyDuration;                                         // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KODuration;                                              // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletSpawned;                                           // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProcedural;                                        // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProceduralSetCount;                                // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PalletGenerationId;                                      // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletGeneric;                                           // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletDrop;                                              // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletStun;                                              // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnhookCount;                                             // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HealCount;                                               // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HealCountSuccess;                                        // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClosetEnter;                                             // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hatch;                                                   // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillCheckCount;                                         // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillCheckCountGood;                                     // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillCheckCountGreat;                                    // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChaseDuration;                                           // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumChases;                                               // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitBySlasherCount;                                       // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   AmountTilesVisited;                                      // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartX;                                                  // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartY;                                                  // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartZ;                                                  // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EmotePoint;                                              // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EmoteCome;                                               // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchingDuration;                                       // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CrouchingCount;                                          // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrawlingDuration;                                        // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.GPUAnalytics
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	struct FGPUAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Marker;                                                  // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageMS;                                               // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StdDevMs;                                                // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.HangAnalytics
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FHangAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		bool                                                       IsHang;                                                  // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXP2[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HangSourcesInfo;                                         // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HangLogs;                                                // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastLoadingProgression;                                  // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ9N[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RecentFenceLogs;                                         // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.HeartbeatAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FHeartbeatAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              BeatTime;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.IAPCanceledAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FIAPCanceledAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ItemId;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Provider;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.InteractionAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FInteractionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJXK[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InterruptionSuccessCount;                                // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InterruptionFailureCount;                                // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteractionPredictedCount;                               // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteractionAuthorizedCount;                              // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteractionDeniedByRaceConditionCount;                   // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteractionDeniedByTimeoutCount;                         // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteractionDeniedByErrorCount;                           // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.DedicatedServerInvalidLoadoutAnalytics
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	struct FDedicatedServerInvalidLoadoutAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PlayerMirrorsId;                                         // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemType;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Items;                                                   // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerRole;                                              // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    characterId;                                             // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHO2[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.InvalidLoadoutAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FInvalidLoadoutAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    SlasherPerkCount;                                        // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PowerAddonCount;                                         // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CamperPerkCount;                                         // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemAddonCount;                                          // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CallingFunctionName;                                     // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    characterId;                                             // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2LH[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.NewKillerTutorialAnalytics
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FNewKillerTutorialAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		bool                                                       IsKickGeneratorComplete;                                 // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFollowSurvivorComplete;                                // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6XW[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeToCompleteAreaOne;                                   // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDestroyPalletComplete;                                 // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3JD[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeToCompleteAreaTwo;                                   // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBeartrapComplete;                                      // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHitSurvivorComplete;                                   // 0x00B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKoSurvivorComplete;                                    // 0x00BA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPickupSurvivorComplete;                                // 0x00BB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHookSurvivorComplete;                                  // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCloseHatchComplete;                                    // 0x00BD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKillSurvivorComplete;                                  // 0x00BE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1B5[0x1];                                   // 0x00BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeToCompleteAreaThree;                                 // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalTimeInTutorial;                                     // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tutorialId;                                              // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OnboardingModeId;                                        // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingEnabled;                                       // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingABTestingEnabled;                              // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNumberActiveModes;                             // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNewAssignedMode;                               // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.KrakenRequestAnalytics
	 * Size -> 0x0070 (FullSize[0x0118] - InheritedSize[0x00A8])
	 */
	struct FKrakenRequestAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              KrakenUrl;                                               // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Method;                                                  // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Route;                                                   // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Status;                                                  // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResponseCode;                                            // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProviderError;                                           // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   AttemptCount;                                            // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x00F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanRetry;                                                // 0x00F5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WillRetry;                                               // 0x00F6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VR2J[0x1];                                   // 0x00F7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Country;                                                 // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttemptElapsedTime;                                      // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalElapsedTime;                                        // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalElapsedTimeCapped;                                  // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DKA[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.LevelLoadingTimeoutAnalytics
	 * Size -> 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
	 */
	struct FLevelLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeElapsed;                                             // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeElapsedInStep;                                       // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1G6Q[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LoadingStep;                                             // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LevelLoadingStepAnalytics
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	struct FLevelLoadingStepAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeElapsed;                                             // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeElapsedInStep;                                       // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XO3[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LoadingStep;                                             // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTimeout;                                               // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3C3[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.LoadingTimeoutAnalytics
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	struct FLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              match_id;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lobby_id;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              timeout_timestamp;                                       // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      total_load_time;                                         // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X699[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              current_map_name;                                        // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              transition_id;                                           // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LoadingStepAnalytics
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	struct FLoadingStepAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              match_id;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lobby_id;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              step_change_timestamp;                                   // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              loading_step;                                            // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      time_on_prev_step;                                       // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      total_load_time;                                         // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              current_map_name;                                        // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              transition_id;                                           // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LoadoutBaseAnalytics
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	struct FLoadoutBaseAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              LoadoutItem;                                             // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoadoutItemAddOn1;                                       // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoadoutItemAddOn2;                                       // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoadoutPerk1;                                            // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoadoutPerk2;                                            // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoadoutPerk3;                                            // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoadoutPerk4;                                            // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoadoutOffering;                                         // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PY3K[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Rank;                                                    // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LoadOutLobbyAnalytics
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	struct FLoadOutLobbyAnalytics : public FLoadoutBaseAnalytics
	{
	public:
		int32_t                                                    Level;                                                   // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              characterName;                                           // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0148(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LoadOutAnalytics
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	struct FLoadOutAnalytics : public FLoadoutBaseAnalytics
	{
	public:
		class FString                                              MatchID;                                                 // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LogMirrorsAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FLogMirrorsAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              LogMirrors;                                              // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LogPresencePluginAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FLogPresencePluginAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Context;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MapCoordData
	 * Size -> 0x0030
	 */
	struct FMapCoordData
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Actor;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    X;                                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Z;                                                       // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLFR[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.MapCoordAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FMapCoordAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMapCoordData>                               MapItem;                                                 // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MapSelectionWeight
	 * Size -> 0x0028
	 */
	struct FMapSelectionWeight
	{
	public:
		class FString                                              MapId;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ThemeId;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3VB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.MapSelectionAnalytics
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	struct FMapSelectionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              KrakenMatchId;                                           // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SelectedMapId;                                           // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MapSeed;                                                 // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVJS[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMapSelectionWeight>                         MapWeights;                                              // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchIncentivesGrantedAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FMatchIncentivesGrantedAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerID;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                PlayerRole;                                              // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0IU[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Incentive;                                               // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchIncentivesFetchedAnalytics
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	struct FMatchIncentivesFetchedAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    KillerPercentageIncentive;                               // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivorPercentageIncentive;                             // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchInfoAnalytics
	 * Size -> 0x0118 (FullSize[0x01C0] - InheritedSize[0x00A8])
	 */
	struct FMatchInfoAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		EGameType                                                  GameMode;                                                // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsABot;                                                  // 0x00AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOIX[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BotId;                                                   // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIDifficultyLevel                                         BotDifficultyLevel;                                      // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA3N[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PartySize;                                               // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              characterName;                                           // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pips;                                                    // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PipsTotal;                                               // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MapSeed;                                                 // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PartyHostMirrorsId;                                      // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KrakenMatchId;                                           // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerName;                                              // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SelectedCountry;                                         // 0x0150(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FirstTimePlaying;                                        // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GT1A[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CumulativeMatches;                                       // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivor;                             // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKiller;                               // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMatchTimestamp;                                      // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExactPing;                                               // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasAnActiveArchiveQuest;                                 // 0x0184(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUsingKeyboard;                                         // 0x0185(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83BY[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ControllerType;                                          // 0x0188(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTutorialBotMatch;                                      // 0x0198(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGNH[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OnboardingModeId;                                        // 0x01A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingEnabled;                                       // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingABTestingEnabled;                              // 0x01B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNumberActiveModes;                             // 0x01B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNewAssignedMode;                               // 0x01BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingInfoExpiredAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMatchmakingInfoExpiredAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchmakingSessionGuid;                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingAnalytics
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FMatchmakingAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchmakingSessionGuid;                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                PlayerRole;                                              // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameType                                                  GameType;                                                // 0x00B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_696G[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PartySize;                                               // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96ZT[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              characterName;                                           // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingLobbyAnalytics
	 * Size -> 0x0040 (FullSize[0x0118] - InheritedSize[0x00D8])
	 */
	struct FMatchmakingLobbyAnalytics : public FMatchmakingAnalytics
	{
	public:
		class FString                                              LobbyStartTime;                                          // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyEndTime;                                            // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyResult;                                             // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KrakenMatchId;                                           // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingQueueAnalytics
	 * Size -> 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
	 */
	struct FMatchmakingQueueAnalytics : public FMatchmakingAnalytics
	{
	public:
		class FString                                              QueueStartTime;                                          // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueEndTime;                                            // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueResult;                                             // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CrossPlayEnabled;                                        // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OM35[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingSearchCompleteAnalytics
	 * Size -> 0x00E0 (FullSize[0x0188] - InheritedSize[0x00A8])
	 */
	struct FMatchmakingSearchCompleteAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		bool                                                       success;                                                 // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_252U[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumMatches;                                              // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsedFallback;                                            // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9A5[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConnectingToUser;                                        // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SearchParams;                                            // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SearchResultSettings;                                    // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYYF[0xA0];                                  // 0x00E8(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingHostCreatedAnalytics
	 * Size -> 0x0070 (FullSize[0x0118] - InheritedSize[0x00A8])
	 */
	struct FMatchmakingHostCreatedAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    NumPublicConnections;                                    // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPrivateConnections;                                   // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldAdvertise;                                         // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLANMatch;                                              // 0x00B1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowInvites;                                            // 0x00B2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsesPresence;                                            // 0x00B3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowJoinViaPresenceFriendsOnly;                         // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowJoinInProgress;                                     // 0x00B5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowJoinViaPresence;                                    // 0x00B6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x00B7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HostSettings;                                            // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SE44[0x50];                                  // 0x00C8(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingJoinCompleteAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FMatchmakingJoinCompleteAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              SessionName;                                             // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Result;                                                  // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3L04[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingJoinSessionAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FMatchmakingJoinSessionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Log;                                                     // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchmakingApproveLoginAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FMatchmakingApproveLoginAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    CurrentPlayers;                                          // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x00AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79QC[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Error;                                                   // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              JoiningUserID;                                           // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.WaitTimeAnalytics
	 * Size -> 0x0080 (FullSize[0x0128] - InheritedSize[0x00A8])
	 */
	struct FWaitTimeAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		float                                                      EnterLobbyWaitTime;                                      // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnterMatchWaitTime;                                      // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchWaitStartUtc;                                       // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchWaitStopUtc;                                        // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyWaitStartUtc;                                       // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyWaitStopUtc;                                        // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyWaitStopReason;                                     // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameType                                                  GameMode;                                                // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x0111(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK1K[0x2];                                   // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PartySize;                                               // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RankDifference;                                          // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DaysSinceReset;                                          // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1JA[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.QueueAnalytics
	 * Size -> 0x00B8 (FullSize[0x0160] - InheritedSize[0x00A8])
	 */
	struct FQueueAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    TimesQueuedSurvivor;                                     // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesQueuedKiller;                                       // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchesAsSurvivor;                                       // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchesAsKiller;                                         // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SelectedCountry;                                         // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerName;                                              // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FirstTimePlaying;                                        // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KUQ[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CumulativeMatches;                                       // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsSurvivor;                             // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeMatchesAsKiller;                               // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMatchTimestamp;                                      // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionStartTimestamp;                                   // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionEndTimestamp;                                     // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastSessionTimestamp;                                    // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CumulativeSessions;                                      // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CumulativePlaytime;                                      // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInCharacterMenu;                                     // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInBloodwebMenu;                                      // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInLoadoutMenu;                                       // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInCustomizationMenu;                                 // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInFearMarket;                                        // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInTallyScreen;                                       // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInGameMatch;                                         // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInHelpMenu;                                          // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInOfflineLobby;                                      // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInOfflineLobbySurvivorGroup;                         // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInOnlineLobby;                                       // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeInOnlineLobbySurvivorGroup;                          // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MatchRatingAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FMatchRatingAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    Rating;                                                  // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2E3[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MemoryUsageAnalytics
	 * Size -> 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
	 */
	struct FMemoryUsageAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              GameFlowStep;                                            // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TotalPhysical;                                           // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TotalVirtual;                                            // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    PeakUsedPhysical;                                        // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    PeakUsedVirtual;                                         // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    AvailablePhysical;                                       // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    AvailableVirtual;                                        // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MenuFlowTabData
	 * Size -> 0x0038
	 */
	struct FMenuFlowTabData
	{
	public:
		class FString                                              CurrentTab;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviousTab;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeOnPreviousTab;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YF14[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TabChangeTimestamp;                                      // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MenuFlowButtonPressData
	 * Size -> 0x0020
	 */
	struct FMenuFlowButtonPressData
	{
	public:
		class FString                                              Button;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ButtonPressTimestamp;                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.MenuFlowAnalytics
	 * Size -> 0x0078 (FullSize[0x0120] - InheritedSize[0x00A8])
	 */
	struct FMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              CurrentContext;                                          // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviousContext;                                         // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeOnPreviousContext;                                   // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88F5[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContextChangeTimetamp;                                   // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMenuFlowTabData>                            Tabs;                                                    // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMenuFlowButtonPressData>                    Buttons;                                                 // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.StoreMenuFlowAnalytics
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FStoreMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              EventTimestamp;                                          // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.OnboardingAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FOnboardingAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    tabIndex;                                                // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameManualIndex;                                         // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventTimestamp;                                          // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PakValidationAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FPakValidationAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ErrorType;                                               // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChunkIndex;                                              // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ReceivedHash;                                            // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FPartyAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PartyId;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyErrorAnalytics
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	struct FPartyErrorAnalytics : public FPartyAnalytics
	{
	public:
		class FString                                              Error;                                                   // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyDisbandedAnalytics
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	struct FPartyDisbandedAnalytics : public FPartyAnalytics
	{
	public:
		class FString                                              Error;                                                   // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyJoinedAnalytics
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	struct FPartyJoinedAnalytics : public FPartyAnalytics
	{
	public:
		bool                                                       success;                                                 // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FromJoinRequest;                                         // 0x00B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XZS[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyGuestJoinedAnalytics
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	struct FPartyGuestJoinedAnalytics : public FPartyAnalytics
	{
	public:
		class FString                                              InviteeId;                                               // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviteeName;                                             // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyInvitedAnalytics
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	struct FPartyInvitedAnalytics : public FPartyAnalytics
	{
	public:
		class FString                                              InviteeId;                                               // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9LB[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyCreatedAnalytics
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	struct FPartyCreatedAnalytics : public FPartyAnalytics
	{
	public:
		bool                                                       success;                                                 // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDAO[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.PartyJoinFailureAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FPartyJoinFailureAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              PartyMembersFriendshipStatus;                            // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumKrakenConfirmedFriendsInParty;                        // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumPlatformAcceptedFriendsInParty;                       // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PerformanceAnalytics
	 * Size -> 0x01F0 (FullSize[0x0298] - InheritedSize[0x00A8])
	 */
	struct FPerformanceAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		float                                                      AverageFPS;                                              // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFPS;                                                  // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFPS;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageFrameTime;                                        // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFrameTime;                                            // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFrameTime;                                            // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandardDeviationFrameTime;                              // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow60msFrameTime;                               // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow47msFrameTime;                               // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow34msFrameTime;                               // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow17msFrameTime;                               // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentHitchesFrameTime;                                 // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageRenderThreadTime;                                 // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRenderThreadTime;                                     // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRenderThreadTime;                                     // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandardDeviationRenderThreadTime;                       // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow60msRenderThreadTime;                        // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow47msRenderThreadTime;                        // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow34msRenderThreadTime;                        // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow17msRenderThreadTime;                        // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentHitchesRenderThreadTime;                          // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageGameThreadTime;                                   // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinGameThreadTime;                                       // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGameThreadTime;                                       // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandardDeviationGameThreadTime;                         // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow60msGameThreadTime;                          // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow47msGameThreadTime;                          // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow34msGameThreadTime;                          // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow17msGameThreadTime;                          // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentHitchesGameThreadTime;                            // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageRhiThreadTime;                                    // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRhiThreadTime;                                        // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRhiThreadTime;                                        // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandardDeviationRhiThreadTime;                          // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow60msRhiThreadTime;                           // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow47msRhiThreadTime;                           // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow34msRhiThreadTime;                           // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow17msRhiThreadTime;                           // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentHitchesRhiThreadTime;                             // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageGpuTime;                                          // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinGpuTime;                                              // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGpuTime;                                              // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandardDeviationGpuTime;                                // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow60msGpuTime;                                 // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow47msGpuTime;                                 // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow34msGpuTime;                                 // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentBelow17msGpuTime;                                 // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentHitchesGpuTime;                                   // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageSlateTickTime;                                    // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageSlateRenderThreadTime;                            // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageSlateDrawWindowTime;                              // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture;   // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdaptiveShadowMapAverageActiveLightsPerFrame;            // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdaptiveShadowMapPercentageOfFrameCapturingTiles;        // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute50ms;                                    // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute100ms;                                   // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute200ms;                                   // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute400ms;                                   // 0x018C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute800ms;                                   // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute1600ms;                                  // 0x0194(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute3200ms;                                  // 0x0198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute6400ms;                                  // 0x019C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitchesPerMinute12800ms;                                 // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageInputLatency;                                     // 0x01A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinInputLatency;                                         // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxInputLatency;                                         // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageOutputLatency;                                    // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinOutputLatency;                                        // 0x01B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOutputLatency;                                        // 0x01B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageStandardDeviation;                                // 0x01BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinStandardDeviation;                                    // 0x01C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStandardDeviation;                                    // 0x01C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceProfile;                                           // 0x01C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMemoryUsedKilobytes;                                  // 0x01D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DynamicResolutionScreenPercentageAvg;                    // 0x01DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DynamicResolutionScreenPercentageMax;                    // 0x01E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DynamicResolutionScreenPercentageMin;                    // 0x01E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchCount;                                              // 0x01E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalFrames;                                             // 0x01EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResolutionQuality;                                       // 0x01F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ViewDistanceQuality;                                     // 0x01F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AntiAliasingQuality;                                     // 0x01F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShadowQuality;                                           // 0x01FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextureQuality;                                          // 0x0200(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EffectsQuality;                                          // 0x0204(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FoliageQuality;                                          // 0x0208(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8OA[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Scenario;                                                // 0x0210(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Theme;                                                   // 0x0220(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0230(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileListCount;                                           // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0244(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              characterName;                                           // 0x0248(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Cpu;                                                     // 0x0258(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GpuAdapter;                                              // 0x0268(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0278(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RHIName;                                                 // 0x0288(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PerformanceChartingAnalytics
	 * Size -> 0x0140 (FullSize[0x01E8] - InheritedSize[0x00A8])
	 */
	struct FPerformanceChartingAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Scenario;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Theme;                                                   // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              map_name;                                                // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tile_spawn_count;                                        // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              match_id;                                                // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              character_name;                                          // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              cpu_name;                                                // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gpu_name;                                                // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Resolution;                                              // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    graphics_quality_level;                                  // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S561[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              hitch_times;                                             // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      target_30_fps;                                           // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      target_60_fps;                                           // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      target_120_fps;                                          // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      measured_perf_time;                                      // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mvp;                                                     // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      avg_fps;                                                 // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      hitches_per_minute;                                      // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      avg_hitch;                                               // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      frame_time_avg;                                          // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      frame_time_max;                                          // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      frame_time_min;                                          // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      game_thread_avg;                                         // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      game_thread_hitches_per_min;                             // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      game_thread_bound_frames;                                // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      render_thread_avg;                                       // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      render_thread_hitches_per_min;                           // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      render_thread_bound_frames;                              // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rhi_thread_avg;                                          // 0x018C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rhi_thread_hitches_per_min;                              // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rhi_thread_bound_frames;                                 // 0x0194(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      gpu_avg;                                                 // 0x0198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      gpu_hitches_per_min;                                     // 0x019C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      gpu_bound_frames;                                        // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      draw_calls_avg;                                          // 0x01A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      draw_calls_max;                                          // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      draw_calls_min;                                          // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      drawn_prims_avg;                                         // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      drawn_prims_max;                                         // 0x01B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      drawn_prims_min;                                         // 0x01B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      cpu_memory_peak;                                         // 0x01BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      cpu_memory_used;                                         // 0x01C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      streaming_memory_peak;                                   // 0x01C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      streaming_memory_used;                                   // 0x01C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      physical_memory_peak;                                    // 0x01CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      physical_memory_used;                                    // 0x01D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHAM[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              texturegroups_guid;                                      // 0x01D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PerkAcquisitionAnalytics
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	struct FPerkAcquisitionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              characterName;                                           // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              perkId;                                                  // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PerkSource;                                              // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Duplicate;                                               // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerkLevel;                                               // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F28Y[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.BasePerkAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FBasePerkAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedMatchTime;                                        // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AE7A[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.FranklinsHitNearDroppedItemAnalytics
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	struct FFranklinsHitNearDroppedItemAnalytics : public FBasePerkAnalytics
	{
	public:
		class FString                                              HitSurvivorMirrorsId;                                    // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttackingSlasherMirrorsId;                               // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.FranklinsDemiseConsumedItemAnalytics
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	struct FFranklinsDemiseConsumedItemAnalytics : public FBasePerkAnalytics
	{
	public:
		class FString                                              PreviousOwnerSurvivorMirrorsId;                          // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.KnockoutSurvivorFoundAnalytics
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	struct FKnockoutSurvivorFoundAnalytics : public FBasePerkAnalytics
	{
	public:
		class FString                                              RescuingSurvivorMirrorsId;                               // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FoundSurvivorMirrorsId;                                  // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.TinkererUndetectableInterruptAnalytics
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	struct FTinkererUndetectableInterruptAnalytics : public FBasePerkAnalytics
	{
	public:
		class FString                                              InterruptedSurvivorMirrorsId;                            // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InterruptingSlasherMirrorsId;                            // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.TinkererUndetectableHitNearGeneratorAnalytics
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	struct FTinkererUndetectableHitNearGeneratorAnalytics : public FBasePerkAnalytics
	{
	public:
		class FString                                              HitSurvivorMirrorsId;                                    // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttackingSlasherMirrorsId;                               // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.LightbornAuraRevealedAnalytics
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	struct FLightbornAuraRevealedAnalytics : public FBasePerkAnalytics
	{
	public:
		class FString                                              RevealedSurvivorMirrorsId;                               // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FlashlightedSlasherMirrorsId;                            // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.HookAnalytics
	 * Size -> 0x00A8 (FullSize[0x0150] - InheritedSize[0x00A8])
	 */
	struct FHookAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		float                                                      HookStartTime;                                           // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1V1M[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MirrorsIdSurvivor;                                       // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SurvivorIsABot;                                          // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8VC[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MirrorsIdKiller;                                         // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              KillerIsABot;                                            // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGHG[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MirrorsIdRescuer;                                        // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RescuerIsABot;                                           // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVZD[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimesOnHook;                                             // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Outcome;                                                 // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HookDuration;                                            // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EscapeAttemptStart;                                      // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EscapeAttemptFull;                                       // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivorsRemaining;                                      // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfActiveSurvivorsStart;                            // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfActiveSurvivorsEnd;                              // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfActiveSurvivorsTotal;                            // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationCampFace;                                        // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationCampHard;                                        // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationCampSoft;                                        // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfRescuers;                                        // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeForFirstRescuer;                                     // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReverseBearTrapOn;                                       // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4OZ[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.PlayerStatusEffectUpdateAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FPlayerStatusEffectUpdateAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ElapsedMatchTime;                                        // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NbOfConcurrentStatusEffects;                             // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      StatusEffects;                                           // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PostGameAnalyticsBase
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	struct FPostGameAnalyticsBase : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KrakenMatchId;                                           // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodwebPoints;                                          // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GameDuration;                                            // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              characterName;                                           // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PipsGainedOrLost;                                        // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchEndReason;                                          // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTutorialBotMatch;                                      // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJ5V[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OnboardingModeId;                                        // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingEnabled;                                       // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingABTestingEnabled;                              // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNumberActiveModes;                             // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNewAssignedMode;                               // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PostGame_KillerAnalytics
	 * Size -> 0x0078 (FullSize[0x01A8] - InheritedSize[0x0130])
	 */
	struct FPostGame_KillerAnalytics : public FPostGameAnalyticsBase
	{
	public:
		int32_t                                                    Brutality;                                               // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deviousness;                                             // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hunter;                                                  // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Sacrifice;                                               // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BrutalityBonus;                                          // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeviousnessBonus;                                        // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HunterBonus;                                             // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SacrificeBonus;                                          // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusEvent;                                              // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchIncentive;                                          // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EscapeesCount;                                           // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SacrificedCount;                                         // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KilledCount;                                             // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisconnectCount;                                         // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BotCount;                                                // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeOpenGate;                                            // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SurvivorSpawningPosition;                                // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GeneratorsDone;                                          // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YC5[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EGS_starter;                                             // 0x0188(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EGS_time;                                                // 0x0198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EGS_duration;                                            // 0x019C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EGS_sacrifice;                                           // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EGS_reachEnd;                                            // 0x01A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsedController;                                          // 0x01A5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsedKeyboard;                                            // 0x01A6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsedHapticsVibration;                                    // 0x01A7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PostGame_SurvivorAnalytics
	 * Size -> 0x0048 (FullSize[0x0178] - InheritedSize[0x0130])
	 */
	struct FPostGame_SurvivorAnalytics : public FPostGameAnalyticsBase
	{
	public:
		int32_t                                                    Objectives;                                              // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Survival;                                                // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Altruism;                                                // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Boldness;                                                // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectivesBonus;                                         // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivalBonus;                                           // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AltruismBonus;                                           // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoldnessBonus;                                           // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusEvent;                                              // 0x0150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchIncentive;                                          // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Outcome;                                                 // 0x0158(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECamperDamageState                                         damageState;                                             // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZQB[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HookedCount;                                             // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsedController;                                          // 0x0170(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsedKeyboard;                                            // 0x0171(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsedHapticsVibration;                                    // 0x0172(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUSX[0x5];                                   // 0x0173(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.PrestigeRewardItemAnalytic
	 * Size -> 0x0020
	 */
	struct FPrestigeRewardItemAnalytic
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.PrestigeLevelUpAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FPrestigeLevelUpAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              characterName;                                           // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewPrestigeLevel;                                        // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodpointsSpent;                                        // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrestigeRewardItemAnalytic>                 ItemRewards;                                             // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.ProceduralGenerationAnalytics
	 * Size -> 0x0118 (FullSize[0x01C0] - InheritedSize[0x00A8])
	 */
	struct FProceduralGenerationAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    GenerationSeed;                                          // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MapSeed;                                                 // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_MeatLocker_Small;                             // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_MeatLocker_Big;                               // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_Searchable;                                   // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_EdgeObjects;                                  // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_LivingWorldObjects;                           // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_Hatch;                                        // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_BookShelves;                                  // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_BreakableWalls;                               // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_Totems;                                       // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Procedural_QuadrantSpawn;                                // 0x0150(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletSpawned;                                           // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProceduralMin;                                     // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProceduralMax;                                     // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProcedural;                                        // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletProceduralSetCount;                                // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PalletGenerationId;                                      // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PalletGeneric;                                           // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUU2[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              KillerSpawn;                                             // 0x0180(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SurvivorSpawn;                                           // 0x0190(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x01A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HookSpawned;                                             // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseFixedMaps;                                            // 0x01B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX8Q[0x3];                                   // 0x01B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavmeshGenerationTime;                                   // 0x01B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BJE[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.ReportAnalytics
	 * Size -> 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
	 */
	struct FReportAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ClientIdTransmitter;                                     // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientIdReceiver;                                        // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MirrorsIdTransmitter;                                    // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MirrorsIdReceiver;                                       // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                RoleTransmitter;                                         // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                RoleReceiver;                                            // 0x00E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2JQ[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReportType;                                              // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReportCategory;                                          // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comments;                                                // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.BaseRPCAnalytics
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	struct FBaseRPCAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Sender;                                                  // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderPlatform;                                          // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchType;                                               // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    characterId;                                             // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8E1[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              characterName;                                           // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.NamedRPCCount
	 * Size -> 0x0018
	 */
	struct FNamedRPCCount
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZJ5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.RPCCountAnalytics
	 * Size -> 0x0178 (FullSize[0x0288] - InheritedSize[0x0110])
	 */
	struct FRPCCountAnalytics : public FBaseRPCAnalytics
	{
	public:
		float                                                      MatchDuration;                                           // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OVG[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameState;                                               // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedRPCCount>                              AllNamedCounts;                                          // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    TotalCount;                                              // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      UnlistedNames;                                           // 0x0140(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    UnlistedCount;                                           // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CallConsoleCmdOnServer_Server_Count;                     // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerAcknowledgePossession_Count;                       // 0x015C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerCheckClientPossession_Count;                       // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerCheckClientPossessionReliable_Count;               // 0x0164(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerMovePacked_Count;                                  // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerMoveOut_Count;                                     // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerNotifyLoadedWorld_Count;                           // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerSetSpectatorLocation_Count;                        // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerShortTimeout_Count;                                // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerUpdateCamera_Count;                                // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerUpdateLevelVisibility_Count;                       // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerUpdateMultipleLevelsVisibility_Count;              // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerVerifyViewTarget_Count;                            // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_ActivatePerk_Count;                               // 0x018C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_ActivateSkillCheck_Count;                         // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_AddMaxSpeedMovementCurve_Count;                   // 0x0194(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_Broadcast_ConfirmChargedCompleted_Count;          // 0x0198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_Broadcast_StoreInteraction_Count;                 // 0x019C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_ClearTargets_Count;                               // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_ClientPassedFence_Count;                          // 0x01A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_DeactivateSkillCheck_Count;                       // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_EACMessageFromClient_Count;                       // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_HitTarget_Count;                                  // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetImmobilized_Count;                             // 0x01B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_Launch_Count;                                     // 0x01B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_LoadoutSpawned_Count;                             // 0x01BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_NotifyStunHasBeenProcessed_Count;                 // 0x01C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_OnIntroCompleted_Count;                           // 0x01C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_OnSkillCheckFailure_Count;                        // 0x01C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_OnSkillCheckSuccess_Count;                        // 0x01CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetOverlappingEscape_Count;                       // 0x01D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_PlayMontage_Count;                                // 0x01D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_PlayerReady_Count;                                // 0x01D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_ReceivePlayerProfile_Count;                       // 0x01DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_RemoveMaxSpeedMovementCurve_Count;                // 0x01E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_RenderingFeaturesCompleted_Count;                 // 0x01E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_ReplicateControlRotation_Count;                   // 0x01E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_RequestEndGame_Count;                             // 0x01EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_RequestServerTime_Count;                          // 0x01F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_RequestStateChange_Count;                         // 0x01F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SendAttackInput_Count;                            // 0x01F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SendInteractionInput_Count;                       // 0x01FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SendFastInteractionInput_Count;                   // 0x0200(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SendSecondaryActionPressed_Count;                 // 0x0204(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetCharacterData_Count;                           // 0x0208(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetConsecutiveMatchStreak_Count;                  // 0x020C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetCustomizationMeshes_Count;                     // 0x0210(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetEquipedPerks_Count;                            // 0x0214(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetEquipment_Count;                               // 0x0218(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetGroundFriction_Count;                          // 0x021C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetInteractionToSwapTo_Count;                     // 0x0220(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetIntroCompleted_Count;                          // 0x0224(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetIsReadyToPlay_Count;                           // 0x0228(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetMaxAcceleration_Count;                         // 0x022C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetPlayerGameState_Count;                         // 0x0230(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetPlayerLoadout_Count;                           // 0x0234(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetPlayerReady_Count;                             // 0x0238(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetPlayerWiggleSkillCheckEnabled_Count;           // 0x023C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetPreloadCompleted_Count;                        // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetReadyToTravel_Count;                           // 0x0244(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetSpectatorMode_Count;                           // 0x0248(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SendItemUseInput_Count;                           // 0x024C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SendLeftRightMashedInput_Count;                   // 0x0250(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetMaxSpeedMultiplierScalar_Count;                // 0x0254(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SendMessage_Count;                                // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetSettings_Count;                                // 0x025C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetRunInput_Count;                                // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetStateStack_Count;                              // 0x0264(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_SetStopSnapping_Count;                            // 0x0268(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_StartSnapping_Count;                              // 0x026C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_StopMontage_Count;                                // 0x0270(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_StoreAttack_Count;                                // 0x0274(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_TryDetectPlayer_Count;                            // 0x0278(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_UpdateDiscernedCharacters_Count;                  // 0x027C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_UpdateReplicatedPips_Count;                       // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Server_UpdateScreenAspectRatio_Count;                    // 0x0284(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.RTMConnectionLostAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FRTMConnectionLostAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA7A[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorMessage;                                            // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.RTMAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FRTMAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              RTMType;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RTMSize;                                                 // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JM6H[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentGameFlowStep;                                     // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.S3CommandErrorAnalytics
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FS3CommandErrorAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              URL;                                                     // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Verb;                                                    // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResponseCode;                                            // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvalidRequest;                                          // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvalidResponse;                                         // 0x00CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DecryptionFailure;                                       // 0x00CE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BadResponse;                                             // 0x00CF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ContentModifiedError;                                    // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F98L[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.S3CommandAnalytics
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	struct FS3CommandAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    RequestContentLength;                                    // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKDV[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContentType;                                             // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedTime;                                             // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFP3[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Status;                                                  // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Verb;                                                    // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResponseContentLength;                                   // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResponseCode;                                            // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2VS[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.SaveGameLoadResultAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FSaveGameLoadResultAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		bool                                                       LoadSuccessful;                                          // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C580[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SaveGameSaveResultAnalytics
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	struct FSaveGameSaveResultAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		bool                                                       SaveSuccessful;                                          // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16JG[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ResponseCode;                                            // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SaveGameErrorAnalytics
	 * Size -> 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
	 */
	struct FSaveGameErrorAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0V2T[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Category;                                                // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ErrorDetails;                                            // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   KrakenErrorCode;                                         // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BNY[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StateName;                                               // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SaveGameSummaryPlayerStatsAnalytics
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FSaveGameSummaryPlayerStatsAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              OwnedPerks;                                              // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerStatsProgression;                                  // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodwebPoints;                                          // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UF3[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CumulativePlaytime;                                      // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.StatsProgressionData
	 * Size -> 0x0010
	 */
	struct FStatsProgressionData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      value;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SerializablePlayerStatsProgression
	 * Size -> 0x0010
	 */
	struct FSerializablePlayerStatsProgression
	{
	public:
		TArray<struct FStatsProgressionData>                       StatsProgression;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SerializablePlayerPerks
	 * Size -> 0x0050
	 */
	struct FSerializablePlayerPerks
	{
	public:
		TMap<class FName, int32_t>                                 Perks;                                                   // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.DetailedScoreAnalytics
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	struct FDetailedScoreAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              ScorerMirrorsId;                                         // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetMirrorsId;                                         // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ScoreTypeId;                                             // 0x00D8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoreExperience;                                         // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedMatchTime;                                        // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorCoordinateX;                                   // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorCoordinateY;                                   // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstigatorCoordinateZ;                                   // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetCoordinateX;                                       // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetCoordinateY;                                       // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetCoordinateZ;                                       // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AIOK[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.ScoreAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FScoreAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ScoreTypeId;                                             // 0x00B8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoreCount;                                              // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScoreBloodwebPoints;                                     // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6N2V[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.ShopAnalytics
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FShopAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              LogMessage;                                              // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SpecialEventAnalytics
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	struct FSpecialEventAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		EPlayerRole                                                Role;                                                    // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DGQ[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventName;                                               // 0x00C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Challenge;                                               // 0x00CC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CummulativeAmount;                                       // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.StadiaLivestreamAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FStadiaLivestreamAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              StreamStartTime;                                         // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserId;                                                  // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CrowdPlayEnabled;                                        // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CrowdChoiceEnabled;                                      // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOQN[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.FrameTravelTimeAnalytics
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	struct FFrameTravelTimeAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DynamicRange;                                            // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PixelDensity;                                            // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RenderResolution;                                        // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameIssuedToClientArrivalTotalTime;                     // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameIssuedToBeginRenderingTime;                         // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameRenderingTime;                                      // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameEncodingTime;                                       // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameFinishedEncodingToClientArrivalTime;                // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEP9[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.StadiaStreamAnalytics
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	struct FStadiaStreamAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DynamicRange;                                            // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PixelDensity;                                            // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RenderResolution;                                        // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkDelayForInputTime;                                // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkDelayForVideoTime;                                // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentFramesAbove60FPS;                                 // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentFramesBelow60FPS;                                 // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentFramesBelow45FPS;                                 // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentFramesBelow30FPS;                                 // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentFramesBelow20FPS;                                 // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJQM[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.Stat
	 * Size -> 0x0020
	 */
	struct FStat
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValueMin;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValueMax;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3RP9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.Counter
	 * Size -> 0x0020
	 */
	struct FCounter
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValueMin;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValueMax;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71S4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.MemoryStat
	 * Size -> 0x0020
	 */
	struct FMemoryStat
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValueMin;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValueMax;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMSR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.ShortStats
	 * Size -> 0x0030
	 */
	struct FShortStats
	{
	public:
		TArray<struct FStat>                                       FlatAggregate;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCounter>                                    CounterAggregate;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMemoryStat>                                 MemoryAggregate;                                         // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.StatsSystemUE4Analytics
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	struct FStatsSystemUE4Analytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              Name;                                                    // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBudget;                                               // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZWY[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStat>                                       FlatAggregate;                                           // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCounter>                                    CounterAggregate;                                        // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMemoryStat>                                 MemoryAggregate;                                         // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.NewSurvivorTutorialAnalytics
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	struct FNewSurvivorTutorialAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		bool                                                       IsLookAroundComplete;                                    // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsWalkAroundComplete;                                    // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRunningComplete;                                       // 0x00AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCrouchComplete;                                        // 0x00AB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFirstVaultComplete;                                    // 0x00AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYZ4[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeToCompleteAreaOne;                                   // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGeneratorComplete;                                     // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSecondVaultComplete;                                   // 0x00B5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RL5[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeToCompleteAreaTwo;                                   // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBeartrapComplete;                                      // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJS0[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeToCompleteAreaThree;                                 // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPalletComplete;                                        // 0x00C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnhookMegComplete;                                     // 0x00C5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLockerComplete;                                        // 0x00C6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGetUnhookedComplete;                                   // 0x00C7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHealMegComplete;                                       // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGetHealedComplete;                                     // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOpenGateComplete;                                      // 0x00CA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEscapeComplete;                                        // 0x00CB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeToCompleteAreaFour;                                  // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalTimeInTutorial;                                     // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EA18[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              tutorialId;                                              // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OnboardingModeId;                                        // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingEnabled;                                       // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingABTestingEnabled;                              // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNumberActiveModes;                             // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingNewAssignedMode;                               // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.SyncLoadAnalytics
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	struct FSyncLoadAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              AssetName;                                               // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoadTimeMilliseconds;                                    // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USE7[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceProfileName;                                       // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildConfiguration;                                      // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChangelistNumber;                                        // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAVM[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapName;                                                 // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameFlowContext;                                         // 0x00F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.TexturegroupChartingAnalytics
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FTexturegroupChartingAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              texturegroup_name;                                       // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              texturegroups_guid;                                      // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              map_name;                                                // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    avg_qty_streaming;                                       // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_qty_streaming;                                       // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    avg_memory_streaming;                                    // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_memory_streaming;                                    // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    avg_qty_non_streaming;                                   // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_qty_non_streaming;                                   // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    avg_memory_non_streaming;                                // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    max_memory_non_streaming;                                // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.TransactionAnalytics
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	struct FTransactionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              TransactionType;                                         // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionSource;                                       // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceID;                                                // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SourceTier;                                              // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7T1[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyType;                                            // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyAmount;                                          // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyBalance;                                         // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelAchieved;                                           // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemIDAcquired;                                          // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M91Y[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedCharacter;                                       // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TransactionTriggeredLevelUp;                             // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QFP[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDAnalytics.UnknownPrivilegeErrorAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FUnknownPrivilegeErrorAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		int32_t                                                    PrivilegeResults;                                        // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HL95[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlatformResults;                                         // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDAnalytics.WalesCypherAnalytics
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	struct FWalesCypherAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              EnteredSequence;                                         // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpectedSequence;                                        // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeoutThreshold;                                        // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       success;                                                 // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TIMEOUT;                                                 // 0x00CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharmGranted;                                            // 0x00CE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCQ3[0x1];                                   // 0x00CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ValidCharacterSelcted;                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTM7[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
