// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.SpawnDebris
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InImpulseDirection             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Rabbit_AbstractDebree_C::SpawnDebris(const struct FVector& InImpulseDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.SpawnDebris");

	ABP_Rabbit_AbstractDebree_C_SpawnDebris_Params fn_params;
	fn_params.InImpulseDirection = InImpulseDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rabbit_AbstractDebree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.UserConstructionScript");

	ABP_Rabbit_AbstractDebree_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Rabbit_AbstractDebree_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ReceivePointDamage");

	ABP_Rabbit_AbstractDebree_C_ReceivePointDamage_Params fn_params;
	fn_params.Damage = Damage;
	fn_params.DamageType = DamageType;
	fn_params.HitLocation = HitLocation;
	fn_params.HitNormal = HitNormal;
	fn_params.HitComponent = HitComponent;
	fn_params.BoneName = BoneName;
	fn_params.ShotFromDirection = ShotFromDirection;
	fn_params.InstigatedBy = InstigatedBy;
	fn_params.DamageCauser = DamageCauser;
	fn_params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ExecuteUbergraph_BP_Rabbit_AbstractDebree
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Rabbit_AbstractDebree_C::ExecuteUbergraph_BP_Rabbit_AbstractDebree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ExecuteUbergraph_BP_Rabbit_AbstractDebree");

	ABP_Rabbit_AbstractDebree_C_ExecuteUbergraph_BP_Rabbit_AbstractDebree_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
