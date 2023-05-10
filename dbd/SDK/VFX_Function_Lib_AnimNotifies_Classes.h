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
	 * BlueprintGeneratedClass VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVFX_Function_Lib_AnimNotifies_C : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_HandleKillerNotifies_Trickster(const class FName& Selection, class ASlasherPlayer* MySlasher, class UObject* __WorldContext);
		bool STATIC_HandleKillerNotifies_Blight(class ASlasherPlayer* MySlasher1, class UObject* __WorldContext);
		bool STATIC_HandleKillerNotifies_Deathslinger(class ASlasherPlayer* MySlasher1, const class FName& Selection, class UObject* __WorldContext);
		bool STATIC_HandleKillerNotifies_Oni(class UObject* Target, class UObject* GetKiller1, const class FName& Selection, class UObject* __WorldContext);
		bool STATIC_HandleKillerNotifies_Demogorgon(const class FName& Selection, class UObject* Target, class UObject* __WorldContext);
		bool STATIC_HandleKillerNotifies_Nurse(const class FName& Selection, class ASlasherPlayer* MySlasher1, class UObject* __WorldContext);
		bool STATIC_HandleKillerNotifies_Hag(const class FName& Selection, class ASlasherPlayer* MySlasher1, class UObject* __WorldContext);
		void STATIC_HandleKillerNotifies_Trapper(class UObject* __WorldContext);
		bool STATIC_HandleKillerNotifies_General(class ASlasherPlayer* MySlasher1, const class FName& Selection, class UObject* __WorldContext);
		void STATIC_HandleKillerNotifies_WallBreak(const class FName& Selection, class UObject* WorldContextObject, class UObject* __WorldContext, bool* ReturnValue);
		bool STATIC_HandleKillerNotifies_Footsteps(const class FName& Selection, class ASlasherPlayer* Slasher, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
