﻿#pragma once

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
	 * BlueprintGeneratedClass ClosetStun.ClosetStun_C
	 * Size -> 0x0008 (FullSize[0x0640] - InheritedSize[0x0638])
	 */
	class UClosetStun_C : public UGenericStun_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0638(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetCamper(bool* NewParam);
		void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);
		void ExecuteUbergraph_ClosetStun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
