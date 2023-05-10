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
	 * 		Name   -> PredefinedFunction UBloodwebManagerMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodwebManagerMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineTransactions.BloodwebManagerMock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineTransactionResponseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineTransactionResponseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineTransactions.OnlineTransactionResponseBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForceRefreshBloodMarketTransactionResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceRefreshBloodMarketTransactionResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineTransactions.ForceRefreshBloodMarketTransactionResponse"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForceRefreshBloodMarketTransaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceRefreshBloodMarketTransaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineTransactions.ForceRefreshBloodMarketTransaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineTransaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineTransaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineTransactions.OnlineTransaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineTransactionServiceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineTransactionServiceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineTransactions.OnlineTransactionServiceComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWalletHandlerMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWalletHandlerMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class OnlineTransactions.WalletHandlerMock"));
		return ptr;
	}

}


