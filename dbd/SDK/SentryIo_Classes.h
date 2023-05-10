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
	 * Class SentryIo.SentryIoBaseSubsystem
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class USentryIoBaseSubsystem : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SentryIo.SentryIoSubsystem
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USentryIoSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_VRGC[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
