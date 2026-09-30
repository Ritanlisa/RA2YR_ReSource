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
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/RadarHashVector_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"

// 0x652C00
namespace gamemd {
CampaignClass * RadarClass::Destruct()
{

  char *v2; // esi
  int v3; // ebp
  void *v4; // eax
  unsigned char (*)[4] v5;
  unsigned char (*)[4] v6;

  *this = (void *)(&vt_RadarClass);
  AudioFileClass::Release((unsigned int *)this + 1328); /*0x652c12*/
  TacticalClass::FreeResources(this); /*0x652c19*/
  v2 = (char *)((unsigned int *)this + 1314); /*0x652c1e*/
  v3 = 22; /*0x652c24*/
  do /*0x652c53*/
  {
    v4 = (unsigned int)((void *)*((unsigned int *)v2 - 5));
    v2 -= 24; /*0x652c2e*/
    *(unsigned int *)v2 = &vt_VectorClass_Point2D; /*0x652c33*/
    if ( v4 && v2[13] ) /*0x652c3b*/
    {
      __3_YAXPAX_Z(v4); /*0x652c41*/
      *((unsigned int *)v2 + 1) = 0; /*0x652c49*/
    }
    --v3; /*0x652c4c*/
    v2[13] = 0; /*0x652c4d*/
    *((unsigned int *)v2 + 2) = 0; /*0x652c50*/
  }
  while ( v3 ); /*0x652c53*/
  v5 = (void *)*((unsigned int *)this + 1176); /*0x652c55*/
  *((unsigned int *)this + 1175) = &vt_VectorClass_Point2D; /*0x652c5b*/
  if ( v5 && *((unsigned char *)this + 4713) ) /*0x652c69*/
  {
    __3_YAXPAX_Z(v5); /*0x652c72*/
    *((unsigned int *)this + 1176) = 0; /*0x652c7a*/
  }
  *((unsigned char *)this + 4713) = 0; /*0x652c80*/
  *((unsigned int *)this + 1177) = 0; /*0x652c86*/
  v6 = (void *)*((unsigned int *)this + 1162); /*0x652c8c*/
  *((unsigned int *)this + 1161) = &vt_VectorClass_Cell; /*0x652c92*/
  if ( v6 && *((unsigned char *)this + 4657) ) /*0x652ca0*/
  {
    __3_YAXPAX_Z(v6); /*0x652ca9*/
    *((unsigned int *)this + 1162) = 0; /*0x652cb1*/
  }
  *((unsigned char *)this + 4657) = 0; /*0x652cb9*/
  *((unsigned int *)this + 1163) = 0; /*0x652cbf*/
  return ((MapClass *)(this))->Destruct(); /*0x652cca*/

}
}
// 0x654650
namespace gamemd {
void RadarClass_RecreateSurface(void * a1, void * a2)
{
  unsigned int *v2; // ecx
  float *v3; // esi
  int * result;
  int *v5; // edi
  void (***v6)(unsigned int, int); // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  void (***v13)(unsigned int, int); // ecx
  char *v14; // ebx
  int v15; // edi
  int v16; // eax
  char *v17; // eax
  int v18; // [esp-Ch] [ebp-2Ch]
  int v19[4]; // [esp+10h] [ebp-10h] BYREF

  v3 = (float *)((int *)((float *)v2));
  result = (int *)(v2[1321]);
  v5 = (int *)(v2 + 1319);
  if ( result > 0 && (int)v2[1322] > 0 ) /*0x654671*/
  {
    v6 = (void (***)(unsigned int, int))v2[1160]; /*0x654677*/
    v3[1320] = 0.0; /*0x65467d*/
    *v5 = 0; /*0x654685*/
    if ( v6 ) /*0x654687*/
    {
      (**v6)(v6, 1); /*0x65468d*/
      v3[1160] = 0.0; /*0x65468f*/
    }
    if ( *((unsigned int *)v3 + 1167) ) /*0x654695*/
    {
      RA2_OPDEL(*((void **)v3 + 1167)); /*0x6546a0*/
      v3[1167] = 0.0; /*0x6546a8*/
    }
    if ( *((unsigned int *)v3 + 1181) ) /*0x6546ae*/
    {
      RA2_OPDEL(*((void **)v3 + 1181)); /*0x6546b9*/
      v3[1181] = 0.0; /*0x6546c1*/
    }
    GenerateImageThumbnail(v3, v19, v5, v5, 1); /*0x6546d3*/
    v7 = (*(int (**)(unsigned int, int))(**((unsigned int **)v3 + 1160) + 124))(*((unsigned int *)v3 + 1160), a2); /*0x6546e0*/
    v8 = *((unsigned int *)v3 + 1160); /*0x6546e3*/
    *((unsigned int *)v3 + 1321) = v7; /*0x6546e9*/
    v9 = (*(int (**)(int))(v8->q080)(v8); /*0x6546f1*/
    v10 = *((unsigned int *)v3 + 1321); /*0x6546f7*/
    v11 = *((unsigned int *)v3 + 1148); /*0x6546fd*/
    *((unsigned int *)v3 + 1322) = v9; /*0x65470b*/
    *v5 = v11; /*0x654711*/
    if ( v10 < 140 ) /*0x654713*/
      *v5 = v11 + (140 - v10) / 2; /*0x654723*/
    v12 = *((unsigned int *)v3 + 1149); /*0x654725*/
    *((unsigned int *)v3 + 1320) = v12; /*0x65472e*/
    if ( v9 < 108 ) /*0x654734*/
      *((unsigned int *)v3 + 1320) = v12 + (108 - v9) / 2; /*0x654744*/
    v13 = (void (***)(unsigned int, int))*((unsigned int *)v3 + 1159); /*0x65474a*/
    if ( v13 ) /*0x654752*/
    {
      (**v13)(v13, 1); /*0x654758*/
      v3[1159] = 0.0; /*0x65475a*/
    }
    v14 = (char *)RA2_OPNEW(0x24u); /*0x654767*/
    if ( v14 ) /*0x65476e*/
    {
      v19[0] = (int)v3[1160]; /*0x65477d*/
      v15 = v19[0]; /*0x654777*/
      v18 = (*(int (**)(int))(*(unsigned int *)v19[0] + 128))(v19[0]); /*0x654789*/
      v16 = (*(int (**)(int))(v15->u32_7C)(v15); /*0x65478e*/
      v17 = DSurface::Construct(v14, v16, v18, 1, 0); /*0x654794*/
    }
    else
    {
      v17 = (char *)((unsigned int)(0));
    }
    *((unsigned int *)v3 + 1159) = v17; /*0x65479d*/
    (*(void (**)(char *, unsigned int))(v17->nextArrayIndex)(v17, 0); /*0x6547a8*/
    IDA_LOBYTE(result) = RadarClass::UpdateFoundationShapesCustom(v3); /*0x6547ad*/
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
  unsigned int *v25; // ebp
  char v26; // cl
  bool v27; // al
  int v28; // eax
  int v29; // ecx
  IUnknown *v30; // esi
  int v31; // eax
  char v32; // [esp+13h] [ebp-9h]
  int v33; // [esp+14h] [ebp-8h]
  int v34; // [esp+18h] [ebp-4h]
  char v35; // [esp+20h] [ebp+4h]
  bool v36; // [esp+24h] [ebp+8h]
  char v37; // [esp+28h] [ebp+Ch]
  char aP3a; // [esp+2Ch] [ebp+10h]

  v33 = ((TechnoTypeClass *)(a1))->GetByTypeAndIndex(a2); /*0x6a8444*/
  v7 = TechnoTypeClass::GetByTypeAndIndex(a3, (int)aP3); /*0x6a844d*/
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
      v10 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608] + 4 * a2); /*0x6a84ab*/
      v11 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608] + 4 * (unsigned int)aP3); /*0x6a84ae*/
      v12 = *(unsigned int *)(v10 + 176); /*0x6a84b1*/
      v13 = *(unsigned int *)(v11 + 176); /*0x6a84b7*/
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
  v17 = *(unsigned int *)(*(unsigned int *)(HouseClass_Player.field_0 + 52) + 188); /*0x6a84fc*/
  v18 = v17 == *(unsigned int *)(v33 + 1744); /*0x6a850a*/
  v19 = v17 == *(unsigned int *)(v7 + 1744); /*0x6a850f*/
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
    if ( *(unsigned char *)(v16 + 3478) ) /*0x6a855e*/
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
  if ( !*(unsigned char *)(v16 + 3278) ) /*0x6a8558*/
    goto LABEL_34; /*0x6a8558*/
  v22 = 1; /*0x6a855a*/
LABEL_35:
  v32 = v22; /*0x6a8574*/
  if ( v21 || (aP3a = 1, v22) ) /*0x6a8583*/
    aP3a = 0; /*0x6a8585*/
  if ( a3 == 40 || a3 == 3 ) /*0x6a8592*/
  {
    v23 = 1; /*0x6a85b4*/
    if ( *(unsigned char *)(v7 + 3478) ) /*0x6a85ae*/
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
    v25 = (unsigned int *)v34; /*0x6a85be*/
    goto LABEL_47; /*0x6a85be*/
  }
LABEL_42:
  v25 = (unsigned int *)v34; /*0x6a859c*/
  if ( !*(unsigned char *)(v34 + 3278) ) /*0x6a85a8*/
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
  if ( aP3a ) /*0x6a85fc*/
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
  v28 = *(unsigned int *)(v16 + 1588); /*0x6a8682*/
  v29 = v25[397]; /*0x6a8688*/
  if ( v28 < v29 ) /*0x6a8690*/
    return 1; /*0x6a869b*/
  if ( v28 > v29 ) /*0x6a869e*/
    return 0; /*0x6a86a9*/
  v30 = (IUnknown *)(*(int (**)(int, int))(*(unsigned int *)v16 + 132))(v16, HouseClass_Player.field_0); /*0x6a86bf*/
  v31 = (*(int (**)(unsigned int *, int))(*v25 + 132))(v25, HouseClass_Player.field_0); /*0x6a86c9*/
  if ( (int)v30 < v31 ) /*0x6a86d1*/
    return 1; /*0x6a86dc*/
  if ( (int)v30 > v31 ) /*0x6a86df*/
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

  *((unsigned int *)this + 1) = 0; /*0x4f4224*/
  *((unsigned int *)this + 2) = 0; /*0x4f4227*/
  *((unsigned int *)this + 3) = 2; /*0x4f422a*/
  *this = &off_7EA6FC; /*0x4f4231*/
  return this; /*0x4f4237*/

}
} // namespace gamemd

// 0x652D90
namespace gamemd {
void RadarClass::Destru_vt50()
{

  if ( g_abs_B048F9 ) /*0x652d9a*/
  {
    RA2_OPDEL(dword_B048E0); /*0x652da2*/
    g_abs_B048F9 = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( stru_B048F8 ) /*0x652dbd*/
  {
    RA2_OPDEL(dword_B048AC); /*0x652dc6*/
    stru_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/

}
} // namespace gamemd
