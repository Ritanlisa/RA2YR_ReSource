// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"

// 0x6D1200
int CommandClass::BuildBar()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *Entry; // eax
  int v37; // [esp+8h] [ebp-1Ch] BYREF
  int v38; // [esp+Ch] [ebp-18h]
  int v39; // [esp+10h] [ebp-14h]
  int v40; // [esp+14h] [ebp-10h]
  int v41; // [esp+18h] [ebp-Ch]
  char *v42; // [esp+1Ch] [ebp-8h]
  int * v2 = (int *)&DataGlobal_B0C1C0; /*0x6d1207*/
  do /*0x6d1224*/
  {
    (*(void (__thiscall **)(int *))(*v2 + 32))(v2); /*0x6d1210*/
    (*(void (__thiscall **)(void *, int *))(this->q00C)(this, v2); /*0x6d1218*/
    v2 += 24; /*0x6d121b*/
  }
  while ( (int)v2 < (int)&DataGlobal_B0CB20 ); /*0x6d1224*/
  (*(void (__thiscall **)(void *, _DWORD *))(this->q00C)(this, DataGlobal_B0CCB0); /*0x6d122f*/
  unsigned int v3 = g_ObjectTrackingPool[DataGlobal_B0CD24]; /*0x6d1238*/
  if ( v3 <= 0x18 ) /*0x6d1241*/
  {
    _DWORD * v4 = (_DWORD *)((char *)&DataGlobal_B0C1C0 + 96 * v3); /*0x6d124e*/
    if ( v4 ) /*0x6d1256*/
    {
      Struct::Zero25(&v37); /*0x6d125c*/
      int v5 = v4[3]; /*0x6d1264*/
      int v6 = v4[9]; /*0x6d1267*/
      v39 = v4[4]; /*0x6d126a*/
      int v7 = v4[6]; /*0x6d126e*/
      v38 = v5; /*0x6d1271*/
      int v8 = v4[5]; /*0x6d1275*/
      v41 = v7; /*0x6d1278*/
      v37 = v6; /*0x6d1283*/
      v42 = DataGlobal_8428DC; /*0x6d1287*/
      v40 = v8; /*0x6d128f*/
      HashTable::Remove((int *)g_TacticalRender, v6); /*0x6d1293*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d12a3*/
    }
  }
  unsigned int v9 = g_ObjectTrackingPool[DataGlobal_B0CB3C]; /*0x6d12ad*/
  if ( v9 <= 0x18 ) /*0x6d12b6*/
  {
    _DWORD * v10 = (_DWORD *)((char *)&DataGlobal_B0C1C0 + 96 * v9); /*0x6d12c3*/
    if ( v10 ) /*0x6d12cb*/
    {
      Struct::Zero25(&v37); /*0x6d12d1*/
      int v11 = v10[4]; /*0x6d12d9*/
      int v12 = v10[9]; /*0x6d12dc*/
      v38 = v10[3]; /*0x6d12df*/
      int v13 = v10[5]; /*0x6d12e3*/
      v39 = v11; /*0x6d12e6*/
      int v14 = v10[6]; /*0x6d12ea*/
      v40 = v13; /*0x6d12ed*/
      v37 = v12; /*0x6d12f8*/
      v42 = DataGlobal_8428D0; /*0x6d12fc*/
      v41 = v14; /*0x6d1304*/
      HashTable::Remove((int *)g_TacticalRender, v12); /*0x6d1308*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d1318*/
    }
  }
  unsigned int v15 = g_ObjectTrackingPool[DataGlobal_B0C1B8]; /*0x6d1323*/
  if ( v15 <= 0x18 ) /*0x6d132c*/
  {
    _DWORD * v16 = (_DWORD *)((char *)&DataGlobal_B0C1C0 + 96 * v15); /*0x6d1339*/
    if ( v16 ) /*0x6d1341*/
    {
      Struct::Zero25(&v37); /*0x6d1347*/
      int v17 = v16[3]; /*0x6d134f*/
      int v18 = v16[9]; /*0x6d1352*/
      v39 = v16[4]; /*0x6d1355*/
      int v19 = v16[6]; /*0x6d1359*/
      v38 = v17; /*0x6d135c*/
      int v20 = v16[5]; /*0x6d1360*/
      v41 = v19; /*0x6d1363*/
      v37 = v18; /*0x6d136e*/
      v42 = DataGlobal_8428C4; /*0x6d1372*/
      v40 = v20; /*0x6d137a*/
      HashTable::Remove((int *)g_TacticalRender, v18); /*0x6d137e*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d138e*/
    }
  }
  unsigned int v21 = g_ObjectTrackingPool[DataGlobal_B0CB20]; /*0x6d1398*/
  if ( v21 <= 0x18 ) /*0x6d13a1*/
  {
    _DWORD * v22 = (_DWORD *)((char *)&DataGlobal_B0C1C0 + 96 * v21); /*0x6d13ae*/
    if ( v22 ) /*0x6d13b6*/
    {
      Struct::Zero25(&v37); /*0x6d13bc*/
      int v23 = v22[4]; /*0x6d13c4*/
      int v24 = v22[9]; /*0x6d13c7*/
      v38 = v22[3]; /*0x6d13ca*/
      int v25 = v22[5]; /*0x6d13ce*/
      v39 = v23; /*0x6d13d1*/
      int v26 = v22[6]; /*0x6d13d5*/
      v40 = v25; /*0x6d13d8*/
      v37 = v24; /*0x6d13e3*/
      v42 = DataGlobal_8428B8; /*0x6d13e7*/
      v41 = v26; /*0x6d13ef*/
      HashTable::Remove((int *)g_TacticalRender, v24); /*0x6d13f3*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d1403*/
    }
  }
  unsigned int v27 = g_ObjectTrackingPool[DataGlobal_B0CB68]; /*0x6d1410*/
  if ( v27 > 0x18 ) /*0x6d1419*/
    _DWORD * v28 = 0; /*0x6d142e*/
  else
    v28 = (_DWORD *)((char *)&DataGlobal_B0C1C0 + 96 * v27); /*0x6d1426*/
  PushCommandClass::Execute(v28, (int)DataGlobal_8428AC); /*0x6d1435*/
  unsigned int v29 = g_ObjectTrackingPool[DataGlobal_B0CC1C]; /*0x6d1440*/
  if ( v29 > 0x18 ) /*0x6d1449*/
    _DWORD * v30 = 0; /*0x6d145e*/
  else
    v30 = (_DWORD *)((char *)&DataGlobal_B0C1C0 + 96 * v29); /*0x6d1456*/
  PushCommandClass::Execute(v30, (int)DataGlobal_842898); /*0x6d1465*/
  Entry = GetFontClassEntry(DataGlobal_B0CB6C); /*0x6d1470*/
  PushCommandClass::Execute(Entry, (int)DataGlobal_84288C); /*0x6d147c*/
  char * v32 = GetFontClassEntry(DataGlobal_B0CC20); /*0x6d1487*/
  PushCommandClass::Execute(v32, (int)DataGlobal_842880); /*0x6d1493*/
  char * v33 = GetFontClassEntry(DataGlobal_B0CC28); /*0x6d149e*/
  PushCommandClass::Execute(v33, (int)DataGlobal_842874); /*0x6d14aa*/
  char * v34 = GetFontClassEntry(DataGlobal_B0CD28); /*0x6d14b5*/
  PushCommandClass::Execute(v34, (int)DataGlobal_842868); /*0x6d14c1*/
  char * v35 = GetFontClassEntry(DataGlobal_B0CB38); /*0x6d14cc*/
  PushCommandClass::Execute(v35, (int)DataGlobal_842858); /*0x6d14d8*/
  return PushCommandClass::Execute(DataGlobal_B0CCB0, (int)DataGlobal_842848); /*0x6d14ec*/
}
}

// 0x724580
int CommandClass::AddAction(ToolTipManager * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ToolTipManager *v2; // edi
  ObjectClass *v4; // esi
  size_t v5; // eax
  AbstractClass *v15; // eax
  AbstractClass *v16; // edi
  int i; // eax

  v2 = aP1; /*0x724584*/
  v4 = (ObjectClass *)(this + 588); /*0x72458c*/
  aP1 = *(ToolTipManager **)&aP1->IsVisible; /*0x724592*/
  if ( *(_DWORD *)(this + 592) ) /*0x724596*/
  {
    if ( CommandClass::executeAction((_DWORD *)(this + 588), (ObjectClass *)&aP1) ) /*0x7245a4*/
      return 0; /*0x7245ab*/
    v5 = CommandClass::BinarySearchAction((char **)v4, (ObjectClass *)&aP1); /*0x7245b8*/
    if ( v5 ) /*0x7245bf*/
    {
      v4->uniqueId = v5; /*0x7245c1*/
      return 0; /*0x7245ca*/
    }
  }
  int v7 = __2_YAPAXI_Z(0x1Cu); /*0x7245cf*/
  _DWORD * v8 = (_DWORD *)v7; /*0x7245d4*/
  if ( v7 ) /*0x7245db*/
  {
    *(_DWORD *)v7 = *(_DWORD *)&v2->IsVisible; /*0x7245e6*/
    *(_DWORD *)(v7 + 4) = v2->Position[0]; /*0x7245ee*/
    *(_DWORD *)(v7 + 8) = v2->Position[1]; /*0x7245f3*/
    *(_DWORD *)(v7 + 12) = v2->ToolTipText; /*0x7245f9*/
    *(_DWORD *)(v7 + 16) = v2->Duration; /*0x7245ff*/
    *(_DWORD *)(v7 + 20) = v2->DisplayTimer[0]; /*0x724605*/
    *(_BYTE *)(v7 + 24) = v2->DisplayTimer[1]; /*0x724611*/
    int v9 = *(_DWORD *)(this + 572); /*0x724614*/
    if ( *(_DWORD *)(this + 580) < v9 /*0x724641*/
      || (*(_BYTE *)(this + 577) || !v9)
  int v10; // ecx
      && (v10 = *(_DWORD *)(this + 584), v10 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 564) + 8))(this + 564, v9 + v10, 0) )
    {
      int v11 = *(_DWORD *)(this + 580); /*0x72464c*/
      int v12 = *(_DWORD *)(this + 568); /*0x72464f*/
      *(_DWORD *)(this + 580) = v11 + 1; /*0x724655*/
      *(_DWORD *)(v12 + 4 * v11) = v8; /*0x724658*/
      int v13 = *(_DWORD *)&v4->__pad_0[8]; /*0x72465e*/
      if ( *(_DWORD *)&v4->__pad_0[4] + 1 <= v13 ) /*0x724664*/
      {
LABEL_19:
        *(_DWORD *)(*(_DWORD *)v4->__pad_0 + 8 * *(_DWORD *)&v4->__pad_0[4]) = *v8; /*0x7246f4*/
        *(_DWORD *)(*(_DWORD *)v4->__pad_0 + 8 * *(_DWORD *)&v4->__pad_0[4] + 4) = v8; /*0x724704*/
        int v20 = *(_DWORD *)&v4->__pad_0[4] + 1; /*0x72470b*/
        v4->__pad_0[12] = 0; /*0x72470c*/
        *(_DWORD *)&v4->__pad_0[4] = v20; /*0x724710*/
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
      char * v14 = &aP1->IsVisible + v13; /*0x72468a*/
      v15 = (AbstractClass *)__2_YAPAXI_Z(8 * ((_DWORD)aP1 + v13)); /*0x724695*/
      v16 = v15; /*0x72469a*/
      if ( v15 ) /*0x7246a1*/
      {
        Array::ForEach((int)v15, 8, (int)v14, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_6); /*0x7246ac*/
  int v18; // ecx
        for ( i = 0; i < *(_DWORD *)&v4->__pad_0[4]; *(_DWORD *)&v16->__pad_0[8 * i - 4] = *(_DWORD *)(v18 + 8 * i - 4) ) /*0x7246b8*/
        {
          v18 = *(_DWORD *)v4->__pad_0; /*0x7246ba*/
          ++i; /*0x7246bc*/
          *(_DWORD *)&v16->__pad_0[8 * i - 8] = *(_DWORD *)(*(_DWORD *)v4->__pad_0 + 8 * i - 8); /*0x7246c1*/
        }
        __3_YAXPAX_Z(*(void **)v4->__pad_0); /*0x7246d7*/
        char * v19 = &aP1->IsVisible + *(_DWORD *)&v4->__pad_0[8]; /*0x7246e6*/
        *(_DWORD *)v4->__pad_0 = v16; /*0x7246e8*/
        *(_DWORD *)&v4->__pad_0[8] = v19; /*0x7246ea*/
        v4->uniqueId = 0; /*0x7246ed*/
        goto LABEL_19; /*0x7246ed*/
      }
      return 1; /*0x724719*/
    }
    __3_YAXPAX_Z(v8); /*0x72471d*/
  }
  return 0; /*0x7245c4*/
}
}
