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
	 * BlueprintGeneratedClass BPI_AB_Slasher_SubGraph_LookAt.BPI_AB_Slasher_SubGraph_LookAt_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_AB_Slasher_SubGraph_LookAt_C : public UInterface
	{
	public:
		void SetLookAtAnimationFromMainAB(const struct FAset_Slasher_LookAT& LookAtAnimSet);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
