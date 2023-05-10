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
	 * BlueprintGeneratedClass PalletStun.PalletStun_C
	 * Size -> 0x0008 (FullSize[0x0640] - InheritedSize[0x0638])
	 */
	class UPalletStun_C : public UGenericStun_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0638(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnInteractionUpdateStart(class ADBDPlayer* Player);
		void DispatchStunEvent(class ADBDPlayer* Player);
		void ExecuteUbergraph_PalletStun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
