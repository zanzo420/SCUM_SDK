#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Hunter85.BP_Weapon_Hunter85_C
// 0x0028 (0x10E8 - 0x10C0)
class ABP_Weapon_Hunter85_C : public AWeapon
{
public:
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x10C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReloadData                           FinalReloadData;                                          // 0x10C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_Hunter85.BP_Weapon_Hunter85_C");
		return ptr;
	}


	int GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
