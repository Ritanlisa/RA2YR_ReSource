// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Function_e4.hpp"
#include "e4/classes/DroppodLocomotionClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DropPodLocomotionClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_AnimType_e4.hpp"
#include "e4/classes/DynamicVectorClass_SubzoneConn_e4.hpp"
#include "e4/classes/Return_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DynamicVectorClass_PAD_e4.hpp"
#include "e4/classes/DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Byte_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern const IID IID_ILocomotion;  // data: 0x7ed358 truth(IDA G42.57w9)


// 0x4B5B70
namespace gamemd {
int DroppodLocomotionClass::ILoco_Process(int a1)
{

  double v1; // st7
  FootClass *Owner; // ecx
  int v4; // esi
  int v5; // eax
  double v6; // rax
  double v7; // st7
  int v8; // eax
  FootClass *v9; // ecx
  int v10; // eax
  FootClass *v11; // esi
  char *v12; // ebx
  int *locomotor; // ebp
  AnimClass *v14; // esi
  void *v15; // eax
  AnimClass *v17; // eax
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  unsigned int *v20; // esi
  AnimClass *v21; // ebp
  int Index; // eax
  CellClass *v23; // eax
  int ClosestObjectCell; // eax
  int *v25; // eax
  unsigned int v26; // ebp
  unsigned int v27; // eax
  AnimClass *v28; // edi
  void *WarheadVersusMultiplier; // eax
  double v30; // [esp-8h] [ebp-48h]
  void *v31; // [esp-8h] [ebp-48h]
  void *v32; // [esp-8h] [ebp-48h]
  double v33; // [esp+10h] [ebp-30h] BYREF
  int v34[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v35; // [esp+24h] [ebp-1Ch]
  int v36; // [esp+28h] [ebp-18h] BYREF
  int v37; // [esp+2Ch] [ebp-14h]
  int v38; // [esp+30h] [ebp-10h]
  int v39[3]; // [esp+34h] [ebp-Ch] BYREF
  DropPodLocomotionClass *thisa; // [esp+44h] [ebp+4h]

  Owner = (gamemd::FootClass *)(((unsigned int *)a1)[0]); /*0x4b5b7b*/
  v36 = ((unsigned int *)Owner)[0]; /*0x4b5b88*/
  v37 = ((unsigned int *)Owner)[1]; /*0x4b5b8f*/
  v4 = ((unsigned int *)Owner)[2]; /*0x4b5b93*/
  v39[0] = v36; /*0x4b5b96*/
  v38 = v4; /*0x4b5b9a*/
  v39[1] = v37; /*0x4b5b9e*/
  v39[2] = v4; /*0x4b5ba2*/
  thisa = (DropPodLocomotionClass *)((*((int (**)(FootClass *))Owner->vtable1 + 114))( (FootClass *)(Owner)) / 10 + 2); /*0x4b5bc9*/
  if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1452) > (int)thisa ) /*0x4b5bd5*/
    thisa = *(DropPodLocomotionClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1452); /*0x4b5bd7*/
  v30 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b5bf3*/
  if ( !a1->__pad_18[0] ) /*0x4b5bdb*/
    *(double *)v34 = (double)v36; /*0x4b5c1c*/
  v33 = (double)(int)thisa; /*0x4b5bf4*/
  Math::ArcTan2(v30); /*0x4b5bf8*/
  LOWORD(v5) = Math::RoundToInt(v1); /*0x4b5c38*/
  v36 = v5; /*0x4b5c41*/
  v6 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b5c50*/
  *(double *)v34 = (double)v38; /*0x4b5c56*/
  Math::SinCos(v6); /*0x4b5c5c*/
  v7 = *(double *)v34 - v1 * v33; /*0x4b5c68*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x4b5c6c*/
  v9 = (gamemd::FootClass *)(((unsigned int *)a1)[0]); /*0x4b5c71*/
  v38 = v8; /*0x4b5c74*/
  v10 = (*((int (**)(FootClass *))v9->vtable1 + 114))( (FootClass *)(v9)); /*0x4b5c7a*/
  v11 = (gamemd::FootClass *)(((unsigned int *)a1)[0]); /*0x4b5c80*/
  if ( v10 > 0 ) /*0x4b5c87*/
  {
    (*((void (**)(FootClass *, int *))v11->vtable1 + 109))( (FootClass *)(v11), (int *)(&v36)); /*0x4b5eaa*/
    v20 = *(unsigned int **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1444); /*0x4b5eb6*/
    if ( v20 ) /*0x4b5ebe*/
    {
      if ( !(*(unsigned int *)((char *)&stru_A8EB00 + 416) % 6) ) /*0x4b5ecf*/
      {
        v21 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5edf*/
        if ( v21 ) /*0x4b5ee6*/
        {
          Index = ((AnimTypeClass *)(&stru_820320))->FindIndex(); /*0x4b5eed*/
          ((AnimClass *)(v21))->ctor( *(void **)(*((unsigned int *)((char *)&FootClass_Array + 3)) + 4 * Index), (int *)(v39), 0, 1, (void *)0x600, 0, 0); /*0x4b5f0f*/
        }
      }
      if ( !(*(unsigned int *)((char *)&stru_A8EB00 + 416) % 3) ) /*0x4b5f1f*/
      {
        v33 = 0.0; /*0x4b5f39*/
        v23 = (CellClass *)((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a1->IsOutOfMap); /*0x4b5f41*/
        ClosestObjectCell = ((Object *)((Object *)v23))->FindClosestObjectCell( (unsigned int *)(&v33), 0, 0); /*0x4b5f48*/
        if ( !(uint8_t)((Object *)((Object *)((unsigned int *)a1)[0]))->IsAlliedWithObjectHouse(ClosestObjectCell) ) /*0x4b5f57*/
        {
          v25 = RandomCoordScatter((int *)&v33,(IUnknown *)((int *)&a1->IsOutOfMap), v7, 85, 0); /*0x4b5f6d*/
          v26 = v20[51]; /*0x4b5f74*/
          v34[0] = *v25; /*0x4b5f7a*/
          v34[1] = v25[1]; /*0x4b5f86*/
          v35 = (unsigned int)(v25[2]); /*0x4b5f8d*/
          v27 = ((Random *)(&Randomizer_Global))->State(); /*0x4b5f91*/
          StartAudioControllerAt(*(unsigned int *)(v20[48] + 4 * (v27 % v26)),(unsigned int *)(&v36), 0); /*0x4b5fa8*/
          PlaySoundEffectAt( (TechnoClass *)(v34), 2 * v20[41], (unsigned int *)(&((unsigned int *)a1)[0]->TechnoClass), v20[43], 1, 0); /*0x4b5fc7*/
          v28 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5fd6*/
          if ( v28 ) /*0x4b5fdd*/
          {
            v32 = (void *)Return::HRESULT_Fail((gamemd::BulletClass *)(v34[0]), v34[1], v35); /*0x4b5ffe*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(2 * v20[41], v20[43], 0,(gamemd::BulletClass *)(v34)); /*0x4b6020*/
            ((AnimClass *)(v28))->ctor( (void *)(WarheadVersusMultiplier), (int *)(v34), 0, 1, (void *)0x2600, (void *)(v32), 0); /*0x4b6028*/
          }
        }
      }
    }
    return 1; /*0x4b6030*/
  }
  else
  {
    (*((void (**)(FootClass *, unsigned int))v11->vtable1 + 115))( (FootClass *)(v11), 0); /*0x4b5c92*/
    v36 = ((unsigned int *)v11)[0]; /*0x4b5ca4*/
    v37 = ((unsigned int *)v11)[1]; /*0x4b5cab*/
    v38 = ((unsigned int *)v11)[2]; /*0x4b5cb2*/
    (*((void (**)(FootClass *))v11->vtable1 + 53))( (FootClass *)(v11)); /*0x4b5cba*/
    v12 = (char *)a1 - 4; /*0x4b5cc3*/
    (*(void (**)(char *))(*((unsigned int *)a1 - 1) + 4))((char *)a1 - 4); /*0x4b5cc7*/
    locomotor = ((unsigned int *)a1)[0]->locomotor; /*0x4b5ccd*/
    if ( *locomotor ) /*0x4b5cd3*/
      (*(void (**)(int))(*(unsigned int *)*locomotor + 8))(*locomotor); /*0x4b5cdd*/
    *locomotor = 0; /*0x4b5ce3*/
    (*(void (**)(int *, int *))(((unsigned int *)a1)[0] + 16))( (int *)(&((unsigned int *)a1)[0]), (int *)(locomotor)); /*0x4b5cee*/
    if ( (*((uint8_t (**)(FootClass *, int *, unsigned int))v11->vtable1 + 54))( (FootClass *)(v11), (int *)(&v36), 0) ) /*0x4b5cfc*/
    {
      v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5dae*/
      if ( v17 ) /*0x4b5db8*/
        ((AnimClass*)/*0x4b5dd8*/
          v17)->ctor(/*0x4b5dd8*/ *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 76), &v36, 0, 1, (void *)0x600, 0, 0);
      if ( a1->__pad_18[0] ) /*0x4b5ddd*/
      {
        v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5de9*/
        if ( v18 ) /*0x4b5df3*/
          AnimClass::ctor( /*0x4b5e16*/
            v18,
            *(void **)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 264) + 4),
            &v36,
            0,
            1,
            (void *)0x600,
            0,
            0);
      }
      else
      {
        v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5e18*/
        if ( v19 ) /*0x4b5e22*/
          AnimClass::ctor( /*0x4b5e47*/
            v19,
            **(void ***)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 264),
            &v36,
            0,
            1,
            (void *)0x600,
            0,
            0);
      }
      (*((void (**)(FootClass *, int))v11->vtable1 + 73))( (FootClass *)(v11), 1); /*0x4b5e52*/
      (*((void (**)(FootClass *, unsigned int))v11->vtable1 + 115))( (FootClass *)(v11), 0); /*0x4b5e5e*/
      (*((void (**)(FootClass *, unsigned int, int))v11->vtable1 + 289))( (FootClass *)(v11), 0, 1); /*0x4b5e6c*/
      (*((void (**)(FootClass *))v11->vtable1 + 123))( (FootClass *)(v11)); /*0x4b5e76*/
      (*((void (**)(FootClass *, int *, unsigned int, unsigned int))v11->vtable1 + 93))( (FootClass *)(v11), (int *)&dword_8A0820, 0, 0); /*0x4b5e89*/
    }
    else
    {
      PlaySoundEffectAt( /*0x4b5d28*/
        &v36,
        100,
        &((unsigned int *)a1)[0]->TechnoClass,
        *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
        1,
        0);
      v14 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5d37*/
      if ( v14 ) /*0x4b5d3e*/
      {
        v31 = (void *)Return::HRESULT_Fail((gamemd::BulletClass *)(v36), v37, v38); /*0x4b5d64*/
        v15 = (void *)GetWarheadVersusMultiplier(/*0x4b5d8a*/
                        100, *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 0, (gamemd::BulletClass *)(&v36));
        ((AnimClass *)(v14))->ctor( (void *)(v15), (int *)(&v36), 0, 1, (void *)0x2600, (void *)(v31), 0); /*0x4b5d92*/
        (*(void (**)(char *))(*(unsigned int *)v12 + 8))((char *)a1 - 4); /*0x4b5d9a*/
        return 1; /*0x4b5da6*/
      }
    }
    (*(void (**)(char *))(*(unsigned int *)v12 + 8))((char *)a1 - 4); /*0x4b5e92*/
    return 1; /*0x4b5e95*/
  }

}
}
// 0x4B6200
namespace gamemd {  // G42.18c ns repair
int DropPodLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x4b6206*/
    return -2147467261; /*0x4b6208*/
  *(IID *)a2 = (unsigned int)g_CLSID_DriveLocomotion; /*0x4b6216*/
  a2[3] = unk_7E9A7C; /*0x4b6230*/
  return 0; /*0x4b620d*/

}
}  // G42.18c ns repair
// 0x4B6240
namespace gamemd {  // G42.18c ns repair
HRESULT DropPodLocomotionClass::BeginMove(int * a1, int * pStm)
{

  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x4b6247*/
  v3 = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, pStm); /*0x4b6252*/
  if ( v3 < 0 ) /*0x4b6256*/
    return v3; /*0x4b6256*/
  if ( a1 ) /*0x4b625a*/
  {
    a1->Piggybackee = 0; /*0x4b625c*/
    *(unsigned int *)a1->LocomotionClass = (unsigned int)&vt_DropPodLocomotionClass;
    *(unsigned int *)&a1->LocomotionClass[4] = (unsigned int)&vt_DropPodLocomotionClass;
    *(unsigned int *)a1->__pad_18 = (unsigned int)&vt_DropPodLocomotionClass;
  }
  (*(void (**)(int *, int **, int, unsigned int))(*v2 + 12))( (int *)(v2), (int **)(&pStm), 1, 0); /*0x4b6283*/
  if ( !(unsigned char)pStm ) /*0x4b628c*/
    return v3; /*0x4b62b8*/
  Piggybackee = a1->Piggybackee; /*0x4b628e*/
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x4b6291*/
  if ( Piggybackee ) /*0x4b6296*/
    (*(void (**)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))( (ILocomotion *)(Piggybackee)); /*0x4b629b*/
  *p_Piggybackee = 0; /*0x4b62a5*/
  return OleLoadFromStream((LPSTREAM)v2, (void *)(&IID_ILocomotion), p_Piggybackee); /*0x4b62b1*/

}
}  // G42.18c ns repair
// 0x4B62C0
namespace gamemd {  // G42.18c ns repair
HRESULT DropPodLocomotionClass::UpdateMovement(int * a1, int * pPStm, int a3)
{

  IStream *v3; // esi
  DropPodLocomotionClass *v4; // edi
  int result; // eax
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v11; // edx

  v3 = (IStream *)pPStm; /*0x4b62c5*/
  v4 = (gamemd::DropPodLocomotionClass *)(a1); /*0x4b62ca*/
  result = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x4b62d1*/
  if ( result >= 0 ) /*0x4b62d8*/
  {
    if ( v4->Piggybackee ) /*0x4b62de*/
    {
      v6 = *(unsigned int *)&((gamemd::IStream*)v3)->q000; /*0x4b62e9*/
      LOBYTE(a3) = 1; /*0x4b62f5*/
      (*(void (**)(IStream *, int *, int, unsigned int))(v6 + 16))( (IStream *)(v3), (int *)(&a3), 1, 0); /*0x4b62fa*/
      Piggybackee = v4->Piggybackee; /*0x4b62fd*/
      pPStm = (int *)(0); /*0x4b6300*/
      if ( Piggybackee ) /*0x4b630a*/
      {
        v8 = (**(int (***)(ILocomotion *, void *, DropPodLocomotionClass **))Piggybackee)( /*0x4b631b*/
               Piggybackee,
               &unk_820270,
               &a1);
        if ( v8 >= 0 ) /*0x4b631f*/
        {
          v9 = (int *)a1; /*0x4b6339*/
          if ( pPStm ) /*0x4b633f*/
            (*(void (**)(int *))(*pPStm + 8))( (int *)(pPStm)); /*0x4b6344*/
          pPStm = v9; /*0x4b6347*/
        }
        else
        {
          ((Function *)((int *)&pPStm))->Method_4B4D60(); /*0x4b6325*/
          pPStm = (int *)(0); /*0x4b632a*/
        }
        if ( v8 < 0 && v8 != -2147467262 ) /*0x4b6356*/
          WinAPI::Wrapper(v8); /*0x4b6359*/
      }
      v10 = OleSaveToStream( (LPPERSISTSTREAM)pPStm, (void *)(v3)); /*0x4b636a*/
      if ( pPStm ) /*0x4b6372*/
        (*(void (**)(int *))(*pPStm + 8))( (int *)(pPStm)); /*0x4b6377*/
      return v10; /*0x4b637a*/
    }
    else
    {
      v11 = *(unsigned int *)&((gamemd::IStream*)v3)->q000; /*0x4b6381*/
      LOBYTE(a3) = 0; /*0x4b638d*/
      return (*(int (**)(IStream *, int *, int, unsigned int))(v11 + 16))( (IStream *)(v3), (int *)(&a3), 1, 0); /*0x4b6392*/
    }
  }
  return result; /*0x4b637c*/

}
}  // G42.18c ns repair
// 0x4B66E0
namespace gamemd {  // G42.18c ns repair
int DropPodLocomotionClass::StubReturn48()
{

  return 48; /*0x4b66e5*/

}
}  // G42.18c ns repair
// 0x4B66F0
namespace gamemd {
void * DroppodLocomotionClass::ProcessMove(void ** Block, char a2)
{
    ILocomotion *Piggybackee; // eax

    *(unsigned int *)this->LocomotionClass = (unsigned int)(void*)&DropPodLocomotionClass_vftable; /*0x4b66f3*/
    *(unsigned int *)&this->LocomotionClass[4] = (unsigned int)(void*)&DropPodLocomotionClass_vftable; /*0x4b66f9*/
    *(unsigned int *)this->__pad_18 = (unsigned int)(void*)&DropPodLocomotionClass_vftable; /*0x4b6700*/
    Piggybackee = this->Piggybackee; /*0x4b6707*/
    if ( Piggybackee ) /*0x4b670c*/
      (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x4b6711*/
    ((LocomotionClass *)this)->Construct(); /*0x4b6716*/
    if ( (a2 & 1) != 0 ) /*0x4b6720*/
      RA2_OPDEL(this); /*0x4b6723*/
    return this->LocomotionClass; /*0x4b672d*/
}
} // namespace gamemd