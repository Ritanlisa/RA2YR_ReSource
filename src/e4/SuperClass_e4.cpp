// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"

// 0x53AE50
namespace gamemd {  // G42.18 ns repair
void * SuperClass::LaunchPsychicDominator(int a2)
{


  RulesClass *result; // eax
  result = *(RulesClass **)&g_RulesClass_Instance; /*0x53ae50*/
  if ( *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 764) /*0x53ae66*/
    && *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 768) )
  {
    PsyDom_Owner = (int)((House *)this); /*0x53ae79*/
    *(unsigned int *)&PsyDom_Coords = a2; /*0x53ae7f*/
    void *v3; // esi
    v3 = *(void **)(*(unsigned int *)&g_RulesClass_Instance + 764); /*0x53ae85*/
    void *v4; // eax
    v4 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(&PsyDom_Coords); /*0x53ae95*/
    int *v5; // eax
    unsigned int v9[3]; // [esp+10h] [ebp-Ch] BYREF
    v5 = (int *)(*(int (**)(void *, unsigned int *))(*(unsigned int *)v4 + 72))(v4, v9); /*0x53aea3*/
    int v8[3]; // [esp+4h] [ebp-18h] BYREF
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    AnimClass *v6; // eax
    v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      PsyDom_Anim = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      PsyDom_Anim = 0; /*0x53aef1*/
    AbstractClass *v7; // edx
    v7 = (gamemd::AbstractClass *)(dword_A8B230 + 130); /*0x53af06*/
    PsyDom_Status = 1; /*0x53af0c*/
    dword_A8B230[130].vtable0 = *(void **)&DataGlobal_A8EB00[644]; /*0x53af1b*/
    v7->ptr_0 = v9->ptr_2; /*0x53af21*/
    v7->ptr_4 = (void *)1; /*0x53af24*/
    return (RulesClass *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return result; /*0x53af2d*/

}
}  // G42.18 ns repair
// 0x6CAEC0
namespace gamemd {
int SuperClass::Constructor(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{


  ((AbstractClass *)a1)->Constructor(); /*0x6caec3*/
  a1->SuperClass_field_0x24 = (void *)-1; /*0x6caecd*/
  a1->SuperClass_field_0x28 = 0; /*0x6caed0*/
  a1->SuperClass_field_0x2C = 0; /*0x6caed3*/
  a1->SuperClass_field_0x30 = *(void **)&DataGlobal_A8EB00[644]; /*0x6caedc*/
  a1->SuperClass_field_0x38 = 0; /*0x6caedf*/
  *(unsigned int *)&a1->__pad_3C[12] = 0; /*0x6caee2*/
  a1->__pad_3C[4] = 0; /*0x6caee5*/
  *(unsigned int *)&a1->__pad_3C[16] = 0; /*0x6caee8*/
  *(unsigned int *)&a1->__pad_3C[20] = -1; /*0x6caeeb*/
  LOBYTE(a1->SuperClass_field_0x60) = 1; /*0x6caeee*/
  *(void **)((char *)&a1->SuperClass_field_0x60 + 2) = (void *)dword_B0C000; /*0x6caef8*/
  a1->SuperClass_field_0x68 = 0; /*0x6caefb*/
  LOBYTE(a1->SuperClass_field_0x6C) = 0; /*0x6caefe*/
  BYTE1(a1->SuperClass_field_0x6C) = 0; /*0x6caf01*/
  BYTE2(a1->SuperClass_field_0x6C) = 0; /*0x6caf04*/
  HIBYTE(a1->SuperClass_field_0x6C) = 0; /*0x6caf07*/
  LOBYTE(a1->SuperClass_field_0x70) = 0; /*0x6caf0a*/
  a1->SuperClass_field_0x7C = (void *)-1; /*0x6caf0d*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_SuperClass) */  /*0x6caf10*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_SuperClass) */  /*0x6caf16*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_SuperClass) */  /*0x6caf1d*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_SuperClass) */  /*0x6caf24*/
  *(unsigned int *)a1->__pad_3C = &g_TypeClass_DefaultString; /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    int v2; // eax
    v2 = dword_A83CC8++; /*0x6caf71*/
    *((unsigned int *)dword_A83CBC + v2) = (unsigned int)(a1); /*0x6caf80*/
  }
  return (int)a1; /*0x6caf85*/

}
}
// 0x6CAF90
namespace gamemd {
int SuperClass::Construct(int a2, CCINIClass * aP2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  ((AbstractClass *)aP2)->Constructor(); /*0x6caf94*/
  aP2->BufferSize = aP2; /*0x6cafa4*/
  aP2->BufferOffset = -1; /*0x6cafa7*/
  aP2->BufferPosition = a3; /*0x6cafaa*/
  aP2->FileBaseOffset = dword_A8ED84; /*0x6cafb5*/
  aP2->StreamSize = 0; /*0x6cafb8*/
  aP2->TotalBytesWritten = 0; /*0x6cafbb*/
  aP2->BufferCursor = 0; /*0x6cafbe*/
  aP2->FileID = 0; /*0x6cafc1*/
  aP2->MixFileIndex = -1; /*0x6cafc4*/
  aP2->q060 = 1; /*0x6cafc7*/
  int v4 = dword_B0C000; // edx /*0x6cafcb*/
  aP2->q078 = -1; /*0x6cafd1*/
  aP2->q07C = -1; /*0x6cafd4*/
  aP2->u32_62 = v4; /*0x6cafda*/
  aP2->u32_68 = 0; /*0x6cafde*/
  aP2->u32_6C = 0; /*0x6cafe1*/
  aP2->u8_6D = 0; /*0x6cafe4*/
  aP2->u8_6E = 0; /*0x6cafe7*/
  aP2->u8_6F = 0; /*0x6cafea*/
  aP2->q070 = 0; /*0x6cafed*/
  aP2->q074 = -100; /*0x6caff0*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_SuperClass) */  /*0x6caff7*/
  /* X11: vtable install elided (X68 star-arith-named, RHS vt_SuperClass) */  /*0x6caffd*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_SuperClass) */  /*0x6cb003*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_SuperClass) */  /*0x6cb00a*/
  (aP2 + 4)->GenerateUniqueID(); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    int v5; // eax
    v5 = dword_A83CC8++; /*0x6cb056*/
    *((unsigned int *)dword_A83CBC + v5) = (unsigned int)(aP2); /*0x6cb065*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6cb09c*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    int v6; // eax
    v6 = dword_B0F680++; /*0x6cb0a9*/
    *((unsigned int *)dword_B0F674 + v6) = (unsigned int)(aP2); /*0x6cb0b8*/
  }
  if ( dword_B0F6D8 < dword_B0F6D0 /*0x6cb0ef*/
    || (byte_B0F6D5 || !dword_B0F6D0)
    && dword_B0F6DC > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_B0F6C8 + 8))(
         &dword_B0F6C8,
         dword_B0F6D0 + dword_B0F6DC,
         0) )
  {
    int v7; // eax
    v7 = dword_B0F6D8++; /*0x6cb0fc*/
    *((unsigned int *)dword_B0F6CC + v7) = (unsigned int)(aP2); /*0x6cb10b*/
  }
  return (int)(aP2); /*0x6cb110*/

}
}
// 0x6CB120
namespace gamemd {
SuperClass * * SuperClass::CleanupMembers(void *a1)
{

  unsigned __int8 *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+14h] [ebp-4h] BYREF

  v2 = *(unsigned __int8 **)(&this->u32_68); /*0x6cb124*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_SuperClass_4) */  /*0x6cb127*/
  /* X11: vtable install elided (legacy slot spelling slot, RHS vt_SuperClass_4) */  /*0x6cb12f*/
  /* X11: vtable install elided (legacy slot spelling slot, RHS vt_SuperClass_4) */  /*0x6cb136*/
  /* X11: vtable install elided (legacy slot spelling slot, RHS vt_SuperClass_4) */  /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    v2[405] = 0; /*0x6cb146*/
    this->u32_68 = 0; /*0x6cb14d*/
    v9 = this; /*0x6cb164*/
    v3 = (*(int (**)(DynamicVectorClass *, int *))(stru_B0F5B8.ptr_0 + 16))(&stru_B0F5B8, &v9); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v3); /*0x6cb176*/
  }
  if ( this->HouseClass_6C ) /*0x6cb17b*/
  {
    v9 = this; /*0x6cb192*/
    v4 = (*(int (**)(DynamicVectorClass *, int *))(stru_B0F5B8.ptr_0 + 16))(&stru_B0F5B8, &v9); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v4); /*0x6cb1a4*/
    this->HouseClass_6C = 0; /*0x6cb1a9*/
  }
  v9 = this; /*0x6cb1bd*/
  v5 = (*(int (**)(char *, int *))(*(unsigned int *)&stru_A83CD9.alignmentPadding75[2] + 16))( /*0x6cb1c1*/
         &stru_A83CD9.alignmentPadding75[2],
         &v9);
  if ( v5 != -1 && v5 < *(int *)&stru_A83CD9.alignmentPadding85[2] ) /*0x6cb1d1*/
  {
    --*(unsigned int *)&stru_A83CD9.alignmentPadding85[2]; /*0x6cb1d6*/
    for ( ; /*0x6cb1dc*/
          v5 < *(int *)&stru_A83CD9.alignmentPadding85[2];
          *(unsigned int *)(*(int *)((char *)&stru_A83CD9.spawnStatus + 3) + 4 * v5 - 4) = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.spawnStatus + 3)
                                                                                               + 4 * v5) )
    {
      ++v5; /*0x6cb1e4*/
    }
  }
  v9 = this; /*0x6cb206*/
  v6 = (*(int (**)(unsigned int *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
  if ( v6 != -1 && v6 < dword_A83CC8 && v6 < --dword_A83CC8 ) /*0x6cb225*/
  {
    do /*0x6cb23d*/
    {
      ++v6; /*0x6cb22d*/
      *((unsigned int *)dword_A83CBC + v6 - 1) = *((unsigned int *)dword_A83CBC + v6); /*0x6cb231*/
    }
    while ( v6 < dword_A83CC8 ); /*0x6cb23d*/
  }
  v9 = this; /*0x6cb24f*/
  v7 = (*(int (**)(DynamicVector *, int *))(*(unsigned int *)stru_B0F670.__pad_0 + 16))(&stru_B0F670, &v9); /*0x6cb253*/
  if ( v7 != -1 && v7 < stru_B0F670.DynamicVector_field_0x10 ) /*0x6cb263*/
  {
    --stru_B0F670.DynamicVector_field_0x10; /*0x6cb268*/
    for ( ; /*0x6cb26e*/
          v7 < stru_B0F670.DynamicVector_field_0x10;
          *(unsigned int *)(*(unsigned int *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v7 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v7) )
    {
      ++v7; /*0x6cb276*/
    }
  }
  v9 = this; /*0x6cb298*/
  v8 = (*(int (**)(DynamicVector *, int *))(*(unsigned int *)stru_B0F6C8.__pad_0 + 16))(&stru_B0F6C8, &v9); /*0x6cb29c*/
  if ( v8 != -1 && v8 < stru_B0F6C8.DynamicVector_field_0x10 ) /*0x6cb2ac*/
  {
    --stru_B0F6C8.DynamicVector_field_0x10; /*0x6cb2b1*/
    for ( ; /*0x6cb2b7*/
          v8 < stru_B0F6C8.DynamicVector_field_0x10;
          *(unsigned int *)(*(unsigned int *)&stru_B0F6C8.DynamicVector_field_0x1[3] + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B0F6C8.DynamicVector_field_0x1[3] + 4 * v8) )
    {
      ++v8; /*0x6cb2bf*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x6cb2d3*/

}
}
// 0x6CB560
namespace gamemd {
AbstractClass * * SuperClass::StartTimer(int aP1, char aP2, char aP3)
{

  char v5; // al
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  unsigned __int8 *v15; // eax
  int DefaultTimer; // eax
  int v17; // eax
  int v18; // ecx
  unsigned __int8 *v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]

  if ( !this->Granted ) /*0x6cb569*/
  {
    v5 = aP1; /*0x6cb572*/
    v6 = this->u32_28; /*0x6cb576*/
    this->Granted = 1; /*0x6cb579*/
    this->OneTime = v5; /*0x6cb57d*/
    this->BlinkState = 0; /*0x6cb580*/
    v7 = *(unsigned int *)(v6 + 96); /*0x6cb583*/
    LOBYTE(aP1) = 0; /*0x6cb589*/
    this->u32_3C = v7; /*0x6cb58d*/
    if ( !v5 && this->q070 && this->q060 ) /*0x6cb597*/
    {
      if ( *(unsigned char *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( this->q030 != -1 ) /*0x6cb5bd*/
        {
          this->u32_38 = Locomotor::GetSpeed(&this->q030); /*0x6cb5c6*/
          this->q030 = -1; /*0x6cb5c9*/
        }
      }
      else if ( this->q030 == -1 ) /*0x6cb5a8*/
      {
        this->q030 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cb5af*/
      }
      this->q070 = 0; /*0x6cb5cf*/
    }
    if ( *(unsigned char *)(this->u32_28 + 244) /*0x6cb61f*/
      && !*(unsigned char *)(*(unsigned int *)(this->u32_2C + 52) + 422)
      && (*(int *)&stru_A83CD9.alignmentPadding85[2] < *(int *)((char *)&stru_A83CD9.visibilityFlags + 3)
       || (stru_A83CD9.hasParachute[0] || !*(int *)((char *)&stru_A83CD9.visibilityFlags + 3))
       && *(int *)((char *)&stru_A83CD9.parachute + 3) > 0
       && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A83CD9.alignmentPadding75[2] + 8))(
            &stru_A83CD9.alignmentPadding75[2],
            *(int *)((char *)&stru_A83CD9.visibilityFlags + 3) + *(int *)((char *)&stru_A83CD9.parachute + 3),
            0)) )
    {
      v8 = (*(unsigned int *)&stru_A83CD9.alignmentPadding85[2])++; /*0x6cb62c*/
      *(unsigned int *)(*(int *)((char *)&stru_A83CD9.spawnStatus + 3) + 4 * v8) = this; /*0x6cb63b*/
    }
    v9 = this->u32_28; /*0x6cb63e*/
    if ( *(unsigned char *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = this->u32_24; /*0x6cb649*/
      this->u32_78 = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(unsigned int *)(v9 + 176); /*0x6cb658*/
      v11 = &this->q030; /*0x6cb664*/
      this->q030 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cb669*/
      this->u32_34 = v22; /*0x6cb66f*/
      this->u32_38 = v10; /*0x6cb672*/
      v12 = this->q030; /*0x6cb675*/
      if ( v12 != -1 ) /*0x6cb67a*/
      {
        v13 = this->u32_38; /*0x6cb680*/
        v14 = *(unsigned int *)&stru_A8E960.random[528] - v12; /*0x6cb68e*/
        if ( *(unsigned int *)&stru_A8E960.random[528] - v12 >= v13 ) /*0x6cb692*/
        {
          this->u32_38 = 0; /*0x6cb6a6*/
          *v11 = -1; /*0x6cb6a9*/
        }
        else
        {
          *v11 = -1; /*0x6cb696*/
          this->u32_38 = v13 - v14; /*0x6cb69c*/
        }
      }
    }
    else
    {
      v15 = *(unsigned __int8 **)(&this->u32_68); /*0x6cb6b4*/
      if ( v15 ) /*0x6cb6b9*/
      {
        v15[405] = 0; /*0x6cb6bf*/
        this->u32_68 = 0; /*0x6cb6cb*/
        aP1 = this; /*0x6cb6ce*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&aP1); /*0x6cb6d2*/
      }
      if ( this->HouseClass_6C ) /*0x6cb6d7*/
      {
        aP1 = this; /*0x6cb6e6*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&aP1); /*0x6cb6ea*/
        this->HouseClass_6C = 0; /*0x6cb6ef*/
      }
      if ( !this->Granted /*0x6cb704*/
        || this->IsCharged
        || this->q070 && !*(unsigned char *)(this->u32_28 + 237) )
      {
        LOBYTE(aP1) = 0; /*0x6cb757*/
      }
      else
      {
        this->u32_78 = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame(&this->q030); /*0x6cb718*/
        DefaultTimer = Super::GetDefaultTimer((Super *)this); /*0x6cb71f*/
        Timer::Start((Timer *)&v21, DefaultTimer); /*0x6cb729*/
        v17 = v22; /*0x6cb732*/
        v18 = v23; /*0x6cb736*/
        this->q030 = v21; /*0x6cb73a*/
        v19 = *(unsigned __int8 **)(&this->u32_28); /*0x6cb73c*/
        this->u32_34 = v17; /*0x6cb73f*/
        this->u32_38 = v18; /*0x6cb742*/
        if ( v19[229] ) /*0x6cb745*/
          this->u32_7C = 0; /*0x6cb74d*/
        LOBYTE(aP1) = 1; /*0x6cb750*/
      }
    }
    if ( aP3 && this->Granted ) /*0x6cb764*/
    {
      if ( this->OneTime ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( this->q070 != 1 ) /*0x6cb772*/
      {
        if ( this->q060 ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown(&this->q030); /*0x6cb77c*/
          this->q070 = 1; /*0x6cb781*/
        }
      }
    }
    if ( !this->OneTime ) /*0x6cb788*/
      return aP1; /*0x6cb79f*/
LABEL_45:
    SuperClass::AnnounceReady(this, aP2); /*0x6cb78a*/
    return aP1; /*0x6cb791*/
  }
  return 0; /*0x6cb79a*/

}
}
// 0x6CB7B0
namespace gamemd {
int SuperClass::Lose()
{


  SuperClass *v3; // [esp+0h] [ebp-4h] BYREF
  v3 = this; /*0x6cb7b0*/
  if ( !(((this->HouseClass_6C) >> 8) & 0xFF) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  HIBYTE(this->HouseClass_6C) = 0; /*0x6cb7ba*/
  (this->HouseClass_6C) = ((this->HouseClass_6C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  int v1; // eax
  v1 = (*((int (**)(SuperClass *, SuperClass **))SuperClass_ShowTimers + 4))(&stru_A83D50, &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < (int)DataGlobal_A83D60 ) /*0x6cb7e4*/
  {
    --DataGlobal_A83D60; /*0x6cb7e9*/
    for ( ; /*0x6cb7ef*/
    v1 < (int)DataGlobal_A83D60;
    *((unsigned int *)DataGlobal_A83D54 + v1 - 1) = *((unsigned int *)DataGlobal_A83D54 + v1) )
    {
      ++v1; /*0x6cb7f7*/
    }
  }
  return 1; /*0x6cb80c*/

}
}
// 0x6CB830
namespace gamemd {
char SuperClass::StopPreclickAnim(int aP1)
{

  unsigned __int8 *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v8[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = *(unsigned __int8 **)(&this->u32_68); /*0x6cb839*/
  if ( v3 ) /*0x6cb83e*/
  {
    v3[405] = 0; /*0x6cb840*/
    this->u32_68 = 0; /*0x6cb846*/
    v8[0] = this; /*0x6cb859*/
    v4 = (*(int (**)(DynamicVectorClass *, unsigned int *))(stru_B0F5B8.ptr_0 + 16))(&stru_B0F5B8, v8); /*0x6cb85d*/
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v4); /*0x6cb86b*/
  }
  if ( this->HouseClass_6C ) /*0x6cb870*/
  {
    v8[0] = this; /*0x6cb885*/
    v5 = (*(int (**)(DynamicVectorClass *, unsigned int *))(stru_B0F5B8.ptr_0 + 16))(&stru_B0F5B8, v8); /*0x6cb889*/
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v5); /*0x6cb897*/
    this->HouseClass_6C = 0; /*0x6cb89c*/
  }
  if ( !this->Granted /*0x6cb8b1*/
    || this->IsCharged
    || this->q070 && !*(unsigned char *)(this->u32_28 + 237) )
  {
    return 0; /*0x6cb90d*/
  }
  this->u32_78 = -1; /*0x6cb8b9*/
  if ( this->q030 == -1 ) /*0x6cb8c6*/
    this->q030 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cb8ce*/
  v6 = this->u32_24; /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(unsigned int *)(this->u32_28 + 176); /*0x6cb8dc*/
  this->q030 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cb8e7*/
  this->u32_34 = v8[2]; /*0x6cb8ee*/
  this->u32_38 = v6; /*0x6cb8f1*/
  if ( *(unsigned char *)(this->u32_28 + 229) ) /*0x6cb8f7*/
    this->u32_7C = 0; /*0x6cb8ff*/
  return 1; /*0x6cb902*/

}
}
// 0x6CB920
namespace gamemd {
int SuperClass::ClickFire(int a2, short * a3)
{

  int v4; // eax
  int v5; // eax
  __int16 *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  unsigned int *v10; // esi
  int v11; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  int v16; // ebp
  int v17; // eax
  int v18; // edx
  int *v19; // edi
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  unsigned __int8 *v28; // eax
  int v29; // ecx
  int v30; // [esp+14h] [ebp-8h]

  v4 = this->u32_28; /*0x6cb92a*/
  if ( *(unsigned char *)(v4 + 229) ) /*0x6cb92d*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer(*&this->u32_2C) ) /*0x6cb93c*/
    {
      v5 = this->u32_7C; /*0x6cb949*/
      if ( v5 == 2 ) /*0x6cb94f*/
      {
        v6 = *&this->u32_24; /*0x6cb951*/
        this->u32_7C = 1; /*0x6cb954*/
        if ( v6 == (__int16 *)-1 ) /*0x6cb95e*/
          a3 = *(__int16 **)(this->u32_28 + 176); /*0x6cb96f*/
        else
          a3 = v6; /*0x6cb960*/
        v7 = this->q030; /*0x6cb973*/
        v8 = this->u32_38; /*0x6cb976*/
        v9 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cb979*/
        v10 = &this->q030; /*0x6cb97f*/
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( *(unsigned int *)&stru_A8E960.random[528] - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= *(unsigned int *)&stru_A8E960.random[528] - v7; /*0x6cb98f*/
        }
        a2 = v8; /*0x6cb991*/
LABEL_11:
        (v11) = ((v11) & ~0xFFFF) | ((Math::RoundToInt((double)(int)a3 - (double)a2 / *(double *)dword_8871E0->ChargeToDrainRatio)) & 0xFFFF); /*0x6cb995*/
        *v10 = v9; /*0x6cb9b4*/
        v10->u32_4 = v30; /*0x6cb9b6*/
        v10->u32_8 = v11; /*0x6cb9b9*/
        return 0; /*0x6cb9c4*/
      }
      if ( v5 == 1 ) /*0x6cb9d0*/
      {
        v13 = this->u32_24; /*0x6cb9d6*/
        this->u32_7C = 2; /*0x6cb9d9*/
        if ( v13 == -1 ) /*0x6cb9e3*/
          v13 = *(unsigned int *)(this->u32_28 + 176); /*0x6cb9e8*/
        v14 = this->q030; /*0x6cb9ee*/
        v15 = this->u32_38; /*0x6cb9f1*/
        v16 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( *(unsigned int *)&stru_A8E960.random[528] - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= *(unsigned int *)&stru_A8E960.random[528] - v14; /*0x6cba08*/
        }
        (v17) = ((v17) & ~0xFFFF) | ((Math::RoundToInt((double)(v13 - v15) * *(double *)dword_8871E0->ChargeToDrainRatio)) & 0xFFFF); /*0x6cba23*/
        v18 = a2; /*0x6cba2c*/
        this->q030 = v16; /*0x6cba30*/
        this->u32_34 = v30; /*0x6cba33*/
        this->u32_38 = v17; /*0x6cba36*/
        SuperClass::Launch(this, v18, a3, v18); /*0x6cba41*/
        return 0; /*0x6cba4f*/
      }
    }
    else if ( !*(unsigned char *)(this->u32_2C + 506) ) /*0x6cba55*/
    {
      SuperClass::Launch(this, a2, a3, a2); /*0x6cba6d*/
      return 0; /*0x6cba7a*/
    }
    return 0; /*0x6cbc96*/
  }
  v19 = &this->q030; /*0x6cba80*/
  if ( (this->q030 == -1 || !this->Granted || !this->IsCharged) && !*(unsigned char *)(v4 + 238) ) /*0x6cba98*/
    return 0; /*0x6cba98*/
  if ( *(unsigned int *)(v4 + 180) == 2 && Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (unsigned char)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(unsigned int *)(this->u32_28 + 180) == 7 && (unsigned __int8)PsyDom::IsActive() ) /*0x6cbad6*/
  {
    if ( (unsigned char)a2 ) /*0x6cbae3*/
    {
      Weapon_Get_53B410(); /*0x6cbae9*/
      return 0; /*0x6cbaf6*/
    }
    return 0; /*0x6cbae3*/
  }
  SuperClass::Launch(this, a2, a3, a2); /*0x6cbb05*/
  v20 = this->u32_28; /*0x6cbb0a*/
  if ( !*(unsigned char *)(v20 + 238) ) /*0x6cbb0d*/
    this->IsCharged = 0; /*0x6cbb15*/
  if ( !this->OneTime ) /*0x6cbb1b*/
  {
    if ( *(unsigned char *)(v20 + 245) ) /*0x6cbb63*/
    {
      v23 = this->u32_24; /*0x6cbb6b*/
      if ( v23 == -1 ) /*0x6cbb71*/
        v23 = *(unsigned int *)(v20 + 176); /*0x6cbb73*/
      v24 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cbb79*/
      this->u32_78 = -1; /*0x6cbb80*/
      *v19 = v24; /*0x6cbb87*/
      this->u32_34 = v30; /*0x6cbb8d*/
      this->u32_38 = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != -1 ) /*0x6cbb98*/
      {
        v26 = this->u32_38; /*0x6cbb9e*/
        v27 = *(unsigned int *)&stru_A8E960.random[528] - v25; /*0x6cbbac*/
        if ( *(unsigned int *)&stru_A8E960.random[528] - v25 >= v26 ) /*0x6cbbb0*/
        {
          this->u32_38 = 0; /*0x6cbbca*/
          *v19 = -1; /*0x6cbbcd*/
        }
        else
        {
          *v19 = -1; /*0x6cbbb4*/
          this->u32_38 = v26 - v27; /*0x6cbbba*/
        }
        return 0; /*0x6cbbc5*/
      }
    }
    else if ( !*(unsigned char *)(v20 + 237) && !*(unsigned char *)(v20 + 238) ) /*0x6cbbea*/
    {
      v28 = *(unsigned __int8 **)(&this->u32_68); /*0x6cbbf6*/
      if ( v28 ) /*0x6cbbfb*/
      {
        v28[405] = 0; /*0x6cbc01*/
        this->u32_68 = 0; /*0x6cbc0d*/
        a2 = this; /*0x6cbc10*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc14*/
      }
      if ( this->HouseClass_6C ) /*0x6cbc19*/
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc2c*/
        this->HouseClass_6C = 0; /*0x6cbc31*/
      }
      if ( this->Granted /*0x6cbc46*/
        && !this->IsCharged
        && (!this->q070 || *(unsigned char *)(this->u32_28 + 237)) )
      {
        this->u32_78 = -1; /*0x6cbc4e*/
        if ( *v19 == -1 ) /*0x6cbc5a*/
          *v19 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cbc62*/
        v29 = this->u32_24; /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(unsigned int *)(this->u32_28 + 176); /*0x6cbc6f*/
        *v19 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6cbc7a*/
        this->u32_34 = v30; /*0x6cbc80*/
        this->u32_38 = v29; /*0x6cbc83*/
        if ( *(unsigned char *)(this->u32_28 + 229) ) /*0x6cbc89*/
          this->u32_7C = 0; /*0x6cbc91*/
      }
    }
    return 0; /*0x6cbb98*/
  }
  v21 = this->Granted; /*0x6cbb1d*/
  this->OneTime = 0; /*0x6cbb20*/
  if ( !v21 ) /*0x6cbb25*/
    return 0; /*0x6cbb25*/
  this->IsCharged = 0; /*0x6cbb2f*/
  this->Granted = 0; /*0x6cbb32*/
  a2 = this; /*0x6cbb41*/
  v22 = (*(int (**)(char *, int *))(*(unsigned int *)&stru_A83CD9.alignmentPadding75[2] + 16))( /*0x6cbb45*/
          &stru_A83CD9.alignmentPadding75[2],
          &a2);
  if ( v22 != -1 ) /*0x6cbb4b*/
    SuperClass::RemoveFromPointerArray((SuperClass *)&stru_A83CD9.alignmentPadding75[2], v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/

}
}
// 0x6CC080
namespace gamemd {
int SuperClass::AnnounceReady(DynamicVector * aP1, void *a2, void * aEvaForceshield, void * aEvaIroncurtain, void * aEvaNuclearmiss, void * aEvaPsychicdomi, void * aEvaReinforceme, void * aEvaSpyplanerea)
{

  char result = this->Granted; // al /*0x6cc086*/
  if ( result ) /*0x6cc08b*/
  {
    int v4 = this->u32_24; // edi /*0x6cc092*/
    this->IsCharged = 1; /*0x6cc098*/
    if ( v4 == -1 ) /*0x6cc09c*/
      v4 = *(unsigned int *)(this->u32_28 + 176); /*0x6cc0a1*/
    int v5; // edi
    v5 = v4 - Math::RoundToInt((double)v4); /*0x6cc0b4*/
    if ( !v5 ) /*0x6cc0b6*/
      this->IsCharged = 1; /*0x6cc0b8*/
    if ( this->vtable4 == -1 ) /*0x6cc0c0*/
      this->vtable4 = dword_A8ED84; /*0x6cc0c8*/
    this->vtable4 = dword_A8ED84; /*0x6cc0d4*/
    int v7; // [esp+Ch] [ebp-8h]
    this->u32_34 = v7; /*0x6cc0db*/
    this->u32_38 = v5; /*0x6cc0de*/
    if ( a2 ) /*0x6cc0e4*/
    {
      switch ( *(unsigned int *)(this->u32_28 + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          ((VoxClass *)(aEvaNuclearmiss))->FindAndPlay(-1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          ((VoxClass *)(aEvaIroncurtain))->FindAndPlay(-1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          ((VoxClass *)(aEvaLightningst))->FindAndPlay(-1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          ((VoxClass *)(g_Str_EVA_ChronosphereReady))->FindAndPlay(-1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          ((VoxClass *)(aEvaReinforceme))->FindAndPlay(-1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          ((VoxClass *)(aEvaPsychicdomi))->FindAndPlay(-1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          ((VoxClass *)(aEvaSpyplanerea))->FindAndPlay(-1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          ((VoxClass *)(unk_842414))->FindAndPlay(-1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          ((VoxClass *)(aEvaForceshield))->FindAndPlay(-1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          ((VoxClass *)(g_Str_EVA_PsychicRevealReady))->FindAndPlay(-1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    int v6 = this->u32_28; // edx /*0x6cc17e*/
    this->u32_74 = dword_A8ED84; /*0x6cc187*/
    result = v6->u8_E5; /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
      this->u32_7C = 1; /*0x6cc194*/
  }
  return result; /*0x6cc19b*/
}
}
// 0x6CC1E0
namespace gamemd {
int SuperClass::SetCharge(int a2)
{

  unsigned int *v3; // eax
  int v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]

  LOBYTE(v3) = this->Granted; /*0x6cc1e6*/
  if ( (unsigned char)v3 ) /*0x6cc1eb*/
  {
    LOBYTE(v3) = a2; /*0x6cc1ed*/
    if ( (unsigned int)a2 <= 0x64 ) /*0x6cc1f3*/
    {
      v4 = this->u32_24; /*0x6cc1fb*/
      if ( v4 == -1 ) /*0x6cc201*/
        v4 = *(unsigned int *)(this->u32_28 + 176); /*0x6cc206*/
      v5 = v4 - Math::RoundToInt((double)a2 * 0.0099999998 * (double)v4); /*0x6cc223*/
      if ( !v5 ) /*0x6cc225*/
        this->IsCharged = 1; /*0x6cc227*/
      v3 = &this->q030; /*0x6cc22e*/
      if ( this->q030 == -1 ) /*0x6cc234*/
        *v3 = MEMORY[0xA8ED84]; /*0x6cc23c*/
      *v3 = MEMORY[0xA8ED84]; /*0x6cc248*/
      this->u32_34 = v7; /*0x6cc24a*/
      this->u32_38 = v5; /*0x6cc24d*/
    }
  }
  return (char)v3; /*0x6cc251*/

}
}
// 0x6CC390
namespace gamemd {
void SuperClass::Launch(int ecx0, int a2, short * aP3, char a4)
{

  double v4; // st7
  void *v5; // ebx
  int v6; // ebp
  int result; // eax
  void *v8; // eax
  unsigned int *v9; // eax
  int *v10; // eax
  void *v11; // eax
  int *v12; // eax
  int16_t *v13; // ebp
  void *v14; // eax
  int q008; // esi
  int v16; // eax
  int v17; // eax
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  int *v20; // edi
  int16_t v21; // cx
  int16_t v22; // dx
  int *v23; // esi
  int16_t v24; // ax
  bool v25; // zf
  int v26; // ecx
  int v27; // edx
  unsigned int *v28; // edx
  bool v29; // bl
  int v30; // eax
  int Member; // eax
  int *v32; // eax
  CellClass *v33; // eax
  int v34; // ecx
  int v35; // edi
  BuildingClass *v36; // eax
  int v37; // eax
  int *v38; // ebx
  int v39; // eax
  int InstanceCOM; // eax
  int v41; // edi
  int16_t v42; // ax
  int v43; // edi
  void *v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // edi
  void *v50; // eax
  unsigned int *v51; // ebp
  unsigned int *v52; // eax
  int v53; // ecx
  int v54; // edx
  int v55; // edi
  int v56; // ebx
  void *v57; // eax
  unsigned int *v58; // eax
  int v59; // edi
  int v60; // ecx
  int v61; // eax
  int v62; // edx
  int q004; // eax
  int v64; // edx
  int v65; // eax
  unsigned short *m_Data; // eax
  int16_t v67; // dx
  void *v68; // eax
  int v69; // eax
  int v70; // eax
  void *v71; // eax
  unsigned int *v72; // eax
  int v73; // eax
  void *v74; // eax
  int *v75; // eax
  int v76; // edi
  int v77; // esi
  AnimClass *v78; // eax
  int v79; // edx
  int *v80; // edi
  int16_t v81; // dx
  int16_t v82; // ax
  int v83; // esi
  int16_t v84; // cx
  int v85; // eax
  void *v86; // eax
  AnimClass *v87; // eax
  int v88; // eax
  int v89; // ecx
  int v90; // eax
  int v91; // ecx
  int v92; // ecx
  void *v93; // eax
  int *v94; // edx
  int v95; // ebp
  int v96; // ecx
  int v97; // edi
  void **v98; // esi
  unsigned int *v99; // eax
  unsigned int *v100; // eax
  int v101; // eax
  int v102; // esi
  int v103; // ebp
  ScenarioClass *v104; // eax
  ScenarioClass *v105; // edi
  int v106; // eax
  int v107; // ecx
  int v108; // edi
  int v109; // ecx
  int v110; // ecx
  int v111; // edi
  int v112; // ecx
  int i; // edi
  int v114; // ecx
  VocClass *v115; // ecx
  int v116; // eax
  int v117; // ebp
  int v118; // edi
  ScenarioClass *v119; // eax
  ScenarioClass *v120; // esi
  int v121; // ecx
  int v122; // esi
  int v123; // ecx
  int v124; // esi
  int v125; // edi
  int v126; // ecx
  int j; // ebp
  void *v128; // esi
  int *v129; // eax
  void *v130; // ecx
  unsigned int *v131; // eax
  int16_t *v132; // esi
  void *v133; // eax
  AnimClass *v134; // eax
  int v135; // edx
  int *v136; // edi
  int16_t v137; // dx
  int16_t v138; // ax
  unsigned int *v139; // esi
  int16_t v140; // cx
  unsigned int *v141; // ebp
  int v142; // ecx
  int v143; // eax
  int *v144; // esi
  CellClass *v145; // ebp
  int *UIObjectCOM; // edi
  int v147; // edx
  int v148; // eax
  int v149; // ecx
  char *v150; // esi
  int v151; // edx
  unsigned int *v152; // esi
  int v153; // eax
  int v154; // eax
  BuildingClass *v155; // [esp+48h] [ebp-1E4h]
  int v156; // [esp+54h] [ebp-1D8h] BYREF
  int16_t v158[2]; // [esp+64h] [ebp-1C8h] BYREF
  int v159; // [esp+68h] [ebp-1C4h]
  int v160; // [esp+6Ch] [ebp-1C0h]
  int v162; // [esp+84h] [ebp-1A8h]
  int v164; // [esp+9Ch] [ebp-190h]
  Coord v165; // [esp+A0h] [ebp-18Ch] BYREF
  char v166[8]; // [esp+1E4h] [ebp-48h] BYREF
  char v167[16]; // [esp+1ECh] [ebp-40h] BYREF
  char v168[12]; // [esp+1FCh] [ebp-30h] BYREF
  char v169[12]; // [esp+208h] [ebp-24h] BYREF
  int v171[3]; // [esp+220h] [ebp-Ch] BYREF
}

} // namespace gamemd

// 0x6CE0B0
namespace gamemd {
AbstractClass * * SuperClass::Reset(void *a1, void *a2)
{

  unsigned int v12[4]; // [esp+4h] [ebp-10h] BYREF

  unsigned char *SuperClass_field_0x68; // eax
  SuperClass_field_0x68 = a1->SuperClass_field_0x68; /*0x6ce0b6*/
  if ( SuperClass_field_0x68 ) /*0x6ce0bb*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6ce0bd*/
    a1->SuperClass_field_0x68 = 0; /*0x6ce0c4*/
    v12[0] = a1; /*0x6ce0db*/
    int v3; // eax
    v3 = (*(int (**)(int *, unsigned int *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6ce0df*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v3 != -1 ) /*0x6ce0e5*/
      ((DynamicVector *)stru_B0F5B8)->RemoveItem(v3); /*0x6ce0ed*/
  }
  if ( LOBYTE(a1->SuperClass_field_0x6C) ) /*0x6ce0f2*/
  {
    v12[0] = a1; /*0x6ce109*/
    int v4; // eax
    v4 = (*(int (**)(int *, unsigned int *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6ce10d*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v4 != -1 ) /*0x6ce113*/
      ((DynamicVector *)stru_B0F5B8)->RemoveItem(v4); /*0x6ce11b*/
    LOBYTE(a1->SuperClass_field_0x6C) = 0; /*0x6ce120*/
  }
  void *SuperClass_field_0x24; // ecx
  SuperClass_field_0x24 = a1->SuperClass_field_0x24; /*0x6ce124*/
  int *result; // eax
  result = (int *)&a1->SuperClass_field_0x30; /*0x6ce127*/
  HIBYTE(a1->SuperClass_field_0x6C) = 0; /*0x6ce12b*/
  char *SuperClass_field_0x30; // ebx
  SuperClass_field_0x30 = (char *)a1->SuperClass_field_0x30; /*0x6ce12f*/
  a1->SuperClass_field_0x78 = -1; /*0x6ce131*/
  bool v8; // bl
  v8 = SuperClass_field_0x30 + 1 != 0; /*0x6ce13b*/
  if ( SuperClass_field_0x24 == (void *)-1 ) /*0x6ce141*/
    SuperClass_field_0x24 = (void *)*((unsigned int *)a1->SuperClass_field_0x28 + 44); /*0x6ce146*/
  *result = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6ce156*/
  *(unsigned int *)a1->__pad_34 = v12[2]; /*0x6ce15d*/
  a1->SuperClass_field_0x38 = SuperClass_field_0x24; /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    int v9 = *result; // esi /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      int v10; // ecx
      v10 = result[2]; /*0x6ce16c*/
      int v11; // edx
      v11 = *(unsigned int *)&DataGlobal_A8EB00[644] - v9; /*0x6ce17a*/
      if ( *(unsigned int *)&DataGlobal_A8EB00[644] - v9 >= v10 ) /*0x6ce17e*/
      {
        result[2] = 0; /*0x6ce192*/
        *result = -1; /*0x6ce195*/
      }
      else
      {
        *result = -1; /*0x6ce182*/
        result[2] = v10 - v11; /*0x6ce188*/
      }
    }
  }
  return result; /*0x6ce18b*/

}
}
// 0x6CB3A0
namespace gamemd {
void ** SuperClass::CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4)
{

  SuperClass *v9; // [esp+4h] [ebp-10h] BYREF

  unsigned char *SuperClass_field_0x68 = this->u32_68; // eax /*0x6cb3a6*/
  if ( SuperClass_field_0x68 ) /*0x6cb3ab*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6cb3ad*/
    this->u32_68 = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    int v6; // eax
    v6 = (*(int (**)(int *, SuperClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6cb3cf*/
           g_BuildingLoadQueue_Array.?,
           &v9);
    if ( v6 != -1 ) /*0x6cb3d5*/
      ((DynamicVector *)stru_B0F5B8)->RemoveItem(v6); /*0x6cb3dd*/
  }
  if ( ((this->HouseClass_6C) & 0xFF) ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    int v7; // eax
    v7 = (*(int (**)(int *, SuperClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6cb3fd*/
           g_BuildingLoadQueue_Array.?,
           &v9);
    if ( v7 != -1 ) /*0x6cb403*/
      ((DynamicVector *)stru_B0F5B8)->RemoveItem(v7); /*0x6cb40b*/
    (this->HouseClass_6C) = ((this->HouseClass_6C) & ~0xFF) | ((0) & 0xFF); /*0x6cb410*/
  }
  void **result; // eax
  result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    int v10[3]; // [esp+8h] [ebp-Ch] BYREF
    v10[0] = aP1; /*0x6cb444*/
    v10[1] = aP2; /*0x6cb455*/
    v10[2] = a4 + 5; /*0x6cb459*/
    result = AnimClass::ctor( /*0x6cb467*/
               (AnimClass *)result,
               *(void **)(*(unsigned int *)&g_RulesClass_Instance + 816),
               v10,
               0,
               1,
               (void *)0x600,
               0,
               0);
    if ( result ) /*0x6cb470*/
    {
      this->u32_68 = result; /*0x6cb472*/
      result = (void **)DataGlobal_B0E840[3456]; /*0x6cb475*/
      if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x6cb4ae*/
        || (BYTE1(g_BuildingLoadQueue_Array) || !g_BuildingLoadQueue_Array.?)
        && DataGlobal_B0E840[3468] > 0
        && (result = (void **)(*(int (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array + 8))(
                                g_BuildingLoadQueue_Array.?,
                                g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
                                0),
            (unsigned char)result) )
      {
        result = (void **)g_BuildingLoadQueue_Array.?[1]++; /*0x6cb4b6*/
        *(unsigned int *)(g_BuildingLoadQueue_Array.?[0] + 4 * (unsigned int)result) = this; /*0x6cb4c5*/
      }
    }
  }
  return result; /*0x6cb4c8*/

}
} // namespace gamemd

// 0x6CB4D0
namespace gamemd {
char SuperClass::SetOnHold(char aP1)
{
  int result; // eax

  if ( !this->Granted || this->OneTime || aP1 == this->referenceCount || !this->nextArrayIndex ) /*0x6cb4ea*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x6cb552*/
  }
  else
  {
    if ( aP1 || (result = this->u32_28, result->u8_F5) ) /*0x6cb4f9*/
    {
      int v3 = this->vtable4; // esi /*0x6cb51c*/
      if ( v3 != -1 ) /*0x6cb522*/
      {
        int v4 = this->u32_38; // eax /*0x6cb524*/
        if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x6cb536*/
          result = 0; /*0x6cb53c*/
        else
          result = v4 - ((unsigned int)dword_A8ED84 - v3); /*0x6cb538*/
        this->u32_38 = result; /*0x6cb53e*/
        this->vtable4 = -1; /*0x6cb541*/
      }
    }
    else if ( this->vtable4 == -1 ) /*0x6cb507*/
    {
      this->vtable4 = dword_A8ED84; /*0x6cb510*/
      this->referenceCount = 0; /*0x6cb513*/
      (*((unsigned char *)&(result))) = 1; /*0x6cb516*/
      return result; /*0x6cb519*/
    }
    this->referenceCount = aP1; /*0x6cb548*/
    (*((unsigned char *)&(result))) = 1; /*0x6cb54c*/
  }
  return result; /*0x6cb518*/
}
} // namespace gamemd

// 0x6CB820
namespace gamemd {
char SuperClass::SetReadiness(char a2)
{

  HIBYTE(this->HouseClass_6C) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/

}
} // namespace gamemd

// 0x6CC280
namespace gamemd {
int SuperClass::SetRechargeTime(int a2)
{

  this->u32_24 = (void *)a2; /*0x6cc284*/
  return a2; /*0x6cc287*/

}
} // namespace gamemd

// 0x6CC290
namespace gamemd {
void SuperClass::ResetRechargeTime()
{

  this->u32_24 = (void *)-1; /*0x6cc290*/

}
} // namespace gamemd

// 0x6CC2B0
namespace gamemd {
wchar_t * SuperClass::NameReadiness(void * aTxtHold)
{

  if ( (*((unsigned char *)&(aTxtHold->SuperClass_field_0x70))) ) /*0x6cc2b0*/
    return GetStringCSF(aTxtHold, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 950); /*0x6cc34d*/
  if ( *((unsigned char *)aTxtHold->SuperClass_field_0x28 + 229) ) /*0x6cc2be*/
  {
    char *SuperClass_field_0x7C; // ecx
    SuperClass_field_0x7C = (char *)aTxtHold->SuperClass_field_0x7C; /*0x6cc2c8*/
    if ( SuperClass_field_0x7C ) /*0x6cc2ce*/
    {
      char *v2 = SuperClass_field_0x7C - 1; // ecx /*0x6cc2d0*/
      if ( v2 ) /*0x6cc2d1*/
      {
        if ( v2 != 1 ) /*0x6cc2d4*/
          return 0; /*0x6cc2d8*/
        return GetStringCSF( /*0x6cc2ea*/
                 (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_A4,
                 0,
                 (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
                 925);
      }
      else
      {
        return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 922); /*0x6cc301*/
      }
    }
    else
    {
      return GetStringCSF( /*0x6cc318*/
               (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_94,
               0,
               (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
               919);
    }
  }
  else
  {
    if ( !(*(((unsigned char *)&(aTxtHold->SuperClass_field_0x6C)) + (sizeof(aTxtHold->SuperClass_field_0x6C) - 1))) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 944); /*0x6cc336*/
  }
}
} // namespace gamemd

// 0x6CC360
namespace gamemd {
char SuperClass::CanFire()
{

  if ( ((this->q070) & 0xFF) ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *((unsigned char *)this->u32_28 + 229) ) /*0x6cc36a*/
    return this->u32_7C != 0; /*0x6cc379*/
  return HIBYTE(this->HouseClass_6C); /*0x6cc37c*/

}
} // namespace gamemd

// 0x6CDE90
namespace gamemd {
bool SuperClass::ShouldDrawProgress()
{

  return *((unsigned char *)this->u32_28 + 229) || HIBYTE(this->HouseClass_6C) == 0; /*0x6cde9d*/

}
} // namespace gamemd

// 0x6CDEB0
namespace gamemd {
int SuperClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6cdeb6*/
    return -2147467261; /*0x6cdeb8*/
  *a2 = -671656762; /*0x6cdec6*/
  a2[1] = 298989852; /*0x6cdece*/
  a2[2] = 268461211; /*0x6cded7*/
  a2[3] = unk_7E958C; /*0x6cdee0*/
  return 0; /*0x6cdebd*/
}
} // namespace gamemd

// 0x6CDEF0
namespace gamemd {
int SuperClass::LoadFromStream(AbstractClass * aP0, int aP1)
{

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( aP0 ) /*0x6cdf0a*/
    {
      AbstractClass::Constructor((AbstractClass *)aP0); /*0x6cdf0e*/
      /* X11: vtable install elided (implicit via SuperClass virtuals 0x6cdf13) */
      /* X11: vtable install elided (implicit via SuperClass virtuals 0x6cdf19) */
      /* X11: vtable install elided (implicit via SuperClass virtuals 0x6cdf20) */
      /* X11: vtable install elided (implicit via SuperClass virtuals 0x6cdf27) */
    }
    if ( aP0->SuperClass_field_0x68 /*0x6cdf70*/
      && (g_BuildingLoadQueue_Array.SecondSpawnOffset[1] < DataGlobal_B0F5C0
       || ((((unsigned char *)&(g_BuildingLoadQueue_Array.SecondSpawnOffset[0]))[1]) || !DataGlobal_B0F5C0)
       && g_BuildingLoadQueue_Array.SecondSpawnOffset[2] > 0
       && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 8))(
            g_BuildingLoadQueue_Array.ForbiddenHouses,
            DataGlobal_B0F5C0 + g_BuildingLoadQueue_Array.SecondSpawnOffset[2],
            0)) )
    {
      int v3; // eax
      v3 = g_BuildingLoadQueue_Array.SecondSpawnOffset[1]++; /*0x6cdf7d*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.SecretHouses[0] + 4 * v3) = aP0; /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->DiskLaserClass_field_0x28); /*0x6cdf98*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->SuperClass_field_0x2C); /*0x6cdfa6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->SuperClass_field_0x68); /*0x6cdfb1*/
    *&aP0->u32_48 = 0; /*0x6cdfb6*/
    *&aP0->q04C = 0; /*0x6cdfbd*/
    return 0; /*0x6cdfc4*/
  }
  return result; /*0x6cdfc7*/
}
} // namespace gamemd

// 0x6CDFD0
namespace gamemd {
int SuperClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6cdfdf*/
  if ( result >= 0 ) /*0x6cdfe6*/
    return 0; /*0x6cdfe8*/
  return result; /*0x6cdfea*/
}
} // namespace gamemd

// 0x6CDFF0
namespace gamemd {
long long SuperClass::ExecuteAction(unsigned int a2, int a3)
{


  __int64 result = a2; // rax /*0x6cdff0*/
  if ( (void *)a2 == this->u32_2C ) /*0x6cdffc*/
    this->u32_2C = 0; /*0x6cdffe*/
  if ( (void *)a2 == this->u32_28 ) /*0x6ce004*/
    this->u32_28 = 0; /*0x6ce006*/
  if ( (void *)a2 == this->u32_68 ) /*0x6ce00f*/
  {
    this->u32_68 = 0; /*0x6ce011*/
    (this->HouseClass_6C) = ((this->HouseClass_6C) & ~0xFF) | ((1) & 0xFF); /*0x6ce014*/
  }
  return result; /*0x6ce00e*/

}
} // namespace gamemd

// 0x6CE020
namespace gamemd {
int SuperClass::PowerDrainUpdate(int * a2)
{


  int v3; // eax
  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x6ce029*/
  LOBYTE(v3) = BYTE1(this->HouseClass_6C); /*0x6ce02e*/
  Power::FlagProcess((Power *)a2, v3); /*0x6ce034*/
  int v4; // ecx
  LOBYTE(v4) = BYTE2(this->HouseClass_6C); /*0x6ce039*/
  Power::FlagProcess((Power *)a2, v4); /*0x6ce03f*/
  int v5; // edx
  LOBYTE(v5) = HIBYTE(this->HouseClass_6C); /*0x6ce044*/
  Power::FlagProcess((Power *)a2, v5); /*0x6ce04a*/
  Power::TimerProcess(this->u32_78); /*0x6ce055*/
  Power::TimerProcess((int)this->u32_7C); /*0x6ce060*/
  int v6; // edx
  LOBYTE(v6) = this->q060; /*0x6ce065*/
  int v7; // eax
  v7 = Power::FlagProcess((Power *)a2, v6); /*0x6ce06b*/
  LOBYTE(v7) = this->HouseClass_6C; /*0x6ce070*/
  Power::FlagProcess((Power *)a2, v7); /*0x6ce076*/
  int result; // eax
  result = (int)this->u32_68; /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(unsigned __int8 *)(result + 405)); /*0x6ce08d*/
    int v9; // eax
    v9 = (*(int (**)(char *))(*((unsigned int *)this->u32_68 + 1) + 16))((char *)this->u32_68 + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/

}
} // namespace gamemd

// 0x6CE1A0
namespace gamemd {
bool SuperClass::ShouldFlashTab()
{


  if ( ((this->q070) & 0xFF) ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  unsigned char *SuperClass_field_0x28 = this->u32_28; // eax /*0x6ce1a7*/
  if ( SuperClass_field_0x28[229] ) /*0x6ce1aa*/
  {
    if ( !this->u32_7C ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !HIBYTE(this->HouseClass_6C) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  int v2; // eax
  v2 = *((unsigned int *)SuperClass_field_0x28 + 58); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && (int)this->u32_74 + v2 > *(int *)&DataGlobal_A8EB00[644]; /*0x6ce1d1*/

}
} // namespace gamemd

// 0x6CE200
namespace gamemd {
int SuperClass::StubReturn57()
{
  return 57; /*0x6ce205*/
}
} // namespace gamemd

// 0x6CE210
namespace gamemd {
int SuperClass::StubReturn128()
{
  return 128; /*0x6ce215*/
}
} // namespace gamemd
