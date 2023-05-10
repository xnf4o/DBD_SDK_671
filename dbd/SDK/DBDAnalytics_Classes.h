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
	 * Class DBDAnalytics.AnalyticsDelegates
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnalyticsDelegates : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.AnalyticsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IncrementHookSpawned();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.AnalyticsManager
	 * Size -> 0x3B68 (FullSize[0x3BA0] - InheritedSize[0x0038])
	 */
	class UAnalyticsManager : public UAbstractAnalyticsManager
	{
	public:
		unsigned char                                              UnknownData_60XE[0x3B68];                                // 0x0038(0x3B68) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.ClosetAnalytics
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UClosetAnalytics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RecordClosetSearchSuccess(class ASlasherPlayer* killer);
		void STATIC_RecordClosetSearchFail(class ASlasherPlayer* killer);
		void STATIC_IncrementClosetEnter(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.DBDAnalytics
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDBDAnalytics : public UBHVRAnalytics
	{
	public:
		void STATIC_RecordGameProgress(const class FString& InProgressType);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.EmblemAnalyticsComponent
	 * Size -> 0x00F8 (FullSize[0x01B0] - InheritedSize[0x00B8])
	 */
	class UEmblemAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QNMU[0xF8];                                  // 0x00B8(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.InteractionAnalyticsComponent
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UInteractionAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1O3D[0xC8];                                  // 0x00B8(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.PerkAnalyticsLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPerkAnalyticsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SendTinkererUndetectableInterruptAnalytics(class ADBDPlayer* interruptedPlayer, class ADBDPlayer* Slasher);
		void STATIC_SendTinkererUndetectableHitNearGeneratorAnalytics(class ADBDPlayer* hitPlayer, class ADBDPlayer* Slasher);
		void STATIC_SendLightbornAuraRevealedAnalytics(class ADBDPlayer* revealedPlayer, class ADBDPlayer* Slasher);
		void STATIC_SendKnockoutSurvivorFoundAnalytics(class ADBDPlayer* findingSurvivor, class ADBDPlayer* foundSurvivor);
		void STATIC_SendFranklinsHitSurvivorNearDroppedItemAnalytics(class ADBDPlayer* hitSurvivor, class ADBDPlayer* Slasher);
		void STATIC_SendFranklinsConsumeItemAnalytics(class ADBDPlayer* previousOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.PigAnalytics
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPigAnalytics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RecordRBTSearch(class ACamperPlayer* searchingPlayer, bool success);
		void STATIC_OnRBTAttached_Analytics(class ASlasherPlayer* attacher, class ACamperPlayer* attachee);
		void STATIC_IncrementRBTTimerActived(class ACamperPlayer* attachedPlayer);
		void STATIC_IncrementRBTKilledCount(class ACamperPlayer* playerKilled, bool killedByExecutionZone);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.PlayerHookAnalyticsComponent
	 * Size -> 0x0330 (FullSize[0x03E8] - InheritedSize[0x00B8])
	 */
	class UPlayerHookAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XF59[0x330];                                 // 0x00B8(0x0330) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.PulldownAnalytics
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPulldownAnalytics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IncrementPalletStun(class ACamperPlayer* Survivor);
		void STATIC_IncrementPalletSpawned(class AActor* Actor);
		void STATIC_IncrementPalletDrop(class ACamperPlayer* Survivor);
		void STATIC_IncrementPalletDestroy(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.SurvivorAnalyticsComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class USurvivorAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_04W5[0xA8];                                  // 0x00B8(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAnalytics.SurvivorInteractionAnalytics
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USurvivorInteractionAnalytics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RecordHealSuccess(class ACamperPlayer* Survivor);
		void STATIC_RecordHatchEscape(class ACamperPlayer* Survivor);
		void STATIC_IncrementHealCount(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
