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
	 * BlueprintGeneratedClass BP_VFX_Killer_AnimNotifies_Handler.BP_VFX_Killer_AnimNotifies_Handler_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBP_VFX_Killer_AnimNotifies_Handler_C : public UAnimEffectHandler
	{
	public:
		bool HandleAnimNotify(class AActor* Player, const class FName& NotifyName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
