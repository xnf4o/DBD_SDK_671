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
	 * Class StartupInitializer.StartupInitializer
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UStartupInitializer : public UObject
	{
	public:
		unsigned char                                              UnknownData_2RBT[0x58];                                  // 0x0030(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StartupInitializer.ClientStartupInitializer
	 * Size -> 0x0138 (FullSize[0x01C0] - InheritedSize[0x0088])
	 */
	class UClientStartupInitializer : public UStartupInitializer
	{
	public:
		unsigned char                                              UnknownData_BTV5[0x138];                                 // 0x0088(0x0138) MISSED OFFSET (PADDING)

	public:
		void OnHealthCheckTriggered(bool requestSuccess, int32_t ProviderError, bool datetimeIsSet, const struct FDateTime& utcTime);
		static UClass* StaticClass();
	};

	/**
	 * Class StartupInitializer.DedicatedServerStartupInitializer
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UDedicatedServerStartupInitializer : public UStartupInitializer
	{
	public:
		unsigned char                                              UnknownData_J58V[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTimeUtilities*                                   _dbdTimeUtilities;                                       // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HO3K[0x20];                                  // 0x0098(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
