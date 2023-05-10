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
	 * Class GameplayTagUtilities.DBDGameplayTagUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDBDGameplayTagUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class FName STATIC_GetScoreModifierName(const class FName& scoreEventID);
		bool STATIC_GameplayTagExists(const class FName& TagName);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTagUtilities.TagContainerQueryInstance
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UTagContainerQueryInstance : public UObject
	{
	public:
		unsigned char                                              UnknownData_ADHY[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagQuery                                   Query;                                                   // 0x0038(0x0048) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUZA[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTagUtilities.GameplayTagContainerComponent
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UGameplayTagContainerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XM7D[0x78];                                  // 0x00B8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, struct FQueryInstanceCollection> _tagToQueries;                                           // 0x0130(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class UObject*, struct FQueryInstanceCollection>      _ownerToQueries;                                         // 0x0180(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void Remove(const struct FGameplayTag& State);
		struct FGameplayTagContainer GetTags();
		void Add(const struct FGameplayTag& State);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTagUtilities.ObjectStateProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UObjectStateProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
