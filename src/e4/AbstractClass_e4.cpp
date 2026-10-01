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
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/AITriggerTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
struct Type;  // fix_tu_missing_types

// 0x438E70
namespace gamemd {
void AbstractClass::Initialize(TechnoClass * aP1, TechnoClass * aP2)
{

  AbstractClass *v4; // eax
  AbstractClass *v5; // esi
  int v6; // eax
  int v7; // ecx
  void *vtable2; // eax
  int abstractFlags; // ecx
  int uniqueId; // eax
  unsigned int *vtable1; // edx
  unsigned int v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( aP1 && (*(int (**)(void *))(*(unsigned int *)aP1 + 44))(aP1) == 15 && aP2 && !aP2[14] ) /*0x438ea3*/
  {
    v4 = (AbstractClass *)__2_YAPAXI_Z(0x5Cu); /*0x438eaf*/
    v5 = v4; /*0x438eb4*/
    if ( v4 ) /*0x438ebb*/
    {
      AbstractClass::Constructor(v4); /*0x438ec3*/
      v5[2].vtable3 = 0; /*0x438ecb*/
      v5->vtable0 = (unsigned int)(&vt_BombClass); /*0x438ece*/
      v5->vtable1 = &vt_BombClass; /*0x438ed4*/
      v5->vtable2 = &vt_BombClass; /*0x438edb*/
      v5->vtable3 = &vt_BombClass; /*0x438ee2*/
      v5[1].vtable1 = 0; /*0x438ee9*/
      v5[1].vtable2 = 0; /*0x438eec*/
      LOBYTE(v5[2].uniqueId) = 0; /*0x438eef*/
      AudioController::Init((AudioController *)&v5[1].nextArrayIndex); /*0x438ef2*/
      v5[2].vtable2 = *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 524); /*0x438f03*/
      if ( dword_89C678 < dword_89C670 /*0x438f37*/
        || (byte_89C675 || !dword_89C670)
        && dword_89C67C > 0
        && (*(uint8_t (**)(int *, int, unsigned int))(dword_89C668 + 8))(
             &dword_89C668,
             dword_89C670 + dword_89C67C,
             0) )
      {
        v6 = dword_89C678++; /*0x438f44*/
        *((unsigned int *)dword_89C66C + v6) = (unsigned int)(v5); /*0x438f53*/
      }
    }
    else
    {
      v5 = 0; /*0x438f58*/
    }
    v5[1].vtable1 = (void *)(*(int (**)(void *))(*(unsigned int *)aP1 + 60))(aP1); /*0x438f62*/
    v5[1].vtable0 = (unsigned int)(aP1); /*0x438f69*/
    v5[1].vtable2 = aP2; /*0x438f6c*/
    v5[1].uniqueId = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x438f75*/
    v7 = v5[1].uniqueId + *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4048); /*0x438f87*/
    v5[1].vtable3 = 0; /*0x438f89*/
    v5[1].abstractFlags = v7; /*0x438f8c*/
    aP2[14] = v5; /*0x438f8f*/
    vtable2 = this->vtable2; /*0x438f92*/
    if ( this->uniqueId < (int)vtable2 /*0x438fb4*/
      || (BYTE1(this->vtable3) || !vtable2)
      && (abstractFlags = this->abstractFlags, abstractFlags > 0)
      && (*((uint8_t (**)(AbstractClass *, int, unsigned int))this->vtable0 + 2))(
           this,
           (int)vtable2 + abstractFlags,
           0) )
    {
      uniqueId = this->uniqueId; /*0x438fbb*/
      vtable1 = this->vtable1; /*0x438fbe*/
      this->uniqueId = uniqueId + 1; /*0x438fc4*/
      vtable1[uniqueId] = (unsigned int)(v5); /*0x438fc7*/
    }
    *((unsigned int *)this + 12) = 1; /*0x438fca*/
    if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 528) != -1 ) /*0x438fde*/
    {
      if ( (uint8_t)House::IsHumanPlayer(*((House **)aP1 + 135)) ) /*0x438fe6*/
      {
        v12[0] = aP2[39]; /*0x438ffc*/
        v12[1] = aP2[40]; /*0x439007*/
        v12[2] = aP2[41]; /*0x439013*/
        StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 528), v12, 0); /*0x43901d*/
      }
    }
  }

}
}
// 0x44B760
namespace gamemd {
int AbstractClass::AbstractClass_COMStub_133()
{

  MissionClass *v2; // [esp+4h] [ebp+4h]

  return IPersistStream::StubReturn450(v2);

}
} // namespace gamemd

// 0x44B770
namespace gamemd {
int AbstractClass::AbstractClass_COMStub_137()
{

  MissionClass *v2; // [esp+4h] [ebp+4h]

  return AircraftClass::CheckMissionStatus(v2);

}
} // namespace gamemd

// 0x464AC0
namespace gamemd {
bool BuildingTypeClass::CanPlacePath(unsigned short *a2, int a3)
{

  if ( *((unsigned char *)this + 5891) ) /*0x464ac0*/
    return 1; /*0x464aca*/
  else
    return BuildingClass::ValidatePath((TechnoTypeClass *)this, a2, a3); /*0x464ad9*/

}
} // namespace gamemd

// 0x4FB9B0
namespace gamemd {
VectorClass_flat * * AbstractClass_RemoveObjectFromHouse(void * a1, void * a2, void * a3, void * a4, void * a5)
{
  int v5; // ecx
  AbstractClass *v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  void ***result; // eax
  int v44; // ecx

  v6 = this; /*0x4fb9b2*/
  v7 = v5; /*0x4fb9b7*/
  if ( *(AbstractClass **)(v5 + 21728) == this ) /*0x4fb9c1*/
    *(unsigned int *)(v5 + 21728) = 0; /*0x4fb9c3*/
  this = (AbstractClass *)__RTDynamicCast( /*0x4fb9e1*/
                            &v6->vtable0,
                            0,
                            &AbstractClass `RTTI Type Descriptor',
                            (struct TypeDescriptor *)stru_8249A0.Priority,
                            0);
  if ( this ) /*0x4fb9e5*/
  {
    v8 = (*(int (**)(int, AbstractClass **))(*(unsigned int *)(v7 + 56) + 16))(v7 + 56, &this); /*0x4fb9f4*/
    if ( v8 != -1 ) /*0x4fb9fa*/
    {
      v9 = *(unsigned int *)(v7 + 72); /*0x4fb9fc*/
      if ( v8 < v9 ) /*0x4fba01*/
      {
        v10 = v9 - 1; /*0x4fba03*/
        for ( *(unsigned int *)(v7 + 72) = v10; /*0x4fba09*/
              v8 < *(unsigned int *)(v7 + 72);
              *(unsigned int *)(*(unsigned int *)(v7 + 60) + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)(v7 + 60) + 4 * v8) )
        {
          ++v8; /*0x4fba0e*/
        }
      }
    }
  }
  if ( (*((int (**)(AbstractClass *))v6->vtable0 + 11))(v6) == 6 && (unsigned char)p_vtable0 ) /*0x4fba32*/
  {
    v11 = *(unsigned int *)(v7 + 80); /*0x4fba38*/
    p_vtable0 = &v6->vtable0; /*0x4fba45*/
    v12 = (*(int (**)(int, void ***, int))(v11 + 16))(v7 + 80, &p_vtable0, a2); /*0x4fba49*/
    if ( v12 != -1 ) /*0x4fba4f*/
      Vector::RemoveAt((Vector *)(v7 + 80), v12); /*0x4fba54*/
    v13 = *(unsigned int *)(v7 + 128); /*0x4fba59*/
    a4 = &v6->vtable0; /*0x4fba6c*/
    v14 = (*(int (**)(int, void ***))(v13 + 16))(v7 + 128, &a4); /*0x4fba70*/
    if ( v14 != -1 ) /*0x4fba76*/
    {
      v15 = *(unsigned int *)(v7 + 144); /*0x4fba78*/
      if ( v14 < v15 ) /*0x4fba7d*/
      {
        v16 = v15 - 1; /*0x4fba7f*/
        for ( *(unsigned int *)(v7 + 144) = v16; /*0x4fba85*/
              v14 < *(unsigned int *)(v7 + 144);
              *(unsigned int *)(*(unsigned int *)(v7 + 132) + 4 * v14 - 4) = *(unsigned int *)(*(unsigned int *)(v7 + 132) + 4 * v14) )
        {
          ++v14; /*0x4fba8a*/
        }
      }
    }
    v17 = *(unsigned int *)(v7 + 152); /*0x4fba99*/
    a4 = &v6->vtable0; /*0x4fbaa9*/
    v18 = (*(int (**)(int, void ***))(v17 + 16))(v7 + 152, &a4); /*0x4fbab0*/
    if ( v18 != -1 ) /*0x4fbab6*/
      Vector::RemoveAt((Vector *)(v7 + 152), v18); /*0x4fbabb*/
    v19 = *(unsigned int *)(v7 + 176); /*0x4fbac0*/
    a4 = &v6->vtable0; /*0x4fbad3*/
    v20 = (*(int (**)(int, void ***))(v19 + 16))(v7 + 176, &a4); /*0x4fbad7*/
    if ( v20 != -1 ) /*0x4fbadd*/
    {
      v21 = *(unsigned int *)(v7 + 192); /*0x4fbadf*/
      if ( v20 < v21 ) /*0x4fbae4*/
      {
        v22 = v21 - 1; /*0x4fbae6*/
        for ( *(unsigned int *)(v7 + 192) = v22; /*0x4fbaec*/
              v20 < *(unsigned int *)(v7 + 192);
              *(unsigned int *)(*(unsigned int *)(v7 + 180) + 4 * v20 - 4) = *(unsigned int *)(*(unsigned int *)(v7 + 180) + 4 * v20) )
        {
          ++v20; /*0x4fbaf1*/
        }
      }
    }
    v23 = *(unsigned int *)(v7 + 200); /*0x4fbb00*/
    a4 = &v6->vtable0; /*0x4fbb10*/
    v24 = (*(int (**)(int, void ***))(v23 + 16))(v7 + 200, &a4); /*0x4fbb17*/
    if ( v24 != -1 ) /*0x4fbb1d*/
      Vector::RemoveAt((Vector *)(v7 + 200), v24); /*0x4fbb22*/
    v25 = *(unsigned int *)(v7 + 224); /*0x4fbb27*/
    a4 = &v6->vtable0; /*0x4fbb3a*/
    v26 = (*(int (**)(int, void ***))(v25 + 16))(v7 + 224, &a4); /*0x4fbb3e*/
    if ( v26 != -1 ) /*0x4fbb44*/
    {
      v27 = *(unsigned int *)(v7 + 240); /*0x4fbb46*/
      if ( v26 < v27 ) /*0x4fbb4b*/
      {
        v28 = v27 - 1; /*0x4fbb4d*/
        for ( *(unsigned int *)(v7 + 240) = v28; /*0x4fbb53*/
              v26 < *(unsigned int *)(v7 + 240);
              *(unsigned int *)(*(unsigned int *)(v7 + 228) + 4 * v26 - 4) = *(unsigned int *)(*(unsigned int *)(v7 + 228) + 4 * v26) )
        {
          ++v26; /*0x4fbb58*/
        }
      }
    }
    v29 = *(unsigned int *)(v7 + 248); /*0x4fbb67*/
    a4 = &v6->vtable0; /*0x4fbb77*/
    v30 = (*(int (**)(int, void ***))(v29 + 16))(v7 + 248, &a4); /*0x4fbb7e*/
    if ( v30 != -1 ) /*0x4fbb84*/
      Vector::RemoveAt((Vector *)(v7 + 248), v30); /*0x4fbb89*/
    v31 = *(unsigned int *)(v7 + 272); /*0x4fbb8e*/
    a4 = &v6->vtable0; /*0x4fbba1*/
    v32 = (*(int (**)(int, void ***))(v31 + 16))(v7 + 272, &a4); /*0x4fbba5*/
    if ( v32 != -1 ) /*0x4fbbab*/
      Vector::RemoveAt((Vector *)(v7 + 272), v32); /*0x4fbbb0*/
    v33 = *(unsigned int *)(v7 + 296); /*0x4fbbb5*/
    a4 = &v6->vtable0; /*0x4fbbc8*/
    v34 = (*(int (**)(int, void ***))(v33 + 16))(v7 + 296, &a4); /*0x4fbbcc*/
    if ( v34 != -1 ) /*0x4fbbd2*/
    {
      v35 = *(unsigned int *)(v7 + 312); /*0x4fbbd4*/
      if ( v34 < v35 ) /*0x4fbbd9*/
      {
        v36 = v35 - 1; /*0x4fbbdb*/
        for ( *(unsigned int *)(v7 + 312) = v36; /*0x4fbbe1*/
              v34 < *(unsigned int *)(v7 + 312);
              *(unsigned int *)(*(unsigned int *)(v7 + 300) + 4 * v34 - 4) = *(unsigned int *)(*(unsigned int *)(v7 + 300) + 4 * v34) )
        {
          ++v34; /*0x4fbbe6*/
        }
      }
    }
    v37 = *(unsigned int *)(v7 + 320); /*0x4fbbf5*/
    a4 = &v6->vtable0; /*0x4fbc05*/
    v38 = (*(int (**)(int, void ***))(v37 + 16))(v7 + 320, &a4); /*0x4fbc0c*/
    if ( v38 != -1 ) /*0x4fbc12*/
      Vector::RemoveAt((Vector *)(v7 + 320), v38); /*0x4fbc17*/
    v39 = *(unsigned int *)(v7 + 104); /*0x4fbc1c*/
    a4 = &v6->vtable0; /*0x4fbc29*/
    v40 = (*(int (**)(int, void ***))(v39 + 16))(v7 + 104, &a4); /*0x4fbc2d*/
    if ( v40 != -1 ) /*0x4fbc33*/
    {
      v41 = *(unsigned int *)(v7 + 120); /*0x4fbc35*/
      if ( v40 < v41 ) /*0x4fbc3a*/
      {
        v42 = v41 - 1; /*0x4fbc3c*/
        for ( *(unsigned int *)(v7 + 120) = v42; /*0x4fbc42*/
              v40 < *(unsigned int *)(v7 + 120);
              *(unsigned int *)(*(unsigned int *)(v7 + 108) + 4 * v40 - 4) = *(unsigned int *)(*(unsigned int *)(v7 + 108) + 4 * v40) )
        {
          ++v40; /*0x4fbc47*/
        }
      }
    }
    HouseClass::CalculateCostMultipliers((float *)v7); /*0x4fbc58*/
  }
  result = (void ***)(v7 + 528); /*0x4fbc5d*/
  v44 = 12; /*0x4fbc63*/
  do /*0x4fbc73*/
  {
    if ( *result == (void **)v6 ) /*0x4fbc6b*/
      *result = 0; /*0x4fbc6d*/
    ++result; /*0x4fbc6f*/
    --v44; /*0x4fbc72*/
  }
  while ( v44 ); /*0x4fbc73*/
  if ( *(AbstractClass **)(v7 + 21420) == v6 ) /*0x4fbc7b*/
    *(unsigned int *)(v7 + 21420) = 0; /*0x4fbc7d*/
  if ( *(AbstractClass **)(v7 + 21424) == v6 ) /*0x4fbc89*/
    *(unsigned int *)(v7 + 21424) = 0; /*0x4fbc8b*/
  if ( *(AbstractClass **)(v7 + 21428) == v6 ) /*0x4fbc97*/
    *(unsigned int *)(v7 + 21428) = 0; /*0x4fbc99*/
  if ( *(AbstractClass **)(v7 + 21432) == v6 ) /*0x4fbca5*/
    *(unsigned int *)(v7 + 21432) = 0; /*0x4fbca7*/
  if ( *(AbstractClass **)(v7 + 21436) == v6 ) /*0x4fbcb3*/
    *(unsigned int *)(v7 + 21436) = 0; /*0x4fbcb5*/
  if ( *(AbstractClass **)(v7 + 21440) == v6 ) /*0x4fbcc1*/
    *(unsigned int *)(v7 + 21440) = 0; /*0x4fbcc3*/
  if ( *(AbstractClass **)(v7 + 21444) == v6 ) /*0x4fbccf*/
    *(unsigned int *)(v7 + 21444) = 0; /*0x4fbcd1*/
  if ( *(AbstractClass **)(v7 + 21448) == v6 ) /*0x4fbcdd*/
    *(unsigned int *)(v7 + 21448) = 0; /*0x4fbcdf*/
  if ( *(AbstractClass **)(v7 + 21452) == v6 ) /*0x4fbceb*/
    *(unsigned int *)(v7 + 21452) = 0; /*0x4fbced*/
  return result; /*0x4fbcf3*/
}
}
// 0x5C03D0
namespace gamemd {
ObjectClass * * AbstractClass_getPathDirection(void * a1, void * a2, void * a3)
{
  int v3; // ebx
  char result; // al
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // [esp+4h] [ebp-20h] BYREF
  int v9; // [esp+8h] [ebp-1Ch]
  int *v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = g_MissionQueueFrame.localVariables[604]; /*0x5c03d0*/
  if ( g_MissionQueueFrame.localVariables[604] ) /*0x5c03da*/
  {
    (*((void (**)(DSurface *, unsigned int))DSurface_Alternate->DSurface_field_0x0 + 6))(DSurface_Alternate, 0); /*0x5c03ea*/
    Frame::Present((int)DSurface_Alternate, v3, a2, a3, 0, v8, v9, v10); /*0x5c03f7*/
    result = TestBitArray(15); /*0x5c0401*/
    if ( !result ) /*0x5c0408*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5c0419*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5c042b*/
      v5 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5c0446*/
      v6 = Rect.top + *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5c0449*/
      v7 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5c044b*/
      v10 = *(int **)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5c044e*/
      v9 = v6; /*0x5c0454*/
      v8 = Rect.left + v7; /*0x5c045e*/
      v11 = v5; /*0x5c0462*/
      return (*((int (**)(DSurface *, int *, unsigned int, int, unsigned int, int))g_DSurface_Primary->DSurface_field_0x0 /*0x5c0477*/
              + 2))(
               g_DSurface_Primary,
               &v8,
               *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 8),
               g_MissionQueueFrame.localVariables[604] + 36,
               0,
               1);
    }
  }
  return (gamemd::ObjectClass **)(result);
}
}
// 0x5D7FD0
namespace gamemd {
unsigned int * AbstractClass::checkVisibility(char a2)
{

  this->vtable0 = &MultiplayerGameMode::vt_InitializerBase; /*0x5d7fd9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fdf*/
    __3_YAXPAX_Z(this); /*0x5d7fe2*/
  return &this->vtable0; /*0x5d7fec*/

}
}
// 0x5D8030
namespace gamemd {
unsigned int * AbstractClass::updateVisibilityState(char a2)
{

  this->vtable0 = &MultiplayerGameMode::vt_InitializerBase; /*0x5d8039*/
  if ( (a2 & 1) != 0 ) /*0x5d803f*/
    __3_YAXPAX_Z(this); /*0x5d8042*/
  return &this->vtable0; /*0x5d804c*/

}
}
// 0x5D8050
namespace gamemd {
unsigned int * AbstractClass::processFogReveal(char a2)
{

  this->vtable0 = &MultiplayerGameMode::vt_InitializerBase; /*0x5d8059*/
  if ( (a2 & 1) != 0 ) /*0x5d805f*/
    __3_YAXPAX_Z(this); /*0x5d8062*/
  return &this->vtable0; /*0x5d806c*/

}
}
// 0x5D8070
namespace gamemd {
unsigned int * AbstractClass::checkShroudState(char a2)
{

  this->vtable0 = &MultiplayerGameMode::vt_InitializerBase; /*0x5d8079*/
  if ( (a2 & 1) != 0 ) /*0x5d807f*/
    __3_YAXPAX_Z(this); /*0x5d8082*/
  return &this->vtable0; /*0x5d808c*/

}
}
// 0x5D8090
namespace gamemd {
unsigned int * AbstractClass::updateShroudMap(char a2)
{

  this->vtable0 = &MultiplayerGameMode::vt_InitializerBase; /*0x5d8099*/
  if ( (a2 & 1) != 0 ) /*0x5d809f*/
    __3_YAXPAX_Z(this); /*0x5d80a2*/
  return &this->vtable0; /*0x5d80ac*/

}
}
// 0x70D4A0
namespace gamemd {
void AbstractClass::ClearTargetToMeClearManagerTarget(int a1)
{

  int v2; // edi
  int i; // ebx
  bool v4; // cl
  unsigned int *v5; // esi
  int v6; // eax
  int j; // ecx
  int v8; // eax

  if ( a1 )
    v2 = (*(unsigned char *)(a1 + 20) & 1) != 0 ? a1 : 0;
  else
    v2 = 0; /*0x70d4a9*/
  for ( i = dword_A8EC88 - 1; i >= 0; --i ) /*0x70d4c6*/
  {
    v4 = 1; /*0x70d4d2*/
    v5 = (unsigned int *)*((unsigned int *)dword_A8EC7C + i); /*0x70d4d6*/
    if ( v2 ) /*0x70d4d9*/
    {
      v6 = v5[165]; /*0x70d4db*/
      if ( v6 ) /*0x70d4e3*/
      {
        if ( *(unsigned int *)(v6 + 80) == a1 && *(int *)(v2 + 108) > 0 ) /*0x70d4ef*/
          v4 = *(unsigned char *)(v2 + 144) == 0; /*0x70d4fb*/
      }
    }
    if ( v5[173] == a1 && v4 ) /*0x70d507*/
    {
      (*(void (**)(unsigned int))(*v5 + 504))(*((unsigned int *)dword_A8EC7C + i)); /*0x70d50d*/
      if ( (*(int (**)(unsigned int *))(*v5 + 44))(v5) == 2 && v5[43] == 25 ) /*0x70d526*/
      {
        v5[47] = 0; /*0x70d528*/
        *((unsigned char *)v5 + 1746) = 0; /*0x70d532*/
      }
      if ( v5[173] == a1 ) /*0x70d53f*/
        (*(void (**)(unsigned int *, unsigned int))(*v5 + 968))(v5, 0); /*0x70d547*/
    }
  }
  for ( j = dword_8B40F8 - 1; j >= 0; --j ) /*0x70d560*/
  {
    v8 = *((unsigned int *)dword_8B40EC + j); /*0x70d567*/
    if ( *(unsigned int *)(v8 + 60) == a1 ) /*0x70d56d*/
      *(unsigned int *)(v8 + 60) = 0; /*0x70d56f*/
    if ( *(unsigned int *)(v8 + 64) == a1 ) /*0x70d575*/
      *(unsigned int *)(v8 + 64) = 0; /*0x70d577*/
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

  v4 = (*((int (**)(AbstractClass *))aP0->vtable0 + 11))(aP0); /*0x7258de*/
  v5 = 0; /*0x7258e9*/
  if ( *(AbstractClass **)&stru_87F5F0.__pad_E12[1418] == aP0 ) /*0x7258e7*/
    *(unsigned int *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x7258eb*/
  if ( *(AbstractClass **)&stru_87F5F0.__pad_E12[1422] == aP0 ) /*0x7258fb*/
  {
    *(unsigned int *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x725903*/
    Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x725909*/
  }
  switch ( v4 ) /*0x725911*/
  {
    case 24: /*0x725911*/
      if ( aP0 == *(AbstractClass **)&(unsigned int *)((char *)&stru_A8EB00 + 404) ) /*0x72591d*/
        *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 404) = 0; /*0x72591f*/
      break;
    case 13: /*0x725911*/
      for ( i = 0; i < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16]; ++i ) /*0x7259e8*/
        (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[4] /*0x7259f7*/
                                                                           + 4 * i)
                                                             + 40))(
          *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * i),
          aP0,
          aP1);
      goto LABEL_20; /*0x725a02*/
    case 4: /*0x725911*/
      for ( j = 0; j < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)); ++j ) /*0x725a28*/
        (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * j) + 40))( /*0x725a3a*/
          *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * j),
          aP0,
          aP1);
      return; /*0x725a45*/
  }
  if ( aP0 && (aP0->abstractFlags & 2) != 0 ) /*0x725938*/
  {
    if ( g_BuildingLoadQueue_Array.Foundation[0] > 0 ) /*0x725945*/
    {
      do /*0x72595f*/
      {
        (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(g_BuildingLoadQueue_Array.PowerDrain /*0x725954*/
                                                                           + 4 * v5)
                                                             + 40))(
          *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5),
          aP0,
          aP1);
        ++v5; /*0x72595c*/
      }
      while ( v5 < g_BuildingLoadQueue_Array.Foundation[0] ); /*0x72595f*/
    }
    AbstractClass::processDetection((AbstractClass *)&stru_87F5D8, (int)aP0); /*0x725967*/
    AbstractClass::processStateTransition((AbstractClass *)&g_MissionQueueFrame, (int)aP0); /*0x725972*/
    for ( k = dword_8A0218 - 1; k >= 0; --k ) /*0x725981*/
      DiskLaserClass::PointerGotInvalid(*((DiskLaserClass **)dword_8A020C + k), (int)aP0); /*0x72598d*/
    if ( v4 == 15 || v4 == 1 || v4 == 2 ) /*0x7259a2*/
      nullsub_3((int)aP0); /*0x7259aa*/
    AbstractClass::processRadarEvent(aP0); /*0x7259b1*/
    if ( g_TacticalClass_Instance ) /*0x7259be*/
      (*(void (**)(LPPERSISTSTREAM, AbstractClass *, int))(*(unsigned int *)g_TacticalClass_Instance + 40))( /*0x7259c5*/
        g_TacticalClass_Instance,
        aP0,
        1);
LABEL_20:
    Array::RemoveItemByValue((int)aP0, aP1); /*0x7259c8*/
    return; /*0x7259d9*/
  }
  if ( __RTDynamicCast( /*0x725a5a*/
         &aP0->vtable0,
         0,
         &AbstractClass `RTTI Type Descriptor',
         &AbstractTypeClass `RTTI Type Descriptor',
         0) )
  {
    for ( m = 0; m < g_BuildingLoadQueue_Array.LightBlueTint; ++m ) /*0x725a6f*/
      (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(g_BuildingLoadQueue_Array.LightIntensity /*0x725a7d*/
                                                                         + 4 * m)
                                                           + 40))(
        *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * m),
        aP0,
        aP1);
    InitInterfaceStubsCOM(*(ObjectClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x725a92*/
  }
  else
  {
    switch ( v4 ) /*0x725ab1*/
    {
      case 12: /*0x725ab1*/
        for ( n = 0; n < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]; ++n ) /*0x725b34*/
          (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(*(unsigned int *)&g_BuildingLoadQueue_Array.BuildupLoaded /*0x725b42*/
                                                                             + 4 * n)
                                                               + 40))(
            *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * n),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((MapClass *)&stru_87F5F0.__pad_58[416], (int)aP0, 1); /*0x725b57*/
        break; /*0x725b61*/
      case 34: /*0x725ab1*/
        for ( ii = 0; ii < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)); ++ii ) /*0x725bc3*/
          (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * ii) /*0x725bd1*/
                                                               + 40))(
            *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * ii),
            aP0,
            aP1);
        break; /*0x725bdc*/
      case 38: /*0x725ab1*/
        for ( jj = 0; jj < g_BuildingLoadQueue_Array.unknown___2; ++jj ) /*0x725b05*/
          (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(g_BuildingLoadQueue_Array.ExitCoord[1] /*0x725b18*/
                                                                             + 4 * jj)
                                                               + 40))(
            *(unsigned int *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * jj),
            aP0,
            aP1);
        break; /*0x725b23*/
      case 44: /*0x725ab1*/
        for ( kk = 0; kk < *(int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 32); ++kk ) /*0x725ac1*/
          (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 20) /*0x725ad0*/
                                                                             + 4 * kk)
                                                               + 40))(
            *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 20) + 4 * kk),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((MapClass *)&stru_87F5F0.__pad_58[416], (int)aP0, 1); /*0x725ae5*/
        Array::RemoveItemByValue((int)aP0, aP1); /*0x725af1*/
        break; /*0x725afb*/
      case 47: /*0x725ab1*/
      case 48: /*0x725ab1*/
        for ( mm = 0; mm < g_BuildingLoadQueue_Array.GateCloseDelay[0]; ++mm ) /*0x725b6b*/
          (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] /*0x725b7d*/
                                                                             + 4 * mm)
                                                               + 40))(
            *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * mm),
            aP0,
            aP1);
        break; /*0x725b88*/
      case 51: /*0x725ab1*/
        for ( nn = 0; nn < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 7)); ++nn ) /*0x725b99*/
          (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)) + 4 * nn) /*0x725ba7*/
                                                               + 40))(
            *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)) + 4 * nn),
            aP0,
            aP1);
        break; /*0x725bb2*/
      case 60: /*0x725ab1*/
        for ( i1 = 0; i1 < g_BuildingLoadQueue_Array.TargetCoordOffset[1]; ++i1 ) /*0x725bed*/
          (*(void (**)(unsigned int, AbstractClass *, int))(**(unsigned int **)(g_BuildingLoadQueue_Array.Adjacent /*0x725bfb*/
                                                                             + 4 * i1)
                                                               + 40))(
            *(unsigned int *)(g_BuildingLoadQueue_Array.Adjacent + 4 * i1),
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
void AbstractClass::DTOR(void *a1_1)
{

  int result; // eax

  this->vtable0 = &vt_AbstractClass; /*0x4101f0*/
  this->vtable1 = &vt_AbstractClass; /*0x4101f6*/
  this->vtable2 = &vt_AbstractClass; /*0x4101fd*/
  this->vtable3 = &vt_AbstractClass; /*0x410204*/
  return result; /*0x41020b*/

}
} // namespace gamemd

// 0x410220
namespace gamemd {
int AbstractClass::GetVtable3(AbstractClass * aP0)
{

  return (int)aP0->vtable3; /*0x410227*/

}
} // namespace gamemd

// 0x410230
namespace gamemd {
int AbstractClass::GenerateUniqueID(int a1)
{

  int result; // eax

  if ( dword_A8B230 ) /*0x410238*/
  {
    result = AbstractClass::updateAITimer(dword_A8B230); /*0x410246*/
    a1->vtable3 = (void *)result; /*0x41024f*/
  }
  else
  {
    a1->vtable3 = 0; /*0x410240*/
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
  result = (*(int (**)(int *, int **, int, unsigned int))(v5 + 16))(v8, &aP1, 4, 0); /*0x410348*/
  if ( result >= 0 ) /*0x41034d*/
  {
    v6 = *v3; /*0x410352*/
    v7 = (*(int (**)(int *, unsigned int))(*aP0 + 48))(aP0, 0); /*0x410358*/
    result = (*(int (**)(int *, int *, int))(v6 + 16))(v3, aP0, v7); /*0x41035e*/
    if ( result >= 0 ) /*0x410364*/
    {
      if ( aP2 ) /*0x41036c*/
        *((unsigned char *)aP0 + 32) = 0; /*0x41036e*/
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
  result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &aP1, 4, 0); /*0x41039e*/
  if ( result >= 0 ) /*0x4103a3*/
  {
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, aP1, (int)aP0); /*0x4103b7*/
    v4 = aP0[7]; /*0x4103be*/
    v5 = *v2; /*0x4103c1*/
    v6 = (*(int (**)(unsigned int *, unsigned int))(*aP0 + 48))(aP0, 0); /*0x4103c7*/
    result = (*(int (**)(int *, unsigned int *, int))(v5 + 12))(v2, aP0, v6); /*0x4103cd*/
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

  *(unsigned int *)this->__pad_0 = &Surface_Vtable; /*0x4115d9*/
  if ( (a2 & 1) != 0 ) /*0x4115df*/
    __3_YAXPAX_Z(this); /*0x4115e2*/
  return (std::locale::facet *)this; /*0x4115ec*/

}
} // namespace gamemd

// 0x417FD0
namespace gamemd {
int AbstractClass::GetField9()
{

  return dword_8871E0->PoseDir; /*0x417fd8*/

}
} // namespace gamemd

// 0x425520
namespace gamemd {
unsigned int AbstractClass::updateLayer()
{

  return *((unsigned int *)this + 50); /*0x425526*/

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

  return (int)&g_INI_Key_Civilian.__pad_16D[15]; /*0x4263c5*/

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

  return *((uint16_t *)this + 81); /*0x426a89*/

}
} // namespace gamemd

// 0x427270
namespace gamemd {
std::locale::facet * AbstractClass::setMapCoords(char a2)
{

  this->m_0 = (int)&vt_Animate; /*0x427279*/
  if ( (a2 & 1) != 0 ) /*0x42727f*/
    __3_YAXPAX_Z(this); /*0x427282*/
  return (std::locale::facet *)this; /*0x42728c*/

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
void AbstractClass_queryInterface(AbstractClass *aP0)
{
  void *v3; // esi
  void *GroundHeight; // eax
  int v6; // [esp+4h] [ebp-Ch] BYREF
  void *v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v6 = *a2; /*0x464a7a*/
  v7 = (void *)a2[1]; /*0x464a8b*/
  v8 = a2[2]; /*0x464a92*/
  GroundHeight = (void *)Cell::GetGroundHeight(&v6); /*0x464a96*/
  aP0->vtable0 = v3; /*0x464aa5*/
  aP0->vtable1 = v7; /*0x464aab*/
  aP0->vtable2 = GroundHeight; /*0x464aaf*/
  return &aP0->vtable0; /*0x464a9f*/
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

  *(unsigned int *)this->BlitterCore = &vt_Blitter; /*0x499cc9*/
  if ( (a2 & 1) != 0 ) /*0x499ccf*/
    __3_YAXPAX_Z(this); /*0x499cd2*/
  return (std::locale::facet *)this; /*0x499cdc*/

}
} // namespace gamemd

// 0x499CE0
namespace gamemd {
BlitPlainXlat * AbstractClass::setTileIndex(char a2)
{

  *(unsigned int *)this = &vt_Blitter; /*0x499ce9*/
  if ( (a2 & 1) != 0 ) /*0x499cef*/
    __3_YAXPAX_Z(this); /*0x499cf2*/
  return this; /*0x499cfc*/

}
} // namespace gamemd

// 0x499D00
namespace gamemd {
BlitTransXlat * AbstractClass::getOverlayType(char a2)
{

  *(unsigned int *)this = &vt_Blitter; /*0x499d09*/
  if ( (a2 & 1) != 0 ) /*0x499d0f*/
    __3_YAXPAX_Z(this); /*0x499d12*/
  return this; /*0x499d1c*/

}
} // namespace gamemd

// 0x499D20
namespace gamemd {
std::locale::facet * AbstractClass::setOverlayFlags(char a2)
{

  *(unsigned int *)this = &vt_Blitter; /*0x499d29*/
  if ( (a2 & 1) != 0 ) /*0x499d2f*/
    __3_YAXPAX_Z(this); /*0x499d32*/
  return this; /*0x499d3c*/

}
} // namespace gamemd

// 0x499DA0
namespace gamemd {
RLEBlitter * AbstractClass::clearOverlayFlags(char a2)
{

  *(unsigned int *)this->RLEBlitterCore = &vt_RLEBlitter; /*0x499da9*/
  if ( (a2 & 1) != 0 ) /*0x499daf*/
    __3_YAXPAX_Z(this); /*0x499db2*/
  return (std::locale::facet *)this; /*0x499dbc*/

}
} // namespace gamemd

// 0x4CA160
namespace gamemd {
int AbstractClass::GetType(void *a1_1, void *a2_1)
{

  return *((unsigned int *)this + 22); /*0x4ca163*/

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

  if ( *((unsigned char *)this + 12) ) /*0x4e01c0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4e01d5*/
  else
    return 0; /*0x4e01c7*/

}
} // namespace gamemd

// 0x4F4C00
namespace gamemd {
GScreenClass * AbstractClass::getHouseHandle(char a2)
{

  this->vfptr[0] = (int)&off_7EA6FC; /*0x4f4c09*/
  if ( (a2 & 1) != 0 ) /*0x4f4c0f*/
    __3_YAXPAX_Z(this); /*0x4f4c12*/
  return (std::locale::facet *)this; /*0x4f4c1c*/

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

  return *((unsigned int *)this + 12); /*0x50e373*/

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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x5439ff*/
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
MissionClass * AbstractClass::getWeaponRange(unsigned int * Block, char a2)
{

  Block->vtable0 = &vt_MissionClass; /*0x5b3a63*/
  Block->vtable1 = &vt_MissionClass; /*0x5b3a69*/
  Block->vtable2 = &vt_MissionClass; /*0x5b3a70*/
  Block->vtable3 = &vt_MissionClass; /*0x5b3a77*/
  ObjectClass::Dtor((ObjectClass *)Block); /*0x5b3a7e*/
  if ( (a2 & 1) != 0 ) /*0x5b3a88*/
    __3_YAXPAX_Z(Block); /*0x5b3a8b*/
  return &Block->vtable0; /*0x5b3a95*/

}
} // namespace gamemd

// 0x5C02E0
namespace gamemd {
char AbstractClass::validatePathNode()
{

  return this->playing; /*0x5c02e3*/

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

  unsigned int *v6; // eax

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

  unsigned int *v6; // eax

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

  unsigned int *v6; // eax

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

  unsigned int *v6; // eax

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
int AbstractClass::COMStub_Return0_38(void *a1_1)
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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, (int *)aP1, aP2); /*0x5f995f*/
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

  return *((unsigned char *)this + 28); /*0x65c333*/

}
} // namespace gamemd

// 0x65C4A0
namespace gamemd {
int AbstractClass::checkTeamObjective()
{

  return (int)this->RAMFileClass_field_0x10; /*0x65c4a3*/

}
} // namespace gamemd

// 0x65C540
namespace gamemd {
void AbstractClass::resetTeamState()
{

  *((unsigned char *)this + 28) = 0; /*0x65c540*/

}
} // namespace gamemd

// 0x65C610
namespace gamemd {
FileClass * AbstractClass::processAITrigger(unsigned int * Block, char a2)
{

  *Block = (FileClass)&vt_FileClass; /*0x65c619*/
  if ( (a2 & 1) != 0 ) /*0x65c61f*/
    __3_YAXPAX_Z(Block); /*0x65c622*/
  return Block; /*0x65c62c*/

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
