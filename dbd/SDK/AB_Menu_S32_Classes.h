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
	 * AnimBlueprintGeneratedClass AB_Menu_S32.AB_Menu_S32_C
	 * Size -> 0x0008 (FullSize[0x1B20] - InheritedSize[0x1B18])
	 */
	class UAB_Menu_S32_C : public UAB_Menu_Camper_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1B18(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_Menu_S32(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
