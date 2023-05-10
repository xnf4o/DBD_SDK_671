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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.SubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBE40
	 * 		Name   -> Function DBDUIPresenters.ArchiveCompendiumSubPresenter.OnTomeSelected
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      tomeId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveCompendiumSubPresenter::OnTomeSelected(const class FString& tomeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveCompendiumSubPresenter.OnTomeSelected"));
		
		UArchiveCompendiumSubPresenter_OnTomeSelected_Params params {};
		params.tomeId = tomeId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveCompendiumSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveCompendiumSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveCompendiumSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBFE0
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.UpdateTomeLevels
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveQuestMapSubPresenter::UpdateTomeLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.UpdateTomeLevels"));
		
		UArchiveQuestMapSubPresenter_UpdateTomeLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBE20
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeMapCreated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveQuestMapSubPresenter::OnTomeMapCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeMapCreated"));
		
		UArchiveQuestMapSubPresenter_OnTomeMapCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBE00
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeLevelRewardAnimationDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveQuestMapSubPresenter::OnTomeLevelRewardAnimationDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeLevelRewardAnimationDone"));
		
		UArchiveQuestMapSubPresenter_OnTomeLevelRewardAnimationDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB8C0
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeUnhovered
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveQuestMapSubPresenter::OnQuestNodeUnhovered(EPlayerRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeUnhovered"));
		
		UArchiveQuestMapSubPresenter_OnQuestNodeUnhovered_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB840
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeHovered
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveQuestMapSubPresenter::OnQuestNodeHovered(EPlayerRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeHovered"));
		
		UArchiveQuestMapSubPresenter_OnQuestNodeHovered_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB560
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnNodeSelected
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class FName                                        nodeId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveQuestMapSubPresenter::OnNodeSelected(const class FName& nodeId, EPlayerRole Role, const struct FVector2D& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnNodeSelected"));
		
		UArchiveQuestMapSubPresenter_OnNodeSelected_Params params {};
		params.nodeId = nodeId;
		params.Role = Role;
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB070
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnLevelSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            levelIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveQuestMapSubPresenter::OnLevelSelected(int32_t levelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnLevelSelected"));
		
		UArchiveQuestMapSubPresenter_OnLevelSelected_Params params {};
		params.levelIndex = levelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA450
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.NavigateToNextLevelAfterUnlock
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveQuestMapSubPresenter::NavigateToNextLevelAfterUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.NavigateToNextLevelAfterUnlock"));
		
		UArchiveQuestMapSubPresenter_NavigateToNextLevelAfterUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA3D0
	 * 		Name   -> Function DBDUIPresenters.ArchiveQuestMapSubPresenter.GetCurrentLevel
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveQuestMapSubPresenter::GetCurrentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveQuestMapSubPresenter.GetCurrentLevel"));
		
		UArchiveQuestMapSubPresenter_GetCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveQuestMapSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveQuestMapSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveQuestMapSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBB40
	 * 		Name   -> Function DBDUIPresenters.ArchiveEditorSubPresenter.OnSaveTomeGraph
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FArchiveNodeGraphViewData>           nodeList                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArchiveEditorSubPresenter::OnSaveTomeGraph(TArray<struct FArchiveNodeGraphViewData> nodeList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveEditorSubPresenter.OnSaveTomeGraph"));
		
		UArchiveEditorSubPresenter_OnSaveTomeGraph_Params params {};
		params.nodeList = nodeList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveEditorSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveEditorSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveEditorSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.UIComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1A60
	 * 		Name   -> Function DBDUIPresenters.Presenter.ShouldPresent
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool UPresenter::ShouldPresent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.Presenter.ShouldPresent"));
		
		UPresenter_ShouldPresent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0460
	 * 		Name   -> Function DBDUIPresenters.Presenter.OnContextSectionChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EContext                                           Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPresenter::OnContextSectionChanged(EContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.Presenter.OnContextSectionChanged"));
		
		UPresenter_OnContextSectionChanged_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE03C0
	 * 		Name   -> Function DBDUIPresenters.Presenter.IsPlayerStateReady
	 * 		Flags  -> (Final, Native, Protected, Const)
	 */
	bool UPresenter::IsPlayerStateReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.Presenter.IsPlayerStateReady"));
		
		UPresenter_IsPlayerStateReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0300
	 * 		Name   -> Function DBDUIPresenters.Presenter.IsGameStateReady
	 * 		Flags  -> (Final, Native, Protected, Const)
	 */
	bool UPresenter::IsGameStateReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.Presenter.IsGameStateReady"));
		
		UPresenter_IsGameStateReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE02D0
	 * 		Name   -> Function DBDUIPresenters.Presenter.IsContextReady
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool UPresenter::IsContextReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.Presenter.IsContextReady"));
		
		UPresenter_IsContextReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.Presenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBDC0
	 * 		Name   -> Function DBDUIPresenters.ArchiveImageViewerPresenter.OnTextVisibilityChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveImageViewerPresenter::OnTextVisibilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveImageViewerPresenter.OnTextVisibilityChanged"));
		
		UArchiveImageViewerPresenter_OnTextVisibilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB010
	 * 		Name   -> Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverPlayed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveImageViewerPresenter::OnImageViewerVoiceOverPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverPlayed"));
		
		UArchiveImageViewerPresenter_OnImageViewerVoiceOverPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAEF0
	 * 		Name   -> Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverAutoplay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               autoplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveImageViewerPresenter::OnImageViewerVoiceOverAutoplay(bool autoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverAutoplay"));
		
		UArchiveImageViewerPresenter_OnImageViewerVoiceOverAutoplay_Params params {};
		params.autoplay = autoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA790
	 * 		Name   -> Function DBDUIPresenters.ArchiveImageViewerPresenter.OnBackAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveImageViewerPresenter::OnBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveImageViewerPresenter.OnBackAction"));
		
		UArchiveImageViewerPresenter_OnBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA610
	 * 		Name   -> Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverPlayed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Playing                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveImageViewerPresenter::OnArchivesVoiceOverPlayed(bool Playing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverPlayed"));
		
		UArchiveImageViewerPresenter_OnArchivesVoiceOverPlayed_Params params {};
		params.Playing = Playing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA580
	 * 		Name   -> Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverAutoplay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               autoplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveImageViewerPresenter::OnArchivesVoiceOverAutoplay(bool autoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverAutoplay"));
		
		UArchiveImageViewerPresenter_OnArchivesVoiceOverAutoplay_Params params {};
		params.autoplay = autoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA2B0
	 * 		Name   -> Function DBDUIPresenters.ArchiveImageViewerPresenter.CanShowFullScreenMode
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool UArchiveImageViewerPresenter::CanShowFullScreenMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveImageViewerPresenter.CanShowFullScreenMode"));
		
		UArchiveImageViewerPresenter_CanShowFullScreenMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveImageViewerPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveImageViewerPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveImageViewerPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBEE0
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnVignetteSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      VignetteId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalSubPresenter::OnVignetteSelected(const class FString& VignetteId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnVignetteSelected"));
		
		UArchiveJournalSubPresenter_OnVignetteSelected_Params params {};
		params.VignetteId = VignetteId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBCF0
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnShowImageViewer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveJournalSubPresenter::OnShowImageViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnShowImageViewer"));
		
		UArchiveJournalSubPresenter_OnShowImageViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB680
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnPlayCinematic
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalSubPresenter::OnPlayCinematic(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnPlayCinematic"));
		
		UArchiveJournalSubPresenter_OnPlayCinematic_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB030
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverPlayed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveJournalSubPresenter::OnImageViewerVoiceOverPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverPlayed"));
		
		UArchiveJournalSubPresenter_OnImageViewerVoiceOverPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAF80
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverAutoplay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               autoplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalSubPresenter::OnImageViewerVoiceOverAutoplay(bool autoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverAutoplay"));
		
		UArchiveJournalSubPresenter_OnImageViewerVoiceOverAutoplay_Params params {};
		params.autoplay = autoplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAD50
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnEntrySelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            entryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalSubPresenter::OnEntrySelected(int32_t entryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnEntrySelected"));
		
		UArchiveJournalSubPresenter_OnEntrySelected_Params params {};
		params.entryIndex = entryIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAA70
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnClickPlayButton
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            entryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalSubPresenter::OnClickPlayButton(int32_t entryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnClickPlayButton"));
		
		UArchiveJournalSubPresenter_OnClickPlayButton_Params params {};
		params.entryIndex = entryIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA6A0
	 * 		Name   -> Function DBDUIPresenters.ArchiveJournalSubPresenter.OnAutoplayChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               autoplayActive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            entryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveJournalSubPresenter::OnAutoplayChanged(bool autoplayActive, int32_t entryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveJournalSubPresenter.OnAutoplayChanged"));
		
		UArchiveJournalSubPresenter_OnAutoplayChanged_Params params {};
		params.autoplayActive = autoplayActive;
		params.entryIndex = entryIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveJournalSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveJournalSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveJournalSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBDA0
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnSlotSelectorClosed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveMenuPresenter::OnSlotSelectorClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnSlotSelectorClosed"));
		
		UArchiveMenuPresenter_OnSlotSelectorClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBD10
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnShowImageViewer
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               voiceOverIsPlaying                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuPresenter::OnShowImageViewer(bool voiceOverIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnShowImageViewer"));
		
		UArchiveMenuPresenter_OnShowImageViewer_Params params {};
		params.voiceOverIsPlaying = voiceOverIsPlaying;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB100
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EArchiveMenuState                                  menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               alreadySelected                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuPresenter::OnMenuTabSelected(EArchiveMenuState menuState, bool alreadySelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnMenuTabSelected"));
		
		UArchiveMenuPresenter_OnMenuTabSelected_Params params {};
		params.menuState = menuState;
		params.alreadySelected = alreadySelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB050
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnInfoClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveMenuPresenter::OnInfoClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnInfoClicked"));
		
		UArchiveMenuPresenter_OnInfoClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAED0
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnHideImageViewer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveMenuPresenter::OnHideImageViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnHideImageViewer"));
		
		UArchiveMenuPresenter_OnHideImageViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA930
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderSlotSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuPresenter::OnChallengeReminderSlotSelected(EPlayerRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderSlotSelected"));
		
		UArchiveMenuPresenter_OnChallengeReminderSlotSelected_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA8B0
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EPlayerRole                                        Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveMenuPresenter::OnChallengeReminderClicked(EPlayerRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderClicked"));
		
		UArchiveMenuPresenter_OnChallengeReminderClicked_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA7B0
	 * 		Name   -> Function DBDUIPresenters.ArchiveMenuPresenter.OnBackAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveMenuPresenter::OnBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveMenuPresenter.OnBackAction"));
		
		UArchiveMenuPresenter_OnBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveMenuPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveMenuPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveMenuPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAC50
	 * 		Name   -> Function DBDUIPresenters.BasePopupPresenter.OnContextLeave
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EContext                                           Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBasePopupPresenter::OnContextLeave(EContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.BasePopupPresenter.OnContextLeave"));
		
		UBasePopupPresenter_OnContextLeave_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDABD0
	 * 		Name   -> Function DBDUIPresenters.BasePopupPresenter.OnContextEnter
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EContext                                           Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBasePopupPresenter::OnContextEnter(EContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.BasePopupPresenter.OnContextEnter"));
		
		UBasePopupPresenter_OnContextEnter_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA3F0
	 * 		Name   -> Function DBDUIPresenters.BasePopupPresenter.IsContextEntered
	 * 		Flags  -> (Final, Native, Protected, Const)
	 */
	bool UBasePopupPresenter::IsContextEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.BasePopupPresenter.IsContextEntered"));
		
		UBasePopupPresenter_IsContextEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.BasePopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA770
	 * 		Name   -> Function DBDUIPresenters.GenericPopupPresenter.OnBack
	 * 		Flags  -> (Native, Protected)
	 */
	void UGenericPopupPresenter::OnBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.GenericPopupPresenter.OnBack"));
		
		UGenericPopupPresenter_OnBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA4F0
	 * 		Name   -> Function DBDUIPresenters.GenericPopupPresenter.OnAppResumed
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               isAppResumed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPopupPresenter::OnAppResumed(bool isAppResumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.GenericPopupPresenter.OnAppResumed"));
		
		UGenericPopupPresenter_OnAppResumed_Params params {};
		params.isAppResumed = isAppResumed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA470
	 * 		Name   -> Function DBDUIPresenters.GenericPopupPresenter.OnAction
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		EPopupButtonType                                   popupAction                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPopupPresenter::OnAction(EPopupButtonType popupAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.GenericPopupPresenter.OnAction"));
		
		UGenericPopupPresenter_OnAction_Params params {};
		params.popupAction = popupAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.GenericPopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchivePassPurchasePopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchivePassPurchasePopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchivePassPurchasePopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchivePresenterHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchivePresenterHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchivePresenterHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBDE0
	 * 		Name   -> Function DBDUIPresenters.ArchiveRiftSubPresenter.OnToggleOutfitDisplay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveRiftSubPresenter::OnToggleOutfitDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveRiftSubPresenter.OnToggleOutfitDisplay"));
		
		UArchiveRiftSubPresenter_OnToggleOutfitDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBA80
	 * 		Name   -> Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardItemClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftSubPresenter::OnRewardItemClicked(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardItemClicked"));
		
		UArchiveRiftSubPresenter_OnRewardItemClicked_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBA00
	 * 		Name   -> Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardCurrencyClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECurrencyType                                      CurrencyType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveRiftSubPresenter::OnRewardCurrencyClicked(ECurrencyType CurrencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardCurrencyClicked"));
		
		UArchiveRiftSubPresenter_OnRewardCurrencyClicked_Params params {};
		params.CurrencyType = CurrencyType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAB20
	 * 		Name   -> Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchaseTiers
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveRiftSubPresenter::OnClickPurchaseTiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchaseTiers"));
		
		UArchiveRiftSubPresenter_OnClickPurchaseTiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAB00
	 * 		Name   -> Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchasePremiumPass
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveRiftSubPresenter::OnClickPurchasePremiumPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchasePremiumPass"));
		
		UArchiveRiftSubPresenter_OnClickPurchasePremiumPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA7F0
	 * 		Name   -> Function DBDUIPresenters.ArchiveRiftSubPresenter.OnBonusTierTooltipShown
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveRiftSubPresenter::OnBonusTierTooltipShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveRiftSubPresenter.OnBonusTierTooltipShown"));
		
		UArchiveRiftSubPresenter_OnBonusTierTooltipShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveRiftSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveRiftSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveRiftSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDAB40
	 * 		Name   -> Function DBDUIPresenters.ArchiveTierPurchasePopupPresenter.OnConfirmPurchase
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            tiersToPurchaseNumber                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTierPurchasePopupPresenter::OnConfirmPurchase(int32_t tiersToPurchaseNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveTierPurchasePopupPresenter.OnConfirmPurchase"));
		
		UArchiveTierPurchasePopupPresenter_OnConfirmPurchase_Params params {};
		params.tiersToPurchaseNumber = tiersToPurchaseNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveTierPurchasePopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveTierPurchasePopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveTierPurchasePopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB1D0
	 * 		Name   -> Function DBDUIPresenters.ArchiveTomeSubPresenter.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EArchiveTomeMenuState                              menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArchiveTomeSubPresenter::OnMenuTabSelected(EArchiveTomeMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveTomeSubPresenter.OnMenuTabSelected"));
		
		UArchiveTomeSubPresenter_OnMenuTabSelected_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIPresenters.ArchiveTomeSubPresenter.OnEditorWidgetSwitchComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UArchiveTomeSubPresenter::OnEditorWidgetSwitchComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ArchiveTomeSubPresenter.OnEditorWidgetSwitchComplete"));
		
		UArchiveTomeSubPresenter_OnEditorWidgetSwitchComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchiveTomeSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchiveTomeSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ArchiveTomeSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1350
	 * 		Name   -> Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudPresenter::OnPawnUnpossessed(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed"));
		
		UHudPresenter_OnPawnUnpossessed_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE12C0
	 * 		Name   -> Function DBDUIPresenters.HudPresenter.OnPawnPossessed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudPresenter::OnPawnPossessed(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPresenter.OnPawnPossessed"));
		
		UHudPresenter_OnPawnPossessed_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1050
	 * 		Name   -> Function DBDUIPresenters.HudPresenter.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudPresenter::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPresenter.OnLocallyObservedChanged"));
		
		UHudPresenter_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0390
	 * 		Name   -> Function DBDUIPresenters.HudPresenter.IsPendingPawnReady
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool UHudPresenter::IsPendingPawnReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPresenter.IsPendingPawnReady"));
		
		UHudPresenter_IsPendingPawnReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0330
	 * 		Name   -> Function DBDUIPresenters.HudPresenter.IsHudReady
	 * 		Flags  -> (Final, Native, Private)
	 */
	bool UHudPresenter::IsHudReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPresenter.IsHudReady"));
		
		UHudPresenter_IsHudReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBFC0
	 * 		Name   -> Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetProgressingDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UChallengeTrackerPresenter::OnWidgetProgressingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetProgressingDone"));
		
		UChallengeTrackerPresenter_OnWidgetProgressingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBFA0
	 * 		Name   -> Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetOpeningDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UChallengeTrackerPresenter::OnWidgetOpeningDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetOpeningDone"));
		
		UChallengeTrackerPresenter_OnWidgetOpeningDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBF80
	 * 		Name   -> Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetClosingDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UChallengeTrackerPresenter::OnWidgetClosingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetClosingDone"));
		
		UChallengeTrackerPresenter_OnWidgetClosingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB940
	 * 		Name   -> Function DBDUIPresenters.ChallengeTrackerPresenter.OnReadingTimeDelayDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UChallengeTrackerPresenter::OnReadingTimeDelayDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ChallengeTrackerPresenter.OnReadingTimeDelayDone"));
		
		UChallengeTrackerPresenter_OnReadingTimeDelayDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB710
	 * 		Name   -> Function DBDUIPresenters.ChallengeTrackerPresenter.OnQuestEventRepetitionValueChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      questEventIdTracked                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChallengeTrackerPresenter::OnQuestEventRepetitionValueChanged(int32_t value, const class FString& questEventIdTracked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ChallengeTrackerPresenter.OnQuestEventRepetitionValueChanged"));
		
		UChallengeTrackerPresenter_OnQuestEventRepetitionValueChanged_Params params {};
		params.value = value;
		params.questEventIdTracked = questEventIdTracked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA290
	 * 		Name   -> Function DBDUIPresenters.ChallengeTrackerPresenter.BindToQuestRepetitionEvents
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UChallengeTrackerPresenter::BindToQuestRepetitionEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ChallengeTrackerPresenter.BindToQuestRepetitionEvents"));
		
		UChallengeTrackerPresenter_BindToQuestRepetitionEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeTrackerPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeTrackerPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ChallengeTrackerPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextObserver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextObserver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ContextObserver"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA7D0
	 * 		Name   -> Function DBDUIPresenters.CreditsPresenter.OnBackAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCreditsPresenter::OnBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.CreditsPresenter.OnBackAction"));
		
		UCreditsPresenter_OnBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA2E0
	 * 		Name   -> Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToName
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCreditsPresenter::Credits_ScrollToName(const class FString& Name, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToName"));
		
		UCreditsPresenter_Credits_ScrollToName_Params params {};
		params.Name = Name;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCreditsPresenter::Credits_ScrollToEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd"));
		
		UCreditsPresenter_Credits_ScrollToEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreditsPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreditsPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.CreditsPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsSyncErrorEvent
	 * 		Flags  -> (Final, Native, Protected, Const)
	 */
	void UDailyRitualsPopupPresenter::OnRitualsSyncErrorEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsSyncErrorEvent"));
		
		UDailyRitualsPopupPresenter_OnRitualsSyncErrorEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBB20
	 * 		Name   -> Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsFetchedEvent
	 * 		Flags  -> (Final, Native, Protected, Const)
	 */
	void UDailyRitualsPopupPresenter::OnRitualsFetchedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsFetchedEvent"));
		
		UDailyRitualsPopupPresenter_OnRitualsFetchedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB960
	 * 		Name   -> Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRemoveRitual
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsPopupPresenter::OnRemoveRitual(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRemoveRitual"));
		
		UDailyRitualsPopupPresenter_OnRemoveRitual_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA9D0
	 * 		Name   -> Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimRitual
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDailyRitualsPopupPresenter::OnClaimRitual(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimRitual"));
		
		UDailyRitualsPopupPresenter_OnClaimRitual_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA9B0
	 * 		Name   -> Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimAllRituals
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UDailyRitualsPopupPresenter::OnClaimAllRituals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimAllRituals"));
		
		UDailyRitualsPopupPresenter_OnClaimAllRituals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDailyRitualsPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDailyRitualsPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.DailyRitualsPopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB430
	 * 		Name   -> Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameStart
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		TArray<EDirectionalInputKey>                       Sequence                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            currentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDirectionalMinigamePresenter::OnMinigameStart(TArray<EDirectionalInputKey> Sequence, int32_t currentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameStart"));
		
		UDirectionalMinigamePresenter_OnMinigameStart_Params params {};
		params.Sequence = Sequence;
		params.currentIndex = currentIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB2D0
	 * 		Name   -> Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnterKey
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EDirectionalInputKey                               enteredKey                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            enteredIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isCorrect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            currentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDirectionalMinigamePresenter::OnMinigameEnterKey(EDirectionalInputKey enteredKey, int32_t enteredIndex, bool isCorrect, int32_t currentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnterKey"));
		
		UDirectionalMinigamePresenter_OnMinigameEnterKey_Params params {};
		params.enteredKey = enteredKey;
		params.enteredIndex = enteredIndex;
		params.isCorrect = isCorrect;
		params.currentIndex = currentIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDB250
	 * 		Name   -> Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EDirectionalMinigameResult                         Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDirectionalMinigamePresenter::OnMinigameEnd(EDirectionalMinigameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnd"));
		
		UDirectionalMinigamePresenter_OnMinigameEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDirectionalMinigamePresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDirectionalMinigamePresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.DirectionalMinigamePresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDACD0
	 * 		Name   -> Function DBDUIPresenters.DisplayStandPresenter.OnDisplayStandRotation
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDisplayStandPresenter::OnDisplayStandRotation(float distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DisplayStandPresenter.OnDisplayStandRotation"));
		
		UDisplayStandPresenter_OnDisplayStandRotation_Params params {};
		params.distance = distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA420
	 * 		Name   -> Function DBDUIPresenters.DisplayStandPresenter.IsContextEntered
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool UDisplayStandPresenter::IsContextEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.DisplayStandPresenter.IsContextEntered"));
		
		UDisplayStandPresenter_IsContextEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisplayStandPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisplayStandPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.DisplayStandPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventEntryPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventEntryPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.EventEntryPopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA810
	 * 		Name   -> Function DBDUIPresenters.ExamplePresenter.OnButtonClick
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UExamplePresenter::OnButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ExamplePresenter.OnButtonClick"));
		
		UExamplePresenter_OnButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExamplePresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExamplePresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ExamplePresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDBC40
	 * 		Name   -> Function DBDUIPresenters.ExternalEffectsPresenter.OnShowExternalEffect
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FExternalEffectData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsPresenter::OnShowExternalEffect(const struct FExternalEffectData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ExternalEffectsPresenter.OnShowExternalEffect"));
		
		UExternalEffectsPresenter_OnShowExternalEffect_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDADE0
	 * 		Name   -> Function DBDUIPresenters.ExternalEffectsPresenter.OnHideExternalEffect
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EExternalEffectSource                              ExternalEffectSource                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsPresenter::OnHideExternalEffect(const class FName& ItemId, EExternalEffectSource ExternalEffectSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.ExternalEffectsPresenter.OnHideExternalEffect"));
		
		UExternalEffectsPresenter_OnHideExternalEffect_Params params {};
		params.ItemId = ItemId;
		params.ExternalEffectSource = ExternalEffectSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExternalEffectsPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExternalEffectsPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.ExternalEffectsPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFearMarketPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFearMarketPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.FearMarketPopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFocusHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFocusHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.FocusHandler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FDA830
	 * 		Name   -> Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EHelpType                                          categoryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameManualSubPresenter::OnCategoryCategoryEntered(EHelpType categoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered"));
		
		UGameManualSubPresenter_OnCategoryCategoryEntered_Params params {};
		params.categoryType = categoryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameManualSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameManualSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.GameManualSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericTextInputPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericTextInputPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.GenericTextInputPopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudEndGameScenarioPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudEndGameScenarioPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudEndGameScenarioPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0A80
	 * 		Name   -> Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressPendingChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoidEnergyChangeReason                            reasonEnergyChanged                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesPresenter::OnEventProgressPendingChanged(int32_t value, EVoidEnergyChangeReason reasonEnergyChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressPendingChanged"));
		
		UHudObjectivesPresenter_OnEventProgressPendingChanged_Params params {};
		params.value = value;
		params.reasonEnergyChanged = reasonEnergyChanged;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0B50
	 * 		Name   -> Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressionDataInitialized
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FEventProgressionData                       HudEventProgressionViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesPresenter::OnEventProgressionDataInitialized(const struct FEventProgressionData& HudEventProgressionViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressionDataInitialized"));
		
		UHudObjectivesPresenter_OnEventProgressionDataInitialized_Params params {};
		params.HudEventProgressionViewData = HudEventProgressionViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE09F0
	 * 		Name   -> Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressBankedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesPresenter::OnEventProgressBankedChanged(int32_t value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudObjectivesPresenter.OnEventProgressBankedChanged"));
		
		UHudObjectivesPresenter_OnEventProgressBankedChanged_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudObjectivesPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudObjectivesPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudObjectivesPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1A90
	 * 		Name   -> Function DBDUIPresenters.HudPeekingPromptsPresenter.UpdatePeekingState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ELeanState                                         potentialLeanState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudPeekingPromptsPresenter::UpdatePeekingState(ELeanState potentialLeanState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPeekingPromptsPresenter.UpdatePeekingState"));
		
		UHudPeekingPromptsPresenter_UpdatePeekingState_Params params {};
		params.potentialLeanState = potentialLeanState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE02B0
	 * 		Name   -> Function DBDUIPresenters.HudPeekingPromptsPresenter.HandleBestPlayerInteractionsChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudPeekingPromptsPresenter::HandleBestPlayerInteractionsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPeekingPromptsPresenter.HandleBestPlayerInteractionsChanged"));
		
		UHudPeekingPromptsPresenter_HandleBestPlayerInteractionsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE01E0
	 * 		Name   -> Function DBDUIPresenters.HudPeekingPromptsPresenter.CanPlayerLean
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool UHudPeekingPromptsPresenter::CanPlayerLean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudPeekingPromptsPresenter.CanPlayerLean"));
		
		UHudPeekingPromptsPresenter_CanPlayerLean_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudPeekingPromptsPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudPeekingPromptsPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudPeekingPromptsPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE14B0
	 * 		Name   -> Function DBDUIPresenters.HudSpectatePresenter.OnPreviousPlayerTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudSpectatePresenter::OnPreviousPlayerTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudSpectatePresenter.OnPreviousPlayerTriggered"));
		
		UHudSpectatePresenter_OnPreviousPlayerTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE13E0
	 * 		Name   -> Function DBDUIPresenters.HudSpectatePresenter.OnPlayerGameStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayerState*                             DBDPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameState                                         newGameState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudSpectatePresenter::OnPlayerGameStateChanged(class ADBDPlayerState* DBDPlayerState, EGameState newGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudSpectatePresenter.OnPlayerGameStateChanged"));
		
		UHudSpectatePresenter_OnPlayerGameStateChanged_Params params {};
		params.DBDPlayerState = DBDPlayerState;
		params.newGameState = newGameState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1190
	 * 		Name   -> Function DBDUIPresenters.HudSpectatePresenter.OnNextPlayerTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudSpectatePresenter::OnNextPlayerTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudSpectatePresenter.OnNextPlayerTriggered"));
		
		UHudSpectatePresenter_OnNextPlayerTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0CA0
	 * 		Name   -> Function DBDUIPresenters.HudSpectatePresenter.OnLeaveTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudSpectatePresenter::OnLeaveTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudSpectatePresenter.OnLeaveTriggered"));
		
		UHudSpectatePresenter_OnLeaveTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudSpectatePresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudSpectatePresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudSpectatePresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0360
	 * 		Name   -> Function DBDUIPresenters.HudTutorialObjectivesPresenter.IsInTutorial
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool UHudTutorialObjectivesPresenter::IsInTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudTutorialObjectivesPresenter.IsInTutorial"));
		
		UHudTutorialObjectivesPresenter_IsInTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudTutorialObjectivesPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudTutorialObjectivesPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudTutorialObjectivesPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE04E0
	 * 		Name   -> Function DBDUIPresenters.LightSensitivityPresenter.OnContinue
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightSensitivityPresenter::OnContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LightSensitivityPresenter.OnContinue"));
		
		ULightSensitivityPresenter_OnContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0440
	 * 		Name   -> Function DBDUIPresenters.LightSensitivityPresenter.OnCompletedFadeOut
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightSensitivityPresenter::OnCompletedFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LightSensitivityPresenter.OnCompletedFadeOut"));
		
		ULightSensitivityPresenter_OnCompletedFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightSensitivityPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightSensitivityPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.LightSensitivityPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE18D0
	 * 		Name   -> Function DBDUIPresenters.LoadoutMenuPopupPresenter.SetLoadoutPopupViewData
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FInventorySlotData                          SlotData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EPlayerRole                                        PlayerRole                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULoadoutMenuPopupViewData* ULoadoutMenuPopupPresenter::SetLoadoutPopupViewData(const struct FInventorySlotData& SlotData, EPlayerRole PlayerRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LoadoutMenuPopupPresenter.SetLoadoutPopupViewData"));
		
		ULoadoutMenuPopupPresenter_SetLoadoutPopupViewData_Params params {};
		params.SlotData = SlotData;
		params.PlayerRole = PlayerRole;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE15F0
	 * 		Name   -> Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnSelectedCharacterChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            selectedCharacterIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupPresenter::OnSelectedCharacterChanged(int32_t selectedCharacterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnSelectedCharacterChanged"));
		
		ULoadoutMenuPopupPresenter_OnSelectedCharacterChanged_Params params {};
		params.selectedCharacterIndex = selectedCharacterIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0FD0
	 * 		Name   -> Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuSlotIsSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ELoadoutSlot                                       slotSelected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupPresenter::OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuSlotIsSelected"));
		
		ULoadoutMenuPopupPresenter_OnLoadoutMenuSlotIsSelected_Params params {};
		params.slotSelected = slotSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0F00
	 * 		Name   -> Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            presetId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoadoutSlot                                       slotSelected                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupPresenter::OnLoadoutMenuPresetSelected(int32_t presetId, ELoadoutSlot slotSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetSelected"));
		
		ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetSelected_Params params {};
		params.presetId = presetId;
		params.slotSelected = slotSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0E30
	 * 		Name   -> Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            presetId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoadoutSlot                                       slotSelected                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupPresenter::OnLoadoutMenuPresetClicked(int32_t presetId, ELoadoutSlot slotSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetClicked"));
		
		ULoadoutMenuPopupPresenter_OnLoadoutMenuPresetClicked_Params params {};
		params.presetId = presetId;
		params.slotSelected = slotSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0D40
	 * 		Name   -> Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuInventorySlotClick
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ELoadoutSlot                                       itemIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ItemId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadoutMenuPopupPresenter::OnLoadoutMenuInventorySlotClick(ELoadoutSlot itemIndex, const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuInventorySlotClick"));
		
		ULoadoutMenuPopupPresenter_OnLoadoutMenuInventorySlotClick_Params params {};
		params.itemIndex = itemIndex;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadoutMenuPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutMenuPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.LoadoutMenuPopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1680
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuPresenter::OnSetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled"));
		
		UOnboardingMenuPresenter_OnSetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1710
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnSettingsAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnboardingMenuPresenter::OnSettingsAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnSettingsAction"));
		
		UOnboardingMenuPresenter_OnSettingsAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE14D0
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnQuitGameAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnboardingMenuPresenter::OnQuitGameAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnQuitGameAction"));
		
		UOnboardingMenuPresenter_OnQuitGameAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1110
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EOnboardingMenuState                               menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuPresenter::OnMenuTabSelectedAgain(EOnboardingMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain"));
		
		UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1090
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EOnboardingMenuState                               menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuPresenter::OnMenuTabSelected(EOnboardingMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected"));
		
		UOnboardingMenuPresenter_OnMenuTabSelected_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0BF0
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnFirstOnboardingStepsDone
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isFirstStepsDone                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuPresenter::OnFirstOnboardingStepsDone(bool isFirstStepsDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnFirstOnboardingStepsDone"));
		
		UOnboardingMenuPresenter_OnFirstOnboardingStepsDone_Params params {};
		params.isFirstStepsDone = isFirstStepsDone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnChangeAccountAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnboardingMenuPresenter::OnChangeAccountAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnChangeAccountAction"));
		
		UOnboardingMenuPresenter_OnChangeAccountAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0420
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnboardingMenuPresenter::OnBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction"));
		
		UOnboardingMenuPresenter_OnBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnboardingMenuPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingMenuPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.OnboardingMenuPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE14F0
	 * 		Name   -> Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      stepId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      tutorialId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialSubPresenter::OnSelectTutorial(const class FString& stepId, const class FString& tutorialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial"));
		
		UOnboardingTutorialSubPresenter_OnSelectTutorial_Params params {};
		params.stepId = stepId;
		params.tutorialId = tutorialId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnboardingTutorialSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingTutorialSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.OnboardingTutorialSubPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE11B0
	 * 		Name   -> Function DBDUIPresenters.PawnObserver.OnPawnControllerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 OldController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnObserver::OnPawnControllerSet(class APawn* Pawn, class AController* OldController, class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PawnObserver.OnPawnControllerSet"));
		
		UPawnObserver_OnPawnControllerSet_Params params {};
		params.Pawn = Pawn;
		params.OldController = OldController;
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1070
	 * 		Name   -> Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UPawnObserver::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged"));
		
		UPawnObserver_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnObserver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnObserver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.PawnObserver"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPingStatusPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPingStatusPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.PingStatusPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE18B0
	 * 		Name   -> Function DBDUIPresenters.PlayerProfilePresenter.RefreshWallet
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerProfilePresenter::RefreshWallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PlayerProfilePresenter.RefreshWallet"));
		
		UPlayerProfilePresenter_RefreshWallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE17E0
	 * 		Name   -> Function DBDUIPresenters.PlayerProfilePresenter.OnWalletUpdated
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FShopWalletUpdate>                   walletUpdates                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerProfilePresenter::OnWalletUpdated(TArray<struct FShopWalletUpdate> walletUpdates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PlayerProfilePresenter.OnWalletUpdated"));
		
		UPlayerProfilePresenter_OnWalletUpdated_Params params {};
		params.walletUpdates = walletUpdates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE1730
	 * 		Name   -> Function DBDUIPresenters.PlayerProfilePresenter.OnShowImageViewer
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               voiceOverIsPlaying                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerProfilePresenter::OnShowImageViewer(bool voiceOverIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PlayerProfilePresenter.OnShowImageViewer"));
		
		UPlayerProfilePresenter_OnShowImageViewer_Params params {};
		params.voiceOverIsPlaying = voiceOverIsPlaying;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0C80
	 * 		Name   -> Function DBDUIPresenters.PlayerProfilePresenter.OnHideImageViewer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerProfilePresenter::OnHideImageViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PlayerProfilePresenter.OnHideImageViewer"));
		
		UPlayerProfilePresenter_OnHideImageViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0500
	 * 		Name   -> Function DBDUIPresenters.PlayerProfilePresenter.OnCurrentSpecialEventChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCombinedSpecialEventData                   previousSpecialEvent                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ESpecialEventStatus                                previousSpecialEventStatus                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCombinedSpecialEventData                   currentSpecialEvent                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ESpecialEventStatus                                currentSpecialEventStatus                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerProfilePresenter::OnCurrentSpecialEventChanged(const struct FCombinedSpecialEventData& previousSpecialEvent, ESpecialEventStatus previousSpecialEventStatus, const struct FCombinedSpecialEventData& currentSpecialEvent, ESpecialEventStatus currentSpecialEventStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PlayerProfilePresenter.OnCurrentSpecialEventChanged"));
		
		UPlayerProfilePresenter_OnCurrentSpecialEventChanged_Params params {};
		params.previousSpecialEvent = previousSpecialEvent;
		params.previousSpecialEventStatus = previousSpecialEventStatus;
		params.currentSpecialEvent = currentSpecialEvent;
		params.currentSpecialEventStatus = currentSpecialEventStatus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0210
	 * 		Name   -> Function DBDUIPresenters.PlayerProfilePresenter.GetPlayerName
	 * 		Flags  -> (Final, Native, Private)
	 */
	class FText UPlayerProfilePresenter::GetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PlayerProfilePresenter.GetPlayerName"));
		
		UPlayerProfilePresenter_GetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerProfilePresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProfilePresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.PlayerProfilePresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPresenterContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresenterContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.PresenterContainer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPresenterGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresenterGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.PresenterGroup"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE17C0
	 * 		Name   -> Function DBDUIPresenters.PresenterManager.OnViewportCreated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPresenterManager::OnViewportCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PresenterManager.OnViewportCreated"));
		
		UPresenterManager_OnViewportCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE0CC0
	 * 		Name   -> Function DBDUIPresenters.PresenterManager.OnLoadingTransition
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ELoadingTransitionType                             TransitionType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPresenterManager::OnLoadingTransition(ELoadingTransitionType TransitionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.PresenterManager.OnLoadingTransition"));
		
		UPresenterManager_OnLoadingTransition_Params params {};
		params.TransitionType = TransitionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPresenterManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresenterManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.PresenterManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPresenterRequirementFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresenterRequirementFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.PresenterRequirementFunction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.RootContainer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.RootWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillCheckPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.SkillCheckPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE09D0
	 * 		Name   -> Function DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USubtitlesPresenter::OnEntryTimedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut"));
		
		USubtitlesPresenter_OnEntryTimedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE03F0
	 * 		Name   -> Function DBDUIPresenters.SubtitlesPresenter.IsSubtitlesEnabled
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	bool USubtitlesPresenter::IsSubtitlesEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.SubtitlesPresenter.IsSubtitlesEnabled"));
		
		USubtitlesPresenter_IsSubtitlesEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitlesPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitlesPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.SubtitlesPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemplatePresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplatePresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.TemplatePresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestBuildFlagPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestBuildFlagPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.TestBuildFlagPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.TestPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3180
	 * 		Name   -> Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialNotificationClosedByUserInput
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudTutorialBlockingNotificationsPresenter::OnTutorialNotificationClosedByUserInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialNotificationClosedByUserInput"));
		
		UHudTutorialBlockingNotificationsPresenter_OnTutorialNotificationClosedByUserInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3160
	 * 		Name   -> Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeOutTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudTutorialBlockingNotificationsPresenter::OnTutorialHudFadeOutTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeOutTriggered"));
		
		UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeOutTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3140
	 * 		Name   -> Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeInTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHudTutorialBlockingNotificationsPresenter::OnTutorialHudFadeInTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeInTriggered"));
		
		UHudTutorialBlockingNotificationsPresenter_OnTutorialHudFadeInTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudTutorialBlockingNotificationsPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudTutorialBlockingNotificationsPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudTutorialBlockingNotificationsPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudTutorialMysteryNotesPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudTutorialMysteryNotesPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.HudTutorialMysteryNotesPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UUIConsoleCommands::DBD_ToggleTestWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget"));
		
		UUIConsoleCommands_DBD_ToggleTestWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UUIConsoleCommands::DBD_ToggleDPICurve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve"));
		
		UUIConsoleCommands_DBD_ToggleDPICurve_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3050
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ShowPresenterDebugInfo
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            presenterDebugMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_ShowPresenterDebugInfo(int32_t presenterDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_ShowPresenterDebugInfo"));
		
		UUIConsoleCommands_DBD_ShowPresenterDebugInfo_Params params {};
		params.presenterDebugMode = presenterDebugMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ShowHUDWidgetsInfo
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_ShowHUDWidgetsInfo(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_ShowHUDWidgetsInfo"));
		
		UUIConsoleCommands_DBD_ShowHUDWidgetsInfo_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetUMGVisible
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetUMGVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_SetUMGVisible"));
		
		UUIConsoleCommands_DBD_SetUMGVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F00
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ScaleFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetMenuScaleFactor(float ScaleFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor"));
		
		UUIConsoleCommands_DBD_SetMenuScaleFactor_Params params {};
		params.ScaleFactor = ScaleFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F80
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetHUDWidgetVisible
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetHUDWidgetVisible(int32_t Index, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHUDWidgetVisible"));
		
		UUIConsoleCommands_DBD_SetHUDWidgetVisible_Params params {};
		params.Index = Index;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetHudVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible"));
		
		UUIConsoleCommands_DBD_SetHudVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F00
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ScaleFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetHudScaleFactor(float ScaleFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor"));
		
		UUIConsoleCommands_DBD_SetHudScaleFactor_Params params {};
		params.ScaleFactor = ScaleFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F00
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ApplicationScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetApplicationScale(float ApplicationScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale"));
		
		UUIConsoleCommands_DBD_SetApplicationScale_Params params {};
		params.ApplicationScale = ApplicationScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetAllHUDWidgetsVisible
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetAllHUDWidgetsVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_SetAllHUDWidgetsVisible"));
		
		UUIConsoleCommands_DBD_SetAllHUDWidgetsVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ResetPresenters
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UUIConsoleCommands::DBD_ResetPresenters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.UIConsoleCommands.DBD_ResetPresenters"));
		
		UUIConsoleCommands_DBD_ResetPresenters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIConsoleCommands.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIConsoleCommands::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.UIConsoleCommands"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnlockPersonalPerksPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnlockPersonalPerksPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.UnlockPersonalPerksPopupPresenter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3110
	 * 		Name   -> Function DBDUIPresenters.WatermarkPresenter.IsUsingCommandLineArgument
	 * 		Flags  -> (Final, Native, Protected)
	 */
	bool UWatermarkPresenter::IsUsingCommandLineArgument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.WatermarkPresenter.IsUsingCommandLineArgument"));
		
		UWatermarkPresenter_IsUsingCommandLineArgument_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE30E0
	 * 		Name   -> Function DBDUIPresenters.WatermarkPresenter.IsSteamBuild
	 * 		Flags  -> (Final, Native, Protected)
	 */
	bool UWatermarkPresenter::IsSteamBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.WatermarkPresenter.IsSteamBuild"));
		
		UWatermarkPresenter_IsSteamBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0380B070
	 * 		Name   -> Function DBDUIPresenters.WatermarkPresenter.IsNonShippingBuild
	 * 		Flags  -> (Final, Native, Protected)
	 */
	bool UWatermarkPresenter::IsNonShippingBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDUIPresenters.WatermarkPresenter.IsNonShippingBuild"));
		
		UWatermarkPresenter_IsNonShippingBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWatermarkPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWatermarkPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDUIPresenters.WatermarkPresenter"));
		return ptr;
	}

}


