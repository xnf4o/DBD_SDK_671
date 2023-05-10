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
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Scare_2d
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Scare_2d_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio Killer Weapon Impact Survivor
	 */
	struct UBP_Audio_FunctionLibrary_C_AudioKillerWeaponImpactSurvivor_Params
	{
	public:
		class ADBDBasePlayer*                                      camper;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Slasher;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Generator_Occlusion_Deactivate
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Generator_Occlusion_Deactivate_Params
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Generator_Occlusion_Activate
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Generator_Occlusion_Activate_Params
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Player_LocallyObserved
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Player_LocallyObserved_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocallyObserved;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3M47[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light_Hooked
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Hurt_Light_Hooked_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light_Wiggle
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Hurt_Light_Wiggle_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1UBG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleAttack
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_ShuffleAttack_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack_Carry
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Attack_Carry_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Haptic_LocallyObserved
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Haptic_LocallyObserved_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Spawning
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_Spawning_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Cooldown
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Cooldown_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Short_K28
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Short_K28_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori_K28
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Long_Mori_K28_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Dead
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Dead_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status_Start
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Status_Start_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Stop
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Stop_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Long_Mori_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity_SnapOfIt
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Insanity_SnapOfIt_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Insanity_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit_Mori
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Hit_Mori_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Hit_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Long_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Scare
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Scare_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Hard
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Hurt_Hard_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Cough
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Cough_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Hurt_Light_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6VHW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Hard
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Effort_Hard_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Light
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Effort_Light_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Status_Params
	{
	public:
		class FString                                              AKAudioState;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AudioState;                                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Post_AkEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Right_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Left_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Survivor_Body_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_K20_Weapon_Scrap_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Surface_Impact_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Impact_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_PullOut_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Clean_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Attack_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Arm_Params
	{
	public:
		class ADBDBasePlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Setup_Params
	{
	public:
		class UAkComponent*                                        AudioComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AudioStateKiller;                                        // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MMFT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkAudioEvent*                                       StartEvent;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Post_AkEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Grunt_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Right
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Only_Right_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Left
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Only_Left_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Right_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Left_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Land
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_Land_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleLow
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_ShuffleLow_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleHigh
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_ShuffleHigh_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Move
	 */
	struct UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_Move_Params
	{
	public:
		class UAkAudioEvent*                                       AKAudioEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADBDBasePlayer*                                      Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
