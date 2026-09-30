// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/GUID_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"

// 0x4D3590
namespace gamemd {
AbstractClass * FootClass::Destruct()
{

  int v2; // ecx
  int v3; // eax
  int v4; // eax
  AbstractClass *v5; // ecx
  unsigned int *v6; // eax
  ILocomotion *v7; // eax
  CCINIClass *v8; // eax
  CCINIClass *v9; // eax
  void *v11; // [esp+8h] [ebp-4h] BYREF

  v2 = *((unsigned int *)this + 373); /*0x4d3597*/
  *(unsigned int *)this = &FootClass::`vftable'; /*0x4d359d*/
  *((unsigned int *)this + 1) = &FootClass::`vftable'; /*0x4d35a5*/
  *((unsigned int *)this + 2) = &FootClass::`vftable'; /*0x4d35ac*/
  *((unsigned int *)this + 3) = &vt_FootClass; /*0x4d35b3*/
  if ( v2 && MEMORY[0xA8D63C].__pad_1258[268] ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(v2, (IUnknown *)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*(int (**)(char *, void **))(*(unsigned int *)&MEMORY[0x89F690].__pad_579C[61332] + 16))( /*0x4d35e1*/
         &MEMORY[0x89F690].__pad_579C[61332],
         &v11);
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&MEMORY[0x89F690].__pad_579C[61332], v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  v4 = (*(int (**)(char *, void **))(*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9796] + 16))( /*0x4d3608*/
         &MEMORY[0xB077F8].__pad_579C[9796],
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem(&MEMORY[0xB077F8].__pad_579C[9796], v4); /*0x4d3616*/
  v5 = (AbstractClass *)*((unsigned int *)this + 423); /*0x4d361b*/
  if ( v5 ) /*0x4d3623*/
  {
    (*(void (**)(AbstractClass *, int))(*(unsigned int *)v5->__pad_0 + 32))(v5, 1); /*0x4d3629*/
    *((unsigned int *)this + 423) = 0; /*0x4d362c*/
  }
  if ( *((unsigned short *)this + 690) != *(unsigned short *)&MEMORY[0x89F690].__pad_579C[61276] /*0x4d3653*/
    || *((unsigned short *)this + 691) != *(unsigned short *)&MEMORY[0x89F690].__pad_579C[61278] )
  {
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)this + 690); /*0x4d365b*/
    if ( (void *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((int **)this + 337); /*0x4d3677*/
  AudioFileClass::Release((unsigned int *)this + 337); /*0x4d367e*/
  v7 = (ILocomotion *)*((unsigned int *)this + 413); /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (**)(unsigned int))(*(unsigned int *)v7 + 8))(*((unsigned int *)this + 413)); /*0x4d3690*/
  v8 = (CCINIClass *)*((unsigned int *)this + 364); /*0x4d3693*/
  *((unsigned int *)this + 363) = &vt_VectorClass_AbstractClass; /*0x4d36a0*/
  if ( v8 && *((unsigned char *)this + 1465) ) /*0x4d36a8*/
  {
    __3_YAXPAX_Z(v8); /*0x4d36b1*/
    *((unsigned int *)this + 364) = 0; /*0x4d36b9*/
  }
  *((unsigned char *)this + 1465) = 0; /*0x4d36bf*/
  *((unsigned int *)this + 365) = 0; /*0x4d36c5*/
  v9 = (CCINIClass *)*((unsigned int *)this + 355); /*0x4d36cb*/
  *((unsigned int *)this + 354) = &vt_VectorClass_AbstractClass; /*0x4d36d1*/
  if ( v9 && *((unsigned char *)this + 1429) ) /*0x4d36dc*/
  {
    __3_YAXPAX_Z(v9); /*0x4d36e5*/
    *((unsigned int *)this + 355) = 0; /*0x4d36ed*/
  }
  *((unsigned char *)this + 1429) = 0; /*0x4d36f5*/
  *((unsigned int *)this + 356) = 0; /*0x4d36fb*/
  return TechnoClass::DTOR((int)this); /*0x4d3706*/

}
} // namespace ra2

// 0x4D98C0
namespace gamemd {
void FootClass::Destroyed(int a2)
{

  __int64 v3; // rax
  unsigned char v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)House::IsHumanPlayer(*((unsigned int *)this + 135)) /*0x4d98dd*/
    && !*(unsigned char *)((*((int (**)(#375 **))*(unsigned int **)this + 33))(this) + 3412) )
  {
    v3 = ((__int64 (*)(#375 **, unsigned char *))*((unsigned int *)*(unsigned int **)this + 110))(this, v4); /*0x4d98f0*/
    if ( CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(unsigned int *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay(aEvaUnitlost, -1); /*0x4d9911*/
  }

}
} // namespace ra2

// 0x70F7E0
namespace gamemd {
int FootClass::updateThreat()
{

  int v1; // edx
  int v2; // eax

  v1 = *((unsigned int *)this + 96); /*0x70f7e0*/
  v2 = *((unsigned int *)this + 98); /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 < v2 ) /*0x70f7fb*/
      return v2 == (unsigned int)MEMORY[0xA8ED84] - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/

}
} // namespace ra2

// 0x710000
namespace gamemd {
AbstractClass * FootClass::FootClass_ImbueLocomotor()
{

  unsigned int *v6; // esi
  unsigned int *v7; // ecx
  unsigned int *v8; // ecx
  int v9; // eax
  unsigned int *v10; // edi
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int *v21; // ebx
  int v22; // ebp
  int v23; // ecx
  int Member; // eax
  unsigned int *v25; // ecx
  unsigned int *v26; // ebx
  int v27; // [esp+60h] [ebp-1Ch] BYREF
  int v28; // [esp+64h] [ebp-18h] BYREF
  int v29; // [esp+68h] [ebp-14h] BYREF
  int *v30; // [esp+6Ch] [ebp-10h]
  int v31; // [esp+70h] [ebp-Ch] BYREF
  int v32; // [esp+78h] [ebp-4h]

  v6 = ppv; /*0x710006*/
  v30 = a1; /*0x71000d*/
  if ( ppv )
  {
    v7 = (unsigned int *)ppv[180]; /*0x710017*/
    if ( v7 ) /*0x71001f*/
      TaskManager::Update(v7); /*0x710021*/
    v8 = (unsigned int *)v6[421]; /*0x710026*/
    if ( v8 && v8[423] && *(unsigned char *)((*(int (**)(unsigned int *))(*v8 + 132))(v8) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(*(unsigned int *)(v6[421] + 1692), a2, a3); /*0x710058*/
    v9 = v6[413]; /*0x71005d*/
    v10 = v6 + 413; /*0x710063*/
    v27 = 0; /*0x71006b*/
    if ( v9 ) /*0x710073*/
    {
      v11 = StreamClass::Set(&v27, v6 + 413); /*0x71007a*/
      if ( v11 < 0 && v11 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v11); /*0x71008b*/
    }
    if ( *(unsigned char *)((*(int (**)(unsigned int *))(*v6 + 132))(v6) + 1516)
      && v27
      && !v6[172]
      && (*(unsigned __int8 (**)(int))(*(unsigned int *)v27 + 28))(v27) )
    {
      if ( !v27 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v12 = (*(unsigned __int8 (**)(int))(*(unsigned int *)v27 + 20))(v27) == 0; /*0x7100ec*/
      v13 = *v10; /*0x7100ee*/
      if ( v12 ) /*0x7100f0*/
      {
        if ( !v13 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (**)(unsigned int))(*(unsigned int *)*v10 + 72))(*v10); /*0x710137*/
        (*(void (**)(unsigned int *, int))(*v6 + 496))(v6, -1); /*0x710140*/
        (*(void (**)(unsigned int *, int, unsigned int))(*v6 + 488))(v6, 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v13 ) /*0x7100f4*/
          (*(void (**)(unsigned int))(*(unsigned int *)v13 + 8))(*v10); /*0x7100f9*/
        v14 = v27; /*0x7100fc*/
        *v10 = 0; /*0x710100*/
        if ( !v14 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (**)(int, unsigned int *))(*(unsigned int *)v14 + 16))(v14, v6 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v10 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*v10 + 156))(*v10, 0); /*0x71016f*/
      v12 = *v10 == 0; /*0x710189*/
      v32 = MEMORY[0xB0EA98]; /*0x71018b*/
      if ( v12 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (**)(unsigned int, int, int, int, int))(*(unsigned int *)*v10 + 112))( /*0x7101b3*/
        *v10,
        -1,
        MEMORY[0xB0EA90],
        MEMORY[0xB0EA94],
        v32);
      v15 = *v6; /*0x7101b6*/
      v16 = (*(int (**)(unsigned int *, int *))(*v6 + 72))(v6, &v31); /*0x7101bf*/
      (*(void (**)(unsigned int *, int))(v15 + 244))(v6, v16); /*0x7101c5*/
      v17 = *v6; /*0x7101cb*/
      *((unsigned char *)v6 + 1718) = 1; /*0x7101cf*/
      (*(void (**)(unsigned int *))(v17 + 976))(v6); /*0x7101d6*/
      v12 = *v10 == 0; /*0x7101e0*/
      v28 = 0; /*0x7101e2*/
      if ( !v12 ) /*0x7101e6*/
      {
        v18 = StreamClass::Set(&v28, v6 + 413); /*0x7101ed*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v18); /*0x7101fe*/
      }
      ppv = 0; /*0x71020f*/
      v19 = CreateInstanceCOM((LPVOID *)&ppv, &rclsid, 0, 7u); /*0x710213*/
      if ( v19 < 0 && v19 != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(v19); /*0x710224*/
      if ( !ppv ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (**)(unsigned int *, unsigned int *))(*ppv + 12))(ppv, v6); /*0x710243*/
      v29 = 0; /*0x71024a*/
      if ( ppv ) /*0x710250*/
      {
        v20 = StreamClass::Set(&v29, &ppv); /*0x71025b*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v20); /*0x71026c*/
      }
      COMObject::SwapReference(&v28, v29); /*0x71027a*/
      if ( v29 ) /*0x710285*/
        (*(void (**)(int))(*(unsigned int *)v29 + 8))(v29); /*0x71028a*/
      if ( v28 )
      {
        v21 = v30; /*0x710297*/
        if ( v30[171] ) /*0x71029b*/
          TechnoClass::EjectPassengers(v30, 0); /*0x7102a6*/
        if ( v6[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers(v6, 1); /*0x7102b7*/
        if ( !v28 ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (**)(int, unsigned int))(*(unsigned int *)v28 + 12))(v28, *v10); /*0x7102d8*/
        v22 = *v10; /*0x7102db*/
        if ( (unsigned int *)*v10 != ppv ) /*0x7102e3*/
        {
          *v10 = ppv; /*0x7102e7*/
          SuperClass::SetFieldX(v6 + 413); /*0x7102e9*/
          if ( v22 ) /*0x7102f0*/
            (*(void (**)(int))(*(unsigned int *)v22 + 8))(v22); /*0x7102f6*/
        }
        v21[171] = (v6[5] & 1) != 0 ? (unsigned int)v6 : 0;
        *((v6[5] & 1) != 0 ? v6 + 172 : (unsigned int *)688) = v21;
        (*(void (**)(int, int *, int))(*(unsigned int *)v21[171] + 1152))(v21[171], v21, 1); /*0x710326*/
        (*(void (**)(int))(*(unsigned int *)v21[171] + 336))(v21[171]); /*0x710334*/
        v23 = v6[373]; /*0x71033a*/
        if ( v23 ) /*0x710342*/
          TeamClass::LiberateMember_Start(v23, (int)v6, 0xFFFFFFFF, 0); /*0x710349*/
        *((unsigned char *)v6 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember(v6, 0); /*0x710359*/
        if ( Member && (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*(void (**)(unsigned int *, int))(*v6 + 640))(v6, 3); /*0x710374*/
        (*(void (**)(int, int, int))(*(unsigned int *)v21[171] + 488))(v21[171], 5, 1); /*0x710386*/
        v25 = (unsigned int *)v21[171]; /*0x71038c*/
        if ( !*(unsigned char *)(v25[135] + 492) && !*(unsigned char *)((*(int (**)(unsigned int *))(*v25 + 132))(v25) + 1516) ) /*0x7103aa*/
        {
          v26 = (unsigned int *)v21[171]; /*0x7103b4*/
          if ( !*(unsigned char *)(*(unsigned int *)(v26[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (**)(unsigned int *, int, unsigned int))(*v26 + 488))(v26, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv ) /*0x7103e1*/
        (*(void (**)(unsigned int *))(*ppv + 8))(ppv); /*0x7103e6*/
      if ( v28 ) /*0x7103ef*/
        (*(void (**)(int))(*(unsigned int *)v28 + 8))(v28); /*0x7103f4*/
    }
    if ( v27 ) /*0x7103fd*/
      (*(void (**)(int))(*(unsigned int *)v27 + 8))(v27); /*0x710402*/
  }

}
} // namespace ra2

// 0x41C120
namespace gamemd {
void FootClass::Stub(int a1)
{

  ; /*0x41c120*/

}
} // namespace gamemd

// 0x50DAA0
namespace gamemd {
unsigned int FootClass::checkTurning()
{

  unsigned int result; // eax

  result = *((char *)this + 120); /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/

}
} // namespace gamemd
