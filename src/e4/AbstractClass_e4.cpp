// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x438E70
namespace gamemd {
void AbstractClass::Initialize(TechnoClass * aP1, TechnoClass * aP2)
{
  AbstractClass *v4; // eax
  AbstractClass *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( aP1 && (*((int (__thiscall **)(#375 **))*aP1 + 11))(aP1) == 15 && aP2 && !aP2[14] ) /*0x438ea3*/
  {
    v4 = (AbstractClass *)__2_YAPAXI_Z(0x5Cu); /*0x438eaf*/
    v5 = v4; /*0x438eb4*/
    if ( v4 ) /*0x438ebb*/
    {
      AbstractClass::Constructor(v4); /*0x438ec3*/
      *(int *)((char *)v5[2].parent_gap + 2) = 0; /*0x438ecb*/
      v5->parent_gap[0] = (int)&BombClass::`vftable'; /*0x438ece*/
      v5->parent_gap[1] = (int)&BombClass::`vftable'; /*0x438ed4*/
      v5->parent_gap[2] = (int)&BombClass::`vftable'; /*0x438edb*/
      v5->parent_gap[3] = (int)&BombClass::`vftable'; /*0x438ee2*/
      *(_DWORD *)&v5->Dirty = 0; /*0x438ee9*/
      *(int *)((char *)v5[1].parent_gap + 3) = 0; /*0x438eec*/
      BYTE2(v5[2].parent_gap[1]) = 0; /*0x438eef*/
      AudioController::Init((int *)((char *)&v5[1].parent_gap[4] + 3)); /*0x438ef2*/
      *(int *)((char *)&v5[1].RefCount + 3) = g_RulesClass_Instance->BunkerWallsDownSound; /*0x438f03*/
      if ( dword_89C678 < dword_89C670 /*0x438f37*/
        || (byte_89C675 || !dword_89C670)
        && dword_89C67C > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
             &dword_89C668,
             dword_89C670 + dword_89C67C,
             0) )
      {
        v6 = dword_89C678++; /*0x438f44*/
        *((_DWORD *)dword_89C66C + v6) = v5; /*0x438f53*/
      }
    }
    else
    {
      v5 = 0; /*0x438f58*/
    }
    *(_DWORD *)&v5->Dirty = (*((int (__thiscall **)(#375 **))*aP1 + 15))(aP1); /*0x438f62*/
    v5->RefCount = (int)aP1; /*0x438f69*/
    *(int *)((char *)v5[1].parent_gap + 3) = (int)aP2; /*0x438f6c*/
    *(int *)((char *)&v5[1].parent_gap[2] + 3) = (int)g_CurrentFrame; /*0x438f75*/
    v7 = *(int *)((char *)&v5[1].parent_gap[2] + 3) + g_RulesClass_Instance->WaterCrate[1]; /*0x438f87*/
    *(int *)((char *)&v5[1].parent_gap[1] + 3) = 0; /*0x438f89*/
    *(int *)((char *)&v5[1].parent_gap[3] + 3) = v7; /*0x438f8c*/
    aP2[14] = v5; /*0x438f8f*/
    v8 = this->vtable3; /*0x438f92*/
    if ( this->u16_A < v8 /*0x438fb4*/
      || (this->q034 || !v8)
      && (v9 = this->abstractFlags, v9 > 0)
      && this->COMStub_Release(v8 + v9, 0) )
    {
      v10 = this->u16_A; /*0x438fbb*/
      v11 = this->vtable2; /*0x438fbe*/
      this->u16_A = v10 + 1; /*0x438fc4*/
      *(_DWORD *)(v11 + 4 * v10) = v5; /*0x438fc7*/
    }
    *(&this->vtable22) = 1; /*0x438fca*/
    if ( g_RulesClass_Instance->RepairBridgeSound != -1 ) /*0x438fde*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(aP1[135]) ) /*0x438fe6*/
      {
        v12[0] = aP2[39]; /*0x438ffc*/
        v12[1] = aP2[40]; /*0x439007*/
        v12[2] = aP2[41]; /*0x439013*/
        StartAudioControllerAt(g_RulesClass_Instance->RepairBridgeSound, (int)v12, 0); /*0x43901d*/
      }
    }
  }
}
}
// 0x44B760
namespace gamemd {
int AbstractClass_COMStub_133()
{
  return IPersistStream::StubReturn450();
}
} // namespace gamemd

// 0x44B770
namespace gamemd {
int AbstractClass_COMStub_137()
{
  return AircraftClass::CheckMissionStatus();
}
} // namespace gamemd

// 0x464AC0
namespace gamemd {
bool BuildingTypeClass::CanPlacePath(unsigned short *a2, int a3)
{
  return this->PlaceAnywhere || BuildingClass::ValidatePath((int *)this, a2, a3); /*0x464aca*/
}
} // namespace gamemd

// 0x4FB9B0
namespace gamemd {
VectorClass * * AbstractClass_RemoveObjectFromHouse()
{
  void **v5; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  void ***result; // eax
  int v43; // ecx

  v5 = a3; /*0x4fb9b2*/
  if ( (void **)a1[5432] == a3 ) /*0x4fb9c1*/
    a1[5432] = 0; /*0x4fb9c3*/
  a3 = (void **)__RTDynamicCast(v5, 0, &AbstractClass `RTTI Type Descriptor', &TagClass `RTTI Type Descriptor', 0); /*0x4fb9e1*/
  if ( a3 ) /*0x4fb9e5*/
  {
    v7 = (*(int (__thiscall **)(_DWORD *, void ***))(a1[14] + 16))(a1 + 14, &a3); /*0x4fb9f4*/
    if ( v7 != -1 ) /*0x4fb9fa*/
    {
      v8 = a1[18]; /*0x4fb9fc*/
      if ( v7 < v8 ) /*0x4fba01*/
      {
        v9 = v8 - 1; /*0x4fba03*/
        for ( a1[18] = v9; v7 < a1[18]; *(_DWORD *)(a1[15] + 4 * v7 - 4) = *(_DWORD *)(a1[15] + 4 * v7) ) /*0x4fba09*/
          ++v7; /*0x4fba0e*/
      }
    }
  }
  if ( (*((int (__thiscall **)(void **))*v5 + 11))(v5) == 6 && (_BYTE)a4 ) /*0x4fba32*/
  {
    v10 = a1[20]; /*0x4fba38*/
    a4 = v5; /*0x4fba45*/
    v11 = (*(int (__thiscall **)(_DWORD *, void ***, int))(v10 + 16))(a1 + 20, &a4, a2); /*0x4fba49*/
    if ( v11 != -1 ) /*0x4fba4f*/
      Vector::RemoveAt(a1 + 20, v11); /*0x4fba54*/
    v12 = a1[32]; /*0x4fba59*/
    a5 = v5; /*0x4fba6c*/
    v13 = (*(int (__thiscall **)(_DWORD *, void ***))(v12 + 16))(a1 + 32, &a5); /*0x4fba70*/
    if ( v13 != -1 ) /*0x4fba76*/
    {
      v14 = a1[36]; /*0x4fba78*/
      if ( v13 < v14 ) /*0x4fba7d*/
      {
        v15 = v14 - 1; /*0x4fba7f*/
        for ( a1[36] = v15; v13 < a1[36]; *(_DWORD *)(a1[33] + 4 * v13 - 4) = *(_DWORD *)(a1[33] + 4 * v13) ) /*0x4fba85*/
          ++v13; /*0x4fba8a*/
      }
    }
    v16 = a1[38]; /*0x4fba99*/
    a5 = v5; /*0x4fbaa9*/
    v17 = (*(int (__thiscall **)(_DWORD *, void ***))(v16 + 16))(a1 + 38, &a5); /*0x4fbab0*/
    if ( v17 != -1 ) /*0x4fbab6*/
      Vector::RemoveAt(a1 + 38, v17); /*0x4fbabb*/
    v18 = a1[44]; /*0x4fbac0*/
    a5 = v5; /*0x4fbad3*/
    v19 = (*(int (__thiscall **)(_DWORD *, void ***))(v18 + 16))(a1 + 44, &a5); /*0x4fbad7*/
    if ( v19 != -1 ) /*0x4fbadd*/
    {
      v20 = a1[48]; /*0x4fbadf*/
      if ( v19 < v20 ) /*0x4fbae4*/
      {
        v21 = v20 - 1; /*0x4fbae6*/
        for ( a1[48] = v21; v19 < a1[48]; *(_DWORD *)(a1[45] + 4 * v19 - 4) = *(_DWORD *)(a1[45] + 4 * v19) ) /*0x4fbaec*/
          ++v19; /*0x4fbaf1*/
      }
    }
    v22 = a1[50]; /*0x4fbb00*/
    a5 = v5; /*0x4fbb10*/
    v23 = (*(int (__thiscall **)(_DWORD *, void ***))(v22 + 16))(a1 + 50, &a5); /*0x4fbb17*/
    if ( v23 != -1 ) /*0x4fbb1d*/
      Vector::RemoveAt(a1 + 50, v23); /*0x4fbb22*/
    v24 = a1[56]; /*0x4fbb27*/
    a5 = v5; /*0x4fbb3a*/
    v25 = (*(int (__thiscall **)(_DWORD *, void ***))(v24 + 16))(a1 + 56, &a5); /*0x4fbb3e*/
    if ( v25 != -1 ) /*0x4fbb44*/
    {
      v26 = a1[60]; /*0x4fbb46*/
      if ( v25 < v26 ) /*0x4fbb4b*/
      {
        v27 = v26 - 1; /*0x4fbb4d*/
        for ( a1[60] = v27; v25 < a1[60]; *(_DWORD *)(a1[57] + 4 * v25 - 4) = *(_DWORD *)(a1[57] + 4 * v25) ) /*0x4fbb53*/
          ++v25; /*0x4fbb58*/
      }
    }
    v28 = a1[62]; /*0x4fbb67*/
    a5 = v5; /*0x4fbb77*/
    v29 = (*(int (__thiscall **)(_DWORD *, void ***))(v28 + 16))(a1 + 62, &a5); /*0x4fbb7e*/
    if ( v29 != -1 ) /*0x4fbb84*/
      Vector::RemoveAt(a1 + 62, v29); /*0x4fbb89*/
    v30 = a1[68]; /*0x4fbb8e*/
    a5 = v5; /*0x4fbba1*/
    v31 = (*(int (__thiscall **)(_DWORD *, void ***))(v30 + 16))(a1 + 68, &a5); /*0x4fbba5*/
    if ( v31 != -1 ) /*0x4fbbab*/
      Vector::RemoveAt(a1 + 68, v31); /*0x4fbbb0*/
    v32 = a1[74]; /*0x4fbbb5*/
    a5 = v5; /*0x4fbbc8*/
    v33 = (*(int (__thiscall **)(_DWORD *, void ***))(v32 + 16))(a1 + 74, &a5); /*0x4fbbcc*/
    if ( v33 != -1 ) /*0x4fbbd2*/
    {
      v34 = a1[78]; /*0x4fbbd4*/
      if ( v33 < v34 ) /*0x4fbbd9*/
      {
        v35 = v34 - 1; /*0x4fbbdb*/
        for ( a1[78] = v35; v33 < a1[78]; *(_DWORD *)(a1[75] + 4 * v33 - 4) = *(_DWORD *)(a1[75] + 4 * v33) ) /*0x4fbbe1*/
          ++v33; /*0x4fbbe6*/
      }
    }
    v36 = a1[80]; /*0x4fbbf5*/
    a5 = v5; /*0x4fbc05*/
    v37 = (*(int (__thiscall **)(_DWORD *, void ***))(v36 + 16))(a1 + 80, &a5); /*0x4fbc0c*/
    if ( v37 != -1 ) /*0x4fbc12*/
      Vector::RemoveAt(a1 + 80, v37); /*0x4fbc17*/
    v38 = a1[26]; /*0x4fbc1c*/
    a5 = v5; /*0x4fbc29*/
    v39 = (*(int (__thiscall **)(_DWORD *, void ***))(v38 + 16))(a1 + 26, &a5); /*0x4fbc2d*/
    if ( v39 != -1 ) /*0x4fbc33*/
    {
      v40 = a1[30]; /*0x4fbc35*/
      if ( v39 < v40 ) /*0x4fbc3a*/
      {
        v41 = v40 - 1; /*0x4fbc3c*/
        for ( a1[30] = v41; v39 < a1[30]; *(_DWORD *)(a1[27] + 4 * v39 - 4) = *(_DWORD *)(a1[27] + 4 * v39) ) /*0x4fbc42*/
          ++v39; /*0x4fbc47*/
      }
    }
    HouseClass::CalculateCostMultipliers(a1); /*0x4fbc58*/
  }
  result = (void ***)(a1 + 132); /*0x4fbc5d*/
  v43 = 12; /*0x4fbc63*/
  do /*0x4fbc73*/
  {
    if ( *result == v5 ) /*0x4fbc6b*/
      *result = 0; /*0x4fbc6d*/
    ++result; /*0x4fbc6f*/
    --v43; /*0x4fbc72*/
  }
  while ( v43 ); /*0x4fbc73*/
  if ( (void **)a1[5355] == v5 ) /*0x4fbc7b*/
    a1[5355] = 0; /*0x4fbc7d*/
  if ( (void **)a1[5356] == v5 ) /*0x4fbc89*/
    a1[5356] = 0; /*0x4fbc8b*/
  if ( (void **)a1[5357] == v5 ) /*0x4fbc97*/
    a1[5357] = 0; /*0x4fbc99*/
  if ( (void **)a1[5358] == v5 ) /*0x4fbca5*/
    a1[5358] = 0; /*0x4fbca7*/
  if ( (void **)a1[5359] == v5 ) /*0x4fbcb3*/
    a1[5359] = 0; /*0x4fbcb5*/
  if ( (void **)a1[5360] == v5 ) /*0x4fbcc1*/
    a1[5360] = 0; /*0x4fbcc3*/
  if ( (void **)a1[5361] == v5 ) /*0x4fbccf*/
    a1[5361] = 0; /*0x4fbcd1*/
  if ( (void **)a1[5362] == v5 ) /*0x4fbcdd*/
    a1[5362] = 0; /*0x4fbcdf*/
  if ( (void **)a1[5363] == v5 ) /*0x4fbceb*/
    a1[5363] = 0; /*0x4fbced*/
  return result; /*0x4fbcf3*/
}
}
// 0x5C03D0
namespace gamemd {
ObjectClass * * AbstractClass_getPathDirection()
{
  char result; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
  int *v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = g_BigIntPool; /*0x5c03d0*/
  if ( g_BigIntPool ) /*0x5c03da*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)DSurface_Alternate + 24))(DSurface_Alternate, 0); /*0x5c03ea*/
    Frame::Present(DSurface_Alternate, a1, a2, a3, 0, v7, v8, v9); /*0x5c03f7*/
    result = TestBitArray(15); /*0x5c0401*/
    if ( !result ) /*0x5c0408*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5c0419*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5c042b*/
      v4 = *(_DWORD *)(g_BigIntPool + 64); /*0x5c0446*/
      v5 = Rect.top + *(_DWORD *)(g_BigIntPool + 56); /*0x5c0449*/
      v6 = *(_DWORD *)(g_BigIntPool + 52); /*0x5c044b*/
      v9 = *(int **)(g_BigIntPool + 60); /*0x5c044e*/
      v8 = v5; /*0x5c0454*/
      v7 = Rect.left + v6; /*0x5c045e*/
      v10 = v4; /*0x5c0462*/
      return (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x5c0477*/
               g_DSurface_Primary,
               &v7,
               *(_DWORD *)(g_BigIntPool + 8),
               g_BigIntPool + 36,
               0,
               1);
    }
  }
  return result; /*0x5c047d*/
}
}
// 0x5D7FD0
namespace gamemd {
unsigned int * AbstractClass::checkVisibility(char a2)
{
  *this = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d7fd9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fdf*/
    __3_YAXPAX_Z(this); /*0x5d7fe2*/
  return this; /*0x5d7fec*/
}
}
// 0x5D8030
namespace gamemd {
unsigned int * AbstractClass::updateVisibilityState(char a2)
{
  *this = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8039*/
  if ( (a2 & 1) != 0 ) /*0x5d803f*/
    __3_YAXPAX_Z(this); /*0x5d8042*/
  return this; /*0x5d804c*/
}
}
// 0x5D8050
namespace gamemd {
unsigned int * AbstractClass::processFogReveal(char a2)
{
  *this = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8059*/
  if ( (a2 & 1) != 0 ) /*0x5d805f*/
    __3_YAXPAX_Z(this); /*0x5d8062*/
  return this; /*0x5d806c*/
}
}
// 0x5D8070
namespace gamemd {
unsigned int * AbstractClass::checkShroudState(char a2)
{
  *this = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8079*/
  if ( (a2 & 1) != 0 ) /*0x5d807f*/
    __3_YAXPAX_Z(this); /*0x5d8082*/
  return this; /*0x5d808c*/
}
}
// 0x5D8090
namespace gamemd {
unsigned int * AbstractClass::updateShroudMap(char a2)
{
  *this = &MultiplayerGameMode::InitializerBase::`vftable'; /*0x5d8099*/
  if ( (a2 & 1) != 0 ) /*0x5d809f*/
    __3_YAXPAX_Z(this); /*0x5d80a2*/
  return this; /*0x5d80ac*/
}
}
// 0x70D4A0
namespace gamemd {
void AbstractClass::ClearTargetToMeClearManagerTarget(int a1)
{
  int v2; // edi
  int i; // ebx
  bool v4; // cl
  _DWORD *v5; // esi
  int v6; // eax
  int j; // ecx
  int v8; // eax

  if ( a1 )
    v2 = (*(_BYTE *)(a1 + 20) & 1) != 0 ? a1 : 0;
  else
    v2 = 0; /*0x70d4a9*/
  for ( i = g_SidebarState - 1; i >= 0; --i ) /*0x70d4c6*/
  {
    v4 = 1; /*0x70d4d2*/
    v5 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + i); /*0x70d4d6*/
    if ( v2 ) /*0x70d4d9*/
    {
      v6 = v5[165]; /*0x70d4db*/
      if ( v6 ) /*0x70d4e3*/
      {
        if ( *(_DWORD *)(v6 + 80) == a1 && *(int *)(v2 + 108) > 0 ) /*0x70d4ef*/
          v4 = *(_BYTE *)(v2 + 144) == 0; /*0x70d4fb*/
      }
    }
    if ( v5[173] == a1 && v4 ) /*0x70d507*/
    {
      (*(void (__thiscall **)(_DWORD))(*v5 + 504))(*((_DWORD *)g_TechnoClass_Count + i)); /*0x70d50d*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2 && v5[43] == 25 ) /*0x70d526*/
      {
        v5[47] = 0; /*0x70d528*/
        *((_BYTE *)v5 + 1746) = 0; /*0x70d532*/
      }
      if ( v5[173] == a1 ) /*0x70d53f*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x70d547*/
    }
  }
  for ( j = g_HouseClass_AIProductionState - 1; j >= 0; --j ) /*0x70d560*/
  {
    v8 = *((_DWORD *)g_TeamClassPool + j); /*0x70d567*/
    if ( *(_DWORD *)(v8 + 60) == a1 ) /*0x70d56d*/
      *(_DWORD *)(v8 + 60) = 0; /*0x70d56f*/
    if ( *(_DWORD *)(v8 + 64) == a1 ) /*0x70d575*/
      *(_DWORD *)(v8 + 64) = 0; /*0x70d577*/
  }
}
}
// 0x7258D0
namespace gamemd {
AbstractClass * * AbstractClass::AnnounceExpiredPointer(AbstractClass * aP0, AbstractClass * aP1)
{
  int v4; // ebx
  int v5; // ebp
  int k; // ebp
  int i; // ebx
  int j; // ebx
  int m; // ebx
  int kk; // ebx
  int jj; // ebx
  int n; // ebx
  int mm; // ebx
  int nn; // ebx
  int ii; // ebx
  int i1; // ebx

  v4 = (*((int (__thiscall **)(void **))*aP0 + 11))(aP0); /*0x7258de*/
  v5 = 0; /*0x7258e9*/
  if ( (void **)g_RadarBlipPool == aP0 ) /*0x7258e7*/
    g_RadarBlipPool = 0; /*0x7258eb*/
  if ( (void **)g_RadarBlipManager == aP0 ) /*0x7258fb*/
  {
    g_RadarBlipManager = 0; /*0x725903*/
    Mouse::SetBounds((int)&MapClass_Instance, 0); /*0x725909*/
  }
  switch ( v4 ) /*0x725911*/
  {
    case 24: /*0x725911*/
      if ( aP0 == (void **)dword_A8ED78 ) /*0x72591d*/
        dword_A8ED78 = 0; /*0x72591f*/
      break;
    case 13: /*0x725911*/
      for ( i = 0; i < dword_B0F6D8; ++i ) /*0x7259e8*/
        (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F6CC + i) + 40))( /*0x7259f7*/
          *((_DWORD *)dword_B0F6CC + i),
          aP0,
          aP1);
      goto LABEL_20; /*0x725a02*/
    case 4: /*0x725911*/
      for ( j = 0; j < g_BuildingTypeInstanceCount; ++j ) /*0x725a28*/
        (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)g_BuildingClassPoolManager + j) + 40))( /*0x725a3a*/
          *((_DWORD *)g_BuildingClassPoolManager + j),
          aP0,
          aP1);
      return; /*0x725a45*/
  }
  if ( aP0 && ((_BYTE)aP0[5] & 2) != 0 ) /*0x725938*/
  {
    if ( g_AlphaShapePool > 0 ) /*0x725945*/
    {
      do /*0x72595f*/
      {
        (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F724 + v5) + 40))( /*0x725954*/
          *((_DWORD *)dword_B0F724 + v5),
          aP0,
          aP1);
        ++v5; /*0x72595c*/
      }
      while ( v5 < g_AlphaShapePool ); /*0x72595f*/
    }
    AbstractClass::processDetection(&dword_87F5D8, (int)aP0); /*0x725967*/
    AbstractClass::processStateTransition(&g_MissionQueueFrame, (int)aP0); /*0x725972*/
    for ( k = dword_8A0218 - 1; k >= 0; --k ) /*0x725981*/
      DiskLaserClass::PointerGotInvalid(*((_DWORD **)dword_8A020C + k), (int)aP0); /*0x72598d*/
    if ( v4 == 15 || v4 == 1 || v4 == 2 ) /*0x7259a2*/
      nullsub_3(aP0); /*0x7259aa*/
    AbstractClass::processRadarEvent(aP0); /*0x7259b1*/
    if ( g_TacticalClass_Instance ) /*0x7259be*/
      ((void (__thiscall *)(LPPERSISTSTREAM, void **, int))g_TacticalClass_Instance->lpVtbl[1].Release)( /*0x7259c5*/
        g_TacticalClass_Instance,
        aP0,
        1);
  LABEL_20:
    Array::RemoveItemByValue((int)aP0, aP1); /*0x7259c8*/
    return; /*0x7259d9*/
  }
  if ( __RTDynamicCast(aP0, 0, &AbstractClass `RTTI Type Descriptor', &AbstractTypeClass `RTTI Type Descriptor', 0) ) /*0x725a5a*/
  {
    for ( m = 0; m < g_AnimManager; ++m ) /*0x725a6f*/
      (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)g_AnimPoolCount + m) + 40))( /*0x725a7d*/
        *((_DWORD *)g_AnimPoolCount + m),
        aP0,
        aP1);
    InitInterfaceStubsCOM(g_RulesClass_Instance); /*0x725a92*/
  }
  else
  {
    switch ( v4 ) /*0x725ab1*/
    {
      case 12: /*0x725ab1*/
        for ( n = 0; n < dword_B0F650; ++n ) /*0x725b34*/
          (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F644 + n) + 40))( /*0x725b42*/
            *((_DWORD *)dword_B0F644 + n),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((int *)&MapClass_Instance, (int)aP0, 1); /*0x725b57*/
        break; /*0x725b61*/
      case 34: /*0x725ab1*/
        for ( ii = 0; ii < dword_B0F5E8; ++ii ) /*0x725bc3*/
          (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F5DC + ii) + 40))( /*0x725bd1*/
            *((_DWORD *)dword_B0F5DC + ii),
            aP0,
            aP1);
        break; /*0x725bdc*/
      case 38: /*0x725ab1*/
        for ( jj = 0; jj < dword_B0F718; ++jj ) /*0x725b05*/
          (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F70C + jj) + 40))( /*0x725b18*/
            *((_DWORD *)dword_B0F70C + jj),
            aP0,
            aP1);
        break; /*0x725b23*/
      case 44: /*0x725ab1*/
        for ( kk = 0; kk < dword_B0F628; ++kk ) /*0x725ac1*/
          (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F61C + kk) + 40))( /*0x725ad0*/
            *((_DWORD *)dword_B0F61C + kk),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((int *)&MapClass_Instance, (int)aP0, 1); /*0x725ae5*/
        Array::RemoveItemByValue((int)aP0, aP1); /*0x725af1*/
        break; /*0x725afb*/
      case 47: /*0x725ab1*/
      case 48: /*0x725ab1*/
        for ( mm = 0; mm < g_TActionClassState; ++mm ) /*0x725b6b*/
          (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F65C + mm) + 40))( /*0x725b7d*/
            *((_DWORD *)dword_B0F65C + mm),
            aP0,
            aP1);
        break; /*0x725b88*/
      case 51: /*0x725ab1*/
        for ( nn = 0; nn < dword_B0F600; ++nn ) /*0x725b99*/
          (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F5F4 + nn) + 40))( /*0x725ba7*/
            *((_DWORD *)dword_B0F5F4 + nn),
            aP0,
            aP1);
        break; /*0x725bb2*/
      case 60: /*0x725ab1*/
        for ( i1 = 0; i1 < dword_B0F700; ++i1 ) /*0x725bed*/
          (*(void (__thiscall **)(_DWORD, void **, int))(**((_DWORD **)dword_B0F6F4 + i1) + 40))( /*0x725bfb*/
            *((_DWORD *)dword_B0F6F4 + i1),
            aP0,
            aP1);
        break; /*0x725c06*/
      default:
        return;
    }
  }
}
}
// 0x410100
namespace gamemd {
int AbstractClass::initVtableBase()
{
  word_887660 = 0; /*0x410102*/
  word_887662 = 0; /*0x410108*/
  return 0; /*0x41010e*/
}
} // namespace gamemd

// 0x4101F0
namespace gamemd {
void AbstractClass::DTOR()
{
  *this = &AbstractClass::`vftable'; /*0x4101f0*/
  this->vtable2 = &AbstractClass::`vftable'; /*0x4101f6*/
  this->vtable3 = &AbstractClass::`vftable'; /*0x4101fd*/
  this->vtable4 = &AbstractClass::`vftable'; /*0x410204*/
}
} // namespace gamemd

// 0x410220
namespace gamemd {
int AbstractClass::GetVtable3(AbstractClass * aP0)
{
  return aP0->vtable4; /*0x410227*/
}
} // namespace gamemd

// 0x410230
namespace gamemd {
int AbstractClass::GenerateUniqueID(int a1)
{
  int result; // eax

  if ( g_ScenarioClass_Instance ) /*0x410238*/
  {
    result = AbstractClass::updateAITimer(); /*0x410246*/
    a1->vtable4 = result; /*0x41024f*/
  }
  else
  {
    a1->vtable4 = 0; /*0x410240*/
    return 0; /*0x41023e*/
  }
  return result; /*0x410243*/
}
} // namespace gamemd

// 0x410320
namespace gamemd {
int AbstractClass::SaveLoad_Prefix(ObjectTypeClass * aP0, ObjectTypeClass * aP1, ObjectTypeClass * aP2)
{
  int *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // [esp-4h] [ebp-18h]

  v3 = aP1; /*0x410321*/
  if ( !aP1 ) /*0x410328*/
    return -2147467261; /*0x41032b*/
  v5 = *aP1; /*0x410338*/
  v8 = aP1; /*0x410343*/
  aP1 = aP0; /*0x410344*/
  result = aP1->IsClean(v8, &aP1, 4, 0); /*0x410348*/
  if ( result >= 0 ) /*0x41034d*/
  {
    v6 = *v3; /*0x410352*/
    v7 = (*(int (__thiscall **)(int *, _DWORD))(*aP0 + 48))(aP0, 0); /*0x410358*/
    result = v3->IsClean(aP0, v7); /*0x41035e*/
    if ( result >= 0 ) /*0x410364*/
    {
      if ( aP2 ) /*0x41036c*/
        *((_BYTE *)aP0 + 32) = 0; /*0x41036e*/
    }
  }
  return result; /*0x41032a*/
}
} // namespace gamemd

// 0x410380
namespace gamemd {
int AbstractClass::SaveLoad_Prefix_0(AbstractClass * aP0, AbstractClass * aP1)
{
  int *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // eax

  v2 = (int *)aP1; /*0x410381*/
  if ( !aP1 ) /*0x410387*/
    return -2147467261; /*0x410389*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(aP1->vtable4)(aP1, &aP1, 4, 0); /*0x41039e*/
  if ( result >= 0 ) /*0x4103a3*/
  {
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, aP1, (int)aP0); /*0x4103b7*/
    v4 = aP0[7]; /*0x4103be*/
    v5 = *v2; /*0x4103c1*/
    v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*aP0 + 48))(aP0, 0); /*0x4103c7*/
    result = v2->vt_entry_68(aP0, v6); /*0x4103cd*/
    aP0[7] = v4; /*0x4103d0*/
  }
  return result; /*0x41038e*/
}
} // namespace gamemd

// 0x410440
namespace gamemd {
int AbstractClass::computeDistance()
{
  int result; // eax

  LOBYTE(result) = 1; /*0x410440*/
  return result; /*0x410442*/
}
} // namespace gamemd

// 0x410470
namespace gamemd {
int AbstractClass::StubReturnFalse()
{
  int result; // eax

  return result; /*0x410470*/
}
} // namespace gamemd

// 0x410480
namespace gamemd {
int AbstractClass::COMStub_Return0_10()
{
  int result; // eax

  return result; /*0x410480*/
}
} // namespace gamemd

// 0x410490
namespace gamemd {
int AbstractClass::computeDistanceSquared()
{
  return -1; /*0x410493*/
}
} // namespace gamemd

// 0x4104A0
namespace gamemd {
int AbstractClass::COMStub_Return0_15()
{
  return 0; /*0x4104a2*/
}
} // namespace gamemd

// 0x4104B0
namespace gamemd {
int AbstractClass::COMStub_Return0_16()
{
  return 0; /*0x4104b2*/
}
} // namespace gamemd

// 0x410520
namespace gamemd {
int AbstractClass::COMStub_Return0_20()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410520*/
  return result; /*0x410522*/
}
} // namespace gamemd

// 0x410530
namespace gamemd {
int AbstractClass::COMStub_Return0_21()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410530*/
  return result; /*0x410532*/
}
} // namespace gamemd

// 0x410570
namespace gamemd {
int AbstractClass::COMStub_Return0_23()
{
  int result; // eax

  return result; /*0x410570*/
}
} // namespace gamemd

// 0x410580
namespace gamemd {
char AbstractClass::Stub1INoticeSink(int a1, int a2)
{
  return 0; /*0x410582*/
}
} // namespace gamemd

// 0x410590
namespace gamemd {
void AbstractClass::COM_Stub_Return0(int a1)
{
  ; /*0x410590*/
}
} // namespace gamemd

// 0x4115D0
namespace gamemd {
Surface * AbstractClass::getObjectValue(char a2)
{
  *(_DWORD *)this = &Surface_Vtable; /*0x4115d9*/
  if ( (a2 & 1) != 0 ) /*0x4115df*/
    __3_YAXPAX_Z(this); /*0x4115e2*/
  return this; /*0x4115ec*/
}
} // namespace gamemd

// 0x417FD0
namespace gamemd {
int AbstractClass::GetField9()
{
  return g_RulesClass_Instance->PoseDir; /*0x417fd8*/
}
} // namespace gamemd

// 0x425520
namespace gamemd {
unsigned int AbstractClass::updateLayer()
{
  return this->u32_C8; /*0x425526*/
}
} // namespace gamemd

// 0x426390
namespace gamemd {
int AbstractClass::COMStub_Return0_25()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426390*/
  return result; /*0x426392*/
}
} // namespace gamemd

// 0x4263A0
namespace gamemd {
int AbstractClass::COMStub_26()
{
  return 0; /*0x4263a2*/
}
} // namespace gamemd

// 0x4263B0
namespace gamemd {
int AbstractClass::COMStub_Return0_32()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4263b0*/
  return result; /*0x4263b2*/
}
} // namespace gamemd

// 0x4263C0
namespace gamemd {
int AbstractClass::COMStub_Ret8487648_36()
{
  return (int)aNoName_0; /*0x4263c5*/
}
} // namespace gamemd

// 0x426410
namespace gamemd {
int AbstractClass::getCoordCenter()
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426410*/
  return result; /*0x426412*/
}
} // namespace gamemd

// 0x426420
namespace gamemd {
int AbstractClass::COMStub_Return0_49()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426420*/
  return result; /*0x426422*/
}
} // namespace gamemd

// 0x426430
namespace gamemd {
int AbstractClass::COMStub_50()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426430*/
  return result; /*0x426432*/
}
} // namespace gamemd

// 0x426440
namespace gamemd {
int AbstractClass::COMStub_Return0_67()
{
  int result; // eax

  return result; /*0x426440*/
}
} // namespace gamemd

// 0x426450
namespace gamemd {
int AbstractClass::COMStub_Return0_68()
{
  int result; // eax

  return result; /*0x426450*/
}
} // namespace gamemd

// 0x426460
namespace gamemd {
int AbstractClass::COMStub_Return0_85()
{
  int result; // eax

  return result; /*0x426460*/
}
} // namespace gamemd

// 0x426470
namespace gamemd {
int AbstractClass::COMStub_Return0_86()
{
  int result; // eax

  return result; /*0x426470*/
}
} // namespace gamemd

// 0x426480
namespace gamemd {
int AbstractClass::COMStub_Return0_87()
{
  int result; // eax

  return result; /*0x426480*/
}
} // namespace gamemd

// 0x426490
namespace gamemd {
int AbstractClass::COMStub_Return0_88()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426490*/
  return result; /*0x426492*/
}
} // namespace gamemd

// 0x4264A0
namespace gamemd {
int AbstractClass::COMStub_Return0_92()
{
  int result; // eax

  return result; /*0x4264a0*/
}
} // namespace gamemd

// 0x4264B0
namespace gamemd {
int AbstractClass::COMStub_Return0_99()
{
  int result; // eax

  return result; /*0x4264b0*/
}
} // namespace gamemd

// 0x4264C0
namespace gamemd {
int AbstractClass::COMStub_107()
{
  return 0; /*0x4264c2*/
}
} // namespace gamemd

// 0x4264E0
namespace gamemd {
int AbstractClass::COMStub_Return0_117()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264e0*/
  return result; /*0x4264e2*/
}
} // namespace gamemd

// 0x4264F0
namespace gamemd {
int AbstractClass::COMStub_Return0_118()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x4264f0*/
  return result; /*0x4264f2*/
}
} // namespace gamemd

// 0x426500
namespace gamemd {
int AbstractClass::COMStub_Return0_119()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x426500*/
  return result; /*0x426502*/
}
} // namespace gamemd

// 0x426510
namespace gamemd {
int AbstractClass::getCoordCenter2()
{
  int result; // eax

  LOBYTE(result) = 1; /*0x426510*/
  return result; /*0x426512*/
}
} // namespace gamemd

// 0x426520
namespace gamemd {
int AbstractClass::COMStub_Return0_121()
{
  return 0; /*0x426522*/
}
} // namespace gamemd

// 0x426580
namespace gamemd {
int AbstractClass::getAltitude()
{
  return 4; /*0x426585*/
}
} // namespace gamemd

// 0x426A80
namespace gamemd {
int AbstractClass::getMapCoords()
{
  return *(&this->needsSave1); /*0x426a89*/
}
} // namespace gamemd

// 0x427270
namespace gamemd {
std::locale::facet * AbstractClass::setMapCoords(char a2)
{
  *(_DWORD *)this = &Animate::`vftable'; /*0x427279*/
  if ( (a2 & 1) != 0 ) /*0x42727f*/
    __3_YAXPAX_Z(this); /*0x427282*/
  return this; /*0x42728c*/
}
} // namespace gamemd

// 0x459DC0
namespace gamemd {
int AbstractClass::COMStub_Return0_190()
{
  int result; // eax

  return result; /*0x459dc0*/
}
} // namespace gamemd

// 0x459DE0
namespace gamemd {
int AbstractClass::COMStub_Return0_205()
{
  int result; // eax

  return result; /*0x459de0*/
}
} // namespace gamemd

// 0x459E60
namespace gamemd {
int AbstractClass::COMStub_Return0_270()
{
  int result; // eax

  return result; /*0x459e60*/
}
} // namespace gamemd

// 0x464A70
namespace gamemd {
void AbstractClass_queryInterface()
{
  int GroundHeight; // eax
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v5 = *a3; /*0x464a7a*/
  v6 = a3[1]; /*0x464a8b*/
  v7 = a3[2]; /*0x464a92*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x464a96*/
  *a2 = a1; /*0x464aa5*/
  a2[1] = v6; /*0x464aab*/
  a2[2] = GroundHeight; /*0x464aaf*/
  return a2; /*0x464a9f*/
}
}
// 0x465910
namespace gamemd {
char AbstractClass::releaseRef()
{
  return 0; /*0x465912*/
}
} // namespace gamemd

// 0x465920
namespace gamemd {
char AbstractClass::finalRelease()
{
  return 0; /*0x465922*/
}
} // namespace gamemd

// 0x487E50
namespace gamemd {
int AbstractClass::compareType(int a1)
{
  return 11; /*0x487e55*/
}
} // namespace gamemd

// 0x499CC0
namespace gamemd {
Blitter * AbstractClass::getTileIndex(char a2)
{
  *(_DWORD *)this = &Blitter::`vftable'; /*0x499cc9*/
  if ( (a2 & 1) != 0 ) /*0x499ccf*/
    __3_YAXPAX_Z(this); /*0x499cd2*/
  return this; /*0x499cdc*/
}
} // namespace gamemd

// 0x499CE0
namespace gamemd {
BlitPlainXlat * AbstractClass::setTileIndex(char a2)
{
  *(_DWORD *)this = &Blitter::`vftable'; /*0x499ce9*/
  if ( (a2 & 1) != 0 ) /*0x499cef*/
    __3_YAXPAX_Z(this); /*0x499cf2*/
  return this; /*0x499cfc*/
}
} // namespace gamemd

// 0x499D00
namespace gamemd {
BlitTransXlat * AbstractClass::getOverlayType(char a2)
{
  *(_DWORD *)this = &Blitter::`vftable'; /*0x499d09*/
  if ( (a2 & 1) != 0 ) /*0x499d0f*/
    __3_YAXPAX_Z(this); /*0x499d12*/
  return this; /*0x499d1c*/
}
} // namespace gamemd

// 0x499D20
namespace gamemd {
std::locale::facet * AbstractClass::setOverlayFlags(char a2)
{
  *(_DWORD *)this = &Blitter::`vftable'; /*0x499d29*/
  if ( (a2 & 1) != 0 ) /*0x499d2f*/
    __3_YAXPAX_Z(this); /*0x499d32*/
  return this; /*0x499d3c*/
}
} // namespace gamemd

// 0x499DA0
namespace gamemd {
RLEBlitter * AbstractClass::clearOverlayFlags(char a2)
{
  *(_DWORD *)this = &RLEBlitter::`vftable'; /*0x499da9*/
  if ( (a2 & 1) != 0 ) /*0x499daf*/
    __3_YAXPAX_Z(this); /*0x499db2*/
  return this; /*0x499dbc*/
}
} // namespace gamemd

// 0x4CA160
namespace gamemd {
int AbstractClass::GetType()
{
  return *(&this->vtable32); /*0x4ca163*/
}
} // namespace gamemd

// 0x4DA2B0
namespace gamemd {
int AbstractClass_COMStub_143()
{
  return IPersistStream::GetMaxSize();
}
}
// 0x4DB250
namespace gamemd {
void AbstractClass::COMStub_Return0_69(Tactical * aP0, AbstractClass * aP1)
{
  ; /*0x4db250*/
}
} // namespace gamemd

// 0x4E0130
namespace gamemd {
int AbstractClass::COMStub_Return0_34()
{
  return 0; /*0x4e0132*/
}
} // namespace gamemd

// 0x4E0140
namespace gamemd {
char AbstractClass::getCurrentMission()
{
  return 1; /*0x4e0142*/
}
} // namespace gamemd

// 0x4E01C0
namespace gamemd {
unsigned int AbstractClass::queueMission(int a2)
{
  if ( this->vtable4 ) /*0x4e01c0*/
    return (unsigned int)(a2 - this->vtable2) >> 2; /*0x4e01d5*/
  else
    return 0; /*0x4e01c7*/
}
} // namespace gamemd

// 0x4F4C00
namespace gamemd {
GScreenClass * AbstractClass::getHouseHandle(char a2)
{
  *(_DWORD *)this = &off_7EA6FC; /*0x4f4c09*/
  if ( (a2 & 1) != 0 ) /*0x4f4c0f*/
    __3_YAXPAX_Z(this); /*0x4f4c12*/
  return this; /*0x4f4c1c*/
}
} // namespace gamemd

// 0x50E360
namespace gamemd {
int AbstractClass::computeMovementCost()
{
  return 13; /*0x50e365*/
}
} // namespace gamemd

// 0x50E370
namespace gamemd {
int AbstractClass::checkPassability()
{
  return *(&this->vtable22); /*0x50e373*/
}
} // namespace gamemd

// 0x510A20
namespace gamemd {
int AbstractClass::saveToStream(int a1, const void * a2, unsigned int * a3)
{
  return HouseClass::QueryInterface(a1 - 4, a2, a3);
}
} // namespace gamemd

// 0x510A30
namespace gamemd {
int AbstractClass::loadFromStream(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 4);
}
} // namespace gamemd

// 0x510A40
namespace gamemd {
int AbstractClass::computeSize(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 4);
}
} // namespace gamemd

// 0x5439F0
namespace gamemd {
int AbstractClass::COMStub_6(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x5439ff*/
  if ( result >= 0 ) /*0x543a06*/
    return 0; /*0x543a08*/
  return result; /*0x543a0a*/
}
} // namespace gamemd

// 0x543A90
namespace gamemd {
int AbstractClass::COMStub_Ret176_12()
{
  return 176; /*0x543a95*/
}
} // namespace gamemd

// 0x543AA0
namespace gamemd {
int AbstractClass::COMStub_Ret17_11()
{
  return 17; /*0x543aa5*/
}
} // namespace gamemd

// 0x5B2E60
namespace gamemd {
int AbstractClass::COMStub_Ret450_134()
{
  return 450; /*0x5b2e65*/
}
} // namespace gamemd

// 0x5B2EA0
namespace gamemd {
int AbstractClass::COMStub_Ret450_138()
{
  return 450; /*0x5b2ea5*/
}
} // namespace gamemd

// 0x5B2EB0
namespace gamemd {
int AbstractClass::COMStub_Ret450_139()
{
  return 450; /*0x5b2eb5*/
}
} // namespace gamemd

// 0x5b2ec0
namespace gamemd {
int AbstractClass::COMStub_Ret450_140()
{
  return 450; /*0x5b2ec5*/
}
} // namespace gamemd

// 0x5B2F00
namespace gamemd {
int AbstractClass::COMStub_Ret450_144()
{
  return 450; /*0x5b2f05*/
}
} // namespace gamemd

// 0x5B2F60
namespace gamemd {
int AbstractClass::COMStub_Ret450_150()
{
  return 450; /*0x5b2f65*/
}
} // namespace gamemd

// 0x5B2F70
namespace gamemd {
int AbstractClass::COMStub_Ret450_151()
{
  return 450; /*0x5b2f75*/
}
} // namespace gamemd

// 0x5B3A60
namespace gamemd {
MissionClass * AbstractClass::getWeaponRange(char a2)
{
  *this = &MissionClass::`vftable'; /*0x5b3a63*/
  this->vtable2 = &MissionClass::`vftable'; /*0x5b3a69*/
  this->vtable3 = &MissionClass::`vftable'; /*0x5b3a70*/
  this->vtable4 = &MissionClass::`vftable'; /*0x5b3a77*/
  ObjectClass::Dtor(this); /*0x5b3a7e*/
  if ( (a2 & 1) != 0 ) /*0x5b3a88*/
    __3_YAXPAX_Z(this); /*0x5b3a8b*/
  return this; /*0x5b3a95*/
}
} // namespace gamemd

// 0x5C02E0
namespace gamemd {
char AbstractClass::validatePathNode()
{
  return *(&this->vtable30); /*0x5c02e3*/
}
} // namespace gamemd

// 0x5C03C0
namespace gamemd {
int AbstractClass::resetPathState()
{
  return 33; /*0x5c03c5*/
}
} // namespace gamemd

// 0x5CEB40
namespace gamemd {
char AbstractClass::COMStub_Return0_7()
{
  return 0; /*0x5ceb42*/
}
} // namespace gamemd

// 0x5D81F0
namespace gamemd {
unsigned int * AbstractClass::processRevealArea(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d81f2*/
  if ( v6 ) /*0x5d81fc*/
    return MPBattleClass::MPSiegeClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d821e*/
  else
    return 0; /*0x5d8226*/
}
} // namespace gamemd

// 0x5D8230
namespace gamemd {
unsigned int * AbstractClass::computeRevealRadius(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8232*/
  if ( v6 ) /*0x5d823c*/
    return MPBattleClass::MPUnholyAllianceClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d825e*/
  else
    return 0; /*0x5d8266*/
}
} // namespace gamemd

// 0x5D8270
namespace gamemd {
unsigned int * AbstractClass::applyRevealToCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d8272*/
  if ( v6 ) /*0x5d827c*/
    return MPBattleClass::MPFreeForAllClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d829e*/
  else
    return 0; /*0x5d82a6*/
}
} // namespace gamemd

// 0x5D82B0
namespace gamemd {
unsigned int * AbstractClass::checkRevealCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, int a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x344u); /*0x5d82b5*/
  if ( v6 ) /*0x5d82bf*/
    return MPCooperative::ctor(v6, a1, a2, a3, a4, a5, a6); /*0x5d82e1*/
  else
    return 0; /*0x5d82e9*/
}
} // namespace gamemd

// 0x5F4240
namespace gamemd {
int AbstractClass::COMStub_29()
{
  return 0; /*0x5f4242*/
}
} // namespace gamemd

// 0x5F4250
namespace gamemd {
int AbstractClass::COMStub_28()
{
  return 0; /*0x5f4252*/
}
} // namespace gamemd

// 0x5F42A0
namespace gamemd {
int AbstractClass::COMStub_Ret2147483647_35()
{
  return 0x7FFFFFFF; /*0x5f42a5*/
}
} // namespace gamemd

// 0x5F42B0
namespace gamemd {
int AbstractClass::COMStub_Return0_37()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42b0*/
  return result; /*0x5f42b2*/
}
} // namespace gamemd

// 0x5F42C0
namespace gamemd {
int AbstractClass::COMStub_Return0_38()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42c0*/
  return result; /*0x5f42c2*/
}
} // namespace gamemd

// 0x5F42D0
namespace gamemd {
int AbstractClass::COMStub_Return0_39()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42d0*/
  return result; /*0x5f42d2*/
}
} // namespace gamemd

// 0x5F42E0
namespace gamemd {
int AbstractClass::COMStub_Return0_40()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f42e0*/
  return result; /*0x5f42e2*/
}
} // namespace gamemd

// 0x5F42F0
namespace gamemd {
int AbstractClass::COMStub_Return0_56()
{
  int result; // eax

  return result; /*0x5f42f0*/
}
} // namespace gamemd

// 0x5F4300
namespace gamemd {
int AbstractClass::COMStub_Return0_57()
{
  int result; // eax

  return result; /*0x5f4300*/
}
} // namespace gamemd

// 0x5F4310
namespace gamemd {
int AbstractClass::COMStub_Return0_63()
{
  int result; // eax

  return result; /*0x5f4310*/
}
} // namespace gamemd

// 0x5F4320
namespace gamemd {
int AbstractClass::COMStub_64()
{
  return 0; /*0x5f4322*/
}
} // namespace gamemd

// 0x5F4330
namespace gamemd {
int AbstractClass::COMStub_Return0_71()
{
  int result; // eax

  return result; /*0x5f4330*/
}
} // namespace gamemd

// 0x5F4340
namespace gamemd {
int AbstractClass::COMStub_Return0_72()
{
  int result; // eax

  return result; /*0x5f4340*/
}
} // namespace gamemd

// 0x5F4350
namespace gamemd {
int AbstractClass::COMStub_81()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4350*/
  return result; /*0x5f4352*/
}
} // namespace gamemd

// 0x5F4360
namespace gamemd {
int AbstractClass::COMStub_80()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4360*/
  return result; /*0x5f4362*/
}
} // namespace gamemd

// 0x5F4370
namespace gamemd {
int AbstractClass::COMStub_Return0_82()
{
  int result; // eax

  return result; /*0x5f4370*/
}
} // namespace gamemd

// 0x5F4380
namespace gamemd {
int AbstractClass::COMStub_89()
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5f4380*/
  return result; /*0x5f4382*/
}
} // namespace gamemd

// 0x5F4390
namespace gamemd {
int AbstractClass::COMStub_90()
{
  return 0; /*0x5f4392*/
}
} // namespace gamemd

// 0x5F43A0
namespace gamemd {
int AbstractClass::COMStub_Return0_93()
{
  int result; // eax

  return result; /*0x5f43a0*/
}
} // namespace gamemd

// 0x5F43D0
namespace gamemd {
int AbstractClass::COMStub_Return0_96()
{
  return 0; /*0x5f43d2*/
}
} // namespace gamemd

// 0x5F43E0
namespace gamemd {
int AbstractClass::processStateUpdate()
{
  return -1; /*0x5f43e3*/
}
} // namespace gamemd

// 0x5F4400
namespace gamemd {
int AbstractClass::COMStub_Return0_104()
{
  int result; // eax

  return result; /*0x5f4400*/
}
} // namespace gamemd

// 0x5F6B50
namespace gamemd {
int AbstractClass::COMStub_Return0_105()
{
  int result; // eax

  return result; /*0x5f6b50*/
}
} // namespace gamemd

// 0x5F6BC0
namespace gamemd {
int AbstractClass::COMStub_Return0_33()
{
  return 0; /*0x5f6bc2*/
}
} // namespace gamemd

// 0x5F9950
namespace gamemd {
int AbstractClass::SaveLoad_PrefixWrapper(TechnoTypeClass * aP0, ObjectTypeClass * aP1, TechnoTypeClass * aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, aP1, aP2); /*0x5f995f*/
  if ( result >= 0 ) /*0x5f9966*/
    return 0; /*0x5f9968*/
  return result; /*0x5f996a*/
}
} // namespace gamemd

// 0x65C320
namespace gamemd {
char AbstractClass::updateTeamState()
{
  return 1; /*0x65c322*/
}
} // namespace gamemd

// 0x65C330
namespace gamemd {
char AbstractClass::processTeamOrder()
{
  return *(&this->vtable38); /*0x65c333*/
}
} // namespace gamemd

// 0x65C4A0
namespace gamemd {
int AbstractClass::checkTeamObjective()
{
  return this->u16_A; /*0x65c4a3*/
}
} // namespace gamemd

// 0x65C540
namespace gamemd {
void AbstractClass::resetTeamState()
{
  *(&this->vtable38) = 0; /*0x65c540*/
}
} // namespace gamemd

// 0x65C610
namespace gamemd {
FileClass * AbstractClass::processAITrigger(char a2)
{
  *this = &FileClass::`vftable'; /*0x65c619*/
  if ( (a2 & 1) != 0 ) /*0x65c61f*/
    __3_YAXPAX_Z(this); /*0x65c622*/
  return this; /*0x65c62c*/
}
} // namespace gamemd

// 0x6CE1F0
namespace gamemd {
int AbstractClass::updateTargetTracking(int a1)
{
  return 57; /*0x6ce1f5*/
}
} // namespace gamemd

// 0x711E80
namespace gamemd {
char AbstractClass::processWeaponFire()
{
  return 1; /*0x711e82*/
}
} // namespace gamemd

// 0x74F330
namespace gamemd {
int AbstractClass::checkBuildingPlacement()
{
  return -1; /*0x74f333*/
}
} // namespace gamemd
