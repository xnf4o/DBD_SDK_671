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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ThePig.AttachReverseBearTrap.GetCamper
	 */
	struct UAttachReverseBearTrap_GetCamper_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThePig.RemoveReverseBearTrapChargeable.HasSuccessfullyRemoved
	 */
	struct URemoveReverseBearTrapChargeable_HasSuccessfullyRemoved_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithoutDetach
	 */
	struct URemoveReverseBearTrapChargeable_BP_OnFinishWithoutDetach_Params
	{
	public:
		class ACamperPlayer*                                       searchingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithDetach
	 */
	struct URemoveReverseBearTrapChargeable_BP_OnFinishWithDetach_Params
	{
	public:
		class ACamperPlayer*                                       searchingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
