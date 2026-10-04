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
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/IPersistStream_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"

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
  v8 = *(unsigned int *)&this->__pad_0[16]; /*0x4391d9*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &v8, 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = *(unsigned int *)&this->__pad_0[40]; /*0x43921b*/
      result = (*(int (**)(int *, int *, int, unsigned int))(v6 + 16))(a2, &v8, 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))( /*0x43923e*/
                     a2,
                     *(unsigned int *)&this->__pad_0[28] + 4 * i,
                     4,
                     0);
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))( /*0x4391fc*/
                   a2,
                   *(unsigned int *)&this->__pad_0[4] + 4 * v5,
                   4,
                   0);
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
  v6 = *(unsigned int *)&this->__pad_0[28]; /*0x54e769*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &v6, 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (**)(int *, unsigned int, int, unsigned int))(*a2 + 16))( /*0x54e78c*/
                 a2,
                 *(unsigned int *)(*(unsigned int *)&this->__pad_0[16] + 4 * i),
                 8,
                 0);
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6607D0)
}
}
// 0x67D300
namespace gamemd {
char SaveGame::Start()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67D300)
}
} // namespace gamemd

// 0x67F7E0
namespace gamemd {
int SaveGame::LoadMainGameState()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67F7E0)
}
}
// 0x74ED60
namespace gamemd {
int SaveGame::LoadVeinholeData()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74ED60)
}
}
// 0x751620
namespace gamemd {
int SaveGame::SaveAudioQueueItems()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751620)
}
}
// 0x4073B0
namespace gamemd {
int SaveGame::CountLinkedList(void *a1_1)
{

  SaveGame *v1; // edx
  int result; // eax

  v1 = *(SaveGame **)this->__pad_0; /*0x4073b0*/
  for ( result = 0; v1 != this; ++result ) /*0x4073b6*/
    v1 = *(SaveGame **)v1->__pad_0; /*0x4073b8*/
  return result; /*0x4073bf*/

}
} // namespace gamemd

// 0x413850
namespace gamemd {
int SaveGame::SaveIteratedData(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x413850)
}
} // namespace gamemd

// 0x4C6340
namespace gamemd {
int SaveGame::SaveBlock68(int a2)
{

  return (*(int (**)(int, SaveGame *, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, this, 68, 0); /*0x4c634f*/

}
} // namespace gamemd

// 0x513CB0
namespace gamemd {
int SaveGame::WriteObject(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x513CB0)
}
} // namespace gamemd

// 0x67FDF0
namespace gamemd {
HRESULT SaveGame_Start(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67FDF0)
}
} // namespace gamemd

// 0x67FE70
namespace gamemd {
HRESULT SaveGame_Start_67FE70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x67fe83*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67feb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67febd*/
          break; /*0x67febd*/
        result = OleSaveToStream(pPStm, pStm); /*0x67fec5*/
        if ( result < 0 ) /*0x67fecd*/
          break; /*0x67fecd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x67fed6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x67ff03*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ff39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ff3d*/
          break; /*0x67ff3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x67ff45*/
        if ( result < 0 ) /*0x67ff4d*/
          break; /*0x67ff4d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x67ff56*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x67ff83*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ffb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ffbd*/
          break; /*0x67ffbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x67ffc5*/
        if ( result < 0 ) /*0x67ffcd*/
          break; /*0x67ffcd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x67ffd6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680003*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680039*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68003d*/
          break; /*0x68003d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680045*/
        if ( result < 0 ) /*0x68004d*/
          break; /*0x68004d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680056*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680083*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6800b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6800bd*/
          break; /*0x6800bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6800c5*/
        if ( result < 0 ) /*0x6800cd*/
          break; /*0x6800cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6800d6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680103*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680139*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68013d*/
          break; /*0x68013d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680145*/
        if ( result < 0 ) /*0x68014d*/
          break; /*0x68014d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680156*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680183*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6801b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6801bd*/
          break; /*0x6801bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6801c5*/
        if ( result < 0 ) /*0x6801cd*/
          break; /*0x6801cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6801d6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680203*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680239*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68023d*/
          break; /*0x68023d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680245*/
        if ( result < 0 ) /*0x68024d*/
          break; /*0x68024d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680256*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680283*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6802b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6802bd*/
          break; /*0x6802bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6802c5*/
        if ( result < 0 ) /*0x6802cd*/
          break; /*0x6802cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6802d6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680303*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680339*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68033d*/
          break; /*0x68033d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680345*/
        if ( result < 0 ) /*0x68034d*/
          break; /*0x68034d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680356*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680383*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6803b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6803bd*/
          break; /*0x6803bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6803c5*/
        if ( result < 0 ) /*0x6803cd*/
          break; /*0x6803cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6803d6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680403*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680439*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68043d*/
          break; /*0x68043d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680445*/
        if ( result < 0 ) /*0x68044d*/
          break; /*0x68044d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680456*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680483*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6804b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6804bd*/
          break; /*0x6804bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6804c5*/
        if ( result < 0 ) /*0x6804cd*/
          break; /*0x6804cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6804d6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680503*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680539*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68053d*/
          break; /*0x68053d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680545*/
        if ( result < 0 ) /*0x68054d*/
          break; /*0x68054d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680556*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680583*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6805b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6805bd*/
          break; /*0x6805bd*/
        result = OleSaveToStream(pPStm, pStm); /*0x6805c5*/
        if ( result < 0 ) /*0x6805cd*/
          break; /*0x6805cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6805d6*/
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
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl =(struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680603*/
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
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680639*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68063d*/
          break; /*0x68063d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680645*/
        if ( result < 0 ) /*0x68064d*/
          break; /*0x68064d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680656*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680670)
}
} // namespace gamemd

// 0x6806F0
namespace gamemd {
HRESULT SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6806F0)
}
} // namespace gamemd

// 0x680770
namespace gamemd {
HRESULT SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680770)
}
} // namespace gamemd

// 0x6807F0
namespace gamemd {
HRESULT SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6807F0)
}
} // namespace gamemd

// 0x680870
namespace gamemd {
HRESULT SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680870)
}
} // namespace gamemd

// 0x6808F0
namespace gamemd {
HRESULT SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6808F0)
}
} // namespace gamemd

// 0x680970
namespace gamemd {
HRESULT SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680970)
}
} // namespace gamemd

// 0x6809F0
namespace gamemd {
HRESULT SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6809F0)
}
} // namespace gamemd

// 0x680A70
namespace gamemd {
HRESULT SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680A70)
}
} // namespace gamemd

// 0x680AF0
namespace gamemd {
HRESULT SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680AF0)
}
} // namespace gamemd

// 0x680B70
namespace gamemd {
HRESULT SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680B70)
}
} // namespace gamemd

// 0x680BF0
namespace gamemd {
HRESULT SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680BF0)
}
} // namespace gamemd

// 0x680C70
namespace gamemd {
HRESULT SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680C70)
}
} // namespace gamemd

// 0x680CF0
namespace gamemd {
HRESULT SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680CF0)
}
} // namespace gamemd

// 0x680D70
namespace gamemd {
HRESULT SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680D70)
}
} // namespace gamemd

// 0x680DF0
namespace gamemd {
HRESULT SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680DF0)
}
} // namespace gamemd

// 0x680E70
namespace gamemd {
HRESULT SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680E70)
}
} // namespace gamemd

// 0x680EF0
namespace gamemd {
HRESULT SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x680EF0)
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
      && (*(int (**)(int, SaveGame *, int, unsigned int))(*(unsigned int *)v2 + 16))(v2, this, a2, 0) >= 0 )
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

  result = (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, (char *)&this->__pad_0[4], 4, 0); /*0x721023*/
  if ( result >= 0 ) /*0x721028*/
    return (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, (char *)&this->__pad_0[8], 4, 0); /*0x721035*/
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

  v2 = *(unsigned int *)this->__pad_0; /*0x7533ba*/
  v5 = 1450145875; /*0x7533c0*/
  result = (*(int (**)(SaveGame *, int *, int, unsigned int))(v2 + 16))(this, &v5, 4, 0); /*0x7533c8*/
  if ( result >= 0 ) /*0x7533cd*/
  {
    v4 = *(unsigned int *)this->__pad_0; /*0x7533cf*/
    v5 = 1450145861; /*0x7533db*/
    return (*(int (**)(SaveGame *, int *, int, unsigned int))(v4 + 16))(this, &v5, 4, 0); /*0x7533e3*/
  }
  return result; /*0x7533e6*/

}
} // namespace gamemd
