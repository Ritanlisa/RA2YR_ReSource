// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BrainClass_e4.hpp"
#include "e4/classes/E4Recv_430590_e4.hpp"
#include "e4/classes/E4Recv_4305E0_e4.hpp"
#include "e4/classes/E4Recv_430610_e4.hpp"
#include "e4/classes/E4Recv_431920_e4.hpp"
#include "e4/classes/E4Recv_431930_e4.hpp"
#include "e4/classes/E4Recv_431BC0_e4.hpp"
#include "e4/classes/E4Recv_431D90_e4.hpp"
#include "e4/classes/E4Recv_433C80_e4.hpp"
#include "e4/classes/E4Recv_433CE0_e4.hpp"
#include "e4/classes/E4Recv_434100_e4.hpp"
#include "e4/classes/E4Recv_434700_e4.hpp"
#include "e4/classes/E4Recv_4349F0_e4.hpp"
#include "e4/classes/E4Recv_436DA0_e4.hpp"
#include "e4/classes/E4Recv_437F50_e4.hpp"
#include "e4/classes/E4Recv_438A60_e4.hpp"
#include "e4/classes/E4Recv_43A670_e4.hpp"
#include "e4/classes/E4Recv_43A6B0_e4.hpp"
#include "e4/classes/E4Recv_43A770_e4.hpp"
#include "e4/classes/E4Recv_43ADF0_e4.hpp"
#include "e4/classes/E4Recv_43AF10_e4.hpp"
#include "e4/classes/E4Recv_43EE50_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_425670_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x431BC0
namespace gamemd {  // G42.18 ns repair
int E4Recv_431BC0::sub_431BC0(int a2, size_t a3)
{

  int v5; // edi
  int v6; // eax
  BombClass *v7; // edi
  bool v8; // zf
  int (**vtable0)(ObjectClass *, int); // eax
  TagClass *attachedTag; // [esp+24h] [ebp+4h]
  size_t v11; // [esp+28h] [ebp+8h]

  if ( this->nextObject ) /*0x431bc8*/
    return !a2 && !a3; /*0x431bdb*/
  if ( (*((uint8_t (**)(ObjectClass *, unsigned int))this->vtable1 + 5))(this, 0) ) /*0x431bef*/
    this->ambientSoundController[3] = (*((int (**)(ObjectClass *))this->vtable1 + 11))(this); /*0x431bfd*/
  else
    this->ambientSoundController[3] = 0; /*0x431c02*/
  v5 = a2; /*0x431c05*/
  if ( a2 ) /*0x431c0f*/
  {
    if ( a2 < 1024 ) /*0x431c17*/
    {
      v5 = 1024; /*0x431c1b*/
      if ( a3 ) /*0x431c20*/
        (*((void (**)(ObjectClass *, int, unsigned int, unsigned int))this->vtable1 + 16))(this, 22, 0, 0); /*0x431c2a*/
    }
    this->attachedTag = (TagClass *)v5; /*0x431c2f*/
    if ( v5 ) /*0x431c32*/
      goto LABEL_14; /*0x431c32*/
  }
  else
  {
    this->attachedTag = (TagClass *)this->ambientSoundController[3]; /*0x431c53*/
  }
  if ( a3 ) /*0x431c36*/
    return 0; /*0x431d83*/
LABEL_14:
  if ( !this->attachedTag ) /*0x431c41*/
    return 0; /*0x431c41*/
  if ( a3 ) /*0x431c49*/
    this->nextObject = (ObjectClass *)a3; /*0x431c4b*/
  else
    this->nextObject = (ObjectClass *)__2_YAPAXI_Z((size_t)this->attachedTag); /*0x431c61*/
  if ( !this->nextObject ) /*0x431c67*/
  {
    (*((void (**)(ObjectClass *, int, unsigned int, unsigned int))this->vtable1 + 16))(this, 12, 0, 0); /*0x431d7d*/
    return 0; /*0x431d7d*/
  }
  v6 = this->ambientSoundController[3]; /*0x431c6d*/
  LOBYTE(this->occupant) = 1; /*0x431c75*/
  BYTE2(this->occupant) = 0; /*0x431c79*/
  this->attachedBomb = 0; /*0x431c7c*/
  this->ambientSoundController[0] = 0; /*0x431c7f*/
  this->ambientSoundController[1] = -1; /*0x431c82*/
  this->ambientSoundController[2] = -1; /*0x431c85*/
  this->ambientSoundController[4] = 0; /*0x431c88*/
  this->customSound_controller[0] = 0; /*0x431c8b*/
  if ( v6 ) /*0x431c8e*/
  {
    v7 = 0; /*0x431c97*/
    v11 = 0; /*0x431c9b*/
    attachedTag = (TagClass *)v6; /*0x431c9f*/
    if ( v6 > (int)this->attachedTag ) /*0x431ca3*/
      attachedTag = this->attachedTag; /*0x431ca5*/
    v8 = (*((uint8_t (**)(ObjectClass *))this->vtable1 + 6))(this) == 0; /*0x431cb0*/
    vtable0 = (int (**)(ObjectClass *, int))this->AbstractClass; /*0x431cb2*/
    if ( v8 ) /*0x431cb6*/
    {
      if ( vtable0[7](this, 1) ) /*0x431d02*/
      {
        this->customSound_controller[0] = ((FileClass *)((RawFileClass *)this))->Seek(0, 1u); /*0x431d13*/
        v11 = 1; /*0x431d16*/
      }
    }
    else
    {
      v7 = (BombClass *)vtable0[10](this, 0); /*0x431cbe*/
      if ( ((unsigned int *)this)[0] == -1 ) /*0x431cc5*/
        this->customSound_controller[0] = (int)v7; /*0x431cd6*/
      else
        this->customSound_controller[0] = ((FileClass *)((RawFileClass *)this))->Seek(0, 1u); /*0x431cd1*/
      if ( this->ambientSoundController[3] > (int)this->attachedTag ) /*0x431ce1*/
      {
        this->ambientSoundController[0] = (int)v7; /*0x431cf8*/
        this->ambientSoundController[4] = (int)v7; /*0x431cfb*/
      }
      else
      {
        if ( v7 ) /*0x431ce5*/
          (*((void (**)(ObjectClass *, unsigned int, unsigned int))this->vtable1 + 10))(this, 0, 0); /*0x431ced*/
        this->attachedBomb = v7; /*0x431cf0*/
        this->ambientSoundController[4] = (int)v7; /*0x431cf3*/
      }
    }
    if ( (TagClass *)(*((int (**)(ObjectClass *, ObjectClass *, TagClass *))this->vtable1 + 9))( /*0x431d30*/
                       this,
                       this->nextObject,
                       attachedTag) != attachedTag )
      (*((void (**)(ObjectClass *, int, unsigned int, unsigned int))this->vtable1 + 16))(this, 5, 0, 0); /*0x431d3a*/
    if ( v11 ) /*0x431d41*/
    {
      (*((void (**)(ObjectClass *))this->vtable1 + 13))(this); /*0x431d47*/
      HIBYTE(this->occupant) = 1; /*0x431d4a*/
      BYTE1(this->owningHouseIndex) = 1; /*0x431d4e*/
      return 1; /*0x431d58*/
    }
    (*((void (**)(ObjectClass *, BombClass *, unsigned int))this->vtable1 + 10))(this, v7, 0); /*0x431d61*/
    HIBYTE(this->occupant) = 1; /*0x431d64*/
  }
  BYTE1(this->owningHouseIndex) = 1; /*0x431d68*/
  return 1; /*0x431be1*/

}
}  // G42.18 ns repair
}
// 0x4373B0
namespace gamemd {
MouseClass * * BlitterCopySHP(XSurface * aP0, XSurface * aP1, XSurface * aP2, XSurface * aP3, int a4, XSurface * aP5, XSurface * aP6, XSurface * aP7, XSurface * aP8, int a10, int a11, int a12)
{
  int v14; // edx
  int v15; // edx
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  char result; // al
  int v23; // eax
  int v24; // edx
  uint8_t v25; // di
  int v26; // ebp
  void * v27;
  int v28; // edi
  int v29; // ecx
  int *v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // edx
  XSurface * v37;
  int v38; // edx
  int v39; // eax
  XSurface * v40;
  int v41; // eax
  int v42; // esi
  int v43; // edx
  void * v44;
  unsigned int v45; // eax
  int v46; // eax
  int v47; // ecx
  char *v48; // ebx
  void * v50;
  void * v51;
  void * v52;
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  void * v57;
  void * v58;
  void * v59;
  unsigned int v60; // eax
  unsigned int v61; // [esp+20h] [ebp-4Ch]
  int v62; // [esp+24h] [ebp-48h] BYREF
  void * v63;
  void * v64;
  XSurface * v65;
  XSurface * v66;
  void * v67;
  int v68; // [esp+3Ch] [ebp-30h]
  int v70; // [esp+44h] [ebp-28h]
  int v71; // [esp+48h] [ebp-24h]
  int v72; // [esp+4Ch] [ebp-20h] BYREF
  int v73; // [esp+50h] [ebp-1Ch]
  unsigned int v76[2]; // [esp+5Ch] [ebp-10h] BYREF

  aP5 = (gamemd::XSurface *)((int)(aP5));
  v76[0] = (gamemd::XSurface *)(*aP5);
  aP0 = (gamemd::XSurface *)((int)(aP0));
  v14 = (int)(aP5[1]);
  IDA_LOBYTE(aP5) = 0; /*0x4373cc*/
  v76[1] = v14; /*0x4373d1*/
  v62 = 0; /*0x4373d5*/
  v15 = (int)(aP5[2]); /*0x4373d9*/
  v63 = 0; /*0x4373dc*/
  v15 = (char)(v15);
  aP2 = (gamemd::XSurface *)((char)(aP2));
  v17 = (char)(aP5[3]);
  aP2 = (gamemd::XSurface *)((char)(0));
  v17 = (char)(v17);
  v72 = (char)(*aP2);
  v61 = (char)(0);
  v18 = (char)(0);
  v73 = (char)(aP2[1]);
  v65 = (gamemd::XSurface *)((char)(0));
  v19 = (char)(aP2[2]);
  v66 = (gamemd::XSurface *)((char)(0));
  v19 = (char)(v19);
  v20 = (char)((int)((char)(aP2[3])));
  v64 = (void *)((char)(0));
  v20 = (char)(v20);
  v67 = (void *)((char)(0));
  v68 = (char)(0);
  aP8 = (char)(24 * aP8 + 8484624);
  v21 = (char)(0);
  result = (char)(CalcSurfaceBlitRects(&v72, aP3, a4, v76, &aP5, &v62, &aP2));
  if ( result ) /*0x437468*/
  {
    if ( g_VisibleSurfaceDescriptor ) /*0x43747c*/
    {
      v23 = (int)(*aP1);
      v24 = *((unsigned int *)g_VisibleSurfaceDescriptor + 1); /*0x43748d*/
      v71 = v73 + aP1[1]; /*0x437490*/
      v25 = v71 - v24; /*0x437494*/
      v70 = v72 + v23; /*0x43749a*/
      v61 = StreamClass::ReadAndSeek(v72 + v23, v71 - v24); /*0x4374ac*/
      v21 = (2 * (v25 & 1)) | ((uint8_t)v70 ^ v25) & 1; /*0x4374b7*/
    }
    if ( g_ZBufferDescriptor ) /*0x4374c3*/
    {
      v26 = (void *)(v72 + *aP1);
      v27 = (void *)((int)((void *)(*((unsigned int *)g_ZBufferDescriptor + 1))));
      v71 = (void *)(v73 + aP1[1]);
      v63 = (void *)(Audio::GetSamplePosition(v26, v71 - v27));
      v64 = 0; /*0x4374f2*/
      v28 = aP8->LockCount; /*0x4374fa*/
      v67 = aP8->Height; /*0x437502*/
      v68 = v28; /*0x437509*/
      v29 = v28 / v67; /*0x43750d*/
      if ( aP8->q014 ) /*0x437513*/
      {
        v18 = aP8->Width /*0x437545*/
            * ((aP7
              + (uint16_t)(*((unsigned short *)g_ZBufferDescriptor + 2)
                                 + *((unsigned short *)g_ZBufferDescriptor + 18)
                                 - v73
                                 - *((unsigned short *)aP1 + 2)))
             / aP8->Width);
      }
      else
      {
        v18 = v29 /*0x437585*/
            * ((aP7
              + (uint16_t)(*((unsigned short *)g_ZBufferDescriptor + 2)
                                 + *((unsigned short *)g_ZBufferDescriptor + 18)
                                 - v20
                                 - v73
                                 - *((unsigned short *)aP1 + 2)
                                 + 1))
             / v29)
            - v20 / v29;
        v64 = (void *)(v28 - v20 % v29);
        if ( v64 == (void *)(v28) ) /*0x437596*/
        {
          v64 = 0; /*0x43759c*/
          v18 += aP8->q010; /*0x4375a4*/
        }
      }
    }
    v30 = (int *)(aP0);
    v31 = (*(int (**)(int *))(*aP0 + 112))(aP0); /*0x4375af*/
    v32 = v19 * v31; /*0x4375b6*/
    if ( v32 == (*(int (**)(int *))(*v30 + 116))(v30) /*0x4375d8*/
      && (v33 = (*(int (**)(int *))(*v30 + 116))(v30), v33 == (*(int (**)(int *))(*aP3 + 116))(aP3)) )
    {
      v34 = (int)(v17 * v15);
      if ( v17 * v15 >= v20 * v19 ) /*0x4375ee*/
        v34 = v20 * v19; /*0x4375f0*/
      v35 = (int)(*aP6); /*0x4375fc*/
      if ( (unsigned char)aP5 ) /*0x4375fe*/
        aP6->Blit(v62,(void **)(aP2), v34, 0, 0, 0, 1000); /*0x437616*/
      else
        (*(void (**)(int, int *, int, unsigned int, unsigned int, unsigned int, int, unsigned int))(v35 + 4))( /*0x437636*/
          v62,
          aP2,
          v34,
          0,
          0,
          0,
          1000,
          0);
    }
    else
    {
      aP3 = (gamemd::XSurface *)(aP3);
      aP7 = (gamemd::XSurface *)((*(int (**)(int *))(*aP3 + 116))(aP3));
      v37 = (gamemd::XSurface *)((int)((gamemd::XSurface *)((*(int (**)(int *))(*v30 + 116))(v30))));
      a4 = (int)((gamemd::XSurface *)(v37));
      if ( g_ZBufferDescriptor ) /*0x437661*/
        v65 = (gamemd::XSurface *)(*((unsigned int *)g_ZBufferDescriptor + 10)); /*0x437666*/
      if ( g_VisibleSurfaceDescriptor ) /*0x437671*/
        v66 = (gamemd::XSurface *)(*((unsigned int *)g_VisibleSurfaceDescriptor + 10)); /*0x437676*/
      if ( (unsigned char)aP5 ) /*0x437680*/
      {
        a4 = (int)((gamemd::XSurface *)(-v37));
        aP7 = (gamemd::XSurface *)(-aP7);
        v38 = (gamemd::XSurface *)(*aP3);
        v66 = (gamemd::XSurface *)((int)((gamemd::XSurface *)(-v66)));
        v65 = (gamemd::XSurface *)((int)((gamemd::XSurface *)(-v65)));
        v39 = (gamemd::XSurface *)(aP3->vt_slot_116());
        v40 = (gamemd::XSurface *)((int)((gamemd::XSurface *)(*v30)));
        aP2 = (gamemd::XSurface *)((int *)((char *)aP2 + (v17 - 1) * v39));
        v41 = v30->vt_slot_116(); /*0x4376c7*/
        v42 = v17; /*0x4376d3*/
        v43 = (v20 - 1) * v41 + v62; /*0x4376da*/
        v62 = v43; /*0x4376e3*/
        if ( g_ZBufferDescriptor ) /*0x4376e7*/
        {
          v44 = (void *)((unsigned int)(v63)+ 2 * (v17 + 0x7FFFFFFF * *((unsigned int *)g_ZBufferDescriptor + 10)));
          if ( v44 >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x437703*/
            (unsigned int)(v44)-= *((unsigned int *)g_ZBufferDescriptor + 8); /*0x437705*/
          v63 = v44; /*0x43770d*/
          v18 += 1 - v17; /*0x437713*/
        }
        if ( g_VisibleSurfaceDescriptor ) /*0x43771d*/
        {
          v45 = v61 + 2 * (v17 + 0x7FFFFFFF * *((unsigned int *)g_VisibleSurfaceDescriptor + 10)); /*0x437731*/
          if ( v45 >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x437739*/
            v45 -= *((unsigned int *)g_VisibleSurfaceDescriptor + 8); /*0x43773b*/
          v61 = v45; /*0x43773e*/
        }
      }
      else
      {
        v42 = v17; /*0x437744*/
        v43 = v62; /*0x437748*/
      }
      if ( v42 >= v20 ) /*0x437752*/
        v42 = v20; /*0x437754*/
      if ( (unsigned char)aP5 ) /*0x43775c*/
      {
        if ( v42 > 0 ) /*0x437764*/
        {
          v46 = a10; /*0x43776a*/
          v47 = a11; /*0x43776e*/
          v48 = (char *)aP2; /*0x437775*/
          v70 = v42; /*0x437779*/
          aP6 = aP6; /*0x43777d*/
          while ( 1 ) /*0x43778e*/
          {
            if ( (unsigned short)v47 ) /*0x437791*/
            {
              aP6 = (int *)*aP6; /*0x43779a*/
              v50 = v63; /*0x43779e*/
              ((void (*)(int *, int, char *, int, int, unsigned int, unsigned int, int, int))aP6[4])( /*0x4377b6*/
                aP6,
                v43,
                v48,
                v15,
                v18,
                v63,
                v61,
                v46,
                v47);
            }
            else
            {
              v50 = v63; /*0x4377bb*/
              (*(void (**)(int *, int, char *, int, int, unsigned int, unsigned int, int))(*aP6 + 12))( /*0x4377d4*/
                aP6,
                v43,
                v48,
                v15,
                v18,
                v63,
                v61,
                v46);
            }
            v43 = a4 + v62; /*0x4377e3*/
            v62 += a4; /*0x4377e9*/
            v48 = (char *)(unsigned int)(aP2)+ aP7; /*0x4377ed*/
            aP2 = (int *)((char *)(unsigned int)(aP2)+ aP7); /*0x4377f7*/
            if ( g_ZBufferDescriptor ) /*0x4377fb*/
            {
              v51 = v50 + 2 * v65; /*0x437801*/
              if ( v51 < *((unsigned int *)g_ZBufferDescriptor + 6) ) /*0x437809*/
                (unsigned int)(v51)+= *((unsigned int *)g_ZBufferDescriptor + 8); /*0x43780b*/
              v63 = v51; /*0x437812*/
              v52 = (unsigned int)(v67)+ v64; /*0x43781a*/
              v64 += v67; /*0x437822*/
              if ( v64 >= (void *)(v68) ) /*0x437826*/
              {
                v18 += aP8->q010; /*0x43782c*/
                v64 = (void *)((unsigned int)(v52)- v68); /*0x437831*/
              }
            }
            if ( g_VisibleSurfaceDescriptor ) /*0x43783d*/
            {
              v53 = v61 + 2 * v66; /*0x437847*/
              if ( v53 < *((unsigned int *)g_VisibleSurfaceDescriptor + 6) ) /*0x43784f*/
                v53 += *((unsigned int *)g_VisibleSurfaceDescriptor + 8); /*0x437851*/
              v61 = v53; /*0x437854*/
            }
            if ( !--v70 ) /*0x437861*/
              break; /*0x437861*/
            v46 = a10; /*0x437783*/
            v47 = a11; /*0x437787*/
          }
        }
      }
      else if ( v42 > 0 ) /*0x43786e*/
      {
        v54 = a10; /*0x437874*/
        v55 = a11; /*0x437878*/
        v70 = v42; /*0x43787f*/
        aP6 = aP6; /*0x437883*/
        while ( 1 ) /*0x437894*/
        {
          if ( (unsigned short)v55 ) /*0x437897*/
          {
            aP6 = (int *)*aP6; /*0x4378a1*/
            v57 = v63; /*0x4378a5*/
            ((void (*)(int *, int, int *, int, int, unsigned int, unsigned int, int, int, int))aP6[2])( /*0x4378c1*/
              aP6,
              v43,
              aP2,
              v15,
              v18,
              v63,
              v61,
              v54,
              v21,
              v55);
          }
          else
          {
            v57 = v63; /*0x4378c6*/
            (*(void (**)(int *, int, int *, int, int, unsigned int, unsigned int, int, int))(*aP6 + 4))( /*0x4378e4*/
              aP6,
              v43,
              aP2,
              v15,
              v18,
              v63,
              v61,
              v54,
              v21);
          }
          v43 = a4 + v62; /*0x4378f3*/
          v21 ^= 3u; /*0x4378f9*/
          v62 += a4; /*0x4378fe*/
          aP2 = (int *)((char *)(unsigned int)(aP2)+ aP7); /*0x437902*/
          if ( g_ZBufferDescriptor ) /*0x43790e*/
          {
            v58 = v57 + 2 * v65; /*0x437914*/
            if ( v58 >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x43791c*/
              (unsigned int)(v58)-= *((unsigned int *)g_ZBufferDescriptor + 8); /*0x43791e*/
            v63 = v58; /*0x437925*/
            v59 = (unsigned int)(v67)+ v64; /*0x43792d*/
            v64 += v67; /*0x437935*/
            if ( v64 >= (void *)(v68) ) /*0x437939*/
            {
              v18 += aP8->q010; /*0x43793f*/
              v64 = (unsigned int)(v59)- v68; /*0x437944*/
            }
          }
          if ( g_VisibleSurfaceDescriptor ) /*0x437950*/
          {
            v60 = v61 + 2 * v66; /*0x43795a*/
            if ( v60 >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x437962*/
              v60 -= *((unsigned int *)g_VisibleSurfaceDescriptor + 8); /*0x437964*/
            v61 = v60; /*0x437967*/
          }
          if ( !--v70 ) /*0x437974*/
            break; /*0x437974*/
          v55 = a11; /*0x437889*/
          v54 = a10; /*0x437890*/
        }
      }
      v30 = (int *)(aP0);
    }
    (*(void (**)(int *))(*v30 + 96))(v30); /*0x437982*/
    (*(void (**)(int *))(*aP3 + 96))(aP3); /*0x43798b*/
    return 1; /*0x43798e*/
  }
  return (gamemd::MouseClass **)(result);
}
}
// 0x437A10
namespace gamemd {
MouseClass * * BlitterRLEBlitSHP(IUnknown * aP0, int * a1, TechnoClass * aP2, IUnknown * aP3, unsigned int * a4, int * a5, TechnoClass * aP6, int a8, int a9, TechnoClass * aP9, int a11, int a12, TechnoClass * aP12, int a14, int a15)
{
  int v16; // edx
  int v17; // esi
  int v18; // ebp
  int v19; // ebx
  char result; // al
  Coord2D *v21; // eax
  unsigned int *v22; // eax
  int v23; // edx
  int Stream_field_04; // esi
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  int *v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // ebp
  int v32; // edi
  uint16_t *v33; // edi
  int v34; // eax
  IUnknown * v35;
  int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  unsigned int *v41; // [esp+24h] [ebp-80h]
  char *v42; // [esp+38h] [ebp-6Ch]
  int SamplePosition; // [esp+3Ch] [ebp-68h]
  int v44; // [esp+40h] [ebp-64h]
  int v46; // [esp+48h] [ebp-5Ch]
  int v47; // [esp+4Ch] [ebp-58h]
  int v48; // [esp+50h] [ebp-54h]
  StreamClass *m_Stream; // [esp+54h] [ebp-50h]
  int v50; // [esp+58h] [ebp-4Ch]
  int v51; // [esp+5Ch] [ebp-48h]
  int v52; // [esp+60h] [ebp-44h]
  char v53[8]; // [esp+64h] [ebp-40h] BYREF
  char v54[8]; // [esp+6Ch] [ebp-38h] BYREF
  int v55; // [esp+74h] [ebp-30h] BYREF
  char *v56; // [esp+78h] [ebp-2Ch]
  int v57; // [esp+80h] [ebp-24h]
  int v58; // [esp+84h] [ebp-20h] BYREF
  int v59; // [esp+88h] [ebp-1Ch]
  int v60; // [esp+8Ch] [ebp-18h]
  int v61; // [esp+90h] [ebp-14h]
  int v62; // [esp+94h] [ebp-10h] BYREF
  int v63; // [esp+98h] [ebp-Ch]
  int v64; // [esp+9Ch] [ebp-8h]
  int v65; // [esp+A0h] [ebp-4h]
  int v66; // [esp+A8h] [ebp+4h]
  int v67; // [esp+A8h] [ebp+4h]
  int v68; // [esp+B0h] [ebp+Ch]
  int v69; // [esp+B4h] [ebp+10h]
  int v70; // [esp+BCh] [ebp+18h]
  int v71; // [esp+C0h] [ebp+1Ch]

  v16 = a5[1]; /*0x437a23*/
  v62 = *a5; /*0x437a26*/
  v63 = (char)(v16);
  v17 = (char)(0);
  SamplePosition = (char)(0);
  v64 = (char)(a5[2]);
  v44 = (char)(0);
  v65 = (char)(a5[3]);
  v42 = (char)(0);
  m_Stream = (gamemd::StreamClass *)((char)(0));
  v58 = (char)(*aP2);
  v51 = (char)(0);
  v69 = (char)(0);
  v59 = (char)(aP2[1]);
  v46 = (char)(0);
  v47 = (char)(0);
  v60 = aP2[2]; /*0x437a78*/
  v61 = aP2[3]; /*0x437a8d*/
  v18 = 24 * a9 + 8484624; /*0x437a9c*/
  v50 = 0; /*0x437aa7*/
  v19 = 0; /*0x437aab*/
  v52 = v18; /*0x437aad*/
  result = IntersectSurfaceRects(&v58, (int)a1, &v62, (int)a4); /*0x437ab1*/
  if ( !result ) /*0x437ab8*/
    return result; /*0x437ab8*/
  v71 = v62 - *a4; /*0x437ad6*/
  v48 = v63 - a4[1]; /*0x437ae7*/
  v41 = CellStruct::Copy((CellStruct *)&v58, v53); /*0x437afd*/
  v21 = (Coord2D *)CellStruct::Copy(a1, &v55); /*0x437b02*/
  v22 = ((Coord2D *)(v21))->Add(v54, v41); /*0x437b09*/
  v68 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)aP0 + 92))(aP0, *v22, v22[1]); /*0x437b28*/
  if ( !v68 ) /*0x437b2f*/
    return 0; /*0x437b3a*/
  if ( g_ZBufferDescriptor ) /*0x437b45*/
  {
    v23 = a1->field_0 + v58; /*0x437b5c*/
    Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x437b5e*/
    v56 = (char *)a1->field_4 + v59; /*0x437b61*/
    v25 = (int)&v56[-Stream_field_04]; /*0x437b67*/
    SamplePosition = ((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(v23, v25); /*0x437b73*/
    v46 = *(unsigned int *)(v18 + 8); /*0x437b7c*/
    v69 = 0; /*0x437b80*/
    v47 = *(unsigned int *)(v18 + 12); /*0x437b91*/
    m_Stream = ((unsigned int *)(g_ZBufferDescriptor))[2].m_Stream; /*0x437b95*/
    v26 = v47 / v46; /*0x437b9e*/
    if ( *(unsigned char *)(v18 + 20) ) /*0x437ba0*/
    {
      v27 = a12; /*0x437bcd*/
      v17 = *(unsigned int *)(v18 + 4) /*0x437bd4*/
          * ((a8 + (uint16_t)(IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v25))
           / *(unsigned int *)(v18 + 4));
      if ( a12 ) /*0x437bd9*/
      {
  LABEL_7:
        v28 = (int *)(*(int (**)(int, int *))(*(unsigned int *)v27 + 120))(v27, &v55); /*0x437bdf*/
        v29 = *v28; /*0x437bed*/
        v50 = v28[2]; /*0x437bf6*/
        v30 = a14 + v28[1]; /*0x437c0d*/
        v57 = v28[3]; /*0x437c16*/
        v42 = (char *)(*(int (**)(int, int, int))(*(unsigned int *)a12 + 92))(a12, (unsigned int)(v71)+ (unsigned int)(aP12)+ v29, v30 + v48); /*0x437c30*/
        goto LABEL_12; /*0x437c34*/
      }
    }
    else
    {
      v17 = a8 /*0x437c67*/
          + (uint16_t)(IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04)
                             + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
                             - IDA_LOWORD(a1->field_4)
                             - *((unsigned short *)aP2 + 6)
                             - *((unsigned short *)aP2 + 2)
                             + 1);
      v27 = a12; /*0x437c69*/
      if ( a12 ) /*0x437c72*/
        goto LABEL_7; /*0x437c72*/
      v66 = aP2[1] + aP2[3] - v59; /*0x437c82*/
      v17 = v26 * (v17 / v26) - v66 / v26; /*0x437c9d*/
      v69 = v47 - v66 % v26; /*0x437cb3*/
      if ( v69 == v47 ) /*0x437cba*/
      {
        v69 = 0; /*0x437cbf*/
        v17 += *(unsigned int *)(v18 + 16); /*0x437cca*/
      }
    }
    v42 = (char *)&unk_89C568; /*0x437ccc*/
  }
  LABEL_12:
  if ( *(unsigned int *)&stru_87E790.__pad_D8[60] ) /*0x437cdc*/
  {
    v31 = a1->field_0 + v58; /*0x437ce7*/
    v32 = (int)a1->field_4 + v59 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4); /*0x437cfa*/
    v44 = ((StreamClass *)(*(int **)&stru_87E790.__pad_D8[60]))->ReadAndSeek(v31, v32); /*0x437d18*/
    v51 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x437d1c*/
    v19 = (2 * (v32 & 1)) | ((uint8_t)v31 ^ (uint8_t)v32) & 1; /*0x437d20*/
  }
  v33 = (uint16_t *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)aP3 + 92))(aP3, 0, 0); /*0x437d36*/
  if ( v33 ) /*0x437d3a*/
  {
    v34 = v48; /*0x437d51*/
    if ( v48 > 0 ) /*0x437d57*/
    {
      do /*0x437d64*/
      {
        v19 ^= 3u; /*0x437d5b*/
        v33 = (uint16_t *)((char *)v33 + *v33); /*0x437d61*/
        --v34; /*0x437d63*/
      }
      while ( v34 ); /*0x437d64*/
    }
    v35 = (IUnknown *)((int)(aP0));
    v70 = (*(int (**)(int))(*(unsigned int *)aP0 + 116))(aP0); /*0x437d76*/
    v36 = v65; /*0x437d7d*/
    if ( v65 >= v61 ) /*0x437d83*/
      v36 = v61; /*0x437d85*/
    if ( v36 > 0 ) /*0x437d89*/
    {
      v67 = v36; /*0x437d96*/
      do /*0x437eda*/
      {
        v37 = *aP6; /*0x437da4*/
        if ( (unsigned short)a15 ) /*0x437daa*/
          (*(void (**)(int *, int, uint16_t *, int, int, int, int, int, int, int, char *, int))(v37 + 8))( /*0x437de4*/
            aP6,
            v68,
            v33 + 1,
            v64,
            v71,
            v17,
            SamplePosition,
            v44,
            aP9,
            v19,
            v42,
            a15);
        else
          (*(void (**)(int *, int, uint16_t *, int, int, int, int, int, int, int, char *))(v37 + 4))( /*0x437e20*/
            aP6,
            v68,
            v33 + 1,
            v64,
            v71,
            v17,
            SamplePosition,
            v44,
            aP9,
            v19,
            v42);
        v68 += v70; /*0x437e38*/
        v19 ^= 3u; /*0x437e45*/
        v33 = (uint16_t *)((char *)v33 + *v33); /*0x437e48*/
        if ( g_ZBufferDescriptor ) /*0x437e4c*/
        {
          v38 = SamplePosition + 2 * (unsigned int)m_Stream; /*0x437e56*/
          if ( v38 >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x437e5e*/
            v38 -= g_ZBufferDescriptor[1].Stream_field_0C; /*0x437e60*/
          SamplePosition = v38; /*0x437e63*/
          if ( a12 ) /*0x437e70*/
          {
            v42 += v50; /*0x437e7c*/
          }
          else
          {
            v39 = v46 + v69; /*0x437e8d*/
            v69 += v46; /*0x437e95*/
            if ( v69 >= v47 ) /*0x437e9c*/
            {
              v17 += *(unsigned int *)(v52 + 16); /*0x437ea2*/
              v69 = v39 - v47; /*0x437ea7*/
            }
          }
          v40 = v44 + 2 * v51; /*0x437eb6*/
          if ( v40 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x437ec2*/
            v40 -= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32); /*0x437ec4*/
          v44 = v40; /*0x437ec7*/
        }
        --v67; /*0x437ed3*/
      }
      while ( v67 ); /*0x437eda*/
      v35 = aP0; /*0x437ee0*/
    }
    (*(void (**)(int))(*(unsigned int *)v35 + 96))(v35); /*0x437ee9*/
    (*(void (**)(int))(*(unsigned int *)aP3 + 96))(aP3); /*0x437ef5*/
    return 1; /*0x437ef8*/
  }
  else
  {
    (*(void (**)(int))(*(unsigned int *)aP0 + 96))(aP0); /*0x437d42*/
    return 0; /*0x437d45*/
  }
}
}
// 0x437F50
namespace gamemd {
unsigned int * E4Recv_437F50::sub_437F50()
{

  HRESULT v2; // esi
  LPVOID ppv; // [esp+Ch] [ebp-4h] BYREF

  this->AbstractClass = 0; /*0x437f68*/
  v2 = CoCreateInstance(&stru_7E9500, 0, 7u, &riid, &ppv); /*0x437f74*/
  if ( v2 < 0 ) /*0x437f78*/
    goto LABEL_5; /*0x437f78*/
  v2 = OleRun((LPUNKNOWN)ppv); /*0x437f85*/
  if ( v2 >= 0 ) /*0x437f89*/
    v2 = (**(int (***)(LPVOID, void *, ObjectClass *))ppv)(ppv, &unk_818C08, this); /*0x437f9a*/
  (*(void (**)(LPVOID))(*(unsigned int *)ppv + 8))(ppv); /*0x437fa3*/
  if ( v2 < 0 ) /*0x437fa8*/
  {
LABEL_5:
    if ( v2 != -2147467262 ) /*0x437fb0*/
      WinAPI::Wrapper(v2); /*0x437fb3*/
  }
  return this; /*0x437fba*/

}
}
// 0x43A600
namespace gamemd {
void BrainClass::sub_43A600()
{

  int v2; // esi
  int v3; // ebp
  int v4; // ecx
  void *v5; // eax

  v2 = 0; /*0x43a608*/
  this->vfptr = (int)&vt_BrainClass; /*0x43a60a*/
  v3 = *((unsigned int *)this + 5); /*0x43a610*/
  if ( v3 > 0 ) /*0x43a615*/
  {
    do /*0x43a632*/
    {
      v4 = *(unsigned int *)(*((unsigned int *)this + 2) + 4 * v2); /*0x43a61a*/
      if ( v4 ) /*0x43a61f*/
        (*(void (**)(int, int))(*(unsigned int *)v4 + 32))(v4, 1); /*0x43a625*/
      ++v2; /*0x43a62b*/
      *(unsigned int *)(*((unsigned int *)this + 2) + 4 * v2 - 4) = 0; /*0x43a62e*/
    }
    while ( v2 < v3 ); /*0x43a632*/
  }
  (*(void (**)(BrainClass *))(*((unsigned int *)this + 1) + 12))((unsigned int *)this + 1); /*0x43a63c*/
  v5 = (void *)*((unsigned int *)this + 2); /*0x43a63f*/
  *((unsigned int *)this + 1) = &vt_VectorClass; /*0x43a642*/
  if ( v5 && *((unsigned char *)this + 17) ) /*0x43a64c*/
  {
    __3_YAXPAX_Z(v5); /*0x43a652*/
    *((unsigned int *)this + 2) = 0; /*0x43a65a*/
  }
  *((unsigned char *)this + 17) = 0; /*0x43a65d*/
  *((unsigned int *)this + 3) = 0; /*0x43a660*/

}
}
// 0x43AA90
namespace gamemd {
unsigned int * BrainClass::sub_43AA90(char a2)
{

  int v3; // esi
  int v4; // ebp
  int v5; // ecx
  void *v6; // eax

  v3 = 0; /*0x43aa95*/
  this->vfptr = (int)&vt_BrainClass; /*0x43aa97*/
  v4 = *((unsigned int *)this + 5); /*0x43aa9d*/
  if ( v4 > 0 ) /*0x43aaa2*/
  {
    do /*0x43aac3*/
    {
      v5 = *(unsigned int *)(*((unsigned int *)this + 2) + 4 * v3); /*0x43aaa7*/
      if ( v5 ) /*0x43aaac*/
        (*(void (**)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x43aab2*/
      ++v3; /*0x43aab8*/
      *(unsigned int *)(*((unsigned int *)this + 2) + 4 * v3 - 4) = 0; /*0x43aabb*/
    }
    while ( v3 < v4 ); /*0x43aac3*/
  }
  (*(void (**)(BrainClass *))(*((unsigned int *)this + 1) + 12))((unsigned int *)this + 1); /*0x43aacd*/
  v6 = (void *)*((unsigned int *)this + 2); /*0x43aad0*/
  *((unsigned int *)this + 1) = &vt_VectorClass; /*0x43aad3*/
  if ( v6 && *((unsigned char *)this + 17) ) /*0x43aadd*/
  {
    __3_YAXPAX_Z(v6); /*0x43aae5*/
    *((unsigned int *)this + 2) = 0; /*0x43aaed*/
  }
  *((unsigned char *)this + 17) = 0; /*0x43aaf8*/
  *((unsigned int *)this + 3) = 0; /*0x43aafe*/
  if ( (a2 & 1) != 0 ) /*0x43ab05*/
    __3_YAXPAX_Z(this); /*0x43ab08*/
  return &this->vfptr; /*0x43ab12*/

}
}
// 0x430010
namespace gamemd {
void sub_430010()
{
  dbl_89C448 = 0.0174532925199433 * 45.0; /*0x43001c*/
}
} // namespace gamemd

// 0x430030
namespace gamemd {
void sub_430030()
{
  dbl_89C3A0 = 0.0174532925199433 * 60.0; /*0x43003c*/
}
} // namespace gamemd

// 0x430050
namespace gamemd {
void sub_430050()
{
  dbl_89C378 = 0.0174532925199433 * 90.0; /*0x43005c*/
}
} // namespace gamemd

// 0x430070
namespace gamemd {
long long sub_430070()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C378 - dbl_89C3A0); /*0x430082*/
  result = Math::RoundToInt(v0 * dbl_89C398 * 0.5); /*0x430096*/
  dword_89C470 = result; /*0x43009b*/
  return result; /*0x4300a0*/
}
} // namespace gamemd

// 0x4300B0
namespace gamemd {
void sub_4300B0()
{
  dbl_89C3A8 = Math::ArcTan((double)dword_89C470 * 0.00390625); /*0x4300c7*/
}
} // namespace gamemd

// 0x4300E0
namespace gamemd {
void sub_4300E0()
{
  dbl_89C440 = Math::ArcTan((double)(2 * dword_89C470) / dbl_89C398); /*0x430102*/
}
} // namespace gamemd

// 0x430110
namespace gamemd {
long long sub_430110()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C470) + 0.5); /*0x43012b*/
  dword_89C464 = result; /*0x430130*/
  return result; /*0x430136*/
}
} // namespace gamemd

// 0x430140
namespace gamemd {
int sub_430140()
{
  word_89C390 = 0; /*0x430142*/
  word_89C392 = 0; /*0x430148*/
  return 0; /*0x43014e*/
}
} // namespace gamemd

// 0x430150
namespace gamemd {
int sub_430150()
{
  dword_89C430 = 0; /*0x430152*/
  dword_89C434 = 0; /*0x430157*/
  dword_89C438 = 0; /*0x43015c*/
  return 0; /*0x430161*/
}
} // namespace gamemd

// 0x430170
namespace gamemd {
int sub_430170()
{
  dword_89C460 = 0; /*0x430175*/
  dword_89C458 = 128; /*0x43017f*/
  dword_89C45C = 128; /*0x430184*/
  return 128; /*0x430189*/
}
} // namespace gamemd

// 0x430190
namespace gamemd {
int sub_430190()
{
  memset(g_VisibilitySystem, 0, sizeof(g_VisibilitySystem)); /*0x43019d*/
  dword_89C410 = 0; /*0x4301a4*/
  dword_89C42C = 0; /*0x4301a9*/
  return atexit(sub_4301C0); /*0x4301b6*/
}
} // namespace gamemd

// 0x4301C0
namespace gamemd {
void sub_4301C0()
{
  void **v0; // esi
  int v1; // ebx
  int v2; // edi

  if ( dword_89C410 ) /*0x4301c7*/
  {
    v0 = (void **)g_VisibilitySystem; /*0x4301cc*/
    v1 = 8; /*0x4301d1*/
    do /*0x4301f7*/
    {
      v2 = 3; /*0x4301d6*/
      do /*0x4301f4*/
      {
        if ( *v0 ) /*0x4301db*/
        {
          RA2_OPDEL(*v0); /*0x4301e2*/
          *v0 = 0; /*0x4301ea*/
        }
        ++v0; /*0x4301f0*/
        --v2; /*0x4301f3*/
      }
      while ( v2 ); /*0x4301f4*/
      --v1; /*0x4301f6*/
    }
    while ( v1 ); /*0x4301f7*/
    dword_89C410 = 0; /*0x4301fb*/
  }
}
} // namespace gamemd

// 0x430580
namespace gamemd {
void nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ; /*0x430580*/
}
} // namespace gamemd

// 0x430590
namespace gamemd {
char E4Recv_430590::sub_430590(int a2, int a3, int a4, int a5)
{

  char result; // al

  if ( a2 != dword_89C430 || a3 != dword_89C434 || a4 != dword_89C438 ) /*0x4305b6*/
  {
    *this = a2; /*0x4305ba*/
    *((unsigned int *)this + 1) = a3; /*0x4305bc*/
    *((unsigned int *)this + 2) = a4; /*0x4305bf*/
  }
  result = a5; /*0x4305c2*/
  if ( a5 < 8 ) /*0x4305cb*/
  {
    *((unsigned int *)this + 68) = a5; /*0x4305cd*/
    result = *((unsigned char *)this + 12) | 1; /*0x4305d6*/
    *((unsigned char *)this + 12) = result; /*0x4305d8*/
  }
  return result; /*0x4305c6*/

}
} // namespace gamemd

// 0x4305E0
namespace gamemd {
char E4Recv_4305E0::sub_4305E0(char a2)
{

  char result; // al

  result = *((unsigned char *)this + 12) & 0xFD | (2 * (a2 & 1)); /*0x4305ee*/
  *((unsigned char *)this + 12) = result; /*0x4305f0*/
  return result; /*0x4305f3*/

}
} // namespace gamemd

// 0x430600
namespace gamemd {
void nullsub_98()
{
  ; /*0x430600*/
}
} // namespace gamemd

// 0x430610
namespace gamemd {
void E4Recv_430610::sub_430610()
{

  LOBYTE(((unsigned int *)this)[0]) &= ~1u; /*0x430610*/

}
} // namespace gamemd

// 0x430F60
namespace gamemd {
unsigned int * sub_430F60(unsigned int * a1)
{
  *a1 = 0; /*0x430f68*/
  a1[1] = 0; /*0x430f6a*/
  return a1; /*0x430f6d*/
}
} // namespace gamemd

// 0x4318D0
namespace gamemd {
int sub_4318D0()
{
  dword_89C480 = 0; /*0x4318d2*/
  dword_89C484 = 0; /*0x4318d7*/
  dword_89C488 = 0; /*0x4318dc*/
  dword_89C48C = 0; /*0x4318e1*/
  return 0; /*0x4318e6*/
}
} // namespace gamemd

// 0x431920
namespace gamemd {
int E4Recv_431920::sub_431920()
{

  ((unsigned int *)this)[0] = 0; /*0x431922*/
  ((unsigned int *)this)[0] = 0; /*0x431925*/
  ((unsigned int *)this)[0] = 0; /*0x431928*/
  return 0; /*0x43192b*/

}
} // namespace gamemd

// 0x431930
namespace gamemd {
int E4Recv_431930::sub_431930(int a2)
{

  unsigned int v3; // eax
  int result; // eax
  void *v5; // [esp+8h] [ebp-4h]

  if ( (unsigned char)a2 ) /*0x43193c*/
  {
    ((unsigned int *)this)[0] = 0; /*0x43193e*/
    ((unsigned int *)this)[0] = 0; /*0x431941*/
    ((unsigned int *)this)[0] = 0; /*0x431944*/
  }
  v3 = Timer::ReadTSC(&a2); /*0x43194c*/
  result = (a2 << 28) | (v3 >> 4); /*0x431962*/
  this->AbstractClass = (void *)result; /*0x431964*/
  ((unsigned int *)this)[0] = v5; /*0x431966*/
  return result; /*0x431969*/

}
} // namespace gamemd

// 0x431D90
namespace gamemd {
void E4Recv_431D90::sub_431D90()
{

  if ( this->nextObject ) /*0x431d96*/
  {
    if ( LOBYTE(this->occupant) ) /*0x431d9d*/
    {
      __3_YAXPAX_Z(this->nextObject); /*0x431da3*/
      LOBYTE(this->occupant) = 0; /*0x431dab*/
    }
    this->nextObject = 0; /*0x431dae*/
  }
  this->attachedTag = 0; /*0x431db1*/
  BYTE1(this->occupant) = 0; /*0x431db4*/
  HIBYTE(this->occupant) = 0; /*0x431db7*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x431dba*/
  BYTE1(this->owningHouseIndex) = 0; /*0x431dbd*/

}
} // namespace gamemd

// 0x432670
namespace gamemd {
int sub_432670()
{
  dword_89C498 = 0; /*0x432672*/
  dword_89C49C = 0; /*0x432677*/
  dword_89C4A0 = 0; /*0x43267c*/
  dword_89C4A4 = 0; /*0x432681*/
  return 0; /*0x432686*/
}
} // namespace gamemd

// 0x433560
namespace gamemd {
char sub_433560(int a1, unsigned char * a2)
{
  *(unsigned int *)a1 = a2; /*0x433560*/
  *(unsigned char *)(a1 + 4) = 0; /*0x433562*/
  return *a2 & 1; /*0x43356a*/
}
} // namespace gamemd

// 0x4335A0
namespace gamemd {
char sub_4335A0(int a1, unsigned char * a2, char a3)
{
  *(unsigned int *)a1 = a2; /*0x4335a4*/
  *(unsigned char *)(a1 + 4) = 0; /*0x4335a6*/
  *a2 = a3; /*0x4335aa*/
  return a3; /*0x4335ac*/
}
} // namespace gamemd

// 0x433860
namespace gamemd {
int sub_433860()
{
  dword_89C4A8 = 0; /*0x433862*/
  dword_89C4AC = 0; /*0x433867*/
  dword_89C4B0 = 0; /*0x43386c*/
  dword_89C4B4 = 0; /*0x433871*/
  return 0; /*0x433876*/
}
} // namespace gamemd

// 0x433C80
namespace gamemd {
short E4Recv_433C80::sub_433C80(short a2)
{

  HIWORD(this->occupant) = a2; /*0x433c85*/
  return this->occupant; /*0x433c8d*/

}
} // namespace gamemd

// 0x433CE0
namespace gamemd {
char E4Recv_433CE0::sub_433CE0(char a2)
{

  char result; // al

  result = *((unsigned char *)this + 64); /*0x433ce4*/
  *((unsigned char *)this + 64) = a2; /*0x433ce7*/
  return result; /*0x433cea*/

}
} // namespace gamemd

// 0x434100
namespace gamemd {
int E4Recv_434100::sub_434100(int a2)
{

  int result; // eax

  result = *((unsigned int *)this + 10); /*0x434104*/
  *((unsigned int *)this + 10) = a2; /*0x434107*/
  return result; /*0x43410a*/

}
} // namespace gamemd

// 0x434700
namespace gamemd {
unsigned char * E4Recv_434700::sub_434700()
{

  unsigned char *result; // eax
  unsigned int *vtable1; // edx
  int v4; // ecx
  unsigned char *v5; // ecx
  unsigned char *v6; // edi
  unsigned int *v7; // edx
  unsigned int v8; // ebp
  unsigned int v9; // ecx

  result = malloc(*((unsigned int *)((unsigned int *)this)[0] + 1) * *((unsigned int *)((unsigned int *)this)[0] + 2) + 2); /*0x434713*/
  vtable1 = ((unsigned int *)this)[0]; /*0x434718*/
  ((unsigned int *)this)[0] = result; /*0x434720*/
  if ( vtable1 ) /*0x434723*/
  {
    v4 = *(uint16_t *)(vtable1[6] + 176); /*0x43472a*/
    if ( (unsigned short)v4 ) /*0x434733*/
    {
      v5 = (unsigned char *)(vtable1[7] + (v4 - 1) * vtable1[5]); /*0x43473e*/
      if ( v5 ) /*0x434741*/
      {
        v6 = v5 + 1; /*0x434745*/
        *result = *v5; /*0x434748*/
        v7 = ((unsigned int *)this)[0]; /*0x43474a*/
        v8 = 0; /*0x434750*/
        for ( result = (char *)((unsigned int *)this)[0] + 1; v8 < v7[2]; ++v8 ) /*0x434752*/
        {
          v9 = 0; /*0x43475e*/
          if ( v7[1] ) /*0x43475b*/
          {
            do /*0x434774*/
            {
              *result++ = ~*v6++; /*0x434769*/
              ++v9; /*0x434770*/
            }
            while ( v9 < *((unsigned int *)((unsigned int *)this)[0] + 1) ); /*0x434774*/
          }
          v7 = ((unsigned int *)this)[0]; /*0x434776*/
        }
      }
    }
  }
  return result; /*0x434780*/

}
} // namespace gamemd

// 0x434840
namespace gamemd {
char sub_434840(unsigned int * a1, unsigned int * a2, unsigned int * a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx

  if ( a2[1] > a3[3] || a3[1] > a2[3] || *a2 > a3[2] || *a3 > a2[2] ) /*0x43486d*/
  {
    *a1 = 0; /*0x4348ca*/
    a1[1] = 0; /*0x4348d0*/
    a1[2] = -1; /*0x4348d7*/
    a1[3] = -1; /*0x4348da*/
    return 0; /*0x4348dd*/
  }
  else
  {
    *a1 = *a2; /*0x434878*/
    a1[1] = a2[1]; /*0x43487d*/
    a1[2] = a2[2]; /*0x434883*/
    a1[3] = a2[3]; /*0x43488a*/
    v3 = a3[1]; /*0x43488d*/
    if ( a1[1] < v3 ) /*0x434893*/
      a1[1] = v3; /*0x434895*/
    if ( *a1 < *a3 ) /*0x43489e*/
      *a1 = *a3; /*0x4348a0*/
    v4 = a3[3]; /*0x4348a2*/
    if ( a1[3] > v4 ) /*0x4348aa*/
      a1[3] = v4; /*0x4348ac*/
    v5 = a3[2]; /*0x4348af*/
    if ( a1[2] > v5 ) /*0x4348b7*/
      a1[2] = v5; /*0x4348b9*/
    return 1; /*0x4348bc*/
  }
}
} // namespace gamemd

// 0x4349F0
namespace gamemd {
BOOL E4Recv_4349F0::sub_4349F0()
{

  BOOL result; // eax

  ((unsigned int *)this)[0] = 0; /*0x4349f9*/
  ((unsigned int *)this)[0] = 0; /*0x4349fc*/
  ((unsigned int *)this)[0] = 0; /*0x4349ff*/
  ((unsigned int *)this)[0] = 0; /*0x434a02*/
  this->occupant = 894795775; /*0x434a0f*/
  this->owningHouseIndex = 64; /*0x434a1b*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x434a22*/
  BYTE1(this->ambientSoundController[1]) = 1; /*0x434a25*/
  ((unsigned int *)this)[0] = 1; /*0x434a28*/
  ((unsigned int *)this)[0] = 1; /*0x434a2b*/
  result = SetRect((LPRECT)&this->nextObject, 0, 0, 0, 0); /*0x434a2e*/
  this->fallRate = 1; /*0x434a34*/
  return result; /*0x434a37*/

}
} // namespace gamemd

// 0x434AB0
namespace gamemd {
int sub_434AB0()
{
  dword_89C4C0 = 0; /*0x434ab2*/
  dword_89C4C4 = 0; /*0x434ab7*/
  dword_89C4C8 = 0; /*0x434abc*/
  dword_89C4CC = 0; /*0x434ac1*/
  return 0; /*0x434ac6*/
}
} // namespace gamemd

// 0x434B40
namespace gamemd {
int sub_434B40(AbstractClass * aP0, int * a1, unsigned short aP1, int xLeft, int yTop)
{
  int v5; // edi

  if ( !aP0 ) /*0x434b4c*/
    return xLeft; /*0x434b89*/
  ((FontRenderer *)(aP0))->InitContext(a1); /*0x434b56*/
  ((Field *)(aP0))->Int_Set(xLeft); /*0x434b5e*/
  v5 = FontClass::RenderGlyph((int)aP0, aP1, xLeft, yTop, -1); /*0x434b7a*/
  ((BufferIO *)(aP0))->Cleanup((int)a1); /*0x434b7c*/
  return v5; /*0x434b84*/
}
} // namespace gamemd

// 0x434BF0
namespace gamemd {
int sub_434BF0(int a1, int * a2, unsigned short * a3, int xLeft, int yTop, int a6)
{
  int result; // eax
  int v7; // ebx

  result = 0; /*0x434bf6*/
  if ( a1 ) /*0x434bfb*/
  {
    if ( *(unsigned char *)(a1 + 64) ) /*0x434c01*/
    {
      *(unsigned int *)(a1 + 44) = 2; /*0x434c14*/
      ((FontRenderer *)((unsigned int *)a1))->InitContext(a2); /*0x434c1b*/
      ((Field *)((unsigned int *)a1))->Int_Set(xLeft); /*0x434c27*/
      FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434c40*/
      ((BufferIO *)((unsigned int *)a1))->Cleanup((int)a2); /*0x434c48*/
      ((FontRenderer *)((unsigned int *)a1))->InitContext(a2); /*0x434c51*/
      ((Field *)((unsigned int *)a1))->Int_Set(xLeft + 1); /*0x434c59*/
      v7 = FontClass::RenderText(a1, a3, xLeft + 1, yTop, a6, 0); /*0x434c76*/
      ((BufferIO *)((unsigned int *)a1))->Cleanup((int)a2); /*0x434c78*/
      *(unsigned int *)(a1 + 44) = 1; /*0x434c7e*/
    }
    else
    {
      ((FontRenderer *)((unsigned int *)a1))->InitContext(a2); /*0x434c94*/
      ((Field *)((unsigned int *)a1))->Int_Set(xLeft); /*0x434ca0*/
      v7 = FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434cc1*/
      ((BufferIO *)((unsigned int *)a1))->Cleanup((int)a2); /*0x434cc3*/
    }
    return v7; /*0x434c86*/
  }
  return result; /*0x434c85*/
}
} // namespace gamemd

// 0x435340
namespace gamemd {
char sub_435340(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  int16_t v11; // bp

  if ( !a1 ) /*0x43534a*/
    return 0; /*0x43534d*/
  ((Field *)((unsigned int *)a1))->Int_Set(a4); /*0x43535c*/
  v11 = ((Property *)((unsigned short *)a1))->Set(*(unsigned short *)(a1 + 38)); /*0x435375*/
  Font::Print(a1, a2, a3, a4 + 1, yTop + 1, a6, a7, a8, a9, a10); /*0x43539f*/
  ((Property *)((unsigned short *)a1))->Set(v11); /*0x4353a7*/
// 0x434cd0
  return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43534c*/
}
} // namespace gamemd

// 0x4353F0
namespace gamemd {
char sub_4353F0(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  char result; // al

  if ( !a1 ) /*0x4353fa*/
    return 0; /*0x4353fd*/
  ((Field *)((unsigned int *)a1))->Int_Set(a4); /*0x43540b*/
  if ( !*(unsigned char *)(a1 + 64) ) /*0x435410*/
// 0x434cd0
    return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x4354b8*/
  *(unsigned int *)(a1 + 44) = 2; /*0x435428*/
  Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43544b*/
  result = Font::Print(a1, a2, a3, a4 + 1, yTop, a6, a7, a8, a9, a10); /*0x435479*/
  *(unsigned int *)(a1 + 44) = 1; /*0x43547f*/
  return result; /*0x4353fc*/
}
} // namespace gamemd

// 0x4355D0
namespace gamemd {
int PackRGB565(int a1, int a2, int a3)
{
  return (a1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x43560b*/
       | (a2 >> g_BitMask_Blue << g_BitMask_Green)
       | (a3 >> g_BitMask_Red << g_BitShift_Blue);
}
} // namespace gamemd

// 0x435610
namespace gamemd {
void sub_435610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43561c*/
  dbl_89C4F8 = Math::Sqrt(v0 + v0); /*0x43562e*/
}
} // namespace gamemd

// 0x435640
namespace gamemd {
void sub_435640()
{
  dbl_89C548 = dbl_89C4F8 / 60.0; /*0x43564c*/
}
} // namespace gamemd

// 0x435660
namespace gamemd {
void sub_435660()
{
  dbl_89C530 = 1.0 / dbl_89C548; /*0x43566c*/
}
} // namespace gamemd

// 0x435680
namespace gamemd {
void sub_435680()
{
  dbl_89C528 = 0.0174532925199433 * 45.0; /*0x43568c*/
}
} // namespace gamemd

// 0x4356A0
namespace gamemd {
void sub_4356A0()
{
  dbl_89C500 = 0.0174532925199433 * 60.0; /*0x4356ac*/
}
} // namespace gamemd

// 0x4356C0
namespace gamemd {
void sub_4356C0()
{
  dbl_89C4D8 = 0.0174532925199433 * 90.0; /*0x4356cc*/
}
} // namespace gamemd

// 0x4356E0
namespace gamemd {
long long sub_4356E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C4D8 - dbl_89C500); /*0x4356f2*/
  result = Math::RoundToInt(v0 * dbl_89C4F8 * 0.5); /*0x435706*/
  dword_89C550 = result; /*0x43570b*/
  return result; /*0x435710*/
}
} // namespace gamemd

// 0x435720
namespace gamemd {
void sub_435720()
{
  dbl_89C508 = Math::ArcTan((double)dword_89C550 * 0.00390625); /*0x435737*/
}
} // namespace gamemd

// 0x435750
namespace gamemd {
void sub_435750()
{
  dbl_89C520 = Math::ArcTan((double)(2 * dword_89C550) / dbl_89C4F8); /*0x435772*/
}
} // namespace gamemd

// 0x435780
namespace gamemd {
long long sub_435780()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C550) + 0.5); /*0x43579b*/
  dword_89C544 = result; /*0x4357a0*/
  return result; /*0x4357a6*/
}
} // namespace gamemd

// 0x4357B0
namespace gamemd {
int sub_4357B0()
{
  dword_89C4F0 = 0; /*0x4357b2*/
  return 0; /*0x4357be*/
}
} // namespace gamemd

// 0x4357C0
namespace gamemd {
int sub_4357C0()
{
  dword_89C510 = 0; /*0x4357c2*/
  dword_89C514 = 0; /*0x4357c7*/
  dword_89C518 = 0; /*0x4357cc*/
  return 0; /*0x4357d1*/
}
} // namespace gamemd

// 0x4357E0
namespace gamemd {
int sub_4357E0()
{
  dword_89C540 = 0; /*0x4357e5*/
  dword_89C538 = 128; /*0x4357ef*/
  dword_89C53C = 128; /*0x4357f4*/
  return 128; /*0x4357f9*/
}
} // namespace gamemd

// 0x435800
namespace gamemd {
int sub_435800()
{
  dword_89C4E0 = 0; /*0x435802*/
  dword_89C4E4 = 0; /*0x435807*/
  dword_89C4E8 = 0; /*0x43580c*/
  dword_89C4EC = 0; /*0x435811*/
  return 0; /*0x435816*/
}
} // namespace gamemd

// 0x436DA0
namespace gamemd {
double E4Recv_436DA0::sub_436DA0()
{

  double result; // st7
  unsigned int *v3; // edi
  unsigned int *v4; // eax
  int v5; // [esp+24h] [ebp-20h]
  int v6; // [esp+28h] [ebp-1Ch]
  unsigned char v7[12]; // [esp+2Ch] [ebp-18h] BYREF
  unsigned char v8[12]; // [esp+38h] [ebp-Ch] BYREF

  v3 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(**((unsigned int **)this + 57) + 72))(*((unsigned int *)this + 57), v7); /*0x436dbc*/
  v4 = (unsigned int *)(*((int (**)(ObjectClass *, unsigned char *))this->vtable1 + 18))(this, v8); /*0x436dc3*/
  v5 = v4[1] - v3[1]; /*0x436de0*/
  v6 = v4[2] - v3[2]; /*0x436de4*/
  Math::Sqrt((double)(*v4 - *v3) * (double)(*v4 - *v3) + (double)v6 * (double)v6 + (double)v5 * (double)v5); /*0x436e10*/
  Math::RoundToInt(result); /*0x436e18*/
  Math::RoundToInt(result); /*0x436e69*/
  return result; /*0x436e74*/

}
} // namespace gamemd

// 0x437190
namespace gamemd {
int sub_437190()
{
  dword_89C558 = 0; /*0x437192*/
  dword_89C55C = 0; /*0x437197*/
  dword_89C560 = 0; /*0x43719c*/
  dword_89C564 = 0; /*0x4371a1*/
  return 0; /*0x4371a6*/
}
} // namespace gamemd

// 0x437290
namespace gamemd {
char sub_437290(int * a1, int a2, int * a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  unsigned int v11[4]; // [esp+8h] [ebp-30h] BYREF
  int (**v12)(void *, char); // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  unsigned int v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4372a5*/
    return 0; /*0x4372a8*/
  v6 = *a3; /*0x4372ba*/
  v7 = (*(int (**)(int *))(*a1 + 112))(a1); /*0x4372bc*/
  v8 = *(unsigned int *)(a2 + 12); /*0x4372c2*/
  v13 = *(unsigned int *)(a2 + 8); /*0x4372c5*/
  v14 = v8; /*0x4372d5*/
  v15 = 0; /*0x4372d9*/
  v12 = &XSurface_Vtable; /*0x4372e1*/
  v16 = v7; /*0x4372e9*/
  Buffer::Init(v17, v6, v7 * v8 * v13); /*0x4372ed*/
  v9 = *(unsigned int *)(a2 + 12); /*0x4372f5*/
  v10 = *a1; /*0x4372f8*/
  v11[2] = *(unsigned int *)(a2 + 8); /*0x4372fa*/
  v11[3] = v9; /*0x4372fe*/
  v12 = &BSurface_Vtable; /*0x437313*/
  v11[0] = 0; /*0x43731b*/
  v11[1] = 0; /*0x437323*/
  IDA_LOBYTE(v6) = (*(int (**)(int *, int, int (***)(void *, char), unsigned int *, unsigned int, int))(v10 + 8))( /*0x437332*/
                 a1,
                 a2,
                 &v12,
                 v11,
                 0,
                 1);
  ((Vector *)((int)v17))->Clear(); /*0x437334*/
  return v6; /*0x4372a7*/
}
} // namespace gamemd

// 0x437350
namespace gamemd {
char BlitterCopySimpleSHP(XSurface * aP0, XSurface * aP1, int aP2, int arg4, int *a4, int aP7, int aP8, int a8, int a9)
{
  unsigned int *v11; // eax
  unsigned int *v13; // [esp-1Ch] [ebp-48h]
  unsigned char v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (unsigned int *)(*(int (**)(int, unsigned char *, int))(*(unsigned int *)aP2 + 120))(aP2, v14, arg4); /*0x43738e*/
  v11 = (unsigned int *)(*(int (**)(int *))(*aP0 + 120))(aP0); /*0x437396*/
  return BlitterCopySHP(aP0, v11, v15, aP1, aP2, v13, a4, aP7, aP8, a8, a9, 0); /*0x4373a2*/
}
} // namespace gamemd

// 0x4379A0
namespace gamemd {
bool sub_4379A0(IUnknown * a1, IUnknown * a2, unsigned int * a4, int arg4, TechnoClass * aP6, int a6, int a7, TechnoClass * aP9, int a9)
{
  unsigned int *v11; // eax
  int *v13; // [esp-28h] [ebp-54h]
  unsigned char v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (int *)(*(int (**)(unsigned int *, unsigned char *, int))(*arg4 + 120))(arg4, v14, arg4); /*0x4379e4*/
  v11 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)a1 + 120))(a1); /*0x4379ec*/
  return BlitterRLEBlitSHP(a1, v11, v15, a2, arg4, v13, aP6, a6, a7, aP9, a9, 0, 0, 0, 0); /*0x4379f8*/
}
} // namespace gamemd

// 0x438340
namespace gamemd {
void sub_438340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43834c*/
  dbl_89C6A0 = Math::Sqrt(v0 + v0); /*0x43835e*/
}
} // namespace gamemd

// 0x438370
namespace gamemd {
void sub_438370()
{
  dbl_89C6F0 = dbl_89C6A0 / 60.0; /*0x43837c*/
}
} // namespace gamemd

// 0x438390
namespace gamemd {
void sub_438390()
{
  dbl_89C6D8 = 1.0 / dbl_89C6F0; /*0x43839c*/
}
} // namespace gamemd

// 0x4383B0
namespace gamemd {
void sub_4383B0()
{
  dbl_89C6D0 = 0.0174532925199433 * 45.0; /*0x4383bc*/
}
} // namespace gamemd

// 0x4383D0
namespace gamemd {
void sub_4383D0()
{
  dbl_89C6A8 = 0.0174532925199433 * 60.0; /*0x4383dc*/
}
} // namespace gamemd

// 0x4383F0
namespace gamemd {
void sub_4383F0()
{
  dbl_89C680 = 0.0174532925199433 * 90.0; /*0x4383fc*/
}
} // namespace gamemd

// 0x438410
namespace gamemd {
long long sub_438410()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C680 - dbl_89C6A8); /*0x438422*/
  result = Math::RoundToInt(v0 * dbl_89C6A0 * 0.5); /*0x438436*/
  dword_89C6F8 = result; /*0x43843b*/
  return result; /*0x438440*/
}
} // namespace gamemd

// 0x438450
namespace gamemd {
void sub_438450()
{
  dbl_89C6B0 = Math::ArcTan((double)dword_89C6F8 * 0.00390625); /*0x438467*/
}
} // namespace gamemd

// 0x438480
namespace gamemd {
void sub_438480()
{
  dbl_89C6C8 = Math::ArcTan((double)(2 * dword_89C6F8) / dbl_89C6A0); /*0x4384a2*/
}
} // namespace gamemd

// 0x4384B0
namespace gamemd {
long long sub_4384B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C6F8) + 0.5); /*0x4384cb*/
  dword_89C6EC = result; /*0x4384d0*/
  return result; /*0x4384d6*/
}
} // namespace gamemd

// 0x4384E0
namespace gamemd {
int sub_4384E0()
{
  word_89C698 = 0; /*0x4384e2*/
  word_89C69A = 0; /*0x4384e8*/
  return 0; /*0x4384ee*/
}
} // namespace gamemd

// 0x4384F0
namespace gamemd {
int sub_4384F0()
{
  dword_89C6B8 = 0; /*0x4384f2*/
  dword_89C6BC = 0; /*0x4384f7*/
  dword_89C6C0 = 0; /*0x4384fc*/
  return 0; /*0x438501*/
}
} // namespace gamemd

// 0x438510
namespace gamemd {
int sub_438510()
{
  dword_89C6E8 = 0; /*0x438515*/
  dword_89C6E0 = 128; /*0x43851f*/
  dword_89C6E4 = 128; /*0x438524*/
  return 128; /*0x438529*/
}
} // namespace gamemd

// 0x438530
namespace gamemd {
int sub_438530()
{
  dword_89C688 = 0; /*0x438532*/
  dword_89C68C = 0; /*0x438537*/
  dword_89C690 = 0; /*0x43853c*/
  dword_89C694 = 0; /*0x438541*/
  return 0; /*0x438546*/
}
} // namespace gamemd

// 0x438590
namespace gamemd {
void sub_438590()
{
  dword_89C668 = (int)&VectorClass_BombClass___vftable; /*0x438598*/
  if ( dword_89C66C && byte_89C675 ) /*0x4385ac*/
  {
    RA2_OPDEL(dword_89C66C); /*0x4385af*/
    dword_89C66C = 0; /*0x4385b7*/
  }
  byte_89C675 = 0; /*0x4385bd*/
  dword_89C670 = 0; /*0x4385c3*/
}
} // namespace gamemd

// 0x438A60
namespace gamemd {
Iostream_init * E4Recv_438A60::__0Iostream_init_QAE_XZ_1()
{

  return this; /*0x438a62*/

}
} // namespace gamemd

// 0x438E60
namespace gamemd {
void nullsub_99()
{
  ; /*0x438e60*/
}
} // namespace gamemd

// 0x439480
namespace gamemd {
int sub_439480()
{
  dword_89C708 = 0; /*0x439482*/
  dword_89C70C = 0; /*0x439487*/
  dword_89C710 = 0; /*0x43948c*/
  dword_89C714 = 0; /*0x439491*/
  return 0; /*0x439496*/
}
} // namespace gamemd

// 0x4394A0
namespace gamemd {
void sub_4394A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4394ac*/
  dbl_89C720 = Math::Sqrt(v0 + v0); /*0x4394be*/
}
} // namespace gamemd

// 0x4394D0
namespace gamemd {
void sub_4394D0()
{
  dbl_89C770 = dbl_89C720 / 60.0; /*0x4394dc*/
}
} // namespace gamemd

// 0x4394F0
namespace gamemd {
void sub_4394F0()
{
  dbl_89C758 = 1.0 / dbl_89C770; /*0x4394fc*/
}
} // namespace gamemd

// 0x439510
namespace gamemd {
void sub_439510()
{
  dbl_89C750 = 0.0174532925199433 * 45.0; /*0x43951c*/
}
} // namespace gamemd

// 0x439530
namespace gamemd {
void sub_439530()
{
  dbl_89C728 = 0.0174532925199433 * 60.0; /*0x43953c*/
}
} // namespace gamemd

// 0x439550
namespace gamemd {
void sub_439550()
{
  dbl_89C700 = 0.0174532925199433 * 90.0; /*0x43955c*/
}
} // namespace gamemd

// 0x439570
namespace gamemd {
long long sub_439570()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C700 - dbl_89C728); /*0x439582*/
  result = Math::RoundToInt(v0 * dbl_89C720 * 0.5); /*0x439596*/
  dword_89C778 = result; /*0x43959b*/
  return result; /*0x4395a0*/
}
} // namespace gamemd

// 0x4395B0
namespace gamemd {
void sub_4395B0()
{
  dbl_89C730 = Math::ArcTan((double)dword_89C778 * 0.00390625); /*0x4395c7*/
}
} // namespace gamemd

// 0x4395E0
namespace gamemd {
void sub_4395E0()
{
  dbl_89C748 = Math::ArcTan((double)(2 * dword_89C778) / dbl_89C720); /*0x439602*/
}
} // namespace gamemd

// 0x439610
namespace gamemd {
long long sub_439610()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C778) + 0.5); /*0x43962b*/
  dword_89C76C = result; /*0x439630*/
  return result; /*0x439636*/
}
} // namespace gamemd

// 0x439640
namespace gamemd {
int sub_439640()
{
  word_89C718 = 0; /*0x439642*/
  word_89C71A = 0; /*0x439648*/
  return 0; /*0x43964e*/
}
} // namespace gamemd

// 0x439650
namespace gamemd {
int sub_439650()
{
  dword_89C738 = 0; /*0x439652*/
  dword_89C73C = 0; /*0x439657*/
  dword_89C740 = 0; /*0x43965c*/
  return 0; /*0x439661*/
}
} // namespace gamemd

// 0x439670
namespace gamemd {
int sub_439670()
{
  dword_89C768 = 0; /*0x439675*/
  dword_89C760 = 128; /*0x43967f*/
  dword_89C764 = 128; /*0x439684*/
  return 128; /*0x439689*/
}
} // namespace gamemd

// 0x43A160
namespace gamemd {
void sub_43A160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43a16c*/
  dbl_89C790 = Math::Sqrt(v0 + v0); /*0x43a17e*/
}
} // namespace gamemd

// 0x43A190
namespace gamemd {
void sub_43A190()
{
  dbl_89C7E0 = dbl_89C790 / 60.0; /*0x43a19c*/
}
} // namespace gamemd

// 0x43A1B0
namespace gamemd {
void sub_43A1B0()
{
  dbl_89C7C8 = 1.0 / dbl_89C7E0; /*0x43a1bc*/
}
} // namespace gamemd

// 0x43A1D0
namespace gamemd {
void sub_43A1D0()
{
  dbl_89C7C0 = 0.0174532925199433 * 45.0; /*0x43a1dc*/
}
} // namespace gamemd

// 0x43A1F0
namespace gamemd {
void sub_43A1F0()
{
  dbl_89C798 = 0.0174532925199433 * 60.0; /*0x43a1fc*/
}
} // namespace gamemd

// 0x43A210
namespace gamemd {
void sub_43A210()
{
  dbl_89C780 = 0.0174532925199433 * 90.0; /*0x43a21c*/
}
} // namespace gamemd

// 0x43A230
namespace gamemd {
long long sub_43A230()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C780 - dbl_89C798); /*0x43a242*/
  result = Math::RoundToInt(v0 * dbl_89C790 * 0.5); /*0x43a256*/
  dword_89C7E8 = result; /*0x43a25b*/
  return result; /*0x43a260*/
}
} // namespace gamemd

// 0x43A270
namespace gamemd {
void sub_43A270()
{
  dbl_89C7A0 = Math::ArcTan((double)dword_89C7E8 * 0.00390625); /*0x43a287*/
}
} // namespace gamemd

// 0x43A2A0
namespace gamemd {
void sub_43A2A0()
{
  dbl_89C7B8 = Math::ArcTan((double)(2 * dword_89C7E8) / dbl_89C790); /*0x43a2c2*/
}
} // namespace gamemd

// 0x43A2D0
namespace gamemd {
long long sub_43A2D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C7E8) + 0.5); /*0x43a2eb*/
  dword_89C7DC = result; /*0x43a2f0*/
  return result; /*0x43a2f6*/
}
} // namespace gamemd

// 0x43A300
namespace gamemd {
int sub_43A300()
{
  word_89C788 = 0; /*0x43a302*/
  word_89C78A = 0; /*0x43a308*/
  return 0; /*0x43a30e*/
}
} // namespace gamemd

// 0x43A310
namespace gamemd {
int sub_43A310()
{
  dword_89C7A8 = 0; /*0x43a312*/
  dword_89C7AC = 0; /*0x43a317*/
  dword_89C7B0 = 0; /*0x43a31c*/
  return 0; /*0x43a321*/
}
} // namespace gamemd

// 0x43A330
namespace gamemd {
int sub_43A330()
{
  dword_89C7D8 = 0; /*0x43a335*/
  dword_89C7D0 = 128; /*0x43a33f*/
  dword_89C7D4 = 128; /*0x43a344*/
  return 128; /*0x43a349*/
}
} // namespace gamemd

// 0x43A670
namespace gamemd {
int E4Recv_43A670::sub_43A670()
{

  int v2; // esi
  int abstractFlags; // ebx
  int v4; // ecx

  v2 = 0; /*0x43a675*/
  abstractFlags = ((unsigned int *)this)[0]; /*0x43a677*/
  if ( abstractFlags > 0 ) /*0x43a67c*/
  {
    do /*0x43a69d*/
    {
      v4 = *((unsigned int *)((unsigned int *)this)[0] + v2); /*0x43a681*/
      if ( v4 ) /*0x43a686*/
        (*(void (**)(int, int))(*(unsigned int *)v4 + 32))(v4, 1); /*0x43a68c*/
      *((unsigned int *)((unsigned int *)this)[0] + v2++) = 0; /*0x43a695*/
    }
    while ( v2 < abstractFlags ); /*0x43a69d*/
  }
  return (*((int (**)(void **))((unsigned int *)this)[0] + 3))(&((unsigned int *)this)[0]); /*0x43a6a8*/

}
} // namespace gamemd

// 0x43A6B0
namespace gamemd {
int E4Recv_43A6B0::sub_43A6B0(int a2, int a3)
{

  int v4; // esi
  int abstractFlags; // ebx
  int v6; // ecx

  v4 = 0; /*0x43a6b5*/
  abstractFlags = ((unsigned int *)this)[0]; /*0x43a6b7*/
  if ( abstractFlags > 0 ) /*0x43a6bc*/
  {
    do /*0x43a6dd*/
    {
      v6 = *((unsigned int *)((unsigned int *)this)[0] + v4); /*0x43a6c1*/
      if ( v6 ) /*0x43a6c6*/
        (*(void (**)(int, int))(*(unsigned int *)v6 + 32))(v6, 1); /*0x43a6cc*/
      *((unsigned int *)((unsigned int *)this)[0] + v4++) = 0; /*0x43a6d5*/
    }
    while ( v4 < abstractFlags ); /*0x43a6dd*/
  }
  (*((void (**)(void **))((unsigned int *)this)[0] + 3))(&((unsigned int *)this)[0]); /*0x43a6e5*/
  ((unsigned int *)this)[0] = a2; /*0x43a6f0*/
  ((unsigned int *)this)[0] = (void *)a3; /*0x43a6f3*/
  return a2; /*0x43a6f6*/

}
} // namespace gamemd

// 0x43A770
namespace gamemd {
int E4Recv_43A770::sub_43A770(unsigned int * a2, int a3)
{

  unsigned int *v3; // esi
  int result; // eax
  unsigned int *abstractFlags; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  unsigned int *v10; // [esp-8h] [ebp-20h]
  int v11; // [esp-4h] [ebp-1Ch]

  v3 = a2; /*0x43a773*/
  if ( !a2 ) /*0x43a77c*/
    return -2147467261; /*0x43a781*/
  abstractFlags = (unsigned int *)((unsigned int *)this)[0]; /*0x43a78a*/
  v7 = *a2; /*0x43a78d*/
  v10 = a2; /*0x43a798*/
  a2 = abstractFlags; /*0x43a799*/
  result = (*(int (**)(unsigned int *, unsigned int **, int, unsigned int))(v7 + 16))(v10, &a2, 4, 0); /*0x43a79d*/
  if ( result >= 0 ) /*0x43a7a2*/
  {
    v8 = 0; /*0x43a7a8*/
    if ( (int)a2 <= 0 ) /*0x43a7ac*/
    {
      return 0; /*0x43a7cd*/
    }
    else
    {
      v9 = a3; /*0x43a7ae*/
      while ( 1 ) /*0x43a7ba*/
      {
        v11 = *((unsigned int *)((unsigned int *)this)[0] + v8); /*0x43a7ba*/
        result = (*(int (**)(int, unsigned int *, int))(*(unsigned int *)v11 + 24))(v11, v3, v9); /*0x43a7bd*/
        if ( result < 0 ) /*0x43a7c2*/
          break; /*0x43a7c2*/
        if ( ++v8 >= (int)a2 ) /*0x43a7cb*/
          return 0; /*0x43a7cb*/
      }
    }
  }
  return result; /*0x43a77e*/

}
} // namespace gamemd

// 0x43ADF0
namespace gamemd {
ObjectClass * E4Recv_43ADF0::sub_43ADF0(unsigned int * a1)
{

  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x43adf6*/
  this->AbstractClass = (void *)*a1; /*0x43adfc*/
  ((unsigned int *)this)[0] = (void *)a1[1]; /*0x43ae01*/
  return this; /*0x43ae04*/

}
} // namespace gamemd

// 0x43AF10
namespace gamemd {
unsigned int * E4Recv_43AF10::sub_43AF10()
{

  this->AbstractClass = 0; /*0x43af14*/
  ((unsigned int *)this)[0] = 0; /*0x43af16*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x43af19*/
  return this; /*0x43af1c*/

}
} // namespace gamemd

// 0x43AF40
namespace gamemd {
void sub_43AF40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43af4c*/
  dbl_89C820 = Math::Sqrt(v0 + v0); /*0x43af5e*/
}
} // namespace gamemd

// 0x43AF70
namespace gamemd {
void sub_43AF70()
{
  dbl_89C880 = dbl_89C820 / 60.0; /*0x43af7c*/
}
} // namespace gamemd

// 0x43AF90
namespace gamemd {
void sub_43AF90()
{
  dbl_89C868 = 1.0 / dbl_89C880; /*0x43af9c*/
}
} // namespace gamemd

// 0x43AFB0
namespace gamemd {
void sub_43AFB0()
{
  dbl_89C860 = 0.0174532925199433 * 45.0; /*0x43afbc*/
}
} // namespace gamemd

// 0x43AFD0
namespace gamemd {
void sub_43AFD0()
{
  dbl_89C830 = 0.0174532925199433 * 60.0; /*0x43afdc*/
}
} // namespace gamemd

// 0x43AFF0
namespace gamemd {
void sub_43AFF0()
{
  dbl_89C7F8 = 0.0174532925199433 * 90.0; /*0x43affc*/
}
} // namespace gamemd

// 0x43B010
namespace gamemd {
long long sub_43B010()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C7F8 - dbl_89C830); /*0x43b022*/
  result = Math::RoundToInt(v0 * dbl_89C820 * 0.5); /*0x43b036*/
  dword_89C888 = result; /*0x43b03b*/
  return result; /*0x43b040*/
}
} // namespace gamemd

// 0x43B050
namespace gamemd {
void sub_43B050()
{
  dbl_89C840 = Math::ArcTan((double)dword_89C888 * 0.00390625); /*0x43b067*/
}
} // namespace gamemd

// 0x43B080
namespace gamemd {
void sub_43B080()
{
  dbl_89C858 = Math::ArcTan((double)(2 * dword_89C888) / dbl_89C820); /*0x43b0a2*/
}
} // namespace gamemd

// 0x43B0B0
namespace gamemd {
long long sub_43B0B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C888) + 0.5); /*0x43b0cb*/
  dword_89C87C = result; /*0x43b0d0*/
  return result; /*0x43b0d6*/
}
} // namespace gamemd

// 0x43B0E0
namespace gamemd {
int sub_43B0E0()
{
  g_TerrainTypeTable = 0; /*0x43b0e2*/
  return 0; /*0x43b0ee*/
}
} // namespace gamemd

// 0x43B0F0
namespace gamemd {
int sub_43B0F0()
{
  g_BuildingClassPool = 0; /*0x43b0f2*/
  dword_89C84C = 0; /*0x43b0f7*/
  dword_89C850 = 0; /*0x43b0fc*/
  return 0; /*0x43b101*/
}
}
// 0x43B110
namespace gamemd {
int sub_43B110()
{
  dword_89C878 = 0; /*0x43b115*/
  dword_89C870 = 128; /*0x43b11f*/
  dword_89C874 = 128; /*0x43b124*/
  return 128; /*0x43b129*/
}
} // namespace gamemd

// 0x43B130
namespace gamemd {
int sub_43B130()
{
  dword_89C808 = 0; /*0x43b132*/
  dword_89C80C = 0; /*0x43b137*/
  dword_89C810 = 0; /*0x43b13c*/
  dword_89C814 = 0; /*0x43b141*/
  return 0; /*0x43b146*/
}
} // namespace gamemd

// 0x43EE50
namespace gamemd {
int E4Recv_43EE50::sub_43EE50()
{

  unsigned int *Value; // eax
  int v3; // esi
  int result; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( !(*(uint8_t (**)(TechnoClass *))(this->vtable0 + 1020))(this) || !*((unsigned int *)this + 352) ) /*0x43ee63*/
    return 0; /*0x43eea7*/
  Value = ((ProgressTimer *)((ProgressTimer *)this->primaryFacing))->GetValue(&v5); /*0x43ee76*/
  v3 = *((unsigned int *)this + 352); /*0x43ee7d*/
  result = dword_7F4890[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]; /*0x43ee8e*/
  if ( v3 ) /*0x43ee95*/
  {
    *(unsigned int *)(v3 + 172) = result; /*0x43ee97*/
    *(unsigned int *)(v3 + 196) = 0; /*0x43ee9d*/
  }
  return result; /*0x43eea3*/

}
} // namespace gamemd
