// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/VectorClass_ReestablishPtr_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"

// 0x4228E0
namespace gamemd {
void AnimClass::Destruct(void * this, AbstractClass * a2)
{
{
  int ecx3; // ecx
  AudioController *v4; // edx
  int eax28; // eax
  ObjectClass *v11; // [esp+10h] [ebp-10h] BYREF
  LOBYTE(a2) = 1; /*0x4228e3*/
  *(_DWORD *)this = &AnimClass::`vftable'; /*0x4228eb*/
  this->AnimClass_field_0x4 = &AnimClass::`vftable'; /*0x4228f1*/
  this->AnimClass_field_0x8 = &vt_AnimClass; /*0x4228f8*/
  this->vtable4 = &off_7E3328; /*0x4228ff*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, a2); /*0x422906*/
  if ( HouseClass_Player[44116] ) /*0x422914*/
  {
    _BYTE * v3 = (_BYTE *)this->AnimClass_field_0xCC; /*0x42291a*/
    if ( v3 ) /*0x422922*/
    {
      ecx3 = 0; /*0x42292a*/
      if ( *(int *)&HouseClass_Player[44140] > 0 ) /*0x42292e*/
      {
        v4 = *(AudioController **)&HouseClass_Player[44128]; /*0x422930*/
        do /*0x42294a*/
        {
          if ( *(#374 **)v4->__pad_0 != this && *(_BYTE **)(*(_DWORD *)v4->__pad_0 + 204) == v3 ) /*0x422942*/
            break; /*0x422942*/
          ++ecx3; /*0x422944*/
          v4 = (AudioController *)((char *)v4 + 4); /*0x422945*/
        }
        while ( ecx3 < *(int *)&HouseClass_Player[44140] ); /*0x42294a*/
      }
      if ( ecx3 == *(_DWORD *)&HouseClass_Player[44140] ) /*0x42294e*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 380))(this->AnimClass_field_0xCC); /*0x422955*/
        v3[132] = 0; /*0x42295b*/
      }
      this->AnimClass_field_0xCC = 0; /*0x422961*/
    }
    int v6 = this->AnimClass_field_0xC8; /*0x422967*/
    if ( v6 && *(_BYTE *)(v6 + 853) ) /*0x422971*/
    {
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF
      v13[0] = this->AnimClass_field_0x9C; /*0x422985*/
      v13[1] = this->q028; /*0x422991*/
      v13[2] = this->AnimClass_field_0xA4; /*0x422998*/
      _DWORD * v7 = Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v13); /*0x4229a1*/
      v7[80] &= ~0x20000u; /*0x4229b7*/
    }
    if ( (unsigned __int8)ObjectClass::Undeploy(this) ) /*0x4229bb*/
      RemoveTarget((IUnknown *)this); /*0x4229ca*/
  }
  v11 = (ObjectClass *)this; /*0x4229df*/
  int v8; // eax
  v8 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&stru_B05488[41448] + 16))( /*0x4229e3*/
         &stru_B05488[41448],
         &v11);
  if ( v8 != -1 && v8 < *(int *)&stru_B05488[41464] ) /*0x4229f3*/
  {
    --*(_DWORD *)&stru_B05488[41464]; /*0x4229f8*/
    for ( ; /*0x4229fe*/
          v8 < *(int *)&stru_B05488[41464];
          *(_DWORD *)(*(_DWORD *)&stru_B05488[41452] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488[41452]
                                                                                          + 4 * v8) )
    {
      ++v8; /*0x422a06*/
    }
  }
  int v9 = this->AnimClass_field_0xC8; /*0x422a18*/
  if ( v9 ) /*0x422a20*/
    AnimClass::FreeRenderBuffer(v9); /*0x422a22*/
  Mixer::ReleaseChannel((int **)this + 104); /*0x422a2f*/
  Mixer::ReleaseChannel((int **)this + 109); /*0x422a3c*/
  AudioFileClass::Release((_DWORD *)this + 104); /*0x422a43*/
  AudioFileClass::Release((_DWORD *)this + 109); /*0x422a4a*/
  this->AnimClass_field_0xCC = 0; /*0x422a52*/
  this->AnimClass_field_0xC8 = 0; /*0x422a59*/
  if ( AbstractClass::GetVtable3(&this->AnimClass_field_0x4) == -2 ) /*0x422a67*/
  {
    v11 = (ObjectClass *)this; /*0x422a79*/
  int v10; // eax
    v10 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&HouseClass_Player[180] + 16))( /*0x422a7d*/
            &HouseClass_Player[180],
            &v11);
    if ( v10 != -1 && v10 < *(int *)&HouseClass_Player[196] ) /*0x422a91*/
    {
      --*(_DWORD *)&HouseClass_Player[196]; /*0x422a96*/
      for ( ; /*0x422a9c*/
            v10 < *(int *)&HouseClass_Player[196];
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player[184] + 4 * v10 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[184]
                                                                                              + 4 * v10) )
      {
        ++v10; /*0x422aa4*/
      }
    }
  }
  else
  {
    v11 = (ObjectClass *)this; /*0x422ad5*/
    eax28 = (*(int (__thiscall **)(char *, ObjectClass **))(*(_DWORD *)&HouseClass_Player[44124] + 16))( /*0x422ad9*/
              &HouseClass_Player[44124],
              &v11);
    if ( eax28 != -1 && eax28 < *(int *)&HouseClass_Player[44140] ) /*0x422ae9*/
    {
      --*(_DWORD *)&HouseClass_Player[44140]; /*0x422aee*/
      for ( ; /*0x422af4*/
            eax28 < *(int *)&HouseClass_Player[44140];
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44128] + 4 * eax28 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44128] + 4 * eax28) )
      {
        ++eax28; /*0x422afc*/
      }
    }
  }
  ObjectClass::Dtor(this); /*0x422b10*/
}
} // namespace gamemd

// 0x422CA0
namespace gamemd {
void* AnimClass::Render(ConvertClass * a2, ConvertClass * aP5)
{
{
  __int16 v9; // bx
  ConvertClass *v10; // eax
  IUnknown *v15; // di
  IUnknown *v16; // eax
  __int16 v17; // ax
  CoordStruct *v19; // ebx
  CoordStruct *v20; // eax
  CoordStruct *v21; // eax
  double Z; // st6
  CoordStruct *v25; // eax
  IUnknown *v26; // eax
  ConvertClass *v27; // ecx
  int Y; // eax
  __int16 *v31; // edi
  CoordStruct *v32; // ecx
  IUnknown *v35; // edx
  ConvertClass *v36; // ecx
  IUnknown *v38; // eax
  IUnknown *v42; // eax
  CoordStruct *v44; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // eax
  int v59; // ecx
  IUnknown *v60; // eax
  _DWORD *v61; // eax
  CoordStruct *v62; // eax
  _DWORD *FoundationSize; // eax
  IUnknown *v68; // eax
  ConvertClass *v69; // edi
  IUnknown *v73; // eax
  IUnknown *v74; // edx
  IUnknown *v75; // eax
  ConvertClass *v77; // eax
  IUnknown *v79; // eax
  BuildingTypeClass *v82; // [esp-18h] [ebp-128h]
  BuildingTypeClass *v83; // [esp-18h] [ebp-128h]
  unsigned __int8 v84; // [esp+13h] [ebp-FDh]
  unsigned __int8 v85; // [esp+13h] [ebp-FDh]
  CoordStruct *v90; // [esp+14h] [ebp-FCh]
  CoordStruct *v91; // [esp+14h] [ebp-FCh]
  CoordStruct *v92; // [esp+14h] [ebp-FCh]
  CoordStruct *v93; // [esp+14h] [ebp-FCh]
  IUnknown *v94; // [esp+14h] [ebp-FCh]
  unsigned __int8 v96; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v97; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v98; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v99; // [esp+1Bh] [ebp-F5h]
  CoordStruct *aP2; // [esp+1Ch] [ebp-F4h] BYREF
  IUnknown *aP0; // [esp+20h] [ebp-F0h] BYREF
  ConvertClass *v102; // [esp+24h] [ebp-ECh]
  ConvertClass *v103; // [esp+28h] [ebp-E8h]
  CoordStruct *aP4; // [esp+2Ch] [ebp-E4h]
  int v105[2]; // [esp+30h] [ebp-E0h] BYREF
  ConvertClass *aP10; // [esp+38h] [ebp-D8h]
  IUnknown *v108; // [esp+40h] [ebp-D0h] BYREF
  CCINIClass aP1; // [esp+50h] [ebp-C0h] BYREF
  CCINIClass v111; // [esp+B0h] [ebp-60h] BYREF
  if ( stru_89E138[11448] /*0x422ccb*/
    && *(_DWORD *)&stru_87C374[45776]
    && (unsigned __int8)ObjectClass::StepCleanup(this, aRing1) )
  {
    IUnknown *v4 = this->q0B4; /*0x422cd8*/
    CellStruct *v5 = this->q0C0; /*0x422ce4*/
    IUnknown *v6 = this->q0BC; /*0x422cea*/
    if ( v4 != -1 ) /*0x422cf3*/
    {
      if ( *(_DWORD *)&HouseClass_Player[45112] - v4 >= v6 ) /*0x422cff*/
        v6 = 0; /*0x422d05*/
      else
        v6 -= *(_DWORD *)&HouseClass_Player[45112] - v4; /*0x422d01*/
    }
    int v7 = v5 + this->q0AC * v5 - v6; /*0x422d12*/
    int v8 = v5 * this->CheckEndOfSequence(); /*0x422d23*/
    v9 = v7 + 8; /*0x422d28*/
    v10 = (ConvertClass *)(*(_DWORD *)a2->__pad_0 + 2 * (v7 + 8)); /*0x422d30*/
    aP0 = (IUnknown *)(*(_DWORD *)a2->__pad_0 - 2 * (v7 + 8)); /*0x422d3c*/
    aP10 = v10; /*0x422d40*/
    int v11 = *(_DWORD *)&a2->field_2[2]; /*0x422d47*/
    int v107 = v7 + 8 + v11; /*0x422d4d*/
    v102 = (ConvertClass *)(v11 - (v7 + 8)); /*0x422d51*/
    aP4 = (CoordStruct *)((v8 - v7) << 8); /*0x422d5e*/
    aP2 = (CoordStruct *)((int)aP4 / v8); /*0x422d67*/
    if ( (int)aP4 / v8 >= 0 ) /*0x422d6b*/
    {
      if ( (int)aP4 / v8 > 255 ) /*0x422d7c*/
        aP2 = (CoordStruct *)255; /*0x422d7e*/
    }
    else
    {
      *(float *)&aP2 = 0.0; /*0x422d6d*/
    }
    if ( v7 >= v8 / 3 ) /*0x422d9a*/
      int v12 = ((v8 - v7) << 8) / (v8 - v8 / 3); /*0x422db7*/
    else
      v12 = (v7 << 8) / (v8 / 3); /*0x422da2*/
    if ( v12 >= 0 ) /*0x422dbb*/
    {
      if ( v12 > 255 ) /*0x422dc6*/
        v12 = 255; /*0x422dc8*/
    }
    else
    {
      v12 = 0; /*0x422dbd*/
    }
    int v13 = 2 * v12 / 3; /*0x422de3*/
    int v87 = 2 * v8 / 3; /*0x422df3*/
    if ( v7 >= v87 ) /*0x422df7*/
      int v14 = (int)aP4 / (v8 - v87); /*0x422e10*/
    else
      v14 = (v7 << 8) / v87; /*0x422dff*/
    v15 = v14; /*0x422e12*/
    if ( v14 >= 0 ) /*0x422e16*/
    {
      if ( v14 > 255 ) /*0x422e22*/
        v15 = -1; /*0x422e24*/
    }
    else
    {
      v15 = 0; /*0x422e18*/
    }
    v16 = (IUnknown *)this->CheckDamageFlags(); /*0x422e2d*/
    v17 = *(_WORD *)(*(_DWORD *)&stru_87C374[45776] + 4) /*0x422e87*/
        + *(_WORD *)(*(_DWORD *)&stru_87C374[45776] + 36)
        - *(_WORD *)&a2->field_2[2]
        - *(_WORD *)&stru_87C374[44080]
        + this->q100
        + *(_DWORD *)(this->q0C8 + 836)
        - ZCoordToScreenY(v16)
        - 2;
    *(float *)&aP4 = (double)(unsigned __int16)(v17 + v9) * 0.000015259022; /*0x422eab*/
    *(float *)&v103 = (double)(unsigned __int16)(v17 - v9) * 0.000015259022; /*0x422eb9*/
    ColorStruct::SetRGB(&aP1, (unsigned __int8)aP2, v13, v15); /*0x422ebd*/
    ColorStruct::SetRGB(&v111, (unsigned __int8)aP2, v13, v15); /*0x422ecc*/
  int v88; // [esp+14h] [ebp-FCh]
    *(float *)&v88 = (float)(int)v102; /*0x422ede*/
    int v18 = v88; /*0x422ee6*/
    *(float *)&aP2 = (float)(int)aP0; /*0x422eef*/
    v19 = aP2; /*0x422ef3*/
    Tactical::SetCellTransform(aP1[0], 0, aP2, v88, aP4, 0, 0); /*0x422efa*/
    *(float *)&aP2 = (float)v107; /*0x422f0f*/
    Tactical::SetCellTransform(aP1[0], 1, v19, (int)aP2, (CoordStruct *)v103, 0, 1065353216); /*0x422f1f*/
    float v89 = (float)(int)aP10; /*0x422f37*/
    Tactical::SetCellTransform( /*0x422f47*/
      aP1[0],
      2,
      (CoordStruct *)LODWORD(v89),
      (int)aP2,
      (CoordStruct *)v103,
      1065353216,
      1065353216);
    Tactical::SetCellTransform(v111[0], 0, v19, v18, aP4, 0, 0); /*0x422f5c*/
    Tactical::SetCellTransform( /*0x422f7f*/
      v111[0],
      1,
      (CoordStruct *)LODWORD(v89),
      (int)aP2,
      (CoordStruct *)v103,
      1065353216,
      1065353216);
    Tactical::SetCellTransform(v111[0], 2, (CoordStruct *)LODWORD(v89), v18, aP4, 1065353216, 0); /*0x422f97*/
    StructTable::Append(*(_DWORD **)&stru_89E138[11480], &aP1); /*0x422fa7*/
    StructTable::Append(*(_DWORD **)&stru_89E138[11480], &v111); /*0x422fba*/
    return; /*0x422fc9*/
  }
  if ( dword_ABCD44 < (CampaignScore *)PingPongBuffer::GetWriteOffset() && *(int *)(this->q0C8 + 724) > 1 ) /*0x422fe6*/
    return; /*0x422fe6*/
  if ( this->q19D ) /*0x422fec*/
    return; /*0x422fec*/
  v20 = (CoordStruct *)this->q0C8; /*0x422ffa*/
  if ( v20[60].Y > *(int *)&HouseClass_Player[44588] || this->q199 && LOBYTE(v20[73].Z) ) /*0x42301e*/
    return; /*0x42301e*/
  v103 = (ConvertClass *)this->HasC4(); /*0x423035*/
  if ( !v103 ) /*0x423039*/
    return; /*0x423039*/
  v21 = (CoordStruct *)this->q0C8; /*0x42303f*/
  Coord *v22 = this->q190; /*0x42304b*/
  v90 = (CoordStruct *)this->q0AC; /*0x423051*/
  aP4 = (CoordStruct *)((char *)v90 + v21[57].Z); /*0x42305d*/
  if ( this->q119 ) /*0x423061*/
  {
    if ( LOBYTE(v21[72].Z) ) /*0x42306b*/
      v22 |= 6u; /*0x423075*/
    else
      v22 |= 4u; /*0x42307a*/
  }
  if ( v21[60].Z <= *(int *)&HouseClass_Player[44588] ) /*0x42308b*/
  {
    if ( !BYTE2(v21[72].Z) ) /*0x423095*/
    {
      Y = v21[62].Y; /*0x423183*/
      if ( Y <= 0 ) /*0x42318b*/
      {
        char v29 = this->q5E0; /*0x4231c1*/
        if ( !v29 ) /*0x4231c9*/
          goto LABEL_47; /*0x4231c9*/
        if ( v29 > 15 ) /*0x4231d1*/
          return; /*0x4231d1*/
        if ( v29 > 10 ) /*0x4231d9*/
        {
          v22 |= 4u; /*0x4231db*/
          goto LABEL_47; /*0x4231de*/
        }
        if ( v29 > 5 ) /*0x4231e5*/
        {
          v22 |= 4u; /*0x4231eb*/
          goto LABEL_47; /*0x4231ee*/
        }
      }
      else
      {
        if ( this->q5E0 >= 15 ) /*0x423194*/
          return; /*0x423194*/
        if ( Y != 25 ) /*0x42319d*/
        {
          if ( Y == 50 ) /*0x4231a6*/
          {
            v22 |= 4u; /*0x4231a8*/
          }
          else if ( Y == 75 ) /*0x4231b3*/
          {
            v22 |= 6u; /*0x4231b9*/
          }
          goto LABEL_47; /*0x4231ab*/
        }
      }
LABEL_46:
      v22 |= 2u; /*0x4230fb*/
      goto LABEL_47; /*0x4230fb*/
    }
    if ( this->q5E0 >= 15 ) /*0x4230a2*/
      return; /*0x4230a2*/
    double v23 = (double)(int)v90; /*0x4230a8*/
    Z = (double)v21[58].Z; /*0x4230ac*/
    if ( v23 > Z * 0.6 ) /*0x4230c3*/
    {
      v22 |= 6u; /*0x4230c9*/
      goto LABEL_47; /*0x4230cc*/
    }
    if ( v23 > Z * 0.4 ) /*0x4230df*/
    {
      v22 |= 4u; /*0x4230e5*/
      goto LABEL_47; /*0x4230e8*/
    }
    if ( v23 > Z * 0.2 ) /*0x4230f9*/
      goto LABEL_46; /*0x4230f9*/
  }
LABEL_47:
  if ( (v22 & 1) == 0 ) /*0x423101*/
    BYTE1(v22) |= 8u; /*0x423103*/
  aP0 = (IUnknown *)this->GetZAboveGround(); /*0x423110*/
  v25 = (CoordStruct *)this->q0C8; /*0x423114*/
  aP10 = (ConvertClass *)1000; /*0x42311a*/
  if ( BYTE1(v25[71].X) ) /*0x423122*/
  {
    v105[0] = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * *(_DWORD *)(HouseClass_Player.field_0 + 90196)) + 780); /*0x42314b*/
    if ( BYTE1(v25[71].Z) ) /*0x42314f*/
      goto LABEL_78; /*0x423157*/
    v26 = (IUnknown *)this->GetCoordsThunk2(&v108); /*0x423166*/
    v27 = (ConvertClass *)*((__int16 *)Coord::To_Cell(&stru_87C374[13428], v26) + 134); /*0x423177*/
    goto LABEL_77; /*0x42317e*/
  }
  if ( this->q658 ) /*0x4231f3*/
  {
    _DWORD * v30 = (_DWORD *)this->GetCoordsThunk2(&v108); /*0x42320a*/
    LOWORD(v91) = *v30 / 256; /*0x423220*/
    HIWORD(v91) = v30[1] / 256; /*0x423238*/
    aP2 = v91; /*0x423241*/
    v31 = (__int16 *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP2); /*0x423250*/
    if ( !*((_DWORD *)v31 + 13) ) /*0x423252*/
      TacticalClass::SetView((int)v31, 0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
    v32 = (CoordStruct *)this->q0C8; /*0x42327b*/
    v105[0] = *((_DWORD *)v31 + 13); /*0x423281*/
    if ( !BYTE1(v32[71].Z) ) /*0x423285*/
      aP10 = (ConvertClass *)v31[134]; /*0x42329a*/
  }
  else if ( this->q0D4 ) /*0x4232a3*/
  {
    v105[0] = this->q0D4; /*0x4232ad*/
    if ( !BYTE1(v25[71].Z) ) /*0x4232b1*/
      aP10 = (ConvertClass *)this->q0FC; /*0x4232c5*/
  }
  else
  {
    v105[0] = *(_DWORD *)&stru_87C374[13132]; /*0x4232d4*/
    if ( BYTE1(v25[72].X) ) /*0x4232d8*/
      v105[0] = *(_DWORD *)(*(_DWORD *)stru_B05488.field_4C + 780); /*0x4232f0*/
    if ( !BYTE1(v25[71].Z) ) /*0x4232f4*/
    {
      _DWORD * v33 = (_DWORD *)this->GetCoordsThunk2(&v108); /*0x423307*/
      LOWORD(v92) = *v33 / 256; /*0x42331d*/
      HIWORD(v92) = v33[1] / 256; /*0x423336*/
      aP2 = v92; /*0x423343*/
      v27 = (ConvertClass *)*((__int16 *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP2) + 133); /*0x42334d*/
LABEL_77:
      aP10 = v27; /*0x423354*/
    }
  }
LABEL_78:
  if ( this->q650 ) /*0x423358*/
  {
    int v34 = ZCoordToScreenY(aP0); /*0x423373*/
    v35 = *(IUnknown **)a2->__pad_0; /*0x423384*/
    v36 = (ConvertClass *)(*(_DWORD *)(this->q0C8 + 836) + v34 + *(_DWORD *)&a2->field_2[2]); /*0x42338b*/
    IUnknown *v37 = *this; /*0x42339a*/
    v102 = v36; /*0x42339c*/
    aP0 = v35; /*0x4233a2*/
    v38 = (IUnknown *)this->CheckDamageFlags(); /*0x4233a6*/
    int v39 = ZCoordToScreenY(v38); /*0x4233ae*/
    DrawToSurfaceSHP( /*0x4233e9*/
      *(int *)&stru_87C374[44960],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      (ConvertClass *)0x2601,
      0,
      *(_DWORD *)(this->q0C8 + 836) - v39,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  char v40 = this->q118; /*0x4233ee*/
  int v41; // ebp
  *(float *)&v41 = 0.0; /*0x4233f4*/
  *(float *)&aP2 = 0.0; /*0x4233f8*/
  if ( !v40 ) /*0x4233fc*/
    goto LABEL_99; /*0x4233fc*/
  v42 = (IUnknown *)this->UpdateZAdjust(&v108); /*0x42340b*/
  _DWORD * v43 = Coord::To_Cell(&stru_87C374[13428], v42); /*0x423414*/
  v44 = (CoordStruct *)Cell::IsBridge(v43); /*0x42341b*/
  v93 = v44; /*0x423422*/
  if ( !v44 ) /*0x423426*/
    goto LABEL_99; /*0x423426*/
  if ( v44[55].X ) /*0x42342e*/
  {
  int v50; // eax
  int v49; // ecx
  int v48; // edx
    int v45 = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 6308); /*0x423442*/
    int v46 = *(_DWORD *)&stru_87C374[44652] + 2 * v45; /*0x423448*/
    aP0 = (IUnknown *)(v45 + v46); /*0x423454*/
    v98 = *(_BYTE *)(v45 + v46 + 6260); /*0x42345e*/
    v96 = *(_BYTE *)(v45 + v46 + 4174 + 2087); /*0x42346d*/
    v84 = *(_BYTE *)(v45 + v46 + 6262); /*0x423477*/
    int v47 = DDraw::GetStatus() - 1; /*0x423480*/
    if ( v47 ) /*0x423481*/
    {
      v50 = v47 - 1; /*0x423483*/
      if ( v50 ) /*0x423484*/
      {
        LOBYTE(v50) = v96; /*0x4234ce*/
        goto LABEL_89; /*0x4234ce*/
      }
      LOWORD(v41) = v98; /*0x423486*/
      v50 = v96; /*0x42348c*/
      LOWORD(v49) = v84; /*0x423493*/
      LOWORD(v48) = v96; /*0x42349c*/
      v41 = v49 | (32 * (v48 | (v41 << 6))); /*0x4234a3*/
    }
    else
    {
      v50 = v96; /*0x4234a7*/
    }
    LOWORD(v49) = (unsigned __int8)v50 >> 1; /*0x4234b2*/
    LOWORD(v48) = v98; /*0x4234b4*/
    v48 *= 32; /*0x4234ba*/
    int v51 = v48 | v49; /*0x4234bd*/
    LOWORD(v48) = v84; /*0x4234bf*/
    v49 = v48 | (v51 << 6); /*0x4234c8*/
    v41 |= v49; /*0x4234ca*/
LABEL_89:
    LOWORD(v49) = v98; /*0x4234d2*/
    LOWORD(v48) = v84; /*0x4234d8*/
    LOWORD(v50) = (unsigned __int8)v50 >> 1; /*0x4234e0*/
    v41 |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
    aP2 = (CoordStruct *)v41; /*0x4234f0*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(CoordStruct *))(v93->X + 352))(v93) || v93[37].Z != 1 ) /*0x423513*/
    goto LABEL_99; /*0x423513*/
  int v52 = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 6320); /*0x42351f*/
  int v53 = *(_DWORD *)&stru_87C374[44652] + 2 * v52; /*0x423525*/
  aP0 = (IUnknown *)(v52 + v53); /*0x423531*/
  v99 = *(_BYTE *)(v52 + v53 + 6260); /*0x42353b*/
  v85 = *(_BYTE *)(v52 + v53 + 4174 + 2087); /*0x42354a*/
  v97 = *(_BYTE *)(v52 + v53 + 6262); /*0x423554*/
  int v54 = DDraw::GetStatus() - 1; /*0x42355d*/
  if ( v54 ) /*0x42355e*/
  {
    v57 = v54 - 1; /*0x423560*/
    if ( v57 ) /*0x423561*/
    {
      LOBYTE(v57) = v85; /*0x4235ad*/
      goto LABEL_98; /*0x4235ad*/
    }
    LOWORD(v55) = v99; /*0x423563*/
    v57 = v85; /*0x423569*/
    LOWORD(v56) = v85; /*0x423573*/
    int v58 = v56 | (v55 << 6); /*0x423575*/
    LOWORD(v56) = v97; /*0x423577*/
    v55 = v56 | (32 * v58); /*0x423580*/
    v41 |= v55; /*0x423582*/
  }
  else
  {
    v57 = v85; /*0x423586*/
  }
  LOWORD(v56) = (unsigned __int8)v57 >> 1; /*0x423591*/
  LOWORD(v55) = v99; /*0x423593*/
  v55 *= 32; /*0x423599*/
  v59 = v55 | v56; /*0x42359c*/
  LOWORD(v55) = v97; /*0x42359e*/
  v56 = v55 | (v59 << 6); /*0x4235a7*/
  v41 |= v56; /*0x4235a9*/
LABEL_98:
  LOWORD(v56) = v99; /*0x4235b1*/
  LOWORD(v55) = v97; /*0x4235b7*/
  LOWORD(v57) = (unsigned __int8)v57 >> 1; /*0x4235bf*/
  v41 |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
  aP2 = (CoordStruct *)v41; /*0x4235cf*/
LABEL_99:
  v60 = (_DWORD *)this->UpdateZAdjust(&v108); /*0x4235d3*/
  LOWORD(v94) = *v60 / 256; /*0x4235ef*/
  HIWORD(v94) = v60[1] / 256; /*0x423608*/
  aP0 = v94; /*0x423615*/
  v61 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP0); /*0x42361a*/
  if ( CellClass::QuickPassable(v61) ) /*0x423621*/
  {
    *(float *)&v41 = 0.0; /*0x42362a*/
    *(float *)&aP2 = 0.0; /*0x42362c*/
  }
  v62 = (CoordStruct *)this->q0C8; /*0x423630*/
  if ( HIBYTE(v62[71].Y) ) /*0x423636*/
  {
    FoundationSize = Building::GetFoundationSize(&v108, 0); /*0x42364f*/
    IUnknown *v64 = *(_DWORD *)a2->__pad_0; /*0x423657*/
    int v65 = *(_DWORD *)&a2->field_2[2]; /*0x423659*/
    aP0 = (IUnknown *)FoundationSize[3]; /*0x42365c*/
    IUnknown *v66 = *this; /*0x423663*/
    v108 = v64; /*0x423667*/
    v105[0] = v64; /*0x42366d*/
    int v95 = (int)aP0 / 2; /*0x423673*/
    int v67 = v65 - (int)aP0 / 2; /*0x423677*/
    char v86 = 0; /*0x423679*/
    v68 = (IUnknown *)this->CheckDamageFlags(); /*0x42367e*/
    v69 = (ConvertClass *)(this->q100 + *(_DWORD *)(this->q0C8 + 836) - ZCoordToScreenY(v68) - 50); /*0x4236a1*/
    BYTE1(v22) |= 0x20u; /*0x4236a4*/
    do /*0x423719*/
    {
      int v70 = v67 + *(_DWORD *)(this->q0C8 + 836); /*0x4236bb*/
      v105[0] = v108; /*0x4236bd*/
      v105[1] = v70; /*0x4236c1*/
      DrawToSurfaceSHP( /*0x4236f7*/
        *(int *)&stru_87C374[44960],
        *(int *)&stru_87C374[13132],
        v103,
        (unsigned int)aP4,
        (ConvertClass *)v105,
        (ConvertClass *)&stru_87C374[44076],
        (ConvertClass *)v22,
        0,
        (int)v69,
        (ConvertClass *)2,
        aP10,
        (ConvertClass *)aP2,
        0,
        0,
        0,
        0);
      if ( v67 < 0 ) /*0x4236fe*/
        v86 = 1; /*0x423700*/
      v67 -= (int)aP0; /*0x42370d*/
      v69 = (ConvertClass *)((char *)v69 - (int)aP0 - v95); /*0x423715*/
    }
    while ( !v86 ); /*0x423719*/
  }
  else if ( BYTE1(v62[72].Z) ) /*0x423728*/
  {
    int v109 = v62[69].Z; /*0x42373c*/
    int v71 = *(_DWORD *)&a2->field_2[2]; /*0x423742*/
    aP0 = *(IUnknown **)a2->__pad_0; /*0x42374c*/
    v82 = (BuildingTypeClass *)aP10; /*0x423756*/
    IUnknown *v72 = *this; /*0x42375e*/
    v102 = (ConvertClass *)(v109 + v71); /*0x423766*/
    v73 = (IUnknown *)this->CheckDamageFlags(); /*0x42376a*/
    BYTE1(v22) |= 0x20u; /*0x42379b*/
    int v80 = this->q100 + *(_DWORD *)(this->q0C8 + 836) - ZCoordToScreenY(v73) - 3; /*0x42379e*/
    DrawToSurfaceSHP( /*0x4237a9*/
      *(int *)&stru_87C374[44960],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      (ConvertClass *)v22,
      0,
      v80,
      0,
      (ConvertClass *)v82,
      (ConvertClass *)v41,
      0,
      0,
      0,
      0);
  }
  else
  {
    v74 = *(IUnknown **)a2->__pad_0; /*0x4237b9*/
    v102 = (ConvertClass *)(v62[69].Z + *(_DWORD *)&a2->field_2[2]); /*0x4237bb*/
    aP0 = v74; /*0x4237cb*/
    v83 = (BuildingTypeClass *)aP10; /*0x4237d2*/
    v75 = (IUnknown *)this->CheckDamageFlags(); /*0x4237d7*/
    int v76 = this->q100 + *(_DWORD *)(this->q0C8 + 836) - ZCoordToScreenY(v75); /*0x4237ff*/
    v77 = (ConvertClass *)v22; /*0x423801*/
    BYTE1(v77) = BYTE1(v22) | 0x20; /*0x423806*/
    DrawToSurfaceSHP( /*0x423827*/
      *(int *)&stru_87C374[44960],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      v77,
      0,
      v76 - 2,
      (ConvertClass *)2,
      (ConvertClass *)v83,
      (ConvertClass *)v41,
      0,
      0,
      0,
      0);
    if ( *(_BYTE *)(this->q0C8 + 882) ) /*0x423832*/
    {
      int v78 = *(__int16 *)v103->__pad_6; /*0x423845*/
      v79 = (IUnknown *)this->CheckDamageFlags(); /*0x423857*/
      int v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
      DrawToSurfaceSHP( /*0x42389e*/
        *(int *)&stru_87C374[44960],
        v105[0],
        v103,
        (unsigned int)aP4 + v78 / 2,
        a2,
        aP5,
        (ConvertClass *)(v22 & 0xFFFFF9F8 | 0x601),
        0,
        v81,
        0,
        (ConvertClass *)0x3E8,
        0,
        0,
        0,
        0,
        0);
    }
  }
}
} // namespace gamemd

// 0x424CB0
namespace gamemd {
int AnimClass::InWhichLayer_AttachedObjectLayer()
{
{

  if ( this->q0CC ) /*0x424cb0*/
    return 2; /*0x424cba*/
  Coord *v2 = this->q0C8; /*0x424cc0*/
  if ( v2 ) /*0x424cc8*/
    return *(_DWORD *)(v2 + 868); /*0x424cca*/
  else
    return 3; /*0x424cd1*/
}
} // namespace gamemd

// 0x4253B0
namespace gamemd {
int AnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{

  int v3 = aP0->ChargerTurrets[6]; /*0x4253b6*/
  int v4; // eax
  if ( v3 && (v4 = *(_DWORD *)stru_B05488[88] - 1, *(_DWORD *)stru_B05488[88] - 1 >= 0) ) /*0x4253c8*/
  {
    int v5 = stru_B05488.field_4C + 4 * v4; /*0x4253d0*/
    while ( v3 != *(_DWORD *)(*(_DWORD *)v5 + 780) ) /*0x4253db*/
    {
      --v4; /*0x4253dd*/
      v5 -= 4; /*0x4253de*/
      if ( v4 < 0 ) /*0x4253e3*/
        goto LABEL_6; /*0x4253e3*/
    }
    aP0->ChargerTurrets[7] = v4; /*0x425404*/
  }
  else
  {
LABEL_6:
    aP0->ChargerTurrets[7] = -1; /*0x4253e5*/
  }
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4253ff*/
}
} // namespace gamemd

// 0x428DE0
namespace gamemd {
void AnimClass::FreeRenderBuffer()
{
{
  if ( *(_BYTE *)(this + 862) && this->AnimClass_field_0xA4 ) /*0x428ded*/
  {
    if ( *(_BYTE *)(this + 863) ) /*0x428df7*/
    {
      Debug::Log(); /*0x428e0a*/
      __3_YAXPAX_Z(this->q0A4); /*0x428e16*/
      this->AnimClass_field_0xA4 = 0; /*0x428e1e*/
      this->q0A8 = 0; /*0x428e28*/
    }
  }
}
} // namespace gamemd

// 0x448260
namespace gamemd {
BuildingTypeClass * * AnimClass::drawFrame()
{
{
  int result; // eax
  BuildingTypeClass *v6; // ecx
  BuildingTypeClass *v11; // edx
  AbstractClass *v14; // ecx
  BuildingTypeClass *v16; // ecx
  AbstractClass *v17; // ecx
  BuildingTypeClass *v20; // edx
  LightSourceClass *v21; // ecx
  _BYTE **v23; // ebp
  int Member; // eax
  IUnknown *v29; // eax
  AbstractClass *eax57; // eax
  AbstractClass *v32; // edi
  BuildingClass *v33; // eax
  int ecx66; // ecx
  FactoryClass *v35; // ecx
  FactoryClass *v36; // ecx
  AbstractClass *v37; // ebx
  int nextArrayIndex; // ecx
  int abstractFlags; // edx
  int ecx88; // ecx
  BuildingTypeClass *v53; // eax
  int (__thiscall **NeedsSaveOrLink)(void **, AbstractClass **); // eax
  int ecx99; // ecx
  BuildingTypeClass *v62; // eax
  int (__thiscall **v68)(void **, AbstractClass **); // edx
  int (__thiscall **v80)(void **, AbstractClass **); // edx
  int (__thiscall **v84)(void **, AbstractClass **, int, int); // eax
  int ecx134; // ecx
  AbstractClass *v88; // eax
  int ecx138; // ecx
  AbstractClass *v90; // eax
  BuildingTypeClass *v91; // eax
  BuildingTypeClass *v92; // eax
  BuildingTypeClass *vfptr0; // edx
  HouseClass *edi150; // edi
  BuildingTypeClass *v96; // eax
  char cl153; // cl
  AbstractClass *v98; // eax
  BuildingTypeClass *v99; // edx
  BuildingTypeClass *v103; // ebp
  int eax175; // eax
  BuildingTypeClass *v104; // edi
  int edx197; // edx
  BuildingTypeClass *v117; // eax
  int edx212; // edx
  BuildingTypeClass *v126; // eax
  int ecx258; // ecx
  BuildingTypeClass *v152; // edx
  int UnitsGainSelfHeal; // ecx
  BuildingTypeClass *v154; // ecx
  BuildingTypeClass *v155; // eax
  AbstractClass *v156; // ecx
  BuildingTypeClass *v157; // eax
  AbstractClass *v159; // ecx
  int edi266; // edi
  CCINIClass *v160; // eax
  char i; // al
  IUnknown *v165; // eax
  void **v179; // [esp+ECh] [ebp-18h] BYREF
  void *Block; // [esp+F0h] [ebp-14h]
  BuildingClass *v183; // [esp+FCh] [ebp-8h]
  #375 *v185; // [esp+108h] [ebp+4h]
  AbstractClass *aP1; // [esp+10Ch] [ebp+8h] BYREF
  HouseClass *v187; // [esp+110h] [ebp+Ch]
  if ( v185 == *((#375 **)this + 135) )
  {
    LOBYTE(result) = 0;
  }
  else
  {
  int v182; // [esp+F8h] [ebp-Ch]
  int v174; // [esp+C0h] [ebp-44h]
  int v109; // ebp
    int v5 = this->AnimClass_field_0x38;
    if ( v5 && !*(_BYTE *)(this->q148 + 5499) )
      ObjectClass::CleanupAudioAndRefs(v5);
    if ( *(_BYTE *)(this->q148 + 5831) )
      *((_BYTE *)v185 + 22264) = 1;
    if ( *(_BYTE *)(*(_DWORD *)(this->AnimClass_field_0x21C + 52) + 422) )
    {
      v6 = (BuildingTypeClass *)this->q148;
      if ( v6->ProduceCashStartup )
      {
        HouseClass::AddPower(v185, (IUnknown *)v6->ProduceCashStartup);
        int v7 = *(_DWORD *)(this->q148 + 5472);
        this->q1B4 = *(_DWORD *)&HouseClass_Player[45112];
        this->q1B5 = v174;
        *((_DWORD *)this + 438) = v7;
      }
    }
    bool v8 = this->hasParachute;
    int v2 = v2;
    int v3 = v3;
    int v9 = 1 << *(_DWORD *)(*((_DWORD *)v185 + 13) + 184);
    if ( (v8 & v9) != 0 )
    {
      int v10 = v8 - v9;
      v11 = (BuildingTypeClass *)this->q148;
      this->hasParachute = v10;
      if ( v11->? )
      {
        int v12 = 0;
        *(_DWORD *)(this->AnimClass_field_0x21C + 21732) = 0;
        int v13 = *(_DWORD *)(this->AnimClass_field_0x21C + 120);
        if ( v13 > 0 )
        {
          do
          {
            v14 = (AbstractClass *)this->AnimClass_field_0x21C;
            int v15 = *(_DWORD *)(*(_DWORD *)v14[3].__pad_0 + 4 * v12);
            if ( v15 && !*(_BYTE *)(v15 + 129) && *(_BYTE *)(*(_DWORD *)(v15 + 1312) + 5796) )
              v14[603].nextArrayIndex |= *(_DWORD *)(v15 + 528);
            ++v12;
          }
          while ( v12 < v13 );
        }
        MapClass::MarkForRedraw(&stru_87C374[13428], 2);
      }
    }
    v16 = (BuildingTypeClass *)this->q148;
    *((_BYTE *)this + 979) = 0;
    if ( v16->LaserFencePost )
      BuildingClass::DemolishBridgeCheck((int *)this, 0);
    if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) || (unsigned __int8)House::IsHumanPlayer(v185) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)v185 + 13) + 422) && (_BYTE)aP1 )
      {
        if ( *(_BYTE *)(this->q148 + 5458) )
        {
          v17 = (AbstractClass *)this->AnimClass_field_0x21C;
          if ( v17 != (AbstractClass *)v185 )
          {
            if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v17) )
              VoxClass::FindAndPlay(aEvaTechbuildin, -1, -1);
            if ( (unsigned __int8)House::IsHumanPlayer(v185) )
            {
              if ( (unsigned __int8)House::IsHumanPlayer(v185) )
              {
                int v18 = *(_DWORD *)(this->q148 + 5460);
                if ( v18 != -1 )
                  UpdateThemeManager(v18, -1, -1);
              }
            }
          }
        }
        else
        {
          __int64 v19 = ((__int64 (__thiscall *)(#377 *, AbstractClass **))*(_DWORD *)(this->q6E0)(this, &aP1);
          if ( CreateTriggerClassIfFarEnough((IUnknown *)0xA, SHIDWORD(v19), *(IUnknown **)v19) )
            VoxClass::FindAndPlay(aEvaBuildingcap, -1, -1);
        }
      }
      stru_87C374[18816] = 1;
      MapClass::MarkForRedraw(&stru_87C374[13428], 0);
    }
    v20 = (BuildingTypeClass *)this->q148;
    this->q080 = 1;
    *((_BYTE *)this + 1740) = 1;
    if ( v20->NeedsEngineer )
    {
      v21 = (LightSourceClass *)*((_DWORD *)this + 389);
      *((_BYTE *)this + 1770) = 1;
      if ( v21 )
        Trigger::EnableOnce(v21, 0);
      if ( *(_BYTE *)(this->q148 + 5822) )
        BuildingClass::RepairPlacement(this, 0);
      int v22 = 0;
      v23 = (_BYTE **)((char *)this + 1372);
      do
      {
        if ( *(_BYTE *)(v22 + this->q148 + 3980) && *v23 )
          VtableStub::Method_425270(*v23);
        v22 += 68;
        ++v23;
      }
      while ( v22 < 1428 );
    }
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4
  int v170; // [esp+A4h] [ebp-60h]
  int v171; // [esp+A8h] [ebp-5Ch]
      && !*(_BYTE *)((*(int (__thiscall **)(#377 *, int, int))(this->hasParachute)(this, v170, v171) + 3231) )
    {
      HouseClass::IncrementStat((_DWORD *)v185 + 4314, *(_DWORD *)(this->q148 + 3576));
    }
    VectorClass_ReestablishPtr::Construct(&v179, 0, 0);
    int v24 = this->q03A;
    v179 = &DynamicVectorClass<Reestablish *>::`vftable';
    int v184 = 10;
    v183 = 0;
    aP1 = 0;
    if ( v24 > 0 )
    {
      do
      {
        Member = Team::GetMember(this, aP1);
        _BYTE * v26 = (_BYTE *)Member;
        if ( Member )
        {
          if ( (*(_BYTE *)(Member + 20) & 4) != 0 )
          {
            if ( (*(int (__thiscall **)(#377 *, int, int))(this->q278)(this, 19, Member) == 1 )
            {
              if ( *(_BYTE *)(this->q148 + 5821)
  _DWORD *v27; // ebp
                || (v27 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *, _BYTE *))(this->q0A8)(
                                      this,
  int v176[3]; // [esp+C8h] [ebp-3Ch] BYREF
                                      v176,
                                      v26),
  _DWORD *v28; // eax
  int v177[3]; // [esp+D4h] [ebp-30h] BYREF
                    v28 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v26 + 72))(v26, v177),
                    v29 = Coord::Subtract(
  _DWORD v178[3]; // [esp+E0h] [ebp-24h] BYREF
                            v178,
                            (IUnknown *)(*v28 - *v27),
                            (IUnknown *)(v28[1] - v27[1]),
                            (IUnknown *)(v28[2] - v27[2])),
  int v173; // [esp+BCh] [ebp-48h] BYREF
                    v173 = v29->field_0,
                    v174 = v29->field_4,
  int v175; // [esp+C4h] [ebp-40h]
                    v175 = v29->field_8,
                    Coord::Length(&v173),
  int v30; // eax
                    v30 < 64) )
              {
                char v31 = v26[1048];
                (*(void (__thiscall **)(_BYTE *, #375 *, int))(*(_DWORD *)v26 + 980))(v26, v185, 1);
                eax57 = (AbstractClass *)__2_YAPAXI_Z(8u);
                if ( eax57 )
                {
                  *(_DWORD *)eax57->__pad_0 = v26;
                  eax57->__pad_0[4] = v31;
                  v32 = eax57;
                }
                else
                {
                  v32 = 0;
                }
  int v181; // [esp+F4h] [ebp-10h]
                if ( (int)v183 < v181
                  || (BYTE1(v182) || !v181)
                  && v184 > 0
                  && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v179[2])(&v179, v181 + v184, 0) )
                {
                  v33 = v183;
                  v183 = (BuildingClass *)((char *)v183 + 1);
                  *((_DWORD *)Block + (_DWORD)v33) = v32;
                }
                goto LABEL_66;
              }
            }
          }
          else
          {
            v26 = 0;
          }
          (*(void (__thiscall **)(#377 *, int, _BYTE *))(this->q278)(this, 23, v26);
          (*(void (__thiscall **)(#377 *, int, _BYTE *))(this->q278)(this, 3, v26);
        }
LABEL_66:
        ecx66 = this->q03A;
        aP1 = (AbstractClass *)((char *)aP1 + 1);
      }
      while ( (int)aP1 < ecx66 );
    }
    v35 = (FactoryClass *)this->q524;
    if ( v35 )
    {
      FactoryClass::AbandonProduction((int)v35);
      v36 = (FactoryClass *)this->q524;
      if ( v36 )
        (*(void (__thiscall **)(FactoryClass *, int))(*(_DWORD *)v36->__pad_0 + 32))(v36, 1);
      this->q524 = 0;
    }
    BuildingClass::DecrementTypeCounter(this->q21C, (BuildingClass *)this);
    v37 = (AbstractClass *)this->AnimClass_field_0x21C;
  char v172[8]; // [esp+B4h] [ebp-50h] BYREF
    ScriptAction::GetWaypointCoords(v172, (IUnknown *)this);
    *((_BYTE *)this + 1763) = 1;
    int v39 = 0;
    int v40 = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 2236);
    if ( v40 > 0 )
    {
      _DWORD * v41 = *(_DWORD **)(*(_DWORD *)&stru_87C374[44652] + 2224);
      while ( *v41 != this->q148 )
      {
        ++v39;
        ++v41;
        if ( v39 >= v40 )
          goto LABEL_80;
      }
      int v42 = *(_DWORD *)&v37[2].__pad_0[8];
      aP1 = (AbstractClass *)this;
      int v43 = (*(int (__thiscall **)(char *, AbstractClass **))(v42 + 16))(&v37[2].__pad_0[8], &aP1);
      if ( v43 != -1 )
      {
        nextArrayIndex = v37[2].nextArrayIndex;
        if ( v43 < nextArrayIndex )
        {
          int v45 = nextArrayIndex - 1;
          for ( v37[2].nextArrayIndex = v45;
                v43 < v37[2].nextArrayIndex;
                *(_DWORD *)(*(_DWORD *)&v37[2].__pad_0[12] + 4 * v43 - 4) = *(_DWORD *)(*(_DWORD *)&v37[2].__pad_0[12]
                                                                                      + 4 * v43) )
          {
            ++v43;
          }
        }
      }
    }
LABEL_80:
    if ( *(_BYTE *)(this->q148 + 5801) )
    {
      abstractFlags = v37[3].abstractFlags;
      aP1 = (AbstractClass *)this;
      int v47 = (*(int (__thiscall **)(int *, AbstractClass **))(abstractFlags + 16))(&v37[3].abstractFlags, &aP1);
      if ( v47 != -1 )
      {
        int v48 = *(_DWORD *)v37[4].__pad_0;
        if ( v47 < v48 )
        {
          int v49 = v48 - 1;
          for ( *(_DWORD *)v37[4].__pad_0 = v49;
                v47 < *(_DWORD *)v37[4].__pad_0;
                *(_DWORD *)(v37[3].nextArrayIndex + 4 * v47 - 4) = *(_DWORD *)(v37[3].nextArrayIndex + 4 * v47) )
          {
            ++v47;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->q148 + 5805) )
    {
      int v50 = *(_DWORD *)&v37[4].__pad_0[8];
      aP1 = (AbstractClass *)this;
      int v51 = (*(int (__thiscall **)(char *, AbstractClass **))(v50 + 16))(&v37[4].__pad_0[8], &aP1);
      if ( v51 != -1 )
      {
        int v52 = v37[4].nextArrayIndex;
        if ( v51 < v52 )
        {
          ecx88 = v52 - 1;
          for ( v37[4].nextArrayIndex = ecx88;
                v51 < v37[4].nextArrayIndex;
                *(_DWORD *)(*(_DWORD *)&v37[4].__pad_0[12] + 4 * v51 - 4) = *(_DWORD *)(*(_DWORD *)&v37[4].__pad_0[12]
                                                                                      + 4 * v51) )
          {
            ++v51;
          }
        }
      }
    }
    v53 = (BuildingTypeClass *)this->q148;
    if ( v53->UnitAbsorb || v53->InfantryAbsorb )
    {
      NeedsSaveOrLink = (int (__thiscall **)(void **, AbstractClass **))v37[4].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      int v56 = NeedsSaveOrLink[4](&v37[4].NeedsSaveOrLink, &aP1);
      if ( v56 != -1 )
      {
        int v57 = *(_DWORD *)&v37[5].__pad_0[12];
        if ( v56 < v57 )
        {
          int v58 = v57 - 1;
          for ( *(_DWORD *)&v37[5].__pad_0[12] = v58;
                v56 < *(_DWORD *)&v37[5].__pad_0[12];
                *(_DWORD *)(*(_DWORD *)v37[5].__pad_0 + 4 * v56 - 4) = *(_DWORD *)(*(_DWORD *)v37[5].__pad_0 + 4 * v56) )
          {
            ++v56;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->q148 + 5803) )
    {
      int v59 = v37[5].abstractFlags;
      aP1 = (AbstractClass *)this;
      int v60 = (*(int (__thiscall **)(int *, AbstractClass **))(v59 + 16))(&v37[5].abstractFlags, &aP1);
      if ( v60 != -1 )
      {
        int v61 = *(_DWORD *)v37[6].__pad_0;
        if ( v60 < v61 )
        {
          ecx99 = v61 - 1;
          for ( *(_DWORD *)v37[6].__pad_0 = ecx99;
                v60 < *(_DWORD *)v37[6].__pad_0;
                *(_DWORD *)(v37[5].nextArrayIndex + 4 * v60 - 4) = *(_DWORD *)(v37[5].nextArrayIndex + 4 * v60) )
          {
            ++v60;
          }
        }
      }
    }
    v62 = (BuildingTypeClass *)this->q148;
    if ( v62->CanBeOccupied )
    {
      if ( *(int *)&v62->DebrisTypes[800] > -1 )
      {
        int v64 = *(_DWORD *)&v37[6].__pad_0[8];
        aP1 = (AbstractClass *)this;
        int v65 = (*(int (__thiscall **)(char *, AbstractClass **))(v64 + 16))(&v37[6].__pad_0[8], &aP1);
        if ( v65 != -1 )
        {
          int v66 = v37[6].nextArrayIndex;
          if ( v65 < v66 )
          {
            int v67 = v66 - 1;
            for ( v37[6].nextArrayIndex = v67;
                  v65 < v37[6].nextArrayIndex;
                  *(_DWORD *)(*(_DWORD *)&v37[6].__pad_0[12] + 4 * v65 - 4) = *(_DWORD *)(*(_DWORD *)&v37[6].__pad_0[12]
                                                                                        + 4 * v65) )
            {
              ++v65;
            }
          }
        }
      }
    }
    if ( *(_BYTE *)(this->q148 + 5804) )
    {
      v68 = (int (__thiscall **)(void **, AbstractClass **))v37[6].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      int v69 = v68[4](&v37[6].NeedsSaveOrLink, &aP1);
      if ( v69 != -1 )
      {
        int v70 = *(_DWORD *)&v37[7].__pad_0[12];
        if ( v69 < v70 )
        {
          int v71 = v70 - 1;
          for ( *(_DWORD *)&v37[7].__pad_0[12] = v71;
                v69 < *(_DWORD *)&v37[7].__pad_0[12];
                *(_DWORD *)(*(_DWORD *)v37[7].__pad_0 + 4 * v69 - 4) = *(_DWORD *)(*(_DWORD *)v37[7].__pad_0 + 4 * v69) )
          {
            ++v69;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->q148 + 5808) )
    {
      int v72 = v37[7].abstractFlags;
      aP1 = (AbstractClass *)this;
      int v73 = (*(int (__thiscall **)(int *, AbstractClass **))(v72 + 16))(&v37[7].abstractFlags, &aP1);
      if ( v73 != -1 )
      {
        int v74 = *(_DWORD *)v37[8].__pad_0;
        if ( v73 < v74 )
        {
          int v75 = v74 - 1;
          for ( *(_DWORD *)v37[8].__pad_0 = v75;
                v73 < *(_DWORD *)v37[8].__pad_0;
                *(_DWORD *)(v37[7].nextArrayIndex + 4 * v73 - 4) = *(_DWORD *)(v37[7].nextArrayIndex + 4 * v73) )
          {
            ++v73;
          }
        }
      }
    }
    if ( *(int *)(this->q148 + 5900) > 0 )
    {
      int v76 = *(_DWORD *)&v37[8].__pad_0[8];
      aP1 = (AbstractClass *)this;
      int v77 = (*(int (__thiscall **)(char *, AbstractClass **))(v76 + 16))(&v37[8].__pad_0[8], &aP1);
      if ( v77 != -1 )
      {
        int v78 = v37[8].nextArrayIndex;
        if ( v77 < v78 )
        {
          int v79 = v78 - 1;
          for ( v37[8].nextArrayIndex = v79;
                v77 < v37[8].nextArrayIndex;
                *(_DWORD *)(*(_DWORD *)&v37[8].__pad_0[12] + 4 * v77 - 4) = *(_DWORD *)(*(_DWORD *)&v37[8].__pad_0[12]
                                                                                      + 4 * v77) )
          {
            ++v77;
          }
        }
      }
    }
    if ( *(_BYTE *)(this->q148 + 5837) )
    {
      v80 = (int (__thiscall **)(void **, AbstractClass **))v37[8].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      int v81 = v80[4](&v37[8].NeedsSaveOrLink, &aP1);
      if ( v81 != -1 )
      {
        int v82 = *(_DWORD *)&v37[9].__pad_0[12];
        if ( v81 < v82 )
        {
          int v83 = v82 - 1;
          for ( *(_DWORD *)&v37[9].__pad_0[12] = v83;
                v81 < *(_DWORD *)&v37[9].__pad_0[12];
                *(_DWORD *)(*(_DWORD *)v37[9].__pad_0 + 4 * v81 - 4) = *(_DWORD *)(*(_DWORD *)v37[9].__pad_0 + 4 * v81) )
          {
            ++v81;
          }
        }
      }
      HouseClass::CalculateCostMultipliers((float *)v37->__pad_0);
    }
    v84 = (int (__thiscall **)(void **, AbstractClass **, int, int))v37[2].NeedsSaveOrLink;
    aP1 = (AbstractClass *)this;
    int v85 = v84[4](&v37[2].NeedsSaveOrLink, &aP1, v170, v171);
    if ( v85 != -1 )
    {
      int v86 = *(_DWORD *)&v37[3].__pad_0[12];
      if ( v85 < v86 )
      {
        int v87 = v86 - 1;
        for ( *(_DWORD *)&v37[3].__pad_0[12] = v87;
              v85 < *(_DWORD *)&v37[3].__pad_0[12];
              *(_DWORD *)(*(_DWORD *)v37[3].__pad_0 + 4 * v85 - 4) = *(_DWORD *)(*(_DWORD *)v37[3].__pad_0 + 4 * v85) )
        {
          ++v85;
        }
      }
    }
    if ( *(_BYTE *)(this->q148 + 5836) )
      --*(_DWORD *)&v37[594].__pad_0[4];
    ecx134 = *(_DWORD *)(this->q148 + 5476);
    if ( ecx134 )
    {
      if ( *((_BYTE *)this + 1764) )
      {
        *(_DWORD *)(this->AnimClass_field_0x21C + 356) -= ecx134;
        v88 = (AbstractClass *)this->AnimClass_field_0x21C;
        if ( (int)v88[9].NeedsSaveOrLink < 0 )
          v88[9].NeedsSaveOrLink = 0;
      }
    }
    ecx138 = *(_DWORD *)(this->q148 + 5480);
    if ( ecx138 )
    {
      if ( *((_BYTE *)this + 1764) )
      {
        *(_DWORD *)(this->AnimClass_field_0x21C + 360) -= ecx138;
        v90 = (AbstractClass *)this->AnimClass_field_0x21C;
        if ( *(int *)v90[10].__pad_0 < 0 )
          *(_DWORD *)v90[10].__pad_0 = 0;
      }
    }
    v91 = (BuildingTypeClass *)this->q148;
    if ( v91->Helipad )
      *(_DWORD *)&v37[20].__pad_0[4] -= v91->?;
    v92 = (BuildingTypeClass *)this->q148;
    if ( v92->CloakGenerator )
    {
      char v94 = this->q1BB;
      *((_BYTE *)this + 1771) = -1;
      if ( !v94 )
        this->q1BB = v92->CloakRadiusInCells;
      vfptr0 = *(BuildingTypeClass **)this;
      this->q080 = 1;
      this->q1BB = 1;
      (*(void (__thiscall **)(#377 *, int))&vfptr0->DebrisTypes[252])(this, 1);
    }
    if ( *(_BYTE *)(this->q148 + 3281) )
      (*(void (__thiscall **)(#377 *))(this->q418)(this);
    (*(void (__thiscall **)(#377 *, _DWORD, _DWORD, _DWORD, _DWORD))(this->q48C)(this, 0, 0, 0, 0);
    edi150 = v187;
    TechnoClass::ProcessCapture((int *)this, (int)v187, v187, 1);
    if ( *(_BYTE *)(this->q148 + 5831) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q0D4)(this) )
      {
        v96 = (BuildingTypeClass *)this->q148;
        if ( v96->CloakGenerator )
        {
          cl153 = this->q1BB;
          *((_BYTE *)this + 1771) = 1;
          if ( cl153 == v96->CloakRadiusInCells )
            this->q1BB = 0;
          this->q080 = 1;
        }
      }
    }
    if ( *(_BYTE *)(this->q148 + 3281)
      && (*(unsigned __int8 (__thiscall **)(#377 *))(this->q0D4)(this) )
    {
      (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 1044))(this);
    }
    AnimClass::updateAnimation((int)this, 0);
    v37[603].abstractFlags = (int)this;
    BuildingClass::CalcExitCoords((int *)v37->__pad_0);
    BuildingClass::CalcExitCoords(this->q21C);
    v98 = (AbstractClass *)this->AnimClass_field_0x21C;
    if ( (#377 *)v98[603].abstractFlags == this )
      v98[603].abstractFlags = 0;
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v37) && *(_BYTE *)(this->q148 + 5817) )
    {
      *(_DWORD *)&stru_87C374[17944] = 0;
      *(_DWORD *)&stru_87C374[17948] = 0;
      *(_DWORD *)&stru_87C374[17952] = -1;
      Mouse::SetBounds((int)&stru_87C374[13428], 0);
    }
    BuildingClass::IncrementOccupantTypeCounter(this->q21C, (BuildingClass *)this);
    v99 = *(BuildingTypeClass **)this;
    *((_BYTE *)this + 1768) = 0;
    (*(void (__thiscall **)(#377 *, int))&v99->DebrisTypes[456])(this, 1);
    if ( *(_BYTE *)(this->q148 + 5822) )
    {
      if ( !*(_DWORD *)&HouseClass_Player[43616] )
      {
        if ( !this->q090
          || this->q081
          || (BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::RepairPlacement(this, 1),
              !*(_DWORD *)&HouseClass_Player[43616]) )
        {
          if ( *(_BYTE *)(this->q148 + 5822) )
            *((_DWORD *)this + 390) = 0;
        }
      }
    }
    if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) )
    {
      (*(void (__thiscall **)(#377 *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->q488)(
        this,
        0,
        0,
        0,
        0,
        0);
      MapClass::MarkForRedraw(&stru_87C374[13428], 1);
    }
    int v101 = 1 << *(_DWORD *)(edi150->relatedTagsCapacity + 184);
    bool v102 = this->hasParachute;
    if ( (v102 & v101) != 0 )
      this->hasParachute = v102 & ~v101;
    v103 = (BuildingTypeClass *)this->COMStub_Return0_121();
    eax175 = this->GetCellCoords();
    v104 = (BuildingTypeClass *)(*(int (__thiscall **)(#377 *, _DWORD))(this->q119)(
                                  this,
                                  *(__int16 *)(eax175 + 266));
    if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q058)(this)
      || this->AnimClass_field_0x294 && *(_DWORD *)(this->AnimClass_field_0x294 + 80) == IsObjectTypeBuildingType((int)this) )
    {
      LOWORD(v104) = (unsigned __int16)Techno::StartInvulnerability(this, v104);
    }
    this->qE00 = (_WORD)v104;
    BuildingClass::SyncCrateVisuals((char *)this, v103, (unsigned __int16)v104);
    BuildingClass::SetConnectedBuildingMission((int *)this, (BuildingClass *)*((char *)this + 1773));
    int v106 = 0;
    int v107 = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 2236);
    if ( v107 <= 0 )
    {
LABEL_183:
      v109 = (int)v185;
    }
    else
    {
      _DWORD * v108 = *(_DWORD **)(*(_DWORD *)&stru_87C374[44652] + 2224);
      while ( *v108 != this->q148 )
      {
        ++v106;
        ++v108;
        if ( v106 >= v107 )
          goto LABEL_183;
      }
      v109 = (int)v185;
      int v166 = *((_DWORD *)v185 + 22);
      if ( *((_DWORD *)v185 + 24) < v166
        || (*((_BYTE *)v185 + 93) || !v166)
  int v167; // eax
        && (v167 = *((_DWORD *)v185 + 25), v167 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*((_DWORD *)v185 + 20) + 8))(
             (int)v185 + 80,
             v166 + v167,
             0) )
      {
        int v168 = *((_DWORD *)v185 + 24);
        int v169 = *((_DWORD *)v185 + 21);
        *((_DWORD *)v185 + 24) = v168 + 1;
        *(_DWORD *)(v169 + 4 * v168) = this;
      }
    }
    if ( *(_BYTE *)(this->q148 + 5801) )
    {
      int v110 = *(_DWORD *)(v109 + 136);
      if ( *(_DWORD *)(v109 + 144) < v110
        || (*(_BYTE *)(v109 + 141) || !v110)
  int v111; // eax
        && (v111 = *(_DWORD *)(v109 + 148), v111 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 128) + 8))(
             v109 + 128,
             v110 + v111,
             0) )
      {
        int v112 = *(_DWORD *)(v109 + 144);
        int v113 = *(_DWORD *)(v109 + 132);
        *(_DWORD *)(v109 + 144) = v112 + 1;
        *(_DWORD *)(v113 + 4 * v112) = this;
      }
    }
    if ( *(_BYTE *)(this->q148 + 5805) )
    {
      int v114 = *(_DWORD *)(v109 + 160);
      if ( *(_DWORD *)(v109 + 168) < v114
        || (*(_BYTE *)(v109 + 165) || !v114)
  int v115; // eax
        && (v115 = *(_DWORD *)(v109 + 172), v115 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 152) + 8))(
             v109 + 152,
             v114 + v115,
             0) )
      {
        int v116 = *(_DWORD *)(v109 + 168);
        edx197 = *(_DWORD *)(v109 + 156);
        *(_DWORD *)(v109 + 168) = v116 + 1;
        *(_DWORD *)(edx197 + 4 * v116) = this;
      }
    }
    v117 = (BuildingTypeClass *)this->q148;
    if ( v117->UnitAbsorb || v117->InfantryAbsorb )
    {
      int v119 = *(_DWORD *)(v109 + 184);
      if ( *(_DWORD *)(v109 + 192) < v119
        || (*(_BYTE *)(v109 + 189) || !v119)
  int v120; // eax
        && (v120 = *(_DWORD *)(v109 + 196), v120 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 176) + 8))(
             v109 + 176,
             v119 + v120,
             0) )
      {
        int v121 = *(_DWORD *)(v109 + 192);
        int v122 = *(_DWORD *)(v109 + 180);
        *(_DWORD *)(v109 + 192) = v121 + 1;
        *(_DWORD *)(v122 + 4 * v121) = this;
      }
    }
    if ( *(_BYTE *)(this->q148 + 5803) )
    {
      int v123 = *(_DWORD *)(v109 + 208);
      if ( *(_DWORD *)(v109 + 216) < v123
        || (*(_BYTE *)(v109 + 213) || !v123)
  int v124; // eax
        && (v124 = *(_DWORD *)(v109 + 220), v124 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 200) + 8))(
             v109 + 200,
             v123 + v124,
             0) )
      {
        int v125 = *(_DWORD *)(v109 + 216);
        edx212 = *(_DWORD *)(v109 + 204);
        *(_DWORD *)(v109 + 216) = v125 + 1;
        *(_DWORD *)(edx212 + 4 * v125) = this;
      }
    }
    v126 = (BuildingTypeClass *)this->q148;
    if ( v126->CanBeOccupied && *(int *)&v126->DebrisTypes[800] > -1 )
    {
      int v128 = *(_DWORD *)(v109 + 232);
      if ( *(_DWORD *)(v109 + 240) < v128
        || (*(_BYTE *)(v109 + 237) || !v128)
  int v129; // eax
        && (v129 = *(_DWORD *)(v109 + 244), v129 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 224) + 8))(
             v109 + 224,
             v128 + v129,
             0) )
      {
        int v130 = *(_DWORD *)(v109 + 240);
        int v131 = *(_DWORD *)(v109 + 228);
        *(_DWORD *)(v109 + 240) = v130 + 1;
        *(_DWORD *)(v131 + 4 * v130) = this;
      }
    }
    if ( *(_BYTE *)(this->q148 + 5804) )
    {
      int v132 = *(_DWORD *)(v109 + 256);
      if ( *(_DWORD *)(v109 + 264) < v132
        || (*(_BYTE *)(v109 + 261) || !v132)
  int v133; // eax
        && (v133 = *(_DWORD *)(v109 + 268), v133 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 248) + 8))(
             v109 + 248,
             v132 + v133,
             0) )
      {
        int v134 = *(_DWORD *)(v109 + 264);
        int v135 = *(_DWORD *)(v109 + 252);
        *(_DWORD *)(v109 + 264) = v134 + 1;
        *(_DWORD *)(v135 + 4 * v134) = this;
      }
    }
    if ( *(_BYTE *)(this->q148 + 5808) )
    {
      int v136 = *(_DWORD *)(v109 + 280);
      if ( *(_DWORD *)(v109 + 288) < v136
        || (*(_BYTE *)(v109 + 285) || !v136)
  int v137; // eax
        && (v137 = *(_DWORD *)(v109 + 292), v137 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 272) + 8))(
             v109 + 272,
             v137 + v136,
             0) )
      {
        int v138 = *(_DWORD *)(v109 + 288);
        int v139 = *(_DWORD *)(v109 + 276);
        *(_DWORD *)(v109 + 288) = v138 + 1;
        *(_DWORD *)(v139 + 4 * v138) = this;
      }
    }
    if ( *(int *)(this->q148 + 5900) > 0 )
    {
      int v140 = *(_DWORD *)(v109 + 304);
      if ( *(_DWORD *)(v109 + 312) < v140
        || (*(_BYTE *)(v109 + 309) || !v140)
  int v141; // eax
        && (v141 = *(_DWORD *)(v109 + 316), v141 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 296) + 8))(
             v109 + 296,
             v141 + v140,
             0) )
      {
        int v142 = *(_DWORD *)(v109 + 312);
        int v143 = *(_DWORD *)(v109 + 300);
        *(_DWORD *)(v109 + 312) = v142 + 1;
        *(_DWORD *)(v143 + 4 * v142) = this;
      }
    }
    if ( *(_BYTE *)(this->q148 + 5837) )
    {
      int v144 = *(_DWORD *)(v109 + 328);
      if ( *(_DWORD *)(v109 + 336) < v144
        || (*(_BYTE *)(v109 + 333) || !v144)
  int v145; // eax
        && (v145 = *(_DWORD *)(v109 + 340), v145 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 320) + 8))(
             v109 + 320,
             v145 + v144,
             0) )
      {
        int v146 = *(_DWORD *)(v109 + 336);
        int v147 = *(_DWORD *)(v109 + 324);
        *(_DWORD *)(v109 + 336) = v146 + 1;
        *(_DWORD *)(v147 + 4 * v146) = this;
      }
      HouseClass::CalculateCostMultipliers((float *)v109);
    }
    int v148 = *(_DWORD *)(v109 + 112);
    if ( *(_DWORD *)(v109 + 120) < v148
      || (*(_BYTE *)(v109 + 117) || !v148)
  int v149; // eax
      && (v149 = *(_DWORD *)(v109 + 124), v149 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v109 + 104) + 8))(v109 + 104, v149 + v148, 0) )
    {
      int v150 = *(_DWORD *)(v109 + 120);
      int v151 = *(_DWORD *)(v109 + 108);
      *(_DWORD *)(v109 + 120) = v150 + 1;
      *(_DWORD *)(v151 + 4 * v150) = this;
    }
    if ( *(_BYTE *)(this->q148 + 5836) )
      ++*(_DWORD *)(this->AnimClass_field_0x21C + 21388);
    ecx258 = *(_DWORD *)(this->q148 + 5476);
    if ( ecx258 )
      *(_DWORD *)(this->AnimClass_field_0x21C + 356) += ecx258;
    v152 = (BuildingTypeClass *)this->q148;
    UnitsGainSelfHeal = v152->UnitsGainSelfHeal;
    if ( UnitsGainSelfHeal )
      *(_DWORD *)(this->AnimClass_field_0x21C + 360) += UnitsGainSelfHeal;
    v154 = (BuildingTypeClass *)this->q148;
    if ( v154->Helipad )
      *(_DWORD *)(this->AnimClass_field_0x21C + 724) += v154->?;
    v155 = (BuildingTypeClass *)this->q148;
    v156 = (AbstractClass *)v155->Factory[0];
    if ( v156 )
    {
      LOBYTE(v152) = v155->DebrisTypes[2490];
      HouseClass::UpdateProduction((int)v37, (IUnknown *)v156, (AbstractClass *)v152, 0);
      v157 = (BuildingTypeClass *)this->q148;
      LOBYTE(v159) = v157->DebrisTypes[2490];
      HouseClass::UpdateProduction(v109, (IUnknown *)v157->Factory[0], v159, 0);
    }
    edi266 = 0;
    if ( (int)v183 > 0 )
    {
      v160 = (CCINIClass *)Block;
      do
      {
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q278)(
          this,
          2,
          **(_DWORD **)&v160->__pad_0[4 * edi266]);
        v160 = (CCINIClass *)Block;
        if ( *(_BYTE *)(*((_DWORD *)Block + edi266) + 4) )
        {
          this->q418 = 1;
          *(_BYTE *)(**(_DWORD **)&v160->__pad_0[4 * edi266] + 1048) = 1;
          v160 = (CCINIClass *)Block;
        }
        ++edi266;
      }
      while ( edi266 < (int)v183 );
    }
    if ( *(_DWORD *)&HouseClass_Player[29932] )
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)v109) )
      {
        bool v162 = this->q053;
        if ( v162 != v109 && !*(_BYTE *)(*(_DWORD *)(v162 + 52) + 422) )
        {
          for ( i = *((_BYTE *)this + 1794); i > 0; i = *((_BYTE *)this + 1794) )
          {
            int v164 = *((_DWORD *)this + i + 378);
            v165 = (IUnknown *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v164 + 184))(
                                 v164,
                                 this->AnimClass_field_0x21C,
                                 1);
            HouseClass::AddPower(this->q21C, v165);
            BuildingClass::ClearSuperWeaponAnim((int)this);
            *(_BYTE *)(this->AnimClass_field_0x21C + 22392) = 1;
            *(_BYTE *)(this->AnimClass_field_0x21C + 22393) = 1;
          }
          (*(void (__thiscall **)(#377 *, int))(this->q1A0)(this, 1);
        }
      }
    }
    v37[14].__pad_0[4] = 1;
    result = (int)Block;
    *(_BYTE *)(v109 + 508) = 1;
    v179 = &vt_VectorClass_Reestablish;
    if ( result )
    {
      if ( BYTE1(v182) )
        __3_YAXPAX_Z((void *)result);
    }
    LOBYTE(result) = 1;
  }
  return result;
}
} // namespace gamemd

// 0x7298F0
namespace gamemd {
void AnimClass_GetAnimation()
{
{
  int GroundHeight; // ebx
  int result; // eax
  int v17; // [esp+1Ch] [ebp-Ch]
  int * v3 = (int *)(a1[3] + 156); /*0x7298fa*/
  int v13 = *v3; /*0x729901*/
  int v14 = v3[1]; /*0x72990d*/
  int v15 = v3[2]; /*0x729919*/
  GroundHeight = Cell::GetGroundHeight(&v13); /*0x729922*/
  if ( v15 >= GroundHeight ) /*0x72992a*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)a1[3] + 288))(a1[3], 0, 0); /*0x729a43*/
    int v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 132))(a1[3]); /*0x729a4e*/
    int v11 = Math::RoundToInt(64.0 / (double)*(int *)(v10 + 1820)); /*0x729a60*/
    a1[10] = g_CurrentFrame; /*0x729a72*/
    a1[11] = v17; /*0x729a78*/
    int v12 = a1[3]; /*0x729a7b*/
    a1[12] = v11; /*0x729a7e*/
    a1[13] = v11; /*0x729a81*/
    result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v12 + 1348))(v12, 0, 0); /*0x729a86*/
    a1[6] = 6; /*0x729a8c*/
  }
  else
  {
    int v5 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[3] + 456))(a1[3], a2); /*0x72993f*/
    v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 1336))(a1[3]); /*0x72994f*/
    int v6 = Math::RoundToInt((double)v13 * *(double *)&g_RulesClass_Instance->TunnelSpeed); /*0x72995a*/
    if ( v6 <= 5 ) /*0x729962*/
      v6 = 5; /*0x729964*/
  int v16; // [esp+18h] [ebp-10h] BYREF
    v16 += v6; /*0x729971*/
    if ( v16 > GroundHeight ) /*0x729975*/
      v16 = GroundHeight; /*0x729977*/
    result = (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)a1[3] + 436))(a1[3], &v14); /*0x729985*/
    if ( v5 <= -50 ) /*0x72998f*/
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 456))(a1[3]); /*0x72999a*/
      if ( result > -50 ) /*0x7299a3*/
      {
        int * v8 = (int *)(a1[3] + 156); /*0x7299ae*/
        v16 = *v8; /*0x7299b5*/
        v17 = v8[1]; /*0x7299c2*/
        int v18 = v8[2]; /*0x7299cd*/
        StartAudioControllerAt(g_RulesClass_Instance->ImpactLandSound, (int)&v16, 0); /*0x7299d7*/
        result = (int)__2_YAPAXI_Z(0x1C8u); /*0x7299e1*/
        if ( result ) /*0x7299eb*/
        {
          int * v9 = (int *)(a1[3] + 156); /*0x7299f6*/
          v16 = *v9; /*0x729a09*/
          v17 = v9[1]; /*0x729a10*/
          v18 = v9[2]; /*0x729a1c*/
          return (int)AnimClass::ctor((void **)result, (void *)g_RulesClass_Instance->?[3], &v16, 0, 1, (void *)0x600, 0, 0); /*0x729a2f*/
        }
      }
    }
  }
  return result; /*0x729a34*/
}
} // namespace gamemd

// 0x761030
namespace gamemd {
int AnimClass::ProcessFrame()
{
{
  int i; // edi
  ObjectClass *Coords; // eax

  Voxel::TransformMatrix((int)this); /*0x761037*/
  for ( i = 0; i < this->q080; ++i ) /*0x761046*/
  {
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF
    Coords = (ObjectClass *)CellClass::GetCoords(*(_DWORD **)(*((_DWORD *)this + 125) + 4 * i), v6); /*0x761056*/
    WaveClass::DamageArea((int *)this, Coords); /*0x76105e*/
  }
  int v4 = this->q04C - 1; /*0x761074*/
  this->q04C = v4; /*0x761075*/
  if ( v4 >= 0 ) /*0x76107b*/
    return ObjectClass::DetectCloaked(this); /*0x76108f*/
  else
    return (*(int (__thiscall **)(#374 *))(this->TintColor)(this); /*0x761081*/
}
} // namespace gamemd

// 0x4238D0
namespace gamemd {
int * AnimClass::CheckMirrorFlags(int a1)
{
{
    if ( (DataGlobal_89A190 & 1) == 0 )
  {
    DataGlobal_89A190 |= 1u;
    DataGlobal_89A160 = 2147450879;
    atexit(nullsub_89);
  }
    return &DataGlobal_89A160;
}
}
} // namespace gamemd

// 0x426300
namespace gamemd {
char AnimClass::ProcessAreaEffect(unsigned int * a1)
{
{
    char v1;
    char *v2;
    char result;
    v1 = Input::OffsetToDirection(a1);
    v2 = Coord::To_Cell(&DataGlobal_87F7E8, a1);
    if ( Cell::GetGroundHeight(a1) + Map_MaxHeight > *((int*)(a1) + 2) )
  {
    result = ~(1 << v1) & v2[292];
    v2[292] = result;
    if ( (result & 0x1C) == 0 )
    *((int *)(v2) + 21) = -1;
  }
    else
  {
    result = ~(1 << v1) & v2[296];
    v2[296] = result;
    if ( (result & 0x1C) == 0 )
    *((int *)(v2) + 22) = -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x426530
namespace gamemd {
int AnimClass::MissionStubReturnZero()
{
return 456;
}
} // namespace gamemd

// 0x426540
namespace gamemd {
int AnimClass::MissionStubReturnZero2(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448643;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd
