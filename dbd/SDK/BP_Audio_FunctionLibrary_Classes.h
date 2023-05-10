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
	 * BlueprintGeneratedClass BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBP_Audio_FunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Audio_Survivor_Grunt_Scream_Scare_2d(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_AudioKillerWeaponImpactSurvivor(class ADBDBasePlayer* camper, class ADBDBasePlayer* Slasher, class UObject* __WorldContext);
		void STATIC_Audio_Generator_Occlusion_Deactivate(class UAkComponent* AkComponent, class AActor* Player, class UObject* __WorldContext);
		void STATIC_Audio_Generator_Occlusion_Activate(class UAkComponent* AkComponent, class AActor* Player, class UObject* __WorldContext);
		void STATIC_Audio_Player_LocallyObserved(class AActor* Player, class UObject* __WorldContext, bool* IsLocallyObserved);
		void STATIC_Audio_Survivor_Grunt_Hurt_Light_Hooked(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Hurt_Light_Wiggle(class ADBDBasePlayer* Player, class UObject* __WorldContext, bool* ReturnValue);
		void STATIC_Audio_Killer_Cloth_ShuffleAttack(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon_Attack_Carry(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Haptic_LocallyObserved(class AActor* Actor, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Cloth_Spawning(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon_Cooldown(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Scream_Short_K28(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Scream_Long_Mori_K28(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Dead(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Status_Start(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Stop(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Scream_Long_Mori(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Insanity_SnapOfIt(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Insanity(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Scream_Hit_Mori(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Scream_Hit(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Scream_Long(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Scream_Scare(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Hurt_Hard(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Cough(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Hurt_Light(class ADBDBasePlayer* Player, class UObject* __WorldContext, bool* ReturnValue);
		void STATIC_Audio_Survivor_Grunt_Effort_Hard(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt_Effort_Light(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Status(const class FString& AKAudioState, class ADBDBasePlayer* Player, class UObject* __WorldContext, class FString* AudioState);
		void STATIC_Audio_Survivor_Post_AkEvent(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Footstep_Right(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Footstep_Left(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Grunt(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Survivor_Body(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_K20_Weapon_Scrap(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Surface_Impact(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon_Impact(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon_PullOut(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon_Clean(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon_Attack(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon_Arm(class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Setup(class UAkComponent* AudioComponent, const class FName& AudioStateKiller, class UAkAudioEvent* StartEvent, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Post_AkEvent(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Weapon(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Grunt(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Footstep_Only_Right(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Footstep_Only_Left(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Footstep_Right(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Footstep_Left(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Cloth_Land(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Cloth_ShuffleLow(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Cloth_ShuffleHigh(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		void STATIC_Audio_Killer_Cloth_Move(class UAkAudioEvent* AKAudioEvent, class ADBDBasePlayer* Player, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
