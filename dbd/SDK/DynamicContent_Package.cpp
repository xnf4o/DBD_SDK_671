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
	 * 		Name   -> PredefinedFunction UAsyncTaskDownloadCacheImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncTaskDownloadCacheImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DynamicContent.AsyncTaskDownloadCacheImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A96B70
	 * 		Name   -> Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTexture2DDynamic*                           textureDownloaded                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadingTextureTask::OnDownloadSucceeded(class UTexture2DDynamic* textureDownloaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded"));
		
		UDownloadingTextureTask_OnDownloadSucceeded_Params params {};
		params.textureDownloaded = textureDownloaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A96AE0
	 * 		Name   -> Function DynamicContent.DownloadingTextureTask.OnDownloadFailed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTexture2DDynamic*                           textureDownloaded                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadingTextureTask::OnDownloadFailed(class UTexture2DDynamic* textureDownloaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DynamicContent.DownloadingTextureTask.OnDownloadFailed"));
		
		UDownloadingTextureTask_OnDownloadFailed_Params params {};
		params.textureDownloaded = textureDownloaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadingTextureTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadingTextureTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DynamicContent.DownloadingTextureTask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A96D60
	 * 		Name   -> Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UDownloadingTextureTask*                     taskCompleted                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadMultiTextureTask::OnTextureDownloadComplete(class UDownloadingTextureTask* taskCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete"));
		
		UDownloadMultiTextureTask_OnTextureDownloadComplete_Params params {};
		params.taskCompleted = taskCompleted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadMultiTextureTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadMultiTextureTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DynamicContent.DownloadMultiTextureTask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A970D0
	 * 		Name   -> Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UDownloadMultiTextureTask*                   completeTask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicContentHolder::OnDownloadingTaskComplete(class UDownloadMultiTextureTask* completeTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete"));
		
		UDynamicContentHolder_OnDownloadingTaskComplete_Params params {};
		params.completeTask = completeTask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicContentHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicContentHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DynamicContent.DynamicContentHolder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingImagesDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingImagesDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DynamicContent.LoadingImagesDataProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoopBannerProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoopBannerProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DynamicContent.LoopBannerProvider"));
		return ptr;
	}

}


