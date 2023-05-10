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
	 * ScriptStruct GameplayTagUtilities.QueryInstanceCollection
	 * Size -> 0x0010
	 */
	struct FQueryInstanceCollection
	{
	public:
		TArray<class UTagContainerQueryInstance*>                  Instances;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayTagUtilities.TagStateBool
	 * Size -> 0x0030
	 */
	struct FTagStateBool
	{
	public:
		bool                                                       _isTrue;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IAKL[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
