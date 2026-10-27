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
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int GenerateImageThumbnail(int* p0, int* p1, int* p2, char p3);  // x4:signals@0x6547c0
} // namespace gamemd

// 0x652C00
namespace gamemd {  // G42.18 ns repair
int RadarClass::Destruct(void *a1)
{


  /* X11: ptr_0 install elided (implicit via RadarClass virtuals 0x652c0c) */
  AudioFileClass::Release(&this->AudioFileClass_14C0); /*0x652c12*/
  TacticalClass::FreeResources((TacticalClass *)this); /*0x652c19*/
  MapClass **p_RadarClass_field_0x1488 = &this->u32_1488; // esi /*0x652c1e*/
  int v3 = 22; // ebp /*0x652c24*/
  do /*0x652c53*/
  {
    void *v4; // eax
    v4 = *(p_RadarClass_field_0x1488 - 5); /*0x652c2b*/
    p_RadarClass_field_0x1488 -= 6; /*0x652c2e*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x652c33*/
    if ( v4 && p_RadarClass_field_0x1488->IsAllocated ) /*0x652c3b*/
    {
      __3_YAXPAX_Z(v4); /*0x652c41*/
      p_RadarClass_field_0x1488[1] = 0; /*0x652c49*/
    }
    --v3; /*0x652c4c*/
    p_RadarClass_field_0x1488->IsAllocated = 0; /*0x652c4d*/
    p_RadarClass_field_0x1488[2] = 0; /*0x652c50*/
  }
  while ( v3 ); /*0x652c53*/
  CampaignClass *RadarClass_field_0x1260 = this->ptr_1260; // eax /*0x652c55*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x652c5b*/
  if ( RadarClass_field_0x1260 && this->u8_1269 ) /*0x652c69*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1260); /*0x652c72*/
    this->ptr_1260 = 0; /*0x652c7a*/
  }
  this->u8_1269 = 0; /*0x652c80*/
  *(unsigned int *)this->__pad_1264 = 0; /*0x652c86*/
  CampaignClass *RadarClass_field_0x1228; // eax
  RadarClass_field_0x1228 = this->ptr_1228; /*0x652c8c*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x652c92*/
  if ( RadarClass_field_0x1228 && this->u8_1231 ) /*0x652ca0*/
  {
    __3_YAXPAX_Z(RadarClass_field_0x1228); /*0x652ca9*/
    this->ptr_1228 = 0; /*0x652cb1*/
  }
  this->u8_1231 = 0; /*0x652cb9*/
  *(unsigned int *)this->__pad_122C = 0; /*0x652cbf*/
  ((char *)this)->Destruct(); /*0x652cc5*/
  int result; // eax
  return result; /*0x652cca*/

}
}  // G42.18 ns repair
// 0x654650
namespace gamemd {
int RadarClass_RecreateSurface(void * a1, void * a2)
{

  unsigned int *v2; // ecx
  float *v3; // esi
  int result; // eax
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

  v3 = (float *)v2; /*0x654655*/
  result = v2[1321]; /*0x65465a*/
  v5 = v2 + 1319; /*0x654660*/
  if ( result > 0 && (int)v2[1322] > 0 ) /*0x654671*/
  {
    v6 = (void (***)(unsigned int, int))v2[1160]; /*0x654677*/
    v3->u32_14A0 = 0.0; /*0x65467d*/
    *v5 = 0; /*0x654685*/
    if ( v6 ) /*0x654687*/
    {
      (**v6)(v6, 1); /*0x65468d*/
      v3->RadarSurface = 0.0; /*0x65468f*/
    }
    if ( v3->RadarCellBuffer ) /*0x654695*/
    {
      __3_YAXPAX_Z(*((void **)v3 + 1167)); /*0x6546a0*/
      v3->RadarCellBuffer = 0.0; /*0x6546a8*/
    }
    if ( v3->RadarPointBuffer ) /*0x6546ae*/
    {
      __3_YAXPAX_Z(*((void **)v3 + 1181)); /*0x6546b9*/
      v3->RadarPointBuffer = 0.0; /*0x6546c1*/
    }
    GenerateImageThumbnail(v3, v19, v5, v5, 1); /*0x6546d3*/
    v7 = (*(int (**)(unsigned int, int))(*v3->RadarSurface + 124))(v3->RadarSurface, a2); /*0x6546e0*/
    v8 = v3->RadarSurface; /*0x6546e3*/
    v3->q14A4 = v7; /*0x6546e9*/
    v9 = (*(int (**)(int))(*(unsigned int *)v8 + 128))(v8); /*0x6546f1*/
    v10 = v3->q14A4; /*0x6546f7*/
    v11 = v3->RadarOffsetX; /*0x6546fd*/
    v3->q14A8 = v9; /*0x65470b*/
    *v5 = v11; /*0x654711*/
    if ( v10 < 140 ) /*0x654713*/
      *v5 = v11 + (140 - v10) / 2; /*0x654723*/
    v12 = v3->RadarOffsetY; /*0x654725*/
    v3->u32_14A0 = v12; /*0x65472e*/
    if ( v9 < 108 ) /*0x654734*/
      v3->u32_14A0 = v12 + (108 - v9) / 2; /*0x654744*/
    v13 = (void (***)(unsigned int, int))v3->RadarSurfaceAlt; /*0x65474a*/
    if ( v13 ) /*0x654752*/
    {
      (**v13)(v13, 1); /*0x654758*/
      v3->RadarSurfaceAlt = 0.0; /*0x65475a*/
    }
    v14 = (char *)__2_YAPAXI_Z(0x24u); /*0x654767*/
    if ( v14 ) /*0x65476e*/
    {
      v19[0] = (int)v3[1160]; /*0x65477d*/
      v15 = v19[0]; /*0x654777*/
      v18 = (*(int (**)(int))(*(unsigned int *)v19[0] + 128))(v19[0]); /*0x654789*/
      v16 = (*(int (**)(int))(*(unsigned int *)v15 + 124))(v15); /*0x65478e*/
      v17 = DSurface::Construct(v14, v16, v18, 1, 0); /*0x654794*/
    }
    else
    {
      v17 = 0; /*0x65479b*/
    }
    v3->RadarSurfaceAlt = v17; /*0x65479d*/
    (*(void (**)(char *, unsigned int))(*(unsigned int *)v17 + 24))(v17, 0); /*0x6547a8*/
    (result) = ((result) & ~0xFF) | ((RadarClass::UpdateFoundationShapesCustom(v3)) & 0xFF); /*0x6547ad*/
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
  unsigned int *v16; // edi
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
  signed int v28; // eax
  signed int v29; // ecx
  int v30; // esi
  int v31; // eax
  char v32; // [esp+13h] [ebp-9h]
  unsigned int *v33; // [esp+14h] [ebp-8h]
  int v34; // [esp+18h] [ebp-4h]
  char v35; // [esp+20h] [ebp+4h]
  bool v36; // [esp+24h] [ebp+8h]
  char v37; // [esp+28h] [ebp+Ch]
  char v38; // [esp+2Ch] [ebp+10h]

  v33 = (unsigned int *)TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x6a8444*/
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
      v10 = *((unsigned int *)dword_A8E334 + a2); /*0x6a84ab*/
      v11 = *((unsigned int *)dword_A8E334 + aP3); /*0x6a84ae*/
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
  v17 = *(unsigned int *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 52) + 188); /*0x6a84fc*/
  v18 = v17 == v33[436]; /*0x6a850a*/
  v19 = v17 == v7->q6D0; /*0x6a850f*/
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
    if ( *((unsigned char *)v16 + 3478) ) /*0x6a855e*/
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
  if ( !*((unsigned char *)v16 + 3278) ) /*0x6a8558*/
    goto LABEL_34; /*0x6a8558*/
  v22 = 1; /*0x6a855a*/
LABEL_35:
  v32 = v22; /*0x6a8574*/
  if ( v21 || (v38 = 1, v22) ) /*0x6a8583*/
    v38 = 0; /*0x6a8585*/
  if ( a3 == 40 || a3 == 3 ) /*0x6a8592*/
  {
    v23 = 1; /*0x6a85b4*/
    if ( v7->u8_D96 ) /*0x6a85ae*/
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
  v28 = v16[397]; /*0x6a8682*/
  v29 = v25[397]; /*0x6a8688*/
  if ( v28 < v29 ) /*0x6a8690*/
    return 1; /*0x6a869b*/
  if ( v28 > v29 ) /*0x6a869e*/
    return 0; /*0x6a86a9*/
  v30 = (*(int (**)(unsigned int *, unsigned int))(*v16 + 132))( /*0x6a86bf*/
          v16,
          *(int *)((char *)&stru_A83CD9.estimatedHealth + 3));
  v31 = (*(int (**)(unsigned int *, unsigned int))(*v25 + 132))(v25, *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)); /*0x6a86c9*/
  if ( v30 < v31 ) /*0x6a86d1*/
    return 1; /*0x6a86dc*/
  if ( v30 > v31 ) /*0x6a86df*/
    return 0; /*0x6a86ea*/
  v14 = (const wchar_t *)v16[24]; /*0x6a86ed*/
  v15 = (const wchar_t *)v25[24]; /*0x6a86f0*/
  return wcscmp(v14, v15) <= 0; /*0x6a8457*/

}
}
// 0x4F4220
namespace gamemd {
unsigned int * RadarClass::initRadarSurface()
{

  this->RadarClass_field_0x4 = 0; /*0x4f4224*/
  this->q008 = 0; /*0x4f4227*/
  *(unsigned int *)this->u32_C = 2; /*0x4f422a*/
  /* X11: ptr_0 install elided (implicit via off_7EA6FC virtuals 0x4f4231) */
  return &this->ptr_0; /*0x4f4237*/

}
} // namespace gamemd

// 0x652D90
namespace gamemd {
void RadarClass::Destru_vt50()
{
  if ( byte_B048F9 ) /*0x652d9a*/
  {
    operator delete((void *)(dword_B048E0)); /*0x652da2*/
    byte_B048F9 = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( byte_B048F8 ) /*0x652dbd*/
  {
    operator delete((void *)(dword_B048AC)); /*0x652dc6*/
    byte_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/
}
} // namespace gamemd
