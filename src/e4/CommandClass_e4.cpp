// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/Com_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/ToolTipManager_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ComStreamClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Commands_e4.hpp"
#include "e4/classes/ScreenCaptureCommandClass_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/PushCommandClass_e4.hpp"

// 0x6D1200
namespace gamemd {
int CommandClass::BuildBar()
{

  ShapeButtonClass *v2; // esi
  unsigned int v3; // eax
  ShapeButtonClass *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int ShapeButtonClass_field_0x08; // edx
  unsigned int v9; // eax
  ShapeButtonClass *v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  ShapeButtonClass *v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  ShapeButtonClass *v22; // esi
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  ShapeButtonClass * v27;
  ShapeButtonClass *v28; // ecx
  unsigned int v29; // eax
  ShapeButtonClass *v30; // ecx
  char *FontClassEntry; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  Struct v37; // [esp+8h] [ebp-1Ch] BYREF
  int v38; // [esp+Ch] [ebp-18h]
  int ShapeButtonClass_field_0x04; // [esp+10h] [ebp-14h]
  int v40; // [esp+14h] [ebp-10h]
  int v41; // [esp+18h] [ebp-Ch]
  char *v42; // [esp+1Ch] [ebp-8h]

  v2 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0);
  do /*0x6d1224*/
  {
    (*(void (**)(ShapeButtonClass *))(*(unsigned int *)v2->__pad_0 + 32))(v2); /*0x6d1210*/
    (*(void (**)(CommandClass *, ShapeButtonClass *))(*(unsigned int *)this + 48))(this, v2); /*0x6d1218*/
    (unsigned int)(v2)+= 8; /*0x6d121b*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d1224*/
  (*(void (**)(CommandClass *, GadgetClass *))(*(unsigned int *)this + 48))(this, (GadgetClass *)&stru_B0CCB0); /*0x6d122f*/
  v3 = (&g_ObjectTrackingPool)[dword_B0CD24]; /*0x6d1238*/
  if ( v3 <= 0x18 ) /*0x6d1241*/
  {
    v4 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0 + 8 * v3);
    if ( v4 ) /*0x6d1256*/
    {
      Struct::Zero25(&v37); /*0x6d125c*/
      v5 = *(unsigned int *)v4[1].__pad_0; /*0x6d1264*/
      v6 = *(unsigned int *)v4[3].__pad_0; /*0x6d1267*/
      ShapeButtonClass_field_0x04 = v4[1].ShapeButtonClass_field_0x04; /*0x6d126a*/
      v7 = *(unsigned int *)v4[2].__pad_0; /*0x6d126e*/
      v38 = v5; /*0x6d1271*/
      ShapeButtonClass_field_0x08 = v4[1].ShapeButtonClass_field_0x08; /*0x6d1275*/
      v41 = v7; /*0x6d1278*/
      v37.Struct_field_00 = v6; /*0x6d1283*/
      v42 = (char *)(aTipAttackmove); /*0x6d1287*/
      v40 = ShapeButtonClass_field_0x08; /*0x6d128f*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v6); /*0x6d1293*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d12a3*/
    }
  }
  v9 = (&g_ObjectTrackingPool)[dword_B0CB3C]; /*0x6d12ad*/
  if ( v9 <= 0x18 ) /*0x6d12b6*/
  {
    v10 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0 + 8 * v9);
    if ( v10 ) /*0x6d12cb*/
    {
      Struct::Zero25(&v37); /*0x6d12d1*/
      v11 = v10[1].ShapeButtonClass_field_0x04; /*0x6d12d9*/
      v12 = *(unsigned int *)v10[3].__pad_0; /*0x6d12dc*/
      v38 = *(unsigned int *)v10[1].__pad_0; /*0x6d12df*/
      v13 = v10[1].ShapeButtonClass_field_0x08; /*0x6d12e3*/
      ShapeButtonClass_field_0x04 = v11; /*0x6d12e6*/
      v14 = *(unsigned int *)v10[2].__pad_0; /*0x6d12ea*/
      v40 = v13; /*0x6d12ed*/
      v37.Struct_field_00 = v12; /*0x6d12f8*/
      v42 = (char *)(aTipBeacon); /*0x6d12fc*/
      v41 = v14; /*0x6d1304*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v12); /*0x6d1308*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d1318*/
    }
  }
  v15 = (&g_ObjectTrackingPool)[dword_B0C1B8]; /*0x6d1323*/
  if ( v15 <= 0x18 ) /*0x6d132c*/
  {
    v16 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0 + 8 * v15);
    if ( v16 ) /*0x6d1341*/
    {
      Struct::Zero25(&v37); /*0x6d1347*/
      v17 = *(unsigned int *)v16[1].__pad_0; /*0x6d134f*/
      v18 = *(unsigned int *)v16[3].__pad_0; /*0x6d1352*/
      ShapeButtonClass_field_0x04 = v16[1].ShapeButtonClass_field_0x04; /*0x6d1355*/
      v19 = *(unsigned int *)v16[2].__pad_0; /*0x6d1359*/
      v38 = v17; /*0x6d135c*/
      v20 = v16[1].ShapeButtonClass_field_0x08; /*0x6d1360*/
      v41 = v19; /*0x6d1363*/
      v37.Struct_field_00 = v18; /*0x6d136e*/
      v42 = (char *)(aTipCheer); /*0x6d1372*/
      v40 = v20; /*0x6d137a*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v18); /*0x6d137e*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d138e*/
    }
  }
  v21 = (&g_ObjectTrackingPool)[dword_B0CB20]; /*0x6d1398*/
  if ( v21 <= 0x18 ) /*0x6d13a1*/
  {
    v22 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0 + 8 * v21);
    if ( v22 ) /*0x6d13b6*/
    {
      Struct::Zero25(&v37); /*0x6d13bc*/
      v23 = v22[1].ShapeButtonClass_field_0x04; /*0x6d13c4*/
      v24 = *(unsigned int *)v22[3].__pad_0; /*0x6d13c7*/
      v38 = *(unsigned int *)v22[1].__pad_0; /*0x6d13ca*/
      v25 = v22[1].ShapeButtonClass_field_0x08; /*0x6d13ce*/
      ShapeButtonClass_field_0x04 = v23; /*0x6d13d1*/
      v26 = *(unsigned int *)v22[2].__pad_0; /*0x6d13d5*/
      v40 = v25; /*0x6d13d8*/
      v37.Struct_field_00 = v24; /*0x6d13e3*/
      v42 = (char *)(aTipDeploy); /*0x6d13e7*/
      v41 = v26; /*0x6d13ef*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v24); /*0x6d13f3*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d1403*/
    }
  }
  v27 = (gamemd::ShapeButtonClass *)((unsigned int)((gamemd::ShapeButtonClass *)(((unsigned int *)(g_ObjectTrackingPool))[dword_B0CB68])));
  if ( v27 > (gamemd::ShapeButtonClass *)(0x18) ) /*0x6d1419*/
    v28 = 0; /*0x6d142e*/
  else
    v28 = &stru_B0C1C0 + 8 * v27; /*0x6d1426*/
  PushCommandClass::Execute((unsigned int *)(v28), (int)aTipGuard); /*0x6d1435*/
  v29 = (&g_ObjectTrackingPool)[dword_B0CC1C]; /*0x6d1440*/
  if ( v29 > 0x18 ) /*0x6d1449*/
    v30 = 0; /*0x6d145e*/
  else
    v30 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0 + 8 * v29); /*0x6d1456*/
  PushCommandClass::Execute((unsigned int *)(v30), (int)aTipPlanningmod); /*0x6d1465*/
  FontClassEntry = GetFontClassEntry(dword_B0CB6C); /*0x6d1470*/
  PushCommandClass::Execute((unsigned int *)(FontClassEntry), (int)aTipStop); /*0x6d147c*/
  v32 = GetFontClassEntry(dword_B0CC20); /*0x6d1487*/
  PushCommandClass::Execute((unsigned int *)(v32), (int)aTipTeam01); /*0x6d1493*/
  v33 = GetFontClassEntry(dword_B0CC28); /*0x6d149e*/
  PushCommandClass::Execute((unsigned int *)(v33), (int)aTipTeam02); /*0x6d14aa*/
  v34 = GetFontClassEntry(dword_B0CD28); /*0x6d14b5*/
  PushCommandClass::Execute((unsigned int *)(v34), (int)aTipTeam03); /*0x6d14c1*/
  v35 = GetFontClassEntry(dword_B0CB38); /*0x6d14cc*/
  PushCommandClass::Execute((unsigned int *)(v35), (int)aTipTypeselect); /*0x6d14d8*/
  return PushCommandClass::Execute((unsigned int *)(&stru_B0CCB0), (int)aTipThumbopen); /*0x6d14ec*/

}
} // namespace gamemd
// 0x724580
namespace gamemd {
int CommandClass::AddAction(ToolTipManager * aP1, void *a2)
{

  ToolTipManager * v2;
  int *v4; // esi
  int result; // eax
  unsigned int *v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  ToolTipManager * v11;
  int v12; // edi
  int i; // eax
  char *v14; // ecx
  int v15; // ecx

  v2 = (gamemd::ToolTipManager *)(aP1);
  v4 = (int *)((gamemd::ToolTipManager *)((char *)this + 147));
  aP1 = (gamemd::ToolTipManager *)(*(unsigned int *)aP1);
  if ( *((char *)this + 148) ) /*0x724596*/
  {
    if ( CommandClass::executeAction((char *)this + 147, &aP1) ) /*0x7245a4*/
      goto LABEL_22; /*0x7245ab*/
    result = CommandClass::BinarySearchAction((char **)v4, (unsigned int *)&aP1); /*0x7245b8*/
    if ( result ) /*0x7245bf*/
    {
      v4[4] = result; /*0x7245c1*/
      LOBYTE(result) = 0; /*0x7245c7*/
      return result; /*0x7245ca*/
    }
  }
  result = (int)(__2_YAPAXI_Z(0x1Cu)); /*0x7245cf*/
  v6 = (unsigned int *)result; /*0x7245d4*/
  if ( result ) /*0x7245db*/
  {
    *(unsigned int *)result = *(unsigned int *)v2; /*0x7245e6*/
    *(unsigned int *)(result + 4) = *(unsigned int *)(v2 + 4); /*0x7245ee*/
    *(unsigned int *)(result + 8) = *(unsigned int *)(v2 + 8); /*0x7245f3*/
    *(unsigned int *)(result + 12) = *(unsigned int *)(v2 + 12); /*0x7245f9*/
    *(unsigned int *)(result + 16) = *(unsigned int *)(v2 + 16); /*0x7245ff*/
    *(unsigned int *)(result + 20) = *(unsigned int *)(v2 + 20); /*0x724605*/
    *(unsigned char *)(result + 24) = *(unsigned char *)(v2 + 24); /*0x724611*/
    v7 = *((char *)this + 143); /*0x724614*/
    if ( *((char *)this + 145) < v7 /*0x724641*/
      || (*((unsigned char *)this + 577) || !v7)
      && (v8 = *((char *)this + 146), v8 > 0)
      && (*(uint8_t (**)(int *, int, unsigned int))(*((char *)this + 141) + 8))((int *)(char *)this + 141, v7 + v8, 0) )
    {
      v9 = (unsigned int)(*((char *)this + 145));
      v10 = (unsigned int)(*((char *)this + 142));
      *((char *)this + 145) = v9 + 1; /*0x724655*/
      *(unsigned int *)(v10 + 4 * v9) = (unsigned int)(v6); /*0x724658*/
      result = v4[2]; /*0x72465e*/
      if ( v4[1] + 1 <= result ) /*0x724664*/
      {
LABEL_19:
        *(unsigned int *)(*v4 + 8 * v4[1]) = *v6; /*0x7246f4*/
        *(unsigned int *)(*v4 + 8 * v4[1] + 4) = (unsigned int)(v6); /*0x724704*/
        result = v4[1] + 1; /*0x72470b*/
        *((unsigned char *)v4 + 12) = 0; /*0x72470c*/
        v4[1] = result; /*0x724710*/
        goto LABEL_20; /*0x724710*/
      }
      if ( result ) /*0x72466c*/
      {
        aP1 = (gamemd::ToolTipManager *)(v4[2]);
        if ( result < 0 ) /*0x724680*/
          goto LABEL_20; /*0x724680*/
      }
      else
      {
        aP1 = (gamemd::ToolTipManager *)(10);
      }
      v11 = (gamemd::ToolTipManager *)((int)(result + aP1));
      result = __2_YAPAXI_Z(8 * (result + aP1)); /*0x724695*/
      v12 = result; /*0x72469a*/
      if ( result ) /*0x7246a1*/
      {
        Array::ForEach((int *)result, 8, v11, (int (*)(int))__0Iostream_init_QAE_XZ_6); /*0x7246ac*/
        for ( i = 0; i < v4[1]; *(unsigned int *)(v12 + 8 * i - 4) = *(unsigned int *)&v14[8 * i - 4] ) /*0x7246b8*/
        {
          v14 = (char *)*v4; /*0x7246ba*/
          ++i; /*0x7246bc*/
          *(unsigned int *)(v12 + 8 * i - 8) = *(unsigned int *)(*v4 + 8 * i - 8); /*0x7246c1*/
        }
        __3_YAXPAX_Z((void *)*v4); /*0x7246d7*/
        v15 = (int)(aP1 + v4[2]); /*0x7246e6*/
        *v4 = v12; /*0x7246e8*/
        v4[2] = v15; /*0x7246ea*/
        v4[4] = 0; /*0x7246ed*/
        goto LABEL_19; /*0x7246ed*/
      }
LABEL_20:
      LOBYTE(result) = 1; /*0x724713*/
      return result; /*0x724719*/
    }
    __3_YAXPAX_Z(v6); /*0x72471d*/
  }
LABEL_22:
  LOBYTE(result) = 0; /*0x724725*/
  return result; /*0x7245c4*/

}
} // namespace gamemd