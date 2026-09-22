// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"

// 0x6A0310
char WalkLocomotionClass::SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_6A0310(int a1, int a2, unsigned int a3, __int64 a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr00_8
  _DWORD *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  *(_DWORD *)(a1 + 84) = a2; /*0x6a0323*/
  *(_DWORD *)(a1 + 88) = 0; /*0x6a0326*/
  v4 = g_OverlayTypeConfig; /*0x6a032d*/
  if ( a3 != g_OverlayTypeConfig || a4 != DataGlobal_B077FC ) /*0x6a0340*/
  {
    v5 = a1 - 4; /*0x6a0358*/
    v13 = a4; /*0x6a035b*/
    v6 = (unsigned int *)(a1 - 4 + 64); /*0x6a0363*/
    v12 = a3; /*0x6a036a*/
    if ( *v6 != g_OverlayTypeConfig || __PAIR64__(*(_DWORD *)(a1 - 4 + 72), *(_DWORD *)(a1 + 64)) != DataGlobal_B077FC ) /*0x6a0375*/
    {
      *v6 = g_OverlayTypeConfig; /*0x6a0386*/
      *(_DWORD *)(a1 + 64) = DataGlobal_B077FC; /*0x6a038d*/
      v7 = HIDWORD(DataGlobal_B077FC); /*0x6a0390*/
      *(_BYTE *)(v5 + 99) = 0; /*0x6a0396*/
      *(_DWORD *)(a1 - 4 + 72) = v7; /*0x6a039a*/
      v4 = g_OverlayTypeConfig; /*0x6a039d*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(DataGlobal_B077FC, v4) /*0x6a03be*/
      || (LOBYTE(v4) = BYTE4(DataGlobal_B077FC), HIDWORD(a4) != HIDWORD(DataGlobal_B077FC)) )
    {
      v8 = v13; /*0x6a03c4*/
      *(_BYTE *)(v5 + 99) = 1; /*0x6a03ca*/
      *v6 = a3; /*0x6a03ce*/
      *(_QWORD *)(a1 + 64) = v8; /*0x6a03d0*/
      v11 = *(_DWORD *)(v5 + 12); /*0x6a03dd*/
      v9 = Coord::To_Cell(&DataGlobal_87F7E8, &v12); /*0x6a03e4*/
      if ( !CrateClass::ProcessPickup(v9, v11) || *(_BYTE *)(*(_DWORD *)(v5 + 12) + 129) ) /*0x6a03f7*/
      {
        LOBYTE(v4) = *(_BYTE *)(*(_DWORD *)(v5 + 12) + 144); /*0x6a043d*/
        if ( (_BYTE)v4 ) /*0x6a0445*/
        {
          LOBYTE(v4) = g_OverlayTypeConfig; /*0x6a0447*/
          *v6 = g_OverlayTypeConfig; /*0x6a044c*/
          *(_QWORD *)(a1 + 64) = DataGlobal_B077FC; /*0x6a0454*/
          *(_BYTE *)(v5 + 99) = 0; /*0x6a0460*/
        }
      }
      else
      {
        WalkLocomotion::MoveTo(a1 - 4, &v12, 1); /*0x6a040a*/
        LOBYTE(v4) = a1 + 48; /*0x6a040f*/
        *(_DWORD *)(a1 + 48) = a3; /*0x6a041a*/
        *(_QWORD *)(a1 + 52) = a4; /*0x6a041c*/
        *(_DWORD *)(a1 + 76) = 0; /*0x6a0422*/
        *(_DWORD *)(a1 + 80) = 1072693248; /*0x6a0429*/
      }
    }
  }
  return v4; /*0x6a0430*/
}
}

// 0x6A3F50
bool WalkLocomotionClass::IsAtDestination(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_6A3F50(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  _DWORD *v18; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = a1; /*0x6a3f55*/
  v5 = (int *)(*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)a1 + 24))(a1, v21); /*0x6a3f62*/
  v6 = *v5; /*0x6a3f65*/
  v7 = v5[1]; /*0x6a3f67*/
  v8 = v5[2]; /*0x6a3f70*/
  v23 = v6; /*0x6a3f75*/
  v24 = v7; /*0x6a3f79*/
  v25 = v8; /*0x6a3f7d*/
  if ( v6 == g_OverlayTypeConfig && __PAIR64__(v8, v7) == DataGlobal_B077FC ) /*0x6a3f89*/
    return 0; /*0x6a3f89*/
  if ( !*(_BYTE *)(v4 + 92) ) /*0x6a3f97*/
  {
    v9 = *(_DWORD *)(v4 + 84); /*0x6a3fa2*/
    if ( v9 != -1 ) /*0x6a3fa8*/
    {
      v10 = byte_7F2A40[12 * v9]; /*0x6a3fb1*/
      if ( v10 ) /*0x6a3fbb*/
      {
        v11 = 4 * v10; /*0x6a3fc1*/
        v12 = dword_7F296C[v11]; /*0x6a3fc4*/
        if ( v12 > -1 ) /*0x6a3fd3*/
        {
          v13 = (int *)(dword_7F2960[v11] + 12 * v12); /*0x6a3fdc*/
          a1 = v13[2]; /*0x6a3fe2*/
          if ( *(_DWORD *)(v4 + 88) < v12 ) /*0x6a3feb*/
          {
            v14 = v13[1]; /*0x6a3ff3*/
            v20[0] = *v13; /*0x6a3ff6*/
            v20[1] = v14; /*0x6a3fff*/
            v15 = WalkLocomotion::TransformCoords((_DWORD *)(v4 - 4), v21, v20, &a1); /*0x6a4011*/
            v16 = *v15; /*0x6a4016*/
            v17 = v15[1]; /*0x6a4018*/
            v18 = (_DWORD *)(*(_DWORD *)(v4 + 8) + 156); /*0x6a401e*/
            v21[0] = *v18; /*0x6a4025*/
            v21[1] = v18[1]; /*0x6a402c*/
            v22 = v18[2]; /*0x6a4033*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x6a409b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= DataGlobal_B07838 )
            {
              return 1; /*0x6a40a5*/
            }
          }
        }
      }
    }
  }
  return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256) /*0x6a411e*/
      && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
      && (int)abs32(v25 - a4) <= DataGlobal_B07838;
}
}

// 0x75C640
int WalkLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291204;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// 0x75C680
HRESULT WalkLocomotionClass::BeginMove(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    int v4;
    LPVOID *v5;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *((int*)(a1) + 14) = 0;
    *a1 = (int)(unsigned int)vt_WalkLocomotionClass;
    a1[1] = (unsigned int)vt_WalkLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_WalkLocomotionClass;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 14);
    v5 = (LPVOID *)(a1 + 14);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// 0x75C700
HRESULT WalkLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    int IPersistStream;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v12;
    v3 = (IStream *)pPStm;
    v4 = a1;
    IPersistStream = LoadIPersistStream(a1, pPStm, a3);
    if ( IPersistStream < 0 )
    return IPersistStream;
    if ( !v4[14] )
  {
    v12 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[14];
    pPStm = 0;
    if ( v7 )
  {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
    {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
    }
    else
    {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
    }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
  }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
}
}

// 0x75CBD0
int WalkLocomotionClass::StubReturn60()
{
return 60;
}

// 0x75CBE0
WalkLocomotionClass * WalkLocomotionClass::ProcessMove(char a2)
{
{
    ILocomotion *v3;
    *(void**)this = (unsigned int)vt_WalkLocomotionClass;
    *(this + 1) = (unsigned int)vt_WalkLocomotionClass;
    *(this + 6) = (ILocomotion *)&vt_WalkLocomotionClass;
    v3 = *(this + 14);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WalkLocomotionClass *)this;
}
}
