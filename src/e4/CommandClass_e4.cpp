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

// 0x6D1200
namespace gamemd {
int CommandClass::BuildBar()
{

  int *v2; // esi
  unsigned int v3; // eax
  unsigned int *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  unsigned int *v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  unsigned int *v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  unsigned int *v22; // esi
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  unsigned int *v28; // ecx
  unsigned int v29; // eax
  unsigned int *v30; // ecx
  char *Entry; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  int v37; // [esp+8h] [ebp-1Ch] BYREF
  int v38; // [esp+Ch] [ebp-18h]
  int v39; // [esp+10h] [ebp-14h]
  int v40; // [esp+14h] [ebp-10h]
  int v41; // [esp+18h] [ebp-Ch]
  unsigned int v42;

  v2 = (int *)&g_abs_B0C1C0; /*0x6d1207*/
  do /*0x6d1224*/
  {
    (*(void (**)(int *))(*v2 + 32))(v2); /*0x6d1210*/
    (*(void (**)(void *, int *))(*(unsigned int *)this + 48))(this, v2); /*0x6d1218*/
    v2 += 24; /*0x6d121b*/
  }
  while ( (int)v2 < (int)&g_abs_B0CB20 ); /*0x6d1224*/
  (*(void (**)(void *, unsigned int *))(*(unsigned int *)this + 48))(this, g_abs_B0CCB0); /*0x6d122f*/
  v3 = g_abs_B0CB78[g_abs_B0CD24]; /*0x6d1238*/
  if ( v3 <= 0x18 ) /*0x6d1241*/
  {
    v4 = (unsigned int *)((char *)&g_abs_B0C1C0 + 96 * v3); /*0x6d124e*/
    if ( v4 ) /*0x6d1256*/
    {
      Struct::Zero25(&v37); /*0x6d125c*/
      v5 = v4[3]; /*0x6d1264*/
      v6 = v4[9]; /*0x6d1267*/
      v39 = v4[4]; /*0x6d126a*/
      v7 = v4[6]; /*0x6d126e*/
      v38 = v5; /*0x6d1271*/
      v8 = v4[5]; /*0x6d1275*/
      v41 = v7; /*0x6d1278*/
      v37 = v6; /*0x6d1283*/
      v42 = g_abs_8428DC; /*0x6d1287*/
      v40 = v8; /*0x6d128f*/
      HashTable::Remove((int *)g_abs_887368, v6); /*0x6d1293*/
      CommandClass::AddAction(g_abs_887368, (int)&v37); /*0x6d12a3*/
    }
  }
  v9 = g_abs_B0CB78[g_abs_B0CB3C]; /*0x6d12ad*/
  if ( v9 <= 0x18 ) /*0x6d12b6*/
  {
    v10 = (unsigned int *)((char *)&g_abs_B0C1C0 + 96 * v9); /*0x6d12c3*/
    if ( v10 ) /*0x6d12cb*/
    {
      Struct::Zero25(&v37); /*0x6d12d1*/
      v11 = v10[4]; /*0x6d12d9*/
      v12 = v10[9]; /*0x6d12dc*/
      v38 = v10[3]; /*0x6d12df*/
      v13 = v10[5]; /*0x6d12e3*/
      v39 = v11; /*0x6d12e6*/
      v14 = v10[6]; /*0x6d12ea*/
      v40 = v13; /*0x6d12ed*/
      v37 = v12; /*0x6d12f8*/
      v42 = g_abs_8428D0; /*0x6d12fc*/
      v41 = v14; /*0x6d1304*/
      HashTable::Remove((int *)g_abs_887368, v12); /*0x6d1308*/
      CommandClass::AddAction(g_abs_887368, (int)&v37); /*0x6d1318*/
    }
  }
  v15 = g_abs_B0CB78[g_abs_B0C1B8]; /*0x6d1323*/
  if ( v15 <= 0x18 ) /*0x6d132c*/
  {
    v16 = (unsigned int *)((char *)&g_abs_B0C1C0 + 96 * v15); /*0x6d1339*/
    if ( v16 ) /*0x6d1341*/
    {
      Struct::Zero25(&v37); /*0x6d1347*/
      v17 = v16[3]; /*0x6d134f*/
      v18 = v16[9]; /*0x6d1352*/
      v39 = v16[4]; /*0x6d1355*/
      v19 = v16[6]; /*0x6d1359*/
      v38 = v17; /*0x6d135c*/
      v20 = v16[5]; /*0x6d1360*/
      v41 = v19; /*0x6d1363*/
      v37 = v18; /*0x6d136e*/
      v42 = g_abs_8428C4; /*0x6d1372*/
      v40 = v20; /*0x6d137a*/
      HashTable::Remove((int *)g_abs_887368, v18); /*0x6d137e*/
      CommandClass::AddAction(g_abs_887368, (int)&v37); /*0x6d138e*/
    }
  }
  v21 = g_abs_B0CB78[g_abs_B0CB20]; /*0x6d1398*/
  if ( v21 <= 0x18 ) /*0x6d13a1*/
  {
    v22 = (unsigned int *)((char *)&g_abs_B0C1C0 + 96 * v21); /*0x6d13ae*/
    if ( v22 ) /*0x6d13b6*/
    {
      Struct::Zero25(&v37); /*0x6d13bc*/
      v23 = v22[4]; /*0x6d13c4*/
      v24 = v22[9]; /*0x6d13c7*/
      v38 = v22[3]; /*0x6d13ca*/
      v25 = v22[5]; /*0x6d13ce*/
      v39 = v23; /*0x6d13d1*/
      v26 = v22[6]; /*0x6d13d5*/
      v40 = v25; /*0x6d13d8*/
      v37 = v24; /*0x6d13e3*/
      v42 = g_abs_8428B8; /*0x6d13e7*/
      v41 = v26; /*0x6d13ef*/
      HashTable::Remove((int *)g_abs_887368, v24); /*0x6d13f3*/
      CommandClass::AddAction(g_abs_887368, (int)&v37); /*0x6d1403*/
    }
  }
  v27 = g_abs_B0CB78[g_abs_B0CB68]; /*0x6d1410*/
  if ( v27 > 0x18 ) /*0x6d1419*/
    v28 = 0; /*0x6d142e*/
  else
    v28 = (unsigned int *)((char *)&g_abs_B0C1C0 + 96 * v27); /*0x6d1426*/
  PushCommandClass::Execute(v28, (int)g_abs_8428AC); /*0x6d1435*/
  v29 = g_abs_B0CB78[g_abs_B0CC1C]; /*0x6d1440*/
  if ( v29 > 0x18 ) /*0x6d1449*/
    v30 = 0; /*0x6d145e*/
  else
    v30 = (unsigned int *)((char *)&g_abs_B0C1C0 + 96 * v29); /*0x6d1456*/
  PushCommandClass::Execute(v30, (int)g_abs_842898); /*0x6d1465*/
  Entry = GetFontClassEntry(g_abs_B0CB6C); /*0x6d1470*/
  PushCommandClass::Execute(Entry, (int)g_abs_84288C); /*0x6d147c*/
  v32 = GetFontClassEntry(g_abs_B0CC20); /*0x6d1487*/
  PushCommandClass::Execute(v32, (int)g_abs_842880); /*0x6d1493*/
  v33 = GetFontClassEntry(g_abs_B0CC28); /*0x6d149e*/
  PushCommandClass::Execute(v33, (int)g_abs_842874); /*0x6d14aa*/
  v34 = GetFontClassEntry(g_abs_B0CD28); /*0x6d14b5*/
  PushCommandClass::Execute(v34, (int)g_abs_842868); /*0x6d14c1*/
  v35 = GetFontClassEntry(g_abs_B0CB38); /*0x6d14cc*/
  PushCommandClass::Execute(v35, (int)g_abs_842858); /*0x6d14d8*/
  return PushCommandClass::Execute(g_abs_B0CCB0, (int)g_abs_842848); /*0x6d14ec*/

}
} // namespace gamemd
// 0x724580
namespace gamemd {
int CommandClass::AddAction(ToolTipManager * aP1)
{

  ToolTipManager *v2; // edi
  ObjectClass *v4; // esi
  size_t v5; // eax
  void * v7;
  unsigned int *v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  char *v14; // ebx
  AbstractClass *v15; // eax
  AbstractClass *v16; // edi
  int i; // eax
  int v18; // ecx
  char *v19; // ecx
  int v20; // eax

  v2 = aP1; /*0x724584*/
  v4 = (ObjectClass *)((char *)this + 588); /*0x72458c*/
  aP1 = *(ToolTipManager **)&aP1->IsVisible; /*0x724592*/
  if ( *((unsigned int *)this + 148) ) /*0x724596*/
  {
    if ( CommandClass::executeAction((unsigned int *)((char *)this + 588), (ObjectClass *)&aP1) ) /*0x7245a4*/
      return 0; /*0x7245ab*/
    v5 = CommandClass::BinarySearchAction((char **)v4, (ObjectClass *)&aP1); /*0x7245b8*/
    if ( v5 ) /*0x7245bf*/
    {
      v4->uniqueId = (void *)(v5);
      return 0; /*0x7245ca*/
    }
  }
  v7 = (void *)((int)(RA2_OPNEW(0x1Cu)));
  v8 = (unsigned int *)v7; /*0x7245d4*/
  if ( v7 ) /*0x7245db*/
  {
    *(unsigned int *)v7 = *(unsigned int *)&v2->IsVisible; /*0x7245e6*/
    *(unsigned int *)((unsigned int)(v7)+ 4) = v2->Position[0]; /*0x7245ee*/
    *(unsigned int *)((unsigned int)(v7)+ 8) = v2->Position[1]; /*0x7245f3*/
    *(unsigned int *)((unsigned int)(v7)+ 12) = v2->ToolTipText; /*0x7245f9*/
    *(unsigned int *)((unsigned int)(v7)+ 16) = v2->Duration; /*0x7245ff*/
    *(unsigned int *)((unsigned int)(v7)+ 20) = v2->DisplayTimer[0]; /*0x724605*/
    *(unsigned char *)((unsigned int)(v7)+ 24) = v2->DisplayTimer[1]; /*0x724611*/
    v9 = *((unsigned int *)this + 143); /*0x724614*/
    if ( *((unsigned int *)this + 145) < v9 /*0x724641*/
      || (*((unsigned char *)this + 577) || !v9)
      && (v10 = *((unsigned int *)this + 146), v10 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)this + 141) + 8))((char *)this + 564, v9 + v10, 0) )
    {
      v11 = *((unsigned int *)this + 145); /*0x72464c*/
      v12 = *((unsigned int *)this + 142); /*0x72464f*/
      *((unsigned int *)this + 145) = v11 + 1; /*0x724655*/
      *(unsigned int *)(v12 + 4 * v11) = v8; /*0x724658*/
      v13 = *(unsigned int *)&v4->__pad_0[8]; /*0x72465e*/
      if ( *(unsigned int *)&v4->__pad_0[4] + 1 <= v13 ) /*0x724664*/
      {
LABEL_19:
        *(unsigned int *)(*(unsigned int *)v4->__pad_0 + 8 * *(unsigned int *)&v4->__pad_0[4]) = *v8; /*0x7246f4*/
        *(unsigned int *)(*(unsigned int *)v4->__pad_0 + 8 * *(unsigned int *)&v4->__pad_0[4] + 4) = v8; /*0x724704*/
        v20 = *(unsigned int *)&v4->__pad_0[4] + 1; /*0x72470b*/
        v4->__pad_0[12] = 0; /*0x72470c*/
        *(unsigned int *)&v4->__pad_0[4] = v20; /*0x724710*/
        return 1; /*0x724710*/
      }
      if ( v13 ) /*0x72466c*/
      {
        aP1 = *(ToolTipManager **)&v4->__pad_0[8]; /*0x72467c*/
        if ( v13 < 0 ) /*0x724680*/
          return 1; /*0x724680*/
      }
      else
      {
        aP1 = (ToolTipManager *)10; /*0x72466e*/
      }
      v14 = (char *)(&aP1->IsVisible + v13);
      v15 = (AbstractClass *)RA2_OPNEW(8 * ((unsigned int)aP1 + v13)); /*0x724695*/
      v16 = v15; /*0x72469a*/
      if ( v15 ) /*0x7246a1*/
      {
        Array::ForEach((int)v15, 8, (int)v14, (int (*)(int))__0Iostream_init_QAE_XZ_6); /*0x7246ac*/
        for ( i = 0; i < *(unsigned int *)&v4->__pad_0[4]; *(unsigned int *)&v16->__pad_0[8 * i - 4] = *(unsigned int *)(v18 + 8 * i - 4) ) /*0x7246b8*/
        {
          v18 = *(unsigned int *)v4->__pad_0; /*0x7246ba*/
          ++i; /*0x7246bc*/
          *(unsigned int *)&v16->__pad_0[8 * i - 8] = *(unsigned int *)(*(unsigned int *)v4->__pad_0 + 8 * i - 8); /*0x7246c1*/
        }
        RA2_OPDEL(*(void **)v4->__pad_0); /*0x7246d7*/
        v19 = &aP1->IsVisible + *(unsigned int *)&v4->__pad_0[8]; /*0x7246e6*/
        *(unsigned int *)v4->__pad_0 = v16; /*0x7246e8*/
        *(unsigned int *)&v4->__pad_0[8] = v19; /*0x7246ea*/
        v4->uniqueId = 0; /*0x7246ed*/
        goto LABEL_19; /*0x7246ed*/
      }
      return 1; /*0x724719*/
    }
    RA2_OPDEL(v8); /*0x72471d*/
  }
  return 0; /*0x7245c4*/

}
} // namespace gamemd