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
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v4; // eax
  AbstractClass *v5; // esi
  if ( aP1 /*0x438ea3*/
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 15
    && aP2
    && !aP2->attachedBomb )
  {
    v4 = (AbstractClass *)__2_YAPAXI_Z(0x5Cu); /*0x438eaf*/
    v5 = v4; /*0x438eb4*/
    if ( v4 ) /*0x438ebb*/
    {
      AbstractClass::Constructor(v4); /*0x438ec3*/
      *(_DWORD *)&v5[2].__pad_0[12] = 0; /*0x438ecb*/
      *(_DWORD *)v5->__pad_0 = &BombClass::`vftable'; /*0x438ece*/
      *(_DWORD *)&v5->__pad_0[4] = &BombClass::`vftable'; /*0x438ed4*/
      *(_DWORD *)&v5->__pad_0[8] = &BombClass::`vftable'; /*0x438edb*/
      *(_DWORD *)&v5->__pad_0[12] = &vt_BombClass; /*0x438ee2*/
      *(_DWORD *)&v5[1].__pad_0[4] = 0; /*0x438ee9*/
      *(_DWORD *)&v5[1].__pad_0[8] = 0; /*0x438eec*/
      LOBYTE(v5[2].uniqueId) = 0; /*0x438eef*/
      AudioController::Init(&v5[1].nextArrayIndex); /*0x438ef2*/
      *(_DWORD *)&v5[2].__pad_0[8] = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 524); /*0x438f03*/
      if ( dword_89C678 < dword_89C670 /*0x438f37*/
        || (unk_89C675 || !dword_89C670)
        && dword_89C67C > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_89C668 + 8))(
             &dword_89C668,
             dword_89C670 + dword_89C67C,
             0) )
      {
        int v6 = dword_89C678++; /*0x438f44*/
        *((_DWORD *)unk_89C66C + v6) = v5; /*0x438f53*/
      }
    }
    else
    {
      v5 = 0; /*0x438f58*/
    }
    *(_DWORD *)&v5[1].__pad_0[4] = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 60))(aP1); /*0x438f62*/
    *(_DWORD *)v5[1].__pad_0 = aP1; /*0x438f69*/
    *(_DWORD *)&v5[1].__pad_0[8] = aP2; /*0x438f6c*/
    v5[1].uniqueId = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x438f75*/
    int v7 = v5[1].uniqueId + *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 4048); /*0x438f87*/
    *(_DWORD *)&v5[1].__pad_0[12] = 0; /*0x438f89*/
    v5[1].abstractFlags = v7; /*0x438f8c*/
    aP2->attachedBomb = v5; /*0x438f8f*/
    int v8 = this->vtable3; /*0x438f92*/
    if ( this->uniqueId < v8 /*0x438fb4*/
      || (this->q034 || !v8)
  int v9; // ecx
      && (v9 = this->abstractFlags, v9 > 0)
      && this->COMStub_Release(v8 + v9, 0) )
    {
      int v10 = this->uniqueId; /*0x438fbb*/
      int v11 = this->vtable2; /*0x438fbe*/
      this->uniqueId = v10 + 1; /*0x438fc4*/
      *(_DWORD *)(v11 + 4 * v10) = v5; /*0x438fc7*/
    }
    this->q030 = 1; /*0x438fca*/
    if ( *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 528) != -1 ) /*0x438fde*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)aP1->focus) ) /*0x438fe6*/
      {
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF
        v12[0] = aP2->location[0]; /*0x438ffc*/
        v12[1] = aP2->location[1]; /*0x439007*/
        v12[2] = aP2->location[2]; /*0x439013*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 528), (int)v12, 0); /*0x43901d*/
      }
    }
  }
}
}
} // namespace gamemd

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
    return this->PlaceAnywhere || BuildingClass::ValidatePath(this, a2, a3);
}
} // namespace gamemd

// 0x4FB9B0
namespace gamemd {
void AbstractClass_RemoveObjectFromHouse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v5; // ebp
  void ***result; // eax

  v5 = a3; /*0x4fb9b2*/
  if ( (void **)a1[5432] == a3 ) /*0x4fb9c1*/
    a1[5432] = 0; /*0x4fb9c3*/
  a3 = (void **)__RTDynamicCast(v5, 0, &AbstractClass `RTTI Type Descriptor', &TagClass `RTTI Type Descriptor', 0); /*0x4fb9e1*/
  if ( a3 ) /*0x4fb9e5*/
  {
    int v7 = (*(int (__thiscall **)(_DWORD *, void ***))(a1[14] + 16))(a1 + 14, &a3); /*0x4fb9f4*/
    if ( v7 != -1 ) /*0x4fb9fa*/
    {
      int v8 = a1[18]; /*0x4fb9fc*/
      if ( v7 < v8 ) /*0x4fba01*/
      {
        int v9 = v8 - 1; /*0x4fba03*/
        for ( a1[18] = v9; v7 < a1[18]; *(_DWORD *)(a1[15] + 4 * v7 - 4) = *(_DWORD *)(a1[15] + 4 * v7) ) /*0x4fba09*/
          ++v7; /*0x4fba0e*/
      }
    }
  }
  if ( (*((int (__thiscall **)(void **))*v5 + 11))(v5) == 6 && (_BYTE)a4 ) /*0x4fba32*/
  {
    int v10 = a1[20]; /*0x4fba38*/
    a4 = v5; /*0x4fba45*/
    int v11 = (*(int (__thiscall **)(_DWORD *, void ***, int))(v10 + 16))(a1 + 20, &a4, a2); /*0x4fba49*/
    if ( v11 != -1 ) /*0x4fba4f*/
      Vector::RemoveAt(a1 + 20, v11); /*0x4fba54*/
    int v12 = a1[32]; /*0x4fba59*/
    a5 = v5; /*0x4fba6c*/
    int v13 = (*(int (__thiscall **)(_DWORD *, void ***))(v12 + 16))(a1 + 32, &a5); /*0x4fba70*/
    if ( v13 != -1 ) /*0x4fba76*/
    {
      int v14 = a1[36]; /*0x4fba78*/
      if ( v13 < v14 ) /*0x4fba7d*/
      {
        int v15 = v14 - 1; /*0x4fba7f*/
        for ( a1[36] = v15; v13 < a1[36]; *(_DWORD *)(a1[33] + 4 * v13 - 4) = *(_DWORD *)(a1[33] + 4 * v13) ) /*0x4fba85*/
          ++v13; /*0x4fba8a*/
      }
    }
    int v16 = a1[38]; /*0x4fba99*/
    a5 = v5; /*0x4fbaa9*/
    int v17 = (*(int (__thiscall **)(_DWORD *, void ***))(v16 + 16))(a1 + 38, &a5); /*0x4fbab0*/
    if ( v17 != -1 ) /*0x4fbab6*/
      Vector::RemoveAt(a1 + 38, v17); /*0x4fbabb*/
    int v18 = a1[44]; /*0x4fbac0*/
    a5 = v5; /*0x4fbad3*/
    int v19 = (*(int (__thiscall **)(_DWORD *, void ***))(v18 + 16))(a1 + 44, &a5); /*0x4fbad7*/
    if ( v19 != -1 ) /*0x4fbadd*/
    {
      int v20 = a1[48]; /*0x4fbadf*/
      if ( v19 < v20 ) /*0x4fbae4*/
      {
        int v21 = v20 - 1; /*0x4fbae6*/
        for ( a1[48] = v21; v19 < a1[48]; *(_DWORD *)(a1[45] + 4 * v19 - 4) = *(_DWORD *)(a1[45] + 4 * v19) ) /*0x4fbaec*/
          ++v19; /*0x4fbaf1*/
      }
    }
    int v22 = a1[50]; /*0x4fbb00*/
    a5 = v5; /*0x4fbb10*/
    int v23 = (*(int (__thiscall **)(_DWORD *, void ***))(v22 + 16))(a1 + 50, &a5); /*0x4fbb17*/
    if ( v23 != -1 ) /*0x4fbb1d*/
      Vector::RemoveAt(a1 + 50, v23); /*0x4fbb22*/
    int v24 = a1[56]; /*0x4fbb27*/
    a5 = v5; /*0x4fbb3a*/
    int v25 = (*(int (__thiscall **)(_DWORD *, void ***))(v24 + 16))(a1 + 56, &a5); /*0x4fbb3e*/
    if ( v25 != -1 ) /*0x4fbb44*/
    {
      int v26 = a1[60]; /*0x4fbb46*/
      if ( v25 < v26 ) /*0x4fbb4b*/
      {
        int v27 = v26 - 1; /*0x4fbb4d*/
        for ( a1[60] = v27; v25 < a1[60]; *(_DWORD *)(a1[57] + 4 * v25 - 4) = *(_DWORD *)(a1[57] + 4 * v25) ) /*0x4fbb53*/
          ++v25; /*0x4fbb58*/
      }
    }
    int v28 = a1[62]; /*0x4fbb67*/
    a5 = v5; /*0x4fbb77*/
    int v29 = (*(int (__thiscall **)(_DWORD *, void ***))(v28 + 16))(a1 + 62, &a5); /*0x4fbb7e*/
    if ( v29 != -1 ) /*0x4fbb84*/
      Vector::RemoveAt(a1 + 62, v29); /*0x4fbb89*/
    int v30 = a1[68]; /*0x4fbb8e*/
    a5 = v5; /*0x4fbba1*/
    int v31 = (*(int (__thiscall **)(_DWORD *, void ***))(v30 + 16))(a1 + 68, &a5); /*0x4fbba5*/
    if ( v31 != -1 ) /*0x4fbbab*/
      Vector::RemoveAt(a1 + 68, v31); /*0x4fbbb0*/
    int v32 = a1[74]; /*0x4fbbb5*/
    a5 = v5; /*0x4fbbc8*/
    int v33 = (*(int (__thiscall **)(_DWORD *, void ***))(v32 + 16))(a1 + 74, &a5); /*0x4fbbcc*/
    if ( v33 != -1 ) /*0x4fbbd2*/
    {
      int v34 = a1[78]; /*0x4fbbd4*/
      if ( v33 < v34 ) /*0x4fbbd9*/
      {
        int v35 = v34 - 1; /*0x4fbbdb*/
        for ( a1[78] = v35; v33 < a1[78]; *(_DWORD *)(a1[75] + 4 * v33 - 4) = *(_DWORD *)(a1[75] + 4 * v33) ) /*0x4fbbe1*/
          ++v33; /*0x4fbbe6*/
      }
    }
    int v36 = a1[80]; /*0x4fbbf5*/
    a5 = v5; /*0x4fbc05*/
    int v37 = (*(int (__thiscall **)(_DWORD *, void ***))(v36 + 16))(a1 + 80, &a5); /*0x4fbc0c*/
    if ( v37 != -1 ) /*0x4fbc12*/
      Vector::RemoveAt(a1 + 80, v37); /*0x4fbc17*/
    int v38 = a1[26]; /*0x4fbc1c*/
    a5 = v5; /*0x4fbc29*/
    int v39 = (*(int (__thiscall **)(_DWORD *, void ***))(v38 + 16))(a1 + 26, &a5); /*0x4fbc2d*/
    if ( v39 != -1 ) /*0x4fbc33*/
    {
      int v40 = a1[30]; /*0x4fbc35*/
      if ( v39 < v40 ) /*0x4fbc3a*/
      {
        int v41 = v40 - 1; /*0x4fbc3c*/
        for ( a1[30] = v41; v39 < a1[30]; *(_DWORD *)(a1[27] + 4 * v39 - 4) = *(_DWORD *)(a1[27] + 4 * v39) ) /*0x4fbc42*/
          ++v39; /*0x4fbc47*/
      }
    }
    HouseClass::CalculateCostMultipliers(a1); /*0x4fbc58*/
  }
  result = (void ***)(a1 + 132); /*0x4fbc5d*/
  int v43 = 12; /*0x4fbc63*/
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
} // namespace gamemd

// 0x5C03D0
namespace gamemd {
void AbstractClass_getPathDirection()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = g_BigIntPool; /*0x5c03d0*/
  if ( g_BigIntPool ) /*0x5c03da*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)DSurface_Alternate + 24))(DSurface_Alternate, 0); /*0x5c03ea*/
  int *v9; // [esp+Ch] [ebp-18h]
  int v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
    Frame::Present(DSurface_Alternate, a1, a2, a3, 0, v7, v8, v9); /*0x5c03f7*/
    result = TestBitArray(15); /*0x5c0401*/
    if ( !result ) /*0x5c0408*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5c0419*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5c042b*/
      int v4 = *(_DWORD *)(g_BigIntPool + 64); /*0x5c0446*/
      int v5 = Rect.top + *(_DWORD *)(g_BigIntPool + 56); /*0x5c0449*/
      int v6 = *(_DWORD *)(g_BigIntPool + 52); /*0x5c044b*/
      v9 = *(int **)(g_BigIntPool + 60); /*0x5c044e*/
      v8 = v5; /*0x5c0454*/
      v7 = Rect.left + v6; /*0x5c045e*/
      int v10 = v4; /*0x5c0462*/
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
} // namespace gamemd

// 0x5D7FD0
namespace gamemd {
unsigned int * AbstractClass::checkVisibility(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d7fd9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fdf*/
    __3_YAXPAX_Z(this); /*0x5d7fe2*/
  return &this->vfptr; /*0x5d7fec*/
}
}
} // namespace gamemd

// 0x5D8030
namespace gamemd {
unsigned int * AbstractClass::updateVisibilityState(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8039*/
  if ( (a2 & 1) != 0 ) /*0x5d803f*/
    __3_YAXPAX_Z(this); /*0x5d8042*/
  return &this->vfptr; /*0x5d804c*/
}
}
} // namespace gamemd

// 0x5D8050
namespace gamemd {
unsigned int * AbstractClass::processFogReveal(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8059*/
  if ( (a2 & 1) != 0 ) /*0x5d805f*/
    __3_YAXPAX_Z(this); /*0x5d8062*/
  return &this->vfptr; /*0x5d806c*/
}
}
} // namespace gamemd

// 0x5D8070
namespace gamemd {
unsigned int * AbstractClass::checkShroudState(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8079*/
  if ( (a2 & 1) != 0 ) /*0x5d807f*/
    __3_YAXPAX_Z(this); /*0x5d8082*/
  return &this->vfptr; /*0x5d808c*/
}
}
} // namespace gamemd

// 0x5D8090
namespace gamemd {
unsigned int * AbstractClass::updateShroudMap(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->vfptr = &vt_MultiplayerGameMode_InitializerBase; /*0x5d8099*/
  if ( (a2 & 1) != 0 ) /*0x5d809f*/
    __3_YAXPAX_Z(this); /*0x5d80a2*/
  return &this->vfptr; /*0x5d80ac*/
}
}
} // namespace gamemd

// 0x70D4A0
namespace gamemd {
void AbstractClass::ClearTargetToMeClearManagerTarget(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ebx
  int j; // ecx

  if ( a1 )
    int v2 = (*(_BYTE *)(a1 + 20) & 1) != 0 ? a1 : 0;
  else
    v2 = 0; /*0x70d4a9*/
  for ( i = g_SidebarState - 1; i >= 0; --i ) /*0x70d4c6*/
  {
    bool v4 = 1; /*0x70d4d2*/
    _DWORD * v5 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + i); /*0x70d4d6*/
    if ( v2 ) /*0x70d4d9*/
    {
      int v6 = v5[165]; /*0x70d4db*/
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
    int v8 = *((_DWORD *)g_TeamClassPool + j); /*0x70d567*/
    if ( *(_DWORD *)(v8 + 60) == a1 ) /*0x70d56d*/
      *(_DWORD *)(v8 + 60) = 0; /*0x70d56f*/
    if ( *(_DWORD *)(v8 + 64) == a1 ) /*0x70d575*/
      *(_DWORD *)(v8 + 64) = 0; /*0x70d577*/
  }
}
}
} // namespace gamemd

// 0x7258D0
namespace gamemd {
void AbstractClass::AnnounceExpiredPointer(AbstractClass * aP0, AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
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

  int v4 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP0->__pad_0 + 44))(aP0); /*0x7258de*/
  int v5 = 0; /*0x7258e9*/
  if ( *(AbstractClass **)&stru_87C374[17944] == aP0 ) /*0x7258e7*/
    *(_DWORD *)&stru_87C374[17944] = 0; /*0x7258eb*/
  if ( *(AbstractClass **)&stru_87C374[17948] == aP0 ) /*0x7258fb*/
  {
    *(_DWORD *)&stru_87C374[17948] = 0; /*0x725903*/
    Mouse::SetBounds((int)&stru_87C374[13428], 0); /*0x725909*/
  }
  switch ( v4 ) /*0x725911*/
  {
    case 24: /*0x725911*/
      if ( aP0 == *(AbstractClass **)&HouseClass_Player[45100] ) /*0x72591d*/
        *(_DWORD *)&HouseClass_Player[45100] = 0; /*0x72591f*/
      break;
    case 13: /*0x725911*/
      for ( i = 0; i < *(int *)&stru_B05488[41552]; ++i ) /*0x7259e8*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41540] /*0x7259f7*/
                                                                                       + 4 * i)
                                                                         + 40))(
          *(_DWORD *)(*(_DWORD *)&stru_B05488[41540] + 4 * i),
          aP0,
          aP1);
      goto LABEL_20; /*0x725a02*/
    case 4: /*0x725911*/
      for ( j = 0; j < *(int *)&stru_B05488[41280]; ++j ) /*0x725a28*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41268] /*0x725a3a*/
                                                                                       + 4 * j)
                                                                         + 40))(
          *(_DWORD *)(*(_DWORD *)&stru_B05488[41268] + 4 * j),
          aP0,
          aP1);
      return; /*0x725a45*/
  }
  if ( aP0 && (aP0->abstractFlags & 2) != 0 ) /*0x725938*/
  {
    if ( *(int *)&stru_B05488[41640] > 0 ) /*0x725945*/
    {
      do /*0x72595f*/
      {
        (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41628] /*0x725954*/
                                                                                       + 4 * v5)
                                                                         + 40))(
          *(_DWORD *)(*(_DWORD *)&stru_B05488[41628] + 4 * v5),
          aP0,
          aP1);
        ++v5; /*0x72595c*/
      }
      while ( v5 < *(int *)&stru_B05488[41640] ); /*0x72595f*/
    }
    AbstractClass::processDetection((int *)&stru_87C374[12900], aP0); /*0x725967*/
    AbstractClass::processStateTransition((int *)&g_MissionQueueFrame, aP0); /*0x725972*/
    for ( k = *(_DWORD *)&stru_89E138[8416] - 1; k >= 0; --k ) /*0x725981*/
      DiskLaserClass::PointerGotInvalid(*(_DWORD **)(*(_DWORD *)&stru_89E138[8404] + 4 * k), aP0); /*0x72598d*/
    if ( v4 == 15 || v4 == 1 || v4 == 2 ) /*0x7259a2*/
      nullsub_3(aP0); /*0x7259aa*/
    AbstractClass::processRadarEvent(aP0); /*0x7259b1*/
    if ( *(_DWORD *)&stru_87C374[44976] ) /*0x7259be*/
      (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)&stru_87C374[44976] + 40))( /*0x7259c5*/
        *(_DWORD *)&stru_87C374[44976],
        aP0,
        1);
LABEL_20:
    Array::RemoveItemByValue(aP0, (int)aP1); /*0x7259c8*/
    return; /*0x7259d9*/
  }
  if ( __RTDynamicCast( /*0x725a5a*/
         (IUnknown *)aP0,
         0,
         &AbstractClass `RTTI Type Descriptor',
         &AbstractTypeClass `RTTI Type Descriptor',
         0) )
  {
    for ( m = 0; m < *(int *)&stru_B05488[41464]; ++m ) /*0x725a6f*/
      (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41452] /*0x725a7d*/
                                                                                     + 4 * m)
                                                                       + 40))(
        *(_DWORD *)(*(_DWORD *)&stru_B05488[41452] + 4 * m),
        aP0,
        aP1);
    InitInterfaceStubsCOM(*(RulesClass **)&stru_87C374[44652]); /*0x725a92*/
  }
  else
  {
    switch ( v4 ) /*0x725ab1*/
    {
      case 12: /*0x725ab1*/
        for ( n = 0; n < *(int *)&stru_B05488[41416]; ++n ) /*0x725b34*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41404] /*0x725b42*/
                                                                                         + 4 * n)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488[41404] + 4 * n),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((int *)&stru_87C374[13428], aP0, 1); /*0x725b57*/
        break; /*0x725b61*/
      case 34: /*0x725ab1*/
        for ( ii = 0; ii < *(int *)&stru_B05488[41312]; ++ii ) /*0x725bc3*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41300] /*0x725bd1*/
                                                                                         + 4 * ii)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488[41300] + 4 * ii),
            aP0,
            aP1);
        break; /*0x725bdc*/
      case 38: /*0x725ab1*/
        for ( jj = 0; jj < *(int *)&stru_B05488[41616]; ++jj ) /*0x725b05*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41604] /*0x725b18*/
                                                                                         + 4 * jj)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488[41604] + 4 * jj),
            aP0,
            aP1);
        break; /*0x725b23*/
      case 44: /*0x725ab1*/
        for ( kk = 0; kk < *(int *)&stru_B05488[41376]; ++kk ) /*0x725ac1*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41364] /*0x725ad0*/
                                                                                         + 4 * kk)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488[41364] + 4 * kk),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((int *)&stru_87C374[13428], aP0, 1); /*0x725ae5*/
        Array::RemoveItemByValue(aP0, (int)aP1); /*0x725af1*/
        break; /*0x725afb*/
      case 47: /*0x725ab1*/
      case 48: /*0x725ab1*/
        for ( mm = 0; mm < *(int *)&stru_B05488[41440]; ++mm ) /*0x725b6b*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41428] /*0x725b7d*/
                                                                                         + 4 * mm)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488[41428] + 4 * mm),
            aP0,
            aP1);
        break; /*0x725b88*/
      case 51: /*0x725ab1*/
        for ( nn = 0; nn < *(int *)&stru_B05488[41336]; ++nn ) /*0x725b99*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41324] /*0x725ba7*/
                                                                                         + 4 * nn)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488[41324] + 4 * nn),
            aP0,
            aP1);
        break; /*0x725bb2*/
      case 60: /*0x725ab1*/
        for ( i1 = 0; i1 < *(int *)&stru_B05488[41592]; ++i1 ) /*0x725bed*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488[41580] /*0x725bfb*/
                                                                                         + 4 * i1)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488[41580] + 4 * i1),
            aP0,
            aP1);
        break; /*0x725c06*/
      default:
        return;
    }
  }
}
}
} // namespace gamemd

// 0x410100
namespace gamemd {
int AbstractClass::initVtableBase()
{
{
    DataGlobal_887660 = 0;
    DataGlobal_887662 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4101F0
namespace gamemd {
void AbstractClass::DTOR()
{
{
    *(void**)this = vt_AbstractClass;
    this->vtable1 = (unsigned int)vt_AbstractClass;
    this->vtable2 = (unsigned int)vt_AbstractClass;
    this->vtable3 = &vt_AbstractClass;
}
}
} // namespace gamemd

// 0x410220
namespace gamemd {
int AbstractClass::GetVtable3(AbstractClass * aP0)
{
{
    return *(int *)&aP0->__pad_0[12];
}
}
} // namespace gamemd

// 0x410230
namespace gamemd {
int AbstractClass::GenerateUniqueID(int a1)
{
{
    int result;
    if ( g_ScenarioClass_Instance )
  {
    result = AbstractClass::updateAITimer();
    *(int *)(a1 + 12) = result;
  }
    else
  {
    *(int *)(a1 + 12) = 0;
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x410320
namespace gamemd {
int AbstractClass::SaveLoad_Prefix(ObjectTypeClass * aP0, ObjectTypeClass * aP1, ObjectTypeClass * aP2)
{
{
    ObjectTypeClass *v3;
    int result;
    int v5;
    int v6;
    int v7;
    ObjectTypeClass *v8;
    v3 = aP1;
    if ( !aP1 )
    return -2147467261;
    v5 = *(int *)aP1->__pad_0;
    v8 = aP1;
    aP1 = aP0;
    result = (*(int (__stdcall **)(ObjectTypeClass *, ObjectTypeClass **, int, int))(v5 + 16))(v8, &aP1, 4, 0);
    if ( result >= 0 )
  {
    v6 = *(int *)v3->__pad_0;
    v7 = (*(int (__thiscall **)(ObjectTypeClass *, int))(*(int *)aP0->__pad_0 + 48))(aP0, 0);
    result = (*(int (__stdcall **)(ObjectTypeClass *, ObjectTypeClass *, int))(v6 + 16))(v3, aP0, v7);
    if ( result >= 0 )
    {
    if ( aP2 )
    LOBYTE(aP0->NeedsSaveOrLink) = 0;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x410380
namespace gamemd {
int AbstractClass::SaveLoad_Prefix_0(AbstractClass * aP0, AbstractClass * aP1)
{
{
    AbstractClass *v2;
    int result;
    int referenceCount;
    int v5;
    int v6;
    v2 = aP1;
    if ( !aP1 )
    return -2147467261;
    result = (*(int (__stdcall **)(AbstractClass *, AbstractClass **, int, int))(*(int *)aP1->__pad_0 + 12))( aP1, &aP1, 4, 0);
    if ( result >= 0 )
  {
    SwizzleManagerClass::Here_I_Am((SwizzleManagerClass *)&DataGlobal_B05488[27784], aP1, aP0);
    referenceCount = aP0->referenceCount;
    v5 = *(int *)v2->__pad_0;
    v6 = (*(int (__thiscall **)(AbstractClass *, int))(*(int *)aP0->__pad_0 + 48))(aP0, 0);
    result = (*(int (__stdcall **)(AbstractClass *, AbstractClass *, int))(v5 + 12))(v2, aP0, v6);
    aP0->referenceCount = referenceCount;
  }
    return result;
}
}
} // namespace gamemd

// 0x410440
namespace gamemd {
int AbstractClass::computeDistance()
{
{
    int result;
    LOBYTE(result) = 1;
    return result;
}
}
} // namespace gamemd

// 0x410470
namespace gamemd {
int AbstractClass::StubReturnFalse()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x410480
namespace gamemd {
int AbstractClass::COMStub_Return0_10()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x410490
namespace gamemd {
int AbstractClass::computeDistanceSquared()
{
return -1;
}
} // namespace gamemd

// 0x4104A0
namespace gamemd {
int AbstractClass::COMStub_Return0_15()
{
return 0;
}
} // namespace gamemd

// 0x4104B0
namespace gamemd {
int AbstractClass::COMStub_Return0_16()
{
return 0;
}
} // namespace gamemd

// 0x410520
namespace gamemd {
int AbstractClass::COMStub_Return0_20()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x410530
namespace gamemd {
int AbstractClass::COMStub_Return0_21()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x410570
namespace gamemd {
int AbstractClass::COMStub_Return0_23()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x410580
namespace gamemd {
char AbstractClass::Stub1INoticeSink(int a1, int a2)
{
return 0;
}
} // namespace gamemd

// 0x410590
namespace gamemd {
void AbstractClass::COM_Stub_Return0(int a1)
{
  ;
}
} // namespace gamemd

// 0x4115D0
namespace gamemd {
Surface * AbstractClass::getObjectValue(char a2)
{
{
    *(int *)this = &Surface_Vtable;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (Surface *)this;
}
}
} // namespace gamemd

// 0x417FD0
namespace gamemd {
int AbstractClass::GetField9()
{
{
    return g_RulesClass_Instance->PoseDir;
}
}
} // namespace gamemd

// 0x425520
namespace gamemd {
unsigned int AbstractClass::updateLayer()
{
{
    return this->infantrySelfHeal;
}
}
} // namespace gamemd

// 0x426390
namespace gamemd {
int AbstractClass::COMStub_Return0_25()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x4263A0
namespace gamemd {
int AbstractClass::COMStub_26()
{
return 0;
}
} // namespace gamemd

// 0x4263B0
namespace gamemd {
int AbstractClass::COMStub_Return0_32()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x4263C0
namespace gamemd {
int AbstractClass::COMStub_Ret8487648_36()
{
{
    return (int)aNoName_0;
}
}
} // namespace gamemd

// 0x426410
namespace gamemd {
int AbstractClass::getCoordCenter()
{
{
    int result;
    LOBYTE(result) = 1;
    return result;
}
}
} // namespace gamemd

// 0x426420
namespace gamemd {
int AbstractClass::COMStub_Return0_49()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x426430
namespace gamemd {
int AbstractClass::COMStub_50()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x426440
namespace gamemd {
int AbstractClass::COMStub_Return0_67()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x426450
namespace gamemd {
int AbstractClass::COMStub_Return0_68()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x426460
namespace gamemd {
int AbstractClass::COMStub_Return0_85()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x426470
namespace gamemd {
int AbstractClass::COMStub_Return0_86()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x426480
namespace gamemd {
int AbstractClass::COMStub_Return0_87()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x426490
namespace gamemd {
int AbstractClass::COMStub_Return0_88()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x4264A0
namespace gamemd {
int AbstractClass::COMStub_Return0_92()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x4264B0
namespace gamemd {
int AbstractClass::COMStub_Return0_99()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x4264C0
namespace gamemd {
int AbstractClass::COMStub_107()
{
return 0;
}
} // namespace gamemd

// 0x4264E0
namespace gamemd {
int AbstractClass::COMStub_Return0_117()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x4264F0
namespace gamemd {
int AbstractClass::COMStub_Return0_118()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x426500
namespace gamemd {
int AbstractClass::COMStub_Return0_119()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x426510
namespace gamemd {
int AbstractClass::getCoordCenter2()
{
{
    int result;
    LOBYTE(result) = 1;
    return result;
}
}
} // namespace gamemd

// 0x426520
namespace gamemd {
int AbstractClass::COMStub_Return0_121()
{
return 0;
}
} // namespace gamemd

// 0x426580
namespace gamemd {
int AbstractClass::getAltitude()
{
return 4;
}
} // namespace gamemd

// 0x426A80
namespace gamemd {
int AbstractClass::getMapCoords()
{
{
    return this->buildtimeDefensesMult;
}
}
} // namespace gamemd

// 0x427270
namespace gamemd {
std::locale::facet * AbstractClass::setMapCoords(char a2)
{
{
    *(void**)this = vt_Animate;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x459DC0
namespace gamemd {
int AbstractClass::COMStub_Return0_190()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x459DE0
namespace gamemd {
int AbstractClass::COMStub_Return0_205()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x459E60
namespace gamemd {
int AbstractClass::COMStub_Return0_270()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x464A70
namespace gamemd {
void AbstractClass_queryInterface()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int GroundHeight; // eax

  int v5 = *a3; /*0x464a7a*/
  int v6 = a3[1]; /*0x464a8b*/
  int v7 = a3[2]; /*0x464a92*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x464a96*/
  *a2 = a1; /*0x464aa5*/
  a2[1] = v6; /*0x464aab*/
  a2[2] = GroundHeight; /*0x464aaf*/
  return a2; /*0x464a9f*/
}
}
} // namespace gamemd

// 0x465910
namespace gamemd {
char AbstractClass::releaseRef()
{
return 0;
}
} // namespace gamemd

// 0x465920
namespace gamemd {
char AbstractClass::finalRelease()
{
return 0;
}
} // namespace gamemd

// 0x487E50
namespace gamemd {
int AbstractClass::compareType(int a1)
{
return 11;
}
} // namespace gamemd

// 0x499CC0
namespace gamemd {
Blitter * AbstractClass::getTileIndex(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (Blitter *)this;
}
}
} // namespace gamemd

// 0x499CE0
namespace gamemd {
BlitPlainXlat * AbstractClass::setTileIndex(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitPlainXlat *)this;
}
}
} // namespace gamemd

// 0x499D00
namespace gamemd {
BlitTransXlat * AbstractClass::getOverlayType(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlat *)this;
}
}
} // namespace gamemd

// 0x499D20
namespace gamemd {
std::locale::facet * AbstractClass::setOverlayFlags(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499DA0
namespace gamemd {
RLEBlitter * AbstractClass::clearOverlayFlags(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitter *)this;
}
}
} // namespace gamemd

// 0x4CA160
namespace gamemd {
int AbstractClass::GetType()
{
{
    return this->repairStationsCapacity;
}
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
  ;
}
} // namespace gamemd

// 0x4E0130
namespace gamemd {
int AbstractClass::COMStub_Return0_34()
{
return 0;
}
} // namespace gamemd

// 0x4E0140
namespace gamemd {
char AbstractClass::getCurrentMission()
{
return 1;
}
} // namespace gamemd

// 0x4E01C0
namespace gamemd {
unsigned int AbstractClass::queueMission(int a2)
{
{
    if ( (unsigned char)this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4F4C00
namespace gamemd {
GScreenClass * AbstractClass::getHouseHandle(char a2)
{
{
    *(int *)this = &DataGlobal_7EA6FC;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GScreenClass *)this;
}
}
} // namespace gamemd

// 0x50E360
namespace gamemd {
int AbstractClass::computeMovementCost()
{
return 13;
}
} // namespace gamemd

// 0x50E370
namespace gamemd {
int AbstractClass::checkPassability()
{
{
    return this->nextObject;
}
}
} // namespace gamemd

// 0x510A20
namespace gamemd {
int AbstractClass::saveToStream(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 4, a2, a3);
}
}
} // namespace gamemd

// 0x510A30
namespace gamemd {
int AbstractClass::loadFromStream(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 4);
}
}
} // namespace gamemd

// 0x510A40
namespace gamemd {
int AbstractClass::computeSize(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 4);
}
}
} // namespace gamemd

// 0x5439F0
namespace gamemd {
int AbstractClass::COMStub_6(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x543A90
namespace gamemd {
int AbstractClass::COMStub_Ret176_12()
{
return 176;
}
} // namespace gamemd

// 0x543AA0
namespace gamemd {
int AbstractClass::COMStub_Ret17_11()
{
return 17;
}
} // namespace gamemd

// 0x5B2E60
namespace gamemd {
int AbstractClass::COMStub_Ret450_134()
{
return 450;
}
} // namespace gamemd

// 0x5B2EA0
namespace gamemd {
int AbstractClass::COMStub_Ret450_138()
{
return 450;
}
} // namespace gamemd

// 0x5B2EB0
namespace gamemd {
int AbstractClass::COMStub_Ret450_139()
{
return 450;
}
} // namespace gamemd

// 0x5b2ec0
namespace gamemd {
int AbstractClass::COMStub_Ret450_140()
{
  return 450;
}
} // namespace gamemd

// 0x5B2F00
namespace gamemd {
int AbstractClass::COMStub_Ret450_144()
{
return 450;
}
} // namespace gamemd

// 0x5B2F60
namespace gamemd {
int AbstractClass::COMStub_Ret450_150()
{
return 450;
}
} // namespace gamemd

// 0x5B2F70
namespace gamemd {
int AbstractClass::COMStub_Ret450_151()
{
return 450;
}
} // namespace gamemd

// 0x5B3A60
namespace gamemd {
MissionClass * AbstractClass::getWeaponRange(char a2)
{
{
    *(void**)this = vt_MissionClass;
    *(this + 1) = (unsigned int)vt_MissionClass;
    *(this + 2) = (unsigned int)vt_MissionClass;
    *(this + 3) = &vt_MissionClass;
    ObjectClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MissionClass *)this;
}
}
} // namespace gamemd

// 0x5C02E0
namespace gamemd {
char AbstractClass::validatePathNode()
{
{
    return this->abstractFlags;
}
}
} // namespace gamemd

// 0x5C03C0
namespace gamemd {
int AbstractClass::resetPathState()
{
return 33;
}
} // namespace gamemd

// 0x5CEB40
namespace gamemd {
char AbstractClass::COMStub_Return0_7()
{
return 0;
}
} // namespace gamemd

// 0x5D81F0
namespace gamemd {
unsigned int * AbstractClass::processRevealArea(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPSiegeClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D8230
namespace gamemd {
unsigned int * AbstractClass::computeRevealRadius(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPUnholyAllianceClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D8270
namespace gamemd {
unsigned int * AbstractClass::applyRevealToCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPFreeForAllClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D82B0
namespace gamemd {
unsigned int * AbstractClass::checkRevealCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, int a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x344u);
    if ( v6 )
    return MPCooperative::ctor(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}
} // namespace gamemd

// 0x5F4240
namespace gamemd {
int AbstractClass::COMStub_29()
{
return 0;
}
} // namespace gamemd

// 0x5F4250
namespace gamemd {
int AbstractClass::COMStub_28()
{
return 0;
}
} // namespace gamemd

// 0x5F42A0
namespace gamemd {
int AbstractClass::COMStub_Ret2147483647_35()
{
return 0x7FFFFFFF;
}
} // namespace gamemd

// 0x5F42B0
namespace gamemd {
int AbstractClass::COMStub_Return0_37()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x5F42C0
namespace gamemd {
int AbstractClass::COMStub_Return0_38()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x5F42D0
namespace gamemd {
int AbstractClass::COMStub_Return0_39()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x5F42E0
namespace gamemd {
int AbstractClass::COMStub_Return0_40()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x5F42F0
namespace gamemd {
int AbstractClass::COMStub_Return0_56()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F4300
namespace gamemd {
int AbstractClass::COMStub_Return0_57()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F4310
namespace gamemd {
int AbstractClass::COMStub_Return0_63()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F4320
namespace gamemd {
int AbstractClass::COMStub_64()
{
return 0;
}
} // namespace gamemd

// 0x5F4330
namespace gamemd {
int AbstractClass::COMStub_Return0_71()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F4340
namespace gamemd {
int AbstractClass::COMStub_Return0_72()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F4350
namespace gamemd {
int AbstractClass::COMStub_81()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x5F4360
namespace gamemd {
int AbstractClass::COMStub_80()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x5F4370
namespace gamemd {
int AbstractClass::COMStub_Return0_82()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F4380
namespace gamemd {
int AbstractClass::COMStub_89()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x5F4390
namespace gamemd {
int AbstractClass::COMStub_90()
{
return 0;
}
} // namespace gamemd

// 0x5F43A0
namespace gamemd {
int AbstractClass::COMStub_Return0_93()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F43D0
namespace gamemd {
int AbstractClass::COMStub_Return0_96()
{
return 0;
}
} // namespace gamemd

// 0x5F43E0
namespace gamemd {
int AbstractClass::processStateUpdate()
{
return -1;
}
} // namespace gamemd

// 0x5F4400
namespace gamemd {
int AbstractClass::COMStub_Return0_104()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F6B50
namespace gamemd {
int AbstractClass::COMStub_Return0_105()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x5F6BC0
namespace gamemd {
int AbstractClass::COMStub_Return0_33()
{
return 0;
}
} // namespace gamemd

// 0x5F9950
namespace gamemd {
int AbstractClass::SaveLoad_PrefixWrapper(TechnoTypeClass * aP0, ObjectTypeClass * aP1, TechnoTypeClass * aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, aP1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x65C320
namespace gamemd {
char AbstractClass::updateTeamState()
{
return 1;
}
} // namespace gamemd

// 0x65C330
namespace gamemd {
char AbstractClass::processTeamOrder()
{
{
    return (unsigned char)this->referenceCount;
}
}
} // namespace gamemd

// 0x65C4A0
namespace gamemd {
int AbstractClass::checkTeamObjective()
{
{
    return this->field_10;
}
}
} // namespace gamemd

// 0x65C540
namespace gamemd {
void AbstractClass::resetTeamState()
{
{
    this->referenceCount = 0;
}
}
} // namespace gamemd

// 0x65C610
namespace gamemd {
FileClass * AbstractClass::processAITrigger(char a2)
{
{
    *(void**)this = &vt_FileClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (FileClass *)this;
}
}
} // namespace gamemd

// 0x6CE1F0
namespace gamemd {
int AbstractClass::updateTargetTracking(int a1)
{
return 57;
}
} // namespace gamemd

// 0x711E80
namespace gamemd {
char AbstractClass::processWeaponFire()
{
return 1;
}
} // namespace gamemd

// 0x74F330
namespace gamemd {
int AbstractClass::checkBuildingPlacement()
{
return -1;
}
} // namespace gamemd
