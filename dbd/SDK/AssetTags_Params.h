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
	 * Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	 */
	struct UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params
	{
	public:
		class UObject*                                             AssetPtr;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	 */
	struct UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params
	{
	public:
		struct FAssetData                                          AssetData;                                               // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	 */
	struct UAssetTagsSubsystem_GetCollectionsContainingAsset_Params
	{
	public:
		class FName                                                AssetPathName;                                           // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YTBT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetTags.AssetTagsSubsystem.GetCollections
	 */
	struct UAssetTagsSubsystem_GetCollections_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	 */
	struct UAssetTagsSubsystem_GetAssetsInCollection_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_54YI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAssetData>                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetTags.AssetTagsSubsystem.CollectionExists
	 */
	struct UAssetTagsSubsystem_CollectionExists_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
