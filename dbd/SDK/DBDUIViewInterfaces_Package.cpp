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
	 * 		RVA    -> 0x03FEAFC0
	 * 		Name   -> Function DBDUIViewInterfaces.AddonViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAddonViewData                              BaseLoadoutPartViewData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAddonViewInterface::SetData(const struct FAddonViewData& BaseLoadoutPartViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.AddonViewInterface.SetData"));
		
		UAddonViewInterface_SetData_Params params {};
		params.BaseLoadoutPartViewData = BaseLoadoutPartViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.AddonViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAddonViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.AddonViewInterface.ClearData"));
		
		UAddonViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddonViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddonViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.AddonViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB500
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveCompendiumViewInterface.SetPastTomesViewData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FCompendiumButtonData>               pastStoryButtonData                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveCompendiumViewInterface::SetPastTomesViewData(TArray<struct FCompendiumButtonData> pastStoryButtonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveCompendiumViewInterface.SetPastTomesViewData"));
		
		UArchiveCompendiumViewInterface_SetPastTomesViewData_Params params {};
		params.pastStoryButtonData = pastStoryButtonData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveCompendiumViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveCompendiumViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveCompendiumViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveEditorViewInterface.InitEditor
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveEditorViewInterface::InitEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveEditorViewInterface.InitEditor"));
		
		UArchiveEditorViewInterface_InitEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA800
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveEditorViewInterface.DisplayEditorSaving
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveEditorViewInterface::DisplayEditorSaving(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveEditorViewInterface.DisplayEditorSaving"));
		
		UArchiveEditorViewInterface_DisplayEditorSaving_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveEditorViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveEditorViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveEditorViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC970
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.UpdateContent
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchivesVignetteEntryViewData              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveImageViewerViewInterface::UpdateContent(const struct FArchivesVignetteEntryViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.UpdateContent"));
		
		UArchiveImageViewerViewInterface_UpdateContent_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverPlaying
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               voiceOverPlaying                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveImageViewerViewInterface::SetVoiceOverPlaying(bool voiceOverPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverPlaying"));
		
		UArchiveImageViewerViewInterface_SetVoiceOverPlaying_Params params {};
		params.voiceOverPlaying = voiceOverPlaying;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverAutoplay
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               voiceOverAutoplay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveImageViewerViewInterface::SetVoiceOverAutoplay(bool voiceOverAutoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverAutoplay"));
		
		UArchiveImageViewerViewInterface_SetVoiceOverAutoplay_Params params {};
		params.voiceOverAutoplay = voiceOverAutoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetTextVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveImageViewerViewInterface::SetTextVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetTextVisibility"));
		
		UArchiveImageViewerViewInterface_SetTextVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveImageViewerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveImageViewerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveImageViewerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC4D0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverPlaying
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               voiceOverPlaying                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetVoiceOverPlaying(bool voiceOverPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverPlaying"));
		
		UArchiveJournalViewInterface_SetVoiceOverPlaying_Params params {};
		params.voiceOverPlaying = voiceOverPlaying;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB8C0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverAutoplay
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               voiceOverAutoplay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetVoiceOverAutoplay(bool voiceOverAutoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverAutoplay"));
		
		UArchiveJournalViewInterface_SetVoiceOverAutoplay_Params params {};
		params.voiceOverAutoplay = voiceOverAutoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC2E0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteList
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FArchivesVignetteViewData>           vignetteDataList                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetVignetteList(TArray<struct FArchivesVignetteViewData> vignetteDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteList"));
		
		UArchiveJournalViewInterface_SetVignetteList_Params params {};
		params.vignetteDataList = vignetteDataList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAF30
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteInputsEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetVignetteInputsEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteInputsEnabled"));
		
		UArchiveJournalViewInterface_SetVignetteInputsEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC0E0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchivesVignetteViewData                   vignetteViewData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetVignetteData(const struct FArchivesVignetteViewData& vignetteViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteData"));
		
		UArchiveJournalViewInterface_SetVignetteData_Params params {};
		params.vignetteViewData = vignetteViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB080
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetEntryData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchivesVignetteEntryViewData              entryViewData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetEntryData(const struct FArchivesVignetteEntryViewData& entryViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetEntryData"));
		
		UArchiveJournalViewInterface_SetEntryData_Params params {};
		params.entryViewData = entryViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAEA0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetCinematicButtonsEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetCinematicButtonsEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetCinematicButtonsEnabled"));
		
		UArchiveJournalViewInterface_SetCinematicButtonsEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetArrowButtonEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::SetArrowButtonEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetArrowButtonEnabled"));
		
		UArchiveJournalViewInterface_SetArrowButtonEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverPlayed
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveJournalViewInterface::OnImageViewerVoiceOverPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverPlayed"));
		
		UArchiveJournalViewInterface_OnImageViewerVoiceOverPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverAutoplay
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               autoplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalViewInterface::OnImageViewerVoiceOverAutoplay(bool autoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverAutoplay"));
		
		UArchiveJournalViewInterface_OnImageViewerVoiceOverAutoplay_Params params {};
		params.autoplay = autoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveJournalViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveJournalViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveJournalViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FECA90
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.UpdateLevelStatus
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EArchivesStoryLevelStatus                          Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::UpdateLevelStatus(int32_t Level, EArchivesStoryLevelStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.UpdateLevelStatus"));
		
		UArchiveLevelProgressionViewInterface_UpdateLevelStatus_Params params {};
		params.Level = Level;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEBF50
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeRewardsData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRewardWrapperViewData>              RewardsData                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               areLocked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::SetTomeRewardsData(TArray<struct FRewardWrapperViewData> RewardsData, bool areLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeRewardsData"));
		
		UArchiveLevelProgressionViewInterface_SetTomeRewardsData_Params params {};
		params.RewardsData = RewardsData;
		params.areLocked = areLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEBE50
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeLevelsData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UArchiveStoryLevelViewData*>          levelsData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            selectedLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::SetTomeLevelsData(TArray<class UArchiveStoryLevelViewData*> levelsData, int32_t selectedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeLevelsData"));
		
		UArchiveLevelProgressionViewInterface_SetTomeLevelsData_Params params {};
		params.levelsData = levelsData;
		params.selectedLevel = selectedLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAEA0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetRewardsContainerVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::SetRewardsContainerVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetRewardsContainerVisibility"));
		
		UArchiveLevelProgressionViewInterface_SetRewardsContainerVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB3F0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::SetLevelSelectorVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorVisibility"));
		
		UArchiveLevelProgressionViewInterface_SetLevelSelectorVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB360
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::SetLevelSelectorEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorEnabled"));
		
		UArchiveLevelProgressionViewInterface_SetLevelSelectorEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAAC0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetActiveLevel
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            levelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               performAction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::SetActiveLevel(int32_t levelIndex, bool performAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetActiveLevel"));
		
		UArchiveLevelProgressionViewInterface_SetActiveLevel_Params params {};
		params.levelIndex = levelIndex;
		params.performAction = performAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.PlayRewardsAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveLevelProgressionViewInterface::PlayRewardsAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.PlayRewardsAnimation"));
		
		UArchiveLevelProgressionViewInterface_PlayRewardsAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA960
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.GoToNextLevel
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            levelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveLevelProgressionViewInterface::GoToNextLevel(int32_t levelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.GoToNextLevel"));
		
		UArchiveLevelProgressionViewInterface_GoToNextLevel_Params params {};
		params.levelIndex = levelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveLevelProgressionViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveLevelProgressionViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveStoryLevelViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveStoryLevelViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveStoryLevelViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC880
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.UpdateBackgroundSkin
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FArchiveTomeSkinData                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::UpdateBackgroundSkin(int32_t Key, const struct FArchiveTomeSkinData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.UpdateBackgroundSkin"));
		
		UArchiveMenuViewInterface_UpdateBackgroundSkin_Params params {};
		params.Key = Key;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowUI
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveMenuViewInterface::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowUI"));
		
		UArchiveMenuViewInterface_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC560
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowSlotSelector
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchiveNodeViewData                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::ShowSlotSelector(const struct FArchiveNodeViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowSlotSelector"));
		
		UArchiveMenuViewInterface_ShowSlotSelector_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEBD80
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTitle
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetTitle(const class FText& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTitle"));
		
		UArchiveMenuViewInterface_SetTitle_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsInputsEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetTabsInputsEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsInputsEnabled"));
		
		UArchiveMenuViewInterface_SetTabsInputsEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEBB80
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabSelected
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetTabSelected(int32_t Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabSelected"));
		
		UArchiveMenuViewInterface_SetTabSelected_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEBC10
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTabWidgetData>                      tabsData                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SelectedKey                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetTabsData(TArray<struct FTabWidgetData> tabsData, int32_t SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsData"));
		
		UArchiveMenuViewInterface_SetTabsData_Params params {};
		params.tabsData = tabsData;
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEBAB0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetTabEnabled(int32_t Key, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabEnabled"));
		
		UArchiveMenuViewInterface_SetTabEnabled_Params params {};
		params.Key = Key;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEBA20
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitleVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetSubtitleVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitleVisible"));
		
		UArchiveMenuViewInterface_SetSubtitleVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB950
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitle
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Subtitle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetSubtitle(const class FText& Subtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitle"));
		
		UArchiveMenuViewInterface_SetSubtitle_Params params {};
		params.Subtitle = Subtitle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB8C0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetReminderSlotsEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetReminderSlotsEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetReminderSlotsEnabled"));
		
		UArchiveMenuViewInterface_SetReminderSlotsEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB830
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTimeVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetRemainingTimeVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTimeVisible"));
		
		UArchiveMenuViewInterface_SetRemainingTimeVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB700
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTime
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      RemainingTime                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isMoreThanWarningThreshold                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EArchiveMenuState                                  menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetRemainingTime(const class FString& RemainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTime"));
		
		UArchiveMenuViewInterface_SetRemainingTime_Params params {};
		params.RemainingTime = RemainingTime;
		params.isMoreThanWarningThreshold = isMoreThanWarningThreshold;
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB630
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetQuestNodeHoverEffect
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsHovered                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetQuestNodeHoverEffect(EPlayerRole Role, bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetQuestNodeHoverEffect"));
		
		UArchiveMenuViewInterface_SetQuestNodeHoverEffect_Params params {};
		params.Role = Role;
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB480
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EArchiveMenuState                                  menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetMenuState(EArchiveMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetMenuState"));
		
		UArchiveMenuViewInterface_SetMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB2D0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetInfoButtonVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonVisible"));
		
		UArchiveMenuViewInterface_SetInfoButtonVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB240
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetInfoButtonEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonEnabled"));
		
		UArchiveMenuViewInterface_SetInfoButtonEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB1A0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetEventLabel
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      EventLabel                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetEventLabel(const class FString& EventLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetEventLabel"));
		
		UArchiveMenuViewInterface_SetEventLabel_Params params {};
		params.EventLabel = EventLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAF30
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetControllerElementsEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetControllerElementsEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetControllerElementsEnabled"));
		
		UArchiveMenuViewInterface_SetControllerElementsEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAE10
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetChallengeReminderVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderVisibility"));
		
		UArchiveMenuViewInterface_SetChallengeReminderVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAC20
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchiveChallengeReminderViewData           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               needsAnimation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   animationOriginalPosition                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::SetChallengeReminderData(const struct FArchiveChallengeReminderViewData& Data, EPlayerRole Role, bool needsAnimation, const struct FVector2D& animationOriginalPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderData"));
		
		UArchiveMenuViewInterface_SetChallengeReminderData_Params params {};
		params.Data = Data;
		params.Role = Role;
		params.needsAnimation = needsAnimation;
		params.animationOriginalPosition = animationOriginalPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA9F0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.Init
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveMenuViewInterface::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.Init"));
		
		UArchiveMenuViewInterface_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.HideUI
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveMenuViewInterface::HideUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.HideUI"));
		
		UArchiveMenuViewInterface_HideUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA920
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveTomeInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UArchiveMenuViewInterface::GetArchiveTomeInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveTomeInterface"));
		
		UArchiveMenuViewInterface_GetArchiveTomeInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA8E0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveRiftInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UArchiveMenuViewInterface::GetArchiveRiftInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveRiftInterface"));
		
		UArchiveMenuViewInterface_GetArchiveRiftInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA8A0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveCompendiumInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UArchiveMenuViewInterface::GetArchiveCompendiumInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveCompendiumInterface"));
		
		UArchiveMenuViewInterface_GetArchiveCompendiumInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7E0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.CloseSlotSelector
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveMenuViewInterface::CloseSlotSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.CloseSlotSelector"));
		
		UArchiveMenuViewInterface_CloseSlotSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA740
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ClearChallengeReminderData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuViewInterface::ClearChallengeReminderData(EPlayerRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ClearChallengeReminderData"));
		
		UArchiveMenuViewInterface_ClearChallengeReminderData_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveMenuViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveMenuViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveMenuViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.BasePopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericPopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericPopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.GenericPopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchivePassPurchasePopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchivePassPurchasePopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchivePassPurchasePopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchivePassPurchasePopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchivePassPurchasePopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchivePassPurchasePopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF27F0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.UpdateQuestMapData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FArchiveNodeGraphViewData>           nodeDataList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FArchiveMapPathViewData>             pathDataList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveQuestMapViewInterface::UpdateQuestMapData(TArray<struct FArchiveNodeGraphViewData> nodeDataList, TArray<struct FArchiveMapPathViewData> pathDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.UpdateQuestMapData"));
		
		UArchiveQuestMapViewInterface_UpdateQuestMapData_Params params {};
		params.nodeDataList = nodeDataList;
		params.pathDataList = pathDataList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF21B0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetQuestMapData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FArchiveNodeGraphViewData>           nodeDataList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FArchiveMapPathViewData>             pathDataList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               needsCascadeAppear                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveQuestMapViewInterface::SetQuestMapData(TArray<struct FArchiveNodeGraphViewData> nodeDataList, TArray<struct FArchiveMapPathViewData> pathDataList, bool needsCascadeAppear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetQuestMapData"));
		
		UArchiveQuestMapViewInterface_SetQuestMapData_Params params {};
		params.nodeDataList = nodeDataList;
		params.pathDataList = pathDataList;
		params.needsCascadeAppear = needsCascadeAppear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetLoadingSpinner
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isLoading                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveQuestMapViewInterface::SetLoadingSpinner(bool isLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetLoadingSpinner"));
		
		UArchiveQuestMapViewInterface_SetLoadingSpinner_Params params {};
		params.isLoading = isLoading;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.Reset
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArchiveQuestMapViewInterface::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.Reset"));
		
		UArchiveQuestMapViewInterface_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveQuestMapViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveQuestMapViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveQuestMapViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2430
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRiftFragmentTooltipViewData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCurrencyProgressionTooltipViewData         RiftFragmentTooltipViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftViewInterface::SetRiftFragmentTooltipViewData(const struct FCurrencyProgressionTooltipViewData& RiftFragmentTooltipViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRiftFragmentTooltipViewData"));
		
		UArchiveRiftViewInterface_SetRiftFragmentTooltipViewData_Params params {};
		params.RiftFragmentTooltipViewData = RiftFragmentTooltipViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2360
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRewardTiersData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FArchiveRiftTierRewardsViewData>     riftTiersData                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftViewInterface::SetRewardTiersData(TArray<struct FArchiveRiftTierRewardsViewData> riftTiersData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRewardTiersData"));
		
		UArchiveRiftViewInterface_SetRewardTiersData_Params params {};
		params.riftTiersData = riftTiersData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB8C0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetMatchmakingSoftlockState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isInMatchmakingSoftlock                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftViewInterface::SetMatchmakingSoftlockState(bool isInMatchmakingSoftlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetMatchmakingSoftlockState"));
		
		UArchiveRiftViewInterface_SetMatchmakingSoftlockState_Params params {};
		params.isInMatchmakingSoftlock = isInMatchmakingSoftlock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetLoadingSpinner
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isLoading                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftViewInterface::SetLoadingSpinner(bool isLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetLoadingSpinner"));
		
		UArchiveRiftViewInterface_SetLoadingSpinner_Params params {};
		params.isLoading = isLoading;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1FB0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchivesRiftGenericViewData                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftViewInterface::SetData(const struct FArchivesRiftGenericViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetData"));
		
		UArchiveRiftViewInterface_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1F10
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveRiftViewInterface.PlayUnlockingAnimation
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchivesRiftUnlockSequenceData             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftViewInterface::PlayUnlockingAnimation(const struct FArchivesRiftUnlockSequenceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveRiftViewInterface.PlayUnlockingAnimation"));
		
		UArchiveRiftViewInterface_PlayUnlockingAnimation_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveRiftViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveRiftViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveRiftViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveTierPurchasePopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveTierPurchasePopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveTierPurchasePopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveTierPurchasePopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveTierPurchasePopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveTierPurchasePopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2720
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.UpdateBackgroundSkin
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          skinMaterail                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeViewInterface::UpdateBackgroundSkin(int32_t Key, class UMaterialInterface* skinMaterail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.UpdateBackgroundSkin"));
		
		UArchiveTomeViewInterface_UpdateBackgroundSkin_Params params {};
		params.Key = Key;
		params.skinMaterail = skinMaterail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC4D0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.ToggleEditor
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeViewInterface::ToggleEditor(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.ToggleEditor"));
		
		UArchiveTomeViewInterface_ToggleEditor_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAAC0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeViewInterface::SetSideNavTabsVisibility(int32_t Key, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsVisibility"));
		
		UArchiveTomeViewInterface_SetSideNavTabsVisibility_Params params {};
		params.Key = Key;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2650
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeViewInterface::SetSideNavTabsEnabled(int32_t Key, bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsEnabled"));
		
		UArchiveTomeViewInterface_SetSideNavTabsEnabled_Params params {};
		params.Key = Key;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF24E0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTabWidgetData>                      tabsData                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SelectedKey                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeViewInterface::SetSideNavTabsData(TArray<struct FTabWidgetData> tabsData, int32_t SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsData"));
		
		UArchiveTomeViewInterface_SetSideNavTabsData_Params params {};
		params.tabsData = tabsData;
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF20E0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetNotificationVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HasNotification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeViewInterface::SetNotificationVisibility(int32_t Key, bool HasNotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetNotificationVisibility"));
		
		UArchiveTomeViewInterface_SetNotificationVisibility_Params params {};
		params.Key = Key;
		params.HasNotification = HasNotification;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2060
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EArchiveTomeMenuState                              menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeViewInterface::SetMenuState(EArchiveTomeMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetMenuState"));
		
		UArchiveTomeViewInterface_SetMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1DA0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	EArchiveTomeMenuState UArchiveTomeViewInterface::GetMenuState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetMenuState"));
		
		UArchiveTomeViewInterface_GetMenuState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1D60
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveQuestMapInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UArchiveTomeViewInterface::GetArchiveQuestMapInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveQuestMapInterface"));
		
		UArchiveTomeViewInterface_GetArchiveQuestMapInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1D20
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveLevelProgressionInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UArchiveTomeViewInterface::GetArchiveLevelProgressionInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveLevelProgressionInterface"));
		
		UArchiveTomeViewInterface_GetArchiveLevelProgressionInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1CE0
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveJournalInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UArchiveTomeViewInterface::GetArchiveJournalInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveJournalInterface"));
		
		UArchiveTomeViewInterface_GetArchiveJournalInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1C80
	 * 		Name   -> Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveEditorInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FEditorInterfaces UArchiveTomeViewInterface::GetArchiveEditorInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveEditorInterface"));
		
		UArchiveTomeViewInterface_GetArchiveEditorInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveTomeViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveTomeViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ArchiveTomeViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.BasePopupViewInterface.Leave
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBasePopupViewInterface::Leave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.BasePopupViewInterface.Leave"));
		
		UBasePopupViewInterface_Leave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1BF0
	 * 		Name   -> Function DBDUIViewInterfaces.BasePopupViewInterface.Enter
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBasePopupViewData*                          Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBasePopupViewInterface::Enter(class UBasePopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.BasePopupViewInterface.Enter"));
		
		UBasePopupViewInterface_Enter_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.BasePopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2950
	 * 		Name   -> Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.UpdateWidgetProgression
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FArchiveNodeObjectiveViewData               ProgressionData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChallengeTrackerViewInterface::UpdateWidgetProgression(const struct FArchiveNodeObjectiveViewData& ProgressionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.UpdateWidgetProgression"));
		
		UChallengeTrackerViewInterface_UpdateWidgetProgression_Params params {};
		params.ProgressionData = ProgressionData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1EF0
	 * 		Name   -> Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.OpenWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UChallengeTrackerViewInterface::OpenWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.OpenWidget"));
		
		UChallengeTrackerViewInterface_OpenWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1DD0
	 * 		Name   -> Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.InitWidgetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FChallengeTrackerViewData                   ViewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChallengeTrackerViewInterface::InitWidgetData(const struct FChallengeTrackerViewData& ViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.InitWidgetData"));
		
		UChallengeTrackerViewInterface_InitWidgetData_Params params {};
		params.ViewData = ViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.CloseWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UChallengeTrackerViewInterface::CloseWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.CloseWidget"));
		
		UChallengeTrackerViewInterface_CloseWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeTrackerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeTrackerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ChallengeTrackerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreBaseViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.CoreBaseViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF85C0
	 * 		Name   -> Function DBDUIViewInterfaces.CreditsViewInterface.SetText
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCreditsViewInterface::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.CreditsViewInterface.SetText"));
		
		UCreditsViewInterface_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7D90
	 * 		Name   -> Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToName
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCreditsViewInterface::ScrollToName(const class FString& Name, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToName"));
		
		UCreditsViewInterface_ScrollToName_Params params {};
		params.Name = Name;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsViewInterface::ScrollToEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd"));
		
		UCreditsViewInterface_ScrollToEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreditsViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreditsViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.CreditsViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.StartAnim
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDailyRitualsPopupViewInterface::StartAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.StartAnim"));
		
		UDailyRitualsPopupViewInterface_StartAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7E80
	 * 		Name   -> Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetDailyRitualsData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FDailyRitualViewData>                dailyRitualsData                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isAfterTrial                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsPopupViewInterface::SetDailyRitualsData(TArray<struct FDailyRitualViewData> dailyRitualsData, bool isAfterTrial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetDailyRitualsData"));
		
		UDailyRitualsPopupViewInterface_SetDailyRitualsData_Params params {};
		params.dailyRitualsData = dailyRitualsData;
		params.isAfterTrial = isAfterTrial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetCanRemoveDailyRitual
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canRemoveDailyRitual                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsPopupViewInterface::SetCanRemoveDailyRitual(bool canRemoveDailyRitual)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetCanRemoveDailyRitual"));
		
		UDailyRitualsPopupViewInterface_SetCanRemoveDailyRitual_Params params {};
		params.canRemoveDailyRitual = canRemoveDailyRitual;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetAllDailyRitualTilesVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDailyRitualsPopupViewInterface::SetAllDailyRitualTilesVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetAllDailyRitualTilesVisible"));
		
		UDailyRitualsPopupViewInterface_SetAllDailyRitualTilesVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDailyRitualsPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDailyRitualsPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.DailyRitualsPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8240
	 * 		Name   -> Function DBDUIViewInterfaces.DisplayStandViewInterface.SetDragZone
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDisplayStandViewData                       layoutData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDisplayStandViewInterface::SetDragZone(const struct FDisplayStandViewData& layoutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.DisplayStandViewInterface.SetDragZone"));
		
		UDisplayStandViewInterface_SetDragZone_Params params {};
		params.layoutData = layoutData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplayStandViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplayStandViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.DisplayStandViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameCollapseBarViewInterface::StartEndGameScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario"));
		
		UEndGameCollapseBarViewInterface_StartEndGameScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8300
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionValue(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue"));
		
		UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSlowMode                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionMode(bool isSlowMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode"));
		
		UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Params params {};
		params.isSlowMode = isSlowMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7D70
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameCollapseBarViewInterface::InitEndGameScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario"));
		
		UEndGameCollapseBarViewInterface_InitEndGameScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndGameCollapseBarViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGameCollapseBarViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.EndGameCollapseBarViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF84B0
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHoldingFakeItem                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::SetFakeItem(bool isHoldingFakeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem"));
		
		UEquippedItemViewInterface_SetFakeItem_Params params {};
		params.isHoldingFakeItem = isHoldingFakeItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7FD0
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemBundleViewData                         itemBundleData                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::SetData(const struct FItemBundleViewData& itemBundleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData"));
		
		UEquippedItemViewInterface_SetData_Params params {};
		params.itemBundleData = itemBundleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::SetActiveState(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState"));
		
		UEquippedItemViewInterface_SetActiveState_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fullClear                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::ClearData(bool fullClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData"));
		
		UEquippedItemViewInterface_ClearData_Params params {};
		params.fullClear = fullClear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquippedItemViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquippedItemViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.EquippedItemViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF80C0
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPowerBundleViewData                        powerBundleData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquippedPowerViewInterface::SetData(const struct FPowerBundleViewData& powerBundleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData"));
		
		UEquippedPowerViewInterface_SetData_Params params {};
		params.powerBundleData = powerBundleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsCarrying                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedPowerViewInterface::SetCarryingMode(bool IsCarrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode"));
		
		UEquippedPowerViewInterface_SetCarryingMode_Params params {};
		params.IsCarrying = IsCarrying;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedPowerViewInterface::SetActiveState(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState"));
		
		UEquippedPowerViewInterface_SetActiveState_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1EF0
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEquippedPowerViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData"));
		
		UEquippedPowerViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquippedPowerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquippedPowerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.EquippedPowerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventEntryPopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventEntryPopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.EventEntryPopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventEntryPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventEntryPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.EventEntryPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8410
	 * 		Name   -> Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExampleViewInterface::SetExampleText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText"));
		
		UExampleViewInterface_SetExampleText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8390
	 * 		Name   -> Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExampleViewInterface::SetExampleProgressRatio(float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio"));
		
		UExampleViewInterface_SetExampleProgressRatio_Params params {};
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExampleViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExampleViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ExampleViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8770
	 * 		Name   -> Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkViewData                               PerkViewData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsViewInterface::ShowExternalPerk(const struct FPerkViewData& PerkViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk"));
		
		UExternalEffectsViewInterface_ShowExternalPerk_Params params {};
		params.PerkViewData = PerkViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8690
	 * 		Name   -> Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAddonViewData                              AddonViewData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsViewInterface::ShowExternalAddon(const struct FAddonViewData& AddonViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon"));
		
		UExternalEffectsViewInterface_ShowExternalAddon_Params params {};
		params.AddonViewData = AddonViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7CD0
	 * 		Name   -> Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalPerk
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsViewInterface::HideExternalPerk(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalPerk"));
		
		UExternalEffectsViewInterface_HideExternalPerk_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7C30
	 * 		Name   -> Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalAddon
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsViewInterface::HideExternalAddon(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalAddon"));
		
		UExternalEffectsViewInterface_HideExternalAddon_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExternalEffectsViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExternalEffectsViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ExternalEffectsViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFearMarketPopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFearMarketPopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.FearMarketPopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFearMarketPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFearMarketPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.FearMarketPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF380
	 * 		Name   -> Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameManualMenuState                               menuState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameManualViewInterface::SetCurrentManualMenuState(EGameManualMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState"));
		
		UGameManualViewInterface_SetCurrentManualMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF080
	 * 		Name   -> Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHelpCategoryData                           categoryData                                               (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHelpTopicData>                      topicsData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGameManualViewInterface::SetCategoryData(const struct FHelpCategoryData& categoryData, TArray<struct FHelpTopicData> topicsData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData"));
		
		UGameManualViewInterface_SetCategoryData_Params params {};
		params.categoryData = categoryData;
		params.topicsData = topicsData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEEF0
	 * 		Name   -> Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	EGameManualMenuState UGameManualViewInterface::GetCurrentManualMenuState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState"));
		
		UGameManualViewInterface_GetCurrentManualMenuState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameManualViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameManualViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.GameManualViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.GenericPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericTextInputPopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericTextInputPopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.GenericTextInputPopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericTextInputPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericTextInputPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.GenericTextInputPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHookCountViewInterface::SetHookCountVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility"));
		
		UHookCountViewInterface_SetHookCountVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF400
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            currentHookCount                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxHookCount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            initialMaxHookCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHookCountViewInterface::SetData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HookCountViewInterface.SetData"));
		
		UHookCountViewInterface_SetData_Params params {};
		params.currentHookCount = currentHookCount;
		params.maxHookCount = maxHookCount;
		params.initialMaxHookCount = initialMaxHookCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7D70
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHookCountViewInterface::InitWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget"));
		
		UHookCountViewInterface_InitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHookCountViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HookCountViewInterface.ClearData"));
		
		UHookCountViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHookCountViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHookCountViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.HookCountViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04000110
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusEffectAlertViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::ShowStatusEffectAlert(const struct FStatusEffectAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert"));
		
		UHudAlertViewInterface_ShowStatusEffectAlert_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04000060
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreAlertViewData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::ShowScoreAlert(const struct FScoreAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert"));
		
		UHudAlertViewInterface_ShowScoreAlert_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::SetScoreEventsVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility"));
		
		UHudAlertViewInterface_SetScoreEventsVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8300
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::FadeOut(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut"));
		
		UHudAlertViewInterface_FadeOut_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1EF0
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudAlertViewInterface::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn"));
		
		UHudAlertViewInterface_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudAlertViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudAlertViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.HudAlertViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2650
	 * 		Name   -> Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateResult
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsSuccessful                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudDirectionalMiniGameViewInterface::UpdateResult(int32_t Index, bool IsSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateResult"));
		
		UHudDirectionalMiniGameViewInterface_UpdateResult_Params params {};
		params.Index = Index;
		params.IsSuccessful = IsSuccessful;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateFinalResult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDirectionalMinigameResult                         finalResult                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudDirectionalMiniGameViewInterface::UpdateFinalResult(EDirectionalMinigameResult finalResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateFinalResult"));
		
		UHudDirectionalMiniGameViewInterface_UpdateFinalResult_Params params {};
		params.finalResult = finalResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFFB0
	 * 		Name   -> Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Show
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<EDirectionalInputKey>                       directions                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHudDirectionalMiniGameViewInterface::Show(TArray<EDirectionalInputKey> directions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Show"));
		
		UHudDirectionalMiniGameViewInterface_Show_Params params {};
		params.directions = directions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA960
	 * 		Name   -> Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Init
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            maxItems                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudDirectionalMiniGameViewInterface::Init(int32_t maxItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Init"));
		
		UHudDirectionalMiniGameViewInterface_Init_Params params {};
		params.maxItems = maxItems;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Hide
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudDirectionalMiniGameViewInterface::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Hide"));
		
		UHudDirectionalMiniGameViewInterface_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudDirectionalMiniGameViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudDirectionalMiniGameViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040002C0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.UpdateEventPendingProgress
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHudEventProgressionViewData                HudEventProgressionViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::UpdateEventPendingProgress(const struct FHudEventProgressionViewData& HudEventProgressionViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.UpdateEventPendingProgress"));
		
		UHudObjectivesViewInterface_UpdateEventPendingProgress_Params params {};
		params.HudEventProgressionViewData = HudEventProgressionViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04000220
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.UpdateEventBankedProgress
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHudEventProgressionViewData                HudEventProgressionViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::UpdateEventBankedProgress(const struct FHudEventProgressionViewData& HudEventProgressionViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.UpdateEventBankedProgress"));
		
		UHudObjectivesViewInterface_UpdateEventBankedProgress_Params params {};
		params.HudEventProgressionViewData = HudEventProgressionViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF8B0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHudObjectivesViewData                      hudObjectiveViewData                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::SetHudObjectiveData(const struct FHudObjectivesViewData& hudObjectiveViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData"));
		
		UHudObjectivesViewInterface_SetHudObjectiveData_Params params {};
		params.hudObjectiveViewData = hudObjectiveViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB8C0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::SetHookCountVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility"));
		
		UHudObjectivesViewInterface_SetHookCountVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF7B0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            currentHookCount                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxHookCount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            initialMaxHookCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::SetHookCountData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData"));
		
		UHudObjectivesViewInterface_SetHookCountData_Params params {};
		params.currentHookCount = currentHookCount;
		params.maxHookCount = maxHookCount;
		params.initialMaxHookCount = initialMaxHookCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEFC0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudObjectivesViewInterface::InitWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget"));
		
		UHudObjectivesViewInterface_InitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEF20
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitEventProgression
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHudEventProgressionViewData                HudEventProgressionViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::InitEventProgression(const struct FHudEventProgressionViewData& HudEventProgressionViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitEventProgression"));
		
		UHudObjectivesViewInterface_InitEventProgression_Params params {};
		params.HudEventProgressionViewData = HudEventProgressionViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAF30
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.EnableEventProgression
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::EnableEventProgression(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.EnableEventProgression"));
		
		UHudObjectivesViewInterface_EnableEventProgression_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEED0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudObjectivesViewInterface::ClearHookCountData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData"));
		
		UHudObjectivesViewInterface_ClearHookCountData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEEB0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudObjectivesViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData"));
		
		UHudObjectivesViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudObjectivesViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudObjectivesViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.HudObjectivesViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04000360
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              itemCharge                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionProgressViewInterface::UpdateInputProgress(float Progress, float itemCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress"));
		
		UInteractionProgressViewInterface_UpdateInputProgress_Params params {};
		params.Progress = Progress;
		params.itemCharge = itemCharge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF950
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInteractionProgressViewData                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractionProgressViewInterface::SetInputProgressPrompt(const struct FInteractionProgressViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt"));
		
		UInteractionProgressViewInterface_SetInputProgressPrompt_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInteractionProgressViewInterface::PlayHemorrhageAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation"));
		
		UInteractionProgressViewInterface_PlayHemorrhageAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInteractionProgressViewInterface::HideInputProgressPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt"));
		
		UInteractionProgressViewInterface_HideInputProgressPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionProgressViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionProgressViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.InteractionProgressViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEFE0
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionPromptsContainerViewInterface::RemovePrompt(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt"));
		
		UInteractionPromptsContainerViewInterface_RemovePrompt_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInteractionPromptsContainerViewInterface::RemoveAllPrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts"));
		
		UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFED00
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInteractionPromptViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractionPromptsContainerViewInterface::AddPrompt(const struct FInteractionPromptViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt"));
		
		UInteractionPromptsContainerViewInterface_AddPrompt_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionPromptsContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionPromptsContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.InteractionPromptsContainerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF500
	 * 		Name   -> Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemBundleViewData                         ItemBundleViewData                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UItemBundleViewInterface::SetData(const struct FItemBundleViewData& ItemBundleViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData"));
		
		UItemBundleViewInterface_SetData_Params params {};
		params.ItemBundleViewData = ItemBundleViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UItemBundleViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData"));
		
		UItemBundleViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemBundleViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemBundleViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ItemBundleViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF500
	 * 		Name   -> Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemBundleViewData                         itemBundleData                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UItemInteractionViewInterface::SetData(const struct FItemBundleViewData& itemBundleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData"));
		
		UItemInteractionViewInterface_SetData_Params params {};
		params.itemBundleData = itemBundleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UItemInteractionViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData"));
		
		UItemInteractionViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemInteractionViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemInteractionViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ItemInteractionViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF5F0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemViewData                               ItemViewData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UItemViewInterface::SetData(const struct FItemViewData& ItemViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ItemViewInterface.SetData"));
		
		UItemViewInterface_SetData_Params params {};
		params.ItemViewData = ItemViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UItemViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ItemViewInterface.ClearData"));
		
		UItemViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ItemViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF720
	 * 		Name   -> Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELeanState                                         leanState                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULeaningArrowsViewInterface::SetData(ELeanState leanState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData"));
		
		ULeaningArrowsViewInterface_SetData_Params params {};
		params.leanState = leanState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaningArrowsViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaningArrowsViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.LeaningArrowsViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.LightSensitivityViewInterface.StartFadeOut
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULightSensitivityViewInterface::StartFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.LightSensitivityViewInterface.StartFadeOut"));
		
		ULightSensitivityViewInterface_StartFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightSensitivityViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightSensitivityViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.LightSensitivityViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadoutMenuPopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutMenuPopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.LoadoutMenuPopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04000430
	 * 		Name   -> Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.UpdatePresetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    presetData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            selectedPreset                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupViewInterface::UpdatePresetData(TArray<int32_t> presetData, int32_t selectedPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.UpdatePresetData"));
		
		ULoadoutMenuPopupViewInterface_UpdatePresetData_Params params {};
		params.presetData = presetData;
		params.selectedPreset = selectedPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFEB0
	 * 		Name   -> Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectedInventoryItem
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    selectedIndex                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isUnequip                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupViewInterface::SetSelectedInventoryItem(TArray<int32_t> selectedIndex, bool isUnequip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectedInventoryItem"));
		
		ULoadoutMenuPopupViewInterface_SetSelectedInventoryItem_Params params {};
		params.selectedIndex = selectedIndex;
		params.isUnequip = isUnequip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFC10
	 * 		Name   -> Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectableCharacters
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTabWidgetData>                      selectableCharacters                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTabWidgetData                              selectedCharacterData                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            botIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupViewInterface::SetSelectableCharacters(TArray<struct FTabWidgetData> selectableCharacters, const struct FTabWidgetData& selectedCharacterData, int32_t botIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectableCharacters"));
		
		ULoadoutMenuPopupViewInterface_SetSelectableCharacters_Params params {};
		params.selectableCharacters = selectableCharacters;
		params.selectedCharacterData = selectedCharacterData;
		params.botIndex = botIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFB60
	 * 		Name   -> Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuSlotData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ULoadoutMenuPopupViewData*>           loadoutMenuSlotButtonData                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupViewInterface::SetLoadoutMenuSlotData(TArray<class ULoadoutMenuPopupViewData*> loadoutMenuSlotButtonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuSlotData"));
		
		ULoadoutMenuPopupViewInterface_SetLoadoutMenuSlotData_Params params {};
		params.loadoutMenuSlotButtonData = loadoutMenuSlotButtonData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFA30
	 * 		Name   -> Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuInventoryData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ULoadoutMenuPopupViewData*>           loadoutMenuSlotButtonData                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ELoadoutSlot                                       slotSelected                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isNextSlot                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupViewInterface::SetLoadoutMenuInventoryData(TArray<class ULoadoutMenuPopupViewData*> loadoutMenuSlotButtonData, ELoadoutSlot slotSelected, bool isNextSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuInventoryData"));
		
		ULoadoutMenuPopupViewInterface_SetLoadoutMenuInventoryData_Params params {};
		params.loadoutMenuSlotButtonData = loadoutMenuSlotButtonData;
		params.slotSelected = slotSelected;
		params.isNextSlot = isNextSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadoutMenuPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutMenuPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.LoadoutMenuPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040086E0
	 * 		Name   -> Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMatchResultViewData                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMatchResultViewInterface::UpdateWidget(const struct FMatchResultViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget"));
		
		UMatchResultViewInterface_UpdateWidget_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMatchResultViewInterface::PlayAnimationSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence"));
		
		UMatchResultViewInterface_PlayAnimationSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchResultViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchResultViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.MatchResultViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuLoadoutPartViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuLoadoutPartViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.MenuLoadoutPartViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuAddonViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuAddonViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.MenuAddonViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuItemViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuItemViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.MenuItemViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuOfferingViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuOfferingViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.MenuOfferingViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuPerkViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuPerkViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.MenuPerkViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuPowerViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuPowerViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.MenuPowerViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007C10
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOfferingViewData                           OfferingData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOfferingInteractionViewInterface::SetData(const struct FOfferingViewData& OfferingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData"));
		
		UOfferingInteractionViewInterface_SetData_Params params {};
		params.OfferingData = OfferingData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOfferingInteractionViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData"));
		
		UOfferingInteractionViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOfferingInteractionViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOfferingInteractionViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.OfferingInteractionViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007C10
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOfferingViewData                           OfferingViewData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOfferingViewInterface::SetData(const struct FOfferingViewData& OfferingViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OfferingViewInterface.SetData"));
		
		UOfferingViewInterface_SetData_Params params {};
		params.OfferingViewData = OfferingViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOfferingViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OfferingViewInterface.ClearData"));
		
		UOfferingViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOfferingViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOfferingViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.OfferingViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEB8C0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled"));
		
		UOnboardingMenuViewInterface_SetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetQuitGameButtonVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetQuitGameButtonVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetQuitGameButtonVisible"));
		
		UOnboardingMenuViewInterface_SetQuitGameButtonVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF2060
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOnboardingMenuState                               menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetOnboardingMenuState(EOnboardingMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState"));
		
		UOnboardingMenuViewInterface_SetOnboardingMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC4D0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ftue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetFirstTimeUserExperience(bool ftue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience"));
		
		UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Params params {};
		params.ftue = ftue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetChangeAccountInputSwitcherVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherVisible"));
		
		UOnboardingMenuViewInterface_SetChangeAccountInputSwitcherVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA800
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherPlayerNickname
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      playerNickname                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetChangeAccountInputSwitcherPlayerNickname(const class FString& playerNickname)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherPlayerNickname"));
		
		UOnboardingMenuViewInterface_SetChangeAccountInputSwitcherPlayerNickname_Params params {};
		params.playerNickname = playerNickname;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAF30
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetBackButtonVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetBackButtonVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetBackButtonVisible"));
		
		UOnboardingMenuViewInterface_SetBackButtonVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1CE0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UOnboardingMenuViewInterface::GetOnboardingTutorialInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface"));
		
		UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007A60
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UOnboardingMenuViewInterface::GetGameManualInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface"));
		
		UOnboardingMenuViewInterface_GetGameManualInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnboardingMenuViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingMenuViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.OnboardingMenuViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04008390
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOnboardingStepViewData>             before                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FOnboardingStepViewData>             after                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRewardWrapperViewData>              Rewards                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::UpdateProgress(TArray<struct FOnboardingStepViewData> before, TArray<struct FOnboardingStepViewData> after, TArray<struct FRewardWrapperViewData> Rewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress"));
		
		UOnboardingTutorialViewInterface_UpdateProgress_Params params {};
		params.before = before;
		params.after = after;
		params.Rewards = Rewards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7D70
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnboardingTutorialViewInterface::StopLoadingSpinner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner"));
		
		UOnboardingTutorialViewInterface_StopLoadingSpinner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled"));
		
		UOnboardingTutorialViewInterface_SetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040080A0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      completedStepId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isOnboardingEnabled                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetTutorialProgressionFeedbacks(const class FString& completedStepId, bool isOnboardingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks"));
		
		UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Params params {};
		params.completedStepId = completedStepId;
		params.isOnboardingEnabled = isOnboardingEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007FC0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOnboardingStepViewData>             Progress                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetProgress(TArray<struct FOnboardingStepViewData> Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress"));
		
		UOnboardingTutorialViewInterface_SetProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsKillSwitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetIsKillSwitch(bool IsKillSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch"));
		
		UOnboardingTutorialViewInterface_SetIsKillSwitch_Params params {};
		params.IsKillSwitch = IsKillSwitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetCanShowGoToMainMenuTutorialButton
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canShowGoToMainMenuTutorialButton                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetCanShowGoToMainMenuTutorialButton(bool canShowGoToMainMenuTutorialButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetCanShowGoToMainMenuTutorialButton"));
		
		UOnboardingTutorialViewInterface_SetCanShowGoToMainMenuTutorialButton_Params params {};
		params.canShowGoToMainMenuTutorialButton = canShowGoToMainMenuTutorialButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnboardingTutorialViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingTutorialViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.OnboardingTutorialViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007AA0
	 * 		Name   -> Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerksContainerViewInterface::GetPerkInterface(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface"));
		
		UPerksContainerViewInterface_GetPerkInterface_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerksContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerksContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PerksContainerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04008270
	 * 		Name   -> Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              cooldownValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsRechargeable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsRechargeableActive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkViewInterface::UpdatePerkCooldown(float cooldownValue, bool IsRechargeable, bool IsRechargeableActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown"));
		
		UPerkViewInterface_UpdatePerkCooldown_Params params {};
		params.cooldownValue = cooldownValue;
		params.IsRechargeable = IsRechargeable;
		params.IsRechargeableActive = IsRechargeableActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007CE0
	 * 		Name   -> Function DBDUIViewInterfaces.PerkViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkViewData                               PerkViewData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPerkViewInterface::SetData(const struct FPerkViewData& PerkViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PerkViewInterface.SetData"));
		
		UPerkViewInterface_SetData_Params params {};
		params.PerkViewData = PerkViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.PerkViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPerkViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PerkViewInterface.ClearData"));
		
		UPerkViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerkViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PerkViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007E60
	 * 		Name   -> Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPingStatus
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EConnectionQuality                                 localPing                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPingStatusViewInterface::SetLocalPingStatus(EConnectionQuality localPing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPingStatus"));
		
		UPingStatusViewInterface_SetLocalPingStatus_Params params {};
		params.localPing = localPing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007DD0
	 * 		Name   -> Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPacketLossStatus
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EConnectionQuality                                 localPacketLoss                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPingStatusViewInterface::SetLocalPacketLossStatus(EConnectionQuality localPacketLoss)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPacketLossStatus"));
		
		UPingStatusViewInterface_SetLocalPacketLossStatus_Params params {};
		params.localPacketLoss = localPacketLoss;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFF720
	 * 		Name   -> Function DBDUIViewInterfaces.PingStatusViewInterface.SetKillerConnectionQualityStatus
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EConnectionQuality                                 killerConnectionQuality                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPingStatusViewInterface::SetKillerConnectionQualityStatus(EConnectionQuality killerConnectionQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PingStatusViewInterface.SetKillerConnectionQualityStatus"));
		
		UPingStatusViewInterface_SetKillerConnectionQualityStatus_Params params {};
		params.killerConnectionQuality = killerConnectionQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPingStatusViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPingStatusViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PingStatusViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040085E0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.UpdateWallet
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECurrencyType                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            newBalance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            previousBalance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerProfileViewInterface::UpdateWallet(ECurrencyType Type, int32_t newBalance, int32_t previousBalance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.UpdateWallet"));
		
		UPlayerProfileViewInterface_UpdateWallet_Params params {};
		params.Type = Type;
		params.newBalance = newBalance;
		params.previousBalance = previousBalance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.ShowUI
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProfileViewInterface::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.ShowUI"));
		
		UPlayerProfileViewInterface_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04008190
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetWallet
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FCurrencyLabelViewData>              walletData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerProfileViewInterface::SetWallet(TArray<struct FCurrencyLabelViewData> walletData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetWallet"));
		
		UPlayerProfileViewInterface_SetWallet_Params params {};
		params.walletData = walletData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007EF0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerName
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        playerNameText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerProfileViewInterface::SetPlayerName(const class FText& playerNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerName"));
		
		UPlayerProfileViewInterface_SetPlayerName_Params params {};
		params.playerNameText = playerNameText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7E0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideWallet
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProfileViewInterface::HideWallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideWallet"));
		
		UPlayerProfileViewInterface_HideWallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideUI
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProfileViewInterface::HideUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideUI"));
		
		UPlayerProfileViewInterface_HideUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1EF0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerRank
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProfileViewInterface::HidePlayerRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerRank"));
		
		UPlayerProfileViewInterface_HidePlayerRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007B50
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerName
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProfileViewInterface::HidePlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerName"));
		
		UPlayerProfileViewInterface_HidePlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7D70
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerLevel
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProfileViewInterface::HidePlayerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerLevel"));
		
		UPlayerProfileViewInterface_HidePlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040079A0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerProfileViewInterface.FullUpdateCurrency
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCurrencyLabelViewData                      ViewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerProfileViewInterface::FullUpdateCurrency(const struct FCurrencyLabelViewData& ViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerProfileViewInterface.FullUpdateCurrency"));
		
		UPlayerProfileViewInterface_FullUpdateCurrency_Params params {};
		params.ViewData = ViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerProfileViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProfileViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PlayerProfileViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007AA0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusesContainerViewInterface::GetPlayerStatusInterface(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface"));
		
		UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerStatusesContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStatusesContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PlayerStatusesContainerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007B70
	 * 		Name   -> Function DBDUIViewInterfaces.KillerStatusData.IsEqual
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UKillerStatusData*                           Other                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKillerStatusData::IsEqual(class UKillerStatusData* Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.KillerStatusData.IsEqual"));
		
		UKillerStatusData_IsEqual_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.KillerStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoctorStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoctorStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.DoctorStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExecutionerStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecutionerStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ExecutionerStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTwinsStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinsStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TwinsStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGhostfaceStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGhostfaceStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.GhostfaceStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNightmareStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNightmareStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.NightmareStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PigStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlagueStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlagueStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PlagueStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTricksterStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTricksterStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TricksterStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24StatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24StatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.K24StatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK25StatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK25StatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.K25StatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK26StatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK26StatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.K26StatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTheOnryoStatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheOnryoStatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TheOnryoStatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK28StatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28StatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.K28StatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29StatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29StatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.K29StatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK30StatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK30StatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.K30StatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31StatusData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31StatusData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.K31StatusData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400EAD0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorSpecificPingIcon
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EConnectionQuality                                 connectionQuality                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::UpdateSurvivorSpecificPingIcon(EConnectionQuality connectionQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorSpecificPingIcon"));
		
		UPlayerStatusViewInterface_UpdateSurvivorSpecificPingIcon_Params params {};
		params.connectionQuality = connectionQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorActivityProgress
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::UpdateSurvivorActivityProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorActivityProgress"));
		
		UPlayerStatusViewInterface_UpdateSurvivorActivityProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::TriggerAfflictionHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit"));
		
		UPlayerStatusViewInterface_TriggerAfflictionHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.ShowSurvivorActivity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldDisplayProgress                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::ShowSurvivorActivity(bool ShouldDisplayProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.ShowSurvivorActivity"));
		
		UPlayerStatusViewInterface_ShowSurvivorActivity_Params params {};
		params.ShouldDisplayProgress = ShouldDisplayProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E2F0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsDeepWound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetTimerProgress(float value, bool IsDeepWound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress"));
		
		UPlayerStatusViewInterface_SetTimerProgress_Params params {};
		params.value = value;
		params.IsDeepWound = IsDeepWound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetPlayerNameVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility"));
		
		UPlayerStatusViewInterface_SetPlayerNameVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E0D0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                killerTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetKiller(const struct FGameplayTag& killerTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller"));
		
		UPlayerStatusViewInterface_SetKiller_Params params {};
		params.killerTag = killerTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400DD50
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetData(const struct FPlayerStatusViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData"));
		
		UPlayerStatusViewInterface_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400DBA0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetCampProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsLocalPlayerAKiller                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetCampProgress(float value, bool IsLocalPlayerAKiller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetCampProgress"));
		
		UPlayerStatusViewInterface_SetCampProgress_Params params {};
		params.value = value;
		params.IsLocalPlayerAKiller = IsLocalPlayerAKiller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007B50
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::PlayTimerAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation"));
		
		UPlayerStatusViewInterface_PlayTimerAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7D70
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::PlayHookEscapeFailedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation"));
		
		UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.HideSurvivorActivity
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::HideSurvivorActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.HideSurvivorActivity"));
		
		UPlayerStatusViewInterface_HideSurvivorActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.EnableChasesMode
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isChased                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::EnableChasesMode(bool isChased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.EnableChasesMode"));
		
		UPlayerStatusViewInterface_EnableChasesMode_Params params {};
		params.isChased = isChased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEEB0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData"));
		
		UPlayerStatusViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerStatusViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStatusViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PlayerStatusViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400DE20
	 * 		Name   -> Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPowerBundleViewData                        PowerBundleViewData                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPowerBundleViewInterface::SetData(const struct FPowerBundleViewData& PowerBundleViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData"));
		
		UPowerBundleViewInterface_SetData_Params params {};
		params.PowerBundleViewData = PowerBundleViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPowerBundleViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData"));
		
		UPowerBundleViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerBundleViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerBundleViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PowerBundleViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400DFA0
	 * 		Name   -> Function DBDUIViewInterfaces.PowerViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPowerViewData                              PowerViewData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPowerViewInterface::SetData(const struct FPowerViewData& PowerViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PowerViewInterface.SetData"));
		
		UPowerViewInterface_SetData_Params params {};
		params.PowerViewData = PowerViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.PowerViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPowerViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.PowerViewInterface.ClearData"));
		
		UPowerViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.PowerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E560
	 * 		Name   -> Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScreenIndicatorViewData                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScreenIndicatorsContainerViewInterface::ShowDirectionIndicator(const struct FScreenIndicatorViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator"));
		
		UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA800
	 * 		Name   -> Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScreenIndicatorsContainerViewInterface::RemoveDirectionIndicator(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator"));
		
		UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreenIndicatorsContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenIndicatorsContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400EA40
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::UpdateProgress(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress"));
		
		USkillCheckViewInterface_UpdateProgress_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E970
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::UpdatePositionOffset(int32_t X, int32_t Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset"));
		
		USkillCheckViewInterface_UpdatePositionOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBonus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::ShowSkillCheckSuccess(bool IsBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess"));
		
		USkillCheckViewInterface_ShowSkillCheckSuccess_Params params {};
		params.IsBonus = IsBonus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF1EF0
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USkillCheckViewInterface::ShowSkillCheckFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail"));
		
		USkillCheckViewInterface_ShowSkillCheckFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E700
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSkillCheckViewData                         skillCheckData                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::ShowSkillCheck(const struct FSkillCheckViewData& skillCheckData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck"));
		
		USkillCheckViewInterface_ShowSkillCheck_Params params {};
		params.skillCheckData = skillCheckData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFEED0
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USkillCheckViewInterface::HideSkillCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck"));
		
		USkillCheckViewInterface_HideSkillCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF8390
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::ApplyScaleFactor(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor"));
		
		USkillCheckViewInterface_ApplyScaleFactor_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillCheckViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.SkillCheckViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA800
	 * 		Name   -> Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      playerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectateBarViewInterface::SetSpectatedName(const class FString& playerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName"));
		
		USpectateBarViewInterface_SetSpectatedName_Params params {};
		params.playerName = playerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA30
	 * 		Name   -> Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectateBarViewInterface::SetSpectateBarVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility"));
		
		USpectateBarViewInterface_SetSpectateBarVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEC440
	 * 		Name   -> Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectateBarViewInterface::SetArrowsVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility"));
		
		USpectateBarViewInterface_SetArrowsVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectateBarViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectateBarViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.SpectateBarViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E820
	 * 		Name   -> Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStartSequenceViewData                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStartSequenceViewInterface::ShowStartSequence(const struct FStartSequenceViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence"));
		
		UStartSequenceViewInterface_ShowStartSequence_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStartSequenceViewInterface::HideStartSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence"));
		
		UStartSequenceViewInterface_HideStartSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400DAD0
	 * 		Name   -> Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UStartSequenceViewInterface::GetIsStartSequenceVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible"));
		
		UStartSequenceViewInterface_GetIsStartSequenceVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartSequenceViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartSequenceViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.StartSequenceViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E4B0
	 * 		Name   -> Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusEffectViewData                       statusEffectData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStatusEffectViewInterface::ShowActiveStatusEffect(const struct FStatusEffectViewData& statusEffectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect"));
		
		UStatusEffectViewInterface_ShowActiveStatusEffect_Params params {};
		params.statusEffectData = statusEffectData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FF7C30
	 * 		Name   -> Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        statusEffectID                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatusEffectViewInterface::RemoveExistingStatusEffect(const class FName& statusEffectID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect"));
		
		UStatusEffectViewInterface_RemoveExistingStatusEffect_Params params {};
		params.statusEffectID = statusEffectID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.StatusEffectViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007EF0
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        subtitleText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::ShowSubtitle(const class FText& subtitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle"));
		
		USubtitlesViewInterface_ShowSubtitle_Params params {};
		params.subtitleText = subtitleText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E270
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESubtitlesSize                                     Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::SetSubtitlesSize(ESubtitlesSize Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize"));
		
		USubtitlesViewInterface_SetSubtitlesSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E1F0
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESubtitlesPosition                                 position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::SetSubtitlesPosition(ESubtitlesPosition position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition"));
		
		USubtitlesViewInterface_SetSubtitlesPosition_Params params {};
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E170
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESubtitlesBackgroundOpacity                        Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity"));
		
		USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400DC80
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.SetConstrainAspectRatioChanged
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isConstrained                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::SetConstrainAspectRatioChanged(bool isConstrained, float AspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SubtitlesViewInterface.SetConstrainAspectRatioChanged"));
		
		USubtitlesViewInterface_SetConstrainAspectRatioChanged_Params params {};
		params.isConstrained = isConstrained;
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007B50
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USubtitlesViewInterface::HideSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles"));
		
		USubtitlesViewInterface_HideSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitlesViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitlesViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.SubtitlesViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E8E0
	 * 		Name   -> Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTemplateViewData                           templateData                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTemplateViewInterface::TemplateExampleFunction(const struct FTemplateViewData& templateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction"));
		
		UTemplateViewInterface_TemplateExampleFunction_Params params {};
		params.templateData = templateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemplateViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TemplateViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400EB60
	 * 		Name   -> Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETestBuildType                                     testBuildType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestBuildFlagPosition                             testBuildFlagPosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestBuildFlagViewInterface::UpdateWidget(ETestBuildType testBuildType, ETestBuildFlagPosition testBuildFlagPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget"));
		
		UTestBuildFlagViewInterface_UpdateWidget_Params params {};
		params.testBuildType = testBuildType;
		params.testBuildFlagPosition = testBuildFlagPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestBuildFlagViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestBuildFlagViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TestBuildFlagViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E3D0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHudComponent                                      componentId                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialHighlightViewInterface::SetTutorialHighlight(bool Show, EHudComponent componentId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight"));
		
		UTutorialHighlightViewInterface_SetTutorialHighlight_Params params {};
		params.Show = Show;
		params.componentId = componentId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialHighlightViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialHighlightViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TutorialHighlightViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E620
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNotifTutorialPopupViewData                 notifData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTutorialMysteryNoteViewInterface::ShowMysteryNote(const struct FNotifTutorialPopupViewData& notifData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote"));
		
		UTutorialMysteryNoteViewInterface_ShowMysteryNote_Params params {};
		params.notifData = notifData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEA7C0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialMysteryNoteViewInterface::HideMysteryNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote"));
		
		UTutorialMysteryNoteViewInterface_HideMysteryNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialMysteryNoteViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialMysteryNoteViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TutorialMysteryNoteViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400DB00
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialObjectivesViewInterface::RemoveTutorialObjective(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective"));
		
		UTutorialObjectivesViewInterface_RemoveTutorialObjective_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAA10
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialObjectivesViewInterface::RemoveAllTutorialObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives"));
		
		UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400D9E0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               removeAfterCompletion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialObjectivesViewInterface::CompleteTutorialObjective(const class FName& ID, bool removeAfterCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective"));
		
		UTutorialObjectivesViewInterface_CompleteTutorialObjective_Params params {};
		params.ID = ID;
		params.removeAfterCompletion = removeAfterCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400D8B0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTutorialObjectivesViewData                 InteractionPromptViewData                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTutorialObjectivesViewInterface::AddTutorialObjective(const class FName& ID, const struct FTutorialObjectivesViewData& InteractionPromptViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective"));
		
		UTutorialObjectivesViewInterface_AddTutorialObjective_Params params {};
		params.ID = ID;
		params.InteractionPromptViewData = InteractionPromptViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialObjectivesViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialObjectivesViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TutorialObjectivesViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400E620
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNotifTutorialPopupViewData                 notifTutoData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTutorialPopupViewInterface::ShowNotifTutorialPopup(const struct FNotifTutorialPopupViewData& notifTutoData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup"));
		
		UTutorialPopupViewInterface_ShowNotifTutorialPopup_Params params {};
		params.notifTutoData = notifTutoData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FEAB90
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playSoundEffect                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialPopupViewInterface::HideTutorialPopup(bool playSoundEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup"));
		
		UTutorialPopupViewInterface_HideTutorialPopup_Params params {};
		params.playSoundEffect = playSoundEffect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.TutorialPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400F690
	 * 		Name   -> Function DBDUIViewInterfaces.UIUtilities.ConvertArchiveCurrentAndMaxProgressionInPercentage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            outCurrentProgression                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            outMaxProgression                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIUtilities::STATIC_ConvertArchiveCurrentAndMaxProgressionInPercentage(int32_t* outCurrentProgression, int32_t* outMaxProgression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.UIUtilities.ConvertArchiveCurrentAndMaxProgressionInPercentage"));
		
		UUIUtilities_ConvertArchiveCurrentAndMaxProgressionInPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outCurrentProgression != nullptr)
			*outCurrentProgression = params.outCurrentProgression;
		if (outMaxProgression != nullptr)
			*outMaxProgression = params.outMaxProgression;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.UIUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnlockPersonalPerksPopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnlockPersonalPerksPopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.UnlockPersonalPerksPopupViewData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnlockPersonalPerksPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnlockPersonalPerksPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.UnlockPersonalPerksPopupViewInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0400F770
	 * 		Name   -> Function DBDUIViewInterfaces.WatermarkViewInterface.SetSteamValuesText
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SteamName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWatermarkViewInterface::SetSteamValuesText(const class FString& SteamName, const class FString& SteamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIViewInterfaces.WatermarkViewInterface.SetSteamValuesText"));
		
		UWatermarkViewInterface_SetSteamValuesText_Params params {};
		params.SteamName = SteamName;
		params.SteamId = SteamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWatermarkViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWatermarkViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIViewInterfaces.WatermarkViewInterface"));
		return ptr;
	}

}


