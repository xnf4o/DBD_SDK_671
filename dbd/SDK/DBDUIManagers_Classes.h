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
	 * Class DBDUIManagers.DBDTextManager
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UDBDTextManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_ZNCI[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		bool GetLargeTextEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIManagers.UIAnalyticsManager
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UUIAnalyticsManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_17T5[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIManagers.UIDataManager
	 * Size -> 0x0190 (FullSize[0x01C8] - InheritedSize[0x0038])
	 */
	class UUIDataManager : public UGameInstanceSubsystem
	{
	public:
		TMap<EItemRarity, struct FRarityMaterialData>              RarityMaterialMap;                                       // 0x0038(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<class FString, struct FTextBlockStyle>                RichTextStyleMap;                                        // 0x0088(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<ECurrencyType, struct FCurrencyProgressionUIData>     CurrencyUIDataMap;                                       // 0x00D8(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<EProgressionType, struct FCurrencyProgressionUIData>  ProgressionUIDataMap;                                    // 0x0128(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<EArchiveMenuState, struct FArchiveTomeSkinData>       ArchiveTomeSkinDataMap;                                  // 0x0178(0x0050) Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIManagers.UIEventDispatcher
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UUIEventDispatcher : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_15Y0[0x90];                                  // 0x0038(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIManagers.UIScaleManager
	 * Size -> 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
	 */
	class UUIScaleManager : public UGameInstanceSubsystem
	{
	public:
		class UDataTable*                                          _dpiScaleCurveDB;                                        // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _dpiScaleCurve;                                          // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FM21[0x98];                                  // 0x0048(0x0098) MISSED OFFSET (PADDING)

	public:
		float GetSkillCheckScaleFactor();
		float GetScaleFactor(EScaleType Type);
		float GetMenuScaleFactor();
		float GetHudScaleFactor();
		EDPIScaleCurveRatio GetDPIScaleCurveRatio();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
