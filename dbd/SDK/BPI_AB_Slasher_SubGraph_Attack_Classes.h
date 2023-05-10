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
	 * BlueprintGeneratedClass BPI_AB_Slasher_SubGraph_Attack.BPI_AB_Slasher_SubGraph_Attack_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_AB_Slasher_SubGraph_Attack_C : public UInterface
	{
	public:
		void SetAttackAnimationFromMainAB(const struct FAset_Slasher_BaseAttack& AttackAnimset);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
