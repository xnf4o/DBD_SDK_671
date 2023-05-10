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
	 * BlueprintGeneratedClass BP_Audio_KLR_16.BP_Audio_KLR_15_C
	 * Size -> 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
	 */
	class UBP_Audio_KLR_15_C : public UBP_Audio_KLR_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnKillerSoundbankLoaded(EAkResult Result);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_Audio_KLR_16(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
