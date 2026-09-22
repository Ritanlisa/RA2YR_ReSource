// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x4391C0
namespace gamemd {
int SaveGame::LoadArrayData(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4391C0(int *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int i; // ebx
  int v8; // [esp+40h] [ebp-4h] BYREF

  v3 = *a2; /*0x4391cc*/
  v8 = this->q004; /*0x4391d9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v8, 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = this->q00A; /*0x43921b*/
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 16))(a2, &v8, 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->q007 + 4 * i, 4, 0); /*0x43923e*/
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->q001 + 4 * v5, 4, 0); /*0x4391fc*/
        if ( result < 0 ) /*0x439201*/
          break; /*0x439201*/
        if ( ++v5 >= v8 ) /*0x43920a*/
          goto LABEL_5; /*0x43920a*/
      }
    }
  }
  return result; /*0x43924e*/
}
}
} // namespace gamemd

// 0x54E750
namespace gamemd {
int SaveGame::WriteDataArray(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_54E750(_DWORD *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // edi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x54e75c*/
  v6 = this->q007; /*0x54e769*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)(this->q004 + 4 * i), 8, 0); /*0x54e78c*/
      if ( result < 0 ) /*0x54e791*/
        break; /*0x54e791*/
    }
  }
  return result; /*0x54e79c*/
}
}
} // namespace gamemd

// 0x6607D0
namespace gamemd {
bool SaveGame::SaveTriggerEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_6607D0(int *this)
{
  int v2; // ecx
  int v4; // edi
  int v5; // [esp+20h] [ebp-4h] BYREF

  v2 = *this; /*0x6607e0*/
  v5 = g_TriggerEventState; /*0x6607e6*/
  if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(this, &v5, 4, 0) < 0 ) /*0x6607ef*/
    return 0; /*0x6607f6*/
  v4 = 0; /*0x6607fb*/
  if ( v5 > 0 ) /*0x6607ff*/
  {
    while ( (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))( /*0x660817*/
              this,
              *((_DWORD *)g_TriggerPool + v4),
              64,
              0) >= 0 )
    {
      if ( ++v4 >= v5 ) /*0x660820*/
        return (*(int (__stdcall **)(int *, __int16 *, int, _DWORD))(*this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x660820*/
    }
    return 0; /*0x660817*/
  }
  return (*(int (__stdcall **)(int *, __int16 *, int, _DWORD))(*this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x6607f1*/
}
}
} // namespace gamemd

// 0x67D300
namespace gamemd {
char SaveGame::Start()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SaveGame::Start(LPSTREAM this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  char result; // al
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int i; // ebx
  int v49; // eax
  int j; // ebx
  int v51; // eax
  int v52; // ebx
  int v53; // eax
  int v54; // ebx
  int v55; // ecx
  int v56; // ecx
  int v57; // ebx
  int v58; // edx
  LPPERSISTSTREAM pPStm; // [esp+35Ch] [ebp-8h] BYREF
  LPPERSISTSTREAM v60; // [esp+360h] [ebp-4h] BYREF

  ScenarioClass::SaveLoad_Prefix((DWORD *)g_ScenarioClass_Instance, (int *)this->__pad_0);
  SaveGame::SaveBlock68(&g_CellDirectionOffsets[16976], (int)this);
  RulesClass::SaveLoad_Prefix(*(_DWORD **)&DataGlobal_87F8E4[30972], (int *)this->__pad_0);
  v2 = *(_DWORD *)this->__pad_0;
  v60 = *(LPPERSISTSTREAM *)&g_CellDirectionOffsets[84688];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v2 + 16))(this, &v60, 4, 0) < 0 )
    return 0;
  v3 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      pPStm = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_CellDirectionOffsets[84676]
                                                                       + 4 * v3))(
             *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * v3),
             &IID_IPersistStream,
             &pPStm) < 0
        || OleSaveToStream(pPStm, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm) < 0 )
      {
        return 0;
      }
    }
    while ( ++v3 < (int)v60 );
  }
  MouseClass::DrawCursor((int *)&DataGlobal_87F7E8, this);
  v4 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_CellDirectionOffsets[84664];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v4 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v5 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_CellDirectionOffsets[84652]
                                                                       + 4 * v5))(
             *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84652] + 4 * v5),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v5 < (int)pPStm );
  }
  if ( SaveGame::LoadMainGameState((int *)this->__pad_0) < 0 )
    return 0;
  LayerClass::Save(&g_GameConfigManager, (RadarClass *)this);
  if ( OleSaveToStream(*(LPPERSISTSTREAM *)&DataGlobal_87F8E4[31296], this) < 0 )
    return 0;
  v7 = *(_DWORD *)this->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_SuperWeaponTypeArray;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v7 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v8 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***((int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))g_SuperWeaponTypeCount + v8))(
             *((_DWORD *)g_SuperWeaponTypeCount + v8),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v8 < (int)pPStm );
  }
  v9 = *(_DWORD *)this->__pad_0;
  pPStm = (LPPERSISTSTREAM)HouseClass_Count;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v9 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v10 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&HouseClass_Array->__pad_0[4 * v10])(
             *(_DWORD *)&HouseClass_Array->__pad_0[4 * v10],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v10 < (int)pPStm );
  }
  v11 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_CellDirectionOffsets[84616];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v11 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v12 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_CellDirectionOffsets[84604]
                                                                       + 4 * v12))(
             *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84604] + 4 * v12),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v12 < (int)pPStm );
  }
  v13 = *(_DWORD *)this->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_CrateCount;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v13 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v14 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&g_UnitTypeCount2->__pad_0[4 * v14])(
             *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * v14],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v14 < (int)pPStm );
  }
  v15 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_NetworkPlayerBuffer[3356];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v15 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v16 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_NetworkPlayerBuffer[3344]
                                                                       + 4 * v16))(
             *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[3344] + 4 * v16),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v16 < (int)pPStm );
  }
  v17 = *(_DWORD *)this->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_BuildingClass_Count;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v17 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v18 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&g_InfantryClassLimit->__pad_0[4 * v18])(
             *(_DWORD *)&g_InfantryClassLimit->__pad_0[4 * v18],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v18 < (int)pPStm );
  }
  v19 = *(_DWORD *)this->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_TriggerClassCount;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v19 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v20 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***((int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))g_TriggerTypeCount + v20))(
             *((_DWORD *)g_TriggerTypeCount + v20),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v20 < (int)pPStm );
  }
  v21 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_NetworkPlayerBuffer[5396];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v21 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v22 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_NetworkPlayerBuffer[5384]
                                                                       + 4 * v22))(
             *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5384] + 4 * v22),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v22 < (int)pPStm );
  }
  v23 = *(_DWORD *)this->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_TypeClass_FindCache;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v23 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v24 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&g_AircraftTypeCount->__pad_0[4 * v24])(
             *(_DWORD *)&g_AircraftTypeCount->__pad_0[4 * v24],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v24 < (int)pPStm );
  }
  v25 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_NetworkPlayerBuffer[3428];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v25 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v26 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_NetworkPlayerBuffer[3416]
                                                                       + 4 * v26))(
             *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[3416] + 4 * v26),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v26 < (int)pPStm );
  }
  v27 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_NetworkPlayerBuffer[4988];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v27 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v28 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_NetworkPlayerBuffer[4976]
                                                                       + 4 * v28))(
             *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[4976] + 4 * v28),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v28 < (int)pPStm );
  }
  v29 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_NetworkPlayerBuffer[4772];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v29 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v30 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_NetworkPlayerBuffer[4760]
                                                                       + 4 * v30))(
             *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[4760] + 4 * v30),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v30 < (int)pPStm );
  }
  v31 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_NetworkPlayerBuffer[5748];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v31 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v32 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_NetworkPlayerBuffer[5736]
                                                                       + 4 * v32))(
             *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5736] + 4 * v32),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v32 < (int)pPStm );
  }
  v33 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_CellDirectionOffsets[84584];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v33 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v34 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_CellDirectionOffsets[84572]
                                                                       + 4 * v34))(
             *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84572] + 4 * v34),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v34 < (int)pPStm );
  }
  v35 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_CellDirectionOffsets[84808];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v35 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v36 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_CellDirectionOffsets[84796]
                                                                       + 4 * v36))(
             *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84796] + 4 * v36),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v36 < (int)pPStm );
  }
  v37 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&DataGlobal_87F8E4[31196];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v37 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v38 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&DataGlobal_87F8E4[31184]
                                                                       + 4 * v38))(
             *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[31184] + 4 * v38),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v38 < (int)pPStm );
  }
  v39 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_OverlayTypeConfig[28568];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v39 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v40 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_OverlayTypeConfig[28556]
                                                                       + 4 * v40))(
             *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[28556] + 4 * v40),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v40 < (int)pPStm );
  }
  v41 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_OverlayTypeConfig[28472];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v41 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v42 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_OverlayTypeConfig[28460]
                                                                       + 4 * v42))(
             *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[28460] + 4 * v42),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v42 < (int)pPStm );
  }
  v43 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_CellDirectionOffsets[84728];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v43 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v44 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_CellDirectionOffsets[84716]
                                                                       + 4 * v44))(
             *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84716] + 4 * v44),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v44 < (int)pPStm );
  }
  v45 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_NetworkPlayerBuffer[5308];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v45 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v46 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)g_NetworkPlayerBuffer[5296] + 4 * v46))(
             *(_DWORD *)(*(_DWORD *)g_NetworkPlayerBuffer[5296] + 4 * v46),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v46 < (int)pPStm );
  }
  v47 = *(_DWORD *)this->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_AnimTypeInitQueue;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v47 + 16))(this, &pPStm, 4, 0) >= 0 )
  {
    for ( i = 0; i < (int)pPStm; ++i )
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&DataGlobal_A8B204->__pad_0[4 * i])(
             *(_DWORD *)&DataGlobal_A8B204->__pad_0[4 * i],
             &IID_IPersistStream,
             &v60) < 0 )
        break;
      if ( OleSaveToStream(v60, this) < 0 )
        break;
      if ( (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
        break;
    }
  }
  v49 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_OverlayTypeConfig[28272];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v49 + 16))(this, &pPStm, 4, 0) >= 0 )
  {
    for ( j = 0; j < (int)pPStm; ++j )
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_OverlayTypeConfig[28260]
                                                                       + 4 * j))(
             *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[28260] + 4 * j),
             &IID_IPersistStream,
             &v60) < 0 )
        break;
      if ( OleSaveToStream(v60, this) < 0 )
        break;
      if ( (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
        break;
    }
  }
  v51 = *(_DWORD *)this->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_OverlayTypeConfig[31160];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v51 + 16))(this, &pPStm, 4, 0) < 0 )
    return 0;
  v52 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&g_OverlayTypeConfig[31148]
                                                                       + 4 * v52))(
             *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[31148] + 4 * v52),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, this) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v52 < (int)pPStm );
  }
  if ( SaveGame_Start(this, (int)&DataGlobal_A83E30) < 0 )
    return 0;
  if ( SaveGame_Start_67FE70(this, (int)&g_NetworkPlayerBuffer[5356]) < 0 )
    return 0;
  if ( SaveGame_Start_67FEF0(this, (int)&DataGlobal_87F8E4[31396]) < 0 )
    return 0;
  if ( SaveGame_Start_67FF70(this, (int)&DataGlobal_87F8E4[31708]) < 0 )
    return 0;
  if ( SaveGame_Start_67FFF0(this, (int)&DataGlobal_87F8E4[31876]) < 0 )
    return 0;
  if ( SaveGame_Start_680070(this, (int)&DataGlobal_A83D98) < 0 )
    return 0;
  if ( SaveGame_Start_6800F0(this, (int)&DataGlobal_A83DC8) < 0 )
    return 0;
  if ( SaveGame_Start_680170(this, (int)&DataGlobal_A83D68) < 0 )
    return 0;
  if ( SaveGame_Start_6801F0(this, (int)&dword_A80208) < 0 )
    return 0;
  if ( SaveGame_Start_680270(this, (int)&BulletTypeClass_Array) < 0 )
    return 0;
  if ( SaveGame_Start_6802F0(this, (int)&g_NetworkPlayerBuffer[5892]) < 0 )
    return 0;
  if ( SaveGame_Start_680370(this, (int)&dword_B72608) < 0 )
    return 0;
  if ( SaveGame_Start_6803F0(this, (int)&g_NetworkPlayerBuffer[5596]) < 0 )
    return 0;
  if ( SaveGame_Start_680470(this, (int)&DataGlobal_A83D80) < 0 )
    return 0;
  if ( SaveGame_Start_6804F0(this, (int)&dword_ABCA10) < 0 )
    return 0;
  if ( SaveGame_Start_680570(this, (int)&g_CellDirectionOffsets[84736]) < 0 )
    return 0;
  if ( SaveGame_Start_6805F0(this, (int)&g_CellDirectionOffsets[84624]) < 0 )
    return 0;
  if ( SaveGame_Start_680670(this, (int)&g_OverlayTypeConfig[31984]) < 0 )
    return 0;
  if ( SaveGame_Start_6806F0(this, (int)&g_CellDirectionOffsets[16864]) < 0 )
    return 0;
  if ( SaveGame_Start_680770(this, (int)&g_NetworkPlayerBuffer[3316]) < 0 )
    return 0;
  if ( SaveGame_Start_6807F0(this, (int)&dword_A83CB8) < 0 )
    return 0;
  v53 = *(_DWORD *)this->__pad_0;
  v60 = (LPPERSISTSTREAM)DataGlobal_A83D60;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v53 + 16))(this, &v60, 4, 0) < 0 )
    return 0;
  v54 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      v55 = *(_DWORD *)this->__pad_0;
      pPStm = *(LPPERSISTSTREAM *)&DataGlobal_A83D54->__pad_0[4 * v54];
      if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v55 + 16))(this, &pPStm, 4, 0) < 0 )
        return 0;
    }
    while ( ++v54 < (int)v60 );
  }
  v56 = *(_DWORD *)this->__pad_0;
  v60 = *(LPPERSISTSTREAM *)&g_CellDirectionOffsets[84832];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v56 + 16))(this, &v60, 4, 0) < 0 )
    return 0;
  v57 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      v58 = *(_DWORD *)this->__pad_0;
      pPStm = *(LPPERSISTSTREAM *)(*(_DWORD *)&g_CellDirectionOffsets[84820] + 4 * v57);
      if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v58 + 16))(this, &pPStm, 4, 0) < 0 )
        return 0;
    }
    while ( ++v57 < (int)v60 );
  }
  if ( SaveGame_Start_680870(this, (int)&g_NetworkPlayerBuffer[3292]) < 0 )
    return 0;
  if ( SaveGame_Start_6808F0(this, (int)&g_NetworkPlayerBuffer[4940]) < 0 )
    return 0;
  if ( SaveGame_Start_680970(this, (int)&g_CellDirectionOffsets[83584]) < 0 )
    return 0;
  if ( SaveGame_Start_6809F0(this, (int)&DataGlobal_87F8E4[43020]) < 0 )
    return 0;
  if ( SaveGame_Start_680A70(this, (int)&g_NetworkPlayerBuffer[5628]) < 0 )
    return 0;
  result = SaveGame::LoadVeinholeData((int *)this->__pad_0);
  if ( result )
  {
    result = SaveGame::SaveTriggerEvents((int *)this->__pad_0);
    if ( result )
    {
      if ( SaveGame_Start_680AF0(this, (int)&dword_89E0F0) >= 0 )
      {
        if ( SaveGame_Start_680B70(this, (int)&g_CellDirectionOffsets[2936]) >= 0 )
        {
          if ( SaveGame_Start_680BF0(this, (int)(&g_MatrixTransformState + 5824)) >= 0 )
          {
            if ( SaveGame_Start_680C70(this, (int)&g_OverlayTypeConfig[29800]) >= 0 )
            {
              if ( SaveGame_Start_680CF0(this, (int)&DataGlobal_87F8E4[42708]) >= 0 )
              {
                if ( SaveGame_Start_680D70(this, (int)&g_OverlayTypeConfig[16520]) >= 0 )
                {
                  if ( SaveGame_Start_680DF0(this, (int)&g_OverlayTypeConfig[15864]) >= 0 )
                  {
                    if ( SaveGame::SaveIteratedData(&DataGlobal_87F8E4[32676], (int)this) >= 0 )
                    {
                      if ( SaveGame::WriteDataArray(&g_MissionQueueFrame, (int *)this->__pad_0) >= 0 )
                      {
                        if ( SaveGame::LoadArrayData(&DataGlobal_87F5D8, (int *)this->__pad_0) >= 0 )
                        {
                          if ( SaveGame_Start_680E70(this, (int)&dword_89C668) >= 0 )
                          {
                            if ( SaveGame_Start_680EF0(this, (int)&RadSiteClass_Array) >= 0 )
                            {
                              if ( g_GameMode_Current != (CellStruct *)5 )
                                return SaveGame::SaveAudioQueueItems((int *)this->__pad_0) >= 0
                                    && SaveGame::WriteMagicHeader((int *)this->__pad_0) >= 0
                                    && SaveGame::VtableDispatch(&g_BuildingTypeClass_Count, (int)this) >= 0;
                              Debug::Log();
                              if ( SaveGame::SaveAudioData(&g_ScenarioFlags, (int)this) )
                              {
                                return SaveGame::SaveAudioQueueItems((int *)this->__pad_0) >= 0
                                    && SaveGame::WriteMagicHeader((int *)this->__pad_0) >= 0
                                    && SaveGame::VtableDispatch(&g_BuildingTypeClass_Count, (int)this) >= 0;
                              }
                              else
                              {
                                Debug::Log();
                                return 0;
                              }
                            }
                            else
                            {
                              return 0;
                            }
                          }
                          else
                          {
                            return 0;
                          }
                        }
                        else
                        {
                          return 0;
                        }
                      }
                      else
                      {
                        return 0;
                      }
                    }
                    else
                    {
                      return 0;
                    }
                  }
                  else
                  {
                    return 0;
                  }
                }
                else
                {
                  return 0;
                }
              }
              else
              {
                return 0;
              }
            }
            else
            {
              return 0;
            }
          }
          else
          {
            return 0;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
}
} // namespace gamemd

// 0x67F7E0
namespace gamemd {
int SaveGame::LoadMainGameState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_67F7E0(int *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  wchar_t *v10; // [esp+A0h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &DataGlobal_A8ED78, 4, 0); /*0x67f7f1*/
  if ( result >= 0 )
  {
    result = (*(int (__stdcall **)(int *, #375 **, int, _DWORD))(*this + 16))(this, &HouseClass_Player, 4, 0); /*0x67f808*/
    if ( result >= 0 )
    {
      result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(*this + 16))(this, &g_CurrentFrame, 4, 0); /*0x67f81f*/
      if ( result >= 0 )
      {
        v3 = *this; /*0x67f82f*/
        v10 = g_SelectionManager; /*0x67f83b*/
        result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v3 + 16))(this, &v10, 4, 0); /*0x67f83f*/
        if ( result >= 0 )
        {
          v4 = 0; /*0x67f84e*/
          if ( (int)v10 <= 0 )
          {
LABEL_8:
            result = (*(int (__stdcall **)(int *, float *, int, _DWORD))(*this + 16))(this, DataGlobal_89EA40, 432, 0); /*0x67f879*/
            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream(this); /*0x67f895*/
              v5 = *this; /*0x67f8a0*/
              v10 = (wchar_t *)g_ScenarioUpdateState; /*0x67f8ac*/
              result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v5 + 16))(this, &v10, 4, 0); /*0x67f8b0*/
              if ( result >= 0 )
              {
                v6 = 0; /*0x67f8bf*/
                if ( (int)v10 <= 0 )
                {
LABEL_13:
                  v7 = *this; /*0x67f8ea*/
                  v10 = (wchar_t *)dword_8B41B8; /*0x67f8fc*/
                  result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v7 + 16))(this, &v10, 4, 0); /*0x67f900*/
                  if ( result >= 0 )
                  {
                    v8 = 0; /*0x67f90f*/
                    if ( (int)v10 <= 0 )
                    {
LABEL_17:
                      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f93a*/
                                 this,
                                 &dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f959*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(int *, double *, int, _DWORD))(*this + 16))( /*0x67f96f*/
                                     this,
                                     DataGlobal_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f982*/
                                       this,
                                       DataGlobal_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(int *, void *, int, _DWORD))(*this + 16))( /*0x67f998*/
                                         this,
                                         &DataGlobal_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f9ab*/
                                       this,
                                       &DataGlobal_B07784,
                                       4,
                                       0);
                                return v9 >= 0 ? 0 : v9;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 ) /*0x67f926*/
                      {
                        result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f926*/
                                   this,
                                   (char *)unk_8B41AC + 4 * v8,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67f92b*/
                          break; /*0x67f92b*/
                        if ( ++v8 >= (int)v10 ) /*0x67f938*/
                          goto LABEL_17; /*0x67f938*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67f8d6*/
                  {
                    result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f8d6*/
                               this,
                               (char *)DataGlobal_8B40CC + 4 * v6,
                               4,
                               0);
                    if ( result < 0 ) /*0x67f8db*/
                      break; /*0x67f8db*/
                    if ( ++v6 >= (int)v10 ) /*0x67f8e8*/
                      goto LABEL_13; /*0x67f8e8*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x67f865*/
            {
              result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f865*/
                         this,
                         (char *)g_ObjectClass_CurrentCount + 4 * v4,
                         4,
                         0);
              if ( result < 0 ) /*0x67f86a*/
                break; /*0x67f86a*/
              if ( ++v4 >= (int)v10 ) /*0x67f877*/
                goto LABEL_8; /*0x67f877*/
            }
          }
        }
      }
    }
  }
  return result; /*0x67f9b8*/
}
}
} // namespace gamemd

// 0x74ED60
namespace gamemd {
char SaveGame::LoadVeinholeData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_74ED60(int *this)
{
  int v2; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int i; // ebx
  int v12; // ecx
  int v13; // [esp+90h] [ebp-14h] BYREF
  int v14; // [esp+94h] [ebp-10h]
  int v15; // [esp+98h] [ebp-Ch]
  int v16; // [esp+9Ch] [ebp-8h] BYREF
  int v17; // [esp+A0h] [ebp-4h] BYREF

  v2 = *this; /*0x74ed74*/
  v13 = g_VeinholePool; /*0x74ed7a*/
  if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(this, &v13, 4, 0) < 0 ) /*0x74ed83*/
    return 0; /*0x74ed8e*/
  v4 = Object::ComputeAllocationSize(); /*0x74ed9a*/
  v5 = *this; /*0x74ed9c*/
  v15 = v4; /*0x74eda3*/
  if ( (*(int (__stdcall **)(int *, void *, int, _DWORD))(v5 + 16))(this, g_VeinholeMonsterPool, v4, 0) < 0 ) /*0x74edac*/
    return 0; /*0x74edac*/
  v6 = 0; /*0x74edbc*/
  v14 = 0; /*0x74edc0*/
  if ( v13 > 0 ) /*0x74edc4*/
  {
    while ( 1 ) /*0x74edd6*/
    {
      v7 = *this; /*0x74edd6*/
      v16 = *((_DWORD *)g_VoxelDrawState + v6); /*0x74ede5*/
      if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v7 + 16))(this, &v16, 4, 0) < 0 /*0x74ee50*/
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *((_DWORD *)g_VoxelDrawState + v6),
             264,
             0) < 0
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *(_DWORD *)(*((_DWORD *)g_VoxelDrawState + v6) + 196),
             v4,
             0) < 0
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *(_DWORD *)(*((_DWORD *)g_VoxelDrawState + v6) + 180),
             8 * g_RulesClass_Instance->AircraftFogReveal,
             0) < 0 )
      {
        break; /*0x74ee50*/
      }
      v8 = *((_DWORD *)g_VoxelDrawState + v6); /*0x74ee62*/
      v9 = *(_DWORD *)(v8 + 176); /*0x74ee65*/
      v10 = *(_DWORD *)(v8 + 180); /*0x74ee6b*/
      if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 16))(this, v9, 4, 0) >= 0 /*0x74ee8a*/
        && (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 16))(this, v9 + 4, 4, 0) >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v9 + 4); ++i ) /*0x74ee93*/
        {
          v12 = *this; /*0x74ee98*/
          v17 = (*(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * i) - v10) >> 3; /*0x74eeac*/
          if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v12 + 16))(this, &v17, 4, 0) < 0 ) /*0x74eeb5*/
            break; /*0x74eeb5*/
        }
        v6 = v14; /*0x74eebf*/
      }
      v14 = ++v6; /*0x74eeca*/
      if ( v6 >= v13 ) /*0x74eece*/
        return 1; /*0x74eece*/
      v4 = v15; /*0x74edcc*/
    }
    return 0; /*0x74edb7*/
  }
  return 1; /*0x74ed85*/
}
}
} // namespace gamemd

// 0x751620
namespace gamemd {
int SaveGame::SaveAudioQueueItems()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_751620(int *this)
{
  int v2; // esi
  int *i; // edi
  int v4; // esi
  char *v5; // ecx
  char *SampleName; // ebx
  char *v7; // ecx
  char *v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-14h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-10h] BYREF

  v11 = SaveGame::CountLinkedList(DataGlobal_B1D320); /*0x751637*/
  v2 = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &v11, 4, 0); /*0x751647*/
  if ( v2 >= 0 )
  {
    for ( i = (int *)AudioQueue::GetNext(DataGlobal_B1D320); i; i = (int *)AudioQueue::GetNextAlt(i) )
    {
      v4 = -1; /*0x751665*/
      v12[0] = -1; /*0x751668*/
      v5 = (char *)i[5]; /*0x75166c*/
      if ( v5 )
      {
        SampleName = VocClass::GetSampleName(v5); /*0x751678*/
        if ( SampleName )
        {
          v4 = 0; /*0x751683*/
          if ( g_VocPlayState <= 0 )
          {
LABEL_11:
            v4 = -1; /*0x7516bc*/
          }
          else
          {
            while ( 1 )
            {
              v7 = (char *)**((_DWORD **)g_VocAudioConfig + v4); /*0x751692*/
              v8 = v7 ? VocClass::GetSampleName(v7) : g_Str_Invalid_Voc;
              if ( !_strcmpi(SampleName, v8) ) /*0x7516a6*/
                break; /*0x7516a6*/
              if ( ++v4 >= g_VocPlayState ) /*0x7516ba*/
                goto LABEL_11; /*0x7516ba*/
            }
          }
        }
        v12[0] = v4; /*0x7516bf*/
      }
      v12[1] = i[8]; /*0x7516c8*/
      v9 = *this; /*0x7516cf*/
      v12[2] = i[9]; /*0x7516d2*/
      v12[3] = i[10]; /*0x7516e1*/
      v2 = (*(int (__stdcall **)(int *, _DWORD *, int, _DWORD))(v9 + 16))(this, v12, 16, 0); /*0x7516e8*/
      if ( v2 < 0 ) /*0x7516ec*/
        break; /*0x7516ec*/
    }
  }
  return v2; /*0x751701*/
}
}
} // namespace gamemd

// 0x4073B0
namespace gamemd {
int SaveGame::CountLinkedList()
{
{
    int *v1;
    int result;
    v1 = (int *)*(void**)this;
    for ( result = 0; v1 != this; ++result )
    v1 = (int *)*v1;
    return result;
}
}
} // namespace gamemd

// 0x413850
namespace gamemd {
int SaveGame::SaveIteratedData(int a2)
{
{
    int v2;
    int v3;
    int *i;
    int v5;
    int result;
    int v7;
    v2 = a2;
    v3 = 0;
    for ( i = this + 1; ; i += 6 )
  {
    v5 = *(int *)v2;
    a2 = i[3];
    result = (*(int (__stdcall **)(int, int *, int, int))(v5 + 16))(v2, &a2, 4, 0);
    if ( result < 0 )
    break;
    v7 = 0;
    if ( a2 > 0 )
    {
    do
      {
    result = (*(int (__stdcall **)(int, int, int, int))(*(int *)(v2) + 16))(v2, *i + 4 * v7, 4, 0);
    if ( result < 0 )
    return result;
      }
    while ( ++v7 < a2 );
    }
    if ( ++v3 >= 400 )
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C6340
namespace gamemd {
int SaveGame::SaveBlock68(int a2)
{
{
    return (*(int (__stdcall **)(int, void *, int, int))(*(int *)(a2) + 16))(a2, this, 68, 0);
}
}
} // namespace gamemd

// 0x513CB0
namespace gamemd {
int SaveGame::WriteObject(int a1, int a2)
{
{
    int v2;
    int v3;
    char v5[24];
    v2 = StreamClass::ResetPosition(a1, a2);
    v3 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8));
    FrameSnapshot::InitMax(2 * *(int *)(v3 + 1820));
    qmemcpy((void *)(a1 + 44), v5, 0x18u);
    return v2;
}
}
} // namespace gamemd

// 0x67FDF0
namespace gamemd {
HRESULT SaveGame_Start(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FE70
namespace gamemd {
HRESULT SaveGame_Start_67FE70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FEF0
namespace gamemd {
HRESULT SaveGame_Start_67FEF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FF70
namespace gamemd {
HRESULT SaveGame_Start_67FF70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FFF0
namespace gamemd {
HRESULT SaveGame_Start_67FFF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680070
namespace gamemd {
HRESULT SaveGame_Start_680070(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6800F0
namespace gamemd {
HRESULT SaveGame_Start_6800F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680170
namespace gamemd {
HRESULT SaveGame_Start_680170(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6801F0
namespace gamemd {
HRESULT SaveGame_Start_6801F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680270
namespace gamemd {
HRESULT SaveGame_Start_680270(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6802F0
namespace gamemd {
HRESULT SaveGame_Start_6802F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680370
namespace gamemd {
HRESULT SaveGame_Start_680370(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6803F0
namespace gamemd {
HRESULT SaveGame_Start_6803F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680470
namespace gamemd {
HRESULT SaveGame_Start_680470(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6804F0
namespace gamemd {
HRESULT SaveGame_Start_6804F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680570
namespace gamemd {
HRESULT SaveGame_Start_680570(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6805F0
namespace gamemd {
HRESULT SaveGame_Start_6805F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680670
namespace gamemd {
HRESULT SaveGame_Start_680670(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6806F0
namespace gamemd {
HRESULT SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680770
namespace gamemd {
HRESULT SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6807F0
namespace gamemd {
HRESULT SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680870
namespace gamemd {
HRESULT SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6808F0
namespace gamemd {
HRESULT SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680970
namespace gamemd {
HRESULT SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6809F0
namespace gamemd {
HRESULT SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680A70
namespace gamemd {
HRESULT SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680AF0
namespace gamemd {
HRESULT SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680B70
namespace gamemd {
HRESULT SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680BF0
namespace gamemd {
HRESULT SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680C70
namespace gamemd {
HRESULT SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680CF0
namespace gamemd {
HRESULT SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680D70
namespace gamemd {
HRESULT SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680DF0
namespace gamemd {
HRESULT SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680E70
namespace gamemd {
HRESULT SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680EF0
namespace gamemd {
HRESULT SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x69B560
namespace gamemd {
bool SaveGame::SaveAudioData(int a2)
{
{
    int v2;
    int v4;
    bool result;
    int v6;
    v2 = a2;
    result = 0;
    if ( a2 )
  {
    v4 = *(int *)a2;
    v6 = a2;
    a2 = 300;
    if ( (*(int (__stdcall **)(int, int *, int, int))(v4 + 16))(v6, &a2, 4, 0) >= 0 && (*(int (__stdcall **)(int, void *, int, int))(*(int *)(v2) + 16))(v2, this, a2, 0) >= 0 )
    {
    return 1;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x721010
namespace gamemd {
int SaveGame::VtableDispatch(int a2)
{
{
    int result;
    result = (*(int (__stdcall **)(int, int, int, int))(*(int *)(a2) + 16))(a2, (int)this + 4, 4, 0);
    if ( result >= 0 )
    return (*(int (__stdcall **)(int, int, int, int))(*(int *)(a2) + 16))(a2, (int)this + 8, 4, 0);
    return result;
}
}
} // namespace gamemd

// 0x7533B0
namespace gamemd {
int SaveGame::WriteMagicHeader()
{
{
    int v2;
    int result;
    int v4;
    int v5;
    v2 = *(void**)this;
    v5 = 1450145875;
    result = (*(int (__stdcall **)(int *, int *, int, int))(v2 + 16))(this, &v5, 4, 0);
    if ( result >= 0 )
  {
    v4 = *(void**)this;
    v5 = 1450145861;
    return (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(this, &v5, 4, 0);
  }
    return result;
}
}
} // namespace gamemd
