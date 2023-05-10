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
	 * BlueprintGeneratedClass BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_Effect_K13_Menu_C : public UInterface
	{
	public:
		void K13_FX_ModifyFace(float SadFaceCurveValue, float MadFaceCurveValue);
		void K13_FX_MakeSwordInvisible();
		void K13_FX_MakeSwordVisible();
		void K13_FX_MakeSwordDisappear();
		void K13_FX_MakeSwordAppear();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
