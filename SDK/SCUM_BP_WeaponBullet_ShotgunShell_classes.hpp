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

// BlueprintGeneratedClass BP_WeaponBullet_ShotgunShell.BP_WeaponBullet_ShotgunShell_C
// 0x0008 (0x0500 - 0x04F8)
class ABP_WeaponBullet_ShotgunShell_C : public AProjectileShotgun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_ShotgunShell.BP_WeaponBullet_ShotgunShell_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_ShotgunShell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
