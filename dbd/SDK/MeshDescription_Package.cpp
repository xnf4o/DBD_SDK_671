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
	 * 		Name   -> PredefinedFunction UMeshDescription.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDescription::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MeshDescription.MeshDescription"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D88060
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.SetVertexPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.SetVertexPosition"));
		
		UMeshDescriptionBase_SetVertexPosition_Params params {};
		params.VertexID = VertexID;
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87F40
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerimeterIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int32_t PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance"));
		
		UMeshDescriptionBase_SetPolygonVertexInstance_Params params {};
		params.PolygonID = PolygonID;
		params.PerimeterIndex = PerimeterIndex;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87E70
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup"));
		
		UMeshDescriptionBase_SetPolygonPolygonGroup_Params params {};
		params.PolygonID = PolygonID;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87DF0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReversePolygonFacing(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing"));
		
		UMeshDescriptionBase_ReversePolygonFacing_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87D60
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumberOfNewVertices                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewVertices(int32_t NumberOfNewVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices"));
		
		UMeshDescriptionBase_ReserveNewVertices_Params params {};
		params.NumberOfNewVertices = NumberOfNewVertices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87B20
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumberOfNewVertexInstances                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances"));
		
		UMeshDescriptionBase_ReserveNewVertexInstances_Params params {};
		params.NumberOfNewVertexInstances = NumberOfNewVertexInstances;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87CD0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumberOfNewTriangles                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewTriangles(int32_t NumberOfNewTriangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles"));
		
		UMeshDescriptionBase_ReserveNewTriangles_Params params {};
		params.NumberOfNewTriangles = NumberOfNewTriangles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87C40
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumberOfNewPolygons                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewPolygons(int32_t NumberOfNewPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons"));
		
		UMeshDescriptionBase_ReserveNewPolygons_Params params {};
		params.NumberOfNewPolygons = NumberOfNewPolygons;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87BB0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumberOfNewPolygonGroups                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups"));
		
		UMeshDescriptionBase_ReserveNewPolygonGroups_Params params {};
		params.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87B20
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumberOfNewEdges                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ReserveNewEdges(int32_t NumberOfNewEdges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges"));
		
		UMeshDescriptionBase_ReserveNewEdges_Params params {};
		params.NumberOfNewEdges = NumberOfNewEdges;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87A90
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsVertexValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsVertexValid(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsVertexValid"));
		
		UMeshDescriptionBase_IsVertexValid_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87A00
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsVertexOrphaned(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned"));
		
		UMeshDescriptionBase_IsVertexOrphaned_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87970
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid"));
		
		UMeshDescriptionBase_IsVertexInstanceValid_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D878E0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsTriangleValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsTriangleValid(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsTriangleValid"));
		
		UMeshDescriptionBase_IsTriangleValid_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87850
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsTrianglePartOfNgon(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon"));
		
		UMeshDescriptionBase_IsTrianglePartOfNgon_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D877C0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsPolygonValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsPolygonValid(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsPolygonValid"));
		
		UMeshDescriptionBase_IsPolygonValid_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87730
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid"));
		
		UMeshDescriptionBase_IsPolygonGroupValid_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87700
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEmpty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMeshDescriptionBase::IsEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsEmpty"));
		
		UMeshDescriptionBase_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87670
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEdgeValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsEdgeValid(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsEdgeValid"));
		
		UMeshDescriptionBase_IsEdgeValid_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87590
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon"));
		
		UMeshDescriptionBase_IsEdgeInternalToPolygon_Params params {};
		params.EdgeID = EdgeID;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87500
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshDescriptionBase::IsEdgeInternal(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal"));
		
		UMeshDescriptionBase_IsEdgeInternal_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87410
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances"));
		
		UMeshDescriptionBase_GetVertexVertexInstances_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexInstanceIDs != nullptr)
			*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87370
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UMeshDescriptionBase::GetVertexPosition(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexPosition"));
		
		UMeshDescriptionBase_GetVertexPosition_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87290
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID0                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge"));
		
		UMeshDescriptionBase_GetVertexPairEdge_Params params {};
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D871F0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex"));
		
		UMeshDescriptionBase_GetVertexInstanceVertex_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87110
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID0                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexInstanceID                           VertexInstanceID1                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge"));
		
		UMeshDescriptionBase_GetVertexInstancePairEdge_Params params {};
		params.VertexInstanceID0 = VertexInstanceID0;
		params.VertexInstanceID1 = VertexInstanceID1;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D87030
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex"));
		
		UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params params {};
		params.TriangleID = TriangleID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86F50
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex"));
		
		UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params params {};
		params.PolygonID = PolygonID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86E60
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutConnectedTriangleIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles"));
		
		UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedTriangleIDs != nullptr)
			*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86D70
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons"));
		
		UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86C80
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutConnectedTriangleIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles"));
		
		UMeshDescriptionBase_GetVertexConnectedTriangles_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedTriangleIDs != nullptr)
			*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86B90
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons"));
		
		UMeshDescriptionBase_GetVertexConnectedPolygons_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86AA0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges"));
		
		UMeshDescriptionBase_GetVertexConnectedEdges_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D869B0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutAdjacentVertexIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices"));
		
		UMeshDescriptionBase_GetVertexAdjacentVertices_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdjacentVertexIDs != nullptr)
			*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D868C0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutVertexIDs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices"));
		
		UMeshDescriptionBase_GetTriangleVertices_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexIDs != nullptr)
			*OutVertexIDs = params.OutVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D867D0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances"));
		
		UMeshDescriptionBase_GetTriangleVertexInstances_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexInstanceIDs != nullptr)
			*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D866F0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance"));
		
		UMeshDescriptionBase_GetTriangleVertexInstance_Params params {};
		params.TriangleID = TriangleID;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86650
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup"));
		
		UMeshDescriptionBase_GetTrianglePolygonGroup_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D865B0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(const struct FTriangleID& TriangleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon"));
		
		UMeshDescriptionBase_GetTrianglePolygon_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D864C0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges"));
		
		UMeshDescriptionBase_GetTriangleEdges_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D863D0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutTriangleIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles"));
		
		UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTriangleIDs != nullptr)
			*OutTriangleIDs = params.OutTriangleIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D862E0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutVertexIDs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices"));
		
		UMeshDescriptionBase_GetPolygonVertices_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexIDs != nullptr)
			*OutVertexIDs = params.OutVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D861F0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances"));
		
		UMeshDescriptionBase_GetPolygonVertexInstances_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexInstanceIDs != nullptr)
			*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86100
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutTriangleIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles"));
		
		UMeshDescriptionBase_GetPolygonTriangles_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTriangleIDs != nullptr)
			*OutTriangleIDs = params.OutTriangleIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D86060
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup"));
		
		UMeshDescriptionBase_GetPolygonPolygonGroup_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85F70
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges"));
		
		UMeshDescriptionBase_GetPolygonPerimeterEdges_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85E80
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges"));
		
		UMeshDescriptionBase_GetPolygonInternalEdges_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeIDs != nullptr)
			*OutEdgeIDs = params.OutEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85D90
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygonIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons"));
		
		UMeshDescriptionBase_GetPolygonGroupPolygons_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonIDs != nullptr)
			*OutPolygonIDs = params.OutPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85CA0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygonIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons"));
		
		UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonIDs != nullptr)
			*OutPolygonIDs = params.OutPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85C10
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexVertexInstances(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances"));
		
		UMeshDescriptionBase_GetNumVertexVertexInstances_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85B80
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles"));
		
		UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85AF0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons"));
		
		UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85A60
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexConnectedTriangles(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles"));
		
		UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D859D0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexConnectedPolygons(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons"));
		
		UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85940
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumVertexConnectedEdges(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges"));
		
		UMeshDescriptionBase_GetNumVertexConnectedEdges_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D858B0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonVertices(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices"));
		
		UMeshDescriptionBase_GetNumPolygonVertices_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85820
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonTriangles(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles"));
		
		UMeshDescriptionBase_GetNumPolygonTriangles_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85790
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges"));
		
		UMeshDescriptionBase_GetNumPolygonInternalEdges_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85700
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons"));
		
		UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85670
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles"));
		
		UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D855E0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons"));
		
		UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D854F0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutVertexIDs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices"));
		
		UMeshDescriptionBase_GetEdgeVertices_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVertexIDs != nullptr)
			*OutVertexIDs = params.OutVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85410
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UMeshDescriptionBase::GetEdgeVertex(const struct FEdgeID& EdgeID, int32_t VertexNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex"));
		
		UMeshDescriptionBase_GetEdgeVertex_Params params {};
		params.EdgeID = EdgeID;
		params.VertexNumber = VertexNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85320
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTriangleID>                         OutConnectedTriangleIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles"));
		
		UMeshDescriptionBase_GetEdgeConnectedTriangles_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedTriangleIDs != nullptr)
			*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85230
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons"));
		
		UMeshDescriptionBase_GetEdgeConnectedPolygons_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85210
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.Empty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMeshDescriptionBase::Empty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.Empty"));
		
		UMeshDescriptionBase_Empty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D85120
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OrphanedVertices                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance"));
		
		UMeshDescriptionBase_DeleteVertexInstance_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedVertices != nullptr)
			*OrphanedVertices = params.OrphanedVertices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D850A0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.DeleteVertex"));
		
		UMeshDescriptionBase_DeleteVertex_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84EE0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteTriangle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OrphanedEdges                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OrphanedVertexInstances                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonGroupID>                     OrphanedPolygonGroupsPtr                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.DeleteTriangle"));
		
		UMeshDescriptionBase_DeleteTriangle_Params params {};
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedEdges != nullptr)
			*OrphanedEdges = params.OrphanedEdges;
		if (OrphanedVertexInstances != nullptr)
			*OrphanedVertexInstances = params.OrphanedVertexInstances;
		if (OrphanedPolygonGroupsPtr != nullptr)
			*OrphanedPolygonGroupsPtr = params.OrphanedPolygonGroupsPtr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84E60
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup"));
		
		UMeshDescriptionBase_DeletePolygonGroup_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84CA0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeletePolygon
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OrphanedEdges                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OrphanedVertexInstances                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonGroupID>                     OrphanedPolygonGroups                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.DeletePolygon"));
		
		UMeshDescriptionBase_DeletePolygon_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedEdges != nullptr)
			*OrphanedEdges = params.OrphanedEdges;
		if (OrphanedVertexInstances != nullptr)
			*OrphanedVertexInstances = params.OrphanedVertexInstances;
		if (OrphanedPolygonGroups != nullptr)
			*OrphanedPolygonGroups = params.OrphanedPolygonGroups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84BB0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.DeleteEdge
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OrphanedVertices                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.DeleteEdge"));
		
		UMeshDescriptionBase_DeleteEdge_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrphanedVertices != nullptr)
			*OrphanedVertices = params.OrphanedVertices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84B30
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateVertexWithID(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID"));
		
		UMeshDescriptionBase_CreateVertexWithID_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84A60
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID"));
		
		UMeshDescriptionBase_CreateVertexInstanceWithID_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D849C0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance"));
		
		UMeshDescriptionBase_CreateVertexInstance_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84980
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FVertexID UMeshDescriptionBase::CreateVertex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateVertex"));
		
		UMeshDescriptionBase_CreateVertex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D847D0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FTriangleID                                 TriangleID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID"));
		
		UMeshDescriptionBase_CreateTriangleWithID_Params params {};
		params.TriangleID = TriangleID;
		params.PolygonGroupID = PolygonGroupID;
		params.VertexInstanceIDs = VertexInstanceIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84660
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateTriangle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FTriangleID UMeshDescriptionBase::CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateTriangle"));
		
		UMeshDescriptionBase_CreateTriangle_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		params.VertexInstanceIDs = VertexInstanceIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D844B0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID"));
		
		UMeshDescriptionBase_CreatePolygonWithID_Params params {};
		params.PolygonID = PolygonID;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexInstanceIDs != nullptr)
			*VertexInstanceIDs = params.VertexInstanceIDs;
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84430
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID"));
		
		UMeshDescriptionBase_CreatePolygonGroupWithID_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D843F0
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup"));
		
		UMeshDescriptionBase_CreatePolygonGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84280
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreatePolygon
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             NewEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UMeshDescriptionBase::CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreatePolygon"));
		
		UMeshDescriptionBase_CreatePolygon_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexInstanceIDs != nullptr)
			*VertexInstanceIDs = params.VertexInstanceIDs;
		if (NewEdgeIDs != nullptr)
			*NewEdgeIDs = params.NewEdgeIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84160
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID0                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID"));
		
		UMeshDescriptionBase_CreateEdgeWithID_Params params {};
		params.EdgeID = EdgeID;
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84080
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.CreateEdge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID0                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UMeshDescriptionBase::CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.CreateEdge"));
		
		UMeshDescriptionBase_CreateEdge_Params params {};
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06D84000
	 * 		Name   -> Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshDescriptionBase::ComputePolygonTriangulation(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation"));
		
		UMeshDescriptionBase_ComputePolygonTriangulation_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshDescriptionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDescriptionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class MeshDescription.MeshDescriptionBase"));
		return ptr;
	}

}


