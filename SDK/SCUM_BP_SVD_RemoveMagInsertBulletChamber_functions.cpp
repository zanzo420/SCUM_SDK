// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SVD_RemoveMagInsertBulletChamber.BP_SVD_RemoveMagInsertBulletChamber_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SVD_RemoveMagInsertBulletChamber_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SVD_RemoveMagInsertBulletChamber.BP_SVD_RemoveMagInsertBulletChamber_C.CanExecuteUsingData");

	UBP_SVD_RemoveMagInsertBulletChamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
