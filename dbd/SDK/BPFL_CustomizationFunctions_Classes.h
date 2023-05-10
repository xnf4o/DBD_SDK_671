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
	 * BlueprintGeneratedClass BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPFL_CustomizationFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetOwningSkeletalMesh(class UAnimInstance* AnimInstance, class UObject* __WorldContext, class USkeletalMeshComponent** SkeletalMeshComponent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
