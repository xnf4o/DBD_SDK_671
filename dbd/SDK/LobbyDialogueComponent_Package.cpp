/**
 * Name: dbd
 * Version: 6711
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.IsSpecificCharacterInLobby
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::IsSpecificCharacterInLobby(class FString* Character, bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.IsSpecificCharacterInLobby"));
		
		ULobbyDialogueComponent_C_IsSpecificCharacterInLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetPlayableEvents
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FAkEventWithSubtitle>                AudioEvents                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FAkEventWithSubtitle>                PlayableEvents                                             (Parm, OutParm)
	 */
	void ULobbyDialogueComponent_C::GetPlayableEvents(TArray<struct FAkEventWithSubtitle>* AudioEvents, bool* ShouldPlay, TArray<struct FAkEventWithSubtitle>* PlayableEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetPlayableEvents"));
		
		ULobbyDialogueComponent_C_GetPlayableEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudioEvents != nullptr)
			*AudioEvents = params.AudioEvents;
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
		if (PlayableEvents != nullptr)
			*PlayableEvents = params.PlayableEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetLocalCharacterName
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      characterName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::GetLocalCharacterName(class FString* characterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetLocalCharacterName"));
		
		ULobbyDialogueComponent_C_GetLocalCharacterName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (characterName != nullptr)
			*characterName = params.characterName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.FindSpecificDialogueForCharacter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FSpecificReactionDialogue>           ReactionDialogues                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FAkEventWithSubtitle>                Dialogue                                                   (Parm, OutParm)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::FindSpecificDialogueForCharacter(TArray<struct FSpecificReactionDialogue>* ReactionDialogues, const class FString& Character, TArray<struct FAkEventWithSubtitle>* Dialogue, bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.FindSpecificDialogueForCharacter"));
		
		ULobbyDialogueComponent_C_FindSpecificDialogueForCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReactionDialogues != nullptr)
			*ReactionDialogues = params.ReactionDialogues;
		if (Dialogue != nullptr)
			*Dialogue = params.Dialogue;
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC10
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle> ResponseDialogue                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC10(TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle>* ResponseDialogue, bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC10"));
		
		ULobbyDialogueComponent_C_ShouldPlayC10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResponseDialogue != nullptr)
			*ResponseDialogue = params.ResponseDialogue;
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC9
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle> ResponseDialogue                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC9(TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle>* ResponseDialogue, bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC9"));
		
		ULobbyDialogueComponent_C_ShouldPlayC9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResponseDialogue != nullptr)
			*ResponseDialogue = params.ResponseDialogue;
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC8
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC8(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC8"));
		
		ULobbyDialogueComponent_C_ShouldPlayC8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC7
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC7(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC7"));
		
		ULobbyDialogueComponent_C_ShouldPlayC7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC6
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC6(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC6"));
		
		ULobbyDialogueComponent_C_ShouldPlayC6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC5
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC5(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC5"));
		
		ULobbyDialogueComponent_C_ShouldPlayC5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC4
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FAkEventWithSubtitle>                FoundDialogue                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC4(TArray<struct FAkEventWithSubtitle>* FoundDialogue, bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC4"));
		
		ULobbyDialogueComponent_C_ShouldPlayC4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundDialogue != nullptr)
			*FoundDialogue = params.FoundDialogue;
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC3
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC3(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC3"));
		
		ULobbyDialogueComponent_C_ShouldPlayC3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC2
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FAkEventWithSubtitle>                FoundDialogue                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC2(TArray<struct FAkEventWithSubtitle>* FoundDialogue, bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC2"));
		
		ULobbyDialogueComponent_C_ShouldPlayC2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundDialogue != nullptr)
			*FoundDialogue = params.FoundDialogue;
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC1
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::ShouldPlayC1(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC1"));
		
		ULobbyDialogueComponent_C_ShouldPlayC1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnCharacterRespond
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PreviousContext                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnCharacterRespond(class UAkComponent* AudioTarget, const class FString& PreviousContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnCharacterRespond"));
		
		ULobbyDialogueComponent_C_OnCharacterRespond_Params params {};
		params.AudioTarget = AudioTarget;
		params.PreviousContext = PreviousContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLobbyWait
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnLobbyWait(class UAkComponent* AudioTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLobbyWait"));
		
		ULobbyDialogueComponent_C_OnLobbyWait_Params params {};
		params.AudioTarget = AudioTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalReady
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsReady                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyDialogueComponent_C::OnLocalReady(class UAkComponent* AudioTarget, bool IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalReady"));
		
		ULobbyDialogueComponent_C_OnLocalReady_Params params {};
		params.AudioTarget = AudioTarget;
		params.IsReady = IsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestSpawn
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDMenuPlayer*                              Guest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnGuestSpawn(class ADBDMenuPlayer* Guest, class UAkComponent* AudioTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestSpawn"));
		
		ULobbyDialogueComponent_C_OnGuestSpawn_Params params {};
		params.Guest = Guest;
		params.AudioTarget = AudioTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalSpawn
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnLocalSpawn(class UAkComponent* AudioTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalSpawn"));
		
		ULobbyDialogueComponent_C_OnLocalSpawn_Params params {};
		params.AudioTarget = AudioTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDMenuPlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnGuestPlayerSpawn(class ADBDMenuPlayer* Player, class UAkComponent* AudioTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerSpawn"));
		
		ULobbyDialogueComponent_C_OnGuestPlayerSpawn_Params params {};
		params.Player = Player;
		params.AudioTarget = AudioTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerReadyChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDMenuPlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnLocalPlayerReadyChanged(class ADBDMenuPlayer* Player, class UAkComponent* AudioTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerReadyChanged"));
		
		ULobbyDialogueComponent_C_OnLocalPlayerReadyChanged_Params params {};
		params.Player = Player;
		params.AudioTarget = AudioTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnLocalPlayerSpawn(class UAkComponent* AudioTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerSpawn"));
		
		ULobbyDialogueComponent_C_OnLocalPlayerSpawn_Params params {};
		params.AudioTarget = AudioTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnDialogueFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinished"));
		
		ULobbyDialogueComponent_C_OnDialogueFinished_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnAllPlayersReadyInOnlineLobby
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULobbyDialogueComponent_C::OnAllPlayersReadyInOnlineLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnAllPlayersReadyInOnlineLobby"));
		
		ULobbyDialogueComponent_C_OnAllPlayersReadyInOnlineLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ReceiveEndPlay"));
		
		ULobbyDialogueComponent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerDespawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDMenuPlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnGuestPlayerDespawned(class ADBDMenuPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerDespawned"));
		
		ULobbyDialogueComponent_C_OnGuestPlayerDespawned_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnBeginPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Menu_Base_Camper_C*                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnBeginPlay(class UAkComponent* AudioTarget, class ABP_Menu_Base_Camper_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnBeginPlay"));
		
		ULobbyDialogueComponent_C_OnBeginPlay_Params params {};
		params.AudioTarget = AudioTarget;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnDialogueFinishedC2(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC2"));
		
		ULobbyDialogueComponent_C_OnDialogueFinishedC2_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::OnDialogueFinishedC4(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC4"));
		
		ULobbyDialogueComponent_C_OnDialogueFinishedC4_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function LobbyDialogueComponent.LobbyDialogueComponent_C.ExecuteUbergraph_LobbyDialogueComponent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyDialogueComponent_C::ExecuteUbergraph_LobbyDialogueComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function LobbyDialogueComponent.LobbyDialogueComponent_C.ExecuteUbergraph_LobbyDialogueComponent"));
		
		ULobbyDialogueComponent_C_ExecuteUbergraph_LobbyDialogueComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULobbyDialogueComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULobbyDialogueComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass LobbyDialogueComponent.LobbyDialogueComponent_C"));
		return ptr;
	}

}


