#include "structure/infantry.hpp"
#include "type/infantry_type.hpp"  // InfantryTypeClass full definition (Type->Engineer access)

#include <cstring>
#include <cmath>
#include "e4/e4_globals.hpp"

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = (uint32_t)(AbstractFlags::Foot)
                                  | (uint32_t)(AbstractFlags::Object)
                                  | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 -- InfantryClass::Construct (617B)
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim((Sequence)(-1))
    , InfantryClass_field_timer_6C8{}
    , PanicDurationLeft(0)
    , PermanentBerzerk(false)
    , Technician(false)
    , InfantryClass_field_bool_6DA(false)
    , Crawling(false)
    , InfantryClass_field_bool_6DC(false)
    , InfantryClass_field_bool_6DD(false)
    , InfantryClass_field_6E0(0)
    , ShouldDeploy(false)
    , InfantryClass_field_int_6E8(2)
    , unused_6EC(0)
{
    abstractFlags = kInfantryFlag;
}

// ============================================================
// Mission stubs
// ============================================================
int InfantryClass::Mission_Enter()
{
    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    hasParachute = true;
    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    return 5;
}

// ============================================================
// Phase 3: Deploy/Undeploy
// ============================================================

// IDA: 0x4D5350 (ProcessDeploy, 614B)
void InfantryClass::ProcessDeploy()
{
    // Infantry-specific deploy logic
    // Check if can deploy, set mission, deploy animations
}

// IDA: 0x51D6F0 (ProcessDeployAction, 1013B) — validates weapon, checks mission, sets loco
// 0x51d6f0
InfantryTypeClass * * InfantryClass::ProcessDeployAction(int deploy_type, bool a3, bool a4)
{
  int v4; // edi
  __int16 *v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  char *ProductionTimeMult; // eax
  char *v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v4 = deploy_type; /*0x51d6f6*/
  if ( deploy_type == -1 /*0x51d72b*/
    || !*(_DWORD *)(*(_DWORD *)(*(&this->currentMission2) + 3644) + 36 * deploy_type + 4)
    || *(&this->currentMission3) == 33 && this->isFallingDown )
  {
    return 0; /*0x51d72b*/
  }
  if ( *(&this->q0483) /*0x51d771*/
    && *(_DWORD *)(this->Vt34Thunk() + 2048)
    && ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 692))(this) == 1.0
    && v4 == 3 )
  {
    v4 = 39; /*0x51d773*/
    goto LABEL_12; /*0x51d778*/
  }
  if ( v4 == 5 && !*(_BYTE *)(*(&this->currentMission2) + 3773) ) /*0x51d785*/
    return 0; /*0x51dadc*/
  LABEL_12:
  if ( *(_DWORD *)(*(&this->currentMission2) + 1460) == 3 ) /*0x51d7a0*/
  {
    v6 = (__int16 *)this->GetCellCoords_Alt(&deploy_type); /*0x51d7b0*/
    v7 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v6) + 59); /*0x51d7c1*/
    v8 = 1; /*0x51d7c7*/
    if ( (v7 == 6 || v7 == 2) && !this->onBridge ) /*0x51d7d6*/
    {
      v8 = 0; /*0x51d7e0*/
      switch ( v4 ) /*0x51d7ea*/
      {
        case 3: /*0x51d7ea*/
        case 6: /*0x51d7ea*/
          v4 = 17; /*0x51d83d*/
          break;
        case 2: /*0x51d7ea*/
        case 0: /*0x51d7ea*/
          v4 = 16; /*0x51d836*/
          break;
        case 9: /*0x51d7ea*/
          v4 = 18; /*0x51d7fa*/
          break;
        case 10: /*0x51d7ea*/
          v4 = 19; /*0x51d806*/
          break;
        case 11: /*0x51d7ea*/
          v4 = 20; /*0x51d812*/
          break;
        case 12: /*0x51d7ea*/
          v4 = 21; /*0x51d81e*/
          break;
        case 4: /*0x51d7ea*/
        case 8: /*0x51d7ea*/
          v4 = 22; /*0x51d82f*/
          break;
      }
    }
    v9 = *(&this->suspendedMission2); /*0x51d842*/
    if ( v9 || v8 != 1 ) /*0x51d84f*/
    {
      if ( v9 == 1 && !v8 ) /*0x51d886*/
      {
        v24 = *(&this->vtable49); /*0x51d891*/
        v25 = *(&this->uniqueId0); /*0x51d89c*/
        v11 = *(&this->currentMission2); /*0x51d8a0*/
        v26 = *(&this->uniqueId1); /*0x51d8a9*/
        StartAudioControllerAt(v11->qEA4, (int)&v24, 0); /*0x51d8b3*/
      }
    }
    else
    {
      v24 = *(&this->vtable49); /*0x51d85b*/
      v25 = *(&this->uniqueId0); /*0x51d866*/
      v10 = *(&this->currentMission2); /*0x51d86a*/
      v26 = *(&this->uniqueId1); /*0x51d873*/
      StartAudioControllerAt(v10->qEA8, (int)&v24, 0); /*0x51d87d*/
    }
    *(&this->suspendedMission2) = v8; /*0x51d8b8*/
  }
  if ( !this->IsHeightAboveThreshold_0() /*0x51d8ec*/
    || this->onBridge
    || *(int *)(*(_DWORD *)(*(&this->currentMission2) + 3644) + 828) <= 0
    || v4 )
  {
    if ( v4 == 3 && (int)*(&this->currentMission7) >= 200 ) /*0x51d904*/
      v4 = 37; /*0x51d906*/
  }
  else
  {
    v4 = 23; /*0x51d8ee*/
  }
  v12 = *(&this->currentMission3); /*0x51d90b*/
  if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] ) /*0x51d925*/
    return 0; /*0x51d92e*/
  if ( v4 == 27 ) /*0x51d937*/
  {
    if ( *(_DWORD *)(this->Vt34Thunk() + 1388) != -1 ) /*0x51d949*/
    {
      v24 = *(&this->vtable49); /*0x51d95d*/
      v25 = *(&this->uniqueId0); /*0x51d966*/
      v13 = *this; /*0x51d96a*/
      v26 = *(&this->uniqueId1); /*0x51d96f*/
      v14 = *(_DWORD *)(this->Vt34Thunk() + 1388); /*0x51d979*/
      StartAudioControllerAt(v14, (int)&v24, 0); /*0x51d97f*/
    }
  }
  else if ( v4 == 31 && *(_DWORD *)(this->Vt34Thunk() + 1392) != -1 ) /*0x51d996*/
  {
    v24 = *(&this->vtable49); /*0x51d9a6*/
    v15 = *this; /*0x51d9aa*/
    v25 = *(&this->uniqueId0); /*0x51d9af*/
    v26 = *(&this->uniqueId1); /*0x51d9b6*/
    v16 = *(_DWORD *)(this->Vt34Thunk() + 1392); /*0x51d9c2*/
    StartAudioControllerAt(v16, (int)&v24, 0); /*0x51d9ca*/
  }
  *(&this->currentMission3) = v4; /*0x51d9d2*/
  if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 ) /*0x51d9f1*/
  {
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, (unsigned __int8)byte_7EAF7F[4 * v4]); /*0x51da02*/
    v18 = (char *)(&this->nextArrayIndex4); /*0x51da0d*/
    *(&this->nextArrayIndex4) = g_CurrentFrame; /*0x51da13*/
    v19 = v25; /*0x51da19*/
  }
  else
  {
    ProductionTimeMult = (char *)(unsigned __int8)byte_7EAF7F[4 * v4]; /*0x51da27*/
    v18 = (char *)(&this->nextArrayIndex4); /*0x51da2e*/
    *(&this->nextArrayIndex4) = g_CurrentFrame; /*0x51da34*/
    v19 = v25; /*0x51da3a*/
  }
  *((_DWORD *)v18 + 1) = v19; /*0x51da3e*/
  *((_DWORD *)v18 + 2) = ProductionTimeMult; /*0x51da41*/
  *(&this->nextArrayIndex7) = ProductionTimeMult; /*0x51da44*/
  if ( a4 ) /*0x51da50*/
  {
    v20 = *(_DWORD *)(*(_DWORD *)(*(&this->currentMission2) + 3644) + 36 * v4 + 4); /*0x51da61*/
    if ( v20 <= 1 ) /*0x51da68*/
      v20 = 1; /*0x51da6a*/
    *(&this->nextArrayIndex2) = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v20 - 1); /*0x51da84*/
  }
  else
  {
    *(&this->nextArrayIndex2) = 0; /*0x51da8c*/
  }
  if ( !*(&this->vtable37) ) /*0x51da96*/
    this->PlayIdleAnim(); /*0x51daa1*/
  v21 = v4 - 5; /*0x51daa7*/
  if ( v21 ) /*0x51daaa*/
  {
    v22 = v21 - 2; /*0x51daac*/
    if ( !v22 || v22 == 20 ) /*0x51dab4*/
    {
      this->Crawling = 0; /*0x51dab6*/
      return 1; /*0x51dac5*/
    }
  }
  else
  {
    this->Crawling = 1; /*0x51dac8*/
  }
  return 1; /*0x51dabd*/
}
// 0x5200b0
AnimClass * * InfantryClass::ProcessIdleDeploy()
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( *(&this->currentMission7) > 0 ) /*0x5200bb*/
  {
    if ( !*(_BYTE *)(*(&this->currentMission2) + 3772) ) /*0x5200c7*/
      --*(&this->currentMission7); /*0x5200d1*/
    if ( !*(&this->currentMission7) && !*(&this->q04C1) && this->HasActiveParam() ) /*0x5200ef*/
      *(&this->q04C1) = *(_DWORD *)(*(&this->currentMission2) + 1668); /*0x520105*/
    v2 = *(&this->currentMission7); /*0x520113*/
    if ( this->Crawling ) /*0x52010b*/
    {
      if ( v2 < 50 ) /*0x52011e*/
      {
        v3 = *(&this->currentMission3); /*0x520124*/
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x520148*/
          this->ProcessDeployAction(7, 0, 0); /*0x520158*/
      }
    }
    else if ( v2 >= 50 ) /*0x520163*/
    {
      v4 = *(&this->currentMission3); /*0x520165*/
      if ( v4 != 27 && v4 != 28 && v4 != 29 && v4 != 30 ) /*0x52017d*/
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x520185*/
          goto LABEL_42; /*0x520185*/
        if ( !*(&this->isAliveFlag1) ) /*0x52018e*/
        {
          if ( !*(&this->q0A43) ) /*0x520198*/
            WinAPI::Wrapper(-2147467261); /*0x5201a7*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 16))(*(&this->q0A43)) ) /*0x5201b5*/
          {
  LABEL_42:
            if ( !*(_BYTE *)(*(&this->currentMission2) + 3775) ) /*0x5201c2*/
              this->ProcessDeployAction(5, 0, 0); /*0x5201d6*/
          }
        }
      }
    }
  }
  IDA_LOBYTE(v5) = *(_BYTE *)(*(&this->currentMission2) + 3775); /*0x5201e2*/
  if ( (_BYTE)v5 ) /*0x5201ea*/
  {
    if ( *(&this->currentMission7) > 50 ) /*0x5201f3*/
    {
      v5 = *(&this->currentMission3); /*0x5201f5*/
      if ( v5 != 27 && v5 != 28 && v5 != 29 && v5 != 30 ) /*0x52020d*/
      {
        IDA_LOBYTE(v5) = this->isFallingDown; /*0x52020f*/
        if ( !(_BYTE)v5 ) /*0x520217*/
        {
          if ( !*(&this->q0A43) ) /*0x520219*/
            WinAPI::Wrapper(-2147467261); /*0x520228*/
          IDA_LOBYTE(v5) = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 16))(*(&this->q0A43)); /*0x520236*/
          if ( !(_BYTE)v5 ) /*0x52023b*/
          {
            v5 = *(&this->isAliveFlag1); /*0x52023d*/
            if ( !v5 ) /*0x520245*/
              IDA_LOBYTE(v5) = this->FindMoveTarget(&dword_A8F200, 1, 0); /*0x520254*/
          }
        }
      }
    }
  }
  return v5; /*0x52025a*/
}
// 0x521b60
AnimClass * InfantryClass::CanInitiateDeploy()
{
  int v2; // eax
  int v3; // esi

  v2 = *(&this->uniqueId3); /*0x521b63*/
  if ( v2 == 6 || v2 == 21 || this->unknownBool68D || this->isFallingDown ) /*0x521b89*/
    return 0; /*0x521b89*/
  if ( !*(&this->q0A43) ) /*0x521b93*/
    WinAPI::Wrapper(-2147467261); /*0x521ba2*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 128))(*(&this->q0A43)) /*0x521be7*/
    && this->GetPrimaryOrFallback() != 5
    && this->GetPrimaryOrFallback() != 15
    && (this->GetPrimaryOrFallback() != 1 || *(&this->q0443)) )
  {
    return 0; /*0x521be7*/
  }
  v3 = *(&this->currentMission3); /*0x521bf1*/
  return v3 == -1 || byte_7EAF7C[4 * v3]; /*0x521c0b*/
}
// 0x5221d0
AnimClass * InfantryClass::CanDeployAtCell()
{
  void *v5; // eax
  _DWORD *v6; // eax
  signed int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // eax

  (*((void (__thiscall **)(void **))*this + 114))(this); /*0x5221d8*/
  if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x5221e4*/
    return 0; /*0x5221f3*/
  if ( (*((int (__thiscall **)(void **))*this + 114))(this) > 0 ) /*0x522202*/
    return 1; /*0x522202*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(&this->attachedTag5)) ) /*0x52220e*/
  {
    v5 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x522221*/
    if ( v5 ) /*0x522228*/
    {
      if ( InfantryClass::ValidateAttackPosition((int)v5) ) /*0x52222c*/
        return 0; /*0x52223b*/
    }
  }
  v6 = CellCoord::To_CellObj(&MapClass_Instance, a3); /*0x52224a*/
  if ( !MapSeed::CheckTileMatch(&MapClass_Instance, a2, a3, 7, this->onBridge, IDA_BYTE1(v6[80]) & 1, 0) ) /*0x52226b*/
    return 1; /*0x52226b*/
  if ( *a2 == *a3 && a2[1] == a3[1] ) /*0x522288*/
    return 0; /*0x522290*/
  v7 = abs32(a3[1] - a2[1]); /*0x5222a5*/
  v8 = *a3 - *a2; /*0x5222ac*/
  v9 = (IDA_HIDWORD(v8) ^ v8) - IDA_HIDWORD(v8); /*0x5222af*/
  if ( v9 <= v7 ) /*0x5222b3*/
    v9 = v7; /*0x5222b5*/
  if ( v9 == 1 ) /*0x5222ba*/
    return 0; /*0x5222c2*/
  if ( v9 >= 4 /*0x5222e3*/
    || !LayerClass::IsWithinUsableArea(&MapClass_Instance, a2, 1)
    || !LayerClass::IsWithinUsableArea(&MapClass_Instance, a3, 1) )
  {
    return 1; /*0x52232d*/
  }
  v10 = CellCoord::To_CellObj(&MapClass_Instance, a3); /*0x5222f4*/
  IDA_LOBYTE(v11) = this->onBridge; /*0x5222ff*/
  v12 = v10[80] >> 8; /*0x522305*/
  IDA_LOBYTE(v12) = v12 & 1; /*0x522308*/
  return Pathfinding::CalcDistance((int)g_AudioInitFlag, a2, a3, (int)this, v11, v12, 7) > 7; /*0x5221ed*/
}
// 0x521eb0
AnimClass * InfantryClass::CheckDeployPath()
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  LPVOID ppv; // [esp+30h] [ebp-1Ch] BYREF
  int v15; // [esp+34h] [ebp-18h] BYREF
  BOOL v16; // [esp+38h] [ebp-14h] BYREF
  _BYTE v17[16]; // [esp+3Ch] [ebp-10h] BYREF

  v2 = 0; /*0x521ebe*/
  if ( *(&this->isAliveFlag1) ) /*0x521eb8*/
  {
    v3 = 0; /*0x521ec5*/
    v4 = &this->pathDirections; /*0x521ec7*/
    do /*0x521ee1*/
    {
      if ( *v4 == -1 ) /*0x521ed2*/
        break; /*0x521ed2*/
      if ( *v4 == 8 ) /*0x521ed7*/
        break; /*0x521ed7*/
      ++v2; /*0x521ed9*/
      ++v3; /*0x521eda*/
      ++v4; /*0x521edb*/
    }
    while ( v3 < 24 ); /*0x521ee1*/
    if ( v2 >= 4 ) /*0x521ee6*/
      return 0; /*0x521ee6*/
  }
  if ( !*(_BYTE *)(*(&this->currentMission2) + 3476) ) /*0x521ef2*/
    return 0; /*0x521ef2*/
  v5 = &this->Locomotor; /*0x521f00*/
  InfantryClass::updateOccupiedBuilding(&this->q0A43); /*0x521f0b*/
  if ( !v15 ) /*0x521f16*/
    WinAPI::Wrapper(-2147467261); /*0x521f1d*/
  (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v15 + 12))(v15, v17); /*0x521f2e*/
  v16 = memcmp(v17, &g_CLSID_JumpjetLocomotion, 0x10u) != 0; /*0x521f4e*/
  ComPtr::Release_Alt(&v15); /*0x521f56*/
  if ( v16 ) /*0x521f68*/
    return 0; /*0x521f68*/
  v6 = *v5; /*0x521f6e*/
  v15 = 0; /*0x521f71*/
  if ( !v6 ) /*0x521f77*/
    return 0; /*0x521f77*/
  v7 = StreamClass::Set(&v15, &this->q0A43); /*0x521f82*/
  if ( v7 < 0 && v7 != -2147467262 ) /*0x521f90*/
    WinAPI::Wrapper(v7); /*0x521f93*/
  if ( !v15 ) /*0x521f9e*/
    return 0; /*0x521f9e*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v15 + 28))(v15) ) /*0x521fa7*/
    goto LABEL_36; /*0x521fac*/
  ppv = 0; /*0x521fbe*/
  v8 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x521fc2*/
  if ( v8 < 0 && v8 != -2147467262 ) /*0x521fd0*/
    WinAPI::Wrapper(v8); /*0x521fd3*/
  if ( !ppv ) /*0x521fde*/
    WinAPI::Wrapper(-2147467261); /*0x521fe5*/
  (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x521ff2*/
  v16 = 0; /*0x521ff9*/
  if ( ppv ) /*0x521fff*/
  {
    v9 = StreamClass::Set(&v16, &ppv); /*0x52200a*/
    if ( v9 < 0 && v9 != -2147467262 ) /*0x522018*/
      WinAPI::Wrapper(v9); /*0x52201b*/
  }
  COMObject::SwapReference(&v15, v16); /*0x522029*/
  Release2COM(&v16); /*0x522032*/
  v15 = v15; /*0x522037*/
  if ( !v15 ) /*0x52203d*/
  {
    if ( !ppv ) /*0x5220cf*/
      return 0; /*0x5220e8*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220d4*/
  LABEL_36:
    if ( v15 ) /*0x5220dd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15); /*0x5220e2*/
    return 0; /*0x5220e2*/
  }
  v11 = *v5; /*0x522043*/
  *(&this->lastLayer6) = -1; /*0x522046*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v15 + 12))(v15, v11); /*0x522054*/
  InfantryClass::checkBridgeClearance(ppv); /*0x52205e*/
  v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*(&this->isAliveFlag1) + 72))(*(&this->isAliveFlag1), v17); /*0x522070*/
  if ( !*v5 ) /*0x52207b*/
    WinAPI::Wrapper(-2147467261); /*0x522087*/
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->q784)(*v5, *v12, v12[1], v12[2]); /*0x5220a0*/
  if ( ppv ) /*0x5220a9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x5220ae*/
  if ( v15 ) /*0x5220b7*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15); /*0x5220bc*/
  return 1; /*0x5220c1*/
}
// 0x522fe0
AnimClass * InfantryClass::CreateDeployLocomotor()
{
  int v5; // edi
  void *v6; // eax
  int v7; // eax
  int v8; // eax
  LPVOID v9; // edi
  int v13; // edi
  void *v15; // eax
  LPVOID ppv; // [esp+50h] [ebp-8h] BYREF
  int v18; // [esp+54h] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->needsSave4))(this) /*0x52302c*/
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->onBridge2))(this)
    || *(&this->radioOperator6)
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->missionQueued8))(this)
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->missionStatus2))(this) )
  {
    return 0; /*0x523239*/
  }
  if ( !this->Locomotor ) /*0x52303a*/
    WinAPI::Wrapper(-2147467261); /*0x523049*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)&this->q0A43) + 156))(this->Locomotor, 0); /*0x523059*/
  (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)&this->q0604))(this, &a2); /*0x523068*/
  v5 = *(_DWORD *)this; /*0x52306e*/
  *(&this->unloadTimer8) = 1; /*0x52307c*/
  v6 = Coord::To_Cell(&MapClass_Instance, &a2); /*0x523083*/
  (*(void (__thiscall **)(_BYTE *, void *, int))(v5 + 1152))(this, v6, 1); /*0x52308b*/
  if ( !this->Locomotor ) /*0x523091*/
    WinAPI::Wrapper(-2147467261); /*0x5230ac*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(**((_DWORD **)&this->q0A43) + 120))(this->Locomotor, a2, a3, a4); /*0x5230c7*/
  ppv = 0; /*0x5230d8*/
  v7 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x5230dc*/
  if ( v7 < 0 && v7 != -2147467262 ) /*0x5230ea*/
    WinAPI::Wrapper(v7); /*0x5230ed*/
  v18 = 0; /*0x5230f6*/
  if ( ppv ) /*0x5230fc*/
  {
    v8 = StreamClass::Set(&v18, &ppv); /*0x523107*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x523115*/
      WinAPI::Wrapper(v8); /*0x523118*/
  }
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &a2) + 80) & 0x100) != 0 ) /*0x523135*/
    a4 += dword_A8F234; /*0x523143*/
  if ( !ppv ) /*0x52314d*/
    WinAPI::Wrapper(-2147467261); /*0x523154*/
  (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x523161*/
  if ( !v18 ) /*0x523170*/
    WinAPI::Wrapper(-2147467261); /*0x523177*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v18 + 12))(v18, this->Locomotor); /*0x523184*/
  v9 = (LPVOID)this->Locomotor; /*0x523187*/
  ppv = ppv; /*0x52318d*/
  if ( v9 != ppv ) /*0x523193*/
  {
    this->Locomotor = ppv; /*0x523197*/
    if ( ppv ) /*0x52319d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 4))(ppv); /*0x5231a2*/
    if ( v9 ) /*0x5231a7*/
      (*(void (__stdcall **)(LPVOID))(v9->q008)(v9); /*0x5231ac*/
  }
  a2 = a2; /*0x5231af*/
  a3 = a3; /*0x5231b3*/
  v13 = *(_DWORD *)this; /*0x5231bd*/
  *(&this->radioOperator6) = 1; /*0x5231c1*/
  this->tiltForwardsAngle = a2; /*0x5231c8*/
  a4 = a4; /*0x5231ca*/
  this->tiltSidewaysRate = a3; /*0x5231ce*/
  this->tiltForwardsRate = a4; /*0x5231d6*/
  v15 = Coord::To_Cell(&MapClass_Instance, &a2); /*0x5231de*/
  (*(void (__thiscall **)(_BYTE *, void *, int))(v13 + 1152))(this, v15, 1); /*0x5231e6*/
  if ( !this->Locomotor ) /*0x5231ec*/
    WinAPI::Wrapper(-2147467261); /*0x5231f9*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)&this->q0A43) + 156))(this->Locomotor, 0); /*0x523208*/
  if ( v18 ) /*0x523214*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18); /*0x523219*/
  if ( ppv ) /*0x523222*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x523227*/
  return 1; /*0x52322c*/
}
// 0x522c00
AnimClass * InfantryClass::StartBombDeploy()
{
  int result; // eax

  if ( a2 ) /*0x522c09*/
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 32, 0, 0); /*0x522c09*/
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->idleActionTimer0))(this); /*0x522c0d*/
  if ( (_BYTE)result ) /*0x522c15*/
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 32, 0, 0); /*0x522c21*/
  return result; /*0x522c27*/
}
// 0x5228d0
AnimClass * InfantryClass::IsBombDeployMission()
{
  int v1; // eax
  BOOL result; // eax

  result = 0; /*0x5228fa*/
  if ( *(_BYTE *)(*(&this->currentMission2) + 3784) ) /*0x5228d6*/
  {
    v1 = *(&this->currentMission3); /*0x5228e0*/
    if ( v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30 ) /*0x5228f8*/
      return 1; /*0x5228de*/
  }
  return result; /*0x5228ff*/
}
// 0x514310
AnimClass * InfantryClass::DeployAnimation()
{
  _DWORD *v1; // edi
  _BYTE *v2; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int *v8; // ebx
  double v9; // st7
  __int16 v10; // bx
  int v11; // ebx
  _WORD *v12; // eax
  bool v13; // bl
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  double v17; // st7
  int Member; // eax
  unsigned __int16 v19; // bx
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  bool v22; // al
  int v23; // eax
  int v24; // ecx
  int v25; // ebx
  int *v26; // ecx
  int v27; // ecx
  unsigned int v28; // ebx
  unsigned int v29; // edi
  double v30; // st7
  double v31; // st7
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  _DWORD *v35; // eax
  _BYTE *v36; // ecx
  int v38; // eax
  int v39; // ecx
  _DWORD *v40; // ebx
  char v41; // bl
  _BYTE *v42; // ecx
  void **v43; // eax
  int *v44; // ecx
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int *v48; // edx
  void *v49; // eax
  int *v50; // ecx
  int *v51; // eax
  int v52; // edi
  _WORD *v53; // [esp+20h] [ebp-5Ch]
  double v54; // [esp+34h] [ebp-48h] BYREF
  double v55; // [esp+3Ch] [ebp-40h] BYREF
  int v57; // [esp+4Ch] [ebp-30h] BYREF
  int v58; // [esp+50h] [ebp-2Ch]
  double v61; // [esp+5Ch] [ebp-20h] BYREF
  int v62; // [esp+64h] [ebp-18h]
  int v63; // [esp+70h] [ebp-Ch] BYREF
  int v64; // [esp+74h] [ebp-8h]
  int v65; // [esp+78h] [ebp-4h]

  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x514322*/
  {
    v1 = (_DWORD *)(a1 - 4); /*0x51432d*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x514337*/
    {
      UpdateFootFacing(a1 - 4); /*0x514344*/
      v2 = *(_BYTE **)(a1 + 8); /*0x514349*/
      if ( !v2[144] ) /*0x51434c*/
        return 0; /*0x51435e*/
      v4 = (*(int (__thiscall **)(_BYTE *))(v2->u32_1D0)(v2); /*0x514363*/
      v5 = *(_DWORD *)(a1 + 8); /*0x514369*/
      v4 = v4; /*0x51436c*/
      IDA_LODWORD(v55) = (*(int (__thiscall **)(int))(v5->u32_538)(v5); /*0x514378*/
      v6 = Math::RoundToInt((double)IDA_SLODWORD(v55) * *(double *)(a1 + 76)); /*0x514383*/
      v7 = *(_DWORD *)(a1 + 8); /*0x514388*/
      IDA_LODWORD(v54) = v6; /*0x51438b*/
      v8 = (int *)(*(int (__thiscall **)(int, int *))(v7->q048)(v7, &v63); /*0x514399*/
      Int64::Equal(v8, (_DWORD *)(a1 + 32)); /*0x5143a1*/
      v9 = Math::CalcAngle((double)v8[1] - (double)*(int *)(a1 + 36), (double)*(int *)(a1 + 32) - (double)*v8); /*0x5143be*/
      v10 = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427); /*0x5143d7*/
      if ( !IDA_LODWORD(v54) && !abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v55) - v10) ) /*0x514403*/
      {
        v13 = 1; /*0x514466*/
        if ( v1[9] != g_ScoreDisplayState1 || v1[10] != g_ScoreDisplayState2 || v1[11] != g_ScoreDisplayState3 ) /*0x514438*/
        {
          v11 = v1[3]; /*0x51443a*/
          v53 = Coord::ToCell(v1 + 9, &v55); /*0x514449*/
          v12 = (_WORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 440))(v11, &v54); /*0x514451*/
          if ( !CellStruct::Equals(v12, v53) ) /*0x514459*/
            v13 = 0; /*0x514438*/
        }
        v14 = v1[3]; /*0x514468*/
        v1[18] = 0; /*0x51446b*/
        v1[19] = 1072693248; /*0x514472*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v14 + 1348))(v14, 0, 1072693248); /*0x514482*/
        MovementAI::StepFootClass((int *)(a1 - 4), 0); /*0x51448c*/
        if ( v13 ) /*0x514493*/
          MovementAI::MainFootClass((int *)(a1 - 4), 1); /*0x514499*/
        IDA_LODWORD(v55) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1336))(*(_DWORD *)(a1 + 8)); /*0x5144a9*/
        IDA_LODWORD(v54) = Math::RoundToInt((double)IDA_SLODWORD(v55) * *(double *)(a1 + 76)); /*0x5144b9*/
      }
      v15 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x5144ce*/
      v16 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 164); /*0x5144d5*/
      v58 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160) - *(_DWORD *)(a1 + 36); /*0x5144d8*/
      v65 = v16; /*0x5144e0*/
      v57 = v15 - *(_DWORD *)(a1 + 32); /*0x5144e9*/
      v17 = Math::Sqrt((double)v57 * (double)v57 + (double)v58 * (double)v58); /*0x514502*/
      if ( IDA_SLODWORD(v54) >= (int)Math::RoundToInt(v17) ) /*0x514513*/
      {
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1718) = 1; /*0x51451e*/
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1719) = 0; /*0x514528*/
        *(_BYTE *)(a1 + 108) = 0; /*0x514531*/
        MovementAI::StepFootClass((int *)(a1 - 4), 0); /*0x514535*/
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1504) == -1 /*0x51456a*/
          && *(_DWORD *)(a1 + 20) == g_ScoreDisplayState1
          && *(_DWORD *)(a1 + 24) == g_ScoreDisplayState2
          && *(_DWORD *)(a1 + 28) == g_ScoreDisplayState3 )
        {
          *(_DWORD *)(a1 + 32) = g_ScoreDisplayState1; /*0x51456f*/
          *(_DWORD *)(a1 + 36) = g_ScoreDisplayState2; /*0x514578*/
          *(_DWORD *)(a1 + 40) = g_ScoreDisplayState3; /*0x514581*/
        }
        Member = Team::GetMember(*(_DWORD **)(a1 + 8), 0); /*0x514589*/
        v19 = dword_A8F160; /*0x51458e*/
        IDA_LODWORD(v55) = dword_A8F160; /*0x514596*/
        if ( Member ) /*0x51459a*/
        {
          v20 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Member + 76))( /*0x5145a9*/
                            Member,
                            &v63,
                            *(_DWORD *)(a1 + 8));
          IDA_LOWORD(v55) = *v20 / 256; /*0x5145bc*/
          IDA_WORD1(v55) = v20[1] / 256; /*0x5145d0*/
          v19 = IDA_LOWORD(v55); /*0x5145d5*/
        }
        v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 440))(*(_DWORD *)(a1 + 8), &v57); /*0x5145e7*/
        v22 = *v21 == IDA___PAIR32__(IDA_WORD1(v55), v19); /*0x5145f0*/
        if ( *(_DWORD *)(a1 + 20) != g_ScoreDisplayState1 /*0x51462c*/
          || *(_DWORD *)(a1 + 24) != g_ScoreDisplayState2
          || *(_DWORD *)(a1 + 28) != g_ScoreDisplayState3
          || v22 )
        {
          v23 = MovementAI::MainFootClass((int *)(a1 - 4), 1); /*0x514636*/
          v24 = *(_DWORD *)(a1 + 8); /*0x51463b*/
          v25 = v23; /*0x51463e*/
          if ( !v24->u8_90 || v24->u8_81 || v24->u8_8D ) /*0x51465c*/
            return 7; /*0x5149f4*/
          if ( !v23 /*0x514696*/
            && *(_DWORD *)(a1 + 32) == g_ScoreDisplayState1
            && *(_DWORD *)(a1 + 36) == g_ScoreDisplayState2
            && *(_DWORD *)(a1 + 40) == g_ScoreDisplayState3 )
          {
            v63 = v24->q09C; /*0x5146a4*/
            v64 = v24->q280; /*0x5146ab*/
            v65 = v24->q0A4; /*0x5146b2*/
            (*(void (__thiscall **)(int, int *))(v24->u32_F0)(v24, &v63); /*0x5146bd*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 396))(*(_DWORD *)(a1 + 8), 2); /*0x5146ca*/
            v24 = *(_DWORD *)(a1 + 8); /*0x5146d0*/
            if ( !v24->u8_90 || v24->u8_81 || v24->u8_8D ) /*0x5146e7*/
              return 0; /*0x5146f9*/
          }
          if ( v25 == 7 ) /*0x5146ff*/
          {
            if ( v24->q1A1 >= 0 ) /*0x51470d*/
              return 0; /*0x514717*/
            (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[3] + 1152))(v1[3], 0, 1); /*0x514723*/
            v1[20] = 0; /*0x51472b*/
            v1[18] = 0; /*0x51472e*/
            v1[21] = 0; /*0x514731*/
            v1[19] = 0; /*0x514734*/
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v1[3] + 1348))(v1[3], 0, 0); /*0x514740*/
          }
          else if ( v25 ) /*0x51497c*/
          {
            v39 = v1[3]; /*0x514982*/
            v1[20] = 0; /*0x514985*/
            v1[18] = 0; /*0x514988*/
            v1[21] = 0; /*0x51498b*/
            v1[19] = 0; /*0x51498e*/
            (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v39 + 1348))(v39, 0, 0); /*0x514995*/
            v40 = v1 + 9; /*0x5149a4*/
            if ( v1[9] != g_ScoreDisplayState1 || v1[10] != g_ScoreDisplayState2 || v1[11] != g_ScoreDisplayState3 ) /*0x5149c1*/
            {
              (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[3] + 244))(v1[3], v40); /*0x5149cb*/
              *v40 = g_ScoreDisplayState1; /*0x5149d7*/
              v1[10] = g_ScoreDisplayState2; /*0x5149df*/
              v1[11] = g_ScoreDisplayState3; /*0x5149e7*/
            }
            goto LABEL_66; /*0x5149ea*/
          }
        }
      }
      if ( IDA_SLODWORD(v54) > 0 ) /*0x51474c*/
      {
        v26 = *(int **)(a1 + 8); /*0x514752*/
        v63 = v26[39]; /*0x514761*/
        v64 = v26[40]; /*0x514768*/
        v65 = v26[41]; /*0x51476f*/
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v26 + 192))(v26) /*0x5147a2*/
          && (*(_DWORD *)(a1 + 32) != g_ScoreDisplayState1
           || *(_DWORD *)(a1 + 36) != g_ScoreDisplayState2
           || *(_DWORD *)(a1 + 40) != g_ScoreDisplayState3) )
        {
          v27 = *(_DWORD *)(a1 + 8); /*0x5147a4*/
          v61 = v27->q09C; /*0x5147b3*/
          v62 = v27->q0A4; /*0x5147c1*/
          (*(void (__thiscall **)(int, double *))(v27->u32_F4)(v27, &v61); /*0x5147cc*/
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1718) = 0; /*0x5147d5*/
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1719) = 0; /*0x5147df*/
        }
        v63 = v63; /*0x5147f2*/
        v64 = v64; /*0x5147fa*/
        v55 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v57) - 0x3FFF) * -0.00009587672516830327; /*0x51481a*/
        v28 = IDA_HIDWORD(v55); /*0x514822*/
        v29 = IDA_LODWORD(v55); /*0x514826*/
        v54 = (double)IDA_SLODWORD(v54); /*0x51482c*/
        v61 = (double)v64; /*0x514834*/
        v30 = Math::SinCos(v55); /*0x514838*/
        IDA_LODWORD(v55) = Math::RoundToInt(v61 - v30 * v54); /*0x51484c*/
        v31 = Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v28, v29))); /*0x514850*/
        v32 = Math::RoundToInt(v31 * v54 + (double)v63); /*0x514860*/
        v33 = *(_DWORD *)(a1 + 8); /*0x514865*/
        v63 = v32; /*0x51486e*/
        v64 = IDA_LODWORD(v55); /*0x514878*/
        v34 = v33->q09C; /*0x51487c*/
        IDA_HIDWORD(v61) = v33->q280; /*0x514881*/
        v62 = v33->q0A4; /*0x514888*/
        IDA_WORD1(v54) = IDA_SHIDWORD(v61) / 256; /*0x5148a7*/
        if ( (unsigned __int16)(v63 / 256) == (unsigned __int16)(v34 / 256) /*0x5148d9*/
          && (unsigned __int16)(IDA_SLODWORD(v55) / 256) == IDA_WORD1(v54) )
        {
          v41 = v33->q074; /*0x5149f7*/
          v33->q074 = 0; /*0x5149fa*/
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v63); /*0x514a08*/
          ObjectClass::SetAnim(*(_DWORD **)(a1 + 8), v4); /*0x514a16*/
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 116) = v41; /*0x514a1e*/
        }
        else
        {
          (*(void (__thiscall **)(int, _DWORD))(v33->q124)(v33, 0); /*0x5148e3*/
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v63); /*0x5148f3*/
          ObjectClass::SetAnim(*(_DWORD **)(a1 + 8), v4); /*0x514901*/
          v35 = Coord::To_Cell(&MapClass_Instance, &v63); /*0x514910*/
          v36 = *(_BYTE **)(a1 + 8); /*0x514915*/
          v35 = v35; /*0x514918*/
          if ( !v36[140] /*0x51493f*/
            && (v35[80] & 0x100) != 0
            && (*(int (__thiscall **)(_BYTE *))(v36->u32_1C8)(v36) >= dword_A8F1B4 )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 8) + 140) = 1; /*0x514944*/
          }
          v38 = *(_DWORD *)(a1 + 8); /*0x51494b*/
          if ( v38->q08C == 1 && (v35[80] & 0x100) == 0 ) /*0x51495d*/
            v38->q08C = 0; /*0x51495f*/
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 1); /*0x51496d*/
        }
      }
    }
  }
  LABEL_66:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 128))(a1) ) /*0x514a24*/
  {
    if ( !((int)g_CurrentFrame % 10) ) /*0x514a3d*/
    {
      v42 = *(_BYTE **)(a1 + 8); /*0x514a47*/
      if ( !v42[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(v42->u32_1BC)(v42) + 236) == 2 ) /*0x514a63*/
      {
        if ( *((_DWORD *)g_RulesClass_Instance + 37) ) /*0x514a6a*/
        {
          v43 = (void **)RA2_OPNEW(0x1C8u); /*0x514a79*/
          if ( v43 ) /*0x514a83*/
          {
            v44 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514a8a*/
            v63 = *v44; /*0x514a9d*/
            v64 = v44[1]; /*0x514aa4*/
            v65 = v44[2]; /*0x514ab0*/
            AnimClass::ctor(v43, *((void **)g_RulesClass_Instance + 37), &v63, 0, 1, (void *)0x600, 0, 0); /*0x514ac3*/
          }
        }
      }
    }
  }
  BuildingLightClass::UpdateOscillation(a1 - 4); /*0x514acb*/
  if ( *(_BYTE *)(a1 + 100) )
  {
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 96))(a1) ) /*0x514ade*/
      goto LABEL_81; /*0x514ade*/
    IDA_LOWORD(v4) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v57) /*0x514b0a*/
                + (*(_WORD *)(a1 + 104) << 8);
    FacingClass::Set_SyncLog(&v4); /*0x514b1d*/
    v45 = *(_DWORD *)(a1 + 104); /*0x514b22*/
    v46 = abs32(v45); /*0x514b2a*/
    if ( v46 >= 1 ) /*0x514b2f*/
      v46 = 1; /*0x514b31*/
    v47 = v45 >= 0 ? v45 - v46 : v46 + v45;
    *(_DWORD *)(a1 + 104) = v47; /*0x514b42*/
    if ( !v47 ) /*0x514b47*/
  LABEL_81:
      *(_BYTE *)(a1 + 100) = 0; /*0x514b49*/
    if ( !*(_BYTE *)(a1 + 100) ) /*0x514b4d*/
    {
      v48 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514b5b*/
      v63 = *v48; /*0x514b63*/
      v64 = v48[1]; /*0x514b6f*/
      v65 = v48[2]; /*0x514b7b*/
      v49 = Coord::To_Cell(&MapClass_Instance, &v63); /*0x514b7f*/
      BuildingClass::CreateIdleAnim((int)v49); /*0x514b86*/
      v50 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514b8e*/
      v63 = *v50; /*0x514b96*/
      v64 = v50[1]; /*0x514ba2*/
      v65 = v50[2]; /*0x514ba9*/
      if ( *((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v63) + 59) == 2 ) /*0x514bbe*/
      {
        v51 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514bc3*/
        v63 = *v51; /*0x514bcc*/
        v64 = v51[1]; /*0x514bd3*/
        v52 = v51[2]; /*0x514bd7*/
        v63 = *v51; /*0x514bdc*/
        v64 = v51[1]; /*0x514be7*/
        v65 = v51[2]; /*0x514bf4*/
        if ( v52 < dword_A8F1C0 + Cell::GetGroundHeight(&v63) ) /*0x514c05*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 236))(*(_DWORD *)(a1 + 8)); /*0x514c0c*/
      }
    }
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x514358*/
}
// 0x521d80
AnimClass * InfantryClass::ComputeDeploySpeedFactor()
{
  int v2; // ecx

  v2 = TechnoClass::ComputeSpeedFactorEx((double *)this); /*0x521d88*/
  if ( *(_BYTE *)(this + 1755) ) /*0x521d8a*/
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3773) ) /*0x521d9a*/
      return ((unsigned int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 31) /*0x521dbb*/
           + ((int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 1)
           + v2;
    v2 += v2 / 2; /*0x521dc3*/
  }
  return v2; /*0x521da9*/
}
// 0x5218e0
AnimClass * InfantryClass::GetDeployWeaponIndex()
{
  int v3; // ecx
  int v4; // eax

  v3 = this->Type; /*0x5218e3*/
  if ( !*(_BYTE *)(v3 + 1708) ) /*0x5218e9*/
    return TechnoClass::SelectWeapon(this); /*0x521955*/
  v4 = *((_DWORD *)this + 433); /*0x5218f3*/
  if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 ) /*0x52190b*/
    return *(_DWORD *)(v3 + 1704); /*0x52190d*/
  if ( !this->inOpenToppedTransport /*0x521932*/
    || *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3408) == -1 )
  {
    return 0; /*0x521948*/
  }
  return *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3408); /*0x521913*/
}
// 0x522600
AnimClass * InfantryClass::FireAtTargetPos(int a2, int a3, int a4)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v4 = *this; /*0x52260d*/
  v6 = *(_DWORD *)(*(&this->currentMission2) + 160); /*0x52260f*/
  return (*(int (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, _DWORD, int))(v4 + 364))( /*0x522639*/
           this,
           &v6,
           0,
           g_RulesClass_Instance->SilverCrate[5],
           0,
           1,
           0,
           a3);
}
/* ASM:
push    ecx
mov     eax, [ecx+6C0h]
mov     edx, [eax+0A0h]
mov     eax, [ecx]
mov     [esp+4+var_4], edx
mov     edx, [esp+4+arg_4]
push    edx
mov     edx, ds:8871E0h
push    0
push    1
mov     edx, [edx+0FA8h]
push    0
push    edx
lea     edx, [esp+18h+var_4]
push    0
push    edx
call    dword ptr [eax+16Ch]
pop     ecx
retn    0Ch
*/

// 0x51df60
int InfantryClass::FireWeaponWithCleanup(int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  this->unknownBool68D = 0; /*0x51df70*/
  v4 = TechnoClass::FireWeapon(this); /*0x51df7c*/
  if ( v4 ) /*0x51df80*/
  {
    if ( !this->inLimbo ) /*0x51df82*/
    {
      if ( this->Type->qEBF ) /*0x51df92*/
      {
        if ( !this->barrelRecoil ) /*0x51df9c*/
        {
          v5 = *(_DWORD *)this; /*0x51dfa6*/
          this->PanicDurationLeft = 300; /*0x51dfaa*/
          if ( (*(int (__thiscall **)(void *))(v5 + 388))(this) == 1 /*0x51dfcc*/
            || (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this) == 15 )
          {
            (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 5, 0); /*0x51dfd6*/
          }
        }
      }
    }
  }
  return v4; /*0x51dfde*/
}
/* ASM:
mov     eax, [esp+arg_4]
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esp+8+arg_0]
push    eax             ; int
push    ecx             ; int
mov     ecx, esi        ; this
mov     byte ptr [esi+68Dh], 0
call    TechnoClass__FireWeapon
mov     edi, eax
test    edi, edi
jz      short loc_51DFDC
mov     al, [esi+81h]
test    al, al
jnz     short loc_51DFDC
mov     edx, [esi+6C0h]
mov     al, [edx+0EBFh]
test    al, al
jz      short loc_51DFDC
mov     eax, [esi+2FCh]
test    eax, eax
jnz     short loc_51DFDC
mov     eax, [esi]
mov     ecx, esi
mov     dword ptr [esi+6D4h], 12Ch
call    dword ptr [eax+184h]
cmp     eax, 1
jz      short loc_51DFCE
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Fh
jnz     short loc_51DFDC

loc_51DFCE:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+5D↑j
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_51DFDC:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+20↑j
; InfantryClass__FireWeaponWithCleanup+2A↑j ...
mov     eax, edi
pop     edi
pop     esi
retn    8
*/

// 0x51c8b0
int InfantryClass::GetFireError(int* target, int weapon_idx, int a4, int a5)
{
  int v6; // eax
  int result; // eax
  int *v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // esi
  int v16; // esi
  char v17[16]; // [esp+14h] [ebp-10h] BYREF

  v6 = this->SequenceAnim; /*0x51c8b8*/
  if ( v6 == 11 /*0x51c8ee*/
    || v6 == 12
    || v6 == 13
    || v6 == 14
    || v6 == 15
    || v6 == 34
    || v6 == 35
    || v6 == 36
    || v6 == 20
    || v6 == 21 )
  {
    return 6; /*0x51c8fb*/
  }
  v8 = weapon_idx; /*0x51c907*/
  if ( TechnoClass::GetValue((_DWORD *)this, -1) < 0 /*0x51c937*/
    && (!weapon_idx
     || (*(int (__thiscall **)(int *))(*weapon_idx + 44))(weapon_idx) != 15
     || BuildingClass::GetHealthRatio(weapon_idx) >= *(double *)&g_RulesClass_Instance[1].ChronoBeam) )
  {
    return 5; /*0x51c944*/
  }
  if ( weapon_idx )
  {
    if ( (*(int (__thiscall **)(int *))(*weapon_idx + 44))(weapon_idx) == 1 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)&this->attachedTag2))(this) + 1682) )
      {
        v9 = weapon_idx[170]; /*0x51c96b*/
        if ( v9 )
        {
          v10 = this ? ((this->abstractFlags & 1) != 0 ? this : 0) : 0;
          if ( v9 != v10 ) /*0x51c98a*/
            return 5; /*0x51c997*/
        }
      }
    }
  }
  result = TriggerTypeClass::ReadINI((_DWORD *)this, a4, weapon_idx, a4, a5); /*0x51c9a7*/
  if ( !result ) /*0x51c9b2*/
  {
    if ( *(double *)(&this->q2300) > 0.1 ) /*0x51c9c9*/
      return 7; /*0x51c9c9*/
    if ( this->Archive ) /*0x51c9cf*/
    {
      v11 = this->SequenceAnim; /*0x51c9d9*/
      if ( v11 != -1 && !byte_7EAF7C[4 * v11] ) /*0x51c9e4*/
        return 7; /*0x51c9ed*/
    }
    if ( this->Type->IsSelectableCombatant ) /*0x51c9f9*/
    {
      v12 = this->Locomotor; /*0x51ca07*/
      a5 = 0; /*0x51ca15*/
      if ( !v12 ) /*0x51ca1d*/
        goto LABEL_37; /*0x51ca1d*/
      v13 = StreamClass::Set2(&a5, (_DWORD *)(&this->hijackerInfantryType2)); /*0x51ca24*/
      if ( v13 < 0 && v13 != -2147467262 ) /*0x51ca32*/
        WinAPI::Wrapper(v13); /*0x51ca35*/
      if ( !a5 ) /*0x51ca40*/
  LABEL_37:
        WinAPI::Wrapper(-2147467261); /*0x51ca47*/
      (*(void (__stdcall **)(int, char *))(*(_DWORD *)a5 + 12))(a5, v17); /*0x51ca59*/
      v14 = memcmp(v17, (const char *)&g_CLSID_JumpjetLocomotion, 16); /*0x51ca6a*/
      ComPtr::Release_Alt(&a5); /*0x51ca79*/
      if ( !v14 && this->Type->qECB ) /*0x51ca8e*/
      {
        if ( !this->Locomotor ) /*0x51ca98*/
          WinAPI::Wrapper(-2147467261); /*0x51caa7*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 128))(this->Locomotor) ) /*0x51cab5*/
          return 7; /*0x51caca*/
      }
      v8 = weapon_idx; /*0x51cacd*/
    }
    v15 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)&this->q1946))(this, a4); /*0x51cae0*/
    if ( !v15 ) /*0x51cae4*/
      goto LABEL_64; /*0x51cae4*/
    if ( *(_BYTE *)(v15 + 297) && this->Archive ) /*0x51caf0*/
      return 7; /*0x51cb05*/
    if ( *(_BYTE *)(v15 + 336) && v8 != (int *)(*(int (__thiscall **)(int))(*(_DWORD *)&this->suspendedMission4))(this) ) /*0x51cb1e*/
      return 5; /*0x51cb2b*/
    v16 = *(_DWORD *)(v15 + 172); /*0x51cb2e*/
    if ( v16 && *(_BYTE *)(v16 + 343) && v8 && (v8[5] & 2) != 0 && v8[14] ) /*0x51cb4c*/
    {
      return 5; /*0x51cb55*/
    }
    else
    {
  LABEL_64:
      if ( !this->Locomotor ) /*0x51cb61*/
        WinAPI::Wrapper(-2147467261); /*0x51cb70*/
      result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 140))(this->Locomotor); /*0x51cb7e*/
      if ( !result ) /*0x51cb86*/
        return 0; /*0x51cb88*/
    }
  }
  return result; /*0x51c8f0*/
}
// 0x5227f0
bool InfantryClass::CanAttackTarget(HouseClass* other)
{
  _DWORD *v3; // eax
  _WORD *v4; // ebx
  void *v5; // esi
  bool result; // al
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h] BYREF
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF

  result = 0; /*0x5228a0*/
  if ( (*((unsigned __int8 (__thiscall **)(void **))*this + 49))(this) ) /*0x5227fa*/
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(void **, _BYTE *))*this + 18))(this, v9); /*0x522811*/
    IDA_LOWORD(v7) = *v3 / 256; /*0x522824*/
    IDA_HIWORD(v7) = v3[1] / 256; /*0x52283c*/
    v7 = v7; /*0x522845*/
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v7); /*0x52285f*/
    if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(&this->attachedTag5), other) /*0x522870*/
      && !HouseClass::HasType(v4, *((_DWORD *)other + 12)) )
    {
      v5 = *(&this->needsRedraw7); /*0x522879*/
      if ( v5 == other || !v5 || (unsigned __int8)HouseClass::IsAlliedWith(other, v5) ) /*0x52288a*/
        return 1; /*0x522802*/
    }
  }
  return result; /*0x522893*/
}
/* ASM:
other           = dword ptr  4

sub     esp, 14h
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+0C4h]
test    al, al
jz      loc_52289E
mov     edx, [esi]
lea     eax, [esp+20h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+20h+var_14], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+20h+var_10]
sar     eax, 8
mov     word ptr [esp+20h+var_14+2], ax
mov     ecx, [esp+20h+var_14]
mov     [esp+20h+var_10], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     edi, [esp+20h+other]
mov     ecx, [esi+21Ch] ; this
push    edi             ; other
mov     ebx, eax
call    HouseClass__IsAlliedWith
test    al, al
jnz     short loc_52289E
mov     eax, [edi+30h]
mov     ecx, ebx
push    eax
call    HouseClass__HasType
test    al, al
jnz     short loc_52289E
mov     esi, [esi+51Ch]
cmp     esi, edi
jz      short loc_522893
test    esi, esi
jz      short loc_522893
push    esi             ; other
mov     ecx, edi        ; this
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_52289E

loc_522893:                             ; CODE XREF: InfantryClass__CanAttackTarget+91↑j
; InfantryClass__CanAttackTarget+95↑j
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 14h
retn    4
; ---------------------------------------------------------------------------

loc_52289E:                             ; CODE XREF: InfantryClass__CanAttackTarget+12↑j
; InfantryClass__CanAttackTarget+78↑j ...
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 14h
retn    4
*/

// 0x51daf0
void InfantryClass::PlayIdleAnim(int idle_anim_number)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  void *v7; // eax
  int LandHeight; // [esp-Ch] [ebp-28h]
  int v10; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)idle_anim_number + 433); /*0x51daf6*/
  if ( v2 == 27 || v2 == 28 || v2 == 29 || v2 == 30 ) /*0x51db0e*/
  {
    (*(void (__thiscall **)(_BYTE *, int, _DWORD, _DWORD))(*(_DWORD *)idle_anim_number + 1368))(idle_anim_number, 28, 0, 0); /*0x51db18*/
  }
  else if ( *(idle_anim_number + 1755) ) /*0x51db1a*/
  {
    (*(void (__thiscall **)(_BYTE *, int, _DWORD, _DWORD))(*(_DWORD *)idle_anim_number + 1368))(idle_anim_number, 2, 0, 0); /*0x51db2e*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)idle_anim_number + 1368))(idle_anim_number, 0, 0, 0); /*0x51db40*/
  }
  v3 = *ProgressTimer::GetValue((_WORD *)idle_anim_number + 452, &v10); /*0x51db58*/
  v4 = *(_DWORD *)idle_anim_number; /*0x51db60*/
  v5 = *((_DWORD *)idle_anim_number + 39); /*0x51db64*/
  v6 = *((_DWORD *)idle_anim_number + 41); /*0x51db71*/
  v11[1] = *((_DWORD *)idle_anim_number + 40); /*0x51db74*/
  v11[0] = v5; /*0x51db7d*/
  v11[2] = v6; /*0x51db81*/
  LandHeight = ObjectClass::GetLandHeight(idle_anim_number); /*0x51db8a*/
  v7 = Coord::To_Cell(&MapClass_Instance, v11); /*0x51db96*/
  if ( (*(int (__thiscall **)(_BYTE *, void *, unsigned int, int, _DWORD, int))(v4 + 428))( /*0x51db9e*/
         idle_anim_number,
         v7,
         (((v3 >> 12) + 1) >> 1) & 7,
         LandHeight,
         0,
         1) )
  {
    *(idle_anim_number + 1756) = 1; /*0x51dbbe*/
  }
  else
  {
    *(idle_anim_number + 1756) = 0; /*0x51dbac*/
  }
  return FootClass::PlayCOM_audio(idle_anim_number); /*0x51dbb7*/
}
// 0x51cdb0
int InfantryClass::ProcessIdleAction()
{
  wchar_t *v2; // edi
  int v3; // eax
  int v4; // ecx
  char result; // al
  int v6; // edi
  char v7; // bl
  __int16 v8; // ax
  int v9; // eax
  __int16 v10; // cx
  __int16 v11; // dx
  unsigned int v12; // [esp+8h] [ebp-24h]
  double v14; // [esp+10h] [ebp-1Ch] BYREF
  double v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]

  if ( !this->CanMoveFreely() ) /*0x51cdb9*/
    return 0; /*0x51d0a1*/
  v14 = *(double *)&g_RulesClass_Instance[1].ForceShieldInvokeAnim * 1800.0; /*0x51cdeb*/
  v15 = *(double *)&g_RulesClass_Instance[1].ForceShieldInvokeAnim * 450.0; /*0x51cdfb*/
  v12 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x51ce0c*/
  g_CurrentFrame = g_CurrentFrame; /*0x51ce10*/
  v3 = Math::RoundToInt((v14 - v15) * ((double)(int)v12 * 4.656612877414201e-10) + v15); /*0x51ce26*/
  v17 = v17; /*0x51ce2b*/
  *(&this->objectTypeFlags0) = g_CurrentFrame; /*0x51ce35*/
  *(&this->objectTypeFlags1) = v17; /*0x51ce3b*/
  *(&this->objectTypeFlags2) = v3; /*0x51ce3e*/
  if ( !*(_BYTE *)(*(&this->currentMission2) + 3775) /*0x51ce67*/
    || (unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5))
    || (int)*(&this->currentMission7) <= 50 )
  {
    v6 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 10); /*0x51cea1*/
    v7 = ObjectClass::StepCleanup(this, aCow); /*0x51cea8*/
    if ( v7 && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 10) < 5 ) /*0x51cec6*/
      v6 = 8; /*0x51cec8*/
    switch ( v6 ) /*0x51ced9*/
    {
      case 1: /*0x51ced9*/
      case 2: /*0x51ced9*/
      case 7: /*0x51ced9*/
        this->ProcessDeployAction(10, 0, 0); /*0x51cf4c*/
        if ( this->isSelected /*0x51cf90*/
          || !(unsigned __int8)House::IsHumanPlayer((void *)*(&this->attachedTag5))
          || *(int *)(*(&this->currentMission2) + 3736) <= 0
          || Random::Range(Randomizer_Global, 0, 2) )
        {
          goto LABEL_22; /*0x51cf97*/
        }
        v16 = *(&this->vtable49); /*0x51cfa7*/
        v17 = *(&this->uniqueId0); /*0x51cfb2*/
        v9 = *(&this->currentMission2); /*0x51cfb6*/
        v18 = *(&this->uniqueId1); /*0x51cfbf*/
        StartAudioControllerAt(*v9->VoiceComment_Items, (int)&v16, 0); /*0x51cfcb*/
        result = 1; /*0x51cfd2*/
        break; /*0x51cfd8*/
      case 3: /*0x51ced9*/
      case 4: /*0x51ced9*/
      case 5: /*0x51ced9*/
        this->ProcessDeployAction(9, 0, 0); /*0x51ceea*/
        result = 1; /*0x51cef2*/
        break; /*0x51cef8*/
      case 6: /*0x51ced9*/
        IDA_LOWORD(v12) = (unsigned __int16)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7) << 13; /*0x51cf11*/
        IDA_LOBYTE(v8) = 0; /*0x51cf16*/
        IDA_HIBYTE(v8) = ((v12 >> 7) + 1) >> 1; /*0x51cf27*/
        v8 = v8; /*0x51cf2f*/
        FacingClass::Set_SyncLog(&v8); /*0x51cf34*/
        result = 1; /*0x51cf3b*/
        break; /*0x51cf41*/
      case 8: /*0x51ced9*/
        IDA_LOWORD(v12) = (unsigned __int16)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7) << 13; /*0x51cff1*/
        IDA_LOBYTE(v10) = 0; /*0x51cff6*/
        IDA_HIBYTE(v10) = ((v12 >> 7) + 1) >> 1; /*0x51d007*/
        IDA_LOWORD(v14) = v10; /*0x51d009*/
        FacingClass::Set_SyncLog(&v14); /*0x51d014*/
        if ( !v7 /*0x51d032*/
          && ((unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) || !*(_BYTE *)(*(&this->currentMission2) + 3775)) )
        {
          goto LABEL_22; /*0x51d03a*/
        }
        this->FindMoveTarget(&dword_A8F200, 1, 0); /*0x51d049*/
        result = 1; /*0x51d051*/
        break; /*0x51d057*/
      case 9: /*0x51ced9*/
      case 10: /*0x51ced9*/
        IDA_LOWORD(v12) = (unsigned __int16)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7) << 13; /*0x51d06f*/
        IDA_LOBYTE(v11) = 0; /*0x51d074*/
        IDA_HIBYTE(v11) = ((v12 >> 7) + 1) >> 1; /*0x51d085*/
        IDA_LOWORD(v15) = v11; /*0x51d08d*/
        FacingClass::Set_SyncLog(&v15); /*0x51d092*/
        goto LABEL_22; /*0x51d092*/
      default:
  LABEL_22:
        result = 1; /*0x51d097*/
        break; /*0x51d09f*/
    }
  }
  else
  {
    this->FindMoveTarget(&dword_A8F200, 1, 0); /*0x51ce76*/
    return 1; /*0x51ce7d*/
  }
  return result; /*0x51ce7c*/
}
// 0x5239d0
// 0x5239d0
int InfantryTypeClass::DTOR()
{
  void *v3; // eax
  void *v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &(void*)(void*)&InfantryTypeClass_vftable; /*0x5239d7*/
  *(_DWORD *)(this + 4) = &(void*)(void*)&InfantryTypeClass_vftable; /*0x5239dd*/
  *(_DWORD *)(this + 8) = &(void*)(void*)&InfantryTypeClass_vftable; /*0x5239e4*/
  *(_DWORD *)(this + 12) = &(void*)(void*)&InfantryTypeClass_vftable; /*0x5239eb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x5239f2*/
  v2 = (*(int (__thiscall **)(int *, int *))(InfantryTypeClass_Array + 16))(&InfantryTypeClass_Array, &this); /*0x523a0b*/
  if ( v2 != -1 && v2 < g_LoadScreenProgress && v2 < --g_LoadScreenProgress ) /*0x523a26*/
  {
    do /*0x523a3e*/
    {
      ++v2; /*0x523a2e*/
      *((_DWORD *)Factory_ExitCellTable + v2 - 1) = *((_DWORD *)Factory_ExitCellTable + v2); /*0x523a32*/
    }
    while ( v2 < g_LoadScreenProgress ); /*0x523a3e*/
  }
  RA2_OPDEL(*(void **)(&this->q16C4)); /*0x523a47*/
  this->u32_E3C = 0; /*0x523a51*/
  v3 = *(void **)(&this->q5D04); /*0x523a57*/
  this->qE88 = &(void*)(void*)&VectorClass_int_vftable; /*0x523a5f*/
  if ( v3 && this->u32_E95 ) /*0x523a6b*/
  {
    RA2_OPDEL(v3); /*0x523a74*/
    this->u32_E8C = 0; /*0x523a7c*/
  }
  this->u32_E95 = 0; /*0x523a82*/
  this->u32_E90 = 0; /*0x523a88*/
  v4 = *(void **)(&this->q5C46); /*0x523a8e*/
  this->qE6C = &(void*)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x523a94*/
  if ( v4 && this->u32_E79 ) /*0x523aa2*/
  {
    RA2_OPDEL(v4); /*0x523aab*/
    this->u32_E70 = 0; /*0x523ab3*/
  }
  this->u32_E79 = 0; /*0x523ab9*/
  this->u32_E74 = 0; /*0x523abf*/
  v5 = *(void **)(&this->q5B88); /*0x523ac5*/
  this->qE50 = &(void*)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x523acb*/
  if ( v5 && this->u32_E5D ) /*0x523ad9*/
  {
    RA2_OPDEL(v5); /*0x523ae2*/
    this->u32_E54 = 0; /*0x523aea*/
  }
  this->u32_E5D = 0; /*0x523af2*/
  this->u32_E58 = 0; /*0x523af8*/
  return TechnoTypeClass::DTOR(this); /*0x523b03*/
}
// 0x521320
int InfantryClass::GetIdleTimer()
{
  int v2; // eax
  int v3; // eax
  __int16 *v5; // eax
  Concurrency::details::SchedulerBase *v6; // eax
  unsigned int NumberOfActiveVirtualProcessors; // edi
  int v8; // ecx
  int v9; // edi
  __int16 *v10; // eax
  void *v11; // eax
  char *v12; // eax
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  void *v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // kr0C_4
  int v23; // eax
  char *MissionControl; // eax
  int v25; // esi
  _BYTE v26[4]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v27[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v28[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(this + 433); /*0x521328*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x521340*/
  {
    v16 = (void *)(*(int (__thiscall **)(int *))(*this + 60))(this); /*0x5214fb*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v16) ) /*0x521500*/
    {
      v17 = *(this + 432); /*0x52150d*/
      if ( *(_BYTE *)(v17 + 3784) ) /*0x521513*/
      {
        if ( *(_BYTE *)(v17 + 1708) ) /*0x521521*/
        {
          if ( *(int *)(v17 + 1732) <= -1 /*0x521574*/
            && !*(this + 361)
            && *(this + 48)
             + *(_DWORD *)(*((_DWORD *)g_RulesClass_Instance + 908) + 4 * *(_DWORD *)(*(this + 135) + 388)) < (int)g_CurrentFrame )
          {
            if ( !*(this + 134) /*0x5215f3*/
              || (v18 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v27),
                  v19 = *v18 / 256,
                  v20 = v18[1] / 256,
                  v21 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*(this + 134) + 72))(
                                 *(this + 134),
                                 v28),
                  v22 = *v21,
                  v23 = v21[1] / 256,
                  (unsigned __int16)(v22 / 256) == (_WORD)v19)
              && (_WORD)v23 == (_WORD)v20 )
            {
              if ( !*(_BYTE *)(*(this + 432) + 3383) ) /*0x5215ff*/
              {
                if ( !*(this + 413) ) /*0x52160d*/
                  WinAPI::Wrapper(-2147467261); /*0x52161c*/
                if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) ) /*0x52162a*/
                {
                  if ( !*(this + 413) ) /*0x52165a*/
                    WinAPI::Wrapper(-2147467261); /*0x521669*/
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 72))(*(this + 413)); /*0x521677*/
                  *((_BYTE *)this + 1764) = 1; /*0x52167c*/
                  MissionControl = MissionClass::GetMissionControl(this); /*0x521683*/
                  v25 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x5216a0*/
                  return v25 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x5216ad*/
                }
                else
                {
                  (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 27, 0, 0); /*0x52163b*/
                  return *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 976); /*0x521650*/
                }
              }
            }
          }
        }
      }
    }
    return -1; /*0x5216b8*/
  }
  v3 = *(this + 432); /*0x521346*/
  if ( *(int *)(v3 + 1732) > -1 ) /*0x521353*/
  {
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 31, 0, 0); /*0x52135f*/
    return *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 1120); /*0x52137d*/
  }
  if ( !*(_BYTE *)(v3 + 1708) ) /*0x521386*/
    return -1; /*0x521386*/
  if ( *(_BYTE *)(v3 + 3383) ) /*0x52138c*/
  {
    v5 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v26); /*0x5213a3*/
    v6 = (Concurrency::details::SchedulerBase *)CellCoord::To_CellObj(&MapClass_Instance, v5); /*0x5213af*/
    NumberOfActiveVirtualProcessors = _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6); /*0x5213c1*/
    v8 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1016))(this, 1) + 344); /*0x5213cb*/
    if ( !NumberOfActiveVirtualProcessors || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors) < v8 / 3 ) /*0x5213ee*/
    {
      v9 = *this; /*0x5213f4*/
      v10 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v26); /*0x5213fd*/
      v11 = CellCoord::To_CellObj(&MapClass_Instance, v10); /*0x521409*/
      (*(void (__thiscall **)(int *, void *))(v9 + 968))(this, v11); /*0x521411*/
      if ( !(*(int (__thiscall **)(int *, _DWORD, int, int))(*this + 960))(this, *(this + 173), 1, 1) ) /*0x521426*/
      {
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 972))(this, *(this + 173), 1); /*0x52143d*/
        (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0); /*0x521449*/
        (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 29, 0, 0); /*0x521459*/
        return *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 1048); /*0x521477*/
      }
      (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0); /*0x52147e*/
    }
    v12 = MissionClass::GetMissionControl(this); /*0x521486*/
    v13 = Math::RoundToInt(*((double *)v12 + 2) * 900.0); /*0x5214a9*/
    return v13 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 10, 20); /*0x5214b0*/
  }
  else
  {
    (*(void (__thiscall **)(int *))(*this + 1064))(this); /*0x5214bd*/
    v14 = MissionClass::GetMissionControl(this); /*0x5214c5*/
    v15 = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x5214d8*/
    return v15 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x5214ee*/
  }
}
// ============================================================
// Phase 3: Crawling / Movement
// ============================================================

// 0x5216d0
bool InfantryClass::CanMoveFreely()
{
  char result; // al
  unsigned int v3; // eax

  result = TechnoClass::IsTimerExpired((void *)this); /*0x5216d3*/
  if ( result ) /*0x5216da*/
  {
    if ( !*(_DWORD *)(this + 1652) ) /*0x5216de*/
      WinAPI::Wrapper(-2147467261); /*0x5216ed*/
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x5216fb*/
    {
      return 0; /*0x521702*/
    }
    else if ( this->Crawling ) /*0x521706*/
    {
      return 0; /*0x521710*/
    }
    else if ( this->unknownBool68D ) /*0x521714*/
    {
      return 0; /*0x52171e*/
    }
    else
    {
      v3 = this->SequenceAnim; /*0x521722*/
      return v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16); /*0x52173c*/
    }
  }
  return result; /*0x5216dc*/
}
/* ASM:
push    esi
mov     esi, ecx
call    TechnoClass__IsTimerExpired
test    al, al
jnz     short loc_5216DE
pop     esi
retn
; ---------------------------------------------------------------------------

loc_5216DE:                             ; CODE XREF: InfantryClass__CanMoveFreely+A↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_5216F2
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_5216F2:                             ; CODE XREF: InfantryClass__CanMoveFreely+16↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      short loc_521706
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521706:                             ; CODE XREF: InfantryClass__CanMoveFreely+30↑j
mov     al, [esi+6DBh]
test    al, al
jz      short loc_521714
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521714:                             ; CODE XREF: InfantryClass__CanMoveFreely+3E↑j
mov     al, [esi+68Dh]
test    al, al
jz      short loc_521722
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521722:                             ; CODE XREF: InfantryClass__CanMoveFreely+4C↑j
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_52173C
cmp     eax, 1Ch
jz      short loc_52173C
cmp     eax, 1Dh
jz      short loc_52173C
cmp     eax, 1Eh
jnz     short loc_521740

loc_52173C:                             ; CODE XREF: InfantryClass__CanMoveFreely+5B↑j
; InfantryClass__CanMoveFreely+60↑j ...
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521740:                             ; CODE XREF: InfantryClass__CanMoveFreely+6A↑j
cmp     eax, 1
jz      short loc_521752
test    eax, eax
jz      short loc_521752
cmp     eax, 10h
jz      short loc_521752
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521752:                             ; CODE XREF: InfantryClass__CanMoveFreely+73↑j
; InfantryClass__CanMoveFreely+77↑j ...
mov     al, 1
pop     esi
retn
*/

// 0x484d60
bool InfantryClass::CanMoveThroughCell()
{
  __int16 v1; // ax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _WORD *v5; // eax
  __int16 v6; // cx
  __int16 v7; // cx
  int v8; // eax
  _WORD *v9; // edi
  _WORD *v10; // eax
  __int16 v11; // cx
  __int16 v12; // cx
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v1 = this->q458; /*0x484d60*/
  if ( v1 >= 0 && v1 < g_UnitTypeCount && this->q0EC == 10 ) /*0x484d8a*/
    return 1; /*0x484d8e*/
  v13 = this->objectTypeFlags; /*0x484d9c*/
  v14 = *CellStruct::Add(&v13, &v16, &dword_89F694); /*0x484db6*/
  v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14); /*0x484dbf*/
  v3 = v3; /*0x484dc4*/
  if ( !v3 ) /*0x484dc8*/
    return 0; /*0x484dc8*/
  v13 = v3[9]; /*0x484dd5*/
  v15 = *CellStruct::Add(&v13, &v16, &dword_89F694); /*0x484def*/
  v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x484df8*/
  if ( !v5 ) /*0x484dff*/
    return 0; /*0x484dff*/
  v6 = *((_WORD *)v3 + 139); /*0x484e05*/
  if ( v6 >= 0 && v6 < g_UnitTypeCount && v3[59] == 10 ) /*0x484e24*/
    return 1; /*0x484e24*/
  v7 = v5[139]; /*0x484e2a*/
  if ( v7 >= 0 && v7 < g_UnitTypeCount && *((_DWORD *)v5 + 59) == 10 ) /*0x484e43*/
    return 1; /*0x484e43*/
  v8 = v3[9]; /*0x484e49*/
  IDA_LOWORD(v13) = g_DirectionOffsetPool + v8; /*0x484e58*/
  IDA_HIWORD(v13) = IDA_HIWORD(v8) + IDA_HIWORD(g_DirectionOffsetPool); /*0x484e6d*/
  v15 = v13; /*0x484e76*/
  v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x484e88*/
  v13 = v3[9]; /*0x484e97*/
  v16 = *CellStruct::Add(&v13, &v17, &g_CellDirectionOffsets); /*0x484eac*/
  v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16); /*0x484eb0*/
  if ( !v9 || !v10 ) /*0x484ebb*/
    return 0; /*0x484ebb*/
  v11 = v9[139]; /*0x484ebd*/
  if ( v11 >= 0 && v11 < g_UnitTypeCount && *((_DWORD *)v9 + 59) == 10 ) /*0x484edc*/
    return 1; /*0x484edc*/
  v12 = v10[139]; /*0x484ede*/
  return v12 >= 0 && v12 < g_UnitTypeCount && *((_DWORD *)v10 + 59) == 10; /*0x484efb*/
}
// 0x51dff0
int InfantryClass::MoveToCell(int* a2, int a3)
{
  int *v3; // esi
  int GroundHeight; // ebx
  bool v6; // al
  _DWORD *v7; // eax
  int *v8; // eax
  int v9; // ecx
  char v11; // [esp-Ch] [ebp-30h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int v15[3]; // [esp+18h] [ebp-Ch] BYREF

  a2 = a2; /*0x51dff5*/
  GroundHeight = Cell::GetGroundHeight(a2); /*0x51e007*/
  v12 = *a2; /*0x51e00d*/
  v13 = a2[1]; /*0x51e014*/
  v14 = a2[2]; /*0x51e01d*/
  if ( v14 == GroundHeight ) /*0x51e021*/
  {
    v6 = 1; /*0x51e078*/
    if ( !g_IKnowWhatImDoing ) /*0x51e02e*/
    {
      IDA_LOWORD(a2) = *a2 / 256; /*0x51e045*/
      IDA_HIWORD(a2) = a2[1] / 256; /*0x51e05e*/
      if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&a2, 1) ) /*0x51e06b*/
        v6 = 0; /*0x51e02e*/
    }
    v6 = v6; /*0x51e081*/
    v7 = Coord::To_Cell(&MapClass_Instance, a2); /*0x51e08e*/
    v8 = ObjectPlacement::CalcPosition(v7, v15, a2, v6, 0, 0); /*0x51e095*/
    v12 = *v8; /*0x51e0a4*/
    v9 = v8[1]; /*0x51e0aa*/
    v13 = v9; /*0x51e0ad*/
    if ( v12 == dword_A8F200 && v9 == dword_A8F204 && v8[2] == dword_A8F208 ) /*0x51e0c4*/
      return 0; /*0x51e0c4*/
    v14 = GroundHeight; /*0x51e0c6*/
  }
  if ( !FootClass::DispatchInput((double *)this, (int)&v12, a3) ) /*0x51e0dd*/
    return 0; /*0x51e12b*/
  if ( !this->Type->q5E8 ) /*0x51e0e5*/
    this->isDiscoveredByCurrentPlayer = 0; /*0x51e0ef*/
  if ( v14 <= GroundHeight + dword_A8F234 ) /*0x51e103*/
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)&this->q0600))(this, &v12); /*0x51e10e*/
  this->waterState = 2; /*0x51e114*/
  return 1; /*0x51e11e*/
}
// 0x51df10
int InfantryClass::CancelMovement()
{
  if ( !this->Locomotor ) /*0x51df13*/
    WinAPI::Wrapper(-2147467261); /*0x51df22*/
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 172))(this->Locomotor); /*0x51df30*/
  this->waterState = 2; /*0x51df38*/
  this->Crawling = 0; /*0x51df42*/
  this->SequenceAnim = 0; /*0x51df49*/
  return TechnoClass::CleanupDirection((_BYTE *)this); /*0x51df58*/
}
/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_51DF27
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51DF27:                             ; CODE XREF: InfantryClass__CancelMovement+B↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+0ACh]
mov     ecx, esi
mov     dword ptr [esi+6E8h], 2
mov     byte ptr [esi+6DBh], 0
mov     dword ptr [esi+6C4h], 0
call    TechnoClass__CleanupDirection
pop     esi
retn
*/

// 0x51b350
int InfantryClass::CalcMoveTarget()
{
  _DWORD *v2; // eax
  int *v3; // edi
  int *v4; // eax
  _DWORD *v5; // ebp
  int *v6; // eax
  _WORD *Height; // eax
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int GroundHeight; // ebx
  int v13; // ebx
  int v14; // edx
  char v15; // al
  int v16; // ecx
  int *v17; // eax
  _DWORD *v18; // eax
  int *Coords; // ebp
  _DWORD *v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int *v26; // eax
  int v27; // eax
  int v28; // edi
  double v29; // st7
  double v30; // st7
  int v31; // eax
  double v32; // st7
  __int64 v33; // rax
  int v34; // ebp
  int v35; // edi
  double v36; // st7
  double v37; // st7
  int v38; // eax
  bool v39; // zf
  signed int v40; // ebp
  double v41; // st7
  int v42; // eax
  int v43; // edx
  int *v44; // edi
  _DWORD *v45; // ebp
  int v46; // ebx
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  int i; // ebx
  _DWORD *v51; // edi
  int v52; // edx
  int *v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // eax
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // edx
  int v61; // eax
  double v62; // [esp-10h] [ebp-A0h]
  int v63; // [esp+18h] [ebp-78h]
  double v64; // [esp+18h] [ebp-78h]
  int v65; // [esp+20h] [ebp-70h]
  double v66; // [esp+20h] [ebp-70h]
  double v67; // [esp+20h] [ebp-70h]
  int v68; // [esp+2Ch] [ebp-64h]
  int v69; // [esp+2Ch] [ebp-64h]
  int v70; // [esp+2Ch] [ebp-64h]
  int v71; // [esp+30h] [ebp-60h]
  double v72; // [esp+30h] [ebp-60h]
  double v73; // [esp+38h] [ebp-58h] BYREF
  double v74; // [esp+40h] [ebp-50h] BYREF
  int v75; // [esp+48h] [ebp-48h]
  int v76; // [esp+54h] [ebp-3Ch] BYREF
  int v77; // [esp+58h] [ebp-38h]
  int v78; // [esp+5Ch] [ebp-34h] BYREF
  int v79; // [esp+60h] [ebp-30h] BYREF
  int v80; // [esp+64h] [ebp-2Ch]
  int v81; // [esp+68h] [ebp-28h] BYREF
  int v82; // [esp+6Ch] [ebp-24h] BYREF
  int v83; // [esp+70h] [ebp-20h]
  int v84; // [esp+74h] [ebp-1Ch]
  void **v85; // [esp+78h] [ebp-18h] BYREF
  void *Block; // [esp+7Ch] [ebp-14h]
  int v87; // [esp+80h] [ebp-10h]
  char v88; // [esp+85h] [ebp-Bh]
  int v89; // [esp+88h] [ebp-8h]
  int v90; // [esp+8Ch] [ebp-4h]

  if ( *(_DWORD *)(*((_DWORD *)g_PathClass_State + *((char *)this + 1668)) + 4 * *((char *)this + 1669) + 48) != -1 ) /*0x51b383*/
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 72))(this); /*0x51b392*/
    v3 = this + 346; /*0x51b395*/
    v4 = Vector3::Subtract(v2, &v78, this + 346); /*0x51b3a3*/
    Coord::Length(v4); /*0x51b3aa*/
    v5 = (_DWORD *)*((_DWORD *)g_PathClass_State + *((char *)this + 1668)); /*0x51b3c2*/
    v6 = (int *)(*(int (__thiscall **)(int *, int *, int *))(*this + 72))(this, &v81, this + 346); /*0x51b3cc*/
    Height = Cell::GetHeight((_WORD *)&v73 + 2, v6, &v82); /*0x51b3d4*/
    v8 = *(this + 432); /*0x51b3d9*/
    IDA_HIDWORD(v73) = *(_DWORD *)Height; /*0x51b3e1*/
    v63 = *(_DWORD *)(v8 + 1656); /*0x51b3eb*/
    v68 = v5[10]; /*0x51b3f2*/
    v9 = IDA_SHIWORD(v68) << 8; /*0x51b401*/
    v10 = (__int16)v68 << 8; /*0x51b404*/
    v69 = v5[9]; /*0x51b407*/
    v77 = v9 + 128; /*0x51b41a*/
    v76 = v10 + 128; /*0x51b423*/
    v78 = 0; /*0x51b42c*/
    v81 = 0; /*0x51b435*/
    v79 = ((__int16)v69 << 8) + 128; /*0x51b440*/
    v11 = v5[112]; /*0x51b444*/
    v80 = (IDA_SHIWORD(v69) << 8) + 128; /*0x51b456*/
    v70 = v11; /*0x51b45a*/
    GroundHeight = Cell::GetGroundHeight(&v79); /*0x51b46d*/
    v13 = (Cell::GetGroundHeight(&v76) - GroundHeight) / v70; /*0x51b47f*/
    if ( v65 > v63 ) /*0x51b48b*/
    {
      v34 = v5[*((char *)this + 1669) + 12]; /*0x51b6a8*/
      v82 = *(this + 39); /*0x51b6ae*/
      v83 = *(this + 40); /*0x51b6b5*/
      v35 = *(this + 41); /*0x51b6b9*/
      IDA_HIDWORD(v73) = IDA_SWORD2(v73) - 0x3FFF; /*0x51b6c6*/
      v72 = (double)IDA_SHIDWORD(v73) * -0.00009587672516830327; /*0x51b6d4*/
      v67 = (double)v63; /*0x51b6e6*/
      v74 = (double)v83; /*0x51b6ee*/
      v36 = Math::SinCos(v72); /*0x51b6f2*/
      IDA_HIDWORD(v73) = Math::RoundToInt(v74 - v36 * v67); /*0x51b70a*/
      v37 = Math::ArcTan2(v72); /*0x51b70e*/
      v38 = Math::RoundToInt(v37 * v67 + (double)v82); /*0x51b71e*/
      Coord::Subtract(&v79, v38, IDA_SHIDWORD(v73), v35); /*0x51b72e*/
      v40 = v34 & 0x80000001; /*0x51b73f*/
      v39 = v40 == 0; /*0x51b73f*/
      v76 = v79; /*0x51b745*/
      v77 = v80; /*0x51b749*/
      v78 = v81; /*0x51b74d*/
      if ( v40 < 0 ) /*0x51b751*/
        v39 = (((_BYTE)v40 - 1) | 0xFFFFFFFE) == -1; /*0x51b757*/
      if ( v39 ) /*0x51b758*/
        v41 = 256.0; /*0x51b762*/
      else
        v41 = 362.0386719675124; /*0x51b75a*/
      v42 = Math::RoundToInt(v41); /*0x51b776*/
      v43 = *this; /*0x51b77b*/
      v78 = v42; /*0x51b77d*/
      (*(void (__thiscall **)(int *, int *))(v43 + 436))(this, &v76); /*0x51b78a*/
      return; /*0x51b797*/
    }
    v14 = *this; /*0x51b497*/
    v15 = *((_BYTE *)this + 1669) + 1; /*0x51b499*/
    *((_BYTE *)this + 1669) = v15; /*0x51b49f*/
    v71 = v5[v15 + 12]; /*0x51b4ae*/
    (*(void (__thiscall **)(int *, int *))(v14 + 436))(this, this + 346); /*0x51b4b7*/
    if ( v71 != -1 ) /*0x51b4c3*/
    {
      v16 = v5[*((char *)this + 1669) + 12]; /*0x51b4d3*/
      v17 = Coord::Subtract( /*0x51b4ff*/
              &v82,
              *v3 + dword_89F6D8[2 * (v16 & 7)],
              *(this + 347) + dword_89F6DC[2 * (v16 & 7)],
              *(this + 348));
      v76 = *v17; /*0x51b506*/
      v77 = v17[1]; /*0x51b512*/
      v78 = v17[2]; /*0x51b51f*/
      v18 = Coord::To_Cell(&MapClass_Instance, this + 346); /*0x51b523*/
      Coords = CellClass::GetCoords(v18, (int *)&v74); /*0x51b52f*/
      v20 = Coord::To_Cell(&MapClass_Instance, &v76); /*0x51b540*/
      v21 = CellClass::GetCoords(v20, (int *)&v85); /*0x51b547*/
      v22 = *v21 - *Coords + *v3; /*0x51b55f*/
      v23 = v21[1] - Coords[1] + *(this + 347); /*0x51b564*/
      v24 = *(this + 348); /*0x51b566*/
      *v3 = v22; /*0x51b569*/
      v25 = *this; /*0x51b56c*/
      *(this + 347) = v23; /*0x51b56f*/
      *(this + 348) = v24; /*0x51b574*/
      *(this + 348) += v13; /*0x51b584*/
      v26 = (int *)(*(int (__thiscall **)(int *, void ***))(v25 + 72))(this, &v85); /*0x51b58a*/
      v27 = *(_DWORD *)Cell::GetHeight((_WORD *)&v73 + 2, v26, this + 346); /*0x51b597*/
      v82 = *(this + 39); /*0x51b5a5*/
      v28 = *(this + 41); /*0x51b5af*/
      v83 = *(this + 40); /*0x51b5c1*/
      IDA_HIDWORD(v73) = v63 - v65; /*0x51b5c9*/
      v66 = (double)((__int16)v27 - 0x3FFF) * -0.00009587672516830327; /*0x51b5d7*/
      v64 = (double)IDA_SHIDWORD(v73); /*0x51b5e9*/
      v74 = (double)v83; /*0x51b5f1*/
      v29 = Math::SinCos(v66); /*0x51b5f5*/
      v62 = v66; /*0x51b608*/
      IDA_LODWORD(v66) = Math::RoundToInt(v74 - v29 * v64); /*0x51b609*/
      v30 = Math::ArcTan2(v62); /*0x51b60d*/
      v31 = Math::RoundToInt(v30 * v64 + (double)v82); /*0x51b61d*/
      Coord::Subtract(&v76, v31, IDA_SLODWORD(v66), v28); /*0x51b62d*/
      v79 = v76; /*0x51b63e*/
      v80 = v77; /*0x51b646*/
      v81 = v78; /*0x51b650*/
      if ( v71 % 2 ) /*0x51b65a*/
        v32 = 362.0386719675124; /*0x51b65d*/
      else
        v32 = 256.0; /*0x51b665*/
      v33 = Math::RoundToInt(v32); /*0x51b679*/
      v81 = v33; /*0x51b682*/
      (*(void (__fastcall **)(int *, _DWORD, int *))(*this + 436))(this, IDA_HIDWORD(v33), &v79); /*0x51b68d*/
      return; /*0x51b69a*/
    }
  }
  v44 = this + 39; /*0x51b798*/
  v82 = *(this + 39); /*0x51b7a2*/
  v83 = *(this + 40); /*0x51b7ae*/
  v84 = *(this + 41); /*0x51b7b5*/
  v45 = Coord::To_Cell(&MapClass_Instance, &v82); /*0x51b7c7*/
  v46 = v45[57]; /*0x51b7cf*/
  if ( (*(int (__thiscall **)(int *, _DWORD *, int, _DWORD, _DWORD, int))(*this + 428))(this, v45, -1, 0, 0, 1) ) /*0x51b7d8*/
  {
    ObjectVector::Construct(&v85, 0, 0); /*0x51b7ee*/
    v47 = 10; /*0x51b7f3*/
    v85 = &(void*)(void*)&DynamicVectorClass_ObjectClass___vftable; /*0x51b7fa*/
    v90 = 10; /*0x51b802*/
    v89 = 0; /*0x51b809*/
    if ( v46 ) /*0x51b810*/
    {
      v48 = v87; /*0x51b812*/
      while ( 1 ) /*0x51b822*/
      {
        if ( v89 < v48 ) /*0x51b829*/
          goto LABEL_23; /*0x51b829*/
        if ( (v88 || !v48) && v47 > 0 ) /*0x51b83c*/
          break; /*0x51b83c*/
  LABEL_25:
        v46 = *(_DWORD *)(v46 + 48); /*0x51b873*/
        if ( !v46 ) /*0x51b878*/
          goto LABEL_26; /*0x51b878*/
        v47 = v90; /*0x51b81b*/
      }
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v85[2])(&v85, v47 + v48, 0) ) /*0x51b84d*/
      {
  LABEL_23:
        v49 = v89++; /*0x51b854*/
        *((_DWORD *)Block + v49) = v46; /*0x51b869*/
      }
      v48 = v87; /*0x51b86c*/
      goto LABEL_25; /*0x51b86c*/
    }
  LABEL_26:
    for ( i = 0; i < v89; ++i ) /*0x51b885*/
    {
      v51 = (_DWORD *)*((_DWORD *)Block + i); /*0x51b88b*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v51 + 44))(v51) == 1 /*0x51b8a4*/
        || (*(int (__thiscall **)(_DWORD *))(*v51 + 44))(v51) == 15 )
      {
        if ( !v51[413] ) /*0x51b8a6*/
          WinAPI::Wrapper(-2147467261); /*0x51b8b3*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v51[413] + 16))(v51[413]) ) /*0x51b8c1*/
        {
          v52 = *v51; /*0x51b8c8*/
          v82 = 0; /*0x51b8d5*/
          v83 = 0; /*0x51b8d9*/
          v84 = 0; /*0x51b8dd*/
          (*(void (__thiscall **)(_DWORD *, int *, int, int))(v52 + 372))(v51, &v82, 1, 1); /*0x51b8e4*/
        }
      }
    }
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1348))(this, 0, 0); /*0x51b8fc*/
    v85 = &(void*)(void*)&VectorClass_ObjectClass___vftable; /*0x51b906*/
    if ( Block && v88 ) /*0x51b91f*/
      RA2_OPDEL(Block); /*0x51b926*/
  }
  else
  {
    v82 = *v44; /*0x51b940*/
    v83 = *(this + 40); /*0x51b94c*/
    v84 = *(this + 41); /*0x51b960*/
    v53 = ObjectPlacement::CalcPosition(v45, (int *)&v85, &v82, 0, 0, 0); /*0x51b967*/
    v74 = *(double *)v53; /*0x51b96e*/
    v75 = v53[2]; /*0x51b986*/
    v54 = Cell::GetGroundHeight(&v74); /*0x51b98a*/
    v55 = *this; /*0x51b98f*/
    v75 = v54; /*0x51b991*/
    (*(void (__thiscall **)(int *, double *))(v55 + 436))(this, &v74); /*0x51b99c*/
    v56 = *(this + 413); /*0x51b9a2*/
    v83 = dword_A8F204; /*0x51b9bc*/
    v84 = dword_A8F208; /*0x51b9c0*/
    if ( !v56 ) /*0x51b9c4*/
      WinAPI::Wrapper(-2147467261); /*0x51b9cb*/
    (*(void (__stdcall **)(_DWORD, int, int, int))(*(_DWORD *)*(this + 413) + 120))( /*0x51b9f4*/
      *(this + 413),
      dword_A8F200,
      v83,
      v84);
    if ( !*(this + 413) ) /*0x51b9f7*/
      WinAPI::Wrapper(-2147467261); /*0x51ba08*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 172))(*(this + 413)); /*0x51ba16*/
    (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1); /*0x51ba22*/
    v57 = *v44; /*0x51ba2b*/
    v58 = *(this + 41); /*0x51ba2d*/
    v83 = *(this + 40); /*0x51ba30*/
    v82 = v57; /*0x51ba38*/
    v59 = *this; /*0x51ba3c*/
    v84 = v58; /*0x51ba41*/
    (*(void (__thiscall **)(int *, int *))(v59 + 240))(this, &v82); /*0x51ba45*/
    if ( (_DWORD *)*(this + 361) == v45 ) /*0x51ba51*/
    {
      v60 = *this; /*0x51ba53*/
      v82 = 0; /*0x51ba60*/
      v83 = 0; /*0x51ba64*/
      v84 = 0; /*0x51ba68*/
      (*(void (__thiscall **)(int *, int *, int, int))(v60 + 372))(this, &v82, 1, 1); /*0x51ba6f*/
    }
    else
    {
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1348))(this, 0, 1072693248); /*0x51ba81*/
    }
    v61 = *this; /*0x51ba87*/
    *((_BYTE *)this + 1668) = -1; /*0x51ba8d*/
    *((_BYTE *)this + 1675) = 1; /*0x51ba94*/
    (*(void (__thiscall **)(int *, int))(v61 + 396))(this, 2); /*0x51ba9b*/
  }
}
// 0x51d0d0
int InfantryClass::FindMoveTarget()
{
  char v4; // bl
  int v6; // eax
  char *MissionControl; // eax
  double v8; // st7
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  double v13; // st7
  unsigned int v14; // edi
  int v15; // eax
  float v16; // edx
  _DWORD *v17; // eax
  int v18; // eax
  float v19; // edi
  void *v20; // eax
  float v21; // edx
  _DWORD *v22; // eax
  char *v23; // edi
  int v24; // edi
  int v25; // eax
  char v26; // di
  int v27; // edi
  int v28; // edx
  __int16 v29; // cx
  void *v30; // ebp
  float v31; // ebx
  int LandHeight; // eax
  int v33; // kr04_4
  _DWORD *v34; // eax
  float v35; // edi
  void *v36; // eax
  int *v39; // [esp+44h] [ebp-3Ch] BYREF
  int v40; // [esp+48h] [ebp-38h] BYREF
  unsigned int v41; // [esp+4Ch] [ebp-34h]
  int v42; // [esp+50h] [ebp-30h]
  int v43; // [esp+54h] [ebp-2Ch] BYREF
  int v44; // [esp+58h] [ebp-28h] BYREF
  int v45; // [esp+5Ch] [ebp-24h] BYREF
  int v46; // [esp+60h] [ebp-20h]
  int v47; // [esp+64h] [ebp-1Ch]
  _DWORD v48[3]; // [esp+68h] [ebp-18h] BYREF
  _WORD v49[4]; // [esp+74h] [ebp-Ch] BYREF

  v4 = a3; /*0x51d0d5*/
  v6 = *(&this->currentMission3); /*0x51d0dd*/
  if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30) && (_BYTE)a3 && (_BYTE)a4 ) /*0x51d101*/
  {
    this->ProcessDeployAction(31, 0, 0); /*0x51d10d*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x51d11b*/
  {
    MissionControl = (char *)*(&this->currentMission3); /*0x51d124*/
    if ( MissionControl == (char *)27 /*0x51d148*/
      || MissionControl == (char *)28
      || MissionControl == (char *)29
      || MissionControl == (char *)30 )
    {
      return (char)MissionControl; /*0x51d148*/
    }
  }
  if ( !*(&this->q0A43) ) /*0x51d150*/
    WinAPI::Wrapper(-2147467261); /*0x51d15d*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 16))(*(&this->q0A43)) ) /*0x51d16b*/
    v4 = 0; /*0x51d172*/
  MissionControl = MissionClass::GetMissionControl(this); /*0x51d176*/
  if ( MissionControl[9] || v4 )
  {
    IDA_LOBYTE(MissionControl) = *(_BYTE *)(*(&this->currentMission2) + 3775); /*0x51d190*/
    if ( (_BYTE)MissionControl || !*(&this->q0443) || v4 )
    {
      MissionControl = (char *)*(&this->currentMission3); /*0x51d1aa*/
      if ( MissionControl == (char *)-1 || MissionControl == (char *)31 || byte_7EAF7C[4 * (_DWORD)MissionControl] )
      {
        if ( *((_BYTE *)g_RulesClass_Instance + 6125) /*0x51d1fa*/
          || TechnoTypeClass::HasVoiceResponse((float *)this, 3)
          || (_BYTE)a4
          || (IDA_LOBYTE(MissionControl) = House::IsCurrentPlayer((void *)*(&this->attachedTag5)), !(_BYTE)MissionControl) )
        {
          if ( !v4 ) /*0x51d210*/
          {
  LABEL_33:
            IDA_LOBYTE(MissionControl) = *(_BYTE *)(*(&this->currentMission2) + 3775); /*0x51d212*/
            if ( !(_BYTE)MissionControl ) /*0x51d220*/
              return (char)MissionControl; /*0x51d220*/
          }
        }
        else if ( !v4 ) /*0x51d1fe*/
        {
          if ( !*(&this->lastLayer3) ) /*0x51d206*/
            return (char)MissionControl; /*0x51d206*/
          goto LABEL_33; /*0x51d206*/
        }
        a4 = *a2; /*0x51d226*/
        if ( a4 == dword_A8F200 && a2[1] == dword_A8F204 && a2[2] == dword_A8F208 ) /*0x51d252*/
        {
          v10 = this->GetCoords_0(v49); /*0x51d2e7*/
          v11 = (_DWORD *)this->GetCoords_0(v48); /*0x51d2f0*/
          v12 = (unsigned __int8)*(_DWORD *)(v10 + 4); /*0x51d2fd*/
          v45 = (unsigned __int8)*v11; /*0x51d308*/
          v46 = v12; /*0x51d30c*/
          if ( v45 == 128 && v12 == 128 ) /*0x51d314*/
          {
            v14 = *ProgressTimer::GetValue((_WORD *)&this->q710, &v44); /*0x51d36b*/
          }
          else
          {
            v13 = Math::CalcAngle(128.0 - (double)v46, (double)v45 - 128.0); /*0x51d337*/
            IDA_LOWORD(a4) = Math::RoundToInt((v13 - 1.570796326794897) * -10430.06004058427); /*0x51d350*/
            v14 = a4; /*0x51d355*/
          }
          v15 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 4); /*0x51d385*/
          v16 = *(float *)this; /*0x51d38a*/
          v41 = ((((v14 >> 12) + 1) >> 1) & 7) + v15 - 2; /*0x51d390*/
          a3 = 0; /*0x51d39f*/
          v17 = (_DWORD *)(*(int (__thiscall **)(int *, _WORD *, _DWORD))(IDA_LODWORD(v16) + 76))(this, v49, 0); /*0x51d3ae*/
          IDA_LOWORD(a4) = *v17 / 256; /*0x51d3c5*/
          v18 = v17[1] / 256; /*0x51d3da*/
          IDA_HIWORD(a4) = v18; /*0x51d3de*/
          IDA_LOBYTE(v18) = this->onBridge; /*0x51d3e7*/
          a2 = (int *)a4; /*0x51d3f1*/
          v40 = *LayerClass::Pathfinding_Find( /*0x51d42b*/
                   &MapClass_Instance,
                   *(_DWORD *)(*(&this->currentMission2) + 1660),
                   &v43,
                   (__int16 *)&a2,
                   *(_DWORD *)(*(&this->currentMission2) + 1660),
                   -1,
                   0,
                   v18,
                   1,
                   1,
                   0,
                   1,
                   0,
                   1,
                   (__int16 *)&a3,
                   0,
                   0);
          if ( v40 != dword_A8F1E0 ) /*0x51d42f*/
          {
            v19 = *(float *)this; /*0x51d43f*/
            v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v40); /*0x51d44d*/
            (*(void (__thiscall **)(int *, void *, int))(IDA_LODWORD(v19) + 1152))(this, v20, 1); /*0x51d455*/
            if ( !*(&this->q0A43) ) /*0x51d45b*/
              WinAPI::Wrapper(-2147467261); /*0x51d46a*/
            IDA_LOBYTE(MissionControl) = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 64))(*(&this->q0A43)); /*0x51d478*/
            return (char)MissionControl; /*0x51d482*/
          }
        }
        else
        {
          v45 = *(&this->vtable49); /*0x51d266*/
          v46 = *(&this->uniqueId0); /*0x51d271*/
          v47 = *(&this->uniqueId1); /*0x51d27c*/
          v8 = Math::CalcAngle((double)a2[1] - (double)v46, (double)v45 - (double)a4); /*0x51d28e*/
          IDA_LOWORD(a4) = Math::RoundToInt((v8 - 1.570796326794897) * -10430.06004058427); /*0x51d2a7*/
          v9 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 4); /*0x51d2ba*/
          v41 = v9 + (((((unsigned int)a4 >> 12) + 1) >> 1) & 7) - 2; /*0x51d2d0*/
        }
        v21 = *(float *)this; /*0x51d487*/
        a2 = 0; /*0x51d491*/
        a3 = 0; /*0x51d49b*/
        v22 = (_DWORD *)(*(int (__thiscall **)(int *, _WORD *, _DWORD))(IDA_LODWORD(v21) + 76))(this, v49, 0); /*0x51d4a5*/
        IDA_LOWORD(a4) = *v22 / 256; /*0x51d4b8*/
        IDA_HIWORD(a4) = v22[1] / 256; /*0x51d4d0*/
        a4 = a4; /*0x51d4d9*/
        v23 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4); /*0x51d4e8*/
        v24 = v23[283] + this->CheckHeightDiff(0) != 0 ? 4 : 0;
        this->GetDeployCoords(v49, 0); /*0x51d516*/
        v25 = v24 * dword_A8F240; /*0x51d51e*/
        v26 = 0; /*0x51d521*/
        v25 = v25; /*0x51d523*/
        v43 = 0; /*0x51d527*/
        while ( 1 ) /*0x51d536*/
        {
          v27 = ((_BYTE)v41 + v26) & 7; /*0x51d536*/
          v28 = v27 & 7; /*0x51d53b*/
          v29 = IDA_LOWORD(Direction_X_Offsets[v28]) + a4; /*0x51d53e*/
          IDA_LOWORD(v28) = IDA_HIWORD(Direction_X_Offsets[v28]); /*0x51d54d*/
          IDA_LOWORD(v42) = v29; /*0x51d555*/
          IDA_HIWORD(v42) = IDA_HIWORD(a4) + v28; /*0x51d569*/
          a4 = v42; /*0x51d572*/
          v30 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4); /*0x51d587*/
          if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&a4, 1) ) /*0x51d589*/
          {
            v31 = *(float *)this; /*0x51d596*/
            LandHeight = ObjectClass::GetLandHeight(this); /*0x51d59e*/
            if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(IDA_LODWORD(v31) + 428))( /*0x51d5a8*/
                    this,
                    v30,
                    v27,
                    LandHeight,
                    0,
                    1) )
            {
              v33 = dword_A8F1E0; /*0x51d5bc*/
              if ( a2 == (int *)dword_A8F1E0 ) /*0x51d5cc*/
                a2 = (int *)a4; /*0x51d5d5*/
              if ( dword_A8F1E0 ) /*0x51d5dc*/
                goto LABEL_55; /*0x51d5dc*/
              v48[1] = (IDA_SHIWORD(a4) << 8) + 128; /*0x51d606*/
              v48[0] = ((__int16)a4 << 8) + 128; /*0x51d612*/
              v48[2] = v25; /*0x51d626*/
              v34 = Terrain::ClimbCheck(&v45, v48); /*0x51d62a*/
              if ( a4 == *v34 /*0x51d65c*/
                && (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4) + 80) & 0x100) == 0 )
              {
                a3 = a4; /*0x51d68a*/
                v33 = dword_A8F1E0; /*0x51d68e*/
  LABEL_58:
                IDA_LOWORD(MissionControl) = a3; /*0x51d694*/
                v39 = (int *)a3; /*0x51d69b*/
                if ( (_WORD)a3 != (_WORD)v33 ) /*0x51d69f*/
                  goto LABEL_62; /*0x51d69f*/
                if ( IDA_HIWORD(a3) == IDA_HIWORD(v33) ) /*0x51d6a6*/
                {
                  IDA_LOWORD(MissionControl) = (_WORD)a2; /*0x51d6a8*/
                  v39 = a2; /*0x51d6ac*/
                }
                if ( IDA___PAIR32__(IDA_HIWORD(v39), (unsigned __int16)MissionControl) != v33 ) /*0x51d6b3*/
                {
  LABEL_62:
                  this->MissionDispatch(2, 0); /*0x51d6c4*/
                  v35 = *(float *)this; /*0x51d6ca*/
                  v36 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v39); /*0x51d6d8*/
                  IDA_LOBYTE(MissionControl) = (*(int (__thiscall **)(int *, void *, int))(IDA_LODWORD(v35) + 1152))( /*0x51d6e0*/
                                             this,
                                             v36,
                                             1);
                }
                return (char)MissionControl; /*0x51d6e0*/
              }
            }
          }
          v33 = dword_A8F1E0; /*0x51d664*/
  LABEL_55:
          v26 = ++v43; /*0x51d66b*/
          if ( v43 >= 8 ) /*0x51d677*/
            goto LABEL_58; /*0x51d677*/
        }
      }
    }
  }
  return (char)MissionControl; /*0x51d47b*/
}
// 0x418e20
int InfantryClass::FindNearbyCell()
{
  int v2; // esi
  _DWORD *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  double v9; // rdi
  double v10; // st7
  __int16 v11; // bx
  double v12; // st7
  void *v13; // edi
  int v14; // eax
  int v16; // [esp+14h] [ebp-44h] BYREF
  double v17; // [esp+18h] [ebp-40h]
  int v18; // [esp+20h] [ebp-38h]
  int v19; // [esp+24h] [ebp-34h] BYREF
  double v20; // [esp+28h] [ebp-30h]
  double v23; // [esp+38h] [ebp-20h]
  double v24; // [esp+40h] [ebp-18h]
  double v25; // [esp+48h] [ebp-10h] BYREF
  int v26; // [esp+50h] [ebp-8h]

  v2 = a2; /*0x418e2b*/
  if ( a2 && (!*(&this->u32_943) || !(unsigned __int8)TechnoClass::IsWaypointHidden()) ) /*0x418e49*/
  {
    if ( !this->vt_slot_1360(a2) /*0x418eab*/
      || (v4 = (_DWORD *)(*(int (__thiscall **)(int, double *, _DWORD))(*(_DWORD *)a2 + 76))(a2, &v25, 0),
          IDA_LOWORD(v18) = *v4 / 256,
          IDA_HIWORD(v18) = v4[1] / 256,
          v19 = v18,
          !(unsigned __int8)Cell::IsOccupied(&v19, 0)) )
    {
      v5 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)a2 + 72))(a2, &v25); /*0x418ec1*/
      v6 = *v5; /*0x418ec4*/
      v7 = v5[1]; /*0x418ec6*/
      v26 = v5[2]; /*0x418ed3*/
      if ( !g_IKnowWhatImDoing ) /*0x418ed7*/
      {
        v18 = 0; /*0x418ee2*/
        if ( *((_DWORD *)g_RulesClass_Instance + 1310) / 256 > 0 ) /*0x418efa*/
        {
          v19 = (__int16)(v7 / 256); /*0x418f21*/
          v24 = (double)v19; /*0x418f2c*/
          v19 = (__int16)(v6 / 256); /*0x418f30*/
          v25 = (double)v19; /*0x418f38*/
          while ( 2 ) /*0x418f40*/
          {
            v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x418f40*/
            IDA_LODWORD(v20) = (__int16)v18; /*0x418f59*/
            v8 = v8; /*0x418f5d*/
            v17 = 0.0; /*0x418f65*/
            v23 = (double)(__int16)v18; /*0x418f73*/
            do /*0x419063*/
            {
              v20 = (double)(int)(((__int16)((IDA_WORD2(v17) + (_WORD)v8) << 13) & 0xFFFFE000) - 0x3FFF) /*0x418fa1*/
                  * -0.00009587672516830327;
              v20 = v20; /*0x418fa9*/
              v10 = Math::SinCos(v20); /*0x418faf*/
              v11 = Math::RoundToInt(v24 - v10 * v23); /*0x418fc3*/
              v12 = Math::ArcTan2(v20); /*0x418fc5*/
              IDA_LOWORD(v19) = Math::RoundToInt(v12 * v23 + v25); /*0x418fde*/
              IDA_HIWORD(v19) = v11; /*0x418fe3*/
              v19 = v19; /*0x418ff4*/
              if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v19, 1) ) /*0x418ff8*/
              {
                v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x419010*/
                if ( v19 != IDA_LODWORD(v17) /*0x419046*/
                  && this->vt_slot_1360(v13)
                  && (unsigned __int8)Cell::IsOccupied(&v19, 0) )
                {
                  return v13; /*0x4190a0*/
                }
                IDA_LODWORD(v17) = v19; /*0x419053*/
              }
              ++IDA_HIDWORD(v17); /*0x41905f*/
            }
            while ( IDA_SHIDWORD(v17) < 8 ); /*0x419063*/
            v14 = *((_DWORD *)g_RulesClass_Instance + 1310); /*0x419074*/
            if ( ++v18 < v14 / 256 ) /*0x41908c*/
              continue; /*0x41908c*/
            break;
          }
          return (void *)a2; /*0x419092*/
        }
      }
    }
  }
  return (void *)v2; /*0x419097*/
}
// 0x51f330
int InfantryClass::FindPathToBuilding()
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = this->vt_slot_740(0); /*0x51f33b*/
  v3 = *(&this->q0443); /*0x51f341*/
  if ( !v3 || (result = this->vt_slot_936(v3, v2), !(_BYTE)result) ) /*0x51f359*/
  {
    if ( (v7[0] = *(&this->q00C9), /*0x51f3a5*/
          v7[1] = *(this + 40),
          v5 = *this,
          v7[2] = *(this + 41),
          v6 = (*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(v5 + 964))(this, 1, v7, 0),
          (result = *(&this->q0443)) == 0)
      && !v6
      || (result = this->AssignTarget_SyncLog(v6), !v6) )
    {
      if ( *(&this->uniqueId3) != 5 ) /*0x51f3ae*/
      {
        result = this->Vt34Thunk(); /*0x51f3b4*/
        if ( !*(_BYTE *)(result + 3476) ) /*0x51f3ba*/
          return this->ValidatePlacement_1(0, 1); /*0x51f3cc*/
      }
    }
  }
  return result; /*0x51f3d2*/
}
/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
push    0
mov     eax, [esi]
call    dword ptr [eax+2E4h]
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F35B
mov     edx, [esi]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     short loc_51F3D2

loc_51F35B:                             ; CODE XREF: InfantryClass__FindPathToBuilding+19↑j
lea     eax, [esi+9Ch]
push    0
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+18h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
lea     eax, [esp+18h+var_C]
push    eax
push    1
call    dword ptr [edx+3C4h]
mov     edi, eax
mov     eax, [esi+2B4h]
test    eax, eax
jnz     short loc_51F398
test    edi, edi
jz      short loc_51F3A7

loc_51F398:                             ; CODE XREF: InfantryClass__FindPathToBuilding+62↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+3C8h]
test    edi, edi
jnz     short loc_51F3D2

loc_51F3A7:                             ; CODE XREF: InfantryClass__FindPathToBuilding+66↑j
cmp     dword ptr [esi+0ACh], 5
jz      short loc_51F3D2
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     cl, [eax+0D94h]
test    cl, cl
jnz     short loc_51F3D2
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+484h]

loc_51F3D2:                             ; CODE XREF: InfantryClass__FindPathToBuilding+29↑j
; InfantryClass__FindPathToBuilding+75↑j ...
pop     edi
pop     esi
add     esp, 0Ch
retn
*/

// 0x51f3e0
int InfantryClass::EnterBuilding()
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // eax
  char *MissionControl; // eax
  int v10; // esi

  if ( (this->Type->qEC2 || TechnoTypeClass::HasVoiceResponse(this, 14)) /*0x51f42a*/
    && (v2 = this->target) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6
    && (v3 = this->target, v4 = *(_DWORD *)(v3 + 1312), *(_BYTE *)(v4 + 5495))
    && !*(_BYTE *)(v4 + 5889) )
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 1152))(this, v3, 1); /*0x51f43b*/
    (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 17, 0); /*0x51f449*/
    return 1; /*0x51f44f*/
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer(*((void **)&this->attachedTag5)) /*0x51f4a4*/
         && (v6 = this->target) != 0
         && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 6
         && ((v7 = (_BYTE *)this->Type, v7[3774])
          || (v7[3764] || v7[3765]) && BuildingClass::CanRepair(*((_DWORD **)&this->q0443), (int)this)) )
  {
    (*(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)&this->q1CC2))(this, this->target, 1); /*0x51f4ba*/
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)&this->missionData6))(this, 8); /*0x51f4c6*/
    return 1; /*0x51f4cc*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer(*((void **)&this->attachedTag5)) /*0x51f4fa*/
         && ((v8 = this->SequenceAnim, v8 == 27) || v8 == 28 || v8 == 29 || v8 == 30) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)&this->q1A84))(this); /*0x51f500*/
    MissionControl = MissionClass::GetMissionControl(this); /*0x51f508*/
    v10 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x51f52b*/
    return v10 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x51f532*/
  }
  else
  {
    return InfantryClass::ScanTarget((int)this); /*0x51f538*/
  }
}
// 0x51F540
int InfantryClass::ProcessEnterOrRepair()
{
  int v2; // ecx
  _BYTE *v3; // eax
  int v5; // eax

  if ( !(unsigned __int8)House::IsCurrentPlayer(*(&this->attachedTag5)) /*0x51f591*/
    && (v2 = (int)*(&this->q0443)) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6
    && ((v3 = *(&this->currentMission2), v3[3774]) || (v3[3764] || v3[3765]) && BuildingClass::CanRepair(*(&this->q0443), (int)this)) )
  {
    (*((void (__thiscall **)(void **, _DWORD, int))*this + 288))(this, *(&this->q0443), 1); /*0x51f5a7*/
    (*((void (__thiscall **)(void **, int))*this + 124))(this, 8); /*0x51f5b3*/
    return 1; /*0x51f5b9*/
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer(*(&this->attachedTag5)) /*0x51f5e9*/
         && ((v5 = (int)*(&this->currentMission3), v5 == 27) || v5 == 28 || v5 == 29 || v5 == 30)
         && !*(this + 173) )
  {
    (*((void (__thiscall **)(void **, int, _DWORD, _DWORD))*this + 342))(this, 31, 0, 0); /*0x51f5fd*/
    return 1; /*0x51f603*/
  }
  else
  {
    return InfantryClass::ProcessDeploy(this); /*0x51f60c*/
  }
}
// 0x522bc0
bool InfantryClass::CanEnterBuilding()
{
  int v2; // eax
  bool result; // al

  result = 0; /*0x522bfc*/
  if ( this->GetPrimaryOrFallback() == 5 /*0x522bdd*/
    || this->GetPrimaryOrFallback() == 11 )
  {
    v2 = *(&this->currentMission3); /*0x522bdf*/
    if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 ) /*0x522bf6*/
      return 1; /*0x522bdd*/
  }
  return result; /*0x522bfa*/
}
// 0x522bc0
    bool __thiscall InfantryClass::CanEnterBuilding(int *(void**)this)
    {
      int v2; // eax
      bool result; // al

      result = 0; /*0x522bfc*/
      if ( this->GetPrimaryOrFallback() == 5 /*0x522bdd*/
        || this->GetPrimaryOrFallback() == 11 )
      {
        v2 = *(&this->currentMission3); /*0x522bdf*/
        if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 ) /*0x522bf6*/
          return 1; /*0x522bdd*/
      }
      return result; /*0x522bfa*/
    }
/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi]
call    dword ptr [eax+184h]
cmp     eax, 5
jz      short loc_522BDF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Bh
jnz     short loc_522BF8

loc_522BDF:                             ; CODE XREF: InfantryClass__CanEnterBuilding+E↑j
mov     eax, [esi+6C4h]
test    eax, eax
jz      short loc_522BFC
cmp     eax, 9
jz      short loc_522BFC
cmp     eax, 0Ah
jz      short loc_522BFC
cmp     eax, 20h ; ' '
jz      short loc_522BFC

loc_522BF8:                             ; CODE XREF: InfantryClass__CanEnterBuilding+1D↑j
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_522BFC:                             ; CODE XREF: InfantryClass__CanEnterBuilding+27↑j
; InfantryClass__CanEnterBuilding+2C↑j ...
mov     al, 1
pop     esi
retn
*/

// 0x51f620
int InfantryClass::FindIdleMovePosition()
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f623*/
  if ( result == -1 ) /*0x51f62b*/
    return FootClass::FindMovePosition((int)this); /*0x51f62f*/
  return result; /*0x51f634*/
}
// 0x51f640
int InfantryClass::FindIdleAITarget()
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f643*/
  if ( result == -1 ) /*0x51f64b*/
    return FootClass::FindAITarget(this); /*0x51f64f*/
  return result; /*0x51f654*/
}
// 0x51f640
    int __thiscall InfantryClass::FindIdleAITarget(int *(void**)this)
    {
      int result; // eax

      result = InfantryClass::GetIdleTimer(this); /*0x51f643*/
      if ( result == -1 ) /*0x51f64b*/
        return FootClass::FindAITarget(this); /*0x51f64f*/
      return result; /*0x51f654*/
    }
/* ASM:
push    esi
mov     esi, ecx
call    InfantryClass__GetIdleTimer
cmp     eax, 0FFFFFFFFh
jnz     short loc_51F654
mov     ecx, esi
call    FootClass__FindAITarget

loc_51F654:                             ; CODE XREF: InfantryClass__FindIdleAITarget+B↑j
pop     esi
retn
*/

// ============================================================
// Phase 3: Paradrop
// ============================================================

// 0x521760
int InfantryClass::ParachuteTo()
{
  if ( !(unsigned __int8)ObjectClass::ParachuteDrop((void *)this) ) /*0x521768*/
    return 0; /*0x5217b4*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80)) ) /*0x521777*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 5, 0); /*0x521788*/
  else
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 15, 0); /*0x521798*/
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 33, 1, 0); /*0x5217a8*/
  return 1; /*0x5217b0*/
}
// ============================================================
// Phase 3: C4 / Bomb
// ============================================================

// 0x51f6e0
int InfantryClass::ProcessIvanBomb()
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // edi
  __int16 *v7; // eax
  void *v8; // eax
  int v9; // edx
  _BYTE v11[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(&this->currentMission2); /*0x51f6e5*/
  if ( !*(_BYTE *)(v2 + 3784) ) /*0x51f6eb*/
    return AbstractClass::COMStub_143(); /*0x51f6eb*/
  v3 = *(&this->currentMission3); /*0x51f6f9*/
  v4 = -1; /*0x51f6ff*/
  if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 ) /*0x51f714*/
  {
    if ( *(int *)(v2 + 1732) <= -1 ) /*0x51f71d*/
      this->ProcessDeployAction(31, 1, 0); /*0x51f72d*/
  }
  else
  {
    this->ProcessDeployAction(27, 1, 0); /*0x51f743*/
    v5 = (_DWORD *)this->Vt249to254(); /*0x51f753*/
    if ( IsNonNullPtr(v5) && *(_BYTE *)(*v5 + 336) ) /*0x51f763*/
    {
      if ( (unsigned __int8)ObjectClass::StepCleanup(this, aDeso) ) /*0x51f774*/
      {
        v4 = *(_DWORD *)(*(_DWORD *)(*(&this->currentMission2) + 3644) + 976) + 1; /*0x51f78f*/
      }
      else
      {
        v6 = *this; /*0x51f792*/
        v7 = (__int16 *)this->GetCellCoords_Alt(v11); /*0x51f79b*/
        v8 = CellCoord::To_CellObj(&MapClass_Instance, v7); /*0x51f7a7*/
        this->AssignTarget_SyncLog(v8); /*0x51f7af*/
      }
    }
    v9 = *(&this->currentMission2); /*0x51f7b5*/
    if ( v9->q6C4 > -1 ) /*0x51f7c5*/
      v4 = v9->q6C4; /*0x51f7c7*/
  }
  this->SetState(5); /*0x51f7cf*/
  this->AssignDestination_SyncLog_1(0, 1); /*0x51f7dd*/
  if ( v4 > -1 ) /*0x51f7e6*/
    return v4; /*0x51f7e8*/
  else
    return AbstractClass::COMStub_143(); /*0x51f7f0*/
}
// 0x51f660
int InfantryClass::ProcessIvanBombResult()
{
  int v2; // eax
  void *v3; // eax

  v2 = *(&this->currentMission3); /*0x51f663*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x51f67b*/
    return FootClass::Destru_vt139(this); /*0x51f67b*/
  v3 = (void *)this->GetTarget(); /*0x51f681*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v3) ) /*0x51f686*/
  {
    this->AssignDestination_SyncLog_1(0, 1); /*0x51f697*/
    return 1; /*0x51f6a3*/
  }
  if ( *(int *)(*(&this->currentMission2) + 1732) > -1 ) /*0x51f6b1*/
    return FootClass::Destru_vt139(this); /*0x51f6d9*/
  this->ProcessDeployAction(31, 0, 0); /*0x51f6bd*/
  return *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 1120); /*0x51f6a2*/
}
// 0x521dd0
int InfantryClass::CheckAndApplyBomb()
{
  int result; // eax
  int (__stdcall ***v3)(_DWORD, void *, int *); // esi
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  char v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  FootClass::vt_entry_4F4(); /*0x521dd6*/
  result = *(&this->isAliveFlag1); /*0x521ddb*/
  if ( result ) /*0x521de3*/
  {
    result = ObjectClass::DistanceTo(this, *(&this->isAliveFlag1)); /*0x521dec*/
    if ( result < 1024 ) /*0x521df6*/
    {
      result = *(&this->currentMission2); /*0x521dfc*/
      if ( result->IsSelectableCombatant ) /*0x521e02*/
      {
        v3 = (int (__stdcall ***)(_DWORD, void *, int *))*(&this->q0A43); /*0x521e10*/
        v7 = 0; /*0x521e16*/
        if ( !v3 ) /*0x521e20*/
          goto LABEL_12; /*0x521e20*/
        v4 = (**v3)(v3, &unk_818858, &v8); /*0x521e31*/
        if ( v4 >= 0 ) /*0x521e35*/
        {
          v8 = v8; /*0x521e49*/
          ComPtr::Release_Alt(&v7); /*0x521e51*/
          v5 = v8; /*0x521e56*/
          v7 = v8; /*0x521e59*/
        }
        else
        {
          ComPtr::Release_Alt(&v7); /*0x521e3b*/
          v5 = 0; /*0x521e40*/
          v7 = 0; /*0x521e42*/
        }
        if ( v4 < 0 && v4 != -2147467262 ) /*0x521e67*/
          WinAPI::Wrapper(v4); /*0x521e6a*/
        if ( !v5 ) /*0x521e75*/
  LABEL_12:
          WinAPI::Wrapper(-2147467261); /*0x521e7c*/
        (*(void (__stdcall **)(int, char *))(*(_DWORD *)v5 + 12))(v5, v9); /*0x521e8d*/
        result = v7; /*0x521e90*/
        if ( v7 ) /*0x521e96*/
          return (*(int (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x521e9b*/
      }
    }
  }
  return result; /*0x521e9e*/
}
// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// 0x521c90
int InfantryClass::PowerDrainUpdate(int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // eax

  FootClass::BeginPowerUpdate(a2); /*0x521c99*/
  Power::TimerProcess(this->SequenceAnim); /*0x521ca7*/
  v3 = this->InfantryClass_field_timer_6C8; /*0x521cac*/
  v4 = this->panicTimerTimeLeft; /*0x521cb2*/
  if ( v3 != -1 ) /*0x521cbb*/
  {
    if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x521cc7*/
      v4 = 0; /*0x521ccd*/
    else
      v4 -= (int)g_CurrentFrame - v3; /*0x521cc9*/
  }
  Power::TimerProcess(v4); /*0x521cd2*/
  Power::TimerProcess(this->PanicDurationLeft); /*0x521ce0*/
  IDA_LOBYTE(v5) = this->Technician; /*0x521ce5*/
  v6 = Power::FlagProcess(a2, v5); /*0x521cee*/
  IDA_LOBYTE(v6) = this->InfantryClass_field_bool_6DA; /*0x521cf3*/
  Power::FlagProcess(a2, v6); /*0x521cfc*/
  IDA_LOBYTE(v7) = this->Crawling; /*0x521d01*/
  Power::FlagProcess(a2, v7); /*0x521d0a*/
  IDA_LOBYTE(v8) = this->InfantryClass_field_bool_6DC; /*0x521d0f*/
  v9 = Power::FlagProcess(a2, v8); /*0x521d18*/
  IDA_LOBYTE(v9) = this->InfantryClass_field_bool_6DD; /*0x521d1d*/
  return Power::FlagProcess(a2, v9); /*0x521d2b*/
}
// 0x51aa10
int InfantryClass::HandleTargetDestroyed()
{
  int result; // eax

  result = FootClass::HandleTargetDestroyed(this, a2, a3); /*0x51aa1e*/
  if ( (int *)*(&this->currentMission2) == a2 ) /*0x51aa29*/
    *(&this->currentMission2) = 0; /*0x51aa2b*/
  return result; /*0x51aa35*/
}
// 0x51f250
int InfantryClass::ProcessUpdate()
{
  int v6; // eax

  v6 = this->SequenceAnim; /*0x51f25d*/
  if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30) /*0x51f285*/
    && (*(int (__thiscall **)(_BYTE *, __int16 *, _DWORD, void **))(*(_DWORD *)&this->fallRate2))(this, a3, 0, a5) == 2 )
  {
    return 0; /*0x51f289*/
  }
  if ( *(&this->q1084) ) /*0x51f28f*/
    return 0; /*0x51f29b*/
  return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5); /*0x51f287*/
}
// 0x51f190
int InfantryClass::ValidateTargetAndMove(AbstractClass* target, int flags)
{
  int v5; // eax

  v5 = ((__int64 (__thiscall *)(int *, int *, int))*(_DWORD *)(*this + 116))(this, a3, a4); /*0x51f1a1*/
  switch ( v5 ) /*0x51f1b4*/
  {
    case 9: /*0x51f1b4*/
    case 28: /*0x51f1b4*/
    case 29: /*0x51f1b4*/
      v5 = 9; /*0x51f1bb*/
      break; /*0x51f1c0*/
    case 27: /*0x51f1b4*/
    case 57: /*0x51f1b4*/
      v5 = 5; /*0x51f1c2*/
      break; /*0x51f1c2*/
    default:
      break;
  }
  if ( a3 == this && v5 == 5 ) /*0x51f1ce*/
    return 0; /*0x51f1d2*/
  if ( this->storedTiberium ) /*0x51f1d8*/
    return 0; /*0x51f1e4*/
  return FootClass::ValidateMove(this, v5, a3, a4); /*0x51f1d0*/
}
/* ASM:
push    ebp
mov     ebp, [esp+4+arg_8]
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     eax, [esi]
push    ebp
push    edi
call    dword ptr [eax+74h]
lea     ecx, [eax-1]    ; switch 57 cases
cmp     ecx, 38h
ja      short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
xor     edx, edx
mov     dl, ds:byte_51F20C[ecx]
jmp     ds:jpt_51F1B4[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_51F1BB:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 9          ; jumptable 0051F1B4 cases 9,28,29
jmp     short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
; ---------------------------------------------------------------------------

loc_51F1C2:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 5          ; jumptable 0051F1B4 cases 27,57

def_51F1B4:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+1A↑j
; InfantryClass__ValidateTargetAndMove+24↑j ...
cmp     edi, esi        ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
jnz     short loc_51F1D8
cmp     eax, 5
jnz     short loc_51F1D8
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1D8:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+39↑j
; InfantryClass__ValidateTargetAndMove+3E↑j
mov     cl, [esi+298h]
test    cl, cl
jz      short loc_51F1EA
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1EA:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+50↑j
push    ebp
push    edi
push    eax
mov     ecx, esi
call    FootClass__ValidateMove
pop     edi
pop     esi
pop     ebp
retn    0Ch
*/

// 0x728280
int InfantryClass::SetMission()
{
  int v2; // edi
  __int16 *v3; // esi
  _WORD *v4; // ebx
  int result; // eax
  int j; // ebp
  int v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  int i; // [esp+10h] [ebp-23Ch]
  char Buffer[12]; // [esp+18h] [ebp-234h] BYREF
  char Source[552]; // [esp+24h] [ebp-228h] BYREF

  INIClass::ClearSection((int)this, (int)off_844A60, 0); /*0x728296*/
  g_UnitTypeCount = g_UnitTypeCount; /*0x72829b*/
  v2 = 0; /*0x7282a1*/
  for ( i = -1; v2 < v1; ++v2 ) /*0x7282ad*/
  {
    v3 = (__int16 *)*((_DWORD *)g_PathClass_State + v2); /*0x7282b5*/
    v4 = CellCoord::To_CellObj(&MapClass_Instance, v3 + 18); /*0x7282c6*/
    if ( InfantryClass::IsInBounds((int)v4) ) /*0x7282ca*/
    {
      v4[139] = ++i; /*0x7282f6*/
    }
    else
    {
      if ( v3 ) /*0x7282d5*/
        (*(void (__thiscall **)(__int16 *, int))(v3->q080)(v3, 1); /*0x7282dd*/
      --v1; /*0x7282e0*/
      v4[139] = -1; /*0x7282e1*/
      --v2; /*0x7282ea*/
    }
  }
  result = g_UnitTypeCount; /*0x728302*/
  for ( j = 0; j < g_UnitTypeCount; ++j ) /*0x72830b*/
  {
    v7 = *((_DWORD *)g_PathClass_State + j); /*0x728317*/
    if ( v7 ) /*0x72831c*/
    {
      sprintf(Buffer, "%d", j); /*0x72832d*/
      sprintf( /*0x728354*/
        Source,
        "%d,%d,%d,%d,%d",
        *(__int16 *)(v7 + 36),
        *(__int16 *)(v7 + 38),
        *(_DWORD *)(v7 + 44),
        *(__int16 *)(v7 + 40),
        *(__int16 *)(v7 + 42));
      v8 = (_DWORD *)(v7 + 48); /*0x72835c*/
      v9 = 100; /*0x72835f*/
      do /*0x72838b*/
      {
        sprintf(&Source[strlen(Source)], g_Str_Trace_, *v8++); /*0x72837f*/
        --v9; /*0x72838a*/
      }
      while ( v9 ); /*0x72838b*/
      INIClass::SetString(this, (unsigned __int8 *)off_844A60, Buffer, Source); /*0x7283a2*/
    }
    result = g_UnitTypeCount; /*0x7283a7*/
  }
  return result; /*0x7283b5*/
}
// 0x728e30
int InfantryClass::IdleStateMachine()
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int *v5; // eax
  void **v6; // eax
  int *v7; // edx
  _DWORD *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edi
  _BYTE *v12; // eax
  int v13; // edi
  int v14; // eax
  int *v15; // edx
  int *v16; // edx
  int v19; // [esp+Ch] [ebp-Ch] BYREF
  int v20; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]
  int retaddr; // [esp+18h] [ebp+0h]
  int v23; // [esp+20h] [ebp+8h]

  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a2 + 16))(a2) ) /*0x728e3b*/
    return 0; /*0x7291a0*/
  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 456))(*(_DWORD *)(a2 + 8)); /*0x728e55*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 464))(*(_DWORD *)(a2 + 8)); /*0x728e59*/
  switch ( *(_DWORD *)(a2 + 20) ) /*0x728e6c*/
  {
    case 1: /*0x728e6c*/
      if ( v2 >= 0 ) /*0x728e75*/
        InfantryClass::ProcessTunnelMovement(a2 - 4); /*0x728e86*/
      else
        *(_DWORD *)(a2 + 20) = 3; /*0x728e77*/
      break; /*0x728e7e*/
    case 2: /*0x728e6c*/
      if ( v2 >= 0 ) /*0x728e92*/
      {
        if ( !*(_DWORD *)(a2 + 48) /*0x728ece*/
          || (v4 = *(_DWORD *)(a2 + 48), (double)(v4 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v4 == 1.0) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(a2 + 8) + 1348))( /*0x728ee0*/
            *(_DWORD *)(a2 + 8),
            0,
            1072693248,
            a1);
          v5 = *(int **)(a2 + 8); /*0x728ee6*/
          *(_DWORD *)(a2 + 20) = 3; /*0x728ee9*/
          v5 += 39; /*0x728ef0*/
          v20 = *v5; /*0x728ef9*/
          v21 = v5[1]; /*0x728f06*/
          retaddr = v5[2]; /*0x728f11*/
          StartAudioControllerAt(g_RulesClass_Instance->GUICheckboxSound, (int)&v20, 0); /*0x728f1b*/
          v6 = (void **)RA2_OPNEW(0x1C8u); /*0x728f25*/
          if ( v6 ) /*0x728f2f*/
          {
            v7 = (int *)(*(_DWORD *)(a2 + 8) + 156); /*0x728f36*/
            v20 = *v7; /*0x728f49*/
            v21 = v7[1]; /*0x728f50*/
            retaddr = v7[2]; /*0x728f5c*/
            AnimClass::ctor(v6, (void *)g_RulesClass_Instance->WeatherConBolts[3], &v20, 0, 1, (void *)0x600, 0, 0); /*0x728f6f*/
          }
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a2 + 8) + 220))(*(_DWORD *)(a2 + 8), 0); /*0x728f7b*/
        }
      }
      else
      {
        *(_DWORD *)(a2 + 20) = 3; /*0x728e94*/
      }
      break; /*0x728e9b*/
    case 3: /*0x728e6c*/
      v8 = *(_DWORD **)(a2 + 8); /*0x728f86*/
      if ( v3 == -256 ) /*0x728f8e*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 292))(v8, 0); /*0x728f94*/
        *(_DWORD *)(a2 + 20) = 4; /*0x728f9a*/
      }
      else
      {
        v19 = v8[39]; /*0x728fb2*/
        v20 = v8[40]; /*0x728fb9*/
        v21 = v8[41]; /*0x728fc0*/
        v9 = *v8; /*0x728fc4*/
        if ( v21 <= -256 ) /*0x728fcb*/
        {
          (*(void (__stdcall **)(_DWORD))(v9 + 292))(0); /*0x729023*/
          *(_DWORD *)(a2 + 20) = 4; /*0x729029*/
        }
        else
        {
          v23 = (*(int (__stdcall **)(int))(v9 + 1336))(a1); /*0x728fd3*/
          v10 = Math::RoundToInt((double)v23 * *(double *)&g_RulesClass_Instance->TunnelSpeed); /*0x728fe3*/
          if ( v10 <= 5 ) /*0x728feb*/
            v10 = 5; /*0x728fed*/
          if ( retaddr - v10 < -256 ) /*0x729002*/
            retaddr = -256; /*0x729004*/
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a2 + 8) + 436))(*(_DWORD *)(a2 + 8), &v20); /*0x729016*/
        }
      }
      break; /*0x728fa1*/
    case 4: /*0x728e6c*/
      FindUnitPlacementTarget(a2 - 4); /*0x729038*/
      break; /*0x72903d*/
    case 5: /*0x728e6c*/
      AnimClass::GetAnimation(a2 - 4); /*0x729045*/
      break; /*0x72904a*/
    case 6: /*0x728e6c*/
      if ( !*(_DWORD *)(a2 + 48) /*0x72907d*/
        || (v11 = *(_DWORD *)(a2 + 48), (double)(v11 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v11 == 1.0) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 8) + 396))(*(_DWORD *)(a2 + 8), 2); /*0x729086*/
        v12 = *(_BYTE **)(a2 + 8); /*0x72908c*/
        if ( v12[144] ) /*0x72908f*/
        {
          if ( !v12[129] && !v12[141] ) /*0x7290a3*/
          {
            (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 72))(a2); /*0x7290b2*/
            goto LABEL_32; /*0x7290b5*/
          }
        }
      }
      break; /*0x7290b5*/
    case 7: /*0x728e6c*/
      if ( !*(_DWORD *)(a2 + 48) /*0x7290e5*/
        || (v13 = *(_DWORD *)(a2 + 48), (double)(v13 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v13 == 1.0) )
      {
  LABEL_32:
        *(_DWORD *)(a2 + 20) = 0; /*0x7290e7*/
        FootClass::ClearPathIndex(*(_DWORD **)(a2 + 8)); /*0x7290f1*/
      }
      break; /*0x7290f1*/
    default:
      break;
  }
  v14 = *(_DWORD *)(a2 + 8); /*0x7290f6*/
  if ( *(_BYTE *)(v14 + 131) ) /*0x7290fa*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer(*(void **)(v14 + 540)) ) /*0x72910e*/
    {
      v15 = (int *)(*(_DWORD *)(a2 + 8) + 156); /*0x72911a*/
      v19 = *v15; /*0x729122*/
      v20 = v15[1]; /*0x72912e*/
      v21 = v15[2]; /*0x72913a*/
      if ( Cell::IsPassable(&v19) /*0x72917b*/
        || (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0
        && (v16 = (int *)(*(_DWORD *)(a2 + 8) + 156), v19 = *v16, v20 = v16[1], v21 = v16[2], Game::Stub3((int)&v19)) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 336))(*(_DWORD *)(a2 + 8)); /*0x729189*/
      }
    }
  }
  InfantryClass::ReleaseInfiltrators(*(_DWORD *)(a2 + 8)); /*0x729192*/
  return 1; /*0x729199*/
}
// 0x7291f0
int InfantryClass::ProcessTunnelMovement()
{
  void **result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  wchar_t *v10; // ecx
  int *v11; // edx
  int *v12; // ecx
  int v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+20h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-Ch]
  int v17; // [esp+28h] [ebp-8h]

  result = (void **)TimerClass::Active(*(_DWORD *)(this + 12) + 904); /*0x7291ff*/
  if ( !(_BYTE)result ) /*0x729206*/
  {
    v3 = *(_DWORD *)(this->vtable4 + 156); /*0x72921d*/
    v4 = *(_DWORD *)(this->vtable4 + 160); /*0x72921f*/
    v17 = *(_DWORD *)(this->vtable4 + 164); /*0x729225*/
    v5 = this->referenceCount - v3; /*0x72922c*/
    v6 = this->needsSave; /*0x72922e*/
    v15 = v5; /*0x729231*/
    v13 = v4 - v6; /*0x72923d*/
    v7 = Math::CalcAngle((double)(v4 - v6), (double)v5); /*0x72924c*/
    IDA_LOWORD(v13) = Math::RoundToInt((v7 - 1.570796326794897) * -10430.06004058427); /*0x729276*/
    if ( (_WORD)v13 == *(_WORD *)ProgressTimer::GetValue((_WORD *)(this->vtable4 + 904), &v14) ) /*0x729284*/
    {
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->vtable22) + 132))(this->vtable4); /*0x72929f*/
      v9 = Math::RoundToInt(64.0 / (double)*(int *)(v8 + 1820) / *(double *)&g_RulesClass_Instance->TunnelSpeed); /*0x7292ba*/
      g_CurrentFrame = g_CurrentFrame; /*0x7292bf*/
      this->nextArrayIndex = 2; /*0x7292c8*/
      this->owningHouseIndex = g_CurrentFrame; /*0x7292d1*/
      this->fallRate = v16; /*0x7292d7*/
      this->nextObject = v9; /*0x7292da*/
      this->attachedTag = v9; /*0x7292dd*/
      v11 = (int *)(this->vtable4 + 156); /*0x7292e3*/
      v15 = *v11; /*0x7292eb*/
      v16 = v11[1]; /*0x7292f7*/
      v17 = v11[2]; /*0x7292fe*/
      StartAudioControllerAt(g_RulesClass_Instance->GUICheckboxSound, (int)&v15, 0); /*0x72930c*/
      result = (void **)RA2_OPNEW(0x1C8u); /*0x729316*/
      if ( result ) /*0x729320*/
      {
        v12 = (int *)(this->vtable4 + 156); /*0x729327*/
        v15 = *v12; /*0x72933a*/
        v16 = v12[1]; /*0x729341*/
        v17 = v12[2]; /*0x72934d*/
        result = AnimClass::ctor( /*0x729360*/
                   result,
                   (void *)g_RulesClass_Instance->WeatherConBolts[3],
                   &v15,
                   0,
                   1,
                   (void *)0x600,
                   0,
                   0);
      }
      this->attachedBomb = 0; /*0x729365*/
    }
    else
    {
      return (void **)(*(int (__stdcall **)(int, int))(this->vtable2 + 76))(&this->uniqueId, v13); /*0x729292*/
    }
  }
  return result; /*0x729295*/
}
// 0x736579
int InfantryClass::UpdateBehavior()
{
  void **v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  void *v14; // eax
  _DWORD *v15; // eax
  _WORD *v16; // eax
  __int16 v17; // di
  __int16 v18; // bx
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  int v21; // ebx
  __int16 *PlacementCells_Alt; // eax
  void *v23; // eax
  int v25; // [esp-2Eh] [ebp-40h] BYREF
  _DWORD v26[2]; // [esp-26h] [ebp-38h] BYREF
  int *v27; // [esp-1Eh] [ebp-30h]
  _DWORD v28[2]; // [esp-1Ah] [ebp-2Ch] BYREF
  _DWORD v29[4]; // [esp-12h] [ebp-24h] BYREF
  int v30[2]; // [esp-2h] [ebp-14h] BYREF
  int v31; // [esp+6h] [ebp-Ch] BYREF
  int v32; // [esp+Ah] [ebp-8h] BYREF
  int v33; // [esp+Eh] [ebp-4h]
  int vars0; // [esp+12h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+16h] [ebp+4h]

  v30[0] = a2; /*0x73657d*/
  v30[1] = a3; /*0x736581*/
  v31 = a1; /*0x736585*/
  v5 = (void **)RA2_OPNEW((size_t)v27); /*0x736589*/
  if ( v5 ) /*0x736593*/
    AnimClass::ctor(v5, (void *)g_RulesClass_Instance->FlamingInfantry, v30, 0, 1, (void *)0x600, 0, 0); /*0x7365b6*/
  IDA_LOBYTE(v6) = a4[144]; /*0x7365bb*/
  if ( (_BYTE)v6 ) /*0x7365c3*/
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) != 10 ) /*0x7365d6*/
      a4[1746] = 0; /*0x7365d8*/
    UpdateTechnoFiring((void *)a4); /*0x7365e1*/
    ((void (__thiscall *)(_BYTE *))UnitClass::UpdateRotation_TurretFacing_EMP)(a4); /*0x7365e8*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) == 5 /*0x73662d*/
      && (v32 = *((_DWORD *)a4 + 39),
          v7 = *((_DWORD *)a4 + 40),
          v27 = &v32,
          v33 = v7,
          vars0 = *((_DWORD *)a4 + 41),
          !Tactical::IsCellVisible(&MapClass_Instance, &v32))
      && a4[981] )
    {
      v8 = *((_DWORD *)a4 + 373); /*0x736637*/
      if ( v8 ) /*0x73663f*/
        *(_BYTE *)(v8 + 130) = 1; /*0x736641*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 928))(a4); /*0x73664c*/
      IDA_LOBYTE(v6) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 248))(a4); /*0x736656*/
    }
    else
    {
      v9 = *((_DWORD *)a4 + 433); /*0x736664*/
      if ( *(_BYTE *)(v9 + 3608) || *(_BYTE *)(v9 + 3609) ) /*0x736674*/
        UpdateInfantryIdleWander(a4); /*0x736680*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 1060))(a4); /*0x736689*/
      if ( *(int *)(*((_DWORD *)a4 + 433) + 1504) > 0 /*0x7366ce*/
        && !Flag::CheckNone(a4 + 848)
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) != 16
        && (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 628))(a4, 17) != 1 )
      {
        Timer::StartDouble(a4 + 848, *(double *)(*((_DWORD *)a4 + 433) + 968)); /*0x7366e6*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 512))(a4) ) /*0x7366ef*/
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 492))(a4); /*0x7366fd*/
      if ( *((_DWORD *)a4 + 136) == 2 && *((_DWORD *)a4 + 435) != -1 ) /*0x736713*/
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 252))(a4); /*0x736719*/
      if ( ((unsigned __int8)g_CurrentFrame & 0xF) == 0 ) /*0x736726*/
      {
        v10 = *((_DWORD *)a4 + 43); /*0x73672c*/
        if ( (v10 == 11 || v10 == 5) /*0x73675a*/
          && !(unsigned __int8)House::IsCurrentPlayer(*((void **)a4 + 135))
          && *((_DWORD *)a4 + 45) == -1 )
        {
          v11 = *((_DWORD *)a4 + 433); /*0x736760*/
          if ( *((_DWORD *)a4 + 27) < *(_DWORD *)(v11 + 160) /*0x73679a*/
            && (!*((_DWORD *)a4 + 134) || *((_DWORD *)a4 + 43) == 11)
            && !*(_BYTE *)(v11 + 3598)
            && !*(_BYTE *)(v11 + 3599) )
          {
            v12 = globalHelper_055DD0(*((_DWORD *)a4 + 135), a4); /*0x7367b1*/
            if ( v12 ) /*0x7367b5*/
            {
              if ( !*((_DWORD *)a4 + 134) ) /*0x7367b7*/
              {
                v31 = *((_DWORD *)a4 + 39); /*0x7367cd*/
                v13 = *((_DWORD *)a4 + 40); /*0x7367d5*/
                v26[1] = &v31; /*0x7367d8*/
                v32 = v13; /*0x7367d9*/
                v33 = *((_DWORD *)a4 + 41); /*0x7367e5*/
                v14 = Coord::To_Cell(&MapClass_Instance, &v31); /*0x7367e9*/
                TechnoClass::SetFocus(a4, (int)v14); /*0x7367f1*/
              }
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a4 + 488))(a4, 7, 0); /*0x7367fe*/
              (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a4 + 968))(a4, 0); /*0x73680a*/
              (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a4 + 1152))(a4, v12, 1); /*0x736817*/
            }
          }
        }
      }
      v6 = (_DWORD *)*((_DWORD *)a4 + 433); /*0x73681d*/
      if ( *((_BYTE *)v6 + 3598) ) /*0x736823*/
      {
        IDA_LOBYTE(v6) = House::IsCurrentPlayer(*((void **)a4 + 135)); /*0x736837*/
        if ( !(_BYTE)v6 && (int)g_CurrentFrame - *((_DWORD *)a4 + 48) > 300 ) /*0x736858*/
        {
          if ( !*((_DWORD *)a4 + 413) ) /*0x73685e*/
            WinAPI::Wrapper(-2147467261); /*0x73686d*/
          IDA_LOBYTE(v6) = (*(int (__cdecl **)(_DWORD))(**((_DWORD **)a4 + 413) + 16))(*((_DWORD *)a4 + 413)); /*0x73687b*/
          if ( !(_BYTE)v6 ) /*0x736880*/
          {
            v29[0] = *((_DWORD *)a4 + 39); /*0x736890*/
            v29[1] = *((_DWORD *)a4 + 40); /*0x7368a1*/
            v29[2] = *((_DWORD *)a4 + 41); /*0x7368a8*/
            v15 = Coord::To_Cell(&MapClass_Instance, v29); /*0x7368ac*/
            v6 = Cell::IsBridge(v15); /*0x7368b3*/
            if ( v6 ) /*0x7368ba*/
            {
              if ( *(_BYTE *)(v6[328] + 5819) ) /*0x7368c6*/
              {
                v16 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 440))(v6, v26); /*0x7368dd*/
                v17 = *v16 + 3; /*0x7368f0*/
                v18 = v16[1] + 1; /*0x7368f7*/
                v6 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)a4 + 440))(a4, v26); /*0x7368f9*/
                if ( *(_WORD *)v6 == v17 && *((_WORD *)v6 + 1) == v18 ) /*0x736908*/
                {
                  v28[0] = vars0; /*0x736913*/
                  v28[1] = retaddr; /*0x73691b*/
                  v29[0] = a5; /*0x736925*/
                  v19 = Coord::To_Cell(&MapClass_Instance, v28); /*0x736929*/
                  v20 = Cell::IsBridge(v19); /*0x736937*/
                  if ( Team::AllMembersValid((int *)a4) ) /*0x736939*/
                    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 628))(a4, 3); /*0x736948*/
                  v21 = *(_DWORD *)a4; /*0x73694e*/
                  PlacementCells_Alt = (__int16 *)MapClass::FindPlacementCellsAlt(a4, &v25, (int)v20); /*0x73695a*/
                  v23 = CellCoord::To_CellObj(&MapClass_Instance, PlacementCells_Alt); /*0x736965*/
                  (*(void (__thiscall **)(_BYTE *, void *))(v21 + 1152))(a4, v23); /*0x73696d*/
                  IDA_LOBYTE(v6) = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a4 + 488))(a4, 2, 1); /*0x73697b*/
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v6; /*0x736663*/
}
// 0x51dbd0
void* InfantryClass::CalcFacingToTarget()
{
  int v3; // edx
  int *v4; // ebx
  double v5; // st7
  __int16 v6; // ax
  int v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  int v13; // ebx
  void *v14; // eax
  int *v15; // ebx
  double v16; // st7
  __int16 v17; // ax
  int v18; // ebx
  double v19; // st7
  double v20; // st7
  int v21; // eax
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // edx
  char v26; // [esp+24h] [ebp-58h]
  char v27; // [esp+24h] [ebp-58h]
  double v28; // [esp+3Ch] [ebp-40h]
  double v29; // [esp+3Ch] [ebp-40h]
  double v30; // [esp+44h] [ebp-38h]
  double v31; // [esp+44h] [ebp-38h]
  int v32; // [esp+4Ch] [ebp-30h] BYREF
  int v33; // [esp+50h] [ebp-2Ch]
  int v34; // [esp+54h] [ebp-28h]
  int v35; // [esp+58h] [ebp-24h] BYREF
  int v36; // [esp+5Ch] [ebp-20h]
  int v37; // [esp+60h] [ebp-1Ch]
  int v38[3]; // [esp+64h] [ebp-18h] BYREF
  int v39[3]; // [esp+70h] [ebp-Ch] BYREF

  v32 = *a2; /*0x51dbe5*/
  v33 = a2[1]; /*0x51dbee*/
  v3 = *(_DWORD *)this; /*0x51dbf2*/
  v34 = a2[2]; /*0x51dbf7*/
  v4 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(v3 + 72))(this, v38); /*0x51dc03*/
  Int64::Equal(v4, a2); /*0x51dc08*/
  v5 = Math::CalcAngle((double)v4[1] - (double)a2[1], (double)*a2 - (double)*v4); /*0x51dc24*/
  v6 = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x51dc35*/
  v7 = a2[2]; /*0x51dc43*/
  v30 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51dc63*/
  v28 = (double)a2[1]; /*0x51dc74*/
  v8 = Math::SinCos(v30); /*0x51dc78*/
  IDA_LODWORD(v28) = Math::RoundToInt(v28 - v8 * 124.0); /*0x51dc90*/
  v9 = Math::ArcTan2(v30); /*0x51dc9a*/
  v10 = Math::RoundToInt(v9 * 124.0 + (double)*a2); /*0x51dcaa*/
  v36 = IDA_LODWORD(v28); /*0x51dcb5*/
  v35 = v10; /*0x51dcbf*/
  v37 = v7; /*0x51dcc3*/
  v26 = IDA_BYTE1(*((_DWORD *)Coord::To_Cell(&MapClass_Instance, a2) + 80)) & 1; /*0x51dcdc*/
  v11 = Coord::To_Cell(&MapClass_Instance, a2); /*0x51dceb*/
  v12 = ObjectPlacement::CalcPosition(v11, v39, &v35, 0, v26, 0); /*0x51dcf2*/
  *a2 = *v12; /*0x51dcfb*/
  a2[1] = v12[1]; /*0x51dd00*/
  a2[2] = v12[2]; /*0x51dd06*/
  if ( *a2 == dword_A8F200 && a2[1] == dword_A8F204 && a2[2] == dword_A8F208 ) /*0x51dd32*/
  {
    v13 = *(_DWORD *)this; /*0x51dd38*/
    v14 = Coord::To_Cell(&MapClass_Instance, &v32); /*0x51dd4c*/
    if ( !(*(int (__thiscall **)(_BYTE *, void *, int, int, _DWORD, int))(v13 + 428))(this, v14, -1, -1, 0, 1) ) /*0x51dd54*/
    {
      v15 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)&this->referenceCount2))(this, v39); /*0x51dd6e*/
      Int64::Equal(v15, a2); /*0x51dd73*/
      v16 = Math::CalcAngle((double)v15[1] - (double)a2[1], (double)*a2 - (double)*v15); /*0x51dd8f*/
      v17 = Math::RoundToInt((v16 - 1.570796326794897) * -10430.06004058427); /*0x51dda0*/
      v34 = v34; /*0x51ddae*/
      v31 = (double)((__int16)(v17 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51ddcf*/
      v29 = (double)v33; /*0x51dde1*/
      v19 = Math::SinCos(v31); /*0x51dde5*/
      IDA_LODWORD(v29) = Math::RoundToInt(v29 - v19 * 128.0); /*0x51ddfd*/
      v20 = Math::ArcTan2(v31); /*0x51de07*/
      v21 = Math::RoundToInt(v20 * 128.0 + (double)v32); /*0x51de19*/
      v36 = IDA_LODWORD(v29); /*0x51de26*/
      v35 = v21; /*0x51de32*/
      v37 = v34; /*0x51de36*/
      v27 = IDA_BYTE1(*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v32) + 80)) & 1; /*0x51de52*/
      v22 = Coord::To_Cell(&MapClass_Instance, &v32); /*0x51de61*/
      v23 = ObjectPlacement::CalcPosition(v22, v38, &v35, 1, v27, 0); /*0x51de68*/
      *a2 = *v23; /*0x51de71*/
      a2[1] = v23[1]; /*0x51de76*/
      a2[2] = v23[2]; /*0x51de7c*/
    }
  }
  if ( *a2 == dword_A8F200 && a2[1] == dword_A8F204 && a2[2] == dword_A8F208 /*0x51deb0*/
    || !(unsigned __int8)FootClass::Destru_vt319(a2)
    || !*(&this->attachedBomb4) )
  {
    return 0; /*0x51deff*/
  }
  v35 = this->location; /*0x51dec6*/
  v24 = *(_DWORD *)this; /*0x51deca*/
  v36 = this->q0A0; /*0x51decf*/
  v37 = this->q0A4; /*0x51dedb*/
  (*(void (__thiscall **)(_BYTE *, int *))(v24 + 244))(this, &v35); /*0x51dee1*/
  (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)&this->q0600))(this, a2); /*0x51deec*/
  return 1; /*0x51def4*/
}
// 0x51bf90
int InfantryClass::EvaluateTarget()
{
  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  _DWORD *Type; // eax
  int result; // eax
  int v12; // eax
  __int16 *NeighbourContent; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  bool v17; // al
  int v19; // ebx
  int v20; // esi
  _DWORD *v21; // eax
  int v22; // edi
  _DWORD *v23; // esi
  int v24; // eax
  int v25; // ecx
  _WORD *v26; // edi
  _WORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  _DWORD *v32; // eax
  _DWORD *v33; // ecx
  _BYTE *v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // edi
  char v38; // al
  bool v39; // zf
  bool v40; // [esp+29h] [ebp-23h] BYREF
  bool v41; // [esp+2Ah] [ebp-22h]
  char v42; // [esp+2Bh] [ebp-21h]
  int v43; // [esp+2Ch] [ebp-20h]
  int v44; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v45[3]; // [esp+34h] [ebp-18h] BYREF
  _BYTE v46[12]; // [esp+40h] [ebp-Ch] BYREF
  int v47; // [esp+54h] [ebp+8h]

  v40 = (*(_DWORD *)(a2 + 320) & 0x100) != 0 /*0x51bfc6*/
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((IDA_HIDWORD(v7) ^ v7) - IDA_HIDWORD(v7)) > 1));
  v8 = *(_DWORD *)(a2 + 84); /*0x51bfd8*/
  v42 = *(_BYTE *)(a2 + 292); /*0x51bfdb*/
  v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0; /*0x51bfe8*/
  v43 = v8; /*0x51bfea*/
  v41 = v9; /*0x51bfee*/
  Type = (_DWORD *)InfantryClass::GetType((__int16 *)a2); /*0x51bff2*/
  if ( a3 == 8 ) /*0x51c000*/
  {
    if ( Type && IDA___PAIR32__(Type[10], IDA_HIWORD(Type[9])) != IDA___PAIR32__(Type[9], IDA_HIWORD(Type[10])) ) /*0x51c01b*/
      return 0; /*0x51c036*/
    return 7; /*0x51c01b*/
  }
  if ( Type ) /*0x51c03b*/
  {
    v12 = abs32(a3 - Type[11]); /*0x51c047*/
    if ( v12 > 2 && v12 < 6 && a3 != -1 ) /*0x51c056*/
      return 7; /*0x51c064*/
  }
  NeighbourContent = (__int16 *)Cell::GetNeighbourContent((_DWORD *)a2, ((_BYTE)a3 - 4) & 7); /*0x51c072*/
  v14 = InfantryClass::GetType(NeighbourContent); /*0x51c07e*/
  if ( v14 ) /*0x51c082*/
  {
    v15 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v14 + 44)); /*0x51c08e*/
    if ( v15 > 2 && v15 < 6 && a3 != -1 ) /*0x51c09d*/
      return 7; /*0x51c0ab*/
  }
  if ( a4 - *(char *)(a2 + 283) > 4 ) /*0x51c0c2*/
    return 0; /*0x51c0cd*/
  result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(*(_DWORD *)&this->currentMission2))( /*0x51c0e6*/
             this,
             a2,
             a3,
             &a4,
             &v40,
             a5);
  if ( result != 7 )
  {
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 ) /*0x51c118*/
    {
      v16 = *(_DWORD *)(a2 + 88); /*0x51c120*/
      v42 = *(_BYTE *)(a2 + 296); /*0x51c123*/
      v17 = (*(_DWORD *)(a2 + 296) & 0x20) != 0; /*0x51c130*/
      v43 = v16; /*0x51c132*/
      v41 = v17; /*0x51c136*/
    }
    if ( this->q3D5 /*0x51c163*/
      && !g_IKnowWhatImDoing
      && !Type::CheckAmbiguity(&MapClass_Instance, a2, 1)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->gattlingStage0))(this) )
    {
      return 7; /*0x51c179*/
    }
    v18 = *(_DWORD *)(a2 + 68); /*0x51c17c*/
    v19 = 0; /*0x51c17f*/
    if ( v18 != -1 ) /*0x51c184*/
    {
      v20 = *((_DWORD *)g_BuildingTypeClass_Array + v18); /*0x51c190*/
      if ( *(_BYTE *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80)) ) /*0x51c1a3*/
        return 7; /*0x51c1b8*/
      if ( *(_BYTE *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(_DWORD *)(v20 + 672) ) /*0x51c1dc*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->radioQueue4))(this) ) /*0x51c1e3*/
          return 7; /*0x51c1e3*/
        v21 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0); /*0x51c1f8*/
        if ( !(unsigned __int8)InfantryClass::startPanic(*v21) ) /*0x51c200*/
          return 7; /*0x51c207*/
        v19 = 5 - HouseClass::IsAllied(*(_DWORD **)(&this->u32_D80), *(_DWORD *)(a2 + 80)); /*0x51c223*/
      }
    }
    v22 = 0; /*0x51c229*/
    v47 = 0; /*0x51c22d*/
    if ( v40 ) /*0x51c231*/
      v23 = *(_DWORD **)(a2 + 232); /*0x51c237*/
    else
      v23 = *(_DWORD **)(a2 + 228); /*0x51c243*/
    if ( v23 ) /*0x51c24b*/
    {
      while ( 1 ) /*0x51c251*/
      {
        if ( v23 != (_DWORD *)this ) /*0x51c253*/
        {
          v24 = this->FootClass_field_69C; /*0x51c259*/
          if ( v24 ) /*0x51c261*/
          {
            v25 = *(_DWORD *)(v24 + 40); /*0x51c263*/
            if ( v25 ) /*0x51c268*/
            {
              v26 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 440))(v25, &a5); /*0x51c27b*/
              v27 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v23 + 440))(v23, &v44); /*0x51c282*/
              if ( *v27 == *v26 && v27[1] == v26[1] ) /*0x51c298*/
                return 0; /*0x51c298*/
            }
          }
          v28 = *(_DWORD **)(&this->currentTurretNumber2); /*0x51c29e*/
          if ( v28 && (v29 = (_DWORD *)v28[182]) != 0 && v23 == v28 && BuildingClass::CheckBridge(v29, this, (void *)a2) ) /*0x51c2bc*/
          {
            v41 = 0; /*0x51c2c5*/
          }
          else
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 468))(v23) /*0x51c36f*/
              && ((*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 7
               || (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 8
               || (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 9
               || (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 17
               && this->Type->qEC2
               || ((*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 11
                || (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 25
                || (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 5)
               && this->Type->qEC3) )
            {
              if ( v23 == *(_DWORD **)(&this->cloakDelayTimer4) /*0x51c3c8*/
                || (v45[0] = v23[39],
                    v45[1] = v23[40],
                    v45[2] = v23[41],
                    Coord::To_Cell(&MapClass_Instance, v45) == *(void **)(&this->cloakDelayTimer4))
                || v23 == *(_DWORD **)(&this->passengers2) )
              {
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 352))(v23) ) /*0x51c71f*/
                  return 7; /*0x51c727*/
                if ( !this->isTether /*0x51c76c*/
                  && !v40
                  && flt_89EA40[9 * *(_DWORD *)(a2 + 236) + this->Type->q67C] == 0.0 )
                {
                  return 7; /*0x51c77a*/
                }
                return 0; /*0x51c788*/
              }
              v30 = Cell::IsBridge((_DWORD *)a2); /*0x51c3d2*/
              v31 = v30; /*0x51c3d7*/
              if ( v30 ) /*0x51c3db*/
              {
                if ( v23 != v30 ) /*0x51c3df*/
                {
                  if ( v30 == *(_DWORD **)(&this->cloakDelayTimer4) ) /*0x51c3e7*/
                    goto LABEL_134; /*0x51c3e7*/
                  v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v30 + 72))(v30, v46); /*0x51c3f6*/
                  if ( Coord::To_Cell(&MapClass_Instance, v32) == *(void **)(&this->cloakDelayTimer4) /*0x51c416*/
                    || v31 == *(_DWORD **)(&this->passengers2) )
                  {
                    goto LABEL_134; /*0x51c416*/
                  }
                }
              }
            }
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 11 ) /*0x51c42a*/
            {
              v33 = *(_DWORD **)(&this->lastCommands6); /*0x51c42c*/
              if ( v33 == v23 && (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 1 ) /*0x51c43e*/
                return 7; /*0x51c43e*/
            }
            if ( this->Type->qEC6 /*0x51c47c*/
              && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 128))(v23)
              && *(_DWORD **)(&this->cloakDelayTimer4) == v23
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v23 + 132))(v23) + 3220) )
            {
              return 0; /*0x51c47c*/
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) != 6 ) /*0x51c48c*/
            {
  LABEL_96:
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) == 7 /*0x51c56b*/
                && v23 == *(_DWORD **)(&this->cloakDelayTimer4)
                && this->isTether )
              {
                return 0; /*0x51c573*/
              }
              if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(&this->u32_D80), (int)v23) || g_IKnowWhatImDoing ) /*0x51c594*/
              {
                switch ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) ) /*0x51c669*/
                {
                  case 1: /*0x51c669*/
                    if ( !v23[413] ) /*0x51c670*/
                      WinAPI::Wrapper(-2147467261); /*0x51c67f*/
                    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) || v23[361] ) /*0x51c694*/
                    {
                      if ( *((_BYTE *)v23 + 1718) ) /*0x51c6aa*/
                        goto LABEL_128; /*0x51c6aa*/
                      if ( !v23[413] ) /*0x51c6b4*/
                        WinAPI::Wrapper(-2147467261); /*0x51c6c3*/
                      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 164))(v23[413]) ) /*0x51c6d1*/
                      {
  LABEL_128:
                        if ( v19 < 2 ) /*0x51c6de*/
                          v19 = 2; /*0x51c6e0*/
                      }
                    }
                    else if ( v19 < 6 ) /*0x51c6a1*/
                    {
                      v19 = 6; /*0x51c6a3*/
                    }
                    goto LABEL_134; /*0x51c6a8*/
                  case 2: /*0x51c669*/
                  case 6: /*0x51c669*/
                    return 7;
                  case 15: /*0x51c669*/
                    if ( !v23[413] ) /*0x51c6e7*/
                      WinAPI::Wrapper(-2147467261); /*0x51c6f6*/
                    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) ) /*0x51c704*/
                      ++v47; /*0x51c70b*/
                    goto LABEL_134; /*0x51c70b*/
                  default:
                    goto LABEL_134;
                }
              }
              v36 = AbstractClass::IsTechnoType(v23); /*0x51c59c*/
              if ( v36 && v36[136] == 2 ) /*0x51c5ac*/
              {
                if ( v19 < 1 ) /*0x51c5b1*/
                  v19 = 1; /*0x51c5b7*/
              }
              else
              {
                v37 = (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23); /*0x51c5cc*/
                if ( TechnoClass::GetValue((_DWORD *)this, -1) <= 0 && v37 != 36 ) /*0x51c5da*/
                  return 7; /*0x51c5da*/
                if ( v37 == 6 ) /*0x51c5e3*/
                {
                  if ( *(_BYTE *)(v23[328] + 5814) ) /*0x51c62f*/
                    return 7; /*0x51c637*/
                  if ( v19 < 5 ) /*0x51c640*/
                    v19 = 5; /*0x51c646*/
                }
                else if ( v37 == 15 ) /*0x51c5e8*/
                {
                  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v23 + 200))(v23, this->owner) ) /*0x51c611*/
                    v19 = 6; /*0x51c61f*/
                }
                else if ( v37 != 36 && v19 < 5 ) /*0x51c5f6*/
                {
                  v19 = 5; /*0x51c5fc*/
                }
              }
              goto LABEL_134; /*0x51c5bc*/
            }
            v34 = (_BYTE *)v23[328]; /*0x51c492*/
            if ( !v34[5889] ) /*0x51c498*/
            {
              if ( !v34[5823] || (v35 = v23[390], v35 != 12) && v35 != 8 ) /*0x51c4c2*/
              {
                if ( v34[5824] ) /*0x51c4c8*/
                {
                  if ( *(_BYTE *)(v23[135] + 506) ) /*0x51c4d8*/
                    return 7; /*0x51c4e0*/
                }
                else
                {
                  if ( !v34[5815] ) /*0x51c4f3*/
                    goto LABEL_96; /*0x51c4f3*/
                  if ( !BuildingClass::IsPoweredOn(v23) ) /*0x51c4f7*/
                  {
                    if ( (unsigned __int8)HouseClass::IsAlliedWith((void *)v23[135], *(void **)(&this->u32_D80)) ) /*0x51c511*/
                    {
                      if ( v19 < 3 ) /*0x51c51d*/
                        v19 = 3; /*0x51c523*/
                    }
                    else
                    {
                      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->radioQueue4))(this) ) /*0x51c53a*/
                        return 7; /*0x51c53a*/
                      if ( v19 < 5 ) /*0x51c543*/
                        v19 = 5; /*0x51c549*/
                    }
                  }
                }
              }
            }
          }
        }
  LABEL_134:
        v23 = (_DWORD *)v23[12]; /*0x51c70f*/
        if ( !v23 ) /*0x51c714*/
        {
          v22 = v47; /*0x51c78b*/
          break; /*0x51c78b*/
        }
      }
    }
    if ( !this->isTether /*0x51c7ce*/
      && !v40
      && flt_89EA40[9 * *(_DWORD *)(a2 + 236) + this->Type->q67C] == 0.0 )
    {
      return 7; /*0x51c7dc*/
    }
    if ( !v19 && v41 ) /*0x51c7e9*/
      return 2; /*0x51c7f7*/
    if ( v43 != -1 )
    {
      if ( HouseClass::IsAllied(*(_DWORD **)(&this->u32_D80), v43) )
      {
        v38 = v42; /*0x51c813*/
        if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
          return v22 != 3 ? 2 : 6;
        goto LABEL_159; /*0x51c824*/
      }
      if ( TechnoClass::GetValue((_DWORD *)this, -1) <= 0 ) /*0x51c84c*/
        return 7; /*0x51c84c*/
      if ( v19 < 5 ) /*0x51c851*/
        return 5; /*0x51c861*/
    }
    v38 = v42; /*0x51c864*/
  LABEL_159:
    if ( v19 ) /*0x51c86a*/
      return v19; /*0x51c86a*/
    v39 = (v38 & 0x1C) == 28; /*0x51c86e*/
    result = 7; /*0x51c870*/
    if ( !v39 ) /*0x51c875*/
      return v19; /*0x51c877*/
  }
  return result; /*0x51c02d*/
}
// 0x51e140
BuildingTypeClass * * InfantryClass::SelectAutoTarget(unsigned int flags, __int64 a3)
{
  int v4; // ecx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  double v7; // st7
  unsigned int v9; // edi
  _BYTE *v10; // ecx
  int v11; // eax
  char v12; // cl
  _DWORD **v13; // eax
  int v14; // eax
  _DWORD **v15; // eax
  int v16; // eax
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  _BYTE v19[12]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v20[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( (unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80)) || !this->Type->qEC3 ) /*0x51e160*/
  {
    v9 = flags; /*0x51e218*/
  }
  else
  {
    v4 = *(_DWORD *)(this->owner + 21728); /*0x51e174*/
    if ( v4 ) /*0x51e17c*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v19); /*0x51e18e*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)&this->referenceCount2))(this, v20); /*0x51e197*/
      v17 = v6[1] - v5[1]; /*0x51e1b5*/
      v18 = v6[2] - v5[2]; /*0x51e1bf*/
      v7 = Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v18 * (double)v18 + (double)v17 * (double)v17); /*0x51e1e4*/
      if ( (int)Math::RoundToInt(v7) < 3840 ) /*0x51e1f6*/
        return *(_DWORD *)(this->owner + 21728); /*0x51e209*/
    }
    v9 = flags | 0x200; /*0x51e210*/
  }
  if ( this->Type->qEC6 ) /*0x51e222*/
  {
    v10 = *(_BYTE **)(&this->cloakDelayTimer4); /*0x51e22c*/
    if ( v10 ) /*0x51e234*/
    {
      if ( (v10[20] & 1) != 0 /*0x51e278*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 128))(v10)
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->cloakDelayTimer4) + 132))(this->Archive)
                     + 3220)
        && ObjectClass::DistanceTo((void *)this, this->Archive) < 3840 )
      {
        return this->Archive; /*0x51e285*/
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->radioQueue4))(this) ) /*0x51e28c*/
    goto LABEL_21; /*0x51e294*/
  v11 = this->Type; /*0x51e296*/
  v12 = v11->qEC6; /*0x51e2a4*/
  if ( !v11->qEBE ) /*0x51e29c*/
  {
    if ( !v12 ) /*0x51e2ae*/
      return 0; /*0x51e2b7*/
    goto LABEL_20; /*0x51e2ae*/
  }
  if ( v12 ) /*0x51e2bc*/
  LABEL_20:
    v9 = v9 & 0xFFFFFF4B | 0x10; /*0x51e2be*/
  LABEL_21:
  if ( (v9 & 0x1B978) == 0 ) /*0x51e2cd*/
  {
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0) ) /*0x51e2db*/
    {
      v13 = (_DWORD **)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0); /*0x51e2e6*/
      IDA_LOBYTE(v14) = Building::GetRenderType(*v13); /*0x51e2ee*/
      v9 |= v14; /*0x51e2f3*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)&this->q1946))(this, 1) ) /*0x51e301*/
    {
      v15 = (_DWORD **)(*(int (__thiscall **)(int, int))(*(_DWORD *)&this->q1946))(this, 1); /*0x51e30c*/
      IDA_LOBYTE(v16) = Building::GetRenderType(*v15); /*0x51e314*/
      v9 |= v16; /*0x51e319*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->radioQueue4))(this) /*0x51e33d*/
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0) + 172)
                + 329) )
  {
    v9 &= 0xFFFFFF4B; /*0x51e347*/
  }
  if ( (this->Type->qEC2 || TechnoTypeClass::HasVoiceResponse((float *)this, 14)) /*0x51e370*/
    && !(unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80)) )
  {
    v9 |= 0x20u; /*0x51e379*/
  }
  if ( this->Type->qEC5 ) /*0x51e382*/
    v9 |= 0x240u; /*0x51e38c*/
  return FootClass::SelectAutoTarget_Cloaked(v9, a3, IDA_HIDWORD(a3)); /*0x51e1fe*/
}
// 0x5f6360
        && ObjectClass::DistanceTo((void *)this, this->Archive) < 3840 )
        {
          _DWORD *v4; // esi
          _DWORD *v5; // eax
          double v6; // st7
          int v7; // ebx
          int v8; // eax
          int v9; // esi
          int FoundationHeight; // edi
          int v11; // [esp+20h] [ebp-20h]
          int v12; // [esp+24h] [ebp-1Ch]
          _BYTE v13[12]; // [esp+28h] [ebp-18h] BYREF
          _BYTE v14[12]; // [esp+34h] [ebp-Ch] BYREF

          if ( !Archive ) /*0x5f636d*/
            return 0; /*0x5f6370*/
          v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)Archive + 72))(Archive, v13); /*0x5f6388*/
          v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v14); /*0x5f6391*/
          v11 = v5[1] - v4[1]; /*0x5f63ae*/
          v12 = v5[2] - v4[2]; /*0x5f63b2*/
          v6 = Math::Sqrt((double)(*v5 - *v4) * (double)(*v5 - *v4) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x5f63de*/
          v7 = Math::RoundToInt(v6); /*0x5f63ef*/
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)Archive + 44))(Archive); /*0x5f63f1*/
          v9 = v8 == 6 ? Archive : 0;
          if ( v9 )
          {
            FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v8 == 6 ? Archive + 0x520 : 1312), 0);
            v7 += -64 * (BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v9 + 1312)) + FoundationHeight); /*0x5f6424*/
            if ( v7 < 0 ) /*0x5f6426*/
              return 0; /*0x5f6428*/
          }
          return v7; /*0x5f636f*/
        }
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) )
    goto LABEL_21;
  v11 = this->Type;
  v12 = *(_BYTE *)(v11 + 3782);
  if ( !*(_BYTE *)(v11 + 3774) )
  {
    if ( !v12 )
      return 0;
    goto LABEL_20;
  }
  if ( v12 )
LABEL_20:
    v9 = v9 & 0xFFFFFF4B | 0x10;
LABEL_21:
  if ( (v9 & 0x1B978) == 0 )
  {
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0) )
    {
      v13 = (_DWORD **)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0);
  int v14; // eax
      IDA_LOBYTE(v14) = Building::GetRenderType(*v13);
      v9 |= v14;
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int))(this->q3F8)(this, 1) )
    {
      v15 = (_DWORD **)(*(int (__thiscall **)(int, int))(this->q3F8)(this, 1);
  int v16; // eax
      IDA_LOBYTE(v16) = Building::GetRenderType(*v15);
      v9 |= v16;
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this)
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0) + 172)
                + 329) )
  {
    v9 &= 0xFFFFFF4B;
  if ( (*(_BYTE *)(this->Type + 3778) || TechnoClass::HasVoiceResponse(this, 14))
    && !(unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80)) )
  {
    v9 |= 0x20u;
  if ( *(_BYTE *)(this->Type + 3781) )
    v9 |= 0x240u;
  return FootClass::SelectAutoTarget_Cloaked(v9, a3, IDA_HIDWORD(a3));

/* ASM:
sub     esp, 24h
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_51E218
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC3h]
test    cl, cl
jz      loc_51E218
mov     ecx, [esi+21Ch]
mov     ecx, [ecx+54E0h]
test    ecx, ecx
jz      loc_51E20C
mov     edx, [ecx]
lea     eax, [esp+2Ch+var_18]
push    eax
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     edi, eax
lea     eax, [esp+2Ch+var_C]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [edi]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+2Ch+var_24], ecx
mov     ecx, [edi+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [edi+8]
mov     [esp+34h+var_20], edx
sub     eax, ecx
fild    [esp+34h+var_20]
mov     [esp+34h+var_1C], eax
fild    [esp+34h+var_1C]
fild    [esp+34h+var_24]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+34h+var_34] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 0F00h
jge     short loc_51E20C
mov     ecx, [esi+21Ch]
pop     edi
pop     esi
mov     eax, [ecx+54E0h]
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51E20C:                             ; CODE XREF: InfantryClass__SelectAutoTarget+3C↑j
; InfantryClass__SelectAutoTarget+B6↑j
mov     edi, [esp+2Ch+arg_0]
or      edi, 200h
jmp     short loc_51E21C
; ---------------------------------------------------------------------------

loc_51E218:                             ; CODE XREF: InfantryClass__SelectAutoTarget+14↑j
; InfantryClass__SelectAutoTarget+28↑j
mov     edi, [esp+2Ch+arg_0]

loc_51E21C:                             ; CODE XREF: InfantryClass__SelectAutoTarget+D6↑j
mov     edx, [esi+6C0h]
mov     al, [edx+0EC6h]
test    al, al
jz      short loc_51E288
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_51E288
mov     al, [ecx+14h]
and     al, 1
mov     byte ptr [esp+2Ch+arg_0], al
jz      short loc_51E288
mov     edx, [ecx]
call    dword ptr [edx+80h]
test    al, al
jz      short loc_51E288
mov     ecx, [esi+5A4h]
mov     eax, [ecx]
call    dword ptr [eax+84h]
mov     cl, [eax+0C94h]
test    cl, cl
jnz     short loc_51E288
mov     ecx, [esi+5A4h]
push    ecx
mov     ecx, esi
call    ObjectClass__DistanceTo
cmp     eax, 0F00h
jge     short loc_51E288
mov     eax, [esi+5A4h]
pop     edi
pop     esi
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51E288:                             ; CODE XREF: InfantryClass__SelectAutoTarget+EA↑j
; InfantryClass__SelectAutoTarget+F4↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2ACh]
test    al, al
jnz     short loc_51E2C7
mov     eax, [esi+6C0h]
mov     cl, [eax+0EBEh]
test    cl, cl
mov     cl, [eax+0EC6h]
jnz     short loc_51E2BA
test    cl, cl
jnz     short loc_51E2BE
pop     edi
xor     eax, eax
pop     esi
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51E2BA:                             ; CODE XREF: InfantryClass__SelectAutoTarget+16A↑j
test    cl, cl
jz      short loc_51E2C7

loc_51E2BE:                             ; CODE XREF: InfantryClass__SelectAutoTarget+16E↑j
and     edi, 0FFFFFF5Bh
or      edi, 10h

loc_51E2C7:                             ; CODE XREF: InfantryClass__SelectAutoTarget+154↑j
; InfantryClass__SelectAutoTarget+17C↑j
test    edi, 1B978h
jnz     short loc_51E31B
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_51E2F5
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     ecx, [eax]
call    Building__GetRenderType
or      edi, eax

loc_51E2F5:                             ; CODE XREF: InfantryClass__SelectAutoTarget+19E↑j
mov     eax, [esi]
push    1
mov     ecx, esi
call    dword ptr [eax+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_51E31B
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     ecx, [eax]
call    Building__GetRenderType
or      edi, eax

loc_51E31B:                             ; CODE XREF: InfantryClass__SelectAutoTarget+18D↑j
; InfantryClass__SelectAutoTarget+1C4↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2ACh]
test    al, al
jz      short loc_51E34D
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     ecx, [eax+0ACh]
mov     al, [ecx+149h]
test    al, al
jz      short loc_51E34D
and     edi, 0FFFFFF4Bh

loc_51E34D:                             ; CODE XREF: InfantryClass__SelectAutoTarget+1E7↑j
; InfantryClass__SelectAutoTarget+205↑j
mov     edx, [esi+6C0h]
mov     al, [edx+0EC2h]
test    al, al
jnz     short loc_51E36A
push    0Eh
mov     ecx, esi
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      short loc_51E37C

loc_51E36A:                             ; CODE XREF: InfantryClass__SelectAutoTarget+21B↑j
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_51E37C
or      edi, 20h

loc_51E37C:                             ; CODE XREF: InfantryClass__SelectAutoTarget+228↑j
; InfantryClass__SelectAutoTarget+237↑j
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC5h]
test    cl, cl
jz      short loc_51E392
or      edi, 240h

loc_51E392:                             ; CODE XREF: InfantryClass__SelectAutoTarget+24A↑j
mov     ecx, dword ptr [esp+2Ch+arg_4+4]
mov     edx, dword ptr [esp+2Ch+arg_4]
push    ecx
push    edx
push    edi
mov     ecx, esi
call    FootClass__SelectAutoTarget_Cloaked
pop     edi
pop     esi
add     esp, 24h
retn    0Ch
*/
}
}

// 0x51b1f0
int InfantryClass::AssignTarget_SyncLog(int syncFlag)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( syncFlag != this->q2B4 ) /*0x51b201*/
  {
    if ( this->q06C > 0 ) /*0x51b206*/
    {
      v3 = this->u32_6C4; /*0x51b208*/
      this->u32_68D = 0; /*0x51b20e*/
      if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 ) /*0x51b226*/
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)&this->q0888))(this, 28, 0, 0); /*0x51b22e*/
      }
      else if ( this->u32_6DB ) /*0x51b230*/
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)&this->q0888))(this, 2, 0, 0); /*0x51b240*/
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 0, 0, 0); /*0x51b24f*/
      }
    }
    if ( syncFlag != this->target ) /*0x51b25b*/
    {
      v4 = this->tiberiumCollectionState; /*0x51b25d*/
      if ( v4 ) /*0x51b265*/
      {
        v4->airstrike = 0; /*0x51b267*/
        this->tiberiumCollectionState = 0; /*0x51b26d*/
      }
    }
  }
  v5 = this->SequenceAnim; /*0x51b273*/
  if ( v5 != 27 && v5 != 28 && v5 != 29 && v5 != 30 || this->Type->q6AC ) /*0x51b293*/
  {
    this->pathDirections = -1; /*0x51b2a2*/
    IDA_LOBYTE(v5) = TechnoClass::AssignTarget_SyncLog((_DWORD *)this, syncFlag); /*0x51b2ac*/
    if ( !this->Archive && this->Type->qEBE ) /*0x51b2c3*/
    {
      if ( syncFlag && (*(int (__thiscall **)(int))(*(_DWORD *)syncFlag + 44))(syncFlag) == 6 ) /*0x51b2d9*/
        v5 = syncFlag; /*0x51b2db*/
      else
        v5 = 0; /*0x51b2df*/
      if ( this->Type->qEC4 ) /*0x51b2e7*/
      {
        if ( v5 && *(_BYTE *)(v5->u32_520 + 5494) ) /*0x51b32a*/
          IDA_LOBYTE(v5) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)&this->q1CC2))(this, syncFlag, 1); /*0x51b339*/
      }
      else if ( v5 && *(_BYTE *)(v5->u32_520 + 5490) ) /*0x51b2fb*/
      {
        IDA_LOBYTE(v5) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)&this->q1CC2))(this, syncFlag, 1); /*0x51b30a*/
        this->q68E = 0; /*0x51b310*/
        return v5; /*0x51b319*/
      }
    }
    this->q68E = 0; /*0x51b33f*/
  }
  return v5; /*0x51b316*/
}
// 0x51aa40
int InfantryClass::AssignDestination_SyncLog(AbstractClass* dest, int sync_flag)
{
  void *v4; // eax
  void *v5; // eax
  int *v6; // ebx
  _DWORD *v7; // eax
  void *v8; // esi
  int v9; // edx
  _DWORD *v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  void *v13; // eax
  int v14; // eax
  int *v15; // eax
  int *v16; // esi
  int *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // edx
  _DWORD *v27; // eax
  bool v28; // al
  int v29; // ebx
  bool v30; // zf
  int v31; // eax
  _DWORD *v32; // esi
  int v33; // eax
  int v35; // eax
  int v36; // eax
  int *v37; // eax
  int v38; // eax
  _DWORD *v39; // esi
  int v40; // eax
  int v43; // [esp+44h] [ebp-58h]
  bool v44; // [esp+73h] [ebp-29h]
  LPVOID ppv; // [esp+74h] [ebp-28h] BYREF
  void *v46; // [esp+78h] [ebp-24h] BYREF
  _BYTE v48[12]; // [esp+80h] [ebp-1Ch] BYREF
  char v49[16]; // [esp+8Ch] [ebp-10h] BYREF

  v4 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)&this->nextArrayIndex0))(this); /*0x51aa4c*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v4) ) /*0x51aa51*/
  {
    v5 = *(void **)(&this->target2); /*0x51aa5a*/
    if ( v5 == (void *)27 || v5 == (void *)28 || v5 == (void *)29 || v5 == (void *)30 ) /*0x51aa7e*/
      return (char)v5; /*0x51aa7e*/
  }
  v6 = dest; /*0x51aa8a*/
  if ( this->Type->IsSelectableCombatant ) /*0x51aa90*/
  {
    if ( dest ) /*0x51aaa0*/
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v48); /*0x51aab0*/
      v8 = *(void **)CellStruct::Set(&v46, *v7 / 256, v7[1] / 256); /*0x51aadd*/
      v9 = *v6; /*0x51aadf*/
      ppv = v8; /*0x51aae8*/
      v10 = (_DWORD *)v6->GetCoords_0(v49); /*0x51aaec*/
      v5 = *(void **)CellStruct::Set(&v46, *v10 / 256, v10[1] / 256); /*0x51ab19*/
      v46 = v5; /*0x51ab1e*/
      if ( v5 == v8 ) /*0x51ab22*/
        return (char)v5; /*0x51ab22*/
    }
  }
  v11 = this->tiberiumCollectionState; /*0x51ab34*/
  if ( v11 ) /*0x51ab3c*/
  {
    v11->airstrike = 0; /*0x51ab3e*/
    this->tiberiumCollectionState = 0; /*0x51ab44*/
  }
  if ( !this->Locomotor ) /*0x51ab4a*/
    WinAPI::Wrapper(-2147467261); /*0x51ab57*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 16))(this->Locomotor) ) /*0x51ab65*/
  {
    if ( v6 ) /*0x51ab71*/
    {
      v43 = this->Type->q67C; /*0x51ab8e*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)&this->referenceCount2))(this, v49); /*0x51ab92*/
      v13 = Coord::To_Cell(&MapClass_Instance, v12); /*0x51ab9b*/
      if ( Cell::IsBuildable((int)v13, v43, 1, 0, -1, 0, -1, 1) /*0x51abca*/
        && (this->Type->IsSelectableCombatant || this->currentMission != 1 || *(int **)(&this->cloakDelayTimer4) != v6) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)&this->q2000))(this); /*0x51abd1*/
      }
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80)) ) /*0x51abdd*/
  {
    if ( v6 ) /*0x51abe8*/
    {
      if ( *(int **)(&this->cloakDelayTimer4) == v6 ) /*0x51abf0*/
      {
        if ( this->Crawling ) /*0x51abf2*/
        {
          v14 = this->Type; /*0x51abfc*/
          if ( !v14->qEBF && !v14->qEAC ) /*0x51ac0c*/
            (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 7, 0, 0); /*0x51ac1f*/
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)&this->isInLogic8))(this) != 7 && this->queuedMission != 7 /*0x51ac44*/
    || Team::AllMembersValid((int *)this) )
  {
    this->pathDirections = -1; /*0x51ad11*/
    goto LABEL_48; /*0x51ad11*/
  }
  v15 = (int *)AbstractClass::IsTechnoType(v6); /*0x51ac53*/
  v15 = v15; /*0x51ac58*/
  if ( !v15 ) /*0x51ac5c*/
  {
  LABEL_48:
    if ( v6 && this->Type->IsSelectableCombatant ) /*0x51ad25*/
    {
      if ( !this->Locomotor ) /*0x51ad33*/
        WinAPI::Wrapper(-2147467261); /*0x51ad42*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 16))(this->Locomotor) ) /*0x51ad50*/
      {
        v19 = this->Locomotor; /*0x51ad5b*/
        ppv = 0; /*0x51ad69*/
        if ( !v19 ) /*0x51ad71*/
          goto LABEL_58; /*0x51ad71*/
        v20 = StreamClass::Set2(&ppv, (_DWORD *)(&this->hijackerInfantryType2)); /*0x51ad78*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x51ad86*/
          WinAPI::Wrapper(v20); /*0x51ad89*/
        if ( !ppv ) /*0x51ad94*/
  LABEL_58:
          WinAPI::Wrapper(-2147467261); /*0x51ad9b*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 12))(ppv, v49); /*0x51adac*/
        if ( !memcmp(v49, &g_CLSID_WalkLocomotion, 0x10u) ) /*0x51adbf*/
        {
          v21 = this->q5B4; /*0x51adc7*/
          if ( this->q5BC < v21 /*0x51adf8*/
            || (this->q5B9 || !v21)
            && (v22 = this->q5C0, v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->FootClass_DVC_5AC + 8))(
                 &this->q16B0,
                 v21 + v22,
                 0) )
          {
            v23 = this->q5BC; /*0x51adff*/
            if ( v23 ) /*0x51ae04*/
              memcpy((void *)(this->q5B0 + 4), *(const void **)(&this->pitchAngle6), 4 * v23); /*0x51ae12*/
            **(_DWORD **)(&this->pitchAngle6) = v6; /*0x51ae1d*/
            ++this->q5BC; /*0x51ae23*/
          }
          v24 = (*(int (__thiscall **)(int))(*(_DWORD *)&this->queuedMission2))(this); /*0x51ae2b*/
          v6 = (int *)v24; /*0x51ae31*/
          dest = (int *)v24; /*0x51ae35*/
          if ( v24 && (*(_DWORD *)(v24 + 320) & 0x100) != 0 ) /*0x51ae44*/
          {
            v6 = 0; /*0x51ae46*/
            dest = 0; /*0x51ae48*/
          }
        }
        if ( ppv ) /*0x51ae52*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x51ae57*/
      }
    }
    goto LABEL_73; /*0x51ae57*/
  }
  if ( !Team::AllMembersValid(v15) ) /*0x51ac6b*/
  {
    if ( (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)&this->radioOperator2))(this, 2, v15) == 1 ) /*0x51ace5*/
    {
      v5 = (void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)&this->radioContact8))(this, 14); /*0x51acee*/
      if ( v5 == (void *)14 ) /*0x51acf7*/
        return (char)v5; /*0x51acf7*/
      if ( v5 != (void *)1 ) /*0x51ad00*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)&this->radioContact8))(this, 3); /*0x51ad09*/
    }
    goto LABEL_48; /*0x51ad0f*/
  }
  if ( (*(int (__thiscall **)(int *))(*v15 + 44))(v15) != 1 )
  {
    if ( (*(int (__thiscall **)(int *))(*v15 + 44))(v15) == 6 )
    {
      if ( !v6 ) /*0x51ac99*/
      {
        v17 = 0; /*0x51ac9b*/
        goto LABEL_41; /*0x51ac9d*/
      }
      v18 = (*(int (__thiscall **)(int *))(*v6 + 44))(v6) - 6; /*0x51aca6*/
  LABEL_40:
      v17 = v18 == 0 ? v6 : 0;
      goto LABEL_41; /*0x51acaf*/
    }
    TechnoClass::SetFocus((_DWORD *)this, (int)v6); /*0x51accd*/
    goto LABEL_48; /*0x51acd2*/
  }
  if ( v6 ) /*0x51ac7b*/
  {
    v18 = (*(int (__thiscall **)(int *))(*v6 + 44))(v6) - 1; /*0x51ac88*/
    goto LABEL_40; /*0x51ac89*/
  }
  v17 = 0; /*0x51ac7d*/
  LABEL_41:
  this->q500 = v17; /*0x51acb1*/
  TechnoClass::SetFocus((_DWORD *)this, 0); /*0x51acba*/
  v6 = 0; /*0x51acbf*/
  dest = 0; /*0x51acc1*/
  LABEL_73:
  if ( this->Type->IsSelectableCombatant && v6 ) /*0x51ae72*/
  {
    if ( !this->Locomotor ) /*0x51ae78*/
      WinAPI::Wrapper(-2147467261); /*0x51ae8d*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 16))(this->Locomotor) ) /*0x51ae97*/
    {
      v25 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v6 + 72))(v6, v49); /*0x51aeab*/
      IDA_LOWORD(v46) = *v25 / 256; /*0x51aebf*/
      v26 = *(_DWORD *)this; /*0x51aed0*/
      IDA_HIWORD(v46) = v25[1] / 256; /*0x51aed6*/
      ppv = v46; /*0x51aee3*/
      v27 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(v26 + 76))(this, v48, 0); /*0x51aeea*/
      IDA_LOWORD(v46) = *v27 / 256; /*0x51aefd*/
      IDA_HIWORD(v46) = v27[1] / 256; /*0x51af15*/
      v46 = v46; /*0x51af22*/
      v44 = InfantryClass::CanDeployAtCell((void **)this, (__int16 *)&v46, (__int16 *)&ppv); /*0x51af35*/
      if ( this->Type->IsSelectableCombatant ) /*0x51af39*/
      {
        InfantryClass::updateOccupiedBuilding(&ppv, (int (__stdcall ****)(_DWORD, void *, _DWORD *))(&this->hijackerInfantryType2)); /*0x51af4c*/
        if ( !ppv ) /*0x51af57*/
          WinAPI::Wrapper(-2147467261); /*0x51af5e*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 12))(ppv, v49); /*0x51af6f*/
        v29 = memcmp(v49, (const char *)&g_CLSID_JumpjetLocomotion, 16); /*0x51af80*/
        ComPtr::Release_Alt((int *)&ppv); /*0x51af8f*/
        v30 = v29 == 0; /*0x51af94*/
        v6 = dest; /*0x51af96*/
        v28 = v30; /*0x51af9a*/
      }
      else
      {
        v28 = 0; /*0x51af43*/
      }
      if ( this->Type->HoverAttack ) /*0x51afa5*/
        v44 = 1; /*0x51afaf*/
      if ( v28 ) /*0x51afba*/
      {
        if ( !v44 ) /*0x51afc2*/
        {
          v31 = this->Locomotor; /*0x51afc8*/
          v32 = (_DWORD *)(&this->hijackerInfantryType2); /*0x51afce*/
          dest = 0; /*0x51afd6*/
          if ( v31 ) /*0x51afda*/
          {
            v33 = StreamClass::Set(&dest, (_DWORD *)(&this->hijackerInfantryType2)); /*0x51afe1*/
            if ( v33 < 0 && v33 != -2147467262 ) /*0x51afef*/
              WinAPI::Wrapper(v33); /*0x51aff2*/
            if ( dest && (*(unsigned __int8 (__stdcall **)(int *))(*dest + 28))(dest) ) /*0x51b002*/
            {
              if ( !dest ) /*0x51b00f*/
                WinAPI::Wrapper(-2147467261); /*0x51b016*/
              if ( (*(unsigned __int8 (__stdcall **)(int *))(*dest + 20))(dest) ) /*0x51b022*/
              {
                if ( *v32 ) /*0x51b029*/
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->IsDeploying)(*v32); /*0x51b032*/
                dest = dest; /*0x51b035*/
                *v32 = 0; /*0x51b039*/
                if ( !dest ) /*0x51b03d*/
                  WinAPI::Wrapper(-2147467261); /*0x51b044*/
                (*(void (__stdcall **)(int *, int))(*dest + 16))(dest, &this->hijackerInfantryType2); /*0x51b051*/
              }
            }
          }
          ppv = 0; /*0x51b060*/
          v35 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x51b064*/
          if ( v35 < 0 && v35 != -2147467262 ) /*0x51b072*/
            WinAPI::Wrapper(v35); /*0x51b075*/
          if ( !ppv ) /*0x51b080*/
            WinAPI::Wrapper(-2147467261); /*0x51b087*/
          (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 12))(ppv, this); /*0x51b094*/
          v46 = 0; /*0x51b09b*/
          if ( ppv ) /*0x51b0a1*/
          {
            v36 = StreamClass::Set(&v46, &ppv); /*0x51b0ac*/
            if ( v36 < 0 && v36 != -2147467262 ) /*0x51b0ba*/
              WinAPI::Wrapper(v36); /*0x51b0bd*/
          }
          COMObject::SwapReference((int *)&dest, (int)v46); /*0x51b0cb*/
          if ( v46 ) /*0x51b0d6*/
            (*(void (__stdcall **)(void *))(*(_DWORD *)v46 + 8))(v46); /*0x51b0db*/
          v37 = dest; /*0x51b0de*/
          if ( dest ) /*0x51b0e4*/
          {
            (*(void (__stdcall **)(int *, _DWORD))(*dest + 12))(dest, *v32); /*0x51b0ec*/
            InfantryClass::checkBridgeClearance((int *)(&this->hijackerInfantryType2), (int)ppv); /*0x51b0f6*/
            v37 = dest; /*0x51b0fb*/
          }
          if ( ppv ) /*0x51b105*/
          {
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x51b10a*/
            v37 = dest; /*0x51b10d*/
          }
          if ( v37 ) /*0x51b113*/
            (*(void (__stdcall **)(int *))(*v37 + 8))(v37); /*0x51b11c*/
        }
      }
      else if ( v44 ) /*0x51b126*/
      {
        v38 = this->Locomotor; /*0x51b12c*/
        v39 = (_DWORD *)(&this->hijackerInfantryType2); /*0x51b132*/
        dest = 0; /*0x51b13a*/
        if ( v38 ) /*0x51b13e*/
        {
          v40 = StreamClass::Set(&dest, (_DWORD *)(&this->hijackerInfantryType2)); /*0x51b149*/
          if ( v40 < 0 && v40 != -2147467262 ) /*0x51b157*/
            WinAPI::Wrapper(v40); /*0x51b15a*/
          if ( dest ) /*0x51b165*/
          {
            if ( (*(unsigned __int8 (__stdcall **)(int *))(*dest + 28))(dest) ) /*0x51b16a*/
            {
              if ( !dest ) /*0x51b177*/
                WinAPI::Wrapper(-2147467261); /*0x51b17e*/
              if ( (*(unsigned __int8 (__stdcall **)(int *))(*dest + 20))(dest) ) /*0x51b18a*/
              {
                if ( *v39 ) /*0x51b191*/
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->IsDeploying)(*v39); /*0x51b19a*/
                dest = dest; /*0x51b19d*/
                *v39 = 0; /*0x51b1a1*/
                if ( !dest ) /*0x51b1a5*/
                  WinAPI::Wrapper(-2147467261); /*0x51b1ac*/
                (*(void (__stdcall **)(int *, int))(*dest + 16))(dest, &this->hijackerInfantryType2); /*0x51b1b9*/
              }
            }
            if ( dest ) /*0x51b1c2*/
              (*(void (__stdcall **)(int *))(*dest + 8))(dest); /*0x51b1c7*/
          }
        }
      }
    }
  }
  IDA_LOBYTE(v5) = FootClass::AssignDestination(this, (int)v6, sync_flag); /*0x51b1d2*/
  return (char)v5; /*0x51b1d7*/
}
// 0x51cba0
int InfantryClass::ValidatePlacement()
{
  char v6; // bl
  int v8; // edi
  int v9; // eax
  int v10; // eax

  v6 = FootClass::ValidatePlacement((_DWORD **)a1, a2, a3, a4, a5); /*0x51cbba*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1196))(a1) ) /*0x51cbbc*/
    return v6; /*0x51cbcb*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 28 ) /*0x51cbdb*/
    return v6; /*0x51cbe2*/
  if ( *(_DWORD *)(a1 + 692) ) /*0x51cbe5*/
  {
    v8 = 1; /*0x51cbf3*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 17 ) /*0x51cc01*/
      v8 = 17; /*0x51cc03*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 8 ) /*0x51cc12*/
      v8 = 8; /*0x51cc18*/
    goto LABEL_37; /*0x51cc1a*/
  }
  InfantryClass::ProcessExitQueue(a1); /*0x51cc21*/
  if ( *(_DWORD *)(a1 + 1444) ) /*0x51cc26*/
  {
    v8 = 2; /*0x51cc34*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 8 ) /*0x51cc42*/
      v8 = 8; /*0x51cc44*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 17 ) /*0x51cc53*/
      v8 = 17; /*0x51cc59*/
    goto LABEL_37; /*0x51cc5b*/
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 5 /*0x51ccae*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 11
    || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) != -1
    && (MissionClass::GetMissionControl((_DWORD *)a1)[5] || MissionClass::GetMissionControl((_DWORD *)a1)[7]) )
  {
    return 0; /*0x51cda6*/
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(void **)(a1 + 540)) || *(_DWORD *)(a1 + 1492) ) /*0x51ccc8*/
  {
    if ( *(_DWORD *)(a1 + 172) != 11 /*0x51cd64*/
      && (!TechnoTypeClass::HasVoiceResponse((float *)a1, 16) && !*(_BYTE *)(*(_DWORD *)(a1 + 1728) + 3385)
       || *(_DWORD *)(a1 + 1492)) )
    {
      v8 = 5; /*0x51cd6e*/
      goto LABEL_37; /*0x51cd73*/
    }
    goto LABEL_36; /*0x51cd6c*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 540) + 588) >= IDA_SLODWORD(g_RulesClass_Instance[1].TunnelSpeed) /*0x51ccf5*/
    || *(_DWORD *)(a1 + 172) == 11 )
  {
    if ( *(_DWORD *)(a1 + 732) ) /*0x51ccfe*/
    {
      v8 = 5; /*0x51cd08*/
      goto LABEL_37; /*0x51cd0d*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 684))(a1) ) /*0x51cd13*/
    {
      v9 = *(_DWORD *)(a1 + 1728); /*0x51cd1d*/
      if ( !v9->qEC3 && !v9->qEC6 ) /*0x51cd2d*/
      {
        v8 = 5; /*0x51cd37*/
        goto LABEL_37; /*0x51cd3c*/
      }
    }
  LABEL_36:
    v8 = 11; /*0x51cd75*/
    goto LABEL_37; /*0x51cd75*/
  }
  v8 = 5; /*0x51ccf7*/
  LABEL_37:
  v10 = *(_DWORD *)(a1 + 172); /*0x51cd7a*/
  if ( v10 != 25 && v10 != 11 ) /*0x51cd88*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, v8, 0); /*0x51cd96*/
  return v6; /*0x51cbc6*/
}
// 0x484ae0
int InfantryClass::ValidateAttackPosition()
{
  __int16 v2; // ax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _WORD *v6; // edi
  __int16 v7; // ax
  __int16 v8; // ax
  _WORD *v9; // eax
  __int16 v10; // cx
  __int16 v11; // cx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  _WORD *v14; // edi
  __int16 v15; // ax
  __int16 v16; // ax
  void *v17; // esi
  int v18; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch] BYREF
  int v21; // [esp+1Ch] [ebp-8h] BYREF
  int v22; // [esp+20h] [ebp-4h] BYREF

  v2 = this->q458; /*0x484ae8*/
  if ( v2 >= 0 && v2 < g_UnitTypeCount && *(_DWORD *)(this + 236) == 10 ) /*0x484b0d*/
    return 1; /*0x484b18*/
  v18 = this->objectTypeFlags; /*0x484b20*/
  v19 = *CellStruct::Add(&v18, &v21, Direction_X_Offsets); /*0x484b3a*/
  v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x484b43*/
  v5 = v4; /*0x484b48*/
  if ( v4 ) /*0x484b4c*/
  {
    v18 = v4[9]; /*0x484b59*/
    v20 = *CellStruct::Add(&v18, &v21, Direction_X_Offsets); /*0x484b73*/
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20); /*0x484b81*/
    if ( v6 ) /*0x484b85*/
    {
      v7 = *((_WORD *)v5 + 139); /*0x484b8b*/
      if ( v7 >= 0 && v7 < g_UnitTypeCount && v5[59] == 10 ) /*0x484baa*/
      {
        v8 = v6[139]; /*0x484bac*/
        if ( v8 < 0 || v8 >= g_UnitTypeCount || *((_DWORD *)v6 + 59) != 10 ) /*0x484bc5*/
          return 1; /*0x484bd0*/
      }
      v18 = *((_DWORD *)v6 + 9); /*0x484bd6*/
      v21 = *NeighborCoord(&v22, &v18, 0); /*0x484bf3*/
      v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v21); /*0x484bf7*/
      if ( v9 ) /*0x484bfe*/
      {
        v10 = v6[139]; /*0x484c00*/
        if ( v10 >= 0 && v10 < g_UnitTypeCount && *((_DWORD *)v6 + 59) == 10 ) /*0x484c1f*/
        {
          v11 = v9[139]; /*0x484c21*/
          if ( v11 < 0 || v11 >= g_UnitTypeCount || *((_DWORD *)v9 + 59) != 10 ) /*0x484c3a*/
            return 1; /*0x484c45*/
        }
      }
    }
  }
  v21 = this->objectTypeFlags; /*0x484c4b*/
  v20 = *NeighborCoord(&v22, &v21, 6); /*0x484c68*/
  v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20); /*0x484c6c*/
  v12 = v12; /*0x484c71*/
  if ( !v12 ) /*0x484c75*/
    return 0; /*0x484c75*/
  v21 = v12[9]; /*0x484c80*/
  v19 = *NeighborCoord(&v22, &v21, 6); /*0x484c9d*/
  v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x484ca6*/
  if ( !v14 ) /*0x484caa*/
    return 0; /*0x484caa*/
  v15 = *((_WORD *)v12 + 139); /*0x484cb0*/
  if ( v15 >= 0 && v15 < g_UnitTypeCount && v12[59] == 10 ) /*0x484ccf*/
  {
    v16 = v14[139]; /*0x484cd1*/
    if ( v16 < 0 || v16 >= g_UnitTypeCount || *((_DWORD *)v14 + 59) != 10 ) /*0x484cea*/
      return 1; /*0x484cf5*/
  }
  v21 = *((_DWORD *)v14 + 9); /*0x484cfb*/
  v20 = *NeighborCoord(&v22, &v21, 6); /*0x484d18*/
  v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20); /*0x484d21*/
  return v17 && InfantryClass::IsInBounds((int)v14) && !InfantryClass::IsInBounds((int)v17); /*0x484d40*/
}
// ============================================================
// Phase 3: Stream & Save
// ============================================================

// 0x521960
int InfantryClass::LoadFromStream()
{
  _DWORD *v3; // ebx
  size_t v4; // eax
  int v5; // eax
  signed int v6; // ecx
  size_t i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi

  a1 = a1; /*0x521962*/
  v3 = a1 + 1; /*0x52196a*/
  a1 = (int *)(*(int (__stdcall **)(int *))(a1[1] + 16))(a1 + 1); /*0x52197b*/
  v4 = BuildingTypeClass::Dequeue((char **)&g_BuildingLoadQueue_Array, (int *)&a1); /*0x52197f*/
  if ( v4 ) /*0x521986*/
  {
    v5 = (int)(v4 - (_DWORD)g_BuildingLoadQueue_Array) >> 3; /*0x52198e*/
    if ( v5 != -1 ) /*0x521994*/
    {
      v6 = v5 + 1; /*0x521996*/
      for ( i = g_BuildingLoadQueue_Count; v6 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x5219a0*/
      {
        v8 = (char *)g_BuildingLoadQueue_Array + 8 * v6++; /*0x5219a8*/
        *(v8 - 2) = *v8; /*0x5219ae*/
        *(v8 - 1) = v8[1]; /*0x5219b4*/
      }
      g_BuildingLoadQueue_Count = i - 1; /*0x5219c9*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x5219ce*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x5219de*/
      g_BuildingLoadQueue_Active = 0; /*0x5219e2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x5219ee*/
  if ( result >= 0 ) /*0x5219f5*/
  {
    v10 = v2[413]; /*0x5219fb*/
    if ( v2 ) /*0x521a03*/
    {
      FootClass::PostLoadInit(&a1); /*0x521a0c*/
      *v2 = (int)&(void*)(void*)&InfantryClass_vftable; /*0x521a11*/
      *v3 = &(void*)(void*)&InfantryClass_vftable; /*0x521a17*/
      v2[2] = (int)&(void*)(void*)&InfantryClass_vftable; /*0x521a1d*/
      v2[3] = (int)&off_7EB02C; /*0x521a24*/
    }
    v11 = v2[413]; /*0x521a2c*/
    if ( v11 != v10 ) /*0x521a34*/
    {
      v2[413] = v10; /*0x521a38*/
      if ( v10 ) /*0x521a3e*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x521a43*/
      if ( v11 ) /*0x521a48*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x521a4e*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x521a54*/
    v12 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x521a63*/
    v13 = g_BuildingLoadQueue_Capacity; /*0x521a65*/
    if ( (int)(g_BuildingLoadQueue_Count + 1) <= g_BuildingLoadQueue_Capacity ) /*0x521a6e*/
      goto LABEL_18; /*0x521a6e*/
    if ( !g_BuildingLoadQueue_Capacity ) /*0x521a72*/
      v13 = 10; /*0x521a74*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, v13) ) /*0x521a7f*/
    {
  LABEL_18:
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = v12; /*0x521a93*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = v2; /*0x521aa1*/
      g_BuildingLoadQueue_Dirty = 0; /*0x521aab*/
      ++g_BuildingLoadQueue_Count; /*0x521ab2*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 432); /*0x521ac3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 326); /*0x521ad4*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 327); /*0x521ae5*/
    return 0; /*0x521aea*/
  }
  return result; /*0x521aec*/
}
// 0x521b00
int InfantryClass::SaveLoad_Prefix()
{
  return ObjectClass::SaveToStream_Common(a1, pPStm, a3); /*0x521b14*/
}
// 0x523350
int InfantryClass::ScalarDtor()
{
  InfantryClass::Destruct(Block); /*0x523353*/
  if ( (a2 & 1) != 0 ) /*0x52335d*/
    RA2_OPDEL(Block); /*0x523360*/
  return Block; /*0x52336a*/
}
// ============================================================
// Phase 3: Cursor & UI
// ============================================================

// 0x51f800
int InfantryClass::HandleCursorOverCell()
{
  int v6; // ebx
  void *v7; // eax
  void *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // ebp
  int v16; // esi
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int *v20; // ecx
  void *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD v24[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+20h] [ebp+8h]

  if ( !(unsigned __int8)House::IsHumanPlayer(*(void **)(&this->u32_D80)) ) /*0x51f80e*/
    return 0; /*0x51f81f*/
  v6 = FootClass::HandleCursorWithCheck((int *)this, a2, a3, a4); /*0x51f83c*/
  if ( TechnoClass::GetValue((_DWORD *)this, -1) < 0 /*0x51f859*/
    && (unsigned __int8)House::IsHumanPlayer(*(void **)(&this->u32_D80))
    && v6 == 5 )
  {
    v6 = 26; /*0x51f85b*/
  }
  if ( *(_BYTE *)(this->u32_6C0 + 3476) && (v6 == 1 || v6 == 2) ) /*0x51f878*/
  {
    v7 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x51f880*/
    if ( InfantryClass::ValidateAttackPosition((int)v7) /*0x51f89d*/
      || (v8 = CellCoord::To_CellObj(&MapClass_Instance, a2), (unsigned __int8)InfantryClass::CanMoveThroughCell(v8)) )
    {
      v6 = 0; /*0x51f8a6*/
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer(*(void **)(&this->u32_D80)) ) /*0x51f8ae*/
    goto LABEL_33; /*0x51f8ae*/
  v9 = this->u32_6C0; /*0x51f8bb*/
  if ( !v9->qEC8 ) /*0x51f8c1*/
    goto LABEL_33; /*0x51f8c1*/
  v10 = this->u32_6C4; /*0x51f8cf*/
  if ( v10 != 27 && v10 != 28 && v10 != 29 && v10 != 30 ) /*0x51f8e7*/
    goto LABEL_33; /*0x51f8e7*/
  if ( v6 != 1 ) /*0x51f8f0*/
  {
    if ( v6 == 5 ) /*0x51f8f5*/
    {
      if ( v9->q6AC ) /*0x51f8fb*/
      {
        v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1280))(this, 0); /*0x51f90b*/
        v12 = *a2 << 8; /*0x51f91b*/
        v24[1] = (a2[1] << 8) + 128; /*0x51f92b*/
        v13 = *(_DWORD *)this; /*0x51f92f*/
        v24[0] = v12 + 128; /*0x51f935*/
        v24[2] = 0; /*0x51f93c*/
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int))(v13 + 356))(this, v24, v11) ) /*0x51f944*/
          goto LABEL_24; /*0x51f94c*/
      }
      goto LABEL_23; /*0x51f94c*/
    }
  LABEL_33:
    if ( v6 == 1 ) /*0x51f9aa*/
    {
      v21 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x51f9b2*/
      if ( InfantryClass::IsInBounds((int)v21) ) /*0x51f9b9*/
      {
        CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x51f9c9*/
        return 36 - ((unsigned __int8)globalHelper_084F10(this) != 0); /*0x51f9e2*/
      }
    }
    goto LABEL_24; /*0x51f9c0*/
  }
  LABEL_23:
  v6 = 2; /*0x51f94e*/
  LABEL_24:
  v14 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x51f953*/
  v15 = 0; /*0x51f965*/
  v16 = 0; /*0x51f967*/
  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x51f96e*/
  {
    if ( a3 ) /*0x51f97a*/
    {
      v17 = v14[10]; /*0x51f97c*/
      if ( v17 ) /*0x51f981*/
      {
        v18 = *(_DWORD *)(v17 + 16); /*0x51f983*/
        v19 = 0; /*0x51f986*/
        if ( v18 > 0 ) /*0x51f98a*/
        {
          v20 = *(int **)(v17 + 4); /*0x51f98c*/
          while ( 1 ) /*0x51f98f*/
          {
            v16 = *v20; /*0x51f98f*/
            if ( *(_BYTE *)(*v20 + 116) ) /*0x51f991*/
            {
              if ( *(_DWORD *)(v16 + 48) == 6 ) /*0x51f99b*/
                break; /*0x51f99b*/
            }
            ++v19; /*0x51f99d*/
            ++v20; /*0x51f99e*/
            if ( v19 >= v18 ) /*0x51f9a3*/
              goto LABEL_37; /*0x51f9a3*/
          }
          v15 = **(_DWORD **)(v16 + 96); /*0x51f9ee*/
        }
      }
    }
  }
  LABEL_37:
  if ( !*(_BYTE *)(this->u32_6C0 + 3779) /*0x51fa16*/
    || !v15
    || !(unsigned __int8)House::IsHumanPlayer(*(void **)(&this->u32_D80)) )
  {
    goto LABEL_55; /*0x51fa16*/
  }
  if ( *(_BYTE *)(v15 + 5814) ) /*0x51fa1f*/
  {
    v22 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v16 + 72))(v16, v24); /*0x51fa32*/
    IDA_LOWORD(v25) = *v22 / 256; /*0x51fa45*/
    IDA_HIWORD(v25) = v22[1] / 256; /*0x51fa5d*/
    v25 = v25; /*0x51fa66*/
    v23 = -(CellClass::CheckConnectivity((int *)&MapClass_Instance, (int)&v25) != 0); /*0x51fa77*/
    IDA_LOBYTE(v23) = v23 & 0xFD; /*0x51fa79*/
    v6 = v23 + 32; /*0x51fa7e*/
    goto LABEL_47; /*0x51fa80*/
  }
  if ( !*(_BYTE *)(v15 + 3276) ) /*0x51fa82*/
  {
  LABEL_55:
    if ( v6 == 5 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->ptr_444))(this) ) /*0x51fa9c*/
      v6 = 59; /*0x51faa6*/
    goto LABEL_47; /*0x51faa6*/
  }
  v6 = 9; /*0x51fa8c*/
  LABEL_47:
  if ( (unsigned __int8)House::IsHumanPlayer(*(void **)(&this->u32_D80)) /*0x51fac5*/
    && !v6
    && !*(_BYTE *)(this->u32_6C0 + 3476) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->ptr_400))(this) ) /*0x51fad3*/
      return 2; /*0x51fadd*/
  }
  return v6; /*0x51f817*/
}
// 0x51e3b0
int InfantryClass::GetActionOnObject_EMP(AbstractClass* object, int flags)
{
    // IDA: 0x51E3B0 — EMP cursor over object
    return 0;
}

// 0x4dded0
int FootClass::GetActionOnObject()
{
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD v7[2]; // [esp+Ch] [ebp-18h] BYREF
  int GroundHeight; // [esp+14h] [ebp-10h]
  _BYTE v9[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = TechnoClass::HandleCursorClick(a2, a3); /*0x4ddee9*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v9); /*0x4ddef2*/
  v7[0] = *v5; /*0x4ddef7*/
  v7[1] = v5[1]; /*0x4ddf03*/
  GroundHeight = v5[2]; /*0x4ddf0f*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x4ddf22*/
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v7) + 80) & 0x100) != 0 ) /*0x4ddf34*/
    GroundHeight += dword_8B3DF4; /*0x4ddf41*/
  if ( Cell::IsPassable(v7) && v4 && !g_GameMode_Current[0] ) /*0x4ddf63*/
    return 2 - (*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->u32_342))(this) + 3213) != 0); /*0x4ddf7b*/
  else
    return v4; /*0x4ddf86*/
}
// 0x51FAF0
InfantryTypeClass* InfantryClass::GetTypePtr()
{
  return *(this + 432); /*0x51faf6*/
}
// 0x51f2c0
int InfantryClass::GetTooltipName()
{
  if ( this->Technician ) /*0x51f2c3*/
    return GetStringCSF(aTxtTechnician, 0, aDRa2mdpostInfa, 4636); /*0x51f2de*/
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->q04C6))(this) /*0x51f300*/
    || (unsigned __int8)HouseClass::IsAlliedWith(*((void **)&this->attachedTag5), HouseClass_Player) )
  {
    return this->Type->UIName; /*0x51f321*/
  }
  return *(wchar_t **)((*(int (__thiscall **)(void *, int))(*(_DWORD *)&this->customSound_controller4))(this, 1) + 96); /*0x51f2e3*/
}
// 0x521d30
int InfantryClass::GetTransformMatrix()
{
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->q0446))( /*0x521d5b*/
                   this,
                   v5,
                   a3,
                   0,
                   0,
                   0);
  *a2 = *v3; /*0x521d66*/
  a2[1] = v3[1]; /*0x521d6b*/
  a2[2] = v3[2]; /*0x521d73*/
  return a2; /*0x521d63*/
}
// 0x523250
int InfantryClass::ComputeTransform()
{
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  _DWORD v11[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->inOpenToppedTransport && this->transporter && (v7 = TechnoClass::IndexOf(this)) != 0 ) /*0x52327b*/
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 284) + 176))( /*0x5232a1*/
                     this->transporter,
                     v11,
                     -v7,
                     0,
                     0,
                     0);
  else
    v8 = TechnoClass::ComputeTransform((_DWORD **)this, v11, a3, 0, 0, 0); /*0x5232c8*/
  v8 = v8; /*0x5232cd*/
  *a2 = *v8; /*0x5232d8*/
  a2[1] = v8[1]; /*0x5232dd*/
  a2[2] = v8[2]; /*0x5232e5*/
  return a2; /*0x5232d5*/
}
// 0x701140
int InfantryClass::CheckHealthDiff()
{
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 6 ) /*0x70114b*/
    return 0; /*0x70114d*/
  return *(_BYTE *)(this->Vt34Thunk() + 3276) /*0x70117a*/
      && *(&this->vtable37) != *(_DWORD *)(this->GetTypePtr() + 160);
}
// ============================================================
// Phase 3: Marking & Passability
// ============================================================

// 0x5217c0
int InfantryClass::MarkCellPassability(int* a2)
{
  char v3; // bp
  _BYTE *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection(a2); /*0x5217d7*/
  v4 = Coord::To_Cell(&MapClass_Instance, a2); /*0x5217e4*/
  if ( dword_A8F234 + Cell::GetGroundHeight(a2) <= a2[2] && (*((_DWORD *)v4 + 80) & 0x100) != 0 ) /*0x521803*/
  {
    v4[296] |= 1 << v3; /*0x521813*/
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->abstractFlags6))(this); /*0x52181d*/
    *((_DWORD *)v4 + 22) = result; /*0x521820*/
  }
  else
  {
    v4[292] |= 1 << v3; /*0x521838*/
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->abstractFlags6))(this); /*0x521842*/
    *((_DWORD *)v4 + 21) = result; /*0x521845*/
  }
  return result; /*0x521823*/
}
// 0x521850
int InfantryClass::ClearCellPassability()
{
  char v1; // bl
  _BYTE *v2; // esi
  char result; // al

  v1 = Input::OffsetToDirection(a1); /*0x521864*/
  v2 = Coord::To_Cell(&MapClass_Instance, a1); /*0x521871*/
  if ( Cell::GetGroundHeight(a1) + dword_A8F234 > a1[2] ) /*0x521885*/
  {
    result = ~(1 << v1) & v2[292]; /*0x5218c0*/
    v2[292] = result; /*0x5218c2*/
    if ( (result & 0x1C) == 0 ) /*0x5218ca*/
      *((_DWORD *)v2 + 21) = -1; /*0x5218cc*/
  }
  else
  {
    result = ~(1 << v1) & v2[296]; /*0x521897*/
    v2[296] = result; /*0x521899*/
    if ( (result & 0x1C) == 0 ) /*0x5218a1*/
      *((_DWORD *)v2 + 22) = -1; /*0x5218a3*/
  }
  return result; /*0x5218aa*/
}
// ============================================================
// Phase 3: Capture & Misc
// ============================================================

// 0x522700
int InfantryClass::CaptureAttackerInfo()
{
  bool v3; // zf
  int v4; // eax

  if ( a2 && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 15 ) /*0x522716*/
  {
    TechnoClass::ActivateEffect(this); /*0x52271b*/
    v3 = (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 196))(a2) == 0; /*0x52272a*/
    v4 = *a2; /*0x52272c*/
    if ( v3 ) /*0x52272e*/
    {
      this->disguiseAsType = (*(int (__thiscall **)(int *))(v4 + 136))(a2); /*0x52275f*/
      this->disguisedAsHouse = (*(int (__thiscall **)(int *))(*a2 + 60))(a2); /*0x52276c*/
    }
    else
    {
      this->disguiseAsType = (*(int (__thiscall **)(int *, int))(v4 + 204))(a2, 1); /*0x52273a*/
      this->disguisedAsHouse = (*(int (__thiscall **)(int *, int))(*a2 + 208))(a2, 1); /*0x52274c*/
    }
  }
}
// 0x522780
int InfantryClass::InitProductionLimits()
{
  int result; // eax
  int v2; // eax
  int v3; // eax

  result = this->Type; /*0x522780*/
  if ( *(_BYTE *)(result + 3376) ) /*0x522786*/
  {
    v2 = this->owner; /*0x522790*/
    this->isDisguisedFlag = 1; /*0x522796*/
    this->disguisedAsHouse = v2; /*0x52279d*/
    v3 = *(_DWORD *)(v2 + 488); /*0x5227a3*/
    if ( v3 ) /*0x5227ab*/
    {
      if ( v3 == 1 ) /*0x5227c9*/
        result = *(_DWORD *)g_RulesClass_Instance->gapD5C; /*0x5227cb*/
      else
        result = g_RulesClass_Instance->BarracksRatio; /*0x5227d8*/
      this->disguiseAsType = result; /*0x5227d1*/
    }
    else
    {
      result = g_RulesClass_Instance->WarLimit; /*0x5227b3*/
      this->disguiseAsType = result; /*0x5227b9*/
    }
  }
  else
  {
    this->isDisguisedFlag = 0; /*0x5227e5*/
  }
  return result; /*0x5227bf*/
}
// 0x522640
int InfantryClass::GetProductionLimit()
{
  int result; // eax
  int v4; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(&this->u32_D80), HouseClass_Player) && !a2 ) /*0x52265e*/
    return this->Type; /*0x522667*/
  result = this->disguiseAsType; /*0x52266a*/
  if ( !result ) /*0x522672*/
  {
    if ( !HouseClass_Player ) /*0x52267b*/
      return g_RulesClass_Instance->BarracksRatio; /*0x52267b*/
    v4 = *((_DWORD *)HouseClass_Player + 122); /*0x52267d*/
    if ( !v4 ) /*0x522685*/
      return g_RulesClass_Instance->WarLimit; /*0x522694*/
    if ( v4 == 1 ) /*0x52269a*/
      return *(_DWORD *)g_RulesClass_Instance->gapD5C; /*0x5226a3*/
    else
      return g_RulesClass_Instance->BarracksRatio; /*0x5226b1*/
  }
  return result; /*0x522666*/
}
// 0x5226c0
int InfantryClass::GetProductionHouse()
{
  void *result; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith(*(&this->relatedTagsCapacity5), HouseClass_Player) && !a2 ) /*0x5226de*/
    return *(&this->relatedTagsCapacity5); /*0x5226e0*/
  result = *(&this->occupiables7); /*0x5226ea*/
  if ( !result ) /*0x5226f2*/
    return HouseClass_Player; /*0x5226f4*/
  return result; /*0x5226e6*/
}
// 0x521b20
int InfantryClass::ResetMissionIfDone()
{
  int result; // eax

  result = *(&this->psychicDetectionCapacity3); /*0x521b20*/
  if ( result == 6 || result == 3 || result == 17 ) /*0x521b33*/
    *(&this->psychicDetectionCapacity3) = -1; /*0x521b35*/
  return result; /*0x521b3f*/
}
// 0x521b40
int InfantryClass::ProcessMission16()
{
  char result; // al
  int v2; // eax

  result = *(&this->turretFacing4); /*0x521b40*/
  if ( result ) /*0x521b48*/
  {
    v2 = *(_DWORD *)this; /*0x521b4a*/
    *(&this->turretFacing4) = 0; /*0x521b52*/
    return (*(int (__stdcall **)(int, _DWORD, _DWORD))(v2 + 1368))(27, 0, 0); /*0x521b59*/
  }
  return result; /*0x521b5f*/
}
// 0x521c60
int InfantryClass::SetMissionOnCondition()
{
  if ( a2 == 1 ) /*0x521c65*/
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 10, 0, 0); /*0x521c80*/
  else
    return (*(int (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 9, 0, 0); /*0x521c6f*/
}
// 0x521c10
int InfantryClass::InitVoiceResponseTimer()
{
  int v2; // eax

  v2 = this->Type; /*0x521c13*/
  if ( !*(_BYTE *)(v2 + 3772) ) /*0x521c19*/
  {
    IDA_LOBYTE(v2) = TechnoTypeClass::HasVoiceResponse((float *)this, 13); /*0x521c27*/
    if ( !(_BYTE)v2 ) /*0x521c2e*/
      this->PanicDurationLeft = 300; /*0x521c30*/
  }
  return v2; /*0x521c3a*/
}
// 0x521c40
int InfantryClass::ResetReloadIfNeeded()
{
  int result; // eax

  result = *(this + 432); /*0x521c40*/
  if ( !*(_BYTE *)(result + 3772) ) /*0x521c46*/
    *(&this->currentMission7) = 0; /*0x521c50*/
  return result; /*0x521c5a*/
}
// 0x5220f0
void InfantryClass::SetPermanentBerzerk()
{
  *(this + 1752) = 1; /*0x5220f0*/
}
/* ASM:
mov     byte ptr [ecx+6D8h], 1
retn
*/

// 0x523340
int InfantryClass::StubReturn15()
{
  return 15; /*0x523345*/
}
// 0x5232f0
int InfantryClass::StubReturn1776()
{
  return 1776; /*0x5232f5*/
}
// 0x70e1e0
int InfantryClass::ProcessIdle()
{
  _DWORD *v3; // eax
  bool v4; // al

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this); /*0x70e1f1*/
  v4 = HouseClass::HasPower(v3) /*0x70e214*/
    && a2 < *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 2060);
  return a2 >= -1 && (a2 < 2 || v4); /*0x70e227*/
}
// 0x703230
int InfantryClass::RegisterKill()
{
  int v2; // eax
  int v3; // ebp
  void **v4; // ecx
  void **v5; // ecx
  void **v6; // ecx
  void **v7; // ecx
  void **v8; // ecx
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-4h]
  _DWORD *v13; // [esp+14h] [ebp+4h]

  v12 = 0; /*0x703236*/
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this); /*0x703240*/
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 132))(v2, this->owner); /*0x70325b*/
  if ( this->isAliveFlag ) /*0x70325d*/
  {
    v4 = (void **)this->attachedTag; /*0x703267*/
    if ( v4 ) /*0x70326c*/
    {
      if ( v13 ) /*0x703270*/
        TeamClass::Update_0(v4, 6, (int)this, g_TechnoHouseState, 0, 0); /*0x703280*/
    }
  }
  if ( this->isAliveFlag ) /*0x703285*/
  {
    v5 = (void **)this->attachedTag; /*0x703293*/
    if ( v5 && v13 ) /*0x70329c*/
      TeamClass::Update_0(v5, 4, (int)this, g_TechnoHouseState, 0, 0); /*0x7032ab*/
    if ( this->isAliveFlag /*0x7032c6*/
      && (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this) != 1
      && this->isAliveFlag )
    {
      v6 = (void **)this->attachedTag; /*0x7032d0*/
      if ( v6 && v13 ) /*0x7032d9*/
        TeamClass::Update_0(v6, 7, (int)this, g_TechnoHouseState, 0, 0); /*0x7032e8*/
      if ( this->isAliveFlag ) /*0x7032ed*/
      {
        v7 = (void **)this->attachedTag; /*0x7032f7*/
        if ( v7 ) /*0x7032fc*/
          TeamClass::Update_0(v7, 48, (int)this, g_TechnoHouseState, 0, 0); /*0x70330c*/
        if ( this->isAliveFlag ) /*0x703311*/
        {
          v8 = (void **)this->attachedTag; /*0x70331b*/
          if ( v8 ) /*0x703320*/
            TeamClass::Update_0(v8, 29, (int)this, g_TechnoHouseState, 0, 0); /*0x70332f*/
        }
      }
    }
  }
  if ( v13 ) /*0x703336*/
  {
    if ( Object::IsAlliedWithObjectHouse(v13, (int)this) ) /*0x70333c*/
    {
      v3 = 0; /*0x703345*/
    }
    else if ( Audio::IsMediumVolume((float *)&this->NeedsSaveOrLink4) ) /*0x703351*/
    {
      v3 *= 2; /*0x70335a*/
    }
    else if ( Audio::IsLoud((float *)&this->NeedsSaveOrLink4) ) /*0x703360*/
    {
      v3 *= 3; /*0x703369*/
    }
    this->owner->HouseClass_field_548C = v13[12]; /*0x703377*/
    v13[5434] += v3; /*0x703385*/
  }
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this) - 1; /*0x703392*/
  switch ( result ) /*0x7033a4*/
  {
    case 0: /*0x7033a4*/
      goto LABEL_45;
    case 1: /*0x7033a4*/
      if ( !v13 ) /*0x703447*/
        goto LABEL_49; /*0x703447*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3231) ) /*0x703457*/
      {
        HouseClass::IncrementStat(v13 + 2258, this->type->qDF8); /*0x703474*/
        v12 = 1; /*0x703479*/
      }
  LABEL_41:
      if ( v13 ) /*0x703483*/
      {
        if ( !v12 && !*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3231) ) /*0x703497*/
        {
          HouseClass::IncrementStat(v13 + 2772, *(_DWORD *)(this->q6C0 + 3576)); /*0x7034b4*/
          v12 = 1; /*0x7034b9*/
        }
  LABEL_45:
        if ( v13 && !v12 && !*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3231) ) /*0x7034d7*/
          HouseClass::IncrementStat(v13 + 3286, this->type->qDF8); /*0x7034f4*/
      }
  LABEL_49:
      ++this->owner->killedBuildingsOfHouses; /*0x7034f9*/
      if ( v13 ) /*0x70350e*/
      {
        if ( !*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3231) ) /*0x70351a*/
        {
          v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->abstractFlags6))(this); /*0x703528*/
          ++v13[v11 + 5369]; /*0x70353a*/
        }
      }
      result = RadarClass::IsActiveMode(&MapClass_Instance); /*0x703541*/
      if ( (_BYTE)result ) /*0x703548*/
        return RadarClass::SetFlag(&MapClass_Instance, 0); /*0x70354a*/
      return result;
    case 5: /*0x7033a4*/
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this); /*0x7033af*/
      if ( !*(_BYTE *)(result + 562) ) /*0x7033b5*/
      {
        if ( this->u32_53C != -1 ) /*0x7033ca*/
          ++this->owner->q5488; /*0x7033d2*/
        if ( v13 && !*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3231) ) /*0x7033e6*/
        {
          HouseClass::IncrementStat(v13 + 3800, *(_DWORD *)(this->q520 + 3576)); /*0x703403*/
          v10 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->abstractFlags6))(this); /*0x70340c*/
          ++v13[v10 + 5390]; /*0x70341e*/
        }
        result = RadarClass::IsActiveMode(&MapClass_Instance); /*0x703425*/
        if ( (_BYTE)result ) /*0x70342c*/
          return RadarClass::SetFlag(&MapClass_Instance, 0); /*0x70342c*/
      }
      return result; /*0x70342c*/
    case 14: /*0x7033a4*/
      goto LABEL_41;
    default:
      return result;
  }
}
// 0x70d7a0
int InfantryClass::ReleaseInfiltrators()
{
  int v2; // ecx

  if ( BuildingClass::GetHealthRatio(this) > *(double *)&g_RulesClass_Instance[1].WarpOut /*0x70d7c7*/
    || this->GetZAboveGround() < -10 )
  {
    v2 = *(&this->u32_4C6); /*0x70d7c9*/
    if ( v2 ) /*0x70d7d1*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x70d7d5*/
  }
}
// 0x522e70
int InfantryClass::ProcessTiberiumHarvest()
{
  int v2; // edx
  _DWORD *v4; // ebx
  int v5; // ebp
  double v6; // st7
  int v7; // eax
  float v8; // [esp+Ch] [ebp-1Ch]
  float v9; // [esp+24h] [ebp-4h]
  float v10; // [esp+24h] [ebp-4h]
  int v11; // [esp+24h] [ebp-4h]

  v2 = *this; /*0x522e7b*/
  if ( *(_DWORD *)(*(this + 432) + 2048) ) /*0x522e7d*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int *))(v2 + 444))(this); /*0x522eb4*/
    if ( !Cell::IsBridge2(v4) || ((double (__thiscall *)(int *))*(_DWORD *)(*this + 692))(this) == 1.0 ) /*0x522eda*/
    {
      this->vt_slot_1368(0, 0, 0); /*0x522f98*/
      this->vt_slot_488(5, 0); /*0x522fa6*/
      return 1; /*0x522fad*/
    }
    else
    {
      if ( *(&this->q0AC3) != 38 ) /*0x522ee7*/
        this->vt_slot_1368(38, 0, 0); /*0x522ef3*/
      v5 = BuildingClass::FindByCellHash(v4); /*0x522f02*/
      v9 = (float)*(int *)(*(&this->currentMission2) + 2048); /*0x522f18*/
      if ( v9 - Float4::Sum((float *)&this->customSound_controller7) <= 1.0 ) /*0x522f30*/
      {
        v10 = (float)*(int *)(*(&this->currentMission2) + 2048); /*0x522f48*/
        v6 = v10 - Float4::Sum((float *)&this->customSound_controller7); /*0x522f51*/
      }
      else
      {
        v6 = 1.0; /*0x522f32*/
      }
      v7 = Math::RoundToInt(v6); /*0x522f55*/
      v11 = CellClass::ReduceTiberium((int)v4, v7); /*0x522f64*/
      if ( v11 > 0 ) /*0x522f68*/
      {
        v8 = (float)v11; /*0x522f72*/
        Float::Accumulate((float *)&this->u32_33C, v8, v5); /*0x522f75*/
      }
      return *(_DWORD *)(*(&this->currentMission2) + 3768); /*0x522f85*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(v2 + 1368))(this, 0, 0, 0); /*0x522e8f*/
    this->MissionDispatch(5, 0); /*0x522e9d*/
    return 1; /*0x522ea4*/
  }
}
// 0x519630
int InfantryClass::RepairBridge()
{
    // IDA: 0x519630 (5083B) — repair bridge as engineer
    return 0;
}

// 0x522340
void InfantryClass::CalculateApproachPath(char a2)
{
  int v3; // eax
  void *v5; // eax
  int v6; // eax
  int v7; // edi
  char v8; // bl
  int v9; // eax
  int v10; // eax

  if ( this->target ) /*0x522344*/
  {
    v3 = this->SequenceAnim; /*0x522352*/
    if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x52236a*/
      return FootClass::CalculateApproachPath((_DWORD *)this, 0); /*0x522375*/
    v5 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)&this->nextArrayIndex0))(this); /*0x52237c*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v5) ) /*0x522381*/
    {
      v6 = this->Type; /*0x52238e*/
      if ( *(_BYTE *)(v6 + 3784) ) /*0x522394*/
      {
        if ( *(_BYTE *)(v6 + 1708) ) /*0x5223a2*/
        {
          v7 = *(_DWORD *)(v6 + 1704); /*0x5223b3*/
          v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 936))(this, *(_DWORD *)(this + 692), v7); /*0x5223ce*/
          v9 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v7); /*0x5223d6*/
          if ( v9 ) /*0x5223db*/
          {
            if ( !*(_BYTE *)(v9 + 336) ) /*0x5223e1*/
            {
              v10 = this->SequenceAnim; /*0x5223ef*/
              if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 ) /*0x522407*/
              {
                if ( !v8 && !a2 ) /*0x522417*/
                {
                  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 31, 0, 0); /*0x522427*/
                  return 0; /*0x522431*/
                }
              }
              else if ( v8 && !a2 ) /*0x522442*/
              {
                if ( !this->Locomotor ) /*0x522444*/
                  WinAPI::Wrapper(-2147467261); /*0x522453*/
                if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 16))(this->Locomotor) ) /*0x522461*/
                {
                  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)&this->cloakState8))(this, 27, 0, 0); /*0x522472*/
                  return 0; /*0x52247c*/
                }
                if ( !this->Locomotor ) /*0x52247f*/
                  WinAPI::Wrapper(-2147467261); /*0x52248e*/
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 72))(this->Locomotor); /*0x52249c*/
                this->ShouldDeploy = 1; /*0x5224a1*/
                MissionClass::GetMissionControl((_DWORD *)this); /*0x5224a8*/
                Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x5224bd*/
              }
            }
          }
        }
      }
    }
  }
  return 0; /*0x522373*/
}
// 0x5224d0
bool InfantryClass::IsBridgeRepairEnabled()
{
  return *(_BYTE *)(*(&this->currentMission2) + 3779); /*0x5224dc*/
}
// 0x522d50
int InfantryClass::SlaveGiveMoney_RecordBalanceBefore()
{
  float *v2; // ebp
  char v3; // bl
  int result; // eax
  int v6; // edi
  double v7; // st7
  float v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]

  v2 = &this->u32_33C; /*0x522d55*/
  v3 = 0; /*0x522d5e*/
  result = FirstFloatPositive(&this->customSound_controller7); /*0x522d60*/
  result = result; /*0x522d65*/
  if ( result != -1 ) /*0x522d6a*/
  {
    do /*0x522e44*/
    {
      v6 = a2[135]; /*0x522d75*/
      v9 = *(_DWORD *)(v6 + 21388); /*0x522d89*/
      if ( !*(_BYTE *)(v6 + 492) && g_GameMode_Current[0] ) /*0x522d97*/
        v9 = *(_DWORD *)(g_RulesClass_Instance->ForceShieldDuration + 4 * *(_DWORD *)(v6 + 388)) /*0x522dae*/
           + *(_DWORD *)(v6 + 21388);
      if ( v5 == -1 ) /*0x522db5*/
        v8 = 0.0; /*0x522dc5*/
      else
        v8 = FloatArray::Get(v2, result); /*0x522dbf*/
      v10 = (double)v9 * *(float *)&g_RulesClass_Instance->gapF38[4] * v8; /*0x522de3*/
      if ( result != -1 ) /*0x522de7*/
      {
        v7 = Float::SubtractClamped(v2, v8, result); /*0x522df1*/
        if ( v7 > 0.0 ) /*0x522e05*/
        {
          v3 = 1; /*0x522e0f*/
          v7 = v7; /*0x522df6*/
          HouseClass::GiveTiberium_Storage((_DWORD *)v6, v7, result); /*0x522e11*/
          if ( v10 > 0.0 ) /*0x522e27*/
            HouseClass::GiveTiberium_Storage((_DWORD *)v6, v10, result); /*0x522e31*/
        }
      }
      result = FirstFloatPositive(v2); /*0x522e3a*/
      result = result; /*0x522e3f*/
    }
    while ( result != -1 ); /*0x522e44*/
    if ( v3 ) /*0x522e4d*/
      return (*(int (__thiscall **)(_DWORD *))(*a2 + 1128))(a2); /*0x522e55*/
  }
  return result; /*0x522e5b*/
}
// 0x772ac0
void InfantryClass::startPanic()
{
  int v1; // eax

  v1 = *(&this->q0103); /*0x772ac0*/
  return v1 && *(_BYTE *)(v1 + 324); /*0x772ad6*/
}
int InfantryClass::CheckHealthDiff_0()
{
    // IDA: 0x7447A0 — check health diff (stub)
    return 0;
}

// ============================================================
// Phase 3: Drawing
// ============================================================

// 0x518f90
void InfantryClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
  int v17; // edx
  int v18; // eax
  int v19; // edx
  char v20; // al
  int v21; // eax
  char *v22; // edx
  unsigned __int8 v23; // bl
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  int **v31; // ebx
  int v32; // eax
  _DWORD *v33; // eax
  int *v34; // edi
  int v35; // edx
  int v36; // ecx
  bool v37; // zf
  int *v38; // esi
  unsigned int v39; // eax
  int *v40; // ebx
  int v41; // ecx
  int v42; // eax
  int result; // eax
  int v44; // ebx
  int *v45; // esi
  int v46; // edi
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // esi
  int v50; // esi
  int v51; // edi
  int v52; // esi
  int v53; // ebx
  _DWORD *v54; // ecx
  int v55; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // eax
  int *v60; // edi
  int v61; // eax
  int v62; // [esp+4h] [ebp-8Ch]
  int v63; // [esp+8h] [ebp-88h]
  int v64; // [esp+Ch] [ebp-84h]
  int v65; // [esp+10h] [ebp-80h]
  int v66; // [esp+14h] [ebp-7Ch]
  int v67; // [esp+14h] [ebp-7Ch]
  int v68; // [esp+18h] [ebp-78h]
  int v69; // [esp+1Ch] [ebp-74h]
  int v70; // [esp+20h] [ebp-70h]
  int v71; // [esp+20h] [ebp-70h]
  int v72; // [esp+24h] [ebp-6Ch]
  int v73; // [esp+28h] [ebp-68h]
  int v74; // [esp+2Ch] [ebp-64h]
  int v75; // [esp+30h] [ebp-60h]
  int v76; // [esp+34h] [ebp-5Ch]
  int v77; // [esp+38h] [ebp-58h]
  unsigned __int8 v78; // [esp+4Eh] [ebp-42h]
  unsigned __int8 v79; // [esp+4Fh] [ebp-41h]
  int v80; // [esp+50h] [ebp-40h]
  int v81; // [esp+54h] [ebp-3Ch] BYREF
  int v82; // [esp+58h] [ebp-38h] BYREF
  _DWORD *v83; // [esp+5Ch] [ebp-34h] BYREF
  int v84; // [esp+60h] [ebp-30h]
  int v85; // [esp+64h] [ebp-2Ch] BYREF
  int v86; // [esp+68h] [ebp-28h] BYREF
  _DWORD *v87; // [esp+6Ch] [ebp-24h] BYREF
  int v88; // [esp+70h] [ebp-20h]
  int v89; // [esp+74h] [ebp-1Ch] BYREF
  int v90; // [esp+78h] [ebp-18h]
  int v91; // [esp+7Ch] [ebp-14h]
  _DWORD v92[4]; // [esp+80h] [ebp-10h] BYREF

  v17 = a2[1]; /*0x518f9d*/
  v18 = *(_DWORD *)a1; /*0x518fa0*/
  v87 = (_DWORD *)*a2; /*0x518fa3*/
  v88 = v17; /*0x518fb0*/
  v19 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(v18 + 448))(a1, &v85); /*0x518fba*/
  v20 = *(_BYTE *)(a1 + 664); /*0x518fbc*/
  v82 = v19; /*0x518fc4*/
  v80 = 0; /*0x518fca*/
  if ( v20 ) /*0x518fce*/
  {
    v21 = *((_DWORD *)g_RulesClass_Instance + 1579); /*0x518fda*/
    v22 = (char *)g_RulesClass_Instance + 2 * v21; /*0x518fe0*/
    v23 = v22[v21 + 6261]; /*0x518fed*/
    v78 = v22[v21 + 6260]; /*0x518ffa*/
    v79 = v22[v21 + 6262]; /*0x519004*/
    v24 = DDraw::GetStatus() - 1; /*0x51900d*/
    if ( v24 ) /*0x51900e*/
    {
      v27 = v24 - 1; /*0x519010*/
      if ( v27 ) /*0x519011*/
      {
  LABEL_6:
        IDA_LOWORD(v25) = v78; /*0x51905b*/
        IDA_LOWORD(v27) = v79; /*0x519061*/
        IDA_LOWORD(v26) = v23 >> 1; /*0x51906c*/
        v80 |= v27 | (32 * ((32 * v25) | v26)); /*0x51907e*/
        goto LABEL_7; /*0x51907e*/
      }
      IDA_LOWORD(v25) = v79; /*0x519019*/
      IDA_LOWORD(v26) = v23; /*0x519025*/
      v24 = v25 | (32 * (v26 | (v78 << 6))); /*0x51902c*/
      v80 = v24; /*0x51902e*/
    }
    IDA_LOWORD(v25) = v78; /*0x519032*/
    IDA_LOWORD(v26) = v23 >> 1; /*0x51903f*/
    IDA_LOWORD(v24) = v79; /*0x519041*/
    v25 *= 32; /*0x519047*/
    v26 = v24 | ((v25 | v26) << 6); /*0x51904f*/
    IDA_HIWORD(v27) = IDA_HIWORD(v26) | IDA_HIWORD(v80); /*0x519055*/
    v80 |= v26; /*0x519057*/
    goto LABEL_6; /*0x519057*/
  }
  LABEL_7:
  v28 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 72))(a1, &v89); /*0x519082*/
  IDA_LOWORD(v81) = *v28 / 256; /*0x51909f*/
  IDA_HIWORD(v81) = v28[1] / 256; /*0x5190b7*/
  v83 = (_DWORD *)v81; /*0x5190c0*/
  v29 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v83); /*0x5190ca*/
  if ( CellClass::QuickPassable(v29) ) /*0x5190d1*/
    v80 = 0; /*0x5190da*/
  if ( *(_BYTE *)(a1 + 1668) != 0xFF ) /*0x5190e5*/
  {
    TacticalClass::AddToDrawQueue(g_TacticalClass_Instance, a1, (int)v87, v88); /*0x519609*/
    return AbstractClass::COMStub_Return0_69(&v87, a3); /*0x51961a*/
  }
  v30 = *(_DWORD *)(a1 + 1652); /*0x5190eb*/
  v31 = (int **)(a1 + 1652); /*0x5190f1*/
  v81 = 0; /*0x5190f9*/
  if ( !v30 ) /*0x5190fd*/
    goto LABEL_15; /*0x5190fd*/
  v32 = StreamClass::Set2(&v81, (_DWORD *)(a1 + 1652)); /*0x519104*/
  if ( v32 < 0 && v32 != -2147467262 ) /*0x519112*/
    WinAPI::Wrapper(v32); /*0x519115*/
  if ( !v81 ) /*0x519120*/
  LABEL_15:
    WinAPI::Wrapper(-2147467261); /*0x519127*/
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v81 + 12))(v81, v92); /*0x519138*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) > 0 && !memcmp(v92, &g_CLSID_DriveLocomotion, 0x10u) ) /*0x51915e*/
  {
    v83 = (_DWORD *)SearchMIXFile(aPodShp, 0); /*0x519172*/
    if ( !*v31 ) /*0x519176*/
      WinAPI::Wrapper(-2147467261); /*0x519181*/
    v33 = (_DWORD *)(*(int (__stdcall **)(int *, int *))(**v31 + 48))(*v31, &v89); /*0x519190*/
    v34 = a2; /*0x519193*/
    v35 = v33[1]; /*0x519199*/
    v36 = a2[1]; /*0x5191a0*/
    v85 = *v33 + *a2; /*0x5191a3*/
    v37 = *v31 == 0; /*0x5191ab*/
    v86 = v35 + v36; /*0x5191ad*/
    if ( v37 ) /*0x5191b1*/
      WinAPI::Wrapper(-2147467261); /*0x5191b8*/
    v38 = *v31; /*0x5191c3*/
    v70 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 748))(a1, 0) - 2; /*0x5191e1*/
    v66 = a4; /*0x5191f1*/
    v39 = (*(int (**)(void))(*v38 + 136))(); /*0x5191f4*/
    DrawToSurfaceSHP( /*0x51920c*/
      g_DSurface_Hidden_2,
      g_FileSystem_THEATER_PAL,
      (int)v83,
      v39,
      v38,
      &v86,
      v66,
      11777,
      0,
      v70,
      1000,
      v80,
      0,
      0,
      0,
      0);
    CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v82); /*0x51921b*/
    CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v82); /*0x51922a*/
    if ( !*v31 ) /*0x51922f*/
      WinAPI::Wrapper(-2147467261); /*0x51923c*/
    v40 = *v31; /*0x519248*/
    v41 = *v40; /*0x519255*/
    a2 = *(int **)a1; /*0x519267*/
    v42 = (*(int (__stdcall **)(int *, int *, int *, _DWORD, int, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v41 + 136))( /*0x519271*/
            v40,
            v34,
            a3,
            0,
            256,
            0,
            2,
            0,
            1000,
            0,
            0,
            0,
            0,
            0,
            0);
    (*(void (__thiscall **)(int, int *, int))(a16 + 1292))(a1, a2, v42); /*0x519286*/
  LABEL_53:
    if ( v81 ) /*0x5195ee*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v81 + 8))(v81); /*0x5195f3*/
    return AbstractClass::COMStub_Return0_69(&v87, a3); /*0x5195f6*/
  }
  v85 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 108))(a1); /*0x51929d*/
  if ( v85 )
  {
    a2 = *(int **)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)a1 + 448))(a1, &v83); /*0x5192da*/
    TacticalClass::AddToDrawQueue(g_TacticalClass_Instance, a1, (int)v87, v88); /*0x5192e6*/
    if ( LightningStorm::IsActive() ) /*0x5192eb*/
    {
      v44 = *((_DWORD *)g_ScenarioClass_Instance + 3415); /*0x5192fa*/
    }
    else if ( PsyDom::IsActive() ) /*0x519302*/
    {
      v44 = *((_DWORD *)g_ScenarioClass_Instance + 3428); /*0x519311*/
    }
    else if ( NukeFlash::IsActive() ) /*0x519319*/
    {
      v44 = *((_DWORD *)g_ScenarioClass_Instance + 3421); /*0x519327*/
    }
    else
    {
      v44 = *((_DWORD *)g_ScenarioClass_Instance + 3409); /*0x519335*/
    }
    if ( *(_BYTE *)(a1 + 140) ) /*0x51933b*/
      goto LABEL_39; /*0x51933b*/
    v45 = (int *)(a1 + 156); /*0x519349*/
    v89 = *(_DWORD *)(a1 + 156); /*0x519353*/
    v90 = *(_DWORD *)(a1 + 160); /*0x51935f*/
    v91 = *(_DWORD *)(a1 + 164); /*0x51936b*/
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v89) + 80) & 0x10000) == 0 ) /*0x51937e*/
      goto LABEL_38; /*0x51937e*/
    v89 = *v45; /*0x519384*/
    v90 = *(_DWORD *)(a1 + 160); /*0x51938b*/
    v46 = *(_DWORD *)(a1 + 164); /*0x51938f*/
    v89 = *v45; /*0x519394*/
    v90 = *(_DWORD *)(a1 + 160); /*0x5193a0*/
    v91 = *(_DWORD *)(a1 + 164); /*0x5193a7*/
    if ( v46 > dword_A8F234 / 2 + Cell::GetGroundHeight(&v89) )
    {
  LABEL_39:
      v51 = v44 * ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) / (2 * dword_A8F240)); /*0x51943c*/
      v50 = v51 + *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 133); /*0x51944b*/
    }
    else
    {
  LABEL_38:
      v47 = *(_DWORD *)(a1 + 164); /*0x5193c9*/
      v48 = *(_DWORD *)(a1 + 160); /*0x5193cc*/
      v89 = *v45; /*0x5193cf*/
      v91 = v47; /*0x5193d7*/
      v90 = v48; /*0x5193e1*/
      v49 = (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v89) + 80) & 0x10000) != 0 ? 0xFFFFFE0C : 0;
      v50 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 133) + v49; /*0x519416*/
    }
    v52 = *((_DWORD *)g_RulesClass_Instance + 1526) + v50; /*0x519457*/
    v53 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1); /*0x519469*/
    v89 = *(_DWORD *)(a1 + 156); /*0x51946f*/
    v90 = *(_DWORD *)(a1 + 160); /*0x519480*/
    v91 = *(_DWORD *)(a1 + 164); /*0x519487*/
    v54 = Coord::To_Cell(&MapClass_Instance, &v89); /*0x519490*/
    v83 = v54; /*0x519492*/
    v55 = v54[80]; /*0x519496*/
    if ( (v55 & 0x100) == 0 || v53 < dword_A8F234 ) /*0x5194a7*/
      goto LABEL_48; /*0x5194a7*/
    if ( (v55 & 0x800) != 0 ) /*0x5194ac*/
    {
      if ( (*((_DWORD *)Cell::GetNeighbourContent(v54, 0) + 80) & 0x100) != 0 ) /*0x5194be*/
      {
  LABEL_47:
        v53 -= dword_A8F234; /*0x5194e1*/
  LABEL_48:
        if ( v53 > 0 && (dword_A8F244 || (dword_A8F244 = SearchMIXFile(aInfshdwShp, 0)) != 0) ) /*0x51950b*/
        {
          v56 = *(_DWORD *)(a1 + 160); /*0x51950f*/
          v57 = *(_DWORD *)(a1 + 164); /*0x519512*/
          v89 = *(_DWORD *)(a1 + 156); /*0x519517*/
          v90 = v56; /*0x51951b*/
          v58 = ZCoordToScreenY(v53); /*0x51951f*/
          v84 = v88 - *(char *)(a1 + 1716) + v58; /*0x51953b*/
          v83 = v87; /*0x51954e*/
          v59 = ZCoordToScreenY(v57 - v53); /*0x519552*/
          DrawToSurfaceSHP( /*0x519585*/
            g_DSurface_Hidden_2,
            g_FileSystem_THEATER_PAL,
            dword_A8F244,
            1u,
            (int *)&v83,
            a3,
            9729,
            0,
            -5 - v59,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        v84 = v88 - *(char *)(a1 + 1716); /*0x5195ab*/
        v83 = v87; /*0x5195cb*/
        v60 = *(int **)a1; /*0x5195cf*/
        v61 = CalculateLocomotionFrameIndex(a1, &v83, a3, 0, 256, dword_825500, 2, 0, v52, v80, 0, 0, 0, 0, 0); /*0x5195d5*/
        ((void (__thiscall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))v60[323])( /*0x5195e2*/
          a1,
          v85,
          v61,
          v62,
          v63,
          v64,
          v65,
          v67,
          v68,
          v69,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        goto LABEL_53; /*0x5195e2*/
      }
      v54 = v83; /*0x5194c0*/
    }
    if ( (v54[80] & 0x800) != 0 || (*((_DWORD *)Cell::GetNeighbourContent(v54, 6u) + 80) & 0x100) == 0 ) /*0x5194df*/
      goto LABEL_48; /*0x5194df*/
    goto LABEL_47; /*0x5194df*/
  }
  result = v81; /*0x5192a3*/
  if ( v81 ) /*0x5192a9*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)v81 + 8))(v81); /*0x5192b2*/
  return result; /*0x5192b5*/
}
void InfantryClass::DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd

#include "structure/infantry.hpp"

namespace gamemd {

// --- InfantryClass ---

// 0x523300
HRESULT __stdcall InfantryClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
}
