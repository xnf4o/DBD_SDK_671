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
	 * 		Name   -> PredefinedFunction UAndroidPermissionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndroidPermissionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AndroidPermission.AndroidPermissionCallbackProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04330BF0
	 * 		Name   -> Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      permission                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAndroidPermissionFunctionLibrary::STATIC_CheckPermission(const class FString& permission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission"));
		
		UAndroidPermissionFunctionLibrary_CheckPermission_Params params {};
		params.permission = permission;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04330B20
	 * 		Name   -> Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Permissions                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::STATIC_AcquirePermissions(TArray<class FString> Permissions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions"));
		
		UAndroidPermissionFunctionLibrary_AcquirePermissions_Params params {};
		params.Permissions = Permissions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAndroidPermissionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndroidPermissionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AndroidPermission.AndroidPermissionFunctionLibrary"));
		return ptr;
	}

}


