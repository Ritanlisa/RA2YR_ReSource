// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/AlphaShapeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AircraftClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AudioClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WTFMode_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char a1;  // data: 0x831898 truth(IDA G42.57w9)


// 0x41D860
namespace gamemd {  // G42.18 ns repair
int AirstrikeClass::SpawnAircraft(int * a2, void *a2_2)
{

  unsigned int *v3; // eax
  int v5; // ebp
  int v6; // ebx
  unsigned int *v8; // eax
  void *v9; // eax
  HouseClass *v10; // eax
  int *result; // eax
  unsigned int *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-14h] [ebp-38h]
  int v16; // [esp-Ch] [ebp-30h]
  __int16 v17[2]; // [esp+10h] [ebp-14h] BYREF
  int v18; // [esp+14h] [ebp-10h]
  unsigned int v19[3]; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+28h] [ebp+4h]

  v3 = this->AirstrikeClass_field_54; /*0x41d869*/
  this->AirstrikeClass_field_3C = 1; /*0x41d86c*/
  this->AirstrikeClass_field_3D = 1; /*0x41d870*/
  this->u32_34 = 0; /*0x41d874*/
  v5 = v3[894]; /*0x41d881*/
  v18 = *(unsigned int *)(**&dword_8871E0->qC78 + 3576); /*0x41d895*/
  if ( (unsigned __int8)Audio::IsLoud(&this->owner) ) /*0x41d8a2*/
  {
    v6 = this->AirstrikeClass_field_28; /*0x41d8ae*/
    v5 = *(unsigned int *)(this->AirstrikeClass_field_58 + 3576); /*0x41d8b1*/
  }
  else
  {
    v6 = this->AirstrikeClass_field_24; /*0x41d8b9*/
  }
  v8 = (unsigned int *)(*(int (**)(int *, unsigned int *))(*a3 + 72))(a3, v19); /*0x41d8c9*/
  LOWORD(v20) = *v8 / 256; /*0x41d8dc*/
  HIWORD(v20) = v8[1] / 256; /*0x41d8f5*/
  *(unsigned int *)v17 = v20; /*0x41d902*/
  v9 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17); /*0x41d907*/
  v16 = v18; /*0x41d916*/
  v15 = (int)v9; /*0x41d919*/
  v10 = (HouseClass *)(*(int (**)(unsigned int))(*this->owner + 60))(this->owner); /*0x41d91f*/
  result = (int *)PlaceAircraftOnMap(v10, v5, a2, v6, 1, v15, 0, v16, 0, this); /*0x41d926*/
  this->__pad_02C = result; /*0x41d92d*/
  this->EliteAirstrikeTeamTypeIndex = result; /*0x41d930*/
  if ( result ) /*0x41d933*/
  {
    result = this->AirstrikeClass_field_5C; /*0x41d939*/
    if ( result ) /*0x41d93e*/
    {
      v12 = result + 39; /*0x41d940*/
      v19[0] = *v12; /*0x41d949*/
      v19[1] = v12[1]; /*0x41d956*/
      v19[2] = v12[2]; /*0x41d961*/
      result = StartAudioControllerAt(*&dword_8871E0->q260, v19, 0); /*0x41d96b*/
    }
    this->__pad_050 = a3; /*0x41d972*/
    if ( a3 ) /*0x41d975*/
    {
      result = (int *)(*(int (**)(int *))(*a3 + 44))(a3); /*0x41d97f*/
      if ( result == 6 ) /*0x41d985*/
      {
        v13 = *a3; /*0x41d98b*/
        a3[165] = this; /*0x41d994*/
        (*(void (**)(int *, int))(v13 + 348))(a3, 100000); /*0x41d99a*/
        *((unsigned char *)a3 + 1784) = *((unsigned char *)&dword_8871E0[1].SmallVisceroid /*0x41d9b8*/
                                + 2 * dword_8871E0[1].PoseDir
                                + dword_8871E0[1].PoseDir);
        *((unsigned char *)a3 + 1785) = *((unsigned char *)&dword_8871E0[1].SmallVisceroid /*0x41d9d5*/
                                + 2 * dword_8871E0[1].PoseDir
                                + dword_8871E0[1].PoseDir
                                + 1);
        v14 = *a3; /*0x41d9f1*/
        *((unsigned char *)a3 + 1786) = *((unsigned char *)&dword_8871E0[1].SmallVisceroid /*0x41d9f5*/
                                + 2 * dword_8871E0[1].PoseDir
                                + dword_8871E0[1].PoseDir
                                + 2);
        a3[447] = 1; /*0x41d9fb*/
        return (int *)(*(int (**)(int *, int))(v14 + 292))(a3, 2); /*0x41da05*/
      }
    }
  }
  return result; /*0x41da0b*/

}
} // namespace ra2

// 0x41DA20
namespace gamemd {
int AirstrikeClass::ReassignTarget(int a2, void *a2_2)
{

  int v3; // ecx
  unsigned int *v4; // eax
  int v5; // ecx
  int v6; // esi
  unsigned int *v7; // edi
  int v8; // eax
  unsigned int *v9; // esi
  int v10; // eax
  int v11; // eax
  int *v12; // esi
  int v13; // edi

  v3 = this->AirstrikeClass_field_5C; /*0x41da26*/
  if ( v3 && (v4 = *(unsigned int **)(v3 + 1496)) != 0 )
  {
    v5 = *(unsigned int *)(v3 + 764); /*0x41da37*/
    while ( v4[191] == v5 ) /*0x41da43*/
    {
      v4 = (unsigned int *)v4[374]; /*0x41da45*/
      if ( !v4 ) /*0x41da4d*/
        goto LABEL_6; /*0x41da4d*/
    }
    LOBYTE(v8) = WTFMode::ResetUnitFlags((WTFMode *)this); /*0x41da5c*/
  }
  else
  {
LABEL_6:
    v6 = this->__pad_050; /*0x41da4f*/
    if ( v6 )
      v7 = (*(int (**)(unsigned int))(*(unsigned int *)v6 + 44))(this->__pad_050) == 6 ? (unsigned int *)v6 : 0;
    else
      v7 = 0; /*0x41da56*/
    if ( a2 )
      v9 = (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 6 ? (unsigned int *)a2 : 0;
    else
      v9 = 0; /*0x41da84*/
    if ( v7 ) /*0x41da9e*/
    {
      v10 = *v7; /*0x41daa0*/
      v7[165] = 0; /*0x41daa4*/
      (*(void (**)(unsigned int *))(v10 + 344))(v7); /*0x41daae*/
      (*(void (**)(unsigned int *, int))(*v7 + 292))(v7, 2); /*0x41daba*/
    }
    this->__pad_050 = 0; /*0x41dac2*/
    if ( v9 ) /*0x41dac9*/
    {
      v11 = *v9; /*0x41dacb*/
      v9[165] = this; /*0x41dad4*/
      (*(void (**)(unsigned int *, int))(v11 + 348))(v9, 100000); /*0x41dada*/
      (*(void (**)(unsigned int *, int))(*v9 + 292))(v9, 2); /*0x41dae6*/
    }
    v8 = this->EliteAirstrikeTeamTypeIndex; /*0x41daec*/
    v12 = this->AirstrikeClass_field_5C; /*0x41daef*/
    v13 = 0; /*0x41daf2*/
    for ( this->__pad_050 = a2; v13 < v8; ++v13 ) /*0x41daf9*/
    {
      if ( v12 ) /*0x41dafd*/
      {
        if ( v12[191] > 0 ) /*0x41db07*/
        {
          (*(void (**)(int *, int))(*v12 + 968))(v12, a2); /*0x41db0e*/
          (*(void (**)(int *, int, unsigned int))(*v12 + 488))(v12, 1, 0); /*0x41db1c*/
          this->AirstrikeClass_field_3D = 1; /*0x41db22*/
        }
        v12 = (int *)v12[374]; /*0x41db26*/
      }
      v8 = this->EliteAirstrikeTeamTypeIndex; /*0x41db2c*/
    }
  }
  return v8; /*0x41da61*/

}
} // namespace ra2

// 0x41DC80
namespace gamemd {
int AirstrikeClass::RemoveAircraft(AudioController * aP1)
{

  int result; // eax
  result = *(&this->vtable33); /*0x41dc80*/
  int v3 = 0; // edi /*0x41dc8c*/
  if ( result == (int)(aP1) ) /*0x41dc90*/
  {
    *(&this->vtable33) = aP1->u32_5D8; /*0x41dc98*/
    aP1->u32_5D8 = 0; /*0x41dc9b*/
    result = *(&this->vtable22) - 1; /*0x41dca4*/
    *(&this->vtable22) = result; /*0x41dca5*/
    aP1->u32_294 = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( result->u32_5D8 == (unsigned int)(aP1) ) /*0x41dcbc*/
      {
        result->u32_5D8 = aP1->u32_5D8; /*0x41dcc4*/
        aP1->u32_5D8 = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --*(&this->vtable22); /*0x41dcd6*/
        aP1->u32_294 = 0; /*0x41dcd9*/
      }
      else
      {
        result = *(unsigned int *)(result + 1496); /*0x41dce1*/
      }
      ++v3; /*0x41dce3*/
    }
    while ( v3 <= 100 && result ); /*0x41dceb*/
  }
  if ( *(&this->vtable22) <= 0 ) /*0x41dcf0*/
  {
    dword_A8ED84 = dword_A8ED84; /*0x41dcf2*/
    this->AirstrikeClass_field_3C = 0; /*0x41dcf8*/
    *(&this->vtable26) = (int)dword_A8ED84; /*0x41dcfb*/
    this->AirstrikeClass_field_3D = 0; /*0x41dcfe*/
  }
  return result; /*0x41dd01*/
}
} // namespace ra2

// 0x41DD50
namespace gamemd {
void * AirstrikeClass::CopyTo(char a2, int aP1, int aP0, int a1, int aP2)
{


  aP1->AbstractClass = &vt_AirstrikeClass; /*0x41dd5d*/
  /* X11: vtable install elided (qmark slot, RHS vt_AirstrikeClass) */  /*0x41dd63*/
  /* X11: vtable install elided (qmark slot, RHS vt_AirstrikeClass) */  /*0x41dd6a*/
  /* X11: vtable install elided (qmark slot, RHS vt_AirstrikeClass) */  /*0x41dd71*/
  AirstrikeClass *v5; // [esp+4h] [ebp-4h] BYREF
  v5 = (gamemd::AirstrikeClass *)(aP1); /*0x41dd7f*/
  int v3; // eax
  v3 = (*(int (**)(int *, AirstrikeClass **))(dword_889FB8 + 16))(&dword_889FB8, &v5); /*0x41dd83*/
  if ( v3 != -1 && v3 < dword_889FC8 && v3 < --dword_889FC8 ) /*0x41dd9e*/
  {
    do /*0x41ddb6*/
    {
      ++v3; /*0x41dda6*/
      *((unsigned int *)dword_889FBC + v3 - 1) = *((unsigned int *)dword_889FBC + v3); /*0x41ddaa*/
    }
    while ( v3 < dword_889FC8 ); /*0x41ddb6*/
  }
  ((AbstractClass *)aP1)->DTOR(); /*0x41ddba*/
  if ( (aP1 & 1) != 0 ) /*0x41ddc4*/
    __3_YAXPAX_Z(aP1); /*0x41ddc7*/
  return &aP1->AbstractClass; /*0x41ddd1*/

}
} // namespace ra2

// 0x420E90
namespace gamemd {
AbstractClass * * AirstrikeClass::UpdateAll()
{

  unsigned int *v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  unsigned char *v6; // edx

  LOBYTE(v1) = byte_89A134; /*0x420e90*/
  if ( !byte_89A134 ) /*0x420e98*/
  {
    byte_89A134 = 1; /*0x420e9a*/
    v2 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v3 = v2 % 256 * (v2 / 256); /*0x420ec6*/
      v1 = (unsigned int *)((unsigned int)((unsigned __int64)(2164392969LL * v3) >> 32) >> 31); /*0x420ed6*/
      v4 = v3 / 127; /*0x420ed9*/
      if ( v3 / 127 > 255 ) /*0x420ee1*/
        break; /*0x420ee1*/
      if ( v4 >= 0 ) /*0x420ee5*/
      {
        if ( v4 > 255 ) /*0x420ef1*/
          break; /*0x420ef1*/
      }
      else
      {
        (v4) = ((v4) & ~0xFF) | ((0) & 0xFF); /*0x420ee7*/
      }
      LABEL_8:
      byte_88A118[v2++] = v4; /*0x420ef8*/
      if ( v2 >= 0x10000 ) /*0x420f05*/
        goto LABEL_9; /*0x420f05*/
    }
    (v4) = ((v4) & ~0xFF) | ((-1) & 0xFF); /*0x420ef3*/
    goto LABEL_8; /*0x420ef3*/
  }
  LABEL_9:
  v5 = g_AlphaShapeLimit - 1; /*0x420f07*/
  if ( g_AlphaShapeLimit - 1 >= 0 ) /*0x420f12*/
  {
    v1 = (unsigned int *)(dword_88A0F4); /*0x420f14*/
    do /*0x420f36*/
    {
      v6 = (unsigned char *)v1[v5]; /*0x420f19*/
      if ( v6[60] && v6 ) /*0x420f27*/
      {
        (*(void (**)(int))(*(unsigned int *)v6 + 32))(1); /*0x420f2d*/
        v1 = (unsigned int *)(dword_88A0F4); /*0x420f30*/
      }
      --v5; /*0x420f35*/
    }
    while ( v5 >= 0 ); /*0x420f36*/
  }
  return (gamemd::AbstractClass **)((char)v1); /*0x420f38*/

}
} // namespace ra2

// 0x41D380
namespace gamemd {
AirstrikeClass::AirstrikeClass(int a2)
{

  int v3; // eax
  unsigned int *v4; // eax
  int owner; // ecx
  int v6; // eax
  int v7; // ecx
  unsigned int *v8; // eax
  int v9; // ecx
  unsigned int *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x41d384*/
  this->vfptr = (int)&vt_AirstrikeClass_4; /*0x41d389*/
  this->vfptr1 = (int)&vt_AirstrikeClass_4; /*0x41d38f*/
  this->vfptr2 = (int)&vt_AirstrikeClass_4; /*0x41d396*/
  this->vfptr3 = (int)&vt_AirstrikeClass_4; /*0x41d39d*/
  if ( dword_889FC8 < dword_889FC0 /*0x41d3d9*/
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_889FB8 + 8))(
         &dword_889FB8,
         dword_889FC0 + dword_889FCC,
         0) )
  {
    v3 = dword_889FC8++; /*0x41d3e6*/
    *((unsigned int *)dword_889FBC + v3) = this; /*0x41d3f5*/
  }
  this->AirstrikeClass_field_3C[0] = 0; /*0x41d3fc*/
  this->owner = a2; /*0x41d3ff*/
  this->AirstrikeClass_field_3D[0] = 0; /*0x41d402*/
  v4 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)a2 + 132))(a2); /*0x41d407*/
  owner = this->owner; /*0x41d413*/
  this->AirstrikeClass_field_24 = v4[391]; /*0x41d416*/
  v6 = (*(int (**)(int))(*(unsigned int *)owner + 132))(owner); /*0x41d41b*/
  v7 = this->owner; /*0x41d427*/
  this->AirstrikeClass_field_28 = *(unsigned int *)(v6 + 1568); /*0x41d42a*/
  v8 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v7 + 132))(v7); /*0x41d42f*/
  v9 = this->owner; /*0x41d43b*/
  this->AirstrikeClass_field_44 = v8[395]; /*0x41d43e*/
  v10 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v9 + 132))(v9); /*0x41d443*/
  v11 = this->owner; /*0x41d44f*/
  this->AirstrikeClass_field_48 = v10[396]; /*0x41d452*/
  v12 = (*(int (**)(int))(*(unsigned int *)v11 + 132))(v11); /*0x41d457*/
  v13 = this->owner; /*0x41d463*/
  this->AirstrikeClass_field_54 = *(unsigned int *)(v12 + 1572); /*0x41d466*/
  v14 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v13 + 132))(v13) + 1576); /*0x41d471*/
  this->AirstrikeClass_field_5C = 0; /*0x41d477*/
  this->AirstrikeClass_field_58 = v14; /*0x41d47a*/
  this->AirstrikeClass_field_50 = 0; /*0x41d47d*/
  return this; /*0x41d482*/

}
} // namespace gamemd

// 0x41D6E0
namespace gamemd {
int AirstrikeClass::Stat(AbstractClass * aP1)
{
  return AbstractClass::ProcessPower(); /*0x41d6ea*/
}
} // namespace gamemd

// 0x41D6F0
namespace gamemd {
int AirstrikeClass::Write(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x41d701*/
  if ( Prefix_0 >= 0 ) /*0x41d705*/
  {
    if ( aP0 ) /*0x41d709*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x41d712*/
      /* X11: vtable install elided (implicit via AirstrikeClass virtuals 0x41d717) */
      /* X11: vtable install elided (implicit via AirstrikeClass virtuals 0x41d71d) */
      /* X11: vtable install elided (implicit via AirstrikeClass virtuals 0x41d724) */
      /* X11: vtable install elided (implicit via AirstrikeClass virtuals 0x41d72b) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->owner); /*0x41d73b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->AirstrikeClass_field_50); /*0x41d749*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->AirstrikeClass_field_54); /*0x41d757*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->AirstrikeClass_field_58); /*0x41d765*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->AirstrikeClass_field_5C); /*0x41d773*/
  }
  return Prefix_0; /*0x41d77a*/
}
} // namespace gamemd

// 0x41D780
namespace gamemd {
int AirstrikeClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x41d794*/
}
} // namespace gamemd

// 0x41D7A0
namespace gamemd {
int AirstrikeClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x41d7a6*/
    return -2147467261; /*0x41d7a8*/
  *a2 = 1893611809; /*0x41d7b6*/
  a2[1] = 299179558; /*0x41d7be*/
  a2[2] = -1610574449; /*0x41d7c7*/
  a2[3] = unk_7E98EC; /*0x41d7d0*/
  return 0; /*0x41d7ad*/
}
} // namespace gamemd

// 0x41D830
namespace gamemd {
char AirstrikeClass::StartMission(int * a2)
{

  char result; // al
  result = (char)a2; /*0x41d835*/
  if ( !this->AirstrikeClass_field_3C ) /*0x41d830*/
    return AirstrikeClass::SpawnAircraft(a2); /*0x41d83c*/
  if ( a2 != *&this->AirstrikeClass_field_50 ) /*0x41d847*/
    return ((int)a2)->ReassignTarget(); /*0x41d84a*/
  return result; /*0x41d841*/
}
} // namespace gamemd
