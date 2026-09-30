// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"

// 0x4391C0
namespace gamemd {
int SaveGame::LoadArrayData(int * a2)
{

  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int i; // ebx
  int v8; // [esp+40h] [ebp-4h] BYREF

  v3 = *a2; /*0x4391cc*/
  v8 = *((char *)this + 4); /*0x4391d9*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &v8, 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = *((char *)this + 10); /*0x43921b*/
      result = (*(int (**)(int *, int *, int, unsigned int))(v6 + 16))(a2, &v8, 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))(a2, *((char *)this + 7) + 4 * i, 4, 0); /*0x43923e*/
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))(a2, *((char *)this + 1) + 4 * v5, 4, 0); /*0x4391fc*/
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
// 0x54E750
namespace gamemd {
int SaveGame::WriteDataArray(int * a2)
{

  int v3; // ecx
  int result; // eax
  int i; // edi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x54e75c*/
  v6 = *((unsigned int *)this + 7); /*0x54e769*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &v6, 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (**)(int *, unsigned int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)(*((unsigned int *)this + 4) + 4 * i), 8, 0); /*0x54e78c*/
      if ( result < 0 ) /*0x54e791*/
        break; /*0x54e791*/
    }
  }
  return result; /*0x54e79c*/

}
}
// 0x6607D0
namespace gamemd {
int SaveGame::SaveTriggerEvents()
{

  int v2; // ecx
  int v4; // edi
  int v5; // [esp+20h] [ebp-4h] BYREF

  v2 = (int)(*this);
  v5 = g_TriggerEventState; /*0x6607e6*/
  if ( (*(int (**)(int *, int *, int, unsigned int))(v2 + 16))(this, &v5, 4, 0) < 0 ) /*0x6607ef*/
    return 0; /*0x6607f6*/
  v4 = 0; /*0x6607fb*/
  if ( v5 > 0 ) /*0x6607ff*/
  {
    while ( (*(int (**)(int *, unsigned int, int, unsigned int))(*(unsigned int *)this + 16))( /*0x660817*/
              this,
              *((unsigned int *)g_TriggerPool + v4),
              64,
              0) >= 0 )
    {
      if ( ++v4 >= v5 ) /*0x660820*/
        return (*(int (**)(int *, int16_t *, int, unsigned int))(*(unsigned int *)this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x660820*/
    }
    return 0; /*0x660817*/
  }
  return (*(int (**)(int *, int16_t *, int, unsigned int))(*(unsigned int *)this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x6607f1*/

}
}
// 0x67D300
namespace gamemd {
void SaveGame::Start(LPSTREAM pStm)
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

  ScenarioClass::SaveLoad_Prefix((DWORD *)g_abs_A8B230, (int *)pStm->__pad_0);
  SaveGame::SaveBlock68(&g_abs_89F690, (int)pStm);
  RulesClass::SaveLoad_Prefix(*(unsigned int **)&g_abs_87F8E4, (int *)pStm->__pad_0);
  v2 = *(unsigned int *)pStm->__pad_0;
  v60 = *(LPPERSISTSTREAM *)&g_abs_89F690;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v2 + 16))(pStm, &v60, 4, 0) < 0 )
    return 0;
  v3 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      pPStm = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_89F690
                                                                       + 4 * v3))(
             *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v3),
             &IID_IPersistStream,
             &pPStm) < 0
        || OleSaveToStream(pPStm, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)pPStm + 8))(pPStm) < 0 )
      {
        return 0;
      }
    }
    while ( ++v3 < (int)v60 );
  }
  ((MouseClass *)((int *)&g_abs_87F7E8))->DrawCursor(pStm);
  v4 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_89F690;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v4 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v5 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_89F690
                                                                       + 4 * v5))(
             *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v5),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v5 < (int)pPStm );
  }
  if ( SaveGame::LoadMainGameState((int *)pStm->__pad_0) < 0 )
    return 0;
  LayerClass::Save(&g_abs_87F778, (RadarClass *)pStm);
  if ( OleSaveToStream(*(LPPERSISTSTREAM *)&g_abs_87F8E4, pStm) < 0 )
    return 0;
  v7 = *(unsigned int *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_SuperWeaponTypeArray;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v7 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v8 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***((int (****)(unsigned int, void *, LPPERSISTSTREAM *))g_SuperWeaponTypeCount + v8))(
             *((unsigned int *)g_SuperWeaponTypeCount + v8),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v8 < (int)pPStm );
  }
  v9 = *(unsigned int *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)HouseClass_Count;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v9 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v10 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))&HouseClass_Array->__pad_0[4 * v10])(
             *(unsigned int *)&HouseClass_Array->__pad_0[4 * v10],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v10 < (int)pPStm );
  }
  v11 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_89F690;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v11 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v12 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_89F690
                                                                       + 4 * v12))(
             *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v12),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v12 < (int)pPStm );
  }
  v13 = *(unsigned int *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_CrateCount;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v13 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v14 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))&g_UnitTypeCount2->__pad_0[4 * v14])(
             *(unsigned int *)&g_UnitTypeCount2->__pad_0[4 * v14],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v14 < (int)pPStm );
  }
  v15 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_A8D63C;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v15 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v16 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_A8D63C
                                                                       + 4 * v16))(
             *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v16),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v16 < (int)pPStm );
  }
  v17 = *(unsigned int *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_abs_A83DF8;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v17 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v18 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))&g_abs_A83DEC->__pad_0[4 * v18])(
             *(unsigned int *)&g_abs_A83DEC->__pad_0[4 * v18],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v18 < (int)pPStm );
  }
  v19 = *(unsigned int *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_TriggerClassCount;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v19 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v20 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***((int (****)(unsigned int, void *, LPPERSISTSTREAM *))g_TriggerTypeCount + v20))(
             *((unsigned int *)g_TriggerTypeCount + v20),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v20 < (int)pPStm );
  }
  v21 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_A8D63C;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v21 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v22 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_A8D63C
                                                                       + 4 * v22))(
             *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v22),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v22 < (int)pPStm );
  }
  v23 = *(unsigned int *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_abs_A8B228;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v23 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v24 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))&g_abs_A8B21C->__pad_0[4 * v24])(
             *(unsigned int *)&g_abs_A8B21C->__pad_0[4 * v24],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v24 < (int)pPStm );
  }
  v25 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_A8D63C;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v25 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v26 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_A8D63C
                                                                       + 4 * v26))(
             *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v26),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v26 < (int)pPStm );
  }
  v27 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_A8D63C;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v27 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v28 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_A8D63C
                                                                       + 4 * v28))(
             *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v28),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v28 < (int)pPStm );
  }
  v29 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_A8D63C;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v29 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v30 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_A8D63C
                                                                       + 4 * v30))(
             *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v30),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v30 < (int)pPStm );
  }
  v31 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_A8D63C;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v31 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v32 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_A8D63C
                                                                       + 4 * v32))(
             *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v32),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v32 < (int)pPStm );
  }
  v33 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_89F690;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v33 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v34 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_89F690
                                                                       + 4 * v34))(
             *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v34),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v34 < (int)pPStm );
  }
  v35 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_89F690;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v35 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v36 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_89F690
                                                                       + 4 * v36))(
             *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v36),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v36 < (int)pPStm );
  }
  v37 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_87F8E4;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v37 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v38 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_87F8E4
                                                                       + 4 * v38))(
             *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 4 * v38),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v38 < (int)pPStm );
  }
  v39 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_B077F8;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v39 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v40 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_B077F8
                                                                       + 4 * v40))(
             *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v40),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v40 < (int)pPStm );
  }
  v41 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_B077F8;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v41 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v42 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_B077F8
                                                                       + 4 * v42))(
             *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v42),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v42 < (int)pPStm );
  }
  v43 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_89F690;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v43 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v44 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_89F690
                                                                       + 4 * v44))(
             *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v44),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v44 < (int)pPStm );
  }
  v45 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_A8D63C;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v45 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v46 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)g_abs_A8D63C + 4 * v46))(
             *(unsigned int *)(*(unsigned int *)g_abs_A8D63C + 4 * v46),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v46 < (int)pPStm );
  }
  v47 = *(unsigned int *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_abs_A8B210;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v47 + 16))(pStm, &pPStm, 4, 0) >= 0 )
  {
    for ( i = 0; i < (int)pPStm; ++i )
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))&g_abs_A8B204->__pad_0[4 * i])(
             *(unsigned int *)&g_abs_A8B204->__pad_0[4 * i],
             &IID_IPersistStream,
             &v60) < 0 )
        break;
      if ( OleSaveToStream(v60, pStm) < 0 )
        break;
      if ( (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
        break;
    }
  }
  v49 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_B077F8;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v49 + 16))(pStm, &pPStm, 4, 0) >= 0 )
  {
    for ( j = 0; j < (int)pPStm; ++j )
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_B077F8
                                                                       + 4 * j))(
             *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * j),
             &IID_IPersistStream,
             &v60) < 0 )
        break;
      if ( OleSaveToStream(v60, pStm) < 0 )
        break;
      if ( (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
        break;
    }
  }
  v51 = *(unsigned int *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&g_abs_B077F8;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v51 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v52 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(*(unsigned int *)&g_abs_B077F8
                                                                       + 4 * v52))(
             *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v52),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (**)(LPPERSISTSTREAM))(*(unsigned int *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v52 < (int)pPStm );
  }
  if ( SaveGame_Start(pStm, (int)&g_abs_A83E30) < 0 )
    return 0;
  if ( SaveGame_Start_67FE70(pStm, (int)&g_abs_A8D63C) < 0 )
    return 0;
  if ( SaveGame_Start_67FEF0(pStm, (int)&g_abs_87F8E4) < 0 )
    return 0;
  if ( SaveGame_Start_67FF70(pStm, (int)&g_abs_87F8E4) < 0 )
    return 0;
  if ( SaveGame_Start_67FFF0(pStm, (int)&g_abs_87F8E4) < 0 )
    return 0;
  if ( SaveGame_Start_680070(pStm, (int)&g_abs_A83D98) < 0 )
    return 0;
  if ( SaveGame_Start_6800F0(pStm, (int)&g_abs_A83DC8) < 0 )
    return 0;
  if ( SaveGame_Start_680170(pStm, (int)&g_abs_A83D68) < 0 )
    return 0;
  if ( SaveGame_Start_6801F0(pStm, (int)&dword_A80208) < 0 )
    return 0;
  if ( SaveGame_Start_680270(pStm, (int)&BulletTypeClass_Array) < 0 )
    return 0;
  if ( SaveGame_Start_6802F0(pStm, (int)&g_abs_A8D63C) < 0 )
    return 0;
  if ( SaveGame_Start_680370(pStm, (int)&dword_B72608) < 0 )
    return 0;
  if ( SaveGame_Start_6803F0(pStm, (int)&g_abs_A8D63C) < 0 )
    return 0;
  if ( SaveGame_Start_680470(pStm, (int)&g_abs_A83D80) < 0 )
    return 0;
  if ( SaveGame_Start_6804F0(pStm, (int)&dword_ABCA10) < 0 )
    return 0;
  if ( SaveGame_Start_680570(pStm, (int)&g_abs_89F690) < 0 )
    return 0;
  if ( SaveGame_Start_6805F0(pStm, (int)&g_abs_89F690) < 0 )
    return 0;
  if ( SaveGame_Start_680670(pStm, (int)&g_abs_B077F8) < 0 )
    return 0;
  if ( SaveGame_Start_6806F0(pStm, (int)&g_abs_89F690) < 0 )
    return 0;
  if ( SaveGame_Start_680770(pStm, (int)&g_abs_A8D63C) < 0 )
    return 0;
  if ( SaveGame_Start_6807F0(pStm, (int)&dword_A83CB8) < 0 )
    return 0;
  v53 = *(unsigned int *)pStm->__pad_0;
  v60 = (LPPERSISTSTREAM)g_abs_A83D60;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v53 + 16))(pStm, &v60, 4, 0) < 0 )
    return 0;
  v54 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      v55 = *(unsigned int *)pStm->__pad_0;
      pPStm = *(LPPERSISTSTREAM *)&g_abs_A83D54->__pad_0[4 * v54];
      if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v55 + 16))(pStm, &pPStm, 4, 0) < 0 )
        return 0;
    }
    while ( ++v54 < (int)v60 );
  }
  v56 = *(unsigned int *)pStm->__pad_0;
  v60 = *(LPPERSISTSTREAM *)&g_abs_89F690;
  if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v56 + 16))(pStm, &v60, 4, 0) < 0 )
    return 0;
  v57 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      v58 = *(unsigned int *)pStm->__pad_0;
      pPStm = *(LPPERSISTSTREAM *)(*(unsigned int *)&g_abs_89F690 + 4 * v57);
      if ( (*(int (**)(LPSTREAM, LPPERSISTSTREAM *, int, unsigned int))(v58 + 16))(pStm, &pPStm, 4, 0) < 0 )
        return 0;
    }
    while ( ++v57 < (int)v60 );
  }
  if ( SaveGame_Start_680870(pStm, (int)&g_abs_A8D63C) < 0 )
    return 0;
  if ( SaveGame_Start_6808F0(pStm, (int)&g_abs_A8D63C) < 0 )
    return 0;
  if ( SaveGame_Start_680970(pStm, (int)&g_abs_89F690) < 0 )
    return 0;
  if ( SaveGame_Start_6809F0(pStm, (int)&g_abs_87F8E4) < 0 )
    return 0;
  if ( SaveGame_Start_680A70(pStm, (int)&g_abs_A8D63C) < 0 )
    return 0;
  result = SaveGame::LoadVeinholeData((int *)pStm->__pad_0);
  if ( result )
  {
    result = SaveGame::SaveTriggerEvents((int *)pStm->__pad_0);
    if ( result )
    {
      if ( SaveGame_Start_680AF0(pStm, (int)&dword_89E0F0) >= 0 )
      {
        if ( SaveGame_Start_680B70(pStm, (int)&g_abs_89F690) >= 0 )
        {
          if ( SaveGame_Start_680BF0(pStm, (int)(&g_MatrixTransformState + 5824)) >= 0 )
          {
            if ( SaveGame_Start_680C70(pStm, (int)&g_abs_B077F8) >= 0 )
            {
              if ( SaveGame_Start_680CF0(pStm, (int)&g_abs_87F8E4) >= 0 )
              {
                if ( SaveGame_Start_680D70(pStm, (int)&g_abs_B077F8) >= 0 )
                {
                  if ( SaveGame_Start_680DF0(pStm, (int)&g_abs_B077F8) >= 0 )
                  {
                    if ( SaveGame::SaveIteratedData(&g_abs_87F8E4, (int)pStm) >= 0 )
                    {
                      if ( SaveGame::WriteDataArray(&g_MissionQueueFrame, (int *)pStm->__pad_0) >= 0 )
                      {
                        if ( SaveGame::LoadArrayData(&g_abs_87F5D8, (int *)pStm->__pad_0) >= 0 )
                        {
                          if ( SaveGame_Start_680E70(pStm, (int)&dword_89C668) >= 0 )
                          {
                            if ( SaveGame_Start_680EF0(pStm, (int)&RadSiteClass_Array) >= 0 )
                            {
                              if ( g_abs_A8B238 != (CellStruct *)5 )
                                return SaveGame::SaveAudioQueueItems((int *)pStm->__pad_0) >= 0
                                    && SaveGame::WriteMagicHeader((int *)pStm->__pad_0) >= 0
                                    && SaveGame::VtableDispatch(&g_BuildingTypeClass_Count, (int)pStm) >= 0;
                              Debug::Log();
                              if ( SaveGame::SaveAudioData(&g_abs_A8B250, (int)pStm) )
                              {
                                return SaveGame::SaveAudioQueueItems((int *)pStm->__pad_0) >= 0
                                    && SaveGame::WriteMagicHeader((int *)pStm->__pad_0) >= 0
                                    && SaveGame::VtableDispatch(&g_BuildingTypeClass_Count, (int)pStm) >= 0;
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
} // namespace gamemd

// 0x67F7E0
namespace gamemd {
int SaveGame::LoadMainGameState()
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

  result = (*(int (**)(int *, int *, int, unsigned int))(*(unsigned int *)this + 16))(this, &MEMORY[0xA8ED78], 4, 0); /*0x67f7f1*/
  if ( result >= 0 )
  {
    result = (*(int (**)(int *, #375 **, int, unsigned int))(*(unsigned int *)this + 16))(this, &HouseClass_Player, 4, 0); /*0x67f808*/
    if ( result >= 0 )
    {
      result = (*(int (**)(int *, wchar_t **, int, unsigned int))(*(unsigned int *)this + 16))(this, &MEMORY[0xA8ED84], 4, 0); /*0x67f81f*/
      if ( result >= 0 )
      {
        v3 = *this; /*0x67f82f*/
        v10 = MEMORY[0xA8ECC8]; /*0x67f83b*/
        result = (*(int (**)(int *, wchar_t **, int, unsigned int))(v3 + 16))(this, &v10, 4, 0); /*0x67f83f*/
        if ( result >= 0 )
        {
          v4 = 0; /*0x67f84e*/
          if ( (int)v10 <= 0 )
          {
LABEL_8:
            result = (*(int (**)(int *, float *, int, unsigned int))(*(unsigned int *)this + 16))(this, MEMORY[0x89EA40], 432, 0); /*0x67f879*/
            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream(this); /*0x67f895*/
              v5 = *this; /*0x67f8a0*/
              v10 = (wchar_t *)MEMORY[0x8B40D8]; /*0x67f8ac*/
              result = (*(int (**)(int *, wchar_t **, int, unsigned int))(v5 + 16))(this, &v10, 4, 0); /*0x67f8b0*/
              if ( result >= 0 )
              {
                v6 = 0; /*0x67f8bf*/
                if ( (int)v10 <= 0 )
                {
LABEL_13:
                  v7 = *this; /*0x67f8ea*/
                  v10 = (wchar_t *)dword_8B41B8; /*0x67f8fc*/
                  result = (*(int (**)(int *, wchar_t **, int, unsigned int))(v7 + 16))(this, &v10, 4, 0); /*0x67f900*/
                  if ( result >= 0 )
                  {
                    v8 = 0; /*0x67f90f*/
                    if ( (int)v10 <= 0 )
                    {
LABEL_17:
                      result = (*(int (**)(int *, int *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f93a*/
                                 this,
                                 &dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (**)(int *, int *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f959*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (**)(int *, double *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f96f*/
                                     this,
                                     MEMORY[0x89EC28],
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (**)(int *, char *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f982*/
                                       this,
                                       MEMORY[0x89ECC0],
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (**)(int *, void *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f998*/
                                         this,
                                         &MEMORY[0xA8E3A8],
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (**)(int *, int *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f9ab*/
                                       this,
                                       &MEMORY[0xB07784],
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
                        result = (*(int (**)(int *, char *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f926*/
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
                    result = (*(int (**)(int *, char *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f8d6*/
                               this,
                               (char *)MEMORY[0x8B40CC] + 4 * v6,
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
              result = (*(int (**)(int *, char *, int, unsigned int))(*(unsigned int *)this + 16))( /*0x67f865*/
                         this,
                         (char *)MEMORY[0xA8ECBC] + 4 * v4,
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
// 0x74ED60
namespace gamemd {
int SaveGame::LoadVeinholeData()
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
  v13 = MEMORY[0xB1D2A0]; /*0x74ed7a*/
  if ( (*(int (**)(int *, int *, int, unsigned int))(v2 + 16))(this, &v13, 4, 0) < 0 ) /*0x74ed83*/
    return 0; /*0x74ed8e*/
  v4 = Object::ComputeAllocationSize(); /*0x74ed9a*/
  v5 = *this; /*0x74ed9c*/
  v15 = v4; /*0x74eda3*/
  if ( (*(int (**)(int *, void *, int, unsigned int))(v5 + 16))(this, MEMORY[0xB1D2F0], v4, 0) < 0 ) /*0x74edac*/
    return 0; /*0x74edac*/
  v6 = 0; /*0x74edbc*/
  v14 = 0; /*0x74edc0*/
  if ( v13 > 0 ) /*0x74edc4*/
  {
    while ( 1 ) /*0x74edd6*/
    {
      v7 = *this; /*0x74edd6*/
      v16 = *((unsigned int *)MEMORY[0xB1D294] + v6); /*0x74ede5*/
      if ( (*(int (**)(int *, int *, int, unsigned int))(v7 + 16))(this, &v16, 4, 0) < 0 /*0x74ee50*/
        || (*(int (**)(int *, unsigned int, int, unsigned int))(*(unsigned int *)this + 16))(
             this,
             *((unsigned int *)MEMORY[0xB1D294] + v6),
             264,
             0) < 0
        || (*(int (**)(int *, unsigned int, int, unsigned int))(*(unsigned int *)this + 16))(
             this,
             *(unsigned int *)(*((unsigned int *)MEMORY[0xB1D294] + v6) + 196),
             v4,
             0) < 0
        || (*(int (**)(int *, unsigned int, int, unsigned int))(*(unsigned int *)this + 16))(
             this,
             *(unsigned int *)(*((unsigned int *)MEMORY[0xB1D294] + v6) + 180),
             8 * MEMORY[0x8871E0]->AircraftFogReveal,
             0) < 0 )
      {
        break; /*0x74ee50*/
      }
      v8 = *((unsigned int *)MEMORY[0xB1D294] + v6); /*0x74ee62*/
      v9 = *(unsigned int *)(v8 + 176); /*0x74ee65*/
      v10 = *(unsigned int *)(v8 + 180); /*0x74ee6b*/
      if ( (*(int (**)(int *, int, int, unsigned int))(*(unsigned int *)this + 16))(this, v9, 4, 0) >= 0 /*0x74ee8a*/
        && (*(int (**)(int *, int, int, unsigned int))(*(unsigned int *)this + 16))(this, v9 + 4, 4, 0) >= 0 )
      {
        for ( i = 0; i < *(unsigned int *)(v9 + 4); ++i ) /*0x74ee93*/
        {
          v12 = *this; /*0x74ee98*/
          v17 = (*(unsigned int *)(*(unsigned int *)(v9 + 8) + 4 * i) - v10) >> 3; /*0x74eeac*/
          if ( (*(int (**)(int *, int *, int, unsigned int))(v12 + 16))(this, &v17, 4, 0) < 0 ) /*0x74eeb5*/
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
// 0x751620
namespace gamemd {
int SaveGame::SaveAudioQueueItems()
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
  unsigned int v12[4]; // [esp+14h] [ebp-10h] BYREF

  v11 = SaveGame::CountLinkedList(MEMORY[0xB1D320]); /*0x751637*/
  v2 = (*(int (**)(int *, int *, int, unsigned int))(*(unsigned int *)this + 16))(this, &v11, 4, 0); /*0x751647*/
  if ( v2 >= 0 )
  {
    for ( i = (int *)AudioQueue::GetNext(MEMORY[0xB1D320]); i; i = (int *)AudioQueue::GetNextAlt(i) )
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
          if ( MEMORY[0xB1D388] <= 0 )
          {
LABEL_11:
            v4 = -1; /*0x7516bc*/
          }
          else
          {
            while ( 1 )
            {
              v7 = (char *)**((unsigned int **)MEMORY[0xB1D37C] + v4); /*0x751692*/
              v8 = v7 ? VocClass::GetSampleName(v7) : MEMORY[0x846574];
              if ( !_strcmpi(SampleName, v8) ) /*0x7516a6*/
                break; /*0x7516a6*/
              if ( ++v4 >= MEMORY[0xB1D388] ) /*0x7516ba*/
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
      v2 = (*(int (**)(int *, unsigned int *, int, unsigned int))(v9 + 16))(this, v12, 16, 0); /*0x7516e8*/
      if ( v2 < 0 ) /*0x7516ec*/
        break; /*0x7516ec*/
    }
  }
  return v2; /*0x751701*/

}
}
// 0x4073B0
namespace gamemd {
int SaveGame::CountLinkedList()
{

  unsigned int *v1; // edx
  int result; // eax

  v1 = (unsigned int *)*this; /*0x4073b0*/
  for ( result = 0; v1 != this; ++result ) /*0x4073b6*/
    v1 = (unsigned int *)*v1; /*0x4073b8*/
  return result; /*0x4073bf*/

}
} // namespace gamemd

// 0x413850
namespace gamemd {
int SaveGame::SaveIteratedData(int a2)
{

  int v2; // esi
  int v3; // ebp
  unsigned int *i; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  v2 = a2; /*0x413853*/
  v3 = 0; /*0x413858*/
  for ( i = (unsigned int *)this + 1; ; i += 6 ) /*0x41385a*/
  {
    v5 = *(unsigned int *)v2; /*0x413860*/
    a2 = i[3]; /*0x41386c*/
    result = (*(int (**)(int, int *, int, unsigned int))(v5 + 16))(v2, &a2, 4, 0); /*0x413870*/
    if ( result < 0 ) /*0x413875*/
      break; /*0x413875*/
    v7 = 0; /*0x41387b*/
    if ( a2 > 0 ) /*0x41387f*/
    {
      do /*0x41388e*/
      {
        result = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)v2 + 16))(v2, *i + 4 * v7, 4, 0); /*0x41388e*/
        if ( result < 0 ) /*0x413893*/
          return result; /*0x413893*/
      }
      while ( ++v7 < a2 ); /*0x41388e*/
    }
    if ( ++v3 >= 400 ) /*0x4138a8*/
      return 0; /*0x4138aa*/
  }
  return result; /*0x4138ac*/

}
} // namespace gamemd

// 0x4C6340
namespace gamemd {
int SaveGame::SaveBlock68(int a2)
{

  return (*(int (**)(int, void *, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, this, 68, 0); /*0x4c634f*/

}
} // namespace gamemd

// 0x513CB0
namespace gamemd {
int SaveGame::WriteObject(int a1, int a2)
{

  int v2; // ebx
  int v3; // eax
  unsigned char v5[24]; // [esp+Ch] [ebp-18h] BYREF

  v2 = StreamClass::ResetPosition(a1, a2); /*0x513cc8*/
  v3 = (*(int (**)(unsigned int))(**(unsigned int **)(a1 + 8) + 132))(*(unsigned int *)(a1 + 8)); /*0x513ccc*/
  FrameSnapshot::InitMax(2 * *(unsigned int *)(v3 + 1820)); /*0x513cdf*/
  qmemcpy((void *)(a1 + 44), v5, 0x18u); /*0x513cf2*/
  return v2; /*0x513cf4*/

}
} // namespace gamemd

// 0x67FDF0
namespace gamemd {
HRESULT SaveGame_Start(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67fe03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67fe09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe0d*/
  if ( result >= 0 ) /*0x67fe12*/
  {
    v6 = 0; /*0x67fe18*/
    if ( v9 <= 0 ) /*0x67fe1c*/
    {
      return 0; /*0x67fe66*/
    }
    else
    {
      while ( 1 ) /*0x67fe1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67fe1e*/
        pPStm = 0; /*0x67fe21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67fe39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67fe3d*/
          break; /*0x67fe3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x67fe45*/
        if ( result < 0 ) /*0x67fe4d*/
          break; /*0x67fe4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x67fe56*/
        if ( result < 0 ) /*0x67fe5b*/
          break; /*0x67fe5b*/
        if ( ++v6 >= v9 ) /*0x67fe64*/
          return 0; /*0x67fe64*/
      }
    }
  }
  return result; /*0x67fe68*/
}
} // namespace gamemd

// 0x67FE70
namespace gamemd {
HRESULT SaveGame_Start_67FE70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67fe83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67fe89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe8d*/
  if ( result >= 0 ) /*0x67fe92*/
  {
    v6 = 0; /*0x67fe98*/
    if ( v9 <= 0 ) /*0x67fe9c*/
    {
      return 0; /*0x67fee6*/
    }
    else
    {
      while ( 1 ) /*0x67fe9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67fe9e*/
        pPStm = 0; /*0x67fea1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67feb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67febd*/
          break; /*0x67febd*/
        result = OleSaveToStream(pPStm, pStm); /*0x67fec5*/
        if ( result < 0 ) /*0x67fecd*/
          break; /*0x67fecd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x67fed6*/
        if ( result < 0 ) /*0x67fedb*/
          break; /*0x67fedb*/
        if ( ++v6 >= v9 ) /*0x67fee4*/
          return 0; /*0x67fee4*/
      }
    }
  }
  return result; /*0x67fee8*/
}
} // namespace gamemd

// 0x67FEF0
namespace gamemd {
HRESULT SaveGame_Start_67FEF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67ff03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67ff09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff0d*/
  if ( result >= 0 ) /*0x67ff12*/
  {
    v6 = 0; /*0x67ff18*/
    if ( v9 <= 0 ) /*0x67ff1c*/
    {
      return 0; /*0x67ff66*/
    }
    else
    {
      while ( 1 ) /*0x67ff1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67ff1e*/
        pPStm = 0; /*0x67ff21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ff39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ff3d*/
          break; /*0x67ff3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x67ff45*/
        if ( result < 0 ) /*0x67ff4d*/
          break; /*0x67ff4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x67ff56*/
        if ( result < 0 ) /*0x67ff5b*/
          break; /*0x67ff5b*/
        if ( ++v6 >= v9 ) /*0x67ff64*/
          return 0; /*0x67ff64*/
      }
    }
  }
  return result; /*0x67ff68*/
}
} // namespace gamemd

// 0x67FF70
namespace gamemd {
HRESULT SaveGame_Start_67FF70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67ff83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67ff89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff8d*/
  if ( result >= 0 ) /*0x67ff92*/
  {
    v6 = 0; /*0x67ff98*/
    if ( v9 <= 0 ) /*0x67ff9c*/
    {
      return 0; /*0x67ffe6*/
    }
    else
    {
      while ( 1 ) /*0x67ff9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67ff9e*/
        pPStm = 0; /*0x67ffa1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ffb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ffbd*/
          break; /*0x67ffbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x67ffc5*/
        if ( result < 0 ) /*0x67ffcd*/
          break; /*0x67ffcd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x67ffd6*/
        if ( result < 0 ) /*0x67ffdb*/
          break; /*0x67ffdb*/
        if ( ++v6 >= v9 ) /*0x67ffe4*/
          return 0; /*0x67ffe4*/
      }
    }
  }
  return result; /*0x67ffe8*/
}
} // namespace gamemd

// 0x67FFF0
namespace gamemd {
HRESULT SaveGame_Start_67FFF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680003*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680009*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68000d*/
  if ( result >= 0 ) /*0x680012*/
  {
    v6 = 0; /*0x680018*/
    if ( v9 <= 0 ) /*0x68001c*/
    {
      return 0; /*0x680066*/
    }
    else
    {
      while ( 1 ) /*0x68001e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68001e*/
        pPStm = 0; /*0x680021*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680039*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68003d*/
          break; /*0x68003d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680045*/
        if ( result < 0 ) /*0x68004d*/
          break; /*0x68004d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680056*/
        if ( result < 0 ) /*0x68005b*/
          break; /*0x68005b*/
        if ( ++v6 >= v9 ) /*0x680064*/
          return 0; /*0x680064*/
      }
    }
  }
  return result; /*0x680068*/
}
} // namespace gamemd

// 0x680070
namespace gamemd {
HRESULT SaveGame_Start_680070(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680083*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680089*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68008d*/
  if ( result >= 0 ) /*0x680092*/
  {
    v6 = 0; /*0x680098*/
    if ( v9 <= 0 ) /*0x68009c*/
    {
      return 0; /*0x6800e6*/
    }
    else
    {
      while ( 1 ) /*0x68009e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68009e*/
        pPStm = 0; /*0x6800a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6800b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6800bd*/
          break; /*0x6800bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6800c5*/
        if ( result < 0 ) /*0x6800cd*/
          break; /*0x6800cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6800d6*/
        if ( result < 0 ) /*0x6800db*/
          break; /*0x6800db*/
        if ( ++v6 >= v9 ) /*0x6800e4*/
          return 0; /*0x6800e4*/
      }
    }
  }
  return result; /*0x6800e8*/
}
} // namespace gamemd

// 0x6800F0
namespace gamemd {
HRESULT SaveGame_Start_6800F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680103*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680109*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68010d*/
  if ( result >= 0 ) /*0x680112*/
  {
    v6 = 0; /*0x680118*/
    if ( v9 <= 0 ) /*0x68011c*/
    {
      return 0; /*0x680166*/
    }
    else
    {
      while ( 1 ) /*0x68011e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68011e*/
        pPStm = 0; /*0x680121*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680139*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68013d*/
          break; /*0x68013d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680145*/
        if ( result < 0 ) /*0x68014d*/
          break; /*0x68014d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680156*/
        if ( result < 0 ) /*0x68015b*/
          break; /*0x68015b*/
        if ( ++v6 >= v9 ) /*0x680164*/
          return 0; /*0x680164*/
      }
    }
  }
  return result; /*0x680168*/
}
} // namespace gamemd

// 0x680170
namespace gamemd {
HRESULT SaveGame_Start_680170(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680183*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680189*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68018d*/
  if ( result >= 0 ) /*0x680192*/
  {
    v6 = 0; /*0x680198*/
    if ( v9 <= 0 ) /*0x68019c*/
    {
      return 0; /*0x6801e6*/
    }
    else
    {
      while ( 1 ) /*0x68019e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68019e*/
        pPStm = 0; /*0x6801a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6801b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6801bd*/
          break; /*0x6801bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6801c5*/
        if ( result < 0 ) /*0x6801cd*/
          break; /*0x6801cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6801d6*/
        if ( result < 0 ) /*0x6801db*/
          break; /*0x6801db*/
        if ( ++v6 >= v9 ) /*0x6801e4*/
          return 0; /*0x6801e4*/
      }
    }
  }
  return result; /*0x6801e8*/
}
} // namespace gamemd

// 0x6801F0
namespace gamemd {
HRESULT SaveGame_Start_6801F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680203*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680209*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68020d*/
  if ( result >= 0 ) /*0x680212*/
  {
    v6 = 0; /*0x680218*/
    if ( v9 <= 0 ) /*0x68021c*/
    {
      return 0; /*0x680266*/
    }
    else
    {
      while ( 1 ) /*0x68021e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68021e*/
        pPStm = 0; /*0x680221*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680239*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68023d*/
          break; /*0x68023d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680245*/
        if ( result < 0 ) /*0x68024d*/
          break; /*0x68024d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680256*/
        if ( result < 0 ) /*0x68025b*/
          break; /*0x68025b*/
        if ( ++v6 >= v9 ) /*0x680264*/
          return 0; /*0x680264*/
      }
    }
  }
  return result; /*0x680268*/
}
} // namespace gamemd

// 0x680270
namespace gamemd {
HRESULT SaveGame_Start_680270(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680283*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680289*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68028d*/
  if ( result >= 0 ) /*0x680292*/
  {
    v6 = 0; /*0x680298*/
    if ( v9 <= 0 ) /*0x68029c*/
    {
      return 0; /*0x6802e6*/
    }
    else
    {
      while ( 1 ) /*0x68029e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68029e*/
        pPStm = 0; /*0x6802a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6802b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6802bd*/
          break; /*0x6802bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6802c5*/
        if ( result < 0 ) /*0x6802cd*/
          break; /*0x6802cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6802d6*/
        if ( result < 0 ) /*0x6802db*/
          break; /*0x6802db*/
        if ( ++v6 >= v9 ) /*0x6802e4*/
          return 0; /*0x6802e4*/
      }
    }
  }
  return result; /*0x6802e8*/
}
} // namespace gamemd

// 0x6802F0
namespace gamemd {
HRESULT SaveGame_Start_6802F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680303*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680309*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68030d*/
  if ( result >= 0 ) /*0x680312*/
  {
    v6 = 0; /*0x680318*/
    if ( v9 <= 0 ) /*0x68031c*/
    {
      return 0; /*0x680366*/
    }
    else
    {
      while ( 1 ) /*0x68031e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68031e*/
        pPStm = 0; /*0x680321*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680339*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68033d*/
          break; /*0x68033d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680345*/
        if ( result < 0 ) /*0x68034d*/
          break; /*0x68034d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680356*/
        if ( result < 0 ) /*0x68035b*/
          break; /*0x68035b*/
        if ( ++v6 >= v9 ) /*0x680364*/
          return 0; /*0x680364*/
      }
    }
  }
  return result; /*0x680368*/
}
} // namespace gamemd

// 0x680370
namespace gamemd {
HRESULT SaveGame_Start_680370(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680383*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680389*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68038d*/
  if ( result >= 0 ) /*0x680392*/
  {
    v6 = 0; /*0x680398*/
    if ( v9 <= 0 ) /*0x68039c*/
    {
      return 0; /*0x6803e6*/
    }
    else
    {
      while ( 1 ) /*0x68039e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68039e*/
        pPStm = 0; /*0x6803a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6803b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6803bd*/
          break; /*0x6803bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6803c5*/
        if ( result < 0 ) /*0x6803cd*/
          break; /*0x6803cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6803d6*/
        if ( result < 0 ) /*0x6803db*/
          break; /*0x6803db*/
        if ( ++v6 >= v9 ) /*0x6803e4*/
          return 0; /*0x6803e4*/
      }
    }
  }
  return result; /*0x6803e8*/
}
} // namespace gamemd

// 0x6803F0
namespace gamemd {
HRESULT SaveGame_Start_6803F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680403*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680409*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68040d*/
  if ( result >= 0 ) /*0x680412*/
  {
    v6 = 0; /*0x680418*/
    if ( v9 <= 0 ) /*0x68041c*/
    {
      return 0; /*0x680466*/
    }
    else
    {
      while ( 1 ) /*0x68041e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68041e*/
        pPStm = 0; /*0x680421*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680439*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68043d*/
          break; /*0x68043d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680445*/
        if ( result < 0 ) /*0x68044d*/
          break; /*0x68044d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680456*/
        if ( result < 0 ) /*0x68045b*/
          break; /*0x68045b*/
        if ( ++v6 >= v9 ) /*0x680464*/
          return 0; /*0x680464*/
      }
    }
  }
  return result; /*0x680468*/
}
} // namespace gamemd

// 0x680470
namespace gamemd {
HRESULT SaveGame_Start_680470(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680483*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680489*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68048d*/
  if ( result >= 0 ) /*0x680492*/
  {
    v6 = 0; /*0x680498*/
    if ( v9 <= 0 ) /*0x68049c*/
    {
      return 0; /*0x6804e6*/
    }
    else
    {
      while ( 1 ) /*0x68049e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68049e*/
        pPStm = 0; /*0x6804a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6804b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6804bd*/
          break; /*0x6804bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6804c5*/
        if ( result < 0 ) /*0x6804cd*/
          break; /*0x6804cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6804d6*/
        if ( result < 0 ) /*0x6804db*/
          break; /*0x6804db*/
        if ( ++v6 >= v9 ) /*0x6804e4*/
          return 0; /*0x6804e4*/
      }
    }
  }
  return result; /*0x6804e8*/
}
} // namespace gamemd

// 0x6804F0
namespace gamemd {
HRESULT SaveGame_Start_6804F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680503*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680509*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68050d*/
  if ( result >= 0 ) /*0x680512*/
  {
    v6 = 0; /*0x680518*/
    if ( v9 <= 0 ) /*0x68051c*/
    {
      return 0; /*0x680566*/
    }
    else
    {
      while ( 1 ) /*0x68051e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68051e*/
        pPStm = 0; /*0x680521*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680539*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68053d*/
          break; /*0x68053d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680545*/
        if ( result < 0 ) /*0x68054d*/
          break; /*0x68054d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680556*/
        if ( result < 0 ) /*0x68055b*/
          break; /*0x68055b*/
        if ( ++v6 >= v9 ) /*0x680564*/
          return 0; /*0x680564*/
      }
    }
  }
  return result; /*0x680568*/
}
} // namespace gamemd

// 0x680570
namespace gamemd {
HRESULT SaveGame_Start_680570(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680583*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680589*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68058d*/
  if ( result >= 0 ) /*0x680592*/
  {
    v6 = 0; /*0x680598*/
    if ( v9 <= 0 ) /*0x68059c*/
    {
      return 0; /*0x6805e6*/
    }
    else
    {
      while ( 1 ) /*0x68059e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68059e*/
        pPStm = 0; /*0x6805a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6805b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6805bd*/
          break; /*0x6805bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6805c5*/
        if ( result < 0 ) /*0x6805cd*/
          break; /*0x6805cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6805d6*/
        if ( result < 0 ) /*0x6805db*/
          break; /*0x6805db*/
        if ( ++v6 >= v9 ) /*0x6805e4*/
          return 0; /*0x6805e4*/
      }
    }
  }
  return result; /*0x6805e8*/
}
} // namespace gamemd

// 0x6805F0
namespace gamemd {
HRESULT SaveGame_Start_6805F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680603*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680609*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68060d*/
  if ( result >= 0 ) /*0x680612*/
  {
    v6 = 0; /*0x680618*/
    if ( v9 <= 0 ) /*0x68061c*/
    {
      return 0; /*0x680666*/
    }
    else
    {
      while ( 1 ) /*0x68061e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68061e*/
        pPStm = 0; /*0x680621*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680639*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68063d*/
          break; /*0x68063d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680645*/
        if ( result < 0 ) /*0x68064d*/
          break; /*0x68064d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680656*/
        if ( result < 0 ) /*0x68065b*/
          break; /*0x68065b*/
        if ( ++v6 >= v9 ) /*0x680664*/
          return 0; /*0x680664*/
      }
    }
  }
  return result; /*0x680668*/
}
} // namespace gamemd

// 0x680670
namespace gamemd {
HRESULT SaveGame_Start_680670(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680683*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680689*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68068d*/
  if ( result >= 0 ) /*0x680692*/
  {
    v6 = 0; /*0x680698*/
    if ( v9 <= 0 ) /*0x68069c*/
    {
      return 0; /*0x6806e6*/
    }
    else
    {
      while ( 1 ) /*0x68069e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68069e*/
        pPStm = 0; /*0x6806a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6806b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6806bd*/
          break; /*0x6806bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6806c5*/
        if ( result < 0 ) /*0x6806cd*/
          break; /*0x6806cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6806d6*/
        if ( result < 0 ) /*0x6806db*/
          break; /*0x6806db*/
        if ( ++v6 >= v9 ) /*0x6806e4*/
          return 0; /*0x6806e4*/
      }
    }
  }
  return result; /*0x6806e8*/
}
} // namespace gamemd

// 0x6806F0
namespace gamemd {
HRESULT SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680703*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680709*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68070d*/
  if ( result >= 0 ) /*0x680712*/
  {
    v6 = 0; /*0x680718*/
    if ( v9 <= 0 ) /*0x68071c*/
    {
      return 0; /*0x680766*/
    }
    else
    {
      while ( 1 ) /*0x68071e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68071e*/
        pPStm = 0; /*0x680721*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680739*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68073d*/
          break; /*0x68073d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680745*/
        if ( result < 0 ) /*0x68074d*/
          break; /*0x68074d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680756*/
        if ( result < 0 ) /*0x68075b*/
          break; /*0x68075b*/
        if ( ++v6 >= v9 ) /*0x680764*/
          return 0; /*0x680764*/
      }
    }
  }
  return result; /*0x680768*/
}
} // namespace gamemd

// 0x680770
namespace gamemd {
HRESULT SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680783*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680789*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68078d*/
  if ( result >= 0 ) /*0x680792*/
  {
    v6 = 0; /*0x680798*/
    if ( v9 <= 0 ) /*0x68079c*/
    {
      return 0; /*0x6807e6*/
    }
    else
    {
      while ( 1 ) /*0x68079e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68079e*/
        pPStm = 0; /*0x6807a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6807b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6807bd*/
          break; /*0x6807bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6807c5*/
        if ( result < 0 ) /*0x6807cd*/
          break; /*0x6807cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6807d6*/
        if ( result < 0 ) /*0x6807db*/
          break; /*0x6807db*/
        if ( ++v6 >= v9 ) /*0x6807e4*/
          return 0; /*0x6807e4*/
      }
    }
  }
  return result; /*0x6807e8*/
}
} // namespace gamemd

// 0x6807F0
namespace gamemd {
HRESULT SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680803*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680809*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68080d*/
  if ( result >= 0 ) /*0x680812*/
  {
    v6 = 0; /*0x680818*/
    if ( v9 <= 0 ) /*0x68081c*/
    {
      return 0; /*0x680866*/
    }
    else
    {
      while ( 1 ) /*0x68081e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68081e*/
        pPStm = 0; /*0x680821*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680839*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68083d*/
          break; /*0x68083d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680845*/
        if ( result < 0 ) /*0x68084d*/
          break; /*0x68084d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680856*/
        if ( result < 0 ) /*0x68085b*/
          break; /*0x68085b*/
        if ( ++v6 >= v9 ) /*0x680864*/
          return 0; /*0x680864*/
      }
    }
  }
  return result; /*0x680868*/
}
} // namespace gamemd

// 0x680870
namespace gamemd {
HRESULT SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680883*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680889*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68088d*/
  if ( result >= 0 ) /*0x680892*/
  {
    v6 = 0; /*0x680898*/
    if ( v9 <= 0 ) /*0x68089c*/
    {
      return 0; /*0x6808e6*/
    }
    else
    {
      while ( 1 ) /*0x68089e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68089e*/
        pPStm = 0; /*0x6808a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6808b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6808bd*/
          break; /*0x6808bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6808c5*/
        if ( result < 0 ) /*0x6808cd*/
          break; /*0x6808cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6808d6*/
        if ( result < 0 ) /*0x6808db*/
          break; /*0x6808db*/
        if ( ++v6 >= v9 ) /*0x6808e4*/
          return 0; /*0x6808e4*/
      }
    }
  }
  return result; /*0x6808e8*/
}
} // namespace gamemd

// 0x6808F0
namespace gamemd {
HRESULT SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680903*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680909*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68090d*/
  if ( result >= 0 ) /*0x680912*/
  {
    v6 = 0; /*0x680918*/
    if ( v9 <= 0 ) /*0x68091c*/
    {
      return 0; /*0x680966*/
    }
    else
    {
      while ( 1 ) /*0x68091e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68091e*/
        pPStm = 0; /*0x680921*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680939*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68093d*/
          break; /*0x68093d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680945*/
        if ( result < 0 ) /*0x68094d*/
          break; /*0x68094d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680956*/
        if ( result < 0 ) /*0x68095b*/
          break; /*0x68095b*/
        if ( ++v6 >= v9 ) /*0x680964*/
          return 0; /*0x680964*/
      }
    }
  }
  return result; /*0x680968*/
}
} // namespace gamemd

// 0x680970
namespace gamemd {
HRESULT SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680983*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680989*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68098d*/
  if ( result >= 0 ) /*0x680992*/
  {
    v6 = 0; /*0x680998*/
    if ( v9 <= 0 ) /*0x68099c*/
    {
      return 0; /*0x6809e6*/
    }
    else
    {
      while ( 1 ) /*0x68099e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68099e*/
        pPStm = 0; /*0x6809a1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6809b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6809bd*/
          break; /*0x6809bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6809c5*/
        if ( result < 0 ) /*0x6809cd*/
          break; /*0x6809cd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x6809d6*/
        if ( result < 0 ) /*0x6809db*/
          break; /*0x6809db*/
        if ( ++v6 >= v9 ) /*0x6809e4*/
          return 0; /*0x6809e4*/
      }
    }
  }
  return result; /*0x6809e8*/
}
} // namespace gamemd

// 0x6809F0
namespace gamemd {
HRESULT SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680a03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680a09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680a0d*/
  if ( result >= 0 ) /*0x680a12*/
  {
    v6 = 0; /*0x680a18*/
    if ( v9 <= 0 ) /*0x680a1c*/
    {
      return 0; /*0x680a66*/
    }
    else
    {
      while ( 1 ) /*0x680a1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680a1e*/
        pPStm = 0; /*0x680a21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680a39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680a3d*/
          break; /*0x680a3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680a45*/
        if ( result < 0 ) /*0x680a4d*/
          break; /*0x680a4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680a56*/
        if ( result < 0 ) /*0x680a5b*/
          break; /*0x680a5b*/
        if ( ++v6 >= v9 ) /*0x680a64*/
          return 0; /*0x680a64*/
      }
    }
  }
  return result; /*0x680a68*/
}
} // namespace gamemd

// 0x680A70
namespace gamemd {
HRESULT SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680a83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680a89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680a8d*/
  if ( result >= 0 ) /*0x680a92*/
  {
    v6 = 0; /*0x680a98*/
    if ( v9 <= 0 ) /*0x680a9c*/
    {
      return 0; /*0x680ae6*/
    }
    else
    {
      while ( 1 ) /*0x680a9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680a9e*/
        pPStm = 0; /*0x680aa1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680ab9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680abd*/
          break; /*0x680abd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680ac5*/
        if ( result < 0 ) /*0x680acd*/
          break; /*0x680acd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680ad6*/
        if ( result < 0 ) /*0x680adb*/
          break; /*0x680adb*/
        if ( ++v6 >= v9 ) /*0x680ae4*/
          return 0; /*0x680ae4*/
      }
    }
  }
  return result; /*0x680ae8*/
}
} // namespace gamemd

// 0x680AF0
namespace gamemd {
HRESULT SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680b03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680b09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680b0d*/
  if ( result >= 0 ) /*0x680b12*/
  {
    v6 = 0; /*0x680b18*/
    if ( v9 <= 0 ) /*0x680b1c*/
    {
      return 0; /*0x680b66*/
    }
    else
    {
      while ( 1 ) /*0x680b1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680b1e*/
        pPStm = 0; /*0x680b21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680b39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680b3d*/
          break; /*0x680b3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680b45*/
        if ( result < 0 ) /*0x680b4d*/
          break; /*0x680b4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680b56*/
        if ( result < 0 ) /*0x680b5b*/
          break; /*0x680b5b*/
        if ( ++v6 >= v9 ) /*0x680b64*/
          return 0; /*0x680b64*/
      }
    }
  }
  return result; /*0x680b68*/
}
} // namespace gamemd

// 0x680B70
namespace gamemd {
HRESULT SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680b83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680b89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680b8d*/
  if ( result >= 0 ) /*0x680b92*/
  {
    v6 = 0; /*0x680b98*/
    if ( v9 <= 0 ) /*0x680b9c*/
    {
      return 0; /*0x680be6*/
    }
    else
    {
      while ( 1 ) /*0x680b9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680b9e*/
        pPStm = 0; /*0x680ba1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680bb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680bbd*/
          break; /*0x680bbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680bc5*/
        if ( result < 0 ) /*0x680bcd*/
          break; /*0x680bcd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680bd6*/
        if ( result < 0 ) /*0x680bdb*/
          break; /*0x680bdb*/
        if ( ++v6 >= v9 ) /*0x680be4*/
          return 0; /*0x680be4*/
      }
    }
  }
  return result; /*0x680be8*/
}
} // namespace gamemd

// 0x680BF0
namespace gamemd {
HRESULT SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680c03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680c09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680c0d*/
  if ( result >= 0 ) /*0x680c12*/
  {
    v6 = 0; /*0x680c18*/
    if ( v9 <= 0 ) /*0x680c1c*/
    {
      return 0; /*0x680c66*/
    }
    else
    {
      while ( 1 ) /*0x680c1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680c1e*/
        pPStm = 0; /*0x680c21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680c39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680c3d*/
          break; /*0x680c3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680c45*/
        if ( result < 0 ) /*0x680c4d*/
          break; /*0x680c4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680c56*/
        if ( result < 0 ) /*0x680c5b*/
          break; /*0x680c5b*/
        if ( ++v6 >= v9 ) /*0x680c64*/
          return 0; /*0x680c64*/
      }
    }
  }
  return result; /*0x680c68*/
}
} // namespace gamemd

// 0x680C70
namespace gamemd {
HRESULT SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680c83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680c89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680c8d*/
  if ( result >= 0 ) /*0x680c92*/
  {
    v6 = 0; /*0x680c98*/
    if ( v9 <= 0 ) /*0x680c9c*/
    {
      return 0; /*0x680ce6*/
    }
    else
    {
      while ( 1 ) /*0x680c9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680c9e*/
        pPStm = 0; /*0x680ca1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680cb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680cbd*/
          break; /*0x680cbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680cc5*/
        if ( result < 0 ) /*0x680ccd*/
          break; /*0x680ccd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680cd6*/
        if ( result < 0 ) /*0x680cdb*/
          break; /*0x680cdb*/
        if ( ++v6 >= v9 ) /*0x680ce4*/
          return 0; /*0x680ce4*/
      }
    }
  }
  return result; /*0x680ce8*/
}
} // namespace gamemd

// 0x680CF0
namespace gamemd {
HRESULT SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680d03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680d09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680d0d*/
  if ( result >= 0 ) /*0x680d12*/
  {
    v6 = 0; /*0x680d18*/
    if ( v9 <= 0 ) /*0x680d1c*/
    {
      return 0; /*0x680d66*/
    }
    else
    {
      while ( 1 ) /*0x680d1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680d1e*/
        pPStm = 0; /*0x680d21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680d39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680d3d*/
          break; /*0x680d3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680d45*/
        if ( result < 0 ) /*0x680d4d*/
          break; /*0x680d4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680d56*/
        if ( result < 0 ) /*0x680d5b*/
          break; /*0x680d5b*/
        if ( ++v6 >= v9 ) /*0x680d64*/
          return 0; /*0x680d64*/
      }
    }
  }
  return result; /*0x680d68*/
}
} // namespace gamemd

// 0x680D70
namespace gamemd {
HRESULT SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680d83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680d89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680d8d*/
  if ( result >= 0 ) /*0x680d92*/
  {
    v6 = 0; /*0x680d98*/
    if ( v9 <= 0 ) /*0x680d9c*/
    {
      return 0; /*0x680de6*/
    }
    else
    {
      while ( 1 ) /*0x680d9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680d9e*/
        pPStm = 0; /*0x680da1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680db9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680dbd*/
          break; /*0x680dbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680dc5*/
        if ( result < 0 ) /*0x680dcd*/
          break; /*0x680dcd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680dd6*/
        if ( result < 0 ) /*0x680ddb*/
          break; /*0x680ddb*/
        if ( ++v6 >= v9 ) /*0x680de4*/
          return 0; /*0x680de4*/
      }
    }
  }
  return result; /*0x680de8*/
}
} // namespace gamemd

// 0x680DF0
namespace gamemd {
HRESULT SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680e03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680e09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680e0d*/
  if ( result >= 0 ) /*0x680e12*/
  {
    v6 = 0; /*0x680e18*/
    if ( v9 <= 0 ) /*0x680e1c*/
    {
      return 0; /*0x680e66*/
    }
    else
    {
      while ( 1 ) /*0x680e1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680e1e*/
        pPStm = 0; /*0x680e21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680e39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680e3d*/
          break; /*0x680e3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680e45*/
        if ( result < 0 ) /*0x680e4d*/
          break; /*0x680e4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680e56*/
        if ( result < 0 ) /*0x680e5b*/
          break; /*0x680e5b*/
        if ( ++v6 >= v9 ) /*0x680e64*/
          return 0; /*0x680e64*/
      }
    }
  }
  return result; /*0x680e68*/
}
} // namespace gamemd

// 0x680E70
namespace gamemd {
HRESULT SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680e83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680e89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680e8d*/
  if ( result >= 0 ) /*0x680e92*/
  {
    v6 = 0; /*0x680e98*/
    if ( v9 <= 0 ) /*0x680e9c*/
    {
      return 0; /*0x680ee6*/
    }
    else
    {
      while ( 1 ) /*0x680e9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680e9e*/
        pPStm = 0; /*0x680ea1*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680eb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680ebd*/
          break; /*0x680ebd*/
        result = OleSaveToStream(pPStm, pStm); /*0x680ec5*/
        if ( result < 0 ) /*0x680ecd*/
          break; /*0x680ecd*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680ed6*/
        if ( result < 0 ) /*0x680edb*/
          break; /*0x680edb*/
        if ( ++v6 >= v9 ) /*0x680ee4*/
          return 0; /*0x680ee4*/
      }
    }
  }
  return result; /*0x680ee8*/
}
} // namespace gamemd

// 0x680EF0
namespace gamemd {
HRESULT SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680f03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680f09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680f0d*/
  if ( result >= 0 ) /*0x680f12*/
  {
    v6 = 0; /*0x680f18*/
    if ( v9 <= 0 ) /*0x680f1c*/
    {
      return 0; /*0x680f66*/
    }
    else
    {
      while ( 1 ) /*0x680f1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680f1e*/
        pPStm = 0; /*0x680f21*/
        result = (***(int (__stdcall ****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680f39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680f3d*/
          break; /*0x680f3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680f45*/
        if ( result < 0 ) /*0x680f4d*/
          break; /*0x680f4d*/
        result = pPStm->__tail_0->Release(pPStm); /*0x680f56*/
        if ( result < 0 ) /*0x680f5b*/
          break; /*0x680f5b*/
        if ( ++v6 >= v9 ) /*0x680f64*/
          return 0; /*0x680f64*/
      }
    }
  }
  return result; /*0x680f68*/
}
} // namespace gamemd

// 0x69B560
namespace gamemd {
bool SaveGame::SaveAudioData(int a2)
{

  int v2; // esi
  int v4; // eax
  bool result; // al
  int v6; // [esp-Ch] [ebp-18h]

  v2 = a2; /*0x69b561*/
  result = 0; /*0x69b59a*/
  if ( a2 ) /*0x69b56a*/
  {
    v4 = *(unsigned int *)a2; /*0x69b56c*/
    v6 = a2; /*0x69b577*/
    a2 = 300; /*0x69b578*/
    if ( (*(int (**)(int, int *, int, unsigned int))(v4 + 16))(v6, &a2, 4, 0) >= 0 /*0x69b597*/
      && (*(int (**)(int, void *, int, unsigned int))(*(unsigned int *)v2 + 16))(v2, this, a2, 0) >= 0 )
    {
      return 1; /*0x69b56a*/
    }
  }
  return result; /*0x69b599*/

}
} // namespace gamemd

// 0x721010
namespace gamemd {
int SaveGame::VtableDispatch(int a2)
{

  int result; // eax

  result = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, (int)(unsigned int *)this + 4, 4, 0); /*0x721023*/
  if ( result >= 0 ) /*0x721028*/
    return (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, (int)(unsigned int *)this + 8, 4, 0); /*0x721035*/
  return result; /*0x721038*/

}
} // namespace gamemd

// 0x7533B0
namespace gamemd {
int SaveGame::WriteMagicHeader()
{

  int v2; // eax
  int result; // eax
  int v4; // edx
  int v5; // [esp+10h] [ebp-4h] BYREF

  v2 = *this; /*0x7533ba*/
  v5 = 1450145875; /*0x7533c0*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v2 + 16))(this, &v5, 4, 0); /*0x7533c8*/
  if ( result >= 0 ) /*0x7533cd*/
  {
    v4 = *this; /*0x7533cf*/
    v5 = 1450145861; /*0x7533db*/
    return (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(this, &v5, 4, 0); /*0x7533e3*/
  }
  return result; /*0x7533e6*/

}
} // namespace gamemd
