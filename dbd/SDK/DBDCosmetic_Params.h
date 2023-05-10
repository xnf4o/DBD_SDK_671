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
	 * Function DBDCosmetic.DBDActorIndicator.Cosmetic_UpdateIndicatorActivationStatus
	 */
	struct ADBDActorIndicator_Cosmetic_UpdateIndicatorActivationStatus_Params
	{
	public:
		bool                                                       IsActivated;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivorByClass
	 */
	struct UDBDCosmeticModuleUtilities_GetCosmeticHelperActorsOfSurvivorByClass_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              cosmeticHelperActorClassType;                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ASurvivorCosmeticHelperActor*>                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivor
	 */
	struct UDBDCosmeticModuleUtilities_GetCosmeticHelperActorsOfSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       Survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ASurvivorCosmeticHelperActor*>                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.IsLocallyObserved
	 */
	struct ASurvivorCosmeticHelperActor_IsLocallyObserved_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.GetSurvivor
	 */
	struct ASurvivorCosmeticHelperActor_GetSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.GetMaterialHelper
	 */
	struct ASurvivorCosmeticHelperActor_GetMaterialHelper_Params
	{
	public:
		class UMaterialHelper*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.GetCustomizedSkeletalMesh
	 */
	struct ASurvivorCosmeticHelperActor_GetCustomizedSkeletalMesh_Params
	{
	public:
		class UCustomizedSkeletalMesh*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.GetAudioComponent
	 */
	struct ASurvivorCosmeticHelperActor_GetAudioComponent_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorLinked
	 */
	struct ASurvivorCosmeticHelperActor_Cosmetic_OnSurvivorLinked_Params
	{
	public:
		class ACamperPlayer*                                       survivorLinked;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsLocallyObservingSurvivorChanged
	 */
	struct ASurvivorCosmeticHelperActor_Cosmetic_OnIsLocallyObservingSurvivorChanged_Params
	{
	public:
		bool                                                       isLocallyObservingSurvivor;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsGettingMoriedStatusChanged
	 */
	struct ASurvivorCosmeticHelperActor_Cosmetic_OnIsGettingMoriedStatusChanged_Params
	{
	public:
		bool                                                       isGettingMoried;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActors
	 */
	struct USurvivorCosmeticHelperSpawnerComponent_GetCosmeticHelperActors_Params
	{
	public:
		TArray<class ASurvivorCosmeticHelperActor*>                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActorByClass
	 */
	struct USurvivorCosmeticHelperSpawnerComponent_GetCosmeticHelperActorByClass_Params
	{
	public:
		class UClass*                                              cosmeticHelperActorClassType;                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ASurvivorCosmeticHelperActor*>                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
