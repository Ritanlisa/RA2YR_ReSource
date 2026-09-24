// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseClass_24_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x43B5E0
namespace gamemd {
void ** HouseClass::PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3)
{
  void *v6; // edi
  int *v7; // eax
  void **v8; // eax
  void **v9; // esi
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (void *)*((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(a3)); /*0x43b5fb*/
  v7 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v12); /*0x43b605*/
  v11[0] = *v7; /*0x43b60a*/
  v11[1] = v7[1]; /*0x43b616*/
  v11[2] = v7[2]; /*0x43b61d*/
  v8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x43b621*/
  if ( v8 ) /*0x43b62b*/
    v9 = AnimClass::ctor(v8, v6, v11, 0, 1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  BuildingClass::SetField95(v9, arg0); /*0x43b654*/
  Function::424CA0(v9, aP0); /*0x43b65c*/
  *((_BYTE *)v9 + 413) = 1; /*0x43b661*/
  return v9; /*0x43b66a*/
}
}
// 0x459840
namespace gamemd {
int HouseClass::GetRepairStepAmount()
{
  _DWORD *v1; // edx
  int result; // eax

  v1 = (_DWORD *)*(this + 328); /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return *(this + 445); /*0x459864*/
    }
  }
  return result; /*0x45986a*/
}
}
// 0x4ADEE0
namespace gamemd {
void HouseClass::ResetObjectOrders(char a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi

  v2 = g_SidebarState; /*0x4adee1*/
  v3 = 0; /*0x4adee8*/
  if ( g_SidebarState > 0 ) /*0x4adeec*/
  {
    while ( 1 ) /*0x4adefd*/
    {
      v4 = *((_DWORD *)g_TechnoClass_Count + v3); /*0x4adefd*/
      if ( !v4 /*0x4adf28*/
        || *(_BYTE *)(v4 + 129)
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 44))(*((_DWORD *)g_TechnoClass_Count + v3)) == 6 && a1 )
      {
        goto LABEL_16; /*0x4adf28*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) ) /*0x4adf34*/
        break; /*0x4adf34*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4adfa5*/
        && *((_BYTE *)g_RulesClass_Instance + 6119)
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 + 540), HouseClass_Player) )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 1164))(v4, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4adfcb*/
      {
        goto LABEL_15; /*0x4adfd3*/
      }
  LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return; /*0x4adfe2*/
    }
    if ( !*(_BYTE *)(v4 + 1051) ) /*0x4adf3d*/
      goto LABEL_16; /*0x4adf3d*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1164))(v4, 0, 0, 0, 0); /*0x4adf57*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
  LABEL_15:
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1048))(v4); /*0x4adfd5*/
    goto LABEL_16; /*0x4adfd9*/
  }
}
}
// 0x4ADFF0
namespace gamemd {
int HouseClass::RevealShroudForAllies(char a1, int a2)
{
  int result; // eax
  int i; // ebp
  #375 **v4; // esi

  result = dword_8A03A0; /*0x4adff0*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x4adffa*/
  {
    v4 = *(#375 ***)(dword_8A0394 + 4 * i); /*0x4ae010*/
    if ( v4 /*0x4ae02b*/
      && ((_BYTE)v4[5] & 1) != 0
      && ((*((int (__thiscall **)(_DWORD))*v4 + 11))(*(_DWORD *)(dword_8A0394 + 4 * i)) != 6 || !a1) )
    {
      if ( (unsigned __int8)House::IsHumanPlayer(v4[135]) ) /*0x4ae033*/
      {
        if ( *((_BYTE *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (__thiscall **)(#375 **, _DWORD, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (__thiscall **)(#375 **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && HIBYTE(g_RulesClass_Instance[1].RadarEventDurations[2])
             && (unsigned __int8)HouseClass::IsAlliedWith(v4[135], HouseClass_Player) )
      {
        (*((void (__thiscall **)(#375 **, int, _DWORD))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = dword_8A03A0; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/
}
}
// 0x4F54A0
namespace gamemd {
void HouseClass::Construct(CCINIClass * aP1)
{
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __thiscall HouseClass::Construct(int this, CCINIClass *aP1)
// {
//   IUnknown *v3; // edx
//   IUnknown *v4; // ecx
//   IUnknown *v5; // ecx
//   _DWORD *v6; // esi
//   int v7; // eax
//   IUnknown *v8; // ecx
//   IUnknown *v9; // edx
//   IUnknown *v10; // edx
//   int v11; // eax
//   int v12; // eax
//   int v13; // eax
//   int v14; // eax
//   int v15; // eax
//   int v16; // eax
//   int v17; // edi
//   int v18; // eax
//   int v19; // ecx
//   int v20; // edi
//   int v21; // ecx
//   int v22; // eax
//   int v23; // edx
//   int v24; // esi
//   int v25; // eax
//   int v26; // ecx
//   int v27; // eax
//   int v28; // edx
//   int v29; // edi
//   int v30; // eax
//   int v31; // ecx
//   int v32; // edi
//   int v33; // ecx
//   int v34; // eax
//   int v35; // edx
//   int v36; // ecx
//   int v37; // esi
//   int v38; // eax
//   int v39; // ecx
//   int v40; // eax
//   int v41; // edx
//   int v42; // ecx
//   IUnknown *v43; // eax
//   int eax75; // eax
//   SuperClass *v44; // esi
//   int v46; // ecx
//   int v47; // eax
//   int v48; // eax
//   int v49; // edx
//   CCINIClass *v50; // esi
//   int v51; //... [33044 chars total]
// end truncated pseudocode
}
}

// 0x4F9A50
namespace gamemd {
int HouseClass::IsAlliedWith(IUnknown * aP1)
{
  int result; // eax
  int v3; // ecx

  result = (int)this; /*0x4f9a50*/
  if ( !aP1 ) /*0x4f9a58*/
    goto LABEL_8; /*0x4f9a58*/
  if ( aP1 == this ) /*0x4f9a5c*/
  {
    LOBYTE(result) = 1; /*0x4f9a5e*/
    return result; /*0x4f9a60*/
  }
  v3 = *((_DWORD *)aP1 + 12); /*0x4f9a63*/
  if ( v3 == *(_DWORD *)(result + 48) ) /*0x4f9a6b*/
  {
    LOBYTE(result) = 1; /*0x4f9a6d*/
    return result; /*0x4f9a6f*/
  }
  if ( v3 == -1 ) /*0x4f9a75*/
  LABEL_8:
    LOBYTE(result) = 0; /*0x4f9a8a*/
  else
    LOBYTE(result) = ((1 << v3) & *(_DWORD *)(result + 22408)) != 0; /*0x4f9a84*/
  return result; /*0x4f9a60*/
}
}
// 0x4FBE40
namespace gamemd {
int HouseClass::IsCellOccupied(IUnknown * aP1, char a3)
{
  char v4; // bl
  _DWORD *v6; // eax
  void *v7; // eax
  int v9; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v10[12]; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+20h] [ebp+4h]

  v4 = 0; /*0x4fbe49*/
  if ( !aP1 ) /*0x4fbe50*/
    return 0; /*0x4fbf50*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 44))(aP1) == 1 ) /*0x4fbe60*/
  {
    v4 = HouseClass::ClearPrimaryFactory(aP1); /*0x4fbe69*/
    if ( !v4 || *(_DWORD *)(this + 21468) != aP1 ) /*0x4fbe79*/
      goto LABEL_10; /*0x4fbe79*/
  }
  else
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)aP1 + 72))(aP1, v10); /*0x4fbe8a*/
    LOWORD(v11) = *v6 / 256; /*0x4fbe9d*/
    HIWORD(v11) = v6[1] / 256; /*0x4fbeb5*/
    v9 = v11; /*0x4fbebe*/
    if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v9) ) /*0x4fbec8*/
      goto LABEL_10; /*0x4fbec8*/
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9); /*0x4fbedb*/
    v4 = HouseClass::checkAutoProduction(v7); /*0x4fbee7*/
    if ( !v4 || *(_DWORD *)(this + 21468) != aP1 ) /*0x4fbef3*/
      goto LABEL_10; /*0x4fbef3*/
  }
  *(_DWORD *)(this + 21468) = 0; /*0x4fbef5*/
  LABEL_10:
  if ( a3 ) /*0x4fbf05*/
  {
    if ( *(_DWORD *)(this + 21472) != g_ControlGroupState ) /*0x4fbf1b*/
    {
      *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(this + 21472)) + 17) = -1; /*0x4fbf35*/
      *(_DWORD *)(this + 21472) = g_ControlGroupState; /*0x4fbf41*/
    }
  }
  return v4; /*0x4fbf43*/
}
}
// 0x4FC790
namespace gamemd {
int HouseClass::DestroyAllBuildings()
{
  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(PriorityTarget) = g_SidebarState; /*0x4fc791*/
  v2 = 0; /*0x4fc799*/
  v3 = 0; /*0x4fc79b*/
  while ( v2 < g_SidebarState ) /*0x4fc7a1*/
  {
    v5 = *((_DWORD *)g_TechnoClass_Count + v2); /*0x4fc7a9*/
    PriorityTarget = ObjectClass::GetPriorityTarget((_DWORD *)v5); /*0x4fc7ae*/
    if ( (void *)PriorityTarget != this /*0x4fc7cf*/
      || (PriorityTarget = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5), PriorityTarget != 6)
      || (LOBYTE(PriorityTarget) = *(_BYTE *)(v5 + 129), (_BYTE)PriorityTarget)
      || v5 == v3 )
    {
      ++v2; /*0x4fc810*/
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 108); /*0x4fc7d4*/
      v6 = *(_DWORD *)(v5 + 632); /*0x4fc7d8*/
      if ( v6 ) /*0x4fc7e0*/
        TriggerClass::UnlinkTags(v6); /*0x4fc7e2*/
      LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, int, _DWORD))(*(_DWORD *)v5 + 364))( /*0x4fc806*/
                                 v5,
                                 &v8,
                                 0,
                                 g_RulesClass_Instance->SilverCrate[5],
                                 0,
                                 1,
                                 1,
                                 0);
      v3 = v5; /*0x4fc80c*/
    }
  }
  return PriorityTarget; /*0x4fc81a*/
}
}
// 0x4FC820
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNonNaval()
{
  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(PriorityTarget) = g_SidebarState; /*0x4fc821*/
  v2 = 0; /*0x4fc829*/
  v3 = 0; /*0x4fc82b*/
  while ( v2 < g_SidebarState ) /*0x4fc831*/
  {
    v5 = *((_DWORD *)g_TechnoClass_Count + v2); /*0x4fc83d*/
    PriorityTarget = ObjectClass::GetPriorityTarget((_DWORD *)v5); /*0x4fc842*/
    if ( (void *)PriorityTarget != this /*0x4fc877*/
      || (PriorityTarget = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5), PriorityTarget == 6)
      || (LOBYTE(PriorityTarget) = *(_BYTE *)(v5 + 129), (_BYTE)PriorityTarget)
      || (PriorityTarget = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5), *(_BYTE *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc8b8*/
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 108); /*0x4fc87c*/
      v6 = *(_DWORD *)(v5 + 632); /*0x4fc880*/
      if ( v6 ) /*0x4fc888*/
        TriggerClass::UnlinkTags(v6); /*0x4fc88a*/
      LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, int, _DWORD))(*(_DWORD *)v5 + 364))( /*0x4fc8ae*/
                                 v5,
                                 &v8,
                                 0,
                                 g_RulesClass_Instance->SilverCrate[5],
                                 0,
                                 1,
                                 1,
                                 0);
      v3 = v5; /*0x4fc8b4*/
    }
  }
  return PriorityTarget; /*0x4fc8c6*/
}
}
// 0x4FC8D0
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNaval()
{
  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(PriorityTarget) = g_SidebarState; /*0x4fc8d1*/
  v2 = 0; /*0x4fc8d9*/
  v3 = 0; /*0x4fc8db*/
  while ( v2 < g_SidebarState ) /*0x4fc8e1*/
  {
    v5 = *((_DWORD *)g_TechnoClass_Count + v2); /*0x4fc8ed*/
    PriorityTarget = ObjectClass::GetPriorityTarget((_DWORD *)v5); /*0x4fc8f2*/
    if ( (void *)PriorityTarget != this /*0x4fc927*/
      || (PriorityTarget = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5), PriorityTarget == 6)
      || (LOBYTE(PriorityTarget) = *(_BYTE *)(v5 + 129), (_BYTE)PriorityTarget)
      || (PriorityTarget = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5), !*(_BYTE *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc968*/
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 108); /*0x4fc92c*/
      v6 = *(_DWORD *)(v5 + 632); /*0x4fc930*/
      if ( v6 ) /*0x4fc938*/
        TriggerClass::UnlinkTags(v6); /*0x4fc93a*/
      LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, int, _DWORD))(*(_DWORD *)v5 + 364))( /*0x4fc95e*/
                                 v5,
                                 &v8,
                                 0,
                                 g_RulesClass_Instance->SilverCrate[5],
                                 0,
                                 1,
                                 1,
                                 0);
      v3 = v5; /*0x4fc964*/
    }
  }
  return PriorityTarget; /*0x4fc976*/
}
}
// 0x501540
namespace gamemd {
int HouseClass::CanAlly(HouseClass * aP1)
{
  int v3; // ecx
  int v5; // edi
  int v6; // ebp
  HouseClass *v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // eax

  if ( aP1 ) /*0x50154a*/
  {
    if ( aP1 == this ) /*0x50154e*/
      return 0; /*0x50154e*/
    v3 = *(_DWORD *)(aP1 + 48); /*0x501550*/
    if ( v3 == *(_DWORD *)(this + 48) || v3 != -1 && (*(_DWORD *)(this + 22408) & (1 << v3)) != 0 ) /*0x501573*/
      return 0; /*0x501576*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(aP1 + 52) + 188) == HouseTypeClass::Find(g_INI_Key_Civilian) && g_GameMode_Current[0] ) /*0x501598*/
    return 0; /*0x50159b*/
  if ( g_IKnowWhatImDoing ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( *(_BYTE *)(this + 501) ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( HouseClass_Count > 0 ) /*0x5015ce*/
  {
    v7 = HouseClass_Array; /*0x5015d0*/
    v8 = HouseClass_Count; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(_DWORD *)v7->gap0; /*0x5015d9*/
      if ( !*(_BYTE *)(*(_DWORD *)v7->gap0 + 501) && !*(_BYTE *)(*(_DWORD *)(v9 + 52) + 422) ) /*0x5015e8*/
      {
        ++v5; /*0x5015f1*/
        if ( v9 ) /*0x5015f4*/
        {
          if ( v9 == this /*0x501625*/
            || (v10 = *(_DWORD *)(v9 + 48), v10 == *(_DWORD *)(this + 48))
            || v10 != -1 && ((1 << v10) & *(_DWORD *)(this + 22408)) != 0 )
          {
            ++v6; /*0x501627*/
          }
        }
      }
      v7 = (HouseClass *)((char *)v7 + 4); /*0x501628*/
      --v8; /*0x50162b*/
    }
    while ( v8 ); /*0x50162c*/
  }
  return v5 != v6 + 1; /*0x501575*/
}
}
// 0x501640
namespace gamemd {
int HouseClass::CanDetect()
{
  _BYTE *v0; // eax
  char v1; // bl
  int v2; // ecx
  int i; // ebp
  _BYTE *v4; // esi
  int j; // edi
  char v6; // cl

  LOBYTE(v0) = (_BYTE)g_RulesClass_Instance; /*0x501640*/
  v1 = *((_BYTE *)g_RulesClass_Instance + 5301); /*0x50164d*/
  if ( g_GameStateFlags /*0x501662*/
    && (LOBYTE(v0) = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 4))(g_GameStateFlags), (_BYTE)v0)
    || v1 )
  {
    LOBYTE(v0) = (_BYTE)g_ScenarioClass_Instance; /*0x501668*/
    if ( !*((_BYTE *)g_ScenarioClass_Instance + 4576) ) /*0x50166d*/
    {
      v2 = HouseClass_Count; /*0x50167b*/
      for ( i = 0; i < v2; ++i ) /*0x501685*/
      {
        v4 = (_BYTE *)*((_DWORD *)HouseClass_Array + i); /*0x501695*/
        if ( v4 ) /*0x50169a*/
        {
          LOBYTE(v0) = v4[501]; /*0x5016a0*/
          if ( !(_BYTE)v0 ) /*0x5016a8*/
          {
            LOBYTE(v0) = v4[492]; /*0x5016b5*/
            if ( !g_GameMode_Current ) /*0x5016bb*/
              LOBYTE(v0) = (_BYTE)v0 || v4[493]; /*0x5016cf*/
            if ( !(_BYTE)v0 ) /*0x5016d3*/
            {
              v4[586] = 1; /*0x5016d5*/
              v2 = HouseClass_Count; /*0x5016db*/
              for ( j = 0; j < HouseClass_Count; ++j ) /*0x5016e5*/
              {
                v0 = (_BYTE *)*((_DWORD *)HouseClass_Array + j); /*0x5016ec*/
                if ( v0 && !v0[501] ) /*0x5016f3*/
                {
                  v6 = v0[492]; /*0x501705*/
                  if ( !g_GameMode_Current ) /*0x50170b*/
                    v6 = v6 || v0[493]; /*0x50171f*/
                  if ( v6 ) /*0x501728*/
                    LOBYTE(v0) = HouseClass::SetAlliance((int)v4, (int)v0, 0); /*0x50172a*/
                  else
                    LOBYTE(v0) = HouseClass::HandleAlliance((int)v4, (int)v0, 0); /*0x501731*/
                }
                v2 = HouseClass_Count; /*0x501736*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v0; /*0x50174c*/
}
}
// 0x503040
namespace gamemd {
AbstractClass * * HouseClass::SaveLoad_Prefix(int a1, LPSTREAM pStm)
{
{
  int i; // edi
  int j; // edi
  LPSTREAM v9; // edi
  HRESULT result; // eax
  int k; // ebp
  int m; // ebp
  int n; // ebp
  int ii; // ebp
  int jj; // ebp
  int kk; // ebp
  int mm; // ebp
  int nn; // ebp
  int i1; // ebp
  int i2; // ebp
  int i3; // ebp
  int i4; // ebp
  int i5; // ebp
  int i6; // ebp
  int i7; // ebp
  int i8; // ebp

  int v2 = a1;
  (*(void (__thiscall **)(int))(*(_DWORD *)(a1 + 80) + 12))(a1 + 80);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 104) + 12))(v2 + 104);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 128) + 12))(v2 + 128);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 152) + 12))(v2 + 152);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 176) + 12))(v2 + 176);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 200) + 12))(v2 + 200);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 224) + 12))(v2 + 224);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 248) + 12))(v2 + 248);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 272) + 12))(v2 + 272);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 296) + 12))(v2 + 296);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 320) + 12))(v2 + 320);
  for ( i = *(_DWORD *)(v2 + 380) - 1; i >= 0; --i )
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v2 + 368) + 4 * i));
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 364) + 12))(v2 + 364);
  for ( j = 0; j < *(_DWORD *)(v2 + 90228); *(_DWORD *)(*(_DWORD *)(v2 + 90216) + 4 * j - 4) = 0 )
  {
    int v131 = *(_DWORD *)(*(_DWORD *)(v2 + 90216) + 4 * j);
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)v131 + 8))(v131) )
    {
      do
        int v132 = *(_DWORD *)(*(_DWORD *)(v2 + 90216) + 4 * j);
      while ( (*(int (__stdcall **)(int))(*(_DWORD *)v132 + 8))(v132) );
    }
    ++j;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 90212) + 12))(v2 + 90212);
  while ( *(_DWORD *)(v2 + 612) )
  {
    int v5 = **(_DWORD **)(v2 + 600);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1);
    int v6 = *(_DWORD *)(v2 + 612);
    if ( v6 > 0 )
    {
      int v7 = v6 - 1;
      int v8 = 0;
      for ( *(_DWORD *)(v2 + 612) = v7;
            v8 < *(_DWORD *)(v2 + 612);
            *(_DWORD *)(*(_DWORD *)(v2 + 600) + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)(v2 + 600) + 4 * v8) )
      {
        ++v8;
      }
    }
  }
  v9 = pStm;
  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)v2, (int)pStm);
  if ( result >= 0 )
  {
    if ( v2 )
      HouseClass::Constructor(v2, (int)&a1);
    (**(void (__stdcall ***)(int, LPSTREAM))(v2 + 22272))(v2 + 22272, v9);
    CounterClass::Load((_DWORD *)(v2 + 21760), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21780), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21800), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21820), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21840), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21860), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21880), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21900), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21920), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21940), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21960), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21980), (int)v9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 52));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21424));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21428));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21420));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21432));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21436));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21440));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21444));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21448));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21452));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21728));
    int * v11 = (int *)(v2 + 528);
    int v12 = 12;
    do
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v11++);
      --v12;
    }
    while ( v12 );
    int * v13 = (int *)(v2 + 22128);
    int v14 = 3;
    do
    {
      HouseClass::RegisterForSwizzleTracking(v13);
      v13 += 11;
      --v14;
    }
    while ( v14 );
    int v15 = *(_DWORD *)v9->__pad_0;
    int v133 = 0;
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v15 + 12))(v9, &v133, 4, 0);
    if ( result >= 0 )
    {
      bool v16 = v133-- == 0;
      if ( v16 )
      {
LABEL_31:
        int v22 = *(_DWORD *)v9->__pad_0;
        v133 = 0;
        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v22 + 12))(v9, &v133, 4, 0);
        if ( result >= 0 )
        {
          v16 = v133-- == 0;
          if ( v16 )
          {
LABEL_41:
            int v28 = *(_DWORD *)v9->__pad_0;
            v133 = 0;
            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v28 + 12))(v9, &v133, 4, 0);
            if ( result >= 0 )
            {
  int v135; // [esp+2C0h] [ebp-8h]
  int v134; // [esp+2BCh] [ebp-Ch] BYREF
              v16 = v133-- == 0;
              if ( v16 )
              {
LABEL_51:
                for ( k = 0; k < *(_DWORD *)(v2 + 22036); ++k )
                  ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(v2 + 22024) + 8 * k));
                int v35 = *(_DWORD *)v9->__pad_0;
                v133 = 0;
                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v35 + 12))(v9, &v133, 4, 0);
                if ( result >= 0 )
                {
                  v16 = v133-- == 0;
                  if ( v16 )
                  {
LABEL_63:
                    int v41 = *(_DWORD *)(v2 + 22060);
                    for ( m = 0; m < v41; ++m )
                    {
                      ObjectPtr::RegisterForTracking(
                        (int)&SwizzleManagerClass_Instance,
                        (int *)(*(_DWORD *)(v2 + 22048) + 8 * v41 - 8));
                      v41 = *(_DWORD *)(v2 + 22060);
                    }
                    int v43 = *(_DWORD *)v9->__pad_0;
                    v133 = 0;
                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v43 + 12))(v9, &v133, 4, 0);
                    if ( result >= 0 )
                    {
                      v16 = v133-- == 0;
                      if ( v16 )
                      {
LABEL_75:
                        int v49 = *(_DWORD *)v9->__pad_0;
                        v133 = 0;
                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v49 + 12))(v9, &v133, 4, 0);
                        if ( result >= 0 )
                        {
                          v16 = v133-- == 0;
                          if ( v16 )
                          {
LABEL_85:
                            int v55 = *(_DWORD *)v9->__pad_0;
                            v133 = 0;
                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v55 + 12))(v9, &v133, 4, 0);
                            if ( result >= 0 )
                            {
                              v16 = v133-- == 0;
                              if ( v16 )
                              {
LABEL_95:
                                int v61 = *(_DWORD *)v9->__pad_0;
                                v133 = 0;
                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v61 + 12))(
                                           v9,
                                           &v133,
                                           4,
                                           0);
                                if ( result >= 0 )
                                {
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                  {
LABEL_105:
                                    int v67 = *(_DWORD *)v9->__pad_0;
                                    v133 = 0;
                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v67 + 12))(
                                               v9,
                                               &v133,
                                               4,
                                               0);
                                    if ( result >= 0 )
                                    {
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                      {
LABEL_115:
                                        int v73 = *(_DWORD *)v9->__pad_0;
                                        v133 = 0;
                                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v73 + 12))(
                                                   v9,
                                                   &v133,
                                                   4,
                                                   0);
                                        if ( result >= 0 )
                                        {
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                          {
LABEL_125:
                                            int v79 = *(_DWORD *)v9->__pad_0;
                                            v133 = 0;
                                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v79 + 12))(
                                                       v9,
                                                       &v133,
                                                       4,
                                                       0);
                                            if ( result >= 0 )
                                            {
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                              {
LABEL_135:
                                                int v85 = *(_DWORD *)v9->__pad_0;
                                                v133 = 0;
                                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v85 + 12))(
                                                           v9,
                                                           &v133,
                                                           4,
                                                           0);
                                                if ( result >= 0 )
                                                {
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                  {
LABEL_145:
                                                    int v91 = *(_DWORD *)v9->__pad_0;
                                                    v133 = 0;
                                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v91 + 12))(
                                                               v9,
                                                               &v133,
                                                               4,
                                                               0);
                                                    if ( result >= 0 )
                                                    {
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                      {
LABEL_155:
                                                        int v97 = *(_DWORD *)v9->__pad_0;
                                                        v133 = 0;
                                                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v97 + 12))(
                                                                   v9,
                                                                   &v133,
                                                                   4,
                                                                   0);
                                                        if ( result >= 0 )
                                                        {
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                          {
LABEL_165:
                                                            int v103 = *(_DWORD *)v9->__pad_0;
                                                            v133 = 0;
                                                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v103 + 12))(
                                                                       v9,
                                                                       &v133,
                                                                       4,
                                                                       0);
                                                            if ( result >= 0 )
                                                            {
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                              {
LABEL_175:
                                                                int v109 = *(_DWORD *)v9->__pad_0;
                                                                v133 = 0;
                                                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v109 + 12))(
                                                                           v9,
                                                                           &v133,
                                                                           4,
                                                                           0);
                                                                if ( result >= 0 )
                                                                {
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                  {
LABEL_187:
                                                                    for ( n = 0; n < *(_DWORD *)(v2 + 612); ++n )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 600) + 4 * n));
                                                                    for ( ii = 0; ii < *(_DWORD *)(v2 + 72); ++ii )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 60) + 4 * ii));
                                                                    for ( jj = 0; jj < *(_DWORD *)(v2 + 96); ++jj )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 84) + 4 * jj));
                                                                    for ( kk = 0; kk < *(_DWORD *)(v2 + 120); ++kk )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 108) + 4 * kk));
                                                                    for ( mm = 0; mm < *(_DWORD *)(v2 + 144); ++mm )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 132) + 4 * mm));
                                                                    for ( nn = 0; nn < *(_DWORD *)(v2 + 168); ++nn )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 156) + 4 * nn));
                                                                    for ( i1 = 0; i1 < *(_DWORD *)(v2 + 192); ++i1 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 180) + 4 * i1));
                                                                    for ( i2 = 0; i2 < *(_DWORD *)(v2 + 216); ++i2 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 204) + 4 * i2));
                                                                    for ( i3 = 0; i3 < *(_DWORD *)(v2 + 240); ++i3 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 228) + 4 * i3));
                                                                    for ( i4 = 0; i4 < *(_DWORD *)(v2 + 264); ++i4 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 252) + 4 * i4));
                                                                    for ( i5 = 0; i5 < *(_DWORD *)(v2 + 288); ++i5 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 276) + 4 * i5));
                                                                    for ( i6 = 0; i6 < *(_DWORD *)(v2 + 312); ++i6 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 300) + 4 * i6));
                                                                    for ( i7 = 0; i7 < *(_DWORD *)(v2 + 336); ++i7 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(_DWORD *)(v2 + 324) + 4 * i7));
                                                                    for ( i8 = 0; i8 < *(_DWORD *)(v2 + 380); ++i8 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        *(int **)(*(_DWORD *)(v2 + 368) + 4 * i8));
                                                                    int v130 = *(_DWORD *)v9->__pad_0;
                                                                    int v136 = 0;
                                                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v130 + 12))(
                                                                               v9,
                                                                               &v136,
                                                                               4,
                                                                               0);
                                                                    if ( result >= 0 )
                                                                    {
                                                                      if ( v136 )
                                                                        return OleLoadFromStream(
                                                                                 v9,
                                                                                 &iidInterface,
                                                                                 (LPVOID *)(v2 + 22496));
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    while ( 1 )
                                                                    {
                                                                      _WORD * v110 = __2_YAPAXI_Z(8u);
                                                                      int v111 = *(_DWORD *)v9->__pad_0;
                                                                      v134 = 0;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v111 + 12))(
                                                                                 v9,
                                                                                 &v134,
                                                                                 4,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &a1,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, LPSTREAM *, int, _DWORD))(*(_DWORD *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &pStm,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      *(_DWORD *)v110 = v134;
                                                                      v110[2] = a1;
                                                                      v110[3] = (_WORD)pStm;
                                                                      int v112 = *(_DWORD *)(v2 + 372);
                                                                      if ( *(_DWORD *)(v2 + 380) < v112
                                                                        || (*(_BYTE *)(v2 + 377) || !v112)
  int v113; // eax
                                                                        && (v113 = *(_DWORD *)(v2 + 384), v113 > 0)
                                                                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 364) + 8))(
                                                                             v2 + 364,
                                                                             v113 + v112,
                                                                             0) )
                                                                      {
                                                                        int v114 = *(_DWORD *)(v2 + 380);
                                                                        int v115 = *(_DWORD *)(v2 + 368);
                                                                        *(_DWORD *)(v2 + 380) = v114 + 1;
                                                                        *(_DWORD *)(v115 + 4 * v114) = v110;
                                                                      }
                                                                      v16 = v133-- == 0;
                                                                      if ( v16 )
                                                                        goto LABEL_187;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  int v104 = *(_DWORD *)v9->__pad_0;
                                                                  a1 = 0;
                                                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v104 + 12))(
                                                                             v9,
                                                                             &a1,
                                                                             4,
                                                                             0);
                                                                  if ( result < 0 )
                                                                    break;
                                                                  int v105 = *(_DWORD *)(v2 + 328);
                                                                  if ( *(_DWORD *)(v2 + 336) < v105
                                                                    || (*(_BYTE *)(v2 + 333) || !v105)
  int v106; // eax
                                                                    && (v106 = *(_DWORD *)(v2 + 340), v106 > 0)
                                                                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 320) + 8))(
                                                                         v2 + 320,
                                                                         v106 + v105,
                                                                         0) )
                                                                  {
                                                                    int v107 = *(_DWORD *)(v2 + 336);
                                                                    int v108 = *(_DWORD *)(v2 + 324);
                                                                    *(_DWORD *)(v2 + 336) = v107 + 1;
                                                                    *(_DWORD *)(v108 + 4 * v107) = a1;
                                                                  }
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                    goto LABEL_175;
                                                                }
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            while ( 1 )
                                                            {
                                                              int v98 = *(_DWORD *)v9->__pad_0;
                                                              a1 = 0;
                                                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v98 + 12))(
                                                                         v9,
                                                                         &a1,
                                                                         4,
                                                                         0);
                                                              if ( result < 0 )
                                                                break;
                                                              int v99 = *(_DWORD *)(v2 + 304);
                                                              if ( *(_DWORD *)(v2 + 312) < v99
                                                                || (*(_BYTE *)(v2 + 309) || !v99)
  int v100; // eax
                                                                && (v100 = *(_DWORD *)(v2 + 316), v100 > 0)
                                                                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 296) + 8))(
                                                                     v2 + 296,
                                                                     v100 + v99,
                                                                     0) )
                                                              {
                                                                int v101 = *(_DWORD *)(v2 + 312);
                                                                int v102 = *(_DWORD *)(v2 + 300);
                                                                *(_DWORD *)(v2 + 312) = v101 + 1;
                                                                *(_DWORD *)(v102 + 4 * v101) = a1;
                                                              }
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                                goto LABEL_165;
                                                            }
                                                          }
                                                        }
                                                      }
                                                      else
                                                      {
                                                        while ( 1 )
                                                        {
                                                          int v92 = *(_DWORD *)v9->__pad_0;
                                                          a1 = 0;
                                                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v92 + 12))(
                                                                     v9,
                                                                     &a1,
                                                                     4,
                                                                     0);
                                                          if ( result < 0 )
                                                            break;
                                                          int v93 = *(_DWORD *)(v2 + 280);
                                                          if ( *(_DWORD *)(v2 + 288) < v93
                                                            || (*(_BYTE *)(v2 + 285) || !v93)
  int v94; // eax
                                                            && (v94 = *(_DWORD *)(v2 + 292), v94 > 0)
                                                            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 272) + 8))(
                                                                 v2 + 272,
                                                                 v94 + v93,
                                                                 0) )
                                                          {
                                                            int v95 = *(_DWORD *)(v2 + 288);
                                                            int v96 = *(_DWORD *)(v2 + 276);
                                                            *(_DWORD *)(v2 + 288) = v95 + 1;
                                                            *(_DWORD *)(v96 + 4 * v95) = a1;
                                                          }
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                            goto LABEL_155;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    while ( 1 )
                                                    {
                                                      int v86 = *(_DWORD *)v9->__pad_0;
                                                      a1 = 0;
                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v86 + 12))(
                                                                 v9,
                                                                 &a1,
                                                                 4,
                                                                 0);
                                                      if ( result < 0 )
                                                        break;
                                                      int v87 = *(_DWORD *)(v2 + 256);
                                                      if ( *(_DWORD *)(v2 + 264) < v87
                                                        || (*(_BYTE *)(v2 + 261) || !v87)
  int v88; // eax
                                                        && (v88 = *(_DWORD *)(v2 + 268), v88 > 0)
                                                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 248) + 8))(
                                                             v2 + 248,
                                                             v88 + v87,
                                                             0) )
                                                      {
                                                        int v89 = *(_DWORD *)(v2 + 264);
                                                        int v90 = *(_DWORD *)(v2 + 252);
                                                        *(_DWORD *)(v2 + 264) = v89 + 1;
                                                        *(_DWORD *)(v90 + 4 * v89) = a1;
                                                      }
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                        goto LABEL_145;
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                while ( 1 )
                                                {
                                                  int v80 = *(_DWORD *)v9->__pad_0;
                                                  a1 = 0;
                                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v80 + 12))(
                                                             v9,
                                                             &a1,
                                                             4,
                                                             0);
                                                  if ( result < 0 )
                                                    break;
                                                  int v81 = *(_DWORD *)(v2 + 232);
                                                  if ( *(_DWORD *)(v2 + 240) < v81
                                                    || (*(_BYTE *)(v2 + 237) || !v81)
  int v82; // eax
                                                    && (v82 = *(_DWORD *)(v2 + 244), v82 > 0)
                                                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 224) + 8))(
                                                         v2 + 224,
                                                         v82 + v81,
                                                         0) )
                                                  {
                                                    int v83 = *(_DWORD *)(v2 + 240);
                                                    int v84 = *(_DWORD *)(v2 + 228);
                                                    *(_DWORD *)(v2 + 240) = v83 + 1;
                                                    *(_DWORD *)(v84 + 4 * v83) = a1;
                                                  }
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                    goto LABEL_135;
                                                }
                                              }
                                            }
                                          }
                                          else
                                          {
                                            while ( 1 )
                                            {
                                              int v74 = *(_DWORD *)v9->__pad_0;
                                              a1 = 0;
                                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v74 + 12))(
                                                         v9,
                                                         &a1,
                                                         4,
                                                         0);
                                              if ( result < 0 )
                                                break;
                                              int v75 = *(_DWORD *)(v2 + 208);
                                              if ( *(_DWORD *)(v2 + 216) < v75
                                                || (*(_BYTE *)(v2 + 213) || !v75)
  int v76; // eax
                                                && (v76 = *(_DWORD *)(v2 + 220), v76 > 0)
                                                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 200) + 8))(
                                                     v2 + 200,
                                                     v76 + v75,
                                                     0) )
                                              {
                                                int v77 = *(_DWORD *)(v2 + 216);
                                                int v78 = *(_DWORD *)(v2 + 204);
                                                *(_DWORD *)(v2 + 216) = v77 + 1;
                                                *(_DWORD *)(v78 + 4 * v77) = a1;
                                              }
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                                goto LABEL_125;
                                            }
                                          }
                                        }
                                      }
                                      else
                                      {
                                        while ( 1 )
                                        {
                                          int v68 = *(_DWORD *)v9->__pad_0;
                                          a1 = 0;
                                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v68 + 12))(
                                                     v9,
                                                     &a1,
                                                     4,
                                                     0);
                                          if ( result < 0 )
                                            break;
                                          int v69 = *(_DWORD *)(v2 + 184);
                                          if ( *(_DWORD *)(v2 + 192) < v69
                                            || (*(_BYTE *)(v2 + 189) || !v69)
  int v70; // eax
                                            && (v70 = *(_DWORD *)(v2 + 196), v70 > 0)
                                            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 176) + 8))(
                                                 v2 + 176,
                                                 v70 + v69,
                                                 0) )
                                          {
                                            int v71 = *(_DWORD *)(v2 + 192);
                                            int v72 = *(_DWORD *)(v2 + 180);
                                            *(_DWORD *)(v2 + 192) = v71 + 1;
                                            *(_DWORD *)(v72 + 4 * v71) = a1;
                                          }
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                            goto LABEL_115;
                                        }
                                      }
                                    }
                                  }
                                  else
                                  {
                                    while ( 1 )
                                    {
                                      int v62 = *(_DWORD *)v9->__pad_0;
                                      a1 = 0;
                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v62 + 12))(
                                                 v9,
                                                 &a1,
                                                 4,
                                                 0);
                                      if ( result < 0 )
                                        break;
                                      int v63 = *(_DWORD *)(v2 + 160);
                                      if ( *(_DWORD *)(v2 + 168) < v63
                                        || (*(_BYTE *)(v2 + 165) || !v63)
  int v64; // eax
                                        && (v64 = *(_DWORD *)(v2 + 172), v64 > 0)
                                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 152)
                                                                                               + 8))(
                                             v2 + 152,
                                             v64 + v63,
                                             0) )
                                      {
                                        int v65 = *(_DWORD *)(v2 + 168);
                                        int v66 = *(_DWORD *)(v2 + 156);
                                        *(_DWORD *)(v2 + 168) = v65 + 1;
                                        *(_DWORD *)(v66 + 4 * v65) = a1;
                                      }
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                        goto LABEL_105;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                while ( 1 )
                                {
                                  int v56 = *(_DWORD *)v9->__pad_0;
                                  a1 = 0;
                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v56 + 12))(
                                             v9,
                                             &a1,
                                             4,
                                             0);
                                  if ( result < 0 )
                                    break;
                                  int v57 = *(_DWORD *)(v2 + 136);
                                  if ( *(_DWORD *)(v2 + 144) < v57
                                    || (*(_BYTE *)(v2 + 141) || !v57)
  int v58; // eax
                                    && (v58 = *(_DWORD *)(v2 + 148), v58 > 0)
                                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 128) + 8))(
                                         v2 + 128,
                                         v58 + v57,
                                         0) )
                                  {
                                    int v59 = *(_DWORD *)(v2 + 144);
                                    int v60 = *(_DWORD *)(v2 + 132);
                                    *(_DWORD *)(v2 + 144) = v59 + 1;
                                    *(_DWORD *)(v60 + 4 * v59) = a1;
                                  }
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                    goto LABEL_95;
                                }
                              }
                            }
                          }
                          else
                          {
                            while ( 1 )
                            {
                              int v50 = *(_DWORD *)v9->__pad_0;
                              a1 = 0;
                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v50 + 12))(v9, &a1, 4, 0);
                              if ( result < 0 )
                                break;
                              int v51 = *(_DWORD *)(v2 + 112);
                              if ( *(_DWORD *)(v2 + 120) < v51
                                || (*(_BYTE *)(v2 + 117) || !v51)
  int v52; // eax
                                && (v52 = *(_DWORD *)(v2 + 124), v52 > 0)
                                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 104) + 8))(
                                     v2 + 104,
                                     v52 + v51,
                                     0) )
                              {
                                int v53 = *(_DWORD *)(v2 + 120);
                                int v54 = *(_DWORD *)(v2 + 108);
                                *(_DWORD *)(v2 + 120) = v53 + 1;
                                *(_DWORD *)(v54 + 4 * v53) = a1;
                              }
                              v16 = v133-- == 0;
                              if ( v16 )
                                goto LABEL_85;
                            }
                          }
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          int v44 = *(_DWORD *)v9->__pad_0;
                          a1 = 0;
                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v44 + 12))(v9, &a1, 4, 0);
                          if ( result < 0 )
                            break;
                          int v45 = *(_DWORD *)(v2 + 88);
                          if ( *(_DWORD *)(v2 + 96) < v45
                            || (*(_BYTE *)(v2 + 93) || !v45)
  int v46; // eax
                            && (v46 = *(_DWORD *)(v2 + 100), v46 > 0)
                            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 80) + 8))(
                                 v2 + 80,
                                 v46 + v45,
                                 0) )
                          {
                            int v47 = *(_DWORD *)(v2 + 96);
                            int v48 = *(_DWORD *)(v2 + 84);
                            *(_DWORD *)(v2 + 96) = v47 + 1;
                            *(_DWORD *)(v48 + 4 * v47) = a1;
                          }
                          v16 = v133-- == 0;
                          if ( v16 )
                            goto LABEL_75;
                        }
                      }
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      int v36 = *(_DWORD *)v9->__pad_0;
                      v134 = 0;
                      LOBYTE(v135) = 0;
                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v36 + 12))(v9, &v134, 8, 0);
                      if ( result < 0 )
                        break;
                      int v37 = *(_DWORD *)(v2 + 22052);
                      if ( *(_DWORD *)(v2 + 22060) < v37
                        || (*(_BYTE *)(v2 + 22057) || !v37)
  int v38; // eax
                        && (v38 = *(_DWORD *)(v2 + 22064), v38 > 0)
                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 22044) + 8))(
                             v2 + 22044,
                             v37 + v38,
                             0) )
                      {
                        int v39 = *(_DWORD *)(v2 + 22060);
                        int v40 = *(_DWORD *)(v2 + 22048);
                        *(_DWORD *)(v2 + 22060) = v39 + 1;
                        *(_DWORD *)(v40 + 8 * v39) = v134;
                        *(_DWORD *)(v40 + 8 * v39 + 4) = v135;
                      }
                      v16 = v133-- == 0;
                      if ( v16 )
                        goto LABEL_63;
                    }
                  }
                }
              }
              else
              {
                while ( 1 )
                {
                  int v29 = *(_DWORD *)v9->__pad_0;
                  v134 = 0;
                  v135 = 0;
                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v29 + 12))(v9, &v134, 8, 0);
                  if ( result < 0 )
                    break;
                  int v30 = *(_DWORD *)(v2 + 22028);
                  if ( *(_DWORD *)(v2 + 22036) < v30
                    || (*(_BYTE *)(v2 + 22033) || !v30)
  int v31; // eax
                    && (v31 = *(_DWORD *)(v2 + 22040), v31 > 0)
                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 22020) + 8))(
                         v2 + 22020,
                         v30 + v31,
                         0) )
                  {
                    int v32 = *(_DWORD *)(v2 + 22036);
                    int v33 = *(_DWORD *)(v2 + 22024);
                    *(_DWORD *)(v2 + 22036) = v32 + 1;
                    *(_DWORD *)(v33 + 8 * v32) = v134;
                    *(_DWORD *)(v33 + 8 * v32 + 4) = v135;
                  }
                  v16 = v133-- == 0;
                  if ( v16 )
                    goto LABEL_51;
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              int v23 = *(_DWORD *)v9->__pad_0;
              a1 = 0;
              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v23 + 12))(v9, &a1, 4, 0);
              if ( result < 0 )
                break;
              int v24 = *(_DWORD *)(v2 + 64);
              if ( *(_DWORD *)(v2 + 72) < v24
                || (*(_BYTE *)(v2 + 69) || !v24)
  int v25; // eax
                && (v25 = *(_DWORD *)(v2 + 76), v25 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 56) + 8))(
                     v2 + 56,
                     v24 + v25,
                     0) )
              {
                int v26 = *(_DWORD *)(v2 + 72);
                int v27 = *(_DWORD *)(v2 + 60);
                *(_DWORD *)(v2 + 72) = v26 + 1;
                *(_DWORD *)(v27 + 4 * v26) = a1;
              }
              v16 = v133-- == 0;
              if ( v16 )
                goto LABEL_41;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          int v17 = *(_DWORD *)v9->__pad_0;
          a1 = 0;
          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v17 + 12))(v9, &a1, 4, 0);
          if ( result < 0 )
            break;
          int v18 = *(_DWORD *)(v2 + 604);
          if ( *(_DWORD *)(v2 + 612) < v18
            || (*(_BYTE *)(v2 + 609) || !v18)
  int v19; // eax
            && (v19 = *(_DWORD *)(v2 + 616), v19 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 596) + 8))(v2 + 596, v18 + v19, 0) )
          {
            int v20 = *(_DWORD *)(v2 + 612);
            int v21 = *(_DWORD *)(v2 + 600);
            *(_DWORD *)(v2 + 612) = v20 + 1;
            *(_DWORD *)(v21 + 4 * v20) = a1;
          }
          v16 = v133-- == 0;
          if ( v16 )
            goto LABEL_31;
        }
      }
    }
  }
  return result;
}

} // namespace gamemd
}

// 0x505360
namespace gamemd {
int HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, VectorClass * aP1, TechnoTypeClass * aP2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  _DWORD *j; // eax
  int *HarvesterUnit; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < *(_DWORD *)(a1 + 1608); ++i ) /*0x505379*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 1596) + 4 * i); /*0x505395*/
    if ( v3 < 0 ) /*0x50539a*/
    {
      HarvesterUnit = 0; /*0x5053cb*/
      switch ( v3 ) /*0x5053d2*/
      {
        case -6: /*0x5053d2*/
          HarvesterUnit = (int *)&g_RulesClass_Instance->GDIBaseDefenseCoefficient + 1; /*0x505423*/
          break; /*0x505423*/
        case -5: /*0x5053d2*/
          HarvesterUnit = &g_RulesClass_Instance->PadAircraft[3]; /*0x505415*/
          break; /*0x50541b*/
        case -4: /*0x5053d2*/
          HarvesterUnit = &g_RulesClass_Instance->SecretUnits[2]; /*0x505407*/
          break; /*0x50540d*/
        case -3: /*0x5053d2*/
          HarvesterUnit = g_RulesClass_Instance->HarvesterUnit; /*0x5053fa*/
          break; /*0x505400*/
        case -2: /*0x5053d2*/
          HarvesterUnit = &g_RulesClass_Instance->TreeFire[2]; /*0x5053ec*/
          break; /*0x5053f2*/
        case -1: /*0x5053d2*/
          HarvesterUnit = (int *)&g_RulesClass_Instance->GDIWallDefense; /*0x5053de*/
          break; /*0x5053e4*/
        default:
          break;
      }
      v8 = 0; /*0x505429*/
      if ( HarvesterUnit[4] <= 0 ) /*0x505430*/
        return 0; /*0x50547c*/
      while ( 1 ) /*0x505437*/
      {
        v9 = (*(int (__thiscall **)(int *, int))(*HarvesterUnit + 24))(HarvesterUnit, v8); /*0x505437*/
        v10 = 0; /*0x50543a*/
        if ( aP2 > 0 ) /*0x50543e*/
          break; /*0x50543e*/
  LABEL_20:
        if ( ++v8 >= HarvesterUnit[4] ) /*0x505455*/
          return 0; /*0x505455*/
      }
      v11 = *(_DWORD **)(aP1 + 4); /*0x505440*/
      while ( *v11 != v9 ) /*0x505445*/
      {
        ++v10; /*0x505447*/
        ++v11; /*0x505448*/
        if ( v10 >= aP2 ) /*0x50544d*/
          goto LABEL_20; /*0x50544d*/
      }
    }
    else
    {
      v4 = 0; /*0x50539c*/
      if ( aP2 <= 0 ) /*0x5053a0*/
        return 0; /*0x5053a0*/
      v5 = *((_DWORD *)g_TriggerTypeCount + v3); /*0x5053ac*/
      for ( j = *(_DWORD **)(aP1 + 4); *j != v5; ++j ) /*0x5053af*/
      {
        if ( ++v4 >= aP2 ) /*0x5053c0*/
          return 0; /*0x5053c0*/
      }
    }
  }
  return 1; /*0x505475*/
}
}
// 0x506EF0
namespace gamemd {
AbstractClass * * HouseClass::AutoBuildScanAndSort(int a2, unsigned int * a3)
{
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall HouseClass::AutoBuildScanAndSort(int this, int a2, _DWORD *a3)
// {
//   VectorClass *v4; // edi
//   int v5; // ebx
//   AbstractClass *v6; // esi
//   _DWORD *v7; // ebx
//   int v8; // eax
//   _WORD *v9; // eax
//   int v10; // ecx
//   int v11; // eax
//   double v12; // st7
//   __int16 v13; // ax
//   int v14; // edi
//   _DWORD *v15; // edi
//   int v16; // eax
//   _DWORD *v17; // esi
//   int v18; // ecx
//   int v19; // eax
//   int v20; // edx
//   int v21; // ecx
//   char *v22; // eax
//   int v23; // esi
//   _WORD *v24; // eax
//   __int16 v25; // cx
//   __int16 v26; // ax
//   double v27; // st7
//   __int64 v28; // rax
//   unsigned int v29; // edi
//   int v30; // ebx
//   void **v31; // eax
//   int v32; // edx
//   CCINIClass *v33; // ecx
//   CCINIClass *v34; // edx
//   int v35; // eax
//   int *v36; // esi
//   char *v37; // ecx
//   bool v38; // cc
//   int v39; // ecx
//   void **v40; // eax
//   ObjectClass *v41; // edx
//   int v42; // edi
//   int v43; // ebx
//   ObjectClass *v44; // ecx
//   int v45; // esi
//   int v46; // eax
//   int v47; // eax
//   int v48; // ecx
//   do... [24279 chars total]
// end truncated pseudocode
}
}

// 0x508C30
namespace gamemd {
int HouseClass::UpdatePower()
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  char v12; // [esp+Bh] [ebp-Dh]
  int v13; // [esp+10h] [ebp-8h]
  bool v14; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(this + 21412); /*0x508c39*/
  v3 = *(_DWORD *)(this + 21416); /*0x508c3f*/
  v14 = v2 < v3 && v3 && (!v2 || (double)v2 / (double)*(int *)(this + 21416) < 1.0); /*0x508c75*/
  *(_BYTE *)(this + 22392) = 0; /*0x508c79*/
  *(_DWORD *)(this + 21412) = 0; /*0x508c7f*/
  *(_DWORD *)(this + 21416) = 0; /*0x508c85*/
  v4 = 0; /*0x508c8f*/
  v12 = 0; /*0x508c93*/
  v13 = *(_DWORD *)(this + 120); /*0x508c97*/
  if ( v13 > 0 ) /*0x508c9b*/
  {
    do /*0x508ca5*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v4); /*0x508ca5*/
      if ( v5 && !*(_BYTE *)(v5 + 129) && *(_BYTE *)(v5 + 116) ) /*0x508cb8*/
      {
        if ( g_GameMode_Current[0] ) /*0x508cc5*/
        {
          if ( (#375 *)this != HouseClass_Player ) /*0x508ce4*/
            goto LABEL_18; /*0x508ce4*/
        }
        else if ( !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493) ) /*0x508cd5*/
        {
  LABEL_18:
          *(_DWORD *)(this + 21412) += BuildingClass::GetPowerOutput((int *)v5); /*0x508cf2*/
          *(_DWORD *)(this + 21416) += BuildingClass::GetPowerDrain((_BYTE *)v5); /*0x508d18*/
          if ( ObjectClass::HasLocation((_DWORD *)v5) && BuildingClass::GetPowerOutput((int *)v5) > 0 ) /*0x508d30*/
            v12 = 1; /*0x508d32*/
          goto LABEL_21; /*0x508d32*/
        }
        if ( *(_BYTE *)(v5 + 1051) || g_GameMode_Current[0] ) /*0x508cf0*/
          goto LABEL_18; /*0x508cf0*/
      }
  LABEL_21:
      ++v4; /*0x508d37*/
    }
    while ( v4 < v13 ); /*0x508ca5*/
  }
  *(_BYTE *)(this + 22395) = v12; /*0x508d45*/
  v6 = *(_DWORD *)(this + 676); /*0x508d50*/
  v7 = *(_DWORD *)(this + 684); /*0x508d56*/
  if ( v6 != -1 ) /*0x508d5f*/
  {
    if ( (int)g_CurrentFrame - v6 >= v7 ) /*0x508d6b*/
      goto LABEL_26; /*0x508d6b*/
    v7 -= (int)g_CurrentFrame - v6; /*0x508d6d*/
  }
  if ( v7 ) /*0x508d71*/
  {
  LABEL_27:
    *(_DWORD *)(this + 21412) = 0; /*0x508d79*/
    goto LABEL_28; /*0x508d79*/
  }
  LABEL_26:
  if ( v12 ) /*0x508d77*/
    goto LABEL_27; /*0x508d77*/
  LABEL_28:
  nullsub_5(this); /*0x508d7f*/
  HouseClass::UpdateTeamProductionSpeed((void *)this); /*0x508d88*/
  v8 = *(_DWORD *)(this + 21412); /*0x508d8d*/
  v9 = *(_DWORD *)(this + 21416); /*0x508d93*/
  v10 = v8 < v9 && v9 && (!v8 || (double)*(int *)(this + 21412) / (double)*(int *)(this + 21416) < 1.0); /*0x508dc9*/
  if ( v14 != v10 ) /*0x508dd7*/
    LOBYTE(v10) = SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this); /*0x508ddb*/
  *(_BYTE *)(this + 22393) = 1; /*0x508de0*/
  return v10; /*0x508de7*/
}
}
// 0x508DF0
namespace gamemd {
void * HouseClass::CanTogglePower()
{
  #375 *result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // [esp+0h] [ebp-Ch]

  *(_BYTE *)(this + 22393) = 0; /*0x508df0*/
  result = HouseClass_Player; /*0x508df7*/
  if ( (#375 *)this == HouseClass_Player ) /*0x508e01*/
  {
    v2 = *(_DWORD *)(this + 696); /*0x508e07*/
    v3 = *(_DWORD *)(this + 688); /*0x508e10*/
    LOBYTE(v10) = 0; /*0x508e1a*/
    if ( v3 != -1 ) /*0x508e1f*/
    {
      if ( (int)g_CurrentFrame - v3 >= v2 ) /*0x508e2b*/
        goto LABEL_6; /*0x508e2b*/
      v2 -= (int)g_CurrentFrame - v3; /*0x508e2d*/
    }
    if ( v2 ) /*0x508e31*/
    {
  LABEL_30:
      result = (#375 *)HouseClass::updateAlliedStatus(&MapClass_Instance); /*0x508f2f*/
      if ( (_BYTE)result != (_BYTE)v10 ) /*0x508f43*/
        return (#375 *)HouseClass::SetRadarVisibility(v10); /*0x508f4f*/
      return result; /*0x508f4f*/
    }
  LABEL_6:
    if ( *((_BYTE *)g_ScenarioClass_Instance + 13476) ) /*0x508e3c*/
      goto LABEL_29; /*0x508e3c*/
    v4 = *(_DWORD *)(this + 21412); /*0x508e4a*/
    v5 = *(_DWORD *)(this + 21416); /*0x508e50*/
    if ( v4 >= v5 || !v5 || v4 && (double)*(int *)(this + 21412) / (double)*(int *)(this + 21416) >= 1.0 ) /*0x508e81*/
    {
      v6 = *(_DWORD *)(this + 120); /*0x508e87*/
      v7 = 0; /*0x508e8a*/
      if ( v6 > 0 ) /*0x508e8e*/
      {
        v8 = *(_DWORD **)(this + 108); /*0x508e94*/
        while ( 1 ) /*0x508e9d*/
        {
          v9 = *v8; /*0x508e9d*/
          if ( *v8 /*0x508f06*/
            && *(_BYTE *)(v9 + 1632)
            && *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5796)
            && !*(_BYTE *)(v9 + 129)
            && *(_BYTE *)(v9 + 116)
            && (!g_GameMode_Current[0] && !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493)
             || *(_BYTE *)(v9 + 1051)
             || g_GameMode_Current[0])
            && *(_DWORD *)(v9 + 172) != 19
            && *(_DWORD *)(v9 + 180) != 19 )
          {
            break; /*0x508f06*/
          }
          ++v7; /*0x508f08*/
          ++v8; /*0x508f09*/
          if ( v7 >= v6 ) /*0x508f0e*/
            goto LABEL_30; /*0x508f0e*/
        }
        if ( !*(_DWORD *)(v9 + 1284) && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 468))(*v8) ) /*0x508f20*/
  LABEL_29:
          LOBYTE(v10) = 1; /*0x508f2a*/
      }
    }
    goto LABEL_30; /*0x508f2a*/
  }
  return result; /*0x508f54*/
}
}
// 0x5098F0
namespace gamemd {
CellStruct * * HouseClass::UpdateAITryFireSW()
{
  int v2; // eax
  int i; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(v2) = *(_BYTE *)(this + 492); /*0x5098fe*/
  if ( !g_GameMode_Current[0] ) /*0x509904*/
    LOBYTE(v2) = (_BYTE)v2 || *(_BYTE *)(this + 493); /*0x509918*/
  if ( !(_BYTE)v2 )
  {
    v2 = *(_DWORD *)(this + 612); /*0x509922*/
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i); /*0x509939*/
      if ( v4 && *(_BYTE *)(v4 + 111) )
      {
        switch ( *(_DWORD *)(*(_DWORD *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i); /*0x509968*/
            if ( *(_DWORD *)(this + 22016) != -1 )
            {
              v5 = *(_WORD *)(this + 21744) == (unsigned __int16)g_ControlGroupState; /*0x509980*/
              v11 = g_ControlGroupState; /*0x509987*/
              if ( v5 && *(_WORD *)(this + 21746) == HIWORD(g_ControlGroupState) )
              {
                v7 = *(_DWORD *)(this + 21740) == 1
                   ? HouseClass::FindSWBuilding((_DWORD *)this, &v13)
                   : HouseClass::FindSWTarget((void *)this, &v14, *(_DWORD *)(this + 21740));
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = *(_DWORD *)(this + 21744); /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != g_ControlGroupState ) /*0x5099d8*/
                goto LABEL_32; /*0x5099d8*/
            }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm(this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom(this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator(this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = *(_WORD *)(this + 21752) == (unsigned __int16)g_ControlGroupState; /*0x509a4b*/
            v12 = *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i); /*0x509a52*/
            v11 = g_ControlGroupState; /*0x509a56*/
            if ( !v5 || *(_WORD *)(this + 21754) != HIWORD(g_ControlGroupState) ) /*0x509a63*/
            {
              v8 = *(_DWORD *)(this + 21752); /*0x509a65*/
              goto LABEL_31; /*0x509a6b*/
            }
            if ( *(_DWORD *)(this + 21748) != g_ControlGroupState /*0x509a99*/
              && g_RulesClass_Instance->AIExtraRefineries[2] + *(_DWORD *)(this + 21756) > (int)g_CurrentFrame )
            {
              v8 = *(_DWORD *)(this + 21748); /*0x509a9b*/
  LABEL_31:
              v11 = v8; /*0x509aa1*/
              if ( v8 != g_ControlGroupState ) /*0x509aa8*/
              {
  LABEL_32:
                v9 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(this + 596) + 16))(this + 596, &v12); /*0x509aca*/
                SuperWeapon::FireSuperWeaponHouseClass((#375 *)this, v9, (int)&v11); /*0x509acd*/
              }
              break; /*0x509acd*/
            }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      v2 = *(_DWORD *)(this + 612); /*0x509ad2*/
    }
  }
  return v2; /*0x509ae2*/
}
}
// 0x50BC90
namespace gamemd {
int HouseClass::CreatePowerOutage(int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = g_CurrentFrame; /*0x50bc90*/
  *(_BYTE *)(this + 22392) = 1; /*0x50bc9c*/
  *(_DWORD *)(this + 676) = v2; /*0x50bcaa*/
  *(_DWORD *)(this + 680) = v4; /*0x50bcb4*/
  *(_DWORD *)(this + 684) = a2; /*0x50bcb7*/
  return v4; /*0x50bcba*/
}
}
// 0x50BCD0
namespace gamemd {
int HouseClass::CreateRadarOutage(int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = g_CurrentFrame; /*0x50bcd0*/
  *(_BYTE *)(this + 22393) = 1; /*0x50bcdc*/
  *(_DWORD *)(this + 688) = v2; /*0x50bcea*/
  *(_DWORD *)(this + 692) = v4; /*0x50bcf4*/
  *(_DWORD *)(this + 696) = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/
}
}
// 0x50D320
namespace gamemd {
void HouseClass_RespawnStartingBuildings()
{
  int result; // eax
  __int16 *v6; // edi
  int v7; // esi
  __int16 *v8; // ebx
  _DWORD *v9; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  int v14; // esi
  void *v15; // eax
  _DWORD *v16; // eax
  int i; // [esp+10h] [ebp-20h]
  int v21[3]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v22[4]; // [esp+20h] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h] BYREF

  result = *(_DWORD *)(a1 + 380) - 1; /*0x50d32c*/
  for ( i = result; i >= 0; --i )
  {
    v6 = *(__int16 **)(*(_DWORD *)(a1 + 368) + 4 * result); /*0x50d340*/
    v7 = *(_DWORD *)v6; /*0x50d343*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v6 + 44))(*(_DWORD *)v6) == 7 )
    {
      v8 = v6 + 2; /*0x50d355*/
      v9 = CellCoord::To_CellObj(&MapClass_Instance, v6 + 2); /*0x50d35e*/
      v10 = Cell::IsBridge(v9); /*0x50d365*/
      if ( v10 && (v11 = v10[328], v11 == v7) && v10[135] == a1 )
      {
        v12 = *v10; /*0x50d386*/
        v21[0] = -*(_DWORD *)(v11 + 160); /*0x50d38a*/
        (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(v12 + 364))( /*0x50d3ac*/
          v10,
          v21,
          0,
          g_RulesClass_Instance->SilverCrate[5],
          0,
          0,
          0,
          0);
      }
      else
      {
        v13 = (*(int (__thiscall **)(int, int, _DWORD *, int, _UNKNOWN **))(*(_DWORD *)v7 + 140))(v7, a1, a3, a4, a2); /*0x50d3bf*/
        if ( v13 )
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 6 ? v13 : 0;
        else
          v14 = 0; /*0x50d3c5*/
        v15 = CellCoord::To_CellObj(&MapClass_Instance, v8); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v16 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 72))(v15); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v22[0] = *v16; /*0x50d3f8*/
        v22[1] = v16[1]; /*0x50d3ff*/
        a3 = v22; /*0x50d40a*/
        v22[2] = v16[2]; /*0x50d40b*/
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 1168))(v14) ) /*0x50d413*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 248))(v14); /*0x50d421*/
      }
    }
    result = i - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}
}
// 0x50D440
namespace gamemd {
int HouseClass::RespawnStartingForces(TechnoClass * aP0, _UNKNOWN ** a1, unsigned int * a2, int a4)
{
  int result; // eax
  int v6; // edi
  __int16 *v7; // ebp
  int v8; // esi
  int v9; // eax
  void *v10; // eax
  _DWORD *v11; // eax
  int v15; // [esp+10h] [ebp-1Ch]
  _DWORD v16[4]; // [esp+1Ch] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  result = *(_DWORD *)(a1 + 380) - 1; /*0x50d44c*/
  v15 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v6 = 0; /*0x50d466*/
      v7 = *(__int16 **)(*(_DWORD *)(a1 + 368) + 4 * result); /*0x50d468*/
      v8 = *(_DWORD *)v7; /*0x50d46b*/
      switch ( (*(int (__thiscall **)(_DWORD, _DWORD *, int, _UNKNOWN **))(**(_DWORD **)v7 + 44))(
                 *(_DWORD *)v7,
                 a3,
                 a4,
                 a2) )
      {
        case 3:
        case 7:
        case 40:
          v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 140))(v8, a1); /*0x50d491*/
          if ( v9 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v6 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 140))(v8, a1); /*0x50d4a4*/
          if ( v9 )
  LABEL_9:
            v6 = (*(_BYTE *)(v9 + 20) & 1) != 0 ? v9 : 0;
          else
            v6 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v10 = CellCoord::To_CellObj(&MapClass_Instance, v7 + 2); /*0x50d4c0*/
      a2 = &retaddr; /*0x50d4d4*/
      v11 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 72))(v10); /*0x50d4d7*/
      a4 = 0; /*0x50d4dc*/
      v16[0] = *v11; /*0x50d4de*/
      v16[1] = v11[1]; /*0x50d4e5*/
      a3 = v16; /*0x50d4f0*/
      v16[2] = v11[2]; /*0x50d4f1*/
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1168))(v6) ) /*0x50d4f9*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x50d507*/
      result = --v15; /*0x50d511*/
      if ( v15 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v15; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/
}
}
// 0x50D9E0
namespace gamemd {
int HouseClass::GetInfSelfHealStep()
{
  return *(this + 89) * g_RulesClass_Instance->SelfHealInfantryAmount; /*0x50d9ef*/
}
}
// 0x50D9F0
namespace gamemd {
int HouseClass::GetUnitSelfHealStep()
{
  return *(this + 90) * g_RulesClass_Instance->SelfHealUnitAmount; /*0x50d9ff*/
}
}
// 0x50E0E0
namespace gamemd {
void HouseClass::LostPoweredCenter(int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // esi

  v3 = *(_DWORD *)(this + 728) - 1; /*0x50e0eb*/
  *(_DWORD *)(this + 728) = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = g_SidebarState - 1; /*0x50e10b*/
      if ( g_SidebarState - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((_DWORD *)g_TechnoClass_Count + v5); /*0x50e11d*/
          if ( *(_DWORD *)(v6 + 540) == this /*0x50e138*/
            && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 132))(*((_DWORD *)g_TechnoClass_Count + v5)) == a2
            && !*(_BYTE *)(v6 + 129) )
          {
            TechnoClass::Deactivate((_DWORD *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && g_WTFMode ) /*0x50e15a*/
        {
          if ( g_GameMode_Current[0] ) /*0x50e163*/
          {
            if ( (#375 *)this != HouseClass_Player ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e16f*/
          {
  LABEL_16:
            if ( !g_IKnowWhatImDoing ) /*0x50e18f*/
              VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1); /*0x50e19b*/
          }
        }
      }
    }
  }
}
}
// 0x5471B0
namespace gamemd {
int HouseClass::GetCameoTypeIndex(int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x5471b2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x5471d3*/
    return *(char *)(v3 + 42); /*0x5471d5*/
  else
    return 0; /*0x5471dc*/
}
}
// 0x5D70F0
namespace gamemd {
AbstractClass * * HouseClass::AIDecision(ObjectClass * aP0, int * a1)
{
  int v2; // ebp
  int v3; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edx
  int v22; // esi
  void **v23; // eax
  int *v24; // edi
  __int16 *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  void **v30; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-28h]
  int v33; // [esp+24h] [ebp-24h]
  int v34; // [esp+28h] [ebp-20h]
  int v35; // [esp+2Ch] [ebp-1Ch]
  void **v36; // [esp+30h] [ebp-18h] BYREF
  void *v37; // [esp+34h] [ebp-14h]
  int v38; // [esp+38h] [ebp-10h]
  char v39; // [esp+3Dh] [ebp-Bh]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a1 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a1; /*0x5d710d*/
  ((void (__stdcall *)(_DWORD, _DWORD))UnitTypeVector::Construct2)(0, 0); /*0x5d7111*/
  v36 = &DynamicVectorClass<UnitTypeClass *>::`vftable'; /*0x5d711c*/
  v41 = 10; /*0x5d7124*/
  v40 = 0; /*0x5d712c*/
  ((void (__stdcall *)(_DWORD, _DWORD))InfantryTypeVector::ConstructFromData)(0, 0); /*0x5d7130*/
  v3 = 10; /*0x5d7139*/
  v30 = &DynamicVectorClass<InfantryTypeClass *>::`vftable'; /*0x5d713e*/
  v35 = 10; /*0x5d7146*/
  v4 = *((_DWORD *)aP0 + 13); /*0x5d714a*/
  v34 = 0; /*0x5d714d*/
  v5 = 1 << *(_DWORD *)(v4 + 180); /*0x5d7161*/
  if ( g_CrateCount <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = v38; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *((_DWORD *)g_UnitTypeCount2 + v2); /*0x5d7175*/
    if ( *(_BYTE *)(v7 + 1749) && (v5 & *(_DWORD *)(v7 + 1740)) != 0 && *(_DWORD *)(v7 + 1588) <= *((_DWORD *)aP0 + 117) ) /*0x5d719e*/
    {
      v8 = 0; /*0x5d71a6*/
      v9 = g_RulesClass_Instance->AICaptureLowMoney[1]; /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
  LABEL_11:
        if ( v40 < v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v39 || !v6) && v41 > 0 ) /*0x5d71dc*/
        {
          if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v6, 0) ) /*0x5d71eb*/
          {
  LABEL_16:
            v11 = v40++; /*0x5d71f2*/
            *((_DWORD *)v37 + v11) = v7; /*0x5d7201*/
          }
          v6 = v38; /*0x5d7204*/
        }
      }
      else
      {
        v10 = (_DWORD *)g_RulesClass_Instance->AICaptureLowPower[2]; /*0x5d71b2*/
        while ( *v10 != v7 ) /*0x5d71ba*/
        {
          ++v8; /*0x5d71bc*/
          ++v10; /*0x5d71bd*/
          if ( v8 >= v9 ) /*0x5d71c2*/
            goto LABEL_11; /*0x5d71c2*/
        }
      }
    }
    ++v2; /*0x5d7208*/
  }
  while ( v2 < g_CrateCount ); /*0x5d7210*/
  v3 = v35; /*0x5d7216*/
  LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( g_LoadScreenProgress > 0 ) /*0x5d7223*/
  {
    v13 = v32; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *((_DWORD *)Factory_ExitCellTable + v12); /*0x5d7239*/
      if ( *(_BYTE *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(_DWORD *)(v14 + 1740)) != 0
        && *(_DWORD *)(v14 + 1588) <= *((_DWORD *)aP0 + 117) )
      {
        if ( v34 < v13 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (BYTE1(v33) || !v13) && v3 > 0 ) /*0x5d7274*/
          break; /*0x5d7274*/
      }
  LABEL_33:
      if ( ++v12 >= g_LoadScreenProgress ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      v3 = v35; /*0x5d722f*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v3 + v13, 0) ) /*0x5d7283*/
    {
  LABEL_31:
      v15 = v34++; /*0x5d728a*/
      *((_DWORD *)Block + v15) = v14; /*0x5d7299*/
    }
    v13 = v32; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
  LABEL_34:
  v16 = v40; /*0x5d72ab*/
  if ( v40 || v34 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a1; /*0x5d731f*/
    if ( *a1 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v16 - 1); /*0x5d735f*/
          v21 = v37; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v34 - 1); /*0x5d737e*/
          v21 = Block; /*0x5d7383*/
        }
        v22 = v21[v20]; /*0x5d7387*/
        v23 = (void **)(*(int (__thiscall **)(int, #375 *))(*(_DWORD *)v22 + 140))(v22, aP0); /*0x5d7393*/
        v24 = (int *)__RTDynamicCast( /*0x5d73b4*/
                       v23,
                       0,
                       &ObjectClass `RTTI Type Descriptor',
                       &TechnoClass `RTTI Type Descriptor',
                       0);
        CurrentOption = (__int16 *)HouseClass::GetCurrentOption(aP0, &v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition(v24, CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a1; /*0x5d73eb*/
          *a1 -= v27; /*0x5d73f3*/
          if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag(v24 + 84, 1); /*0x5d740a*/
          if ( (unsigned __int8)House::IsCurrentPlayer(aP0) ) /*0x5d7411*/
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (__thiscall **)(int *, int))(*v24 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a1; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v40; /*0x5d732b*/
      }
    }
    v30 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d7446*/
    if ( Block && BYTE1(v33) ) /*0x5d7456*/
    {
      __3_YAXPAX_Z(Block); /*0x5d7459*/
      Block = 0; /*0x5d7461*/
    }
    BYTE1(v33) = 0; /*0x5d7469*/
    v32 = 0; /*0x5d7470*/
    v36 = &VectorClass<UnitTypeClass *>::`vftable'; /*0x5d7474*/
    if ( v37 && v39 ) /*0x5d7484*/
      __3_YAXPAX_Z(v37); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  v30 = &VectorClass<InfantryTypeClass *>::`vftable'; /*0x5d72bf*/
  if ( Block && BYTE1(v33) ) /*0x5d72d1*/
  {
    __3_YAXPAX_Z(Block); /*0x5d72d4*/
    Block = 0; /*0x5d72dc*/
  }
  BYTE1(v33) = 0; /*0x5d72e4*/
  v32 = 0; /*0x5d72eb*/
  v36 = &VectorClass<UnitTypeClass *>::`vftable'; /*0x5d72ef*/
  if ( v37 ) /*0x5d72f7*/
  {
    if ( v39 ) /*0x5d72ff*/
      __3_YAXPAX_Z(v37); /*0x5d7302*/
  }
  return 0; /*0x5d730a*/
}
}
// 0x5D74A0
namespace gamemd {
int HouseClass::InitAlliances()
{
  int v0; // edx
  _DWORD *v1; // eax
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v8; // [esp+0h] [ebp-4h]

  v0 = HouseClass_Count; /*0x5d74a1*/
  if ( HouseClass_Count <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  v1 = HouseClass_Array; /*0x5d74af*/
  v2 = 1; /*0x5d74b8*/
  v3 = 0; /*0x5d74bd*/
  v8 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v4 = v1[v3]; /*0x5d74c3*/
    if ( !*(_BYTE *)(*(_DWORD *)(v4 + 52) + 422) ) /*0x5d74c9*/
    {
      v5 = *(_DWORD *)(v4 + 90204); /*0x5d74d4*/
      if ( v5 != -2 && v5 != -1 && v2 < v0 ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v6 = v1[v2]; /*0x5d74e8*/
          if ( !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422) && *(_DWORD *)(v1[v3] + 90204) == *(_DWORD *)(v6 + 90204) ) /*0x5d7509*/
          {
            HouseClass::HandleAlliance(v4, v6, 0); /*0x5d7510*/
            HouseClass::HandleAlliance(v6, v4, 0); /*0x5d751a*/
            v1 = HouseClass_Array; /*0x5d751f*/
          }
          v0 = HouseClass_Count; /*0x5d7524*/
          ++v2; /*0x5d752a*/
        }
        while ( v2 < HouseClass_Count ); /*0x5d752d*/
        v2 = v8; /*0x5d752f*/
      }
    }
    ++v2; /*0x5d7533*/
    ++v3; /*0x5d7534*/
    v8 = v2; /*0x5d7537*/
  }
  while ( v2 - 1 < v0 ); /*0x5d7540*/
  return 1; /*0x5d7549*/
}
}
// 0x5EE9D0
namespace gamemd {
AbstractClass * * HouseClass::FindStartPositions()
{
  int v0; // eax
  _DWORD *v1; // ecx
  int v2; // eax
  int i; // edi
  int v4; // esi
  char v5; // bl
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  int *started; // eax
  int v10; // edi
  int v11; // esi
  int *v12; // eax
  int v13; // [esp+0h] [ebp-34h] BYREF
  int v14; // [esp+4h] [ebp-30h] BYREF
  int v15; // [esp+8h] [ebp-2Ch] BYREF
  _BYTE v16[16]; // [esp+Ch] [ebp-28h] BYREF
  void **v17; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v19; // [esp+29h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v17); /*0x5ee9d9*/
  v0 = 0; /*0x5ee9e4*/
  v1 = (char *)g_ScenarioClass_Instance + 4480; /*0x5ee9e6*/
  do /*0x5eea04*/
    v16[v0++] = *v1++ != -1; /*0x5ee9f1*/
  while ( v0 < 16 ); /*0x5eea04*/
  v2 = HouseClass_Count; /*0x5eea06*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5eea11*/
  {
    v4 = *(_DWORD *)&HouseClass_Array->gap0[4 * i]; /*0x5eea1f*/
    if ( !*(_BYTE *)(*(_DWORD *)(v4 + 52) + 422) && *(_BYTE *)(v4 + 492) ) /*0x5eea33*/
    {
      v5 = 0; /*0x5eea47*/
      v6 = -1; /*0x5eea49*/
      v7 = 0; /*0x5eea4c*/
      v8 = (char *)g_ScenarioClass_Instance + 4480; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v8 == i ) /*0x5eea56*/
        {
          v5 = 1; /*0x5eea58*/
          v6 = v7; /*0x5eea5a*/
        }
        ++v7; /*0x5eea5c*/
        ++v8; /*0x5eea5d*/
      }
      while ( v7 < 16 ); /*0x5eea63*/
      if ( v5 ) /*0x5eea67*/
      {
        HouseClass::SetMapSeed((_DWORD *)v4, *((_DWORD *)Block + v6)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v13, i, (int)&v17, (int)v16, 1); /*0x5eea8d*/
        HouseClass::SetMapSeed((_DWORD *)v4, *started); /*0x5eea97*/
        HouseClass::GetCurrentOption((_DWORD *)v4, &v14); /*0x5eeaa3*/
        HouseClass::GetCurrentOption((_DWORD *)v4, &v15); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    v2 = HouseClass_Count; /*0x5eeadb*/
  }
  v10 = 0; /*0x5eeaeb*/
  if ( v2 > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v11 = *(_DWORD *)&HouseClass_Array->gap0[4 * v10]; /*0x5eeafb*/
      if ( !*(_BYTE *)(*(_DWORD *)(v11 + 52) + 422) && !*(_BYTE *)(v11 + 492) ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v12 = AssignRandomMapStartPositions(&v15, v10, (int)&v17, (int)v16, 0); /*0x5eeb39*/
        HouseClass::SetMapSeed((_DWORD *)v11, *v12); /*0x5eeb43*/
        HouseClass::GetCurrentOption((_DWORD *)v11, &v14); /*0x5eeb4f*/
        HouseClass::GetCurrentOption((_DWORD *)v11, &v13); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v10; /*0x5eeb7b*/
    }
    while ( v10 < HouseClass_Count ); /*0x5eeb7e*/
  }
  v17 = &VectorClass<Cell>::`vftable'; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v19 ) /*0x5eeb9c*/
      __3_YAXPAX_Z(Block); /*0x5eeb9f*/
  }
}
}
// 0x740DF0
namespace gamemd {
int HouseClass::SetPrimaryFactory(int a2)
{
  if ( a2 == -1 || *(this + 435) != -1 ) /*0x740e00*/
    return 0; /*0x740e17*/
  *(this + 435) = a2; /*0x740e02*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 2); /*0x740e0c*/
  return 1; /*0x740e14*/
}
}
// 0x429210
namespace gamemd {
int HouseClass::QueryInterface_Helper()
{
  if ( !a3 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(a2, &unk_7F7CA0, 0x10u) && memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *a3 = a1; /*0x42925c*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x429261*/
  return 0; /*0x42921a*/
}
} // namespace gamemd

// 0x429270
namespace gamemd {
int HouseClass::QueryInterface_Dispatch()
{
  void **v4; // eax
  int v6; // ebx

  v4 = a4; /*0x429270*/
  if ( !a4 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *a4 = 0; /*0x42928c*/
  if ( a2 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v6 = -2147467262; /*0x4292b4*/
  if ( !memcmp(a3, &unk_7E36C0, 0x10u) || !memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&punk ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v6 = punk.lpVtbl->QueryInterface(&punk, a3, a4); /*0x4292f3*/
    if ( v6 < 0 ) /*0x4292f7*/
      __3_YAXPAX_Z(&punk); /*0x4292fe*/
    v4 = a4; /*0x429306*/
  }
  if ( !memcmp(a3, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&MapClass_Instance ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v6 = MapClass_Instance.lpVtbl->QueryInterface(&MapClass_Instance, a3, v4); /*0x429340*/
    if ( v6 < 0 ) /*0x429344*/
      __3_YAXPAX_Z(&MapClass_Instance); /*0x42934b*/
  }
  return v6; /*0x42927c*/
}
} // namespace gamemd

// 0x42F380
namespace gamemd {
int HouseClass::FailedToPlaceNode(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1; /*0x42f380*/
  if ( a1 ) /*0x42f386*/
  {
    v2 = *(_DWORD *)(a1 + 12) + 1; /*0x42f38e*/
    *(_DWORD *)(a1 + 12) = v2; /*0x42f38f*/
    return v2; /*0x42f392*/
  }
  return result; /*0x42f388*/
}
} // namespace gamemd

// 0x4E8240
namespace gamemd {
int HouseClass::vt_placeholder_00()
{
  return 1; /*0x4e8245*/
}
} // namespace gamemd

// 0x4E8250
namespace gamemd {
int HouseClass::vt_placeholder_01()
{
  return 1; /*0x4e8255*/
}
} // namespace gamemd

// 0x4E8260
namespace gamemd {
int HouseClass::vt_placeholder_02()
{
  return 0; /*0x4e8262*/
}
} // namespace gamemd

// 0x4E8270
namespace gamemd {
std::locale::facet * HouseClass::initAngerStruct(char a2)
{
  *(_DWORD *)this = &VersionClass::`vftable'; /*0x4e8279*/
  if ( (a2 & 1) != 0 ) /*0x4e827f*/
    __3_YAXPAX_Z(this); /*0x4e8282*/
  return this; /*0x4e828c*/
}
} // namespace gamemd

// 0x4F28A0
namespace gamemd {
int HouseClass_24::Seek(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4f28aa*/
}
} // namespace gamemd

// 0x4F28C0
namespace gamemd {
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{
  *(_DWORD *)this = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f28c9*/
  if ( (a2 & 1) != 0 ) /*0x4f28cf*/
    __3_YAXPAX_Z(this); /*0x4f28d2*/
  return this; /*0x4f28dc*/
}
} // namespace gamemd

// 0x4F28E0
namespace gamemd {
char HouseClass_24::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x4f28e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4f28ed*/
  {
    v3 = 0; /*0x4f28ef*/
    if ( v2 <= 0 ) /*0x4f28f3*/
      return 1; /*0x4f2913*/
    v4 = (_DWORD *)*(this + 1); /*0x4f28f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4f28fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4f2904*/
    {
      ++v3; /*0x4f2906*/
      ++v4; /*0x4f2907*/
      if ( v3 >= v2 ) /*0x4f290c*/
        return 1; /*0x4f290c*/
    }
  }
  return 0; /*0x4f290e*/
}
} // namespace gamemd

// 0x4F2920
namespace gamemd {
char HouseClass_24::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4f292c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4f2936*/
    if ( a3 ) /*0x4f293c*/
      v4 = a3; /*0x4f2952*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4f294e*/
    *((_BYTE *)this + 12) = 1; /*0x4f2956*/
    if ( v4 ) /*0x4f295a*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x4f2965*/
      {
        v6 = *((_DWORD *)this + 2); /*0x4f296c*/
        if ( a2 < v6 ) /*0x4f2971*/
          v6 = a2; /*0x4f2973*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x4f2979*/
          ++i; /*0x4f297e*/
        if ( *((_BYTE *)this + 13) ) /*0x4f298b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4f2996*/
          *((_DWORD *)this + 1) = 0; /*0x4f299e*/
        }
      }
      *((_DWORD *)this + 1) = v4; /*0x4f29a7*/
      *((_DWORD *)this + 2) = a2; /*0x4f29af*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4f29b2*/
      return 1; /*0x4f29b8*/
    }
    else
    {
      return 0; /*0x4f295f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4f29c2*/
    return 1; /*0x4f29c8*/
  }
}
} // namespace gamemd

// 0x4F29D0
namespace gamemd {
void HouseClass_24::ddtor()
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4f29dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4f29e3*/
    *(_DWORD *)(this + 4) = 0; /*0x4f29eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4f29ee*/
  *(_DWORD *)(this + 8) = 0; /*0x4f29f1*/
}
} // namespace gamemd

// 0x4F2A00
namespace gamemd {
int HouseClass_24::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4f2a00*/
    return 0; /*0x4f2a08*/
  v3 = *(_DWORD *)(this + 8); /*0x4f2a0e*/
  result = 0; /*0x4f2a11*/
  if ( v3 <= 0 ) /*0x4f2a15*/
    return -1; /*0x4f2a2c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4f2a1b*/
  {
    if ( ++result >= v3 ) /*0x4f2a2a*/
      return -1; /*0x4f2a2a*/
  }
  return result; /*0x4f2a0a*/
}
} // namespace gamemd

// 0x4F2A40
namespace gamemd {
unsigned int HouseClass_24::Write(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4f2a40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4f2a55*/
  else
    return 0; /*0x4f2a47*/
}
} // namespace gamemd

// 0x4F2B40
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_09()
{
  ++*(this + 2); /*0x4f2b42*/
  return this; /*0x4f2b45*/
}
} // namespace gamemd

// 0x4F2B50
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_10()
{
  --*(this + 2); /*0x4f2b52*/
  return this; /*0x4f2b55*/
}
} // namespace gamemd

// 0x4F2B60
namespace gamemd {
VectorClass * HouseClass_24::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4f2b63*/
  *this = &VectorClass<GraphicMenuItem *>::`vftable'; /*0x4f2b66*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4f2b70*/
  {
    __3_YAXPAX_Z(v3); /*0x4f2b78*/
    *(this + 1) = 0; /*0x4f2b80*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4f2b8b*/
  *(this + 2) = 0; /*0x4f2b91*/
  if ( (a2 & 1) != 0 ) /*0x4f2b98*/
    __3_YAXPAX_Z(this); /*0x4f2b9b*/
  return this; /*0x4f2ba5*/
}
} // namespace gamemd

// 0x4F6830
namespace gamemd {
int HouseClass::QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a2 ) /*0x4f6836*/
    return -2147467261; /*0x4f6838*/
  *a2 = 0; /*0x4f6859*/
  if ( !memcmp(a1, &IID_IUnknown, 0x10u) ) /*0x4f685f*/
    *a2 = aP0; /*0x4f6863*/
  if ( !memcmp(a1, &IID_IHouse, 0x10u) ) /*0x4f6874*/
  {
    if ( aP0 ) /*0x4f687a*/
      v4 = aP0 + 36; /*0x4f687c*/
    else
      v4 = 0; /*0x4f6881*/
    *a2 = v4; /*0x4f6883*/
  }
  if ( !memcmp(a1, &IID_IPublicHouse, 0x10u) ) /*0x4f6893*/
  {
    if ( aP0 ) /*0x4f6899*/
      v5 = aP0 + 40; /*0x4f689b*/
    else
      v5 = 0; /*0x4f68a0*/
    *a2 = v5; /*0x4f68a2*/
  }
  if ( !memcmp(a1, &unk_7F7CD0, 0x10u) ) /*0x4f68b2*/
  {
    if ( aP0 ) /*0x4f68b8*/
      v6 = aP0 + 44; /*0x4f68ba*/
    else
      v6 = 0; /*0x4f68bf*/
    *a2 = v6; /*0x4f68c1*/
  }
  if ( !memcmp(a1, &IID_IPersist, 0x10u) ) /*0x4f68d1*/
    *a2 = aP0; /*0x4f68d6*/
  if ( !memcmp(a1, &IID_IPersistStream, 0x10u) ) /*0x4f68e6*/
    *a2 = aP0; /*0x4f68ed*/
  if ( !*a2 ) /*0x4f68ef*/
    return -2147467262; /*0x4f68f4*/
  (*(void (__stdcall **)(int))(*(_DWORD *)aP0 + 4))(aP0); /*0x4f68ff*/
  return 0; /*0x4f683d*/
}
} // namespace gamemd

// 0x4F9610
namespace gamemd {
double HouseClass::GiveTiberium_Storage(AbstractClass * aP1, BuildingClass * aP2)
{
  *(this + 5434) = Math::RoundToInt(aP1 * 5.0 + (double)(int)*(this + 5434)); /*0x4f9628*/
  *(this + 195) = Math::RoundToInt( /*0x4f965d*/
                    (double)*(int *)(*(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * aP2] + 184)
                  * *(float *)(*(this + 13) + 328)
                  * aP1
                  + (double)(int)*(this + 195));
  return aP1; /*0x4f9664*/
}
} // namespace gamemd

// 0x4F9970
namespace gamemd {
char HouseClass::UpdateAllSilos(int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  int i; // esi
  int v9; // ecx

  v3 = 0; /*0x4f9976*/
  if ( a3 ) /*0x4f997d*/
    v3 = Math::RoundToInt((double)a2 / (double)a3 * 4.0 + 0.5); /*0x4f9998*/
  v5 = 0; /*0x4f99a0*/
  if ( *(_DWORD *)(this + 784) ) /*0x4f999a*/
  {
    v6 = Float4::Sum((float *)(this + 764)); /*0x4f99ac*/
    v5 = Math::RoundToInt(v6 / (double)*(int *)(this + 784) * 4.0 + 0.5); /*0x4f99c3*/
  }
  if ( v3 != v5 ) /*0x4f99ca*/
  {
    v7 = *(_DWORD *)(this + 120); /*0x4f99cc*/
    for ( i = 0; i < v7; ++i ) /*0x4f99d3*/
    {
      v5 = *(_DWORD *)(this + 108); /*0x4f99d5*/
      v9 = *(_DWORD *)(v5 + 4 * i); /*0x4f99d8*/
      if ( v9 ) /*0x4f99dd*/
      {
        LOBYTE(v5) = *(_BYTE *)(v9 + 129); /*0x4f99df*/
        if ( !(_BYTE)v5 ) /*0x4f99e7*/
        {
          LOBYTE(v5) = *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5800); /*0x4f99ef*/
          if ( (_BYTE)v5 ) /*0x4f99f7*/
            LOBYTE(v5) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 292))(v9, 2); /*0x4f99fd*/
        }
      }
    }
  }
  return v5; /*0x4f9a08*/
}
} // namespace gamemd

// 0x4F9B50
namespace gamemd {
int HouseClass::MakeAlly(int a2, char a3)
{
  return HouseClass::HandleAlliance((int)this, *(_DWORD *)&HouseClass_Array->gap0[4 * a2], a3); /*0x4f9b67*/
}
} // namespace gamemd

// 0x4FB920
namespace gamemd {
unsigned int * HouseClass::SDDTORAllAndTriggers()
{
  int v1; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  _DWORD *result; // eax
  int v6; // esi
  int v7; // ecx

  v1 = 0; /*0x4fb926*/
  if ( g_SidebarState > 0 ) /*0x4fb92d*/
  {
    v3 = g_TechnoClass_Count; /*0x4fb92f*/
    do /*0x4fb959*/
    {
      v4 = (_DWORD *)v3[v1]; /*0x4fb934*/
      if ( (_DWORD *)v4[135] == this ) /*0x4fb93d*/
      {
        if ( v4 ) /*0x4fb941*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v4 + 32))(v4, 1); /*0x4fb947*/
          v3 = g_TechnoClass_Count; /*0x4fb94a*/
        }
        --v1; /*0x4fb94f*/
      }
      ++v1; /*0x4fb956*/
    }
    while ( v1 < g_SidebarState ); /*0x4fb959*/
  }
  result = (_DWORD *)g_ProductionQueueState; /*0x4fb95b*/
  v6 = 0; /*0x4fb960*/
  if ( g_ProductionQueueState > 0 ) /*0x4fb964*/
  {
    result = g_TriggerClassCapacity; /*0x4fb966*/
    do /*0x4fb99b*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(result[v6] + 36) + 164) == *(this + 13) ) /*0x4fb97c*/
      {
        v7 = result[v6]; /*0x4fb97e*/
        if ( v7 ) /*0x4fb983*/
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x4fb989*/
          result = g_TriggerClassCapacity; /*0x4fb98c*/
        }
        --v6; /*0x4fb991*/
      }
      ++v6; /*0x4fb998*/
    }
    while ( v6 < g_ProductionQueueState ); /*0x4fb99b*/
  }
  if ( this ) /*0x4fb99f*/
    return (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 32))(this, 1); /*0x4fb9a7*/
  return result; /*0x4fb9aa*/
}
} // namespace gamemd

// 0x4FBF60
namespace gamemd {
char HouseClass::DroppedFlag(UnitClass * aP1, int a3)
{
  __int16 *v3; // edi
  int v5; // eax
  void *v6; // eax
  char v7; // bl
  void *v8; // eax
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  v3 = aP1; /*0x4fbf63*/
  if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, aP1) ) /*0x4fbf6f*/
    return 0; /*0x4fc055*/
  HouseClass::IsCellOccupied((int)this, *(this + 5367), a3); /*0x4fbf8b*/
  v5 = *(this + 13); /*0x4fbf92*/
  aP1 = *(__int16 **)v3; /*0x4fbf95*/
  v10 = *(_DWORD *)(v5 + 184); /*0x4fbfa3*/
  v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP1); /*0x4fbfaa*/
  v7 = HouseClass::MarkCellBuildable((int)v6, v10); /*0x4fbfb6*/
  if ( v7 /*0x4fc034*/
    || (a3 = 0,
        aP1 = (__int16 *)*LayerClass::Pathfinding_Find(
                           &MapClass_Instance,
                           0,
                           &v12,
                           v3,
                           1,
                           -1,
                           0,
                           0,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (__int16 *)&a3,
                           0,
                           0),
        aP1 != (__int16 *)g_ControlGroupState)
    && (v11 = *(_DWORD *)(*(this + 13) + 184),
        v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP1),
        (v7 = HouseClass::MarkCellBuildable((int)v8, v11)) != 0) )
  {
    *(this + 5367) = (int)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP1); /*0x4fc045*/
  }
  return v7; /*0x4fc04e*/
}
} // namespace gamemd

// 0x4FC060
namespace gamemd {
char HouseClass::PickedUpFlag(ObjectClass * aP1, char a3)
{
  if ( !aP1 || *(_BYTE *)(aP1 + 129) ) /*0x4fc06c*/
    return 0; /*0x4fc0a8*/
  HouseClass::IsCellOccupied((int)this, *(this + 5367), a3); /*0x4fc084*/
  HouseClass::SetPrimaryFactory((_DWORD *)aP1, *(_DWORD *)(*(this + 13) + 184)); /*0x4fc095*/
  *(this + 5367) = aP1; /*0x4fc09a*/
  return 1; /*0x4fc0a0*/
}
} // namespace gamemd

// 0x509130
namespace gamemd {
void HouseClass::AcquiredThreatNode()
{
  *(this + 507) = 1; /*0x509130*/
}
} // namespace gamemd

// 0x50BD10
namespace gamemd {
char HouseClass::ReshroudMap()
{
  char result; // al

  result = *(this + 22394); /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset(&MapClass_Instance, (int)this); /*0x50bd20*/
  return result; /*0x50bd25*/
}
} // namespace gamemd

// 0x50E1B0
namespace gamemd {
BOOL HouseClass::GainedPoweredCenter(int a2)
{
  return *(this + 182) > 0; /*0x50e1bd*/
}
} // namespace gamemd

// 0x50E340
namespace gamemd {
int HouseClass::COMStub_Ret1_1(int a1)
{
  return 1; /*0x50e345*/
}
} // namespace gamemd

// 0x50E350
namespace gamemd {
int HouseClass::COMStub_Ret1_2(int a1)
{
  return 1; /*0x50e355*/
}
} // namespace gamemd

// 0x53A130
namespace gamemd {
char HouseClass::IonSensitivesShouldBeOffline()
{
  return 0; /*0x53a132*/
}
} // namespace gamemd

// 0x54B980
namespace gamemd {
char HouseClass::Set()
{
  _WORD *v2; // eax
  _DWORD *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4); /*0x54b98b*/
  if ( (_BYTE)v2 ) /*0x54b990*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1348))( /*0x54b9a4*/
      *(_DWORD *)(this + 12),
      0,
      1072693248);
    Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v6); /*0x54b9b8*/
    FacingClass::Set_SyncLog((char *)(this + 84), Value); /*0x54b9c1*/
    v4 = *(_DWORD *)(this + 44); /*0x54b9c6*/
    *(_DWORD *)(this + 112) = 0; /*0x54b9cc*/
    *(_DWORD *)(this + 120) = 0; /*0x54b9cf*/
    *(_DWORD *)(this + 116) = 0; /*0x54b9d2*/
    *(_DWORD *)(this + 124) = 0; /*0x54b9d5*/
    *(_DWORD *)(this + 128) = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(_BYTE)v2 ) /*0x54b9ec*/
    {
      v2 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 756))(*(_DWORD *)(this + 12), &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 && v2[1] == MEMORY[0xABC58A] ) /*0x54ba15*/
        LOBYTE(v2) = GadgetGrid::InsertItem(g_CellClassManager, *(_DWORD *)(this + 12)); /*0x54ba20*/
      *(_DWORD *)(this + 80) = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/
}
} // namespace gamemd

// 0x6ABC60
namespace gamemd {
int HouseClass::GetStatus(IUnknown * aP1)
{
  if ( this == (void *)15 || this == (void *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (void *)1 || this == (void *)40 || this == (void *)2 || this == (void *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (void *)6 || this == (void *)7 ) /*0x6abc86*/
    return GetHouseTechLevel() == 5; /*0x6abcb2*/
  if ( this == (void *)57 || this == (void *)32 || this == (void *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/
}
} // namespace gamemd
