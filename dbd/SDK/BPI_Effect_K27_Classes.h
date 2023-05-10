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
	 * BlueprintGeneratedClass BPI_Effect_K27.BPI_Effect_K27_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_Effect_K27_C : public UInterface
	{
	public:
		void FX_K27_HideTape();
		void FX_K27_ShowTape();
		void FX_FadeCondemnedStatus();
		void FX_K27_SpawnMiniMoriVignette();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
