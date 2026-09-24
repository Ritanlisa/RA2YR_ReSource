// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"

// 0x6D1200
int CommandClass::BuildBar()
{
  int *v2; // esi
  unsigned int v3; // eax
  _DWORD *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  _DWORD *v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  _DWORD *v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  _DWORD *v22; // esi
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  _DWORD *v28; // ecx
  unsigned int v29; // eax
  _DWORD *v30; // ecx
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
  char *v42; // [esp+1Ch] [ebp-8h]

  v2 = (int *)&unk_B0C1C0; /*0x6d1207*/
  do /*0x6d1224*/
  {
    (*(void (__thiscall **)(int *))(*v2 + 32))(v2); /*0x6d1210*/
    (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 48))(this, v2); /*0x6d1218*/
    v2 += 24; /*0x6d121b*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d1224*/
  (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 48))(this, dword_B0CCB0); /*0x6d122f*/
  v3 = g_ObjectTrackingPool[dword_B0CD24]; /*0x6d1238*/
  if ( v3 <= 0x18 ) /*0x6d1241*/
  {
    v4 = (_DWORD *)((char *)&unk_B0C1C0 + 96 * v3); /*0x6d124e*/
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
      v42 = aTipAttackmove; /*0x6d1287*/
      v40 = v8; /*0x6d128f*/
      HashTable::Remove((int *)g_TacticalRender, v6); /*0x6d1293*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d12a3*/
    }
  }
  v9 = g_ObjectTrackingPool[dword_B0CB3C]; /*0x6d12ad*/
  if ( v9 <= 0x18 ) /*0x6d12b6*/
  {
    v10 = (_DWORD *)((char *)&unk_B0C1C0 + 96 * v9); /*0x6d12c3*/
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
      v42 = aTipBeacon; /*0x6d12fc*/
      v41 = v14; /*0x6d1304*/
      HashTable::Remove((int *)g_TacticalRender, v12); /*0x6d1308*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d1318*/
    }
  }
  v15 = g_ObjectTrackingPool[dword_B0C1B8]; /*0x6d1323*/
  if ( v15 <= 0x18 ) /*0x6d132c*/
  {
    v16 = (_DWORD *)((char *)&unk_B0C1C0 + 96 * v15); /*0x6d1339*/
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
      v42 = aTipCheer; /*0x6d1372*/
      v40 = v20; /*0x6d137a*/
      HashTable::Remove((int *)g_TacticalRender, v18); /*0x6d137e*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d138e*/
    }
  }
  v21 = g_ObjectTrackingPool[dword_B0CB20]; /*0x6d1398*/
  if ( v21 <= 0x18 ) /*0x6d13a1*/
  {
    v22 = (_DWORD *)((char *)&unk_B0C1C0 + 96 * v21); /*0x6d13ae*/
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
      v42 = aTipDeploy; /*0x6d13e7*/
      v41 = v26; /*0x6d13ef*/
      HashTable::Remove((int *)g_TacticalRender, v24); /*0x6d13f3*/
      CommandClass::AddAction(g_TacticalRender, (int)&v37); /*0x6d1403*/
    }
  }
  v27 = g_ObjectTrackingPool[dword_B0CB68]; /*0x6d1410*/
  if ( v27 > 0x18 ) /*0x6d1419*/
    v28 = 0; /*0x6d142e*/
  else
    v28 = (_DWORD *)((char *)&unk_B0C1C0 + 96 * v27); /*0x6d1426*/
  PushCommandClass::Execute(v28, (int)aTipGuard); /*0x6d1435*/
  v29 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d1440*/
  if ( v29 > 0x18 ) /*0x6d1449*/
    v30 = 0; /*0x6d145e*/
  else
    v30 = (_DWORD *)((char *)&unk_B0C1C0 + 96 * v29); /*0x6d1456*/
  PushCommandClass::Execute(v30, (int)aTipPlanningmod); /*0x6d1465*/
  Entry = GetFontClassEntry(dword_B0CB6C); /*0x6d1470*/
  PushCommandClass::Execute(Entry, (int)aTipStop); /*0x6d147c*/
  v32 = GetFontClassEntry(dword_B0CC20); /*0x6d1487*/
  PushCommandClass::Execute(v32, (int)aTipTeam01); /*0x6d1493*/
  v33 = GetFontClassEntry(dword_B0CC28); /*0x6d149e*/
  PushCommandClass::Execute(v33, (int)aTipTeam02); /*0x6d14aa*/
  v34 = GetFontClassEntry(dword_B0CD28); /*0x6d14b5*/
  PushCommandClass::Execute(v34, (int)aTipTeam03); /*0x6d14c1*/
  v35 = GetFontClassEntry(dword_B0CB38); /*0x6d14cc*/
  PushCommandClass::Execute(v35, (int)aTipTypeselect); /*0x6d14d8*/
  return PushCommandClass::Execute(dword_B0CCB0, (int)aTipThumbopen); /*0x6d14ec*/
}
// 0x724580
int CommandClass::AddAction(ToolTipManager * aP1)
{
  int v2; // edi
  int *v4; // esi
  int v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ebx
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  int i; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax

  v2 = aP1; /*0x724584*/
  v4 = (int *)(this + 588); /*0x72458c*/
  aP1 = *(_DWORD *)aP1; /*0x724592*/
  if ( *(_DWORD *)(this + 592) ) /*0x724596*/
  {
    if ( (unsigned __int8)CommandClass::executeAction(&aP1) ) /*0x7245a4*/
      return 0; /*0x7245ab*/
    v5 = CommandClass::BinarySearchAction(&aP1); /*0x7245b8*/
    if ( v5 ) /*0x7245bf*/
    {
      v4[4] = v5; /*0x7245c1*/
      return 0; /*0x7245ca*/
    }
  }
  v7 = __2_YAPAXI_Z(0x1Cu); /*0x7245cf*/
  v8 = v7; /*0x7245d4*/
  if ( v7 ) /*0x7245db*/
  {
    *v7 = *(_DWORD *)v2; /*0x7245e6*/
    v7[1] = *(_DWORD *)(v2 + 4); /*0x7245ee*/
    v7[2] = *(_DWORD *)(v2 + 8); /*0x7245f3*/
    v7[3] = *(_DWORD *)(v2 + 12); /*0x7245f9*/
    v7[4] = *(_DWORD *)(v2 + 16); /*0x7245ff*/
    v7[5] = *(_DWORD *)(v2 + 20); /*0x724605*/
    *((_BYTE *)v7 + 24) = *(_BYTE *)(v2 + 24); /*0x724611*/
    v9 = *(_DWORD *)(this + 572); /*0x724614*/
    if ( *(_DWORD *)(this + 580) < v9 /*0x724641*/
      || (*(_BYTE *)(this + 577) || !v9)
      && (v10 = *(_DWORD *)(this + 584), v10 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 564) + 8))(this + 564, v9 + v10, 0) )
    {
      v11 = *(_DWORD *)(this + 580); /*0x72464c*/
      v12 = *(_DWORD *)(this + 568); /*0x72464f*/
      *(_DWORD *)(this + 580) = v11 + 1; /*0x724655*/
      *(_DWORD *)(v12 + 4 * v11) = v8; /*0x724658*/
      v13 = v4[2]; /*0x72465e*/
      if ( v4[1] + 1 <= v13 ) /*0x724664*/
      {
  LABEL_19:
        *(_DWORD *)(*v4 + 8 * v4[1]) = *v8; /*0x7246f4*/
        *(_DWORD *)(*v4 + 8 * v4[1] + 4) = v8; /*0x724704*/
        v20 = v4[1] + 1; /*0x72470b*/
        *((_BYTE *)v4 + 12) = 0; /*0x72470c*/
        v4[1] = v20; /*0x724710*/
        return 1; /*0x724710*/
      }
      if ( v13 ) /*0x72466c*/
      {
        aP1 = v4[2]; /*0x72467c*/
        if ( v13 < 0 ) /*0x724680*/
          return 1; /*0x724680*/
      }
      else
      {
        aP1 = 10; /*0x72466e*/
      }
      v14 = v13 + aP1; /*0x72468a*/
      v15 = __2_YAPAXI_Z(8 * (v13 + aP1)); /*0x724695*/
      v16 = v15; /*0x72469a*/
      if ( v15 ) /*0x7246a1*/
      {
        Array::ForEach((int)v15, 8, v14, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_6); /*0x7246ac*/
        for ( i = 0; i < v4[1]; v16[2 * i - 1] = *(_DWORD *)(v18 + 8 * i - 4) ) /*0x7246b8*/
        {
          v18 = *v4; /*0x7246ba*/
          ++i; /*0x7246bc*/
          v16[2 * i - 2] = *(_DWORD *)(*v4 + 8 * i - 8); /*0x7246c1*/
        }
        __3_YAXPAX_Z((void *)*v4); /*0x7246d7*/
        v19 = aP1 + v4[2]; /*0x7246e6*/
        *v4 = (int)v16; /*0x7246e8*/
        v4[2] = v19; /*0x7246ea*/
        v4[4] = 0; /*0x7246ed*/
        goto LABEL_19; /*0x7246ed*/
      }
      return 1; /*0x724719*/
    }
    __3_YAXPAX_Z(v8); /*0x72471d*/
  }
  return 0; /*0x7245c4*/
}