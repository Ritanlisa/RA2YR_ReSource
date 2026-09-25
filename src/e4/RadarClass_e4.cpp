// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x652C00
namespace gamemd {
CampaignClass * * RadarClass::Destruct()
{
  char *v2; // esi
  int v3; // ebp
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  *(void **)this = (void*)&RadarClass_vftable; /*0x652c0c*/
  AudioFileClass::Release(&this->q2108); /*0x652c12*/
  TacticalClass::FreeResources(); /*0x652c19*/
  v2 = (char *)(&this->u32_20C4); /*0x652c1e*/
  v3 = 22; /*0x652c24*/
  do /*0x652c53*/
  {
    v4 = (void *)*((_DWORD *)v2 - 5); /*0x652c2b*/
    v2 -= 24; /*0x652c2e*/
    *(void **)v2 = (void*)&VectorClass_Point2D_vftable; /*0x652c33*/
    if ( v4 && v2[13] ) /*0x652c3b*/
    {
      RA2_OPDEL(v4); /*0x652c41*/
      *((_DWORD *)v2 + 1) = 0; /*0x652c49*/
    }
    --v3; /*0x652c4c*/
    v2[13] = 0; /*0x652c4d*/
    *((_DWORD *)v2 + 2) = 0; /*0x652c50*/
  }
  while ( v3 ); /*0x652c53*/
  v5 = (void *)*(&this->u32_1D46); /*0x652c55*/
  *(&this->u32_1D45) = (void*)&VectorClass_Point2D_vftable; /*0x652c5b*/
  if ( v5 && this->u8_1269 ) /*0x652c69*/
  {
    RA2_OPDEL(v5); /*0x652c72*/
    *(&this->u32_1D46) = 0; /*0x652c7a*/
  }
  this->u8_1269 = 0; /*0x652c80*/
  *(&this->u32_1D47) = 0; /*0x652c86*/
  v6 = (void *)*(&this->u32_1D02); /*0x652c8c*/
  *(&this->u32_1D01) = (void*)&VectorClass_Cell_vftable; /*0x652c92*/
  if ( v6 && this->u8_1231 ) /*0x652ca0*/
  {
    RA2_OPDEL(v6); /*0x652ca9*/
    *(&this->u32_1D02) = 0; /*0x652cb1*/
  }
  this->u8_1231 = 0; /*0x652cb9*/
  *(&this->u32_1D03) = 0; /*0x652cbf*/
  return MapClass::Destruct(unsigned int a1); /*0x652cca*/
}
}
// 0x654650
namespace gamemd {
void RadarClass_RecreateSurface()
{
  int result; // eax
  _DWORD *v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // edi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  char *v13; // ebx
  int v14; // edi
  int v15; // eax
  char *v16; // eax
  int v17; // [esp-Ch] [ebp-2Ch]
  _DWORD v18[4]; // [esp+10h] [ebp-10h] BYREF

  result = *(_DWORD *)(a1 + 5284); /*0x65465a*/
  v4 = (_DWORD *)(a1 + 5276); /*0x654660*/
  if ( result > 0 && *(int *)(a1 + 5288) > 0 ) /*0x654671*/
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(a1 + 4640); /*0x654677*/
    *(_DWORD *)(a1 + 5280) = 0; /*0x65467d*/
    *v4 = 0; /*0x654685*/
    if ( v5 ) /*0x654687*/
    {
      (**v5)(v5, 1); /*0x65468d*/
      *(_DWORD *, unsigned int a1)(a1 + 4640) = 0; /*0x65468f*/
    }
    if ( *(_DWORD *)(a1 + 4668) ) /*0x654695*/
    {
      RA2_OPDEL(*(void **)(a1 + 4668)); /*0x6546a0*/
      *(_DWORD *, unsigned int a1)(a1 + 4668) = 0; /*0x6546a8*/
    }
    if ( *(_DWORD *)(a1 + 4724) ) /*0x6546ae*/
    {
      RA2_OPDEL(*(void **)(a1 + 4724)); /*0x6546b9*/
      *(_DWORD *, unsigned int a1, unsigned int a2)(a1 + 4724) = 0; /*0x6546c1*/
    }
    GenerateImageThumbnail(v18, v4, v4, 1); /*0x6546d3*/
    v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4640) + 124))(*(_DWORD *)(a1 + 4640), a2); /*0x6546e0*/
    v7 = *(_DWORD *)(a1 + 4640); /*0x6546e3*/
    *(_DWORD *)(a1 + 5284) = v6; /*0x6546e9*/
    v8 = (*(int (__thiscall **)(int))(v7->q080)(v7); /*0x6546f1*/
    v9 = *(_DWORD *)(a1 + 5284); /*0x6546f7*/
    v10 = *(_DWORD *)(a1 + 4592); /*0x6546fd*/
    *(_DWORD *)(a1 + 5288) = v8; /*0x65470b*/
    *v4 = v10; /*0x654711*/
    if ( v9 < 140 ) /*0x654713*/
      *v4 = v10 + (140 - v9) / 2; /*0x654723*/
    v11 = *(_DWORD *)(a1 + 4596); /*0x654725*/
    *(_DWORD *)(a1 + 5280) = v11; /*0x65472e*/
    if ( v8 < 108 ) /*0x654734*/
      *(_DWORD *)(a1 + 5280) = v11 + (108 - v8) / 2; /*0x654744*/
    v12 = *(void (__thiscall ****)(_DWORD, int))(a1 + 4636); /*0x65474a*/
    if ( v12 ) /*0x654752*/
    {
      (**v12)(v12, 1); /*0x654758*/
      *(_DWORD *, unsigned int a1)(a1 + 4636) = 0; /*0x65475a*/
    }
    v13 = (char *)RA2_OPNEW(0x24u); /*0x654767*/
    if ( v13 ) /*0x65476e*/
    {
      v18[0] = *(_DWORD *)(a1 + 4640); /*0x65477d*/
      v14 = v18[0]; /*0x654777*/
      v17 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v18[0] + 128))(v18[0]); /*0x654789*/
      v15 = (*(int (__thiscall **)(int))(v14->u32_7C)(v14); /*0x65478e*/
      v16 = DSurface::Construct(v13, v15, v17, 1, 0); /*0x654794*/
    }
    else
    {
      v16 = 0; /*0x65479b*/
    }
    *(_DWORD *)(a1 + 4636) = v16; /*0x65479d*/
    (*(void (__thiscall **)(char *, _DWORD))(v16->nextArrayIndex)(v16, 0); /*0x6547a8*/
    return RadarClass::UpdateFoundationShapesCustom(a1); /*0x6547ad*/
  }
  return result; /*0x6547b3*/
}
}
// 0x6A8420
namespace gamemd {
int RadarClass::GetBlip(int a1, int a2, int a3, ObjectClass * aP3)
{
  int v7; // edx
  bool v9; // al
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  const wchar_t *v14; // eax
  const wchar_t *v15; // ecx
  int v16; // edi
  int v17; // eax
  bool v18; // cl
  bool v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  char v23; // al
  char v24; // dl
  _DWORD *v25; // ebp
  char v26; // cl
  bool v27; // al
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  char v32; // [esp+13h] [ebp-9h]
  int v33; // [esp+14h] [ebp-8h]
  int v34; // [esp+18h] [ebp-4h]
  char v35; // [esp+20h] [ebp+4h]
  bool v36; // [esp+24h] [ebp+8h]
  char v37; // [esp+28h] [ebp+Ch]
  char v38; // [esp+2Ch] [ebp+10h]

  v33 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x6a8444*/
  v7 = TechnoTypeClass::GetByTypeAndIndex(a3, aP3); /*0x6a844d*/
  v34 = v7; /*0x6a8451*/
  if ( !a3 ) /*0x6a8455*/
    return 1; /*0x6a8460*/
  if ( a1 == 31 || a1 == 57 || (v35 = 0, a1 == 32) ) /*0x6a8475*/
    v35 = 1; /*0x6a8477*/
  v9 = a3 == 31 || a3 == 57 || a3 == 32; /*0x6a848f*/
  v36 = v9; /*0x6a8495*/
  if ( v35 ) /*0x6a849b*/
  {
    if ( v9 ) /*0x6a849f*/
    {
      v10 = *((_DWORD *)g_SuperWeaponPool + a2); /*0x6a84ab*/
      v11 = *((_DWORD *)g_SuperWeaponPool + aP3); /*0x6a84ae*/
      v12 = *(_DWORD *)(v10 + 176); /*0x6a84b1*/
      v13 = *(_DWORD *)(v11 + 176); /*0x6a84b7*/
      if ( v12 < v13 ) /*0x6a84bf*/
        return 1; /*0x6a84ca*/
      if ( v12 > v13 ) /*0x6a84cd*/
        return 0; /*0x6a84d8*/
      v14 = *(const wchar_t **)(v10 + 96); /*0x6a84db*/
      v15 = *(const wchar_t **)(v11 + 96); /*0x6a84de*/
      return wcscmp(v14, v15) <= 0; /*0x6a84e1*/
    }
    goto LABEL_25; /*0x6a849f*/
  }
  if ( v9 ) /*0x6a84e8*/
  {
  LABEL_25:
    v16 = v33; /*0x6a8536*/
    goto LABEL_26; /*0x6a8536*/
  }
  v16 = v33; /*0x6a84ef*/
  v17 = *(_DWORD *)(*((_DWORD *)HouseClass_Player + 13) + 188); /*0x6a84fc*/
  v18 = v17 == *(_DWORD *)(v33 + 1744); /*0x6a850a*/
  v19 = v17 == *(_DWORD *)(v7 + 1744); /*0x6a850f*/
  if ( v18 ) /*0x6a8514*/
  {
    if ( !v19 ) /*0x6a8518*/
      return 1; /*0x6a8523*/
  }
  else if ( v19 ) /*0x6a8528*/
  {
    return 0; /*0x6a8533*/
  }
  LABEL_26:
  if ( a1 == 40 || a1 == 3 ) /*0x6a8542*/
  {
    v20 = 1; /*0x6a8564*/
    if ( *(_BYTE *)(v16 + 3478) ) /*0x6a855e*/
    {
      v21 = 1; /*0x6a856a*/
      v37 = 1; /*0x6a856c*/
      goto LABEL_30; /*0x6a8570*/
    }
  }
  else
  {
    v20 = 0; /*0x6a8544*/
  }
  v21 = 0; /*0x6a8546*/
  v37 = 0; /*0x6a854a*/
  if ( !v20 ) /*0x6a854e*/
  {
  LABEL_34:
    v22 = 0; /*0x6a8572*/
    goto LABEL_35; /*0x6a8572*/
  }
  LABEL_30:
  if ( !*(_BYTE *)(v16 + 3278) ) /*0x6a8558*/
    goto LABEL_34; /*0x6a8558*/
  v22 = 1; /*0x6a855a*/
  LABEL_35:
  v32 = v22; /*0x6a8574*/
  if ( v21 || (v38 = 1, v22) ) /*0x6a8583*/
    v38 = 0; /*0x6a8585*/
  if ( a3 == 40 || a3 == 3 ) /*0x6a8592*/
  {
    v23 = 1; /*0x6a85b4*/
    if ( *(_BYTE *)(v7 + 3478) ) /*0x6a85ae*/
    {
      v24 = 1; /*0x6a85ba*/
      goto LABEL_42; /*0x6a85bc*/
    }
  }
  else
  {
    v23 = 0; /*0x6a8594*/
  }
  v24 = 0; /*0x6a8596*/
  if ( !v23 ) /*0x6a859a*/
  {
    v25 = (_DWORD *)v34; /*0x6a85be*/
    goto LABEL_47; /*0x6a85be*/
  }
  LABEL_42:
  v25 = (_DWORD *)v34; /*0x6a859c*/
  if ( !*(_BYTE *)(v34 + 3278) ) /*0x6a85a8*/
  {
  LABEL_47:
    v26 = 0; /*0x6a85c2*/
    goto LABEL_48; /*0x6a85c2*/
  }
  v26 = 1; /*0x6a85aa*/
  LABEL_48:
  v27 = !v24 && !v26; /*0x6a85d0*/
  if ( v35 ) /*0x6a85d8*/
  {
    if ( v24 || v26 || v27 ) /*0x6a85e4*/
      return 1; /*0x6a85f3*/
    goto LABEL_74; /*0x6a85e4*/
  }
  if ( v38 ) /*0x6a85fc*/
  {
    if ( v36 ) /*0x6a8604*/
      return 0; /*0x6a860f*/
    if ( v24 ) /*0x6a8614*/
      return 1; /*0x6a8614*/
  }
  else
  {
    if ( !v37 ) /*0x6a862c*/
    {
      if ( v32 ) /*0x6a8658*/
      {
        if ( v36 ) /*0x6a8660*/
          return 0; /*0x6a866b*/
        if ( v27 || v24 ) /*0x6a8674*/
          return 0; /*0x6a867f*/
      }
      goto LABEL_74; /*0x6a8674*/
    }
    if ( v36 ) /*0x6a8634*/
      return 0; /*0x6a863f*/
    if ( v27 ) /*0x6a8644*/
      return 0; /*0x6a864f*/
  }
  if ( v26 ) /*0x6a8618*/
    return 1; /*0x6a8623*/
  LABEL_74:
  v28 = *(_DWORD *)(v16 + 1588); /*0x6a8682*/
  v29 = v25[397]; /*0x6a8688*/
  if ( v28 < v29 ) /*0x6a8690*/
    return 1; /*0x6a869b*/
  if ( v28 > v29 ) /*0x6a869e*/
    return 0; /*0x6a86a9*/
  v30 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)v16 + 132))(v16, HouseClass_Player); /*0x6a86bf*/
  v31 = (*(int (__thiscall **)(_DWORD *, void *))(*v25 + 132))(v25, HouseClass_Player); /*0x6a86c9*/
  if ( v30 < v31 ) /*0x6a86d1*/
    return 1; /*0x6a86dc*/
  if ( v30 > v31 ) /*0x6a86df*/
    return 0; /*0x6a86ea*/
  v14 = *(const wchar_t **)(v16 + 96); /*0x6a86ed*/
  v15 = (const wchar_t *)v25[24]; /*0x6a86f0*/
  return wcscmp(v14, v15) <= 0; /*0x6a8457*/
}
}
// 0x4F4220
namespace gamemd {
unsigned int * RadarClass::initRadarSurface()
{
  this->q004 = 0; /*0x4f4224*/
  this->q008 = 0; /*0x4f4227*/
  this->q00C = 2; /*0x4f422a*/
  *this = &off_7EA6FC; /*0x4f4231*/
  return this; /*0x4f4237*/
}
} // namespace gamemd

// 0x652D90
namespace gamemd {
void RadarClass::Destru_vt50()
{
  if ( byte_B048F9 ) /*0x652d9a*/
  {
    RA2_OPDEL(dword_B048E0); /*0x652da2*/
    byte_B048F9 = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( byte_B048F8 ) /*0x652dbd*/
  {
    RA2_OPDEL(dword_B048AC); /*0x652dc6*/
    byte_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/
}
} // namespace gamemd
