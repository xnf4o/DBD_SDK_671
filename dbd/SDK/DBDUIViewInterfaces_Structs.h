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
	 * Enum DBDUIViewInterfaces.EArchiveTomeMenuState
	 */
	enum class EArchiveTomeMenuState : uint8_t
	{
		QuestMap = 0,
		Journal  = 1,
		MAX      = 2
	};

	/**
	 * Enum DBDUIViewInterfaces.EOnboardingMenuState
	 */
	enum class EOnboardingMenuState : uint8_t
	{
		Tutorial   = 0,
		GameManual = 1,
		MAX        = 2
	};

	/**
	 * Enum DBDUIViewInterfaces.EArchivePathStatus
	 */
	enum class EArchivePathStatus : uint8_t
	{
		Closed    = 0,
		Available = 1,
		Completed = 2,
		MAX       = 3
	};

	/**
	 * Enum DBDUIViewInterfaces.ETierType
	 */
	enum class ETierType : uint8_t
	{
		None  = 0,
		Bonus = 1,
		MAX   = 2
	};

	/**
	 * Enum DBDUIViewInterfaces.EArchiveTomeType
	 */
	enum class EArchiveTomeType : uint8_t
	{
		CurrentTome = 0,
		PastTome    = 1,
		EventTome   = 2,
		MAX         = 3
	};

	/**
	 * Enum DBDUIViewInterfaces.EGameManualMenuState
	 */
	enum class EGameManualMenuState : uint8_t
	{
		Categories = 0,
		Topics     = 1,
		MAX        = 2
	};

	/**
	 * Enum DBDUIViewInterfaces.ESingleHookState
	 */
	enum class ESingleHookState : uint8_t
	{
		EMPTY        = 0,
		UNHOOKED     = 1,
		HOOKED       = 2,
		DISCONNECTED = 3,
		MAX          = 4
	};

	/**
	 * Enum DBDUIViewInterfaces.EHudStatusEffectAlertViewType
	 */
	enum class EHudStatusEffectAlertViewType : uint8_t
	{
		Unhandled = 0,
		Perk      = 1,
		Item      = 2,
		Addon     = 3,
		MAX       = 4
	};

	/**
	 * Enum DBDUIViewInterfaces.EInteractionPromptType
	 */
	enum class EInteractionPromptType : uint8_t
	{
		PressButton         = 0,
		MashButton          = 1,
		HoldButton          = 2,
		AlternateTwoButtons = 3,
		WiggleThumbstick    = 4,
		MovementAxes        = 5,
		MovementKeys        = 6,
		MAX                 = 7
	};

	/**
	 * Enum DBDUIViewInterfaces.ETestBuildFlagPosition
	 */
	enum class ETestBuildFlagPosition : uint8_t
	{
		Hud = 0,
		MAX = 1
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDUIViewInterfaces.PopupButtonViewData
	 * Size -> 0x0080
	 */
	struct FPopupButtonViewData
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0018(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGY9[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchiveNodeObjectiveViewData
	 * Size -> 0x0028
	 */
	struct FArchiveNodeObjectiveViewData
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		int32_t                                                    CurrentProgress;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxProgress;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuestProgressionType                                      ProgressionType;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCommunityObjective;                                    // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TO38[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.RewardViewData
	 * Size -> 0x0001
	 */
	struct FRewardViewData
	{
	public:
		bool                                                       IsHighlighted;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CharacterTooltipViewData
	 * Size -> 0x0070
	 */
	struct FCharacterTooltipViewData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Biography;                                               // 0x0018(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                DLCTitle;                                                // 0x0030(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnlocked;                                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNewInStore;                                            // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableInStore;                                      // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDLCPurchasable;                                        // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterDifficulty                                       Difficulty;                                              // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x0056(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RW9J[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CharacterDisabledMessage;                                // 0x0058(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CharacterRewardViewData
	 * Size -> 0x00C7 (FullSize[0x00C8] - InheritedSize[0x0001])
	 */
	struct FCharacterRewardViewData : public FRewardViewData
	{
	public:
		unsigned char                                              UnknownData_WWYH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemId;                                                  // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IconTexture[0x30];                                       // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsOwned;                                                 // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PWS[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IM1C[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterTooltipViewData                           TooltipData;                                             // 0x0050(0x0070) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x00C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XFI[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CurrencyExpirationLabelViewData
	 * Size -> 0x0020
	 */
	struct FCurrencyExpirationLabelViewData
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RL92[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ExpirationDate;                                          // 0x0008(0x0018) BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CurrencyProgressionTooltipViewData
	 * Size -> 0x00C0
	 */
	struct FCurrencyProgressionTooltipViewData
	{
	public:
		bool                                                       IsCurrency;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RG0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		unsigned char                                              TooltipHeaderMaterial[0x30];                             // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                EventName;                                               // 0x0068(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FText                                                EventDescription;                                        // 0x0080(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                EventTimer;                                              // 0x0098(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		TArray<struct FCurrencyExpirationLabelViewData>            ExpirationData;                                          // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CurrencyProgressionRewardViewData
	 * Size -> 0x0127 (FullSize[0x0128] - InheritedSize[0x0001])
	 */
	struct FCurrencyProgressionRewardViewData : public FRewardViewData
	{
	public:
		ECurrencyType                                              CurrencyType;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProgressionType                                           ProgressionType;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPXQ[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RewardBackgroundMaterial[0x30];                          // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RewardIcon[0x30];                                        // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FCurrencyProgressionTooltipViewData                 TooltipData;                                             // 0x0068(0x00C0) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PriceViewData
	 * Size -> 0x0010
	 */
	struct FPriceViewData
	{
	public:
		ECurrencyType                                              CurrencyType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJ43[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Price;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Discount;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAffordable;                                            // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TGG[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CustomizationTooltipViewData
	 * Size -> 0x00E8
	 */
	struct FCustomizationTooltipViewData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                ParentName;                                              // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FText                                                RarityPartInfo;                                          // 0x0030(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                CollectionDisplayName;                                   // 0x0048(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0060(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                RoleCategoryInfo;                                        // 0x0078(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnbreakable;                                           // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEquipped;                                              // 0x0092(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0093(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOutfitPart;                                            // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNYN[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OutfitInfoText;                                          // 0x0098(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		EPlayerRole                                                AssociatedRole;                                          // 0x00B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LCZ[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPriceViewData>                              Prices;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x00C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SPM[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CustomizationDisabledMessage;                            // 0x00D0(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CustomizationRewardViewData
	 * Size -> 0x0147 (FullSize[0x0148] - InheritedSize[0x0001])
	 */
	struct FCustomizationRewardViewData : public FRewardViewData
	{
	public:
		unsigned char                                              UnknownData_3U6K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CustomizationId;                                         // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OutfitId;                                                // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOEO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture[0x30];                                       // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EItemRarity                                                Rarity;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEquipped;                                              // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnbreakable;                                           // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NB0[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomizationTooltipViewData                       TooltipData;                                             // 0x0058(0x00E8) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x0140(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8FT[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.RewardWrapperViewData
	 * Size -> 0x0340
	 */
	struct FRewardWrapperViewData
	{
	public:
		ERewardType                                                RewardType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01ZW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterRewardViewData                            CharacterRewardViewData;                                 // 0x0008(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCurrencyProgressionRewardViewData                  CurrencyProgressionRewardViewData;                       // 0x00D0(0x0128) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCustomizationRewardViewData                        CustomizationRewardViewData;                             // 0x01F8(0x0148) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchiveNodeViewData
	 * Size -> 0x00B8
	 */
	struct FArchiveNodeViewData
	{
	public:
		EArchiveNodeType                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStoryNodeState                                            Status;                                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZOT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Subtitle;                                                // 0x0020(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0038(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FString                                              DebugInfo;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FArchiveNodeObjectiveViewData>               Objectives;                                              // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRewardWrapperViewData>                      Rewards;                                                 // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class FText>                                        VignetteTitles;                                          // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		EPlayerRole                                                Role;                                                    // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsImageReward;                                           // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UESK[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VignetteId;                                              // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchiveNodeGraphViewData
	 * Size -> 0x00F0
	 */
	struct FArchiveNodeGraphViewData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45E8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FArchiveNodeViewData                                ViewData;                                                // 0x0010(0x00B8) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FVector2D                                           position;                                                // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        Neighbors;                                               // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PathIndices;                                             // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TabWidgetData
	 * Size -> 0x0080
	 */
	struct FTabWidgetData
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D99K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       HasNotification;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJZY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon[0x30];                                              // 0x0028(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ForcesIconSize;                                          // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ODH[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           IconSize;                                                // 0x005C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GO6B[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnalyticsName;                                           // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsKillSwitchEnabled;                                     // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QA46[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.BaseLoadoutPartViewData
	 * Size -> 0x0058
	 */
	struct FBaseLoadoutPartViewData
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8Q7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture[0x30];                                       // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              DisplayName;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4UR[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.AddonViewData
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FAddonViewData : public FBaseLoadoutPartViewData
	{
	public:
		float                                                      Cooldown;                                                // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMG1[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoadoutPartState                                          LoadoutPartState;                                        // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTPN[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchiveChallengeReminderViewData
	 * Size -> 0x00D0
	 */
	struct FArchiveChallengeReminderViewData
	{
	public:
		struct FArchiveNodeViewData                                NodeViewData;                                            // 0x0000(0x00B8) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                TomeSourceSubtitle;                                      // 0x00B8(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CompendiumButtonData
	 * Size -> 0x0070
	 */
	struct FCompendiumButtonData
	{
	public:
		class FString                                              tomeId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TomeTitle;                                               // 0x0010(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsMastered;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B3G[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VolumeIndex;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UArchiveStoryLevelViewData*>                  TomeLevels;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              StoryBookMarkTexture[0x30];                              // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchiveMapPathViewData
	 * Size -> 0x002C
	 */
	struct FArchiveMapPathViewData
	{
	public:
		struct FVector2D                                           StartPositon;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           EndPositon;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StartNodeId;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndNodeId;                                               // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EArchivePathStatus                                         Status;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4ZR[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchiveRewardNodeTooltipViewData
	 * Size -> 0x00F8
	 */
	struct FArchiveRewardNodeTooltipViewData
	{
	public:
		class FString                                              NodeDebugInfo;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCustomizationTooltipViewData                       CustomizationTooltipViewData;                            // 0x0010(0x00E8) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchivesVignetteEntryViewData
	 * Size -> 0x0070
	 */
	struct FArchivesVignetteEntryViewData
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsRead;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasAudio;                                                // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZTY[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RewardImage[0x30];                                       // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      PreviewTextureOffset;                                    // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4NBV[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchivesVignetteViewData
	 * Size -> 0x0060
	 */
	struct FArchivesVignetteViewData
	{
	public:
		class FString                                              VignetteId;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Subtitle;                                                // 0x0028(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		int32_t                                                    LastShownProgressValue;                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentProgress;                                         // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxProgress;                                             // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CinematicsNumber;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FArchivesVignetteEntryViewData>              Entries;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchivesPastTomeViewData
	 * Size -> 0x0070
	 */
	struct FArchivesPastTomeViewData
	{
	public:
		class FString                                              tomeId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TomeTitle;                                               // 0x0010(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       HasActiveNode;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW12[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VolumeIndex;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UArchiveStoryLevelViewData*>                  TomeLevels;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              StoryBookMarkTexture[0x30];                              // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchivesRiftGenericViewData
	 * Size -> 0x0020
	 */
	struct FArchivesRiftGenericViewData
	{
	public:
		struct FDateTime                                           EndDate;                                                 // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    currentTier;                                             // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTier;                                                 // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentStars;                                            // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StarsPerTiers;                                           // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OwnPass;                                                 // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowBonusTierTooltip;                                    // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BMTH[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchiveRiftTierRewardsViewData
	 * Size -> 0x0030
	 */
	struct FArchiveRiftTierRewardsViewData
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETierType                                                  TierType;                                                // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZA3K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TierProgress;                                            // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPremiumUnlocked;                                       // 0x000C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCurrentTier;                                           // 0x000D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCER[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardWrapperViewData>                      FreeRewards;                                             // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRewardWrapperViewData>                      PremiumRewards;                                          // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ArchivesRiftUnlockSequenceData
	 * Size -> 0x000C
	 */
	struct FArchivesRiftUnlockSequenceData
	{
	public:
		int32_t                                                    currentTier;                                             // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    previousTier;                                            // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPremiumUnlocked;                                       // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3Y6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.EditorInterfaces
	 * Size -> 0x0030
	 */
	struct FEditorInterfaces
	{
	public:
		unsigned char                                              QuestMapInterface[0x10];                                 // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              LevelProgressionInterface[0x10];                         // 0x0010(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              EditorInterface[0x10];                                   // 0x0020(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ChallengeTrackerViewData
	 * Size -> 0x0040
	 */
	struct FChallengeTrackerViewData
	{
	public:
		class FText                                                ChallengeTitle;                                          // 0x0000(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FArchiveNodeObjectiveViewData                       ProgressionData;                                         // 0x0018(0x0028) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CurrencyLabelViewData
	 * Size -> 0x0100
	 */
	struct FCurrencyLabelViewData
	{
	public:
		ECurrencyType                                              Type;                                                    // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD7E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon[0x30];                                              // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    Amount;                                                  // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayBonusAnimation;                                      // 0x003C(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_375R[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurrencyProgressionTooltipViewData                 TooltipData;                                             // 0x0040(0x00C0) BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.DailyRitualViewData
	 * Size -> 0x0078
	 */
	struct FDailyRitualViewData
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IconTexture[0x30];                                       // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EDailyRitualState                                          RitualState;                                             // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNew;                                                   // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3E4[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextProgress;                                            // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextThreshold;                                           // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarProgress;                                             // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarThreshold;                                            // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BloodpointsReward;                                       // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.DisplayStandViewData
	 * Size -> 0x0038
	 */
	struct FDisplayStandViewData
	{
	public:
		struct FAnchorData                                         Anchors;                                                 // 0x0000(0x0028) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PositionX;                                               // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionY;                                               // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeX;                                                   // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeY;                                                   // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.EventEntryPopupSkinUIData
	 * Size -> 0x0160 (FullSize[0x0168] - InheritedSize[0x0008])
	 */
	struct FEventEntryPopupSkinUIData : public FTableRowBase
	{
	public:
		unsigned char                                              AlternativeButtonMaterial[0x30];                         // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BackgroundTexture[0x30];                                 // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TitleBannerTexture[0x30];                                // 0x0068(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TitleIcon[0x30];                                         // 0x0098(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EventImage[0x30];                                        // 0x00C8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AlternativeButtonIcon[0x30];                             // 0x00F8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        HeaderColor;                                             // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor;                                               // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ScrollBarColor;                                          // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           AlternativeButtonPositionOffset;                         // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               AlternativeButtonAlignment;                              // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUsingBackgroundTexture;                                // 0x0161(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlternativeButtonUsedHoverAnimation;                     // 0x0162(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNHX[0x5];                                   // 0x0163(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PerkViewData
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	struct FPerkViewData : public FBaseLoadoutPartViewData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cooldown;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1EE[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRechargeable;                                          // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRechargeableActive;                                    // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJQB[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ItemViewData
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FItemViewData : public FBaseLoadoutPartViewData
	{
	public:
		bool                                                       IsEnergyTypeValid;                                       // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVW7[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EnergyLevel;                                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CIM[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                InputKey;                                                // 0x0068(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowKeyPrompt;                                           // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLimitedItem;                                           // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailable;                                             // 0x008A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EGA[0x5];                                   // 0x008B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.StatusEffectAlertViewData
	 * Size -> 0x01B0
	 */
	struct FStatusEffectAlertViewData
	{
	public:
		class FString                                              StatusEffectName;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StatusEffectIcon[0x30];                                  // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EStatusEffectType                                          StatusEffectType;                                        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHudStatusEffectAlertViewType                              SourceViewType;                                          // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZN81[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerkViewData                                       PerkViewData;                                            // 0x0048(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FItemViewData                                       ItemViewData;                                            // 0x00B8(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      AddonViewData;                                           // 0x0148(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ScoreAlertViewData
	 * Size -> 0x0020
	 */
	struct FScoreAlertViewData
	{
	public:
		EDBDScoreCategory                                          scoreType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QA2H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoreValue;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.HudEventProgressionViewData
	 * Size -> 0x0010
	 */
	struct FHudEventProgressionViewData
	{
	public:
		int32_t                                                    ProgressBanked;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProgressPending;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProgressCapacity;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProgressMax;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.HudObjectivesViewData
	 * Size -> 0x0008
	 */
	struct FHudObjectivesViewData
	{
	public:
		EPlayerTeam                                                playerTeam;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isHatchOpen;                                             // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVDS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    nbGeneratorsLeft;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.StatusEffectViewData
	 * Size -> 0x0050
	 */
	struct FStatusEffectViewData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELLN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture[0x30];                                       // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EStatusEffectType                                          StatusEffectType;                                        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DWW[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Percentage;                                              // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayIntroAnimation;                                      // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQ2T[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.InteractionProgressViewData
	 * Size -> 0x0068
	 */
	struct FInteractionProgressViewData
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SecondaryMessage;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBarColor                                                  BarColor;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBarColor                                                  ChargeBarColor;                                          // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowIcon;                                                // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowIconCharge;                                          // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCJI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ItemIcon[0x30];                                          // 0x0028(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FStatusEffectViewData>                       Proficiencies;                                           // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.InteractionPromptViewData
	 * Size -> 0x00B0
	 */
	struct FInteractionPromptViewData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWRY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionPromptType                                     Type;                                                    // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8YE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                InputKey1;                                               // 0x0028(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey2;                                               // 0x0048(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey3;                                               // 0x0068(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey4;                                               // 0x0088(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlaceInCenter;                                           // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailable;                                             // 0x00A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CQG[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ItemBundleViewData
	 * Size -> 0x0160
	 */
	struct FItemBundleViewData
	{
	public:
		struct FItemViewData                                       Item;                                                    // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      addon1;                                                  // 0x0090(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      addon2;                                                  // 0x00F8(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.KillerStatusDataMapping
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FKillerStatusDataMapping : public FDBDTableRowBase
	{
	public:
		struct FGameplayTag                                        killer;                                                  // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N8K[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ViewDataClass;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WidgetClass;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.LoadoutTooltipData
	 * Size -> 0x0090
	 */
	struct FLoadoutTooltipData
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRC5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParentDisplayName;                                       // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x005D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZI8S[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EventName;                                               // 0x0060(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              EventId;                                                 // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPastEvent;                                             // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryItemType                                         ItemType;                                                // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemAvailability                                          Availability;                                            // 0x008A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB0G[0x5];                                   // 0x008B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.MatchResultViewData
	 * Size -> 0x0008
	 */
	struct FMatchResultViewData
	{
	public:
		bool                                                       IsSlasher;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameState                                                 SurvivorResult;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKillerMatchResult                                         KillerResult;                                            // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5YX[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.NotifTutorialPopupViewData
	 * Size -> 0x0080
	 */
	struct FNotifTutorialPopupViewData
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Image[0x30];                                             // 0x0050(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.OfferingViewData
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FOfferingViewData : public FBaseLoadoutPartViewData
	{
	public:
		int32_t                                                    StackCount;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemAvailability                                          Availability;                                            // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIFA[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.OnboardingTutorialViewData
	 * Size -> 0x0078
	 */
	struct FOnboardingTutorialViewData
	{
	public:
		class FString                                              tutorialId;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       COMPLETED;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MainRewardClaimed;                                       // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTK6[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardWrapperViewData>                      MainRewards;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRewardWrapperViewData>                      AlternativeRewards;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		EOnboardingTutorialType                                    TutorialType;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOnboardingTutorialButtonStyle                             ButtonStyle;                                             // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IU6J[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0040(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0058(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.OnboardingStepViewData
	 * Size -> 0x0028
	 */
	struct FOnboardingStepViewData
	{
	public:
		class FString                                              stepId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOnboardingStepStatus                                      Status;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I03Q[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOnboardingTutorialViewData>                 Tutorials;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PlayerStatusViewData
	 * Size -> 0x0048
	 */
	struct FPlayerStatusViewData
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerPortraitIcon;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerPortraitIconOverride;                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerStatus                                              PlayerStatusState;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64AN[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerProgress;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDeepWound;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBroken;                                                // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocalPlayerAKiller;                                    // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObsessionUIState                                          ObsessionState;                                          // 0x002B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DrainStage;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConnectionQuality                                         ConnectionQualityStatus;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRPB[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKillerStatusData*                                   KillerStatusData;                                        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CampProgress;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRVN[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PowerViewData
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	struct FPowerViewData : public FBaseLoadoutPartViewData
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0058(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRechargeable;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActivated;                                             // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETH0[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProgressValue;                                           // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowKeyPrompt;                                           // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCountDisplayForced;                                    // 0x0085(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailable;                                             // 0x0086(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6BG[0x1];                                   // 0x0087(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PowerBundleViewData
	 * Size -> 0x0158
	 */
	struct FPowerBundleViewData
	{
	public:
		struct FPowerViewData                                      Power;                                                   // 0x0000(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      addon1;                                                  // 0x0088(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      addon2;                                                  // 0x00F0(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.SkillCheckViewData
	 * Size -> 0x0058
	 */
	struct FSkillCheckViewData
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey2;                                               // 0x0020(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitAreaStart;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitAreaLength;                                           // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusAreaStart;                                          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusAreaLength;                                         // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHexed;                                                 // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSpectating;                                            // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReversed;                                              // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMirrored;                                              // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInsane;                                                // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WISF[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.StartSequenceViewData
	 * Size -> 0x0028
	 */
	struct FStartSequenceViewData
	{
	public:
		class FString                                              ThemeName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EThemeColorId                                              ThemeColorId;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHDD[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TemplateViewData
	 * Size -> 0x0001
	 */
	struct FTemplateViewData
	{
	public:
		unsigned char                                              UnknownData_ZHJY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TutorialObjectivesViewData
	 * Size -> 0x0170
	 */
	struct FTutorialObjectivesViewData
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInteractionPromptViewData                          PrimaryInteractionPromptViewData;                        // 0x0010(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInteractionPromptViewData                          SecondaryInteractionPromptViewData;                      // 0x00C0(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
