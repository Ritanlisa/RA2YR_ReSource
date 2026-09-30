// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7C35B0_e4.hpp"
#include "e4/classes/E4Recv_7C3670_e4.hpp"
#include "e4/classes/E4Recv_7C8A8E_e4.hpp"
#include "e4/classes/E4Recv_7C8AB7_e4.hpp"
#include "e4/classes/E4Recv_7C8AD3_e4.hpp"
#include "e4/classes/E4Recv_7C8AEE_e4.hpp"
#include "e4/classes/E4Recv_7C8B0A_e4.hpp"
#include "e4/classes/E4Recv_7C8B29_e4.hpp"
#include "e4/classes/E4Recv_7C8B2D_e4.hpp"
#include "e4/classes/E4Recv_7C8B38_e4.hpp"
#include "e4/classes/E4Recv_7CA971_e4.hpp"
#include "e4/classes/E4Recv_7CA9B4_e4.hpp"
#include "e4/classes/E4Recv_7CA9CC_e4.hpp"
#include "e4/classes/E4Recv_7CAC34_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_7B60E0_e4.hpp"
#include "e4/classes/E4Recv_7B9530_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/AITriggerTypeClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x7C0740
namespace gamemd {
void ProcessAudioStreamPlayback(int a1, DSurface * aP1, int arg0, char a4, char arg8, char * a5)
{
  DSurface * v8;
  DSurface * v9;
  DSurface * v10;
  DSurface * v11;
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  uint16_t v16; // dx
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  DSurface * v20;
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  uint16_t *v24; // edx
  int v25; // ecx
  DSurface * v26;
  unsigned int result;
  int v28; // edi
  DSurface * v29;
  bool v30; // cc
  int v31; // eax
  DSurface * v32;
  int v33; // edi
  bool v34; // bl
  int v35; // ecx
  bool v36; // zf
  DSurface * v37;
  DSurface * v38;
  int v39; // [esp+18h] [ebp-10h]
  DSurface * v40;
  DSurface * v41;
  DSurface * v42;
  DSurface * v43;
  int v44; // [esp+30h] [ebp+8h]
  int v45; // [esp+38h] [ebp+10h]

  v8 = (gamemd::DSurface *)((int)((gamemd::DSurface *)(*(unsigned int *)(a1 + 1892))));
  v9 = (gamemd::DSurface *)(*(unsigned int *)(a1 + 416));
  v42 = aP1; /*0x7c0759*/
  v39 = 0; /*0x7c075d*/
  if ( !v8 ) /*0x7c0765*/
    return -6; /*0x7c0765*/
  v38 = aP1; /*0x7c0771*/
  if ( *(int *)(a1 + 140) <= 1 ) /*0x7c0778*/
  {
    v37 = (gamemd::DSurface *)((unsigned int)(1));
    v41 = (gamemd::DSurface *)((unsigned int)(aP1));
    v40 = aP1; /*0x7c08a1*/
    goto LABEL_23; /*0x7c08a1*/
  }
  v37 = 0; /*0x7c0782*/
  if ( arg0 <= 0 ) /*0x7c0789*/
  {
    v39 = (gamemd::DSurface *)(Audio_Process_7C19F0(&v41, &v40));
    v12 = (unsigned int)(Audio_Process_7C19F0(0, 0));
    v10 = (gamemd::DSurface *)(v41);
  }
  else
  {
    v39 = (unsigned int)((unsigned int)(aP1)/ arg0);
    v10 = (gamemd::DSurface *)(arg0 * ((unsigned int)(aP1)/ arg0));
    v41 = (gamemd::DSurface *)((unsigned int)(v10));
    if ( v10 >= (gamemd::DSurface *)(arg0) ) /*0x7c079f*/
    {
      v10 -= arg0; /*0x7c07a1*/
      v41 = v10; /*0x7c07a3*/
    }
    if ( v39 ) /*0x7c07ad*/
    {
      v40 = v10 + arg0 - 1; /*0x7c07c6*/
      v12 = *(unsigned int *)(a1 + 388) / arg0; /*0x7c07d1*/
    }
    else
    {
      v11 = (gamemd::DSurface *)((int)((gamemd::DSurface *)(*(unsigned int *)(a1 + 388))));
      v40 = (gamemd::DSurface *)(-1);
      v12 = (unsigned int)(v11)/ arg0; /*0x7c07be*/
    }
  }
  v38 = (gamemd::DSurface *)(v10);
  if ( arg8 ) /*0x7c080b*/
  {
    *(unsigned int *)(a1 + 360) = *(unsigned int *)(a1 + 1772); /*0x7c0876*/
    v14 = *(unsigned int *)(a1 + 1772); /*0x7c087c*/
  LABEL_20:
    *(unsigned int *)(a1 + 356) = v14; /*0x7c0882*/
  LABEL_21:
    *(unsigned int *)(a1 + 372) = 0; /*0x7c0888*/
    *(unsigned int *)(a1 + 376) = 0; /*0x7c0890*/
    goto LABEL_23; /*0x7c0896*/
  }
  if ( v12 != v39 ) /*0x7c0811*/
  {
    if ( !*(unsigned int *)(a1 + 372) ) /*0x7c0846*/
    {
      v14 = *(unsigned int *)(a1 + 360); /*0x7c0850*/
      while ( v14 != *(unsigned int *)(v9 + 4) || (*(unsigned char *)(v9 + 20) & 1) == 0 ) /*0x7c085f*/
      {
        v9 = (gamemd::DSurface *)(*(unsigned int *)(v9 + 12));
        if ( *(unsigned int *)(a1 + 416) == (unsigned int)(v9) ) /*0x7c086c*/
          goto LABEL_20; /*0x7c086c*/
      }
    }
    goto LABEL_21; /*0x7c085f*/
  }
  v37 = (gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)(1)));
  v38 = (gamemd::DSurface *)((char)(v40 + 1));
  v13 = (char)(*(unsigned int *)(a1 + 364));
  *(unsigned int *)(a1 + 360) = v13; /*0x7c0827*/
  *(unsigned int *)(a1 + 356) = *(unsigned int *)(v13 + 4); /*0x7c0832*/
  *(unsigned int *)(a1 + 372) = 0; /*0x7c0838*/
  *(unsigned int *)(a1 + 376) = 0; /*0x7c083e*/
  LABEL_23:
  *a5 = v37; /*0x7c08a5*/
  if ( (*(unsigned char *)(a1 + 132) & 1) != 0 && *(unsigned int *)(a1 + 1932) ) /*0x7c08bd*/
  {
    v15 = *(unsigned int *)(a1 + 270); /*0x7c08dd*/
    v16 = *(unsigned short *)(a1 + 60); /*0x7c08e3*/
    v17 = v16 * *(uint8_t *)(a1 + 62) * (*(uint8_t *)(a1 + 63) >> 3) / *(unsigned int *)(a1 + 112); /*0x7c08f0*/
    if ( (*(unsigned char *)(a1 + 234) & 8) == 0 && !v15 ) /*0x7c08fe*/
      v15 = v16 * *(uint8_t *)(a1 + 62) * (*(uint8_t *)(a1 + 63) >> 3) / 2; /*0x7c0907*/
    if ( a4 && v15 > 0 ) /*0x7c0913*/
    {
      v18 = v15 / v17; /*0x7c0918*/
      v19 = v17 * (v15 / v17); /*0x7c091c*/
      if ( v15 > v19 ) /*0x7c0921*/
        ++v18; /*0x7c0923*/
      v20 = aP1 - v18; /*0x7c0926*/
      v43 = aP1 - v18; /*0x7c0928*/
      if ( aP1 - v18 >= 0 ) /*0x7c092c*/
      {
        *(unsigned int *)(a1 + 1964) = v17 + v19 - v15; /*0x7c0943*/
      }
      else
      {
        v20 = 0; /*0x7c092e*/
        v43 = 0; /*0x7c0933*/
        *(unsigned int *)(a1 + 1964) = (unsigned int)(aP1)* v17; /*0x7c0937*/
      }
      if ( v20 < v38 ) /*0x7c094d*/
        v38 = v20; /*0x7c094f*/
    }
    else
    {
      v43 = aP1; /*0x7c0955*/
      *(unsigned int *)(a1 + 1964) = 0; /*0x7c0959*/
    }
    if ( arg8 ) /*0x7c0969*/
    {
      memset(*(void **)(a1 + 1940), 0, *(unsigned int *)(a1 + 1948)); /*0x7c0982*/
      memset(*(void **)(a1 + 1932), 0, *(unsigned int *)(a1 + 152)); /*0x7c099e*/
      *(unsigned int *)(a1 + 1968) = 0; /*0x7c09af*/
      if ( v43 ) /*0x7c09b5*/
      {
        *(unsigned int *)(a1 + 1936) = v15; /*0x7c09c3*/
        v21 = 0; /*0x7c09c9*/
        v22 = (unsigned int)v15 / *(unsigned int *)(a1 + 156); /*0x7c09cb*/
        if ( v22 > 0 ) /*0x7c09d3*/
        {
          do /*0x7c09e3*/
          {
            ++v21; /*0x7c09db*/
            *(unsigned char *)(*(unsigned int *)(a1 + 1940) + v21 - 1) = 1; /*0x7c09de*/
          }
          while ( v21 < v22 ); /*0x7c09e3*/
        }
      }
      else
      {
        *(unsigned int *)(a1 + 1936) = 0; /*0x7c09b7*/
      }
    }
  }
  else
  {
    a4 = 0; /*0x7c09e7*/
    v43 = aP1; /*0x7c09ec*/
    *(unsigned int *)(a1 + 1964) = 0; /*0x7c09f0*/
  }
  if ( !aP1 ) /*0x7c09fe*/
    goto LABEL_66; /*0x7c09fe*/
  v23 = *(uint16_t *)(a1 + 1812); /*0x7c0a06*/
  if ( !(unsigned short)v23 || (*(unsigned char *)(a1 + 1814) & 3) == 0 ) /*0x7c0a18*/
  {
  LABEL_51:
    if ( !(*(int (__cdecl **)(int, int, unsigned int, int))(a1 + 64))( /*0x7c0a55*/
            a1,
            7,
            0,
            2 * (*(unsigned int *)(*(unsigned int *)(a1 + 1892) + 4 * v38) & 0xFFFFFFF)) )
    {
      v26 = (gamemd::DSurface *)(v38);
      result = (gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((int)((gamemd::DSurface *)(-1)))))))))))))))))));
      *(unsigned int *)(a1 + 384) = v38; /*0x7c0a6e*/
      v28 = 5; /*0x7c0a76*/
      if ( v39 ) /*0x7c0a7b*/
        v28 = 21; /*0x7c0a7d*/
      if ( !a4 ) /*0x7c0a88*/
        v28 |= 2u; /*0x7c0a8a*/
      v29 = aP1 - v38; /*0x7c0a8d*/
      v45 = 0; /*0x7c0a8f*/
      if ( v29 <= 0 ) /*0x7c0a99*/
        return result; /*0x7c0a99*/
      while ( 1 ) /*0x7c0a9f*/
      {
        if ( arg8 ) /*0x7c0aa5*/
          *(unsigned int *)(*(unsigned int *)(a1 + 368) + 20) &= ~1u; /*0x7c0aad*/
        if ( a4 ) /*0x7c0ab7*/
          break; /*0x7c0ab7*/
  LABEL_89:
        if ( v37 && v26 <= (gamemd::DSurface *)(v40) ) /*0x7c0c21*/
          v28 |= 8u; /*0x7c0c23*/
        else
          v28 &= ~8u; /*0x7c0c28*/
        result = FillAudioStreamBuffer(a1, v28); /*0x7c0c2f*/
        if ( result != (unsigned int)((gamemd::DSurface *))(-1) ) /*0x7c0c37*/
        {
          if ( !arg8 || result != (unsigned int)((gamemd::DSurface *))(-9) && result != -11 ) /*0x7c0c49*/
            return result; /*0x7c0c49*/
          result = -1; /*0x7c0c4b*/
        }
        ++v26; /*0x7c0c52*/
        if ( ++v45 >= (int)(v29) ) /*0x7c0c5a*/
          return result; /*0x7c0c5a*/
      }
      if ( arg8 ) /*0x7c0abf*/
      {
        v30 = v26 < v43; /*0x7c0ac1*/
        if ( v26 != v43 ) /*0x7c0ac5*/
          goto LABEL_64; /*0x7c0ac5*/
        *(unsigned int *)(a1 + 1968) = 0; /*0x7c0ac7*/
      }
      v30 = v26 < v43; /*0x7c0ad1*/
  LABEL_64:
      if ( v30 ) /*0x7c0ad5*/
        v28 |= 2u; /*0x7c0adb*/
      else
        v28 &= ~2u; /*0x7c0c12*/
      goto LABEL_89; /*0x7c0ade*/
    }
    return -6; /*0x7c0c6a*/
  }
  v24 = *(uint16_t **)(a1 + 1820); /*0x7c0a1a*/
  v25 = 0; /*(gamemd::DSurface *)((gamemd::DSurface *))(0x7c0a20)*/
  while ( aP1 != *v24 ) /*0x7c0a2d*/
  {
    ++v25; /*0x7c0a33*/
    v24 += 2; /*0x7c0a34*/
    if ( v25 >= v23 ) /*0x7c0a39*/
      goto LABEL_51; /*0x7c0a39*/
  }
  LABEL_66:
  if ( arg8 ) /*0x7c0ae9*/
    *(unsigned int *)(*(unsigned int *)(a1 + 368) + 20) = 0; /*0x7c0af1*/
  if ( v37 ) /*0x7c0afa*/
  {
    v44 = 16; /*0x7c0afc*/
  }
  else
  {
    v44 = 0; /*0x7c0b0c*/
    *(unsigned int *)(a1 + 360) = *(unsigned int *)(a1 + 356); /*0x7c0b10*/
  }
  v31 = (int)(*(unsigned int *)(a1 + 1892));
  v32 = v42; /*0x7c0b22*/
  v33 = -1; /*0x7c0b26*/
  v34 = 0; /*0x7c0b29*/
  if ( (*(unsigned char *)(a1 + 340) & 4) != 0 && v42 == *(unsigned int *)(a1 + 1800) ) /*0x7c0b3a*/
  {
    v35 = *(unsigned int *)(a1 + 1792); /*0x7c0b40*/
    if ( v35 ) /*0x7c0b48*/
    {
      v34 = (gamemd::DSurface *)(v35 + *(unsigned int *)(a1 + 1788) <= 2 * (*(unsigned int *)(v31 + 4 * *(unsigned int *)(a1 + 300)) & 0xFFFFFFF));
      *(unsigned int *)(a1 + 1796) = 0; /*0x7c0b6c*/
  LABEL_75:
      if ( v32 > 0 /*0x7c0bc2*/
        && ((v44 & 0x10) == 0 || (*(unsigned char *)(a1 + 234) & 0x10) == 0)
        && (v33 = FillAudioStreamBuffer(a1, v44 | 6), v33 != -1)
        || !v34
        || (v36 = (*(int (__cdecl **)(int, int, unsigned int, int))(a1 + 64))(
                    a1,
                    8,
                    0,
                    *(unsigned int *)(a1 + 1788) + *(unsigned int *)(a1 + 1792)) == 0,
            result = -6,
            v36) )
      {
        result = (gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)((unsigned int)((gamemd::DSurface *)(v33)))))))))))))));
      }
      goto LABEL_82; /*0x7c0bc4*/
    }
  }
  if ( !(*(int (__cdecl **)(int, int, unsigned int, int))(a1 + 64))(a1, 7, 0, 2 * (*(unsigned int *)(v31 + 4 * v42) & 0xFFFFFFF)) ) /*0x7c0c05*/
    goto LABEL_75; /*0x7c0c05*/
  result = -6; /*0x7c0c0b*/
  LABEL_82:
  if ( arg8 && (result == (unsigned int)((gamemd::DSurface *))(-9) || result == -11) ) /*0x7c0bda*/
    return -1; /*0x7c0be3*/
  return result; /*0x7c0be0*/
}
}
// 0x7C2590
namespace gamemd {
void RenderAudioVideoFrame(const char * a0, unsigned int * a1, ObjectClass * aP2)
{
  int (__cdecl *v5)(unsigned int, int, unsigned int, int); // eax
  unsigned int *v6; // eax
  unsigned short *v7; // ebx
  int v8; // eax
  unsigned int *v9; // ebp
  signed int v10; // ecx
  unsigned int v11; // edx
  unsigned short *v12; // esi
  int v13; // eax
  int v14; // ecx
  int16_t v15; // dx
  unsigned int *v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // cl
  int v20; // eax
  const char *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  const char *v25; // [esp+10h] [ebp-10h] BYREF
  int v26; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v27; // [esp+18h] [ebp-8h] BYREF
  unsigned int v28; // [esp+1Ch] [ebp-4h]

  v25 = a0; /*0x7c259f*/
  *(unsigned int *)aP2 = 0; /*0x7c25a3*/
  if ( !a1 ) /*0x7c25a9*/
    return -17; /*0x7c25b7*/
  if ( !a1[4] ) /*0x7c25ba*/
    return -15; /*0x7c25cd*/
  if ( !a1[14] ) /*0x7c25d0*/
    return -16; /*0x7c25e3*/
  v5 = (int (__cdecl *)(unsigned int, int, unsigned int, int))a1[1]; /*0x7c25e6*/
  if ( v5 ) /*0x7c25f6*/
  {
    v8 = v5(0, 2, 0, 2012); /*0x7c261a*/
    v7 = (unsigned short *)v8; /*0x7c261c*/
    if ( v8 ) /*0x7c2623*/
    {
      ((void (__cdecl *)(int, int, int, int))a1[1])(v8, 4, v8, 2012); /*0x7c2632*/
      goto LABEL_12; /*0x7c2632*/
    }
    return -8; /*0x7c2b4c*/
  }
  v6 = (unsigned int *)(AllocCallback::Dispatch(0, 2, 0, 0x7DCu));
  v7 = (unsigned int *)(v6);
  if ( !v6 ) /*0x7c2604*/
    return -8; /*0x7c2604*/
  AllocCallback::Dispatch((int)v6, 4, v6, 0x7DCu); /*0x7c2613*/
  LABEL_12:
  v9 = v7 + 32; /*0x7c2635*/
  memset(v7, 0, 0x7DCu); /*0x7c2641*/
  *((unsigned int *)v7 + 12) = 2012; /*0x7c264a*/
  qmemcpy(v7 + 32, a1, 0x88u); /*0x7c2654*/
  if ( !*((unsigned int *)v7 + 17) ) /*0x7c2656*/
    *((unsigned int *)v7 + 17) = AllocCallback::Dispatch; /*0x7c265d*/
  if ( !*v9 ) /*0x7c2664*/
    *v9 = sub_7BF240; /*0x7c266a*/
  if ( ((int (__cdecl *)(unsigned short *, int, const char *, unsigned int))*v9)(v7, 3, v25, 0) ) /*0x7c267b*/
  {
    (*((void (__cdecl **)(unsigned short *, int, unsigned short *, int))v7 + 17))(v7, 5, v7, 2012); /*0x7c268e*/
    (*((void (__cdecl **)(unsigned short *, int, unsigned short *, unsigned int))v7 + 17))(v7, 3, v7, 0); /*0x7c2697*/
    return -3; /*0x7c26a9*/
  }
  v10 = strlen(v25) - 31; /*0x7c26b6*/
  if ( v10 < 0 ) /*0x7c26b9*/
    v10 = 0; /*0x7c26bb*/
  strcpy((char *)v7 + 200, &v25[v10]); /*0x7c26e0*/
  if ( ((int (__cdecl *)(unsigned short *, int, unsigned int *, int))*v9)(v7, 5, &v27, 8) ) /*0x7c26f1*/
    goto LABEL_21; /*0x7c26f9*/
  if ( v27 != 1297239878 || !v28 ) /*0x7c2721*/
    goto LABEL_26; /*0x7c2721*/
  if ( ((int (__cdecl *)(unsigned short *, int, unsigned int *, int))*v9)(v7, 5, &v27, 4) ) /*0x7c272d*/
  {
  LABEL_21:
    DSurface::Flip((int)v7); /*0x7c26fb*/
    return -4; /*0x7c270e*/
  }
  if ( v27 != 1095849559 ) /*0x7c2755*/
  {
  LABEL_26:
    DSurface::Flip((int)v7); /*0x7c2757*/
    return -7; /*0x7c276a*/
  }
  while ( 1 ) /*0x7c27d0*/
  {
    while ( 1 ) /*0x7c27c5*/
    {
      while ( 1 ) /*0x7c27bf*/
      {
        while ( 1 ) /*0x7c2772*/
        {
          if ( ((int (__cdecl *)(unsigned short *, int, unsigned int *, int))*v9)(v7, 5, &v27, 8) ) /*0x7c277c*/
            goto LABEL_113; /*0x7c2784*/
          v11 = (((v28 << 16) | v28 & 0xFF00) << 8) | ((IDA_HIWORD(v28) | v28 & 0xFF0000) >> 8); /*0x7c27b4*/
          v28 = v11; /*0x7c27bb*/
          if ( v27 <= 0x464E4950 ) /*0x7c27bf*/
            break; /*0x7c27bf*/
          switch ( v27 ) /*0x7c28d8*/
          {
            case 0x4943464Du: /*0x7c28d8*/
              if ( File::ParseAudioFileRIFF(v7) != -1 ) /*0x7c2939*/
                goto LABEL_113; /*0x7c2939*/
              break;
            case 0x4943534Du: /*0x7c28d8*/
              if ( Buffer::AllocateCodecFrameBuffers(v7) != -1 ) /*0x7c2924*/
                goto LABEL_113; /*0x7c2924*/
              break;
            case 0x50494C43u: /*0x7c28d8*/
              if ( Audio_Render_7C1130(v7) != -1 ) /*0x7c290f*/
                goto LABEL_113; /*0x7c290f*/
              break;
            default:
              goto LABEL_56; /*0x7c28e6*/
          }
        }
        if ( v27 != 1179535696 ) /*0x7c27c5*/
          break; /*0x7c27c5*/
        if ( Audio_Render_7C1BE0(v7) != -1 ) /*0x7c28c8*/
          goto LABEL_113; /*0x7c28c8*/
      }
      if ( v27 <= 0x464E4946 ) /*0x7c27d0*/
        break; /*0x7c27d0*/
      if ( v27 != 1179535692 ) /*0x7c28a7*/
        goto LABEL_56; /*0x7c28a7*/
      if ( Audio_Render_7C1150(v7) != -1 ) /*0x7c28b3*/
        goto LABEL_113; /*0x7c28b3*/
    }
    if ( v27 == 1179535686 ) /*0x7c27d6*/
      break; /*0x7c27d6*/
    if ( v27 == 1145590102 ) /*0x7c27e1*/
    {
      if ( v11 != 42 ) /*0x7c2806*/
        goto LABEL_26; /*0x7c2806*/
      v12 = v7 + 116; /*0x7c280c*/
      if ( ((int (__cdecl *)(unsigned short *, int, unsigned short *, int))*v9)(v7, 5, v7 + 116, 42) ) /*0x7c2817*/
        goto LABEL_113; /*0x7c281f*/
      *v7 = *v12; /*0x7c2828*/
      *((unsigned int *)v7 + 4) = (uint16_t)v7[118]; /*0x7c282f*/
      v7[1] = v7[119]; /*0x7c2836*/
      v7[2] = v7[120]; /*0x7c283e*/
      v7[6] = *((uint8_t *)v7 + 264); /*0x7c2847*/
      v7[7] = *((uint8_t *)v7 + 244); /*0x7c2850*/
      if ( *((unsigned int *)v7 + 28) == -1 ) /*0x7c285c*/
        *((unsigned int *)v7 + 28) = *((uint8_t *)v7 + 244); /*0x7c2863*/
      if ( *((unsigned int *)v7 + 29) == -1 ) /*0x7c2869*/
        *((unsigned int *)v7 + 29) = *((uint8_t *)v7 + 244); /*0x7c2870*/
      v13 = *((unsigned int *)v7 + 29); /*0x7c2873*/
      if ( v13 == -1 || !v13 ) /*0x7c287c*/
        *((unsigned int *)v7 + 29) = *((uint8_t *)v7 + 244); /*0x7c2883*/
      if ( *v12 > 1u && (v7[117] & 2) == 0 ) /*0x7c2894*/
        *((unsigned int *)v7 + 33) &= ~0x40u; /*0x7c289a*/
    }
    else if ( v27 == 1179535683 ) /*0x7c27e8*/
    {
      if ( Audio_Render_7C1A70(v7) != -1 ) /*0x7c27f8*/
        goto LABEL_113; /*0x7c27f8*/
    }
    else
    {
  LABEL_56:
      if ( ((int (__cdecl *)(unsigned short *, int, int, unsigned int))*v9)(v7, 7, 1, (v11 + 1) & 0xFFFFFFFE) ) /*0x7c28f2*/
      {
        DSurface::Flip((int)v7); /*0x7c29e4*/
        return -6; /*0x7c29f5*/
      }
    }
  }
  if ( Surface::CommitSurfaceBuffersAudio((int)v7) != -1 ) /*0x7c2950*/
  {
  LABEL_99:
    DSurface::Flip((int)v7); /*0x7c2b39*/
    return -8; /*0x7c2b3b*/
  }
  if ( Audio_Render_7C1D40(v7, v28) != -1 ) /*0x7c2963*/
    goto LABEL_113; /*0x7c2963*/
  if ( !*((unsigned char *)v7 + 264) && !v7[940] ) /*0x7c2973*/
  {
    v14 = *((unsigned int *)v7 + 4); /*0x7c297d*/
    v15 = 0; /*0x7c2980*/
    if ( v14 > 0 ) /*0x7c2984*/
    {
      v16 = (unsigned int *)*((unsigned int *)v7 + 473); /*0x7c2986*/
      do /*0x7c2999*/
      {
        if ( (*v16 & 0x40000000) != 0 ) /*0x7c2992*/
          ++v15; /*0x7c2994*/
        ++v16; /*0x7c2995*/
        --v14; /*0x7c2998*/
      }
      while ( v14 ); /*0x7c2999*/
    }
    v7[940] = v15; /*0x7c299b*/
  }
  ((AbstractClass *)(v7))->finalizeDestruction(); /*0x7c29a4*/
  if ( (v7[117] & 1) == 0 ) /*0x7c29b0*/
  {
    v17 = *((unsigned int *)v7 + 33); /*0x7c29b2*/
    IDA_LOBYTE(v17) = v17 & 0xFE; /*0x7c29b5*/
    *((unsigned int *)v7 + 33) = v17; /*0x7c29b7*/
  }
  v18 = *((unsigned int *)v7 + 33); /*0x7c29ba*/
  if ( (v18 & 1) != 0 ) /*0x7c29bf*/
  {
    if ( !*((unsigned int *)v7 + 22) ) /*0x7c29c5*/
    {
      DSurface::Flip((int)v7); /*0x7c29ce*/
      return -21; /*0x7c29df*/
    }
    if ( (v18 & 0x40) != 0 ) /*0x7c29fa*/
    {
      v7[30] = v7[130]; /*0x7c2a03*/
      *((unsigned char *)v7 + 62) = *((unsigned char *)v7 + 262); /*0x7c2a0d*/
      v19 = *((unsigned char *)v7 + 263); /*0x7c2a10*/
    }
    else
    {
      v7[30] = v7[128]; /*0x7c2a1f*/
      *((unsigned char *)v7 + 62) = *((unsigned char *)v7 + 258); /*0x7c2a29*/
      v19 = *((unsigned char *)v7 + 259); /*0x7c2a2c*/
    }
    *((unsigned char *)v7 + 63) = v19; /*0x7c2a32*/
    if ( Audio_Render_7BD170(v7) != -1 ) /*0x7c2a3e*/
    {
      DSurface::Flip((int)v7); /*0x7c2a42*/
      return -13; /*0x7c2a53*/
    }
    sub_4125F0(); /*0x7c2a56*/
    *((unsigned int *)v7 + 495) |= 0x40000000u; /*0x7c2a67*/
    Audio_Render_7C7350(v7 + 1000); /*0x7c2a74*/
  }
  else if ( *((unsigned int *)v7 + 22) ) /*0x7c2a7e*/
  {
    (*((void (__cdecl **)(unsigned short *, int, unsigned int, unsigned int))v7 + 22))(v7, 1, 0, 0); /*0x7c2a8c*/
  }
  v20 = *((unsigned int *)v7 + 33); /*0x7c2a92*/
  if ( (v20 & 0x20) == 0 ) /*0x7c2a97*/
  {
    *((unsigned int *)v7 + 75) = *((unsigned int *)v7 + 71); /*0x7c2bf7*/
    goto LABEL_108; /*0x7c2bf7*/
  }
  if ( (v20 & 0x100) != 0 && v7[906] )
  {
    if ( ((int (__cdecl *)(unsigned short *, int, const char **, unsigned int))*v9)(v7, 9, &v25, 0) ) /*0x7c2abe*/
      v25 = 0; /*0x7c2ac8*/
    *((unsigned int *)v7 + 446) = Audio_Render_7C3860(v7, v25); /*0x7c2adf*/
    (*((void (__cdecl **)(unsigned short *, int, int *, unsigned int))v7 + 17))(v7, 6, &v26, 0); /*0x7c2aeb*/
    v21 = (const char *)v26; /*0x7c2aee*/
    if ( v26 < 0 )
    {
      v21 = (int)v25 <= 0 ? 0 : v25;
      v26 = (int)v21; /*0x7c2b07*/
    }
    if ( *((unsigned int *)v7 + 446) > (int)v21 ) /*0x7c2b11*/
      *((unsigned int *)v7 + 446) = v21; /*0x7c2b13*/
    if ( *((int *)v7 + 446) > 0 ) /*0x7c2b21*/
    {
      v22 = (*((int (__cdecl **)(unsigned short *, int, unsigned int, unsigned int))v7 + 17))(v7, 2, 0, *((unsigned int *)v7 + 446)); /*0x7c2b29*/
      *((unsigned int *)v7 + 445) = v22; /*0x7c2b2f*/
      if ( !v22 ) /*0x7c2b37*/
        goto LABEL_99; /*0x7c2b37*/
      (*((void (__cdecl **)(unsigned short *, int, unsigned int, unsigned int))v7 + 17))(v7, 4, *((unsigned int *)v7 + 445), *((unsigned int *)v7 + 446)); /*0x7c2b60*/
      v23 = *((unsigned int *)v7 + 446); /*0x7c2b69*/
      v24 = *((unsigned int *)v7 + 12); /*0x7c2b6f*/
      *((unsigned int *)v7 + 85) |= 4u; /*0x7c2b7a*/
      *((unsigned int *)v7 + 12) = v23 + v24; /*0x7c2b80*/
      *((unsigned int *)v7 + 452) = -1; /*0x7c2b83*/
      *((unsigned int *)v7 + 450) = -1; /*0x7c2b89*/
      *((unsigned int *)v7 + 451) = -1; /*0x7c2b8f*/
    }
  }
  if ( *((int *)v7 + 44) < 0 ) /*0x7c2b9a*/
  {
    if ( SeekAudioStream((int)v7, 0, *((unsigned int *)v7 + 71), 0, 0) == -1 ) /*0x7c2bd9*/
      goto LABEL_108; /*0x7c2bd9*/
  LABEL_104:
    DSurface::Flip((int)v7); /*0x7c2bad*/
    return -23; /*0x7c2bb4*/
  }
  else
  {
    if ( Audio_Render_7C3430(*((unsigned int *)v7 + 45), 2) != -1 ) /*0x7c2bab*/
      goto LABEL_104; /*0x7c2bab*/
  LABEL_108:
    if ( Audio_Render_7BE670(v7) != -1 ) /*0x7c2c06*/
      return -3; /*0x7c2c14*/
    if ( (v7[66] & 0x20) != 0 && *((int *)v7 + 44) >= 0 || Audio_Process_7C0490(v7) == -1 ) /*0x7c2c2d*/
    {
      *aP2 = v7; /*0x7c2c4d*/
      return -1; /*0x7c2c49*/
    }
    else
    {
  LABEL_113:
      DSurface::Flip((int)v7); /*0x7c2c2f*/
      return -4; /*0x7c2c36*/
    }
  }
}
}
// 0x7C2D00
namespace gamemd {
void AudioStream_Process(int a1, int a2, char a3)
{
  int v5; // edi
  int v6; // eax
  int (__cdecl *v7)(int); // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  v5 = -1; /*0x7c2d08*/
  if ( (*(unsigned char *)(a1 + 336) & 8) == 0 ) /*0x7c2d17*/
  {
    v5 = Audio_Process_7BE660((TechnoClass *)a1); /*0x7c2d1e*/
    if ( v5 != -1 ) /*0x7c2d23*/
      return v5; /*0x7c2d23*/
    if ( (*(unsigned char *)(a1 + 336) & 0x10) == 0 ) /*0x7c2d30*/
      Audio_Process_7BE4A0((ObjectClass *)a1); /*0x7c2d34*/
    if ( (*(unsigned char *)(a1 + 132) & 1) != 0 && **(unsigned char **)(a1 + 1940) ) /*0x7c2d48*/
      AudioStream::SetFlag4C((AudioStream *)a1); /*0x7c2d4f*/
    CalcAudioStreamOffset(a1, 60 * *(unsigned int *)(*(unsigned int *)(a1 + 416) + 28) / *(unsigned int *)(a1 + 116)); /*0x7c2d6e*/
    *(unsigned int *)(a1 + 32) = AudioStream::GetPosition((AudioStream *)a1); /*0x7c2d7a*/
    v6 = *(unsigned int *)(a1 + 336); /*0x7c2d7d*/
    IDA_LOBYTE(v6) = v6 | 8; /*0x7c2d83*/
    *(unsigned int *)(a1 + 336) = v6; /*0x7c2d85*/
  }
  v7 = *(int (__cdecl **)(int))(a1 + 84); /*0x7c2d8b*/
  if ( v7 ) /*0x7c2d90*/
    v8 = v7(a1); /*0x7c2d93*/
  else
    v8 = -1; /*0x7c2d9a*/
  v9 = *(unsigned int *)(a1 + 40); /*0x7c2d9d*/
  if ( v9 == -1 ) /*0x7c2da3*/
  {
    *(unsigned int *)(a1 + 40) = v8; /*0x7c2da5*/
    *(unsigned int *)(a1 + 44) = 0; /*0x7c2da8*/
  }
  else
  {
    *(unsigned int *)(a1 + 40) = v8; /*0x7c2db3*/
    if ( v8 - v9 > *(unsigned int *)(a1 + 44) ) /*0x7c2dbd*/
      *(unsigned int *)(a1 + 44) = v8 - v9; /*0x7c2dbf*/
  }
  v10 = *(unsigned int *)(a1 + 336); /*0x7c2dc8*/
  if ( a2 != 2 ) /*0x7c2dce*/
  {
    if ( (v10 & 0x40) != 0 ) /*0x7c2dd6*/
    {
      IDA_LOBYTE(v10) = v10 & 0xBF; /*0x7c2dd8*/
      *(unsigned int *)(a1 + 336) = v10; /*0x7c2dda*/
      if ( (*(unsigned char *)(a1 + 132) & 1) != 0 ) /*0x7c2de8*/
        AudioStream::SetFlag4C((AudioStream *)a1); /*0x7c2dec*/
      CalcAudioStreamOffset(a1, *(unsigned int *)(a1 + 36)); /*0x7c2df6*/
    }
    v11 = *(unsigned int *)(a1 + 336); /*0x7c2dfb*/
    if ( (*(unsigned char *)(a1 + 336) & 6) != 6 ) /*0x7c2e09*/
    {
      while ( 1 ) /*0x7c2e19*/
      {
        if ( (v11 & 4) == 0 ) /*0x7c2e1b*/
        {
          v12 = FillAudioStreamBuffer(a1, 0); /*0x7c2e25*/
          v5 = v12; /*0x7c2e2a*/
          if ( v12 == -1 ) /*0x7c2e2f*/
          {
            ++*(unsigned int *)(a1 + 20); /*0x7c2e31*/
          }
          else if ( v12 != -9 && v12 != -11 ) /*0x7c2e3e*/
          {
            *(unsigned int *)(a1 + 336) |= 4u; /*0x7c2e40*/
          }
          if ( (*(unsigned int *)(a1 + 132) & 0x200) != 0 ) /*0x7c2e4c*/
          {
            if ( v12 == -9 || (*(unsigned char *)(a1 + 336) & 4) != 0 ) /*0x7c2e59*/
            {
              v15 = *(unsigned int *)(a1 + 336); /*0x7c2e90*/
              if ( (v15 & 0x200) != 0 && (v15 & 0x800) == 0 ) /*0x7c2e9d*/
              {
                IDA_BYTE1(v15) |= 4u; /*0x7c2e9f*/
                *(unsigned int *)(a1 + 336) = v15; /*0x7c2ea2*/
                if ( (*(unsigned char *)(a1 + 132) & 1) != 0 ) /*0x7c2eb0*/
                  AudioStream::SetFlag4C((AudioStream *)a1); /*0x7c2eb4*/
              }
            }
            else
            {
              v13 = *(unsigned int *)(a1 + 1980); /*0x7c2e5b*/
              if ( (v13 & 0x400) != 0 ) /*0x7c2e64*/
              {
                if ( (v13 & 0x40) != 0 ) /*0x7c2e68*/
                  Audio_Process_7BD290((UnitClass *)a1); /*0x7c2e6c*/
                *(unsigned int *)(a1 + 336) |= 0x200u; /*0x7c2e79*/
                v14 = *(unsigned int *)(a1 + 1980); /*0x7c2e7f*/
                IDA_BYTE1(v14) &= ~4u; /*0x7c2e85*/
                *(unsigned int *)(a1 + 1980) = v14; /*0x7c2e88*/
              }
            }
          }
        }
        if ( (*(unsigned char *)(a1 + 128) & 2) == 0 ) /*0x7c2ec0*/
          break; /*0x7c2ec0*/
        v22 = *(unsigned int *)(a1 + 336); /*0x7c2f85*/
        IDA_LOBYTE(v22) = v22 | 2; /*0x7c2f8b*/
        *(unsigned int *)(a1 + 336) = v22; /*0x7c2f8d*/
        *(unsigned int *)(*(unsigned int *)(a1 + 416) + 20) = 0; /*0x7c2f99*/
        *(unsigned int *)(a1 + 416) = *(unsigned int *)(*(unsigned int *)(a1 + 416) + 12); /*0x7c2fa9*/
  LABEL_62:
        if ( a2 != 1 ) /*0x7c2fb4*/
        {
          v11 = *(unsigned int *)(a1 + 336); /*0x7c2fba*/
          if ( (*(unsigned char *)(a1 + 336) & 6) != 6 ) /*0x7c2fc8*/
            continue; /*0x7c2fc8*/
        }
        goto LABEL_80; /*0x7c2fc8*/
      }
      if ( (*(unsigned int *)(a1 + 132) & 0x200) != 0 ) /*0x7c2ecc*/
      {
        v16 = *(unsigned int *)(a1 + 336); /*0x7c2ece*/
        if ( (v16 & 0x200) != 0 ) /*0x7c2ed6*/
        {
          if ( (v16 & 0x400) != 0 ) /*0x7c2edb*/
          {
            IDA_BYTE1(v16) &= 0xF9u; /*0x7c2edd*/
            *(unsigned int *)(a1 + 336) = v16; /*0x7c2ee0*/
          }
          else if ( (v16 & 0x800) == 0 ) /*0x7c2eeb*/
          {
            v5 = -10; /*0x7c2fd3*/
            goto LABEL_80; /*0x7c2fd8*/
          }
        }
      }
      if ( (a3 & 1) != 0 ) /*0x7c2ef7*/
      {
        v17 = *(unsigned int *)(a1 + 420); /*0x7c2ef9*/
        IDA_LOBYTE(v17) = v17 | 2; /*0x7c2eff*/
      }
      else
      {
        if ( (a3 & 2) == 0 ) /*0x7c2f05*/
          goto LABEL_50; /*0x7c2f05*/
        v17 = *(unsigned int *)(a1 + 420) | 4; /*0x7c2f0d*/
      }
      *(unsigned int *)(a1 + 420) = v17; /*0x7c2f0f*/
  LABEL_50:
      v18 = (*(int (**)(int))(a1 + 1916))(a1); /*0x7c2f15*/
      v5 = v18; /*0x7c2f1d*/
      if ( v18 == -1 ) /*0x7c2f22*/
      {
        if ( (*(unsigned char *)(a1 + 420) & 8) == 0 ) /*0x7c2f2b*/
          ++*(unsigned int *)(a1 + 24); /*0x7c2f2d*/
        v5 = Audio_Process_7C3750((TechnoClass *)a1); /*0x7c2f37*/
        if ( v5 == -1 ) /*0x7c2f3c*/
        {
          v20 = *(unsigned int *)(a1 + 420); /*0x7c2f48*/
          v5 = *(unsigned int *)(a1 + 1744); /*0x7c2f4e*/
          IDA_LOBYTE(v20) = v20 & 0xF9; /*0x7c2f54*/
          *(unsigned int *)(a1 + 420) = v20; /*0x7c2f56*/
          goto LABEL_62; /*0x7c2f5c*/
        }
        v19 = *(unsigned int *)(a1 + 336); /*0x7c2f3e*/
        IDA_LOBYTE(v19) = v19 | 6; /*0x7c2f44*/
      }
      else
      {
        if ( v18 != -9 ) /*0x7c2f61*/
          goto LABEL_60; /*0x7c2f61*/
        v19 = *(unsigned int *)(a1 + 336); /*0x7c2f63*/
        if ( (v19 & 4) == 0 ) /*0x7c2f6b*/
          goto LABEL_60; /*0x7c2f6b*/
        IDA_LOBYTE(v19) = v19 | 2; /*0x7c2f6d*/
      }
      *(unsigned int *)(a1 + 336) = v19; /*0x7c2f6f*/
  LABEL_60:
      v21 = *(unsigned int *)(a1 + 420); /*0x7c2f75*/
      IDA_LOBYTE(v21) = v21 & 0xF9; /*0x7c2f7b*/
      *(unsigned int *)(a1 + 420) = v21; /*0x7c2f7d*/
      goto LABEL_62; /*0x7c2f83*/
    }
    goto LABEL_80; /*0x7c2e09*/
  }
  if ( (v10 & 0x40) == 0 ) /*0x7c2fdf*/
  {
    IDA_LOBYTE(v10) = v10 | 0x40; /*0x7c2fe1*/
    *(unsigned int *)(a1 + 336) = v10; /*0x7c2fe5*/
    *(unsigned int *)(a1 + 36) = AudioStream::GetPosition((AudioStream *)a1); /*0x7c2ff0*/
    if ( (*(unsigned char *)(a1 + 1980) & 0x40) != 0 ) /*0x7c2ffb*/
      Audio_Process_7BD290((UnitClass *)a1); /*0x7c2fff*/
  }
  if ( (a3 & 2) == 0 ) /*0x7c3009*/
  {
    v5 = -14; /*0x7c307e*/
    goto LABEL_80; /*0x7c307e*/
  }
  *(unsigned int *)(a1 + 420) |= 0x14u; /*0x7c3014*/
  v23 = (*(int (**)(int))(a1 + 1916))(a1); /*0x7c301c*/
  v5 = v23; /*0x7c3022*/
  if ( v23 != -1 ) /*0x7c3027*/
  {
    if ( v23 != -9 ) /*0x7c305a*/
      goto LABEL_78; /*0x7c305a*/
    v24 = *(unsigned int *)(a1 + 336); /*0x7c305c*/
    if ( (v24 & 4) == 0 ) /*0x7c3064*/
      goto LABEL_78; /*0x7c3064*/
    IDA_LOBYTE(v24) = v24 | 2; /*0x7c3066*/
  LABEL_77:
    *(unsigned int *)(a1 + 336) = v24; /*0x7c3068*/
  LABEL_78:
    v26 = *(unsigned int *)(a1 + 420); /*0x7c306e*/
    IDA_LOBYTE(v26) = v26 & 0xE9; /*0x7c3074*/
    *(unsigned int *)(a1 + 420) = v26; /*0x7c3076*/
    goto LABEL_80; /*0x7c307c*/
  }
  v5 = Audio_Process_7C3750((TechnoClass *)a1); /*0x7c3030*/
  if ( v5 != -1 ) /*0x7c3035*/
  {
    v24 = *(unsigned int *)(a1 + 336); /*0x7c3037*/
    IDA_LOBYTE(v24) = v24 | 6; /*0x7c303d*/
    goto LABEL_77; /*0x7c303f*/
  }
  v25 = *(unsigned int *)(a1 + 420); /*0x7c3041*/
  v5 = *(unsigned int *)(a1 + 1744); /*0x7c3047*/
  IDA_LOBYTE(v25) = v25 & 0xE9; /*0x7c304d*/
  *(unsigned int *)(a1 + 420) = v25; /*0x7c304f*/
  LABEL_80:
  if ( (*(unsigned char *)(a1 + 336) & 6) == 6 || a2 == 3 ) /*0x7c3097*/
  {
    *(unsigned int *)(a1 + 36) = AudioStream::GetPosition((AudioStream *)a1); /*0x7c30a0*/
    if ( (*(unsigned char *)(a1 + 1980) & 0x40) != 0 ) /*0x7c30ab*/
      Audio_Process_7BD2B0((UnitClass *)a1); /*0x7c30af*/
    return -2; /*0x7c30b4*/
  }
  return v5; /*0x7c30bb*/
}
}
// 0x7C34B0
namespace gamemd {
void SeekAudioStream(int a1, DSurface * aP1, DSurface * aP2, int a4, unsigned int a5)
{
  signed int v5; // edi
  int result; // eax
  DSurface * v7;
  int v8; // edi
  int v9; // ebx

  v5 = (int)(*(unsigned int *)(a1 + 16));
  result = -1; /*0x7c34b6*/
  if ( aP1 >= (gamemd::DSurface *)(v5) ) /*0x7c34bb*/
    return -23; /*0x7c34bb*/
  v7 = aP2; /*0x7c34c1*/
  if ( aP2 >= (gamemd::DSurface *)(v5) ) /*0x7c34c7*/
    return -23; /*0x7c34c7*/
  if ( aP1 >= aP2 ) /*0x7c34cf*/
    return -23; /*0x7c34cf*/
  v8 = a5; /*0x7c34d5*/
  if ( a5 > 2 ) /*0x7c34db*/
    return -23; /*0x7c35a4*/
  v9 = a4; /*0x7c34ea*/
  if ( a4 < 0 ) /*0x7c34f0*/
    v9 = -1; /*0x7c34f2*/
  if ( *(unsigned int *)(a1 + 292) || a5 != 1 ) /*0x7c3503*/
  {
    if ( a5 != 2 ) /*0x7c350f*/
    {
      if ( *(char *)(a1 + 336) >= 0 ) /*0x7c3518*/
      {
        *(unsigned int *)(a1 + 324) = aP1; /*0x7c3546*/
        *(unsigned int *)(a1 + 320) = aP2; /*0x7c354c*/
      }
      else
      {
        *(unsigned int *)(a1 + 316) = aP1; /*0x7c351c*/
        if ( a5 ) /*0x7c3522*/
        {
          aP1 = *(unsigned int *)(a1 + 296); /*0x7c3538*/
          *(unsigned int *)(a1 + 312) = *(unsigned int *)(a1 + 300); /*0x7c353e*/
        }
        else
        {
          *(unsigned int *)(a1 + 312) = aP2; /*0x7c3524*/
          v7 = *(unsigned int *)(a1 + 300); /*0x7c352a*/
        }
      }
    }
  }
  else
  {
    v8 = 2; /*0x7c3505*/
  }
  *(unsigned int *)(a1 + 296) = aP1; /*0x7c3555*/
  if ( v8 == 1 )
  {
    *(unsigned int *)(a1 + 304) = v7; /*0x7c355e*/
    *(unsigned int *)(a1 + 308) = v9; /*0x7c3565*/
  }
  else
  {
    *(unsigned int *)(a1 + 292) = v9; /*0x7c3573*/
    if ( v8 == 2 )
    {
      *(unsigned int *)(a1 + 300) = v7; /*0x7c357d*/
      *(unsigned int *)(a1 + 284) = v7; /*0x7c3583*/
      return ProcessAudioStreamBuffer(a1, aP1, 0) < 0 ? -23 : -1;
    }
  }
  return result; /*0x7c3564*/
}
}
// 0x7C3D60
namespace gamemd {
unsigned int sub_7C3D60(int a1, unsigned short * a2, int * a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  unsigned int result; // eax
  int *v10; // edi
  int v11; // ecx
  unsigned short *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  uint16_t *v16; // eax
  int v17; // esi
  uint16_t v18; // cx
  uint16_t v19; // bx
  uint16_t *v20; // eax
  uint16_t v21; // cx
  uint16_t v22; // bx
  unsigned int v23; // [esp+Ch] [ebp-4h]
  unsigned short *v24; // [esp+1Ch] [ebp+Ch]
  int *v25; // [esp+24h] [ebp+14h]
  int *v26; // [esp+28h] [ebp+18h]

  v6 = a3; /*0x7c3d6a*/
  v7 = 2 * a6; /*0x7c3d6e*/
  result = (unsigned int)&a3[2 * a6 * a5]; /*0x7c3d7a*/
  v10 = a3; /*0x7c3d81*/
  v23 = result; /*0x7c3d88*/
  v26 = a3; /*0x7c3d8c*/
  v25 = &a3[2 * a4]; /*0x7c3d90*/
  if ( (unsigned int)a3 < result ) /*0x7c3d94*/
  {
    while ( 1 ) /*0x7c3da9*/
    {
      result = *a2 & 0x1FFF; /*0x7c3da9*/
      v11 = *a2 & 0xE000; /*0x7c3dae*/
      v24 = a2 + 1; /*0x7c3db4*/
      if ( (*a2 & 0xE000) != 0 ) /*0x7c3dba*/
      {
        if ( v11 == 0x2000 ) /*0x7c3dc2*/
        {
          v12 = (unsigned short *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x7c3de4*/
          v13 = 4; /*0x7c3de6*/
          do /*0x7c3e0b*/
          {
            v14 = v6; /*0x7c3deb*/
            v15 = 4; /*0x7c3ded*/
            do /*0x7c3e06*/
            {
              if ( *v12 != 0x8000 ) /*0x7c3df5*/
                *(unsigned short *)v14 = *v12; /*0x7c3dfc*/
              v14 = (int *)((char *)v14 + 2); /*0x7c3dff*/
              ++v12; /*0x7c3e02*/
              --v15; /*0x7c3e05*/
            }
            while ( v15 ); /*0x7c3e06*/
            v6 = (int *)((char *)v6 + v7); /*0x7c3e08*/
            --v13; /*0x7c3e0a*/
          }
          while ( v13 ); /*0x7c3e0b*/
          v10 = v26; /*0x7c3e0d*/
          result = 4 * v7; /*0x7c3e16*/
          v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x7c3e1f*/
        }
        else if ( v11 == 0x4000 ) /*0x7c3dca*/
        {
          v6 += 2; /*0x7c3dd0*/
        }
      }
      else
      {
        v16 = (uint16_t *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x7c3e2f*/
        v17 = 4; /*0x7c3e31*/
        do /*0x7c3e64*/
        {
          v18 = v16[1]; /*0x7c3e3a*/
          v19 = *v16; /*0x7c3e3e*/
          v20 = v16 + 2; /*0x7c3e46*/
          *v6 = v19 | (v18 << 16); /*0x7c3e49*/
          v21 = v20[1]; /*0x7c3e4d*/
          v22 = *v20; /*0x7c3e53*/
          v16 = v20 + 2; /*0x7c3e56*/
          v6[1] = v22 | (v21 << 16); /*0x7c3e5e*/
          v6 = (int *)((char *)v6 + v7); /*0x7c3e61*/
          --v17; /*0x7c3e63*/
        }
        while ( v17 ); /*0x7c3e64*/
        result = 4 * v7; /*0x7c3e6b*/
        v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x7c3e74*/
      }
      if ( v6 == v25 ) /*0x7c3e7a*/
      {
        v10 += v7; /*0x7c3e83*/
        result = a4; /*0x7c3e85*/
        v26 = v10; /*0x7c3e89*/
        v6 = v10; /*0x7c3e8d*/
        v25 = &v10[2 * a4]; /*0x7c3e92*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x7c3e9a*/
        break; /*0x7c3e9a*/
      a2 = v24; /*0x7c3d9d*/
    }
  }
  return result; /*0x7c3ea1*/
}
}
// 0x7C4260
namespace gamemd {
unsigned int sub_7C4260(int a1, unsigned short * a2, int * a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  unsigned int result; // eax
  int *v10; // edi
  int v11; // ecx
  unsigned short *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  uint16_t *v16; // eax
  int v17; // esi
  uint16_t v18; // cx
  uint16_t v19; // bx
  uint16_t *v20; // eax
  uint16_t v21; // cx
  uint16_t v22; // bx
  unsigned int v23; // [esp+Ch] [ebp-4h]
  unsigned short *v24; // [esp+1Ch] [ebp+Ch]
  int *v25; // [esp+24h] [ebp+14h]
  int *v26; // [esp+28h] [ebp+18h]

  v6 = a3; /*0x7c426a*/
  v7 = 2 * a6; /*0x7c426e*/
  result = (unsigned int)a3 + 2 * 2 * a6 * a5; /*0x7c427a*/
  v10 = a3; /*0x7c4281*/
  v23 = result; /*0x7c4288*/
  v26 = a3; /*0x7c428c*/
  v25 = &a3[2 * a4]; /*0x7c4290*/
  if ( (unsigned int)a3 < result ) /*0x7c4294*/
  {
    while ( 1 ) /*0x7c42a9*/
    {
      result = *a2 & 0x1FFF; /*0x7c42a9*/
      v11 = *a2 & 0xE000; /*0x7c42ae*/
      v24 = a2 + 1; /*0x7c42b4*/
      if ( (*a2 & 0xE000) != 0 ) /*0x7c42ba*/
      {
        if ( v11 == 0x2000 ) /*0x7c42c2*/
        {
          v12 = (unsigned short *)(a1 + 16 * (*a2 & 0x1FFF)); /*0x7c42e4*/
          v13 = 2; /*0x7c42e6*/
          do /*0x7c430b*/
          {
            v14 = v6; /*0x7c42eb*/
            v15 = 4; /*0x7c42ed*/
            do /*0x7c4306*/
            {
              if ( *v12 != 0x8000 ) /*0x7c42f5*/
                *(unsigned short *)v14 = *v12; /*0x7c42fc*/
              v14 = (int *)((char *)v14 + 2); /*0x7c42ff*/
              ++v12; /*0x7c4302*/
              --v15; /*0x7c4305*/
            }
            while ( v15 ); /*0x7c4306*/
            v6 = (int *)((char *)v6 + v7); /*0x7c4308*/
            --v13; /*0x7c430a*/
          }
          while ( v13 ); /*0x7c430b*/
          v10 = v26; /*0x7c430d*/
          result = 2 * v7; /*0x7c4316*/
          v6 = (int *)((char *)v6 + 8 - 2 * v7); /*0x7c431c*/
        }
        else if ( v11 == 0x4000 ) /*0x7c42ca*/
        {
          v6 += 2; /*0x7c42d0*/
        }
      }
      else
      {
        v16 = (uint16_t *)(a1 + 16 * (*a2 & 0x1FFF)); /*0x7c432c*/
        v17 = 2; /*0x7c432e*/
        do /*0x7c4361*/
        {
          v18 = v16[1]; /*0x7c4337*/
          v19 = *v16; /*0x7c433b*/
          v20 = v16 + 2; /*0x7c4343*/
          *v6 = v19 | (v18 << 16); /*0x7c4346*/
          v21 = v20[1]; /*0x7c434a*/
          v22 = *v20; /*0x7c4350*/
          v16 = v20 + 2; /*0x7c4353*/
          v6[1] = v22 | (v21 << 16); /*0x7c435b*/
          v6 = (int *)((char *)v6 + v7); /*0x7c435e*/
          --v17; /*0x7c4360*/
        }
        while ( v17 ); /*0x7c4361*/
        result = 2 * v7; /*0x7c4368*/
        v6 = (int *)((char *)v6 + 8 - 2 * v7); /*0x7c436e*/
      }
      if ( v6 == v25 ) /*0x7c4374*/
      {
        v10 = (int *)((char *)v10 + 2 * v7); /*0x7c437a*/
        result = a4; /*0x7c437c*/
        v26 = v10; /*0x7c4380*/
        v6 = v10; /*0x7c4384*/
        v25 = &v10[2 * a4]; /*0x7c4389*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x7c4391*/
        break; /*0x7c4391*/
      a2 = v24; /*0x7c429d*/
    }
  }
  return result; /*0x7c4398*/
}
}
// 0x7C43A0
namespace gamemd {
unsigned int DecodeSHPFrame16bpp(int a1, unsigned char * a2, int * a3, unsigned int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // ecx
  int *v8; // ebx
  unsigned int result; // eax
  int16_t v11; // ax
  int16_t v12; // cx
  unsigned int v13; // ecx
  int *v14; // edi
  uint16_t *v15; // ecx
  int v16; // eax
  int v17; // esi
  uint16_t v18; // dx
  uint16_t v19; // bp
  uint16_t *v20; // ecx
  uint16_t v21; // dx
  uint16_t v22; // bp
  uint8_t *v23; // ecx
  int *v24; // edx
  uint16_t *v25; // eax
  int v26; // edi
  uint16_t v27; // cx
  uint16_t v28; // bp
  uint16_t *v29; // eax
  uint16_t v30; // cx
  uint16_t v31; // bp
  int v32; // edx
  uint16_t *v33; // eax
  int v34; // edx
  uint16_t v35; // cx
  uint16_t v36; // bp
  uint16_t *v37; // eax
  uint16_t v38; // cx
  uint16_t v39; // bp
  int v40; // ebp
  int16_t *v41; // eax
  int *v42; // edi
  int16_t v43; // dx
  int *v44; // ecx
  int v45; // esi
  int v46; // ebp
  int *v47; // ecx
  int v48; // eax
  int *v49; // ecx
  int *v50; // esi
  int v51; // edi
  int v52; // eax
  unsigned int *v53; // esi
  int v54; // edi
  unsigned short *v55; // eax
  int v56; // ebp
  int *v57; // edx
  int v58; // esi
  int *v59; // [esp+Ch] [ebp-Ch]
  int *v60; // [esp+10h] [ebp-8h]
  unsigned int v61; // [esp+14h] [ebp-4h]
  int v62; // [esp+20h] [ebp+8h]
  int v63; // [esp+24h] [ebp+Ch]
  uint8_t *v64; // [esp+24h] [ebp+Ch]
  int v65; // [esp+24h] [ebp+Ch]
  uint8_t *v66; // [esp+2Ch] [ebp+14h]
  int v67; // [esp+2Ch] [ebp+14h]
  unsigned int v68; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x7c43ae*/
  v7 = 2 * a6 * a5; /*0x7c43b1*/
  v8 = a3; /*0x7c43b4*/
  v68 = 2 * a6; /*0x7c43c0*/
  result = (unsigned int)a3 + 2 * v7; /*0x7c43c4*/
  v61 = result; /*0x7c43cc*/
  v59 = a3; /*0x7c43d0*/
  v60 = &a3[2 * a4]; /*0x7c43d4*/
  if ( (unsigned int)a3 < result ) /*0x7c43d8*/
  {
    do /*0x7c43df*/
    {
      v11 = *(unsigned short *)a2; /*0x7c43df*/
      a2 += 2; /*0x7c43e2*/
      v12 = v11; /*0x7c43e5*/
      result = v11 & 0x1FFF; /*0x7c43e7*/
      v13 = v12 & 0xE000; /*0x7c43ec*/
      v66 = a2; /*0x7c43f2*/
      if ( v13 > 0x6000 ) /*0x7c43fc*/
      {
        switch ( v13 ) /*0x7c4594*/
        {
          case 0x8000u: /*0x7c4594*/
            v55 = (unsigned short *)(a1 + 16 * (uint16_t)result); /*0x7c46bc*/
            v56 = 2; /*0x7c46be*/
            do /*0x7c46e3*/
            {
              v57 = v8; /*0x7c46c3*/
              v58 = 4; /*0x7c46c5*/
              do /*0x7c46de*/
              {
                if ( *v55 != 0x8000 ) /*0x7c46cd*/
                  *(unsigned short *)v57 = *v55; /*0x7c46d4*/
                v57 = (int *)((char *)v57 + 2); /*0x7c46d7*/
                ++v55; /*0x7c46da*/
                --v58; /*0x7c46dd*/
              }
              while ( v58 ); /*0x7c46de*/
              v8 = (int *)((char *)v8 + v6); /*0x7c46e0*/
              --v56; /*0x7c46e2*/
            }
            while ( v56 ); /*0x7c46e3*/
            result = 2 * v6; /*0x7c46ea*/
            v8 = (int *)((char *)v8 + 8 - 2 * v6); /*0x7c46ef*/
            goto LABEL_52; /*0x7c46ef*/
          case 0xA000u: /*0x7c4594*/
            goto LABEL_16; /*0x7c45a0*/
          case 0xC000u: /*0x7c4594*/
            v40 = *a2; /*0x7c45bc*/
            v66 = a2 + 1; /*0x7c45c5*/
            v41 = (int16_t *)(a1 + 16 * (uint16_t)result); /*0x7c45c9*/
            v62 = 2; /*0x7c45cb*/
            do /*0x7c4618*/
            {
              v42 = v8; /*0x7c45d3*/
              v65 = 4; /*0x7c45d5*/
              do /*0x7c4607*/
              {
                v43 = *v41; /*0x7c45dd*/
                if ( *v41 != (int16_t)0x8000 ) /*0x7c45e0*/
                {
                  v44 = v42; /*0x7c45e9*/
                  if ( v40 ) /*0x7c45eb*/
                  {
                    v45 = v40; /*0x7c45ed*/
                    do /*0x7c45f6*/
                    {
                      *(unsigned short *)v44 = v43; /*0x7c45ef*/
                      v44 += 2; /*0x7c45f2*/
                      --v45; /*0x7c45f5*/
                    }
                    while ( v45 ); /*0x7c45f6*/
                  }
                }
                v42 = (int *)((char *)v42 + 2); /*0x7c45fc*/
                ++v41; /*0x7c45ff*/
                --v65; /*0x7c4603*/
              }
              while ( v65 ); /*0x7c4607*/
              v8 = (int *)((char *)v8 + v68); /*0x7c4611*/
              --v62; /*0x7c4614*/
            }
            while ( v62 ); /*0x7c4618*/
            v6 = v68; /*0x7c461e*/
            result = 2 * v68; /*0x7c4629*/
            v8 = (int *)((char *)v8 + 8 * v40 - 2 * v68); /*0x7c462d*/
            goto LABEL_52; /*0x7c462f*/
        }
      }
      else if ( v13 == 24576 ) /*0x7c4402*/
      {
        v33 = (uint16_t *)(a1 + 16 * (uint16_t)result); /*0x7c4546*/
        v34 = 2; /*0x7c4548*/
        do /*0x7c457b*/
        {
          v35 = v33[1]; /*0x7c4551*/
          v36 = *v33; /*0x7c4555*/
          v37 = v33 + 2; /*0x7c455d*/
          *v8 = v36 | (v35 << 16); /*0x7c4560*/
          v38 = v37[1]; /*0x7c4564*/
          v39 = *v37; /*0x7c456a*/
          v33 = v37 + 2; /*0x7c456d*/
          v8[1] = v39 | (v38 << 16); /*0x7c4575*/
          v8 = (int *)((char *)v8 + v6); /*0x7c4578*/
          --v34; /*0x7c457a*/
        }
        while ( v34 ); /*0x7c457b*/
        result = 2 * v6; /*0x7c4582*/
        v8 = (int *)((char *)v8 + 8 - 2 * v6); /*0x7c4587*/
      }
      else if ( v13 ) /*0x7c440a*/
      {
        if ( v13 == 0x2000 ) /*0x7c4416*/
        {
          v32 = (((uint16_t)result >> 7) & 0x3E) + 2; /*0x7c450f*/
          if ( (((uint16_t)result >> 7) & 0x3E) == 0xFFFFFFFE ) /*0x7c4514*/
          {
  LABEL_16:
            result = (uint16_t)result; /*0x7c451a*/
            v32 = *a2; /*0x7c4521*/
            v66 = a2 + 1; /*0x7c4524*/
          }
          else
          {
            result = (uint8_t)result; /*0x7c463a*/
          }
          v46 = 2; /*0x7c4640*/
          v47 = (int *)(a1 + 16 * result); /*0x7c464a*/
          do /*0x7c469e*/
          {
            v48 = *v47; /*0x7c465a*/
            v49 = v47 + 1; /*0x7c465c*/
            v50 = v8; /*0x7c4661*/
            if ( v32 ) /*0x7c4663*/
            {
              v51 = v32; /*0x7c4665*/
              do /*0x7c466d*/
              {
                *v50 = v48; /*0x7c4667*/
                v50 += 2; /*0x7c4669*/
                --v51; /*0x7c466c*/
              }
              while ( v51 ); /*0x7c466d*/
              v6 = v68; /*0x7c466f*/
            }
            v52 = *v49; /*0x7c4681*/
            v47 = v49 + 1; /*0x7c4683*/
            v53 = v8 + 1; /*0x7c4688*/
            if ( v32 ) /*0x7c468b*/
            {
              v54 = v32; /*0x7c468d*/
              do /*0x7c4695*/
              {
                *v53 = v52; /*0x7c468f*/
                v53 += 2; /*0x7c4691*/
                --v54; /*0x7c4694*/
              }
              while ( v54 ); /*0x7c4695*/
              v6 = v68; /*0x7c4697*/
            }
            v8 = (int *)((char *)v8 + v6); /*0x7c469b*/
            --v46; /*0x7c469d*/
          }
          while ( v46 ); /*0x7c469e*/
          result = 2 * v6; /*0x7c46a7*/
          v8 = (int *)((char *)v8 + 8 * v32 - 2 * v6); /*0x7c46ac*/
  LABEL_52:
          a2 = v66; /*0x7c46f1*/
          goto LABEL_53; /*0x7c46f1*/
        }
        if ( v13 == 0x4000 ) /*0x7c4422*/
        {
          v14 = v8; /*0x7c442a*/
          v15 = (uint16_t *)(a1 + 16 * *(a2 - 2)); /*0x7c443c*/
          v63 = ((result >> 7) & 0x3E) + 2; /*0x7c4448*/
          v16 = 2; /*0x7c444c*/
          v17 = 4 * (v68 >> 2); /*0x7c4451*/
          do /*0x7c4482*/
          {
            v18 = v15[1]; /*0x7c4458*/
            v19 = *v15; /*0x7c445c*/
            v20 = v15 + 2; /*0x7c4464*/
            *v14 = v19 | (v18 << 16); /*0x7c4467*/
            v21 = v20[1]; /*0x7c446b*/
            v22 = *v20; /*0x7c4471*/
            v15 = v20 + 2; /*0x7c4474*/
            v14[1] = v22 | (v21 << 16); /*0x7c447c*/
            v14 = (int *)((char *)v14 + v17); /*0x7c447f*/
            --v16; /*0x7c4481*/
          }
          while ( v16 ); /*0x7c4482*/
          result = v63; /*0x7c4484*/
          v23 = v66; /*0x7c4488*/
          v8 += 2; /*0x7c448c*/
          if ( v63 ) /*0x7c4491*/
          {
            v67 = v63; /*0x7c4493*/
            do /*0x7c44f0*/
            {
              v24 = v8; /*0x7c4499*/
              v64 = v23 + 1; /*0x7c449e*/
              v25 = (uint16_t *)(a1 + 16 * *v23); /*0x7c44a9*/
              v26 = 2; /*0x7c44ab*/
              do /*0x7c44de*/
              {
                v27 = v25[1]; /*0x7c44b4*/
                v28 = *v25; /*0x7c44b8*/
                v29 = v25 + 2; /*0x7c44c0*/
                *v24 = v28 | (v27 << 16); /*0x7c44c3*/
                v30 = v29[1]; /*0x7c44c7*/
                v31 = *v29; /*0x7c44cd*/
                v25 = v29 + 2; /*0x7c44d0*/
                v24[1] = v31 | (v30 << 16); /*0x7c44d8*/
                v24 = (int *)((char *)v24 + v17); /*0x7c44db*/
                --v26; /*0x7c44dd*/
              }
              while ( v26 ); /*0x7c44de*/
              v23 = v64; /*0x7c44e4*/
              v8 += 2; /*0x7c44e8*/
              result = --v67; /*0x7c44eb*/
            }
            while ( v67 ); /*0x7c44f0*/
          }
          v6 = v68; /*0x7c44f2*/
          v66 = v23; /*0x7c44f6*/
          goto LABEL_52; /*0x7c44fa*/
        }
      }
      else
      {
        result = (uint8_t)result; /*0x7c452d*/
        v8 += 2 * (uint8_t)result; /*0x7c4532*/
      }
  LABEL_53:
      if ( v8 == v60 ) /*0x7c46f9*/
      {
        v8 = (int *)((char *)v59 + 2 * v6); /*0x7c4702*/
        result = a4; /*0x7c4704*/
        v59 = v8; /*0x7c4708*/
        v60 = &v8[2 * a4]; /*0x7c470f*/
      }
    }
    while ( (unsigned int)v8 < v61 ); /*0x7c43df*/
  }
  return result; /*0x7c471e*/
}
}
// 0x7C4730
namespace gamemd {
int TileRenderer_DrawBlock(int a1, unsigned short * a2, unsigned char * a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  int v8; // ebx
  uint16_t v9; // dx
  uint16_t v10; // ax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  uint16_t v17; // dx
  int v18; // edi
  int v19; // eax
  unsigned char *v20; // ecx
  int v21; // ebp
  int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  char v25; // bp
  int v26; // eax
  unsigned int v27; // ecx
  unsigned char *v28; // eax
  int v29; // ebp
  int v30; // ecx
  int16_t *v31; // ebp
  unsigned int v32; // ecx
  int16_t v33; // dx
  char v34; // cl
  int v35; // ebp
  int v36; // edi
  unsigned char *v37; // esi
  int v38; // eax
  unsigned char *v39; // esi
  int v40; // edi
  int v41; // ecx
  unsigned char *v42; // esi
  int v43; // eax
  bool v44; // zf
  int v45; // edi
  unsigned char *v46; // esi
  unsigned int v47; // eax
  unsigned char *v48; // eax
  int v49; // edi
  int v50; // edx
  unsigned char *v51; // edx
  int v52; // edi
  int v53; // eax
  int v54; // [esp+4h] [ebp-Ch]
  int v55; // [esp+4h] [ebp-Ch]
  int v56; // [esp+4h] [ebp-Ch]
  unsigned char *v57; // [esp+8h] [ebp-8h]
  unsigned int v58; // [esp+Ch] [ebp-4h]
  unsigned int v59; // [esp+1Ch] [ebp+Ch]
  int v60; // [esp+24h] [ebp+14h]
  int v61; // [esp+24h] [ebp+14h]
  int v62; // [esp+24h] [ebp+14h]
  int v63; // [esp+24h] [ebp+14h]
  unsigned int v64; // [esp+24h] [ebp+14h]

  result = a5 * a4; /*0x7c4740*/
  v59 = 0; /*0x7c4749*/
  v57 = a3; /*0x7c4753*/
  v58 = a5 * a4; /*0x7c4757*/
  if ( a5 * a4 ) /*0x7c4740*/
  {
    v8 = a6; /*0x7c4762*/
    do /*0x7c476c*/
    {
      v9 = *a2; /*0x7c476c*/
      if ( (IDA_HIBYTE(*a2) & 0x80u) == 0 ) /*0x7c4773*/
      {
        v51 = (unsigned char *)(a1 + 16 * *a2); /*0x7c4b16*/
        v52 = 4; /*0x7c4b18*/
        do /*0x7c4b30*/
        {
          v53 = 4; /*0x7c4b1d*/
          do /*0x7c4b29*/
          {
            *a3++ = *v51++; /*0x7c4b24*/
            --v53; /*0x7c4b28*/
          }
          while ( v53 ); /*0x7c4b29*/
          --v52; /*0x7c4b2b*/
          a3 = &a3[v8 - 4]; /*0x7c4b2c*/
        }
        while ( v52 ); /*0x7c4b30*/
        a3 += 4 - 4 * v8; /*0x7c4b40*/
        goto LABEL_75; /*0x7c4b40*/
      }
      v10 = *a2; /*0x7c477b*/
      v11 = v9 & 0xF000; /*0x7c4782*/
      if ( v11 > 0xC000 ) /*0x7c478e*/
      {
        if ( v11 == 57344 ) /*0x7c4a85*/
        {
          v48 = (unsigned char *)(a1 + 16 * (v9 & 0xFFF)); /*0x7c4ad0*/
          v49 = 4; /*0x7c4ad2*/
          do /*0x7c4aee*/
          {
            v50 = 4; /*0x7c4ad7*/
            do /*0x7c4ae7*/
            {
              if ( *v48 ) /*0x7c4adc*/
                *a3 = *v48; /*0x7c4ae2*/
              ++a3; /*0x7c4ae4*/
              ++v48; /*0x7c4ae5*/
              --v50; /*0x7c4ae6*/
            }
            while ( v50 ); /*0x7c4ae7*/
            --v49; /*0x7c4ae9*/
            a3 = &a3[v8 - 4]; /*0x7c4aea*/
          }
          while ( v49 ); /*0x7c4aee*/
          a3 += 4 - 4 * v8; /*0x7c4afe*/
          ++a2; /*0x7c4b03*/
          goto LABEL_76; /*0x7c4b07*/
        }
        if ( v11 == 61440 ) /*0x7c4a8d*/
        {
          if ( (unsigned char)v9 ) /*0x7c4a95*/
          {
            v45 = 4; /*0x7c4a9a*/
            do /*0x7c4ab6*/
            {
              v46 = a3 + 4; /*0x7c4aa1*/
              IDA_LOBYTE(v11) = v9; /*0x7c4aa4*/
              IDA_BYTE1(v11) = v9; /*0x7c4aa6*/
              v47 = v11 << 16; /*0x7c4aaa*/
              IDA_LOWORD(v47) = v11; /*0x7c4aad*/
              *((unsigned int *)v46 - 1) = v47; /*0x7c4ab0*/
              a3 = &v46[v8 - 4]; /*0x7c4ab3*/
              --v45; /*0x7c4ab5*/
            }
            while ( v45 ); /*0x7c4ab6*/
            a3 -= 4 * v8; /*0x7c4abc*/
          }
          a3 += 4; /*0x7c4abf*/
  LABEL_75:
          ++a2; /*0x7c4b42*/
  LABEL_76:
          v23 = v59 + 1; /*0x7c4b47*/
  LABEL_77:
          v59 = v23; /*0x7c4b4c*/
        }
      }
      else
      {
        if ( v11 == 49152 ) /*0x7c4794*/
        {
          v31 = (int16_t *)(a2 + 1); /*0x7c49cf*/
          v32 = v9 & 0xFFF; /*0x7c49d2*/
          ++a2; /*0x7c49d4*/
          v64 = v32; /*0x7c49da*/
          if ( v32 >> 1 ) /*0x7c49d8*/
          {
            v56 = (uint16_t)(v9 & 0xFFF) >> 1; /*0x7c49e4*/
            do /*0x7c4a6a*/
            {
              v33 = *v31; /*0x7c49e8*/
              v34 = IDA_HIBYTE(*v31); /*0x7c49ee*/
              if ( v34 ) /*0x7c49f2*/
              {
                v35 = v8 - 4; /*0x7c49f4*/
                v36 = 4; /*0x7c49f7*/
                do /*0x7c4a13*/
                {
                  v37 = a3 + 4; /*0x7c49fe*/
                  IDA_LOBYTE(v8) = v34; /*0x7c4a01*/
                  IDA_BYTE1(v8) = v34; /*0x7c4a03*/
                  v38 = v8 << 16; /*0x7c4a07*/
                  IDA_LOWORD(v38) = v8; /*0x7c4a0a*/
                  *((unsigned int *)v37 - 1) = v38; /*0x7c4a0d*/
                  a3 = &v37[v35]; /*0x7c4a10*/
                  --v36; /*0x7c4a12*/
                }
                while ( v36 ); /*0x7c4a13*/
                v8 = a6; /*0x7c4a15*/
                a3 -= 4 * a6; /*0x7c4a1d*/
              }
              v39 = a3 + 4; /*0x7c4a20*/
              if ( (unsigned char)v33 ) /*0x7c4a25*/
              {
                v40 = v8 - 4; /*0x7c4a27*/
                v41 = 4; /*0x7c4a2a*/
                do /*0x7c4a46*/
                {
                  v42 = v39 + 4; /*0x7c4a31*/
                  IDA_LOBYTE(v8) = v33; /*0x7c4a34*/
                  IDA_BYTE1(v8) = v33; /*0x7c4a36*/
                  v43 = v8 << 16; /*0x7c4a3a*/
                  IDA_LOWORD(v43) = v8; /*0x7c4a3d*/
                  *((unsigned int *)v42 - 1) = v43; /*0x7c4a40*/
                  v39 = &v42[v40]; /*0x7c4a43*/
                  --v41; /*0x7c4a45*/
                }
                while ( v41 ); /*0x7c4a46*/
                v8 = a6; /*0x7c4a48*/
                v39 -= 4 * a6; /*0x7c4a50*/
              }
              a3 = v39 + 4; /*0x7c4a5b*/
              v31 = (int16_t *)(a2 + 1); /*0x7c4a5e*/
              v44 = v56 == 1; /*0x7c4a61*/
              ++a2; /*0x7c4a62*/
              --v56; /*0x7c4a66*/
            }
            while ( !v44 ); /*0x7c4a6a*/
            v32 = v64; /*0x7c4a70*/
          }
          v23 = v32 + v59; /*0x7c4a78*/
          goto LABEL_77; /*0x7c4a7a*/
        }
        if ( v11 != 40960 ) /*0x7c47a0*/
        {
          if ( v11 == 45056 ) /*0x7c47ac*/
          {
            v12 = IDA_HIBYTE(v9) & 0xF; /*0x7c47b5*/
            v60 = v12; /*0x7c47ba*/
            if ( (unsigned char)v9 ) /*0x7c47be*/
            {
              v13 = 4 * v12; /*0x7c47c0*/
              v54 = 4; /*0x7c47c7*/
              do /*0x7c4811*/
              {
                if ( v13 ) /*0x7c47d1*/
                {
                  v14 = v13; /*0x7c47d5*/
                  IDA_LOBYTE(v8) = v9; /*0x7c47d7*/
                  IDA_BYTE1(v8) = v9; /*0x7c47db*/
                  v15 = v8 << 16; /*0x7c47df*/
                  IDA_LOWORD(v15) = v8; /*0x7c47e2*/
                  v8 = a6; /*0x7c47e5*/
                  v16 = v13 >> 2; /*0x7c47e9*/
                  memset32(a3, v15, v16); /*0x7c47ec*/
                  memset(&a3[4 * v16], v15, v14 & 3); /*0x7c47f3*/
                  v12 = IDA_HIBYTE(v9) & 0xF; /*0x7c47f5*/
                  v13 = 4 * v60; /*0x7c47f9*/
                  a3 += 4 * v60; /*0x7c4800*/
                }
                a3 += v8 - v13; /*0x7c4806*/
                --v54; /*0x7c480d*/
              }
              while ( v54 ); /*0x7c4811*/
              a3 -= 4 * v8; /*0x7c4817*/
            }
            a3 += 4 * v12; /*0x7c481e*/
            v59 += v12; /*0x7c482a*/
            ++a2; /*0x7c482e*/
          }
          goto LABEL_78; /*0x7c4832*/
        }
        v17 = a2[1]; /*0x7c4837*/
        ++a2; /*0x7c4843*/
        v18 = v10 & 0xFFF; /*0x7c4847*/
        v61 = v18; /*0x7c484c*/
        if ( (v17 & 0x8000u) == 0 ) /*0x7c4850*/
        {
          v63 = 4; /*0x7c496e*/
          v28 = (unsigned char *)(a1 + 16 * v17); /*0x7c4976*/
          do /*0x7c49ab*/
          {
            if ( v18 ) /*0x7c497a*/
            {
              v29 = v18; /*0x7c497c*/
              do /*0x7c4990*/
              {
                v30 = 4; /*0x7c497e*/
                do /*0x7c498a*/
                {
                  *a3++ = *v28++; /*0x7c4985*/
                  --v30; /*0x7c4989*/
                }
                while ( v30 ); /*0x7c498a*/
                v28 -= 4; /*0x7c498c*/
                --v29; /*0x7c498f*/
              }
              while ( v29 ); /*0x7c4990*/
            }
            v28 += 4; /*0x7c49a1*/
            a3 += v8 - 4 * v18; /*0x7c49a4*/
            --v63; /*0x7c49a7*/
          }
          while ( v63 ); /*0x7c49ab*/
          ++a2; /*0x7c49b8*/
          a3 += 4 * (v18 - v8); /*0x7c49bc*/
          v23 = v18 + v59; /*0x7c49c3*/
          goto LABEL_77; /*0x7c49c5*/
        }
        v19 = v17 & 0xC000; /*0x7c4860*/
        if ( v19 == 0x8000 ) /*0x7c486a*/
        {
          if ( (unsigned char)v17 ) /*0x7c48e6*/
          {
            v24 = 4 * v18; /*0x7c48e8*/
            v55 = 4; /*0x7c48ef*/
            do /*0x7c4939*/
            {
              if ( v24 ) /*0x7c48f9*/
              {
                v25 = v24; /*0x7c48fd*/
                IDA_LOBYTE(v8) = v17; /*0x7c48ff*/
                IDA_BYTE1(v8) = v17; /*0x7c4903*/
                v26 = v8 << 16; /*0x7c4907*/
                IDA_LOWORD(v26) = v8; /*0x7c490a*/
                v8 = a6; /*0x7c490d*/
                v27 = v24 >> 2; /*0x7c4911*/
                memset32(a3, v26, v27); /*0x7c4914*/
                memset(&a3[4 * v27], v26, v25 & 3); /*0x7c491b*/
                v18 = v61; /*0x7c491d*/
                v24 = 4 * v61; /*0x7c4921*/
                a3 += 4 * v61; /*0x7c4928*/
              }
              a3 += v8 - v24; /*0x7c492e*/
              --v55; /*0x7c4935*/
            }
            while ( v55 ); /*0x7c4939*/
            a3 -= 4 * v8; /*0x7c493f*/
          }
          a3 += 4 * v18; /*0x7c494f*/
          v59 += v18; /*0x7c4952*/
          ++a2; /*0x7c4956*/
          goto LABEL_78; /*0x7c495a*/
        }
        if ( v19 == 49152 ) /*0x7c4871*/
        {
          v20 = (unsigned char *)(a1 + 16 * (v17 & 0xFFF)); /*0x7c4884*/
          v62 = 4; /*0x7c4886*/
          do /*0x7c48c5*/
          {
            if ( v18 ) /*0x7c4890*/
            {
              v21 = v18; /*0x7c4892*/
              do /*0x7c48aa*/
              {
                v22 = 4; /*0x7c4894*/
                do /*0x7c48a4*/
                {
                  if ( *v20 ) /*0x7c4899*/
                    *a3 = *v20; /*0x7c489f*/
                  ++a3; /*0x7c48a1*/
                  ++v20; /*0x7c48a2*/
                  --v22; /*0x7c48a3*/
                }
                while ( v22 ); /*0x7c48a4*/
                v20 -= 4; /*0x7c48a6*/
                --v21; /*0x7c48a9*/
              }
              while ( v21 ); /*0x7c48aa*/
            }
            v20 += 4; /*0x7c48b7*/
            a3 += v8 - 4 * v18; /*0x7c48ba*/
            --v62; /*0x7c48c1*/
          }
          while ( v62 ); /*0x7c48c5*/
          a3 += 4 * (v18 - v8); /*0x7c48cf*/
          v23 = v18 + v59; /*0x7c48d9*/
          ++a2; /*0x7c48db*/
          goto LABEL_77; /*0x7c48df*/
        }
      }
  LABEL_78:
      result = v59 / a4; /*0x7c4b50*/
      if ( !(v59 % a4) ) /*0x7c4b58*/
      {
        a3 = &v57[4 * v8]; /*0x7c4b64*/
        v57 = a3; /*0x7c4b67*/
      }
    }
    while ( v59 < v58 ); /*0x7c476c*/
  }
  return result; /*0x7c4b78*/
}
}
// 0x7C4B80
namespace gamemd {
int TileRenderer_DrawBlock16BPP(int a1, unsigned short * a2, unsigned char * a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  uint16_t *v7; // ebp
  unsigned char *v8; // esi
  int v9; // ebx
  uint16_t v10; // dx
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  uint16_t v17; // dx
  int v18; // edi
  int v19; // ecx
  unsigned char *v20; // eax
  int v21; // ebp
  int v22; // ecx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  unsigned char *v27; // eax
  int v28; // edx
  int v29; // ebp
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // ebp
  int v34; // edi
  uint16_t v35; // dx
  char v36; // cl
  unsigned char *v37; // esi
  int v38; // eax
  int v39; // ecx
  unsigned char *v40; // esi
  unsigned char *v41; // esi
  int v42; // eax
  bool v43; // zf
  int v44; // edi
  unsigned char *v45; // esi
  unsigned int v46; // eax
  unsigned char *v47; // eax
  int v48; // edi
  int v49; // ecx
  unsigned char *v50; // edx
  int v51; // edi
  int v52; // eax
  int v53; // [esp+8h] [ebp-Ch]
  int v54; // [esp+8h] [ebp-Ch]
  unsigned int v55; // [esp+8h] [ebp-Ch]
  unsigned char *v56; // [esp+Ch] [ebp-8h]
  unsigned int v57; // [esp+10h] [ebp-4h]
  unsigned int v58; // [esp+20h] [ebp+Ch]
  int v59; // [esp+28h] [ebp+14h]
  int v60; // [esp+28h] [ebp+14h]
  int v61; // [esp+28h] [ebp+14h]
  unsigned int v62; // [esp+28h] [ebp+14h]

  result = a5 * a4; /*0x7c4b88*/
  v7 = a2; /*0x7c4b8d*/
  v8 = a3; /*0x7c4b92*/
  v56 = a3; /*0x7c4b9c*/
  v58 = 0; /*0x7c4ba0*/
  v57 = a5 * a4; /*0x7c4ba8*/
  if ( a5 * a4 ) /*0x7c4b88*/
  {
    v9 = a6; /*0x7c4bb3*/
    while ( 1 ) /*0x7c4bbe*/
    {
      v10 = *v7; /*0x7c4bbe*/
      if ( (IDA_HIBYTE(*v7) & 0x80u) == 0 ) /*0x7c4bc5*/
        break; /*0x7c4bc5*/
      v11 = v10 & 0xF000; /*0x7c4bd4*/
      if ( v11 > 0xC000 ) /*0x7c4be0*/
      {
        if ( v11 == 57344 ) /*0x7c4ea5*/
        {
          v47 = (unsigned char *)(a1 + 16 * (v10 & 0xFFF)); /*0x7c4ee2*/
          v48 = 4; /*0x7c4ee4*/
          do /*0x7c4efc*/
          {
            v49 = 4; /*0x7c4ee9*/
            do /*0x7c4ef5*/
            {
              *v8++ = *v47++; /*0x7c4ef0*/
              --v49; /*0x7c4ef4*/
            }
            while ( v49 ); /*0x7c4ef5*/
            --v48; /*0x7c4ef7*/
            v8 = &v8[v9 - 4]; /*0x7c4ef8*/
          }
          while ( v48 ); /*0x7c4efc*/
          v8 += 4 - 4 * v9; /*0x7c4f0c*/
        }
        else
        {
          if ( v11 != 61440 ) /*0x7c4ead*/
            goto LABEL_66; /*0x7c4ead*/
          v44 = 4; /*0x7c4eb6*/
          do /*0x7c4ed2*/
          {
            v45 = v8 + 4; /*0x7c4ebd*/
            IDA_LOBYTE(v11) = v10; /*0x7c4ec0*/
            IDA_BYTE1(v11) = v10; /*0x7c4ec2*/
            v46 = v11 << 16; /*0x7c4ec6*/
            IDA_LOWORD(v46) = v11; /*0x7c4ec9*/
            *((unsigned int *)v45 - 1) = v46; /*0x7c4ecc*/
            v8 = &v45[v9 - 4]; /*0x7c4ecf*/
            --v44; /*0x7c4ed1*/
          }
          while ( v44 ); /*0x7c4ed2*/
  LABEL_63:
          v8 += 4 - 4 * v9; /*0x7c4f39*/
        }
        v31 = v58 + 1; /*0x7c4f54*/
        ++a2; /*0x7c4f55*/
        goto LABEL_65; /*0x7c4f55*/
      }
      switch ( v11 ) /*0x7c4be6*/
      {
        case 0xC000u: /*0x7c4be6*/
          v32 = v10 & 0xFFF; /*0x7c4df3*/
          v62 = v32; /*0x7c4dfd*/
          a2 = v7 + 1; /*0x7c4e03*/
          if ( v32 >> 1 ) /*0x7c4e01*/
          {
            v33 = v9 - 4; /*0x7c4e0d*/
            v55 = v32 >> 1; /*0x7c4e10*/
            do /*0x7c4e8c*/
            {
              v34 = 4; /*0x7c4e1a*/
              v35 = *a2; /*0x7c4e1f*/
              v36 = IDA_HIBYTE(*a2); /*0x7c4e22*/
              do /*0x7c4e3b*/
              {
                v37 = v8 + 4; /*0x7c4e26*/
                IDA_LOBYTE(v9) = v36; /*0x7c4e29*/
                IDA_BYTE1(v9) = v36; /*0x7c4e2b*/
                v38 = v9 << 16; /*0x7c4e2f*/
                IDA_LOWORD(v38) = v9; /*0x7c4e32*/
                *((unsigned int *)v37 - 1) = v38; /*0x7c4e35*/
                v8 = &v37[v33]; /*0x7c4e38*/
                --v34; /*0x7c4e3a*/
              }
              while ( v34 ); /*0x7c4e3b*/
              v39 = 4; /*0x7c4e4d*/
              v40 = &v8[4 - 4 * a6]; /*0x7c4e54*/
              do /*0x7c4e6d*/
              {
                v41 = v40 + 4; /*0x7c4e58*/
                IDA_LOBYTE(v9) = v35; /*0x7c4e5b*/
                IDA_BYTE1(v9) = v35; /*0x7c4e5d*/
                v42 = v9 << 16; /*0x7c4e61*/
                IDA_LOWORD(v42) = v9; /*0x7c4e64*/
                *((unsigned int *)v41 - 1) = v42; /*0x7c4e67*/
                v40 = &v41[v33]; /*0x7c4e6a*/
                --v39; /*0x7c4e6c*/
              }
              while ( v39 ); /*0x7c4e6d*/
              v8 = &v40[4 - 4 * a6]; /*0x7c4e7a*/
              v43 = v55 == 1; /*0x7c4e83*/
              ++a2; /*0x7c4e84*/
              --v55; /*0x7c4e88*/
            }
            while ( !v43 ); /*0x7c4e8c*/
            v32 = v62; /*0x7c4e8e*/
            v9 = a6; /*0x7c4e92*/
          }
          v58 += v32; /*0x7c4e96*/
          break;
        case 0xA000u: /*0x7c4be6*/
          v17 = v7[1]; /*0x7c4c82*/
          a2 = v7 + 1; /*0x7c4c8e*/
          v18 = *v7 & 0xFFF; /*0x7c4c92*/
          v60 = v18; /*0x7c4c97*/
          if ( (v17 & 0x8000u) == 0 ) /*0x7c4c9b*/
          {
            v27 = (unsigned char *)(a1 + 16 * v7[1]); /*0x7c4d9e*/
            v28 = 4; /*0x7c4da0*/
            do /*0x7c4dd4*/
            {
              if ( v18 ) /*0x7c4da7*/
              {
                v29 = v18; /*0x7c4da9*/
                do /*0x7c4dbd*/
                {
                  v30 = 4; /*0x7c4dab*/
                  do /*0x7c4db7*/
                  {
                    *v8++ = *v27++; /*0x7c4db2*/
                    --v30; /*0x7c4db6*/
                  }
                  while ( v30 ); /*0x7c4db7*/
                  v27 -= 4; /*0x7c4db9*/
                  --v29; /*0x7c4dbc*/
                }
                while ( v29 ); /*0x7c4dbd*/
                v9 = a6; /*0x7c4dbf*/
              }
              v27 += 4; /*0x7c4dce*/
              v8 += v9 - 4 * v18; /*0x7c4dd1*/
              --v28; /*0x7c4dd3*/
            }
            while ( v28 ); /*0x7c4dd4*/
            v8 += 4 * (v18 - v9); /*0x7c4dda*/
            goto LABEL_39; /*0x7c4dda*/
          }
          v19 = v17 & 0xC000; /*0x7c4caa*/
          if ( v19 != 0x8000 ) /*0x7c4cb6*/
          {
            if ( v19 != 49152 ) /*0x7c4cbe*/
              break; /*0x7c4cbe*/
            v20 = (unsigned char *)(a1 + 16 * (v17 & 0xFFF)); /*0x7c4cd0*/
            v61 = 4; /*0x7c4cd2*/
            do /*0x7c4d0d*/
            {
              if ( v18 ) /*0x7c4cdc*/
              {
                v21 = v18; /*0x7c4cde*/
                do /*0x7c4cf2*/
                {
                  v22 = 4; /*0x7c4ce0*/
                  do /*0x7c4cec*/
                  {
                    *v8++ = *v20++; /*0x7c4ce7*/
                    --v22; /*0x7c4ceb*/
                  }
                  while ( v22 ); /*0x7c4cec*/
                  v20 -= 4; /*0x7c4cee*/
                  --v21; /*0x7c4cf1*/
                }
                while ( v21 ); /*0x7c4cf2*/
              }
              v20 += 4; /*0x7c4d03*/
              v8 += v9 - 4 * v18; /*0x7c4d06*/
              --v61; /*0x7c4d09*/
            }
            while ( v61 ); /*0x7c4d0d*/
            v8 += 4 * (v18 - v9); /*0x7c4d13*/
  LABEL_39:
            v31 = v18 + v58; /*0x7c4ddd*/
            ++a2; /*0x7c4dea*/
  LABEL_65:
            v58 = v31; /*0x7c4f59*/
            break; /*0x7c4f59*/
          }
          v23 = 4 * v18; /*0x7c4d1b*/
          v54 = 4; /*0x7c4d22*/
          do /*0x7c4d6c*/
          {
            if ( v23 ) /*0x7c4d2c*/
            {
              v24 = v23; /*0x7c4d30*/
              IDA_LOBYTE(v9) = v17; /*0x7c4d32*/
              IDA_BYTE1(v9) = v17; /*0x7c4d36*/
              v25 = v9 << 16; /*0x7c4d3a*/
              IDA_LOWORD(v25) = v9; /*0x7c4d3d*/
              v9 = a6; /*0x7c4d40*/
              v26 = v23 >> 2; /*0x7c4d44*/
              memset32(v8, v25, v26); /*0x7c4d47*/
              memset(&v8[4 * v26], v25, v24 & 3); /*0x7c4d4e*/
              v18 = v60; /*0x7c4d50*/
              v23 = 4 * v60; /*0x7c4d54*/
              v8 += 4 * v60; /*0x7c4d5b*/
            }
            v8 += v9 - v23; /*0x7c4d61*/
            --v54; /*0x7c4d68*/
          }
          while ( v54 ); /*0x7c4d6c*/
          v8 += 4 * (v18 - v9); /*0x7c4d76*/
          v58 += v18; /*0x7c4d82*/
          ++a2; /*0x7c4d86*/
          break;
        case 0xB000u: /*0x7c4be6*/
          v12 = IDA_HIBYTE(v10) & 0xF; /*0x7c4c07*/
          v53 = 4; /*0x7c4c0a*/
          v59 = v12; /*0x7c4c12*/
          v13 = 4 * v12; /*0x7c4c16*/
          do /*0x7c4c5f*/
          {
            if ( v13 ) /*0x7c4c1f*/
            {
              v14 = v13; /*0x7c4c23*/
              IDA_LOBYTE(v9) = v10; /*0x7c4c25*/
              IDA_BYTE1(v9) = v10; /*0x7c4c29*/
              v15 = v9 << 16; /*0x7c4c2d*/
              IDA_LOWORD(v15) = v9; /*0x7c4c30*/
              v9 = a6; /*0x7c4c33*/
              v16 = v13 >> 2; /*0x7c4c37*/
              memset32(v8, v15, v16); /*0x7c4c3a*/
              memset(&v8[4 * v16], v15, v14 & 3); /*0x7c4c41*/
              v12 = v59; /*0x7c4c43*/
              v13 = 4 * v59; /*0x7c4c47*/
              v8 += 4 * v59; /*0x7c4c4e*/
            }
            v8 += v9 - v13; /*0x7c4c54*/
            --v53; /*0x7c4c5b*/
          }
          while ( v53 ); /*0x7c4c5f*/
          v8 += 4 * (v12 - v9); /*0x7c4c65*/
          v58 += v12; /*0x7c4c75*/
          ++a2; /*0x7c4c79*/
          break;
      }
  LABEL_66:
      result = v58 / a4; /*0x7c4f5d*/
      if ( !(v58 % a4) ) /*0x7c4f65*/
      {
        v8 = &v56[4 * v9]; /*0x7c4f71*/
        v56 = v8; /*0x7c4f74*/
      }
      if ( v58 >= v57 ) /*0x7c4f7c*/
        return result; /*0x7c4f7c*/
      v7 = a2; /*0x7c4bba*/
    }
    v50 = (unsigned char *)(a1 + 16 * *v7); /*0x7c4f1d*/
    v51 = 4; /*0x7c4f1f*/
    do /*0x7c4f37*/
    {
      v52 = 4; /*0x7c4f24*/
      do /*0x7c4f30*/
      {
        *v8++ = *v50++; /*0x7c4f2b*/
        --v52; /*0x7c4f2f*/
      }
      while ( v52 ); /*0x7c4f30*/
      --v51; /*0x7c4f32*/
      v8 = &v8[v9 - 4]; /*0x7c4f33*/
    }
    while ( v51 ); /*0x7c4f37*/
    goto LABEL_63; /*0x7c4f37*/
  }
  return result; /*0x7c4f84*/
}
}
// 0x7C4F90
namespace gamemd {
int TileRenderer_DrawBlock8BPP(int a1, unsigned short * a2, unsigned char * a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  int v8; // ebx
  uint16_t v9; // dx
  uint16_t v10; // ax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  uint16_t v17; // dx
  int v18; // edi
  int v19; // ecx
  unsigned char *v20; // eax
  int v21; // ebp
  int v22; // edx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  char *v27; // eax
  int v28; // ebp
  int v29; // ecx
  char v30; // dl
  unsigned int v31; // eax
  int16_t *v32; // ebp
  unsigned int v33; // ecx
  int16_t v34; // dx
  char v35; // cl
  int v36; // edi
  int16_t v37; // ax
  unsigned char *v38; // esi
  unsigned char *v39; // esi
  int v40; // ecx
  int16_t v41; // ax
  unsigned char *v42; // esi
  bool v43; // zf
  int v44; // edi
  int16_t v45; // ax
  unsigned char *v46; // esi
  unsigned char *v47; // eax
  int v48; // edi
  int v49; // edx
  char *v50; // edx
  int v51; // edi
  int v52; // eax
  char v53; // cl
  int v54; // [esp+4h] [ebp-Ch]
  int v55; // [esp+4h] [ebp-Ch]
  int v56; // [esp+4h] [ebp-Ch]
  unsigned char *v57; // [esp+8h] [ebp-8h]
  unsigned int v58; // [esp+Ch] [ebp-4h]
  unsigned int v59; // [esp+1Ch] [ebp+Ch]
  int v60; // [esp+24h] [ebp+14h]
  int v61; // [esp+24h] [ebp+14h]
  int v62; // [esp+24h] [ebp+14h]
  int v63; // [esp+24h] [ebp+14h]
  unsigned int v64; // [esp+24h] [ebp+14h]

  result = a5 * a4; /*0x7c4fa0*/
  v59 = 0; /*0x7c4fa9*/
  v57 = a3; /*0x7c4fb3*/
  v58 = a5 * a4; /*0x7c4fb7*/
  if ( a5 * a4 ) /*0x7c4fa0*/
  {
    v8 = a6; /*0x7c4fc2*/
    do /*0x7c4fcc*/
    {
      v9 = *a2; /*0x7c4fcc*/
      if ( (IDA_HIBYTE(*a2) & 0x80u) == 0 ) /*0x7c4fd3*/
      {
        v50 = (char *)(a1 + 16 * *a2); /*0x7c532d*/
        v51 = 2; /*0x7c532f*/
        do /*0x7c5349*/
        {
          v52 = 2; /*0x7c5334*/
          do /*0x7c5342*/
          {
            v53 = *v50; /*0x7c5339*/
            v50 += 2; /*0x7c533b*/
            *a3++ = v53; /*0x7c533e*/
            --v52; /*0x7c5341*/
          }
          while ( v52 ); /*0x7c5342*/
          --v51; /*0x7c5344*/
          a3 = &a3[v8 - 2]; /*0x7c5345*/
        }
        while ( v51 ); /*0x7c5349*/
        a3 += 2 - 2 * v8; /*0x7c5355*/
        goto LABEL_76; /*0x7c5355*/
      }
      v10 = *a2; /*0x7c4fdb*/
      v11 = v9 & 0xF000; /*0x7c4fe2*/
      if ( v11 > 0xC000 ) /*0x7c4fee*/
      {
        if ( v11 == 57344 ) /*0x7c52a7*/
        {
          v47 = (unsigned char *)(a1 + 16 * (v9 & 0xFFF)); /*0x7c52e9*/
          v48 = 2; /*0x7c52eb*/
          do /*0x7c5309*/
          {
            v49 = 2; /*0x7c52f0*/
            do /*0x7c5302*/
            {
              if ( *v47 ) /*0x7c52f5*/
                *a3 = *v47; /*0x7c52fb*/
              ++a3; /*0x7c52fd*/
              v47 += 2; /*0x7c52fe*/
              --v49; /*0x7c5301*/
            }
            while ( v49 ); /*0x7c5302*/
            --v48; /*0x7c5304*/
            a3 = &a3[v8 - 2]; /*0x7c5305*/
          }
          while ( v48 ); /*0x7c5309*/
          a3 += 2 - 2 * v8; /*0x7c5315*/
          ++a2; /*0x7c531a*/
          goto LABEL_77; /*0x7c531e*/
        }
        if ( v11 == 61440 ) /*0x7c52af*/
        {
          if ( (unsigned char)v9 ) /*0x7c52b7*/
          {
            v44 = 2; /*0x7c52bc*/
            do /*0x7c52cf*/
            {
              IDA_LOBYTE(v45) = v9; /*0x7c52c1*/
              v46 = a3 + 2; /*0x7c52c3*/
              IDA_HIBYTE(v45) = v9; /*0x7c52c6*/
              *((unsigned short *)v46 - 1) = v45; /*0x7c52c8*/
              a3 = &v46[v8 - 2]; /*0x7c52cc*/
              --v44; /*0x7c52ce*/
            }
            while ( v44 ); /*0x7c52cf*/
            a3 -= 2 * v8; /*0x7c52d5*/
          }
          a3 += 2; /*0x7c52d8*/
  LABEL_76:
          ++a2; /*0x7c5357*/
  LABEL_77:
          v31 = v59 + 1; /*0x7c535c*/
          goto LABEL_78; /*0x7c5360*/
        }
      }
      else
      {
        if ( v11 == 49152 ) /*0x7c4ff4*/
        {
          v32 = (int16_t *)(a2 + 1); /*0x7c520b*/
          v33 = v9 & 0xFFF; /*0x7c520e*/
          ++a2; /*0x7c5210*/
          v64 = v33; /*0x7c5216*/
          if ( v33 >> 1 ) /*0x7c5214*/
          {
            v56 = (uint16_t)(v9 & 0xFFF) >> 1; /*0x7c521c*/
            do /*0x7c5290*/
            {
              v34 = *v32; /*0x7c5220*/
              v35 = IDA_HIBYTE(*v32); /*0x7c5226*/
              if ( v35 ) /*0x7c522a*/
              {
                v36 = 2; /*0x7c522f*/
                do /*0x7c5242*/
                {
                  IDA_LOBYTE(v37) = v35; /*0x7c5234*/
                  v38 = a3 + 2; /*0x7c5236*/
                  IDA_HIBYTE(v37) = v35; /*0x7c5239*/
                  *((unsigned short *)v38 - 1) = v37; /*0x7c523b*/
                  a3 = &v38[v8 - 2]; /*0x7c523f*/
                  --v36; /*0x7c5241*/
                }
                while ( v36 ); /*0x7c5242*/
                v8 = a6; /*0x7c5244*/
                a3 -= 2 * a6; /*0x7c524c*/
              }
              v39 = a3 + 2; /*0x7c524f*/
              if ( (unsigned char)v34 ) /*0x7c5254*/
              {
                v40 = 2; /*0x7c5259*/
                do /*0x7c526c*/
                {
                  IDA_LOBYTE(v41) = v34; /*0x7c525e*/
                  v42 = v39 + 2; /*0x7c5260*/
                  IDA_HIBYTE(v41) = v34; /*0x7c5263*/
                  *((unsigned short *)v42 - 1) = v41; /*0x7c5265*/
                  v39 = &v42[v8 - 2]; /*0x7c5269*/
                  --v40; /*0x7c526b*/
                }
                while ( v40 ); /*0x7c526c*/
                v8 = a6; /*0x7c526e*/
                v39 -= 2 * a6; /*0x7c5276*/
              }
              a3 = v39 + 2; /*0x7c5281*/
              v32 = (int16_t *)(a2 + 1); /*0x7c5284*/
              v43 = v56 == 1; /*0x7c5287*/
              ++a2; /*0x7c5288*/
              --v56; /*0x7c528c*/
            }
            while ( !v43 ); /*0x7c5290*/
            v33 = v64; /*0x7c5292*/
          }
          v31 = v33 + v59; /*0x7c529a*/
          goto LABEL_78; /*0x7c529c*/
        }
        if ( v11 != 40960 ) /*0x7c5000*/
        {
          if ( v11 == 45056 ) /*0x7c500c*/
          {
            v12 = IDA_HIBYTE(v9) & 0xF; /*0x7c5015*/
            v60 = v12; /*0x7c501a*/
            if ( (unsigned char)v9 ) /*0x7c501e*/
            {
              v13 = 2 * v12; /*0x7c5020*/
              v54 = 2; /*0x7c5023*/
              do /*0x7c5069*/
              {
                if ( v13 ) /*0x7c502d*/
                {
                  v14 = v13; /*0x7c5031*/
                  IDA_LOBYTE(v8) = v9; /*0x7c5033*/
                  IDA_BYTE1(v8) = v9; /*0x7c5037*/
                  v15 = v8 << 16; /*0x7c503b*/
                  IDA_LOWORD(v15) = v8; /*0x7c503e*/
                  v8 = a6; /*0x7c5041*/
                  v16 = v13 >> 2; /*0x7c5045*/
                  memset32(a3, v15, v16); /*0x7c5048*/
                  memset(&a3[4 * v16], v15, v14 & 3); /*0x7c504f*/
                  v12 = IDA_HIBYTE(v9) & 0xF; /*0x7c5051*/
                  v13 = 2 * v60; /*0x7c5055*/
                  a3 += 2 * v60; /*0x7c5058*/
                }
                a3 += v8 - v13; /*0x7c505e*/
                --v54; /*0x7c5065*/
              }
              while ( v54 ); /*0x7c5069*/
              a3 -= 2 * v8; /*0x7c506f*/
            }
            a3 += 2 * v12; /*0x7c5076*/
            v59 += v12; /*0x7c5082*/
            ++a2; /*0x7c5086*/
          }
          goto LABEL_79; /*0x7c508a*/
        }
        v17 = a2[1]; /*0x7c508f*/
        ++a2; /*0x7c509b*/
        v18 = v10 & 0xFFF; /*0x7c509f*/
        v61 = v18; /*0x7c50a4*/
        if ( (v17 & 0x8000u) == 0 ) /*0x7c50a8*/
        {
          v63 = 2; /*0x7c51ac*/
          v27 = (char *)(a1 + 16 * v17); /*0x7c51b4*/
          do /*0x7c51e7*/
          {
            if ( v18 ) /*0x7c51b8*/
            {
              v28 = v18; /*0x7c51ba*/
              do /*0x7c51d0*/
              {
                v29 = 2; /*0x7c51bc*/
                do /*0x7c51ca*/
                {
                  v30 = *v27; /*0x7c51c1*/
                  v27 += 2; /*0x7c51c3*/
                  *a3++ = v30; /*0x7c51c6*/
                  --v29; /*0x7c51c9*/
                }
                while ( v29 ); /*0x7c51ca*/
                v27 -= 4; /*0x7c51cc*/
                --v28; /*0x7c51cf*/
              }
              while ( v28 ); /*0x7c51d0*/
            }
            v27 += 4; /*0x7c51dd*/
            a3 += v8 - 2 * v18; /*0x7c51e0*/
            --v63; /*0x7c51e3*/
          }
          while ( v63 ); /*0x7c51e7*/
          a3 += 2 * (v18 - v8); /*0x7c51ed*/
  LABEL_43:
          v31 = v18 + v59; /*0x7c51f0*/
          ++a2; /*0x7c51fd*/
  LABEL_78:
          v59 = v31; /*0x7c5361*/
          goto LABEL_79; /*0x7c5361*/
        }
        v19 = v17 & 0xC000; /*0x7c50b7*/
        if ( v19 == 0x8000 ) /*0x7c50c3*/
        {
          if ( (unsigned char)v17 ) /*0x7c512c*/
          {
            v23 = 2 * v18; /*0x7c512e*/
            v55 = 2; /*0x7c5131*/
            do /*0x7c5177*/
            {
              if ( v23 ) /*0x7c513b*/
              {
                v24 = v23; /*0x7c513f*/
                IDA_LOBYTE(v8) = v17; /*0x7c5141*/
                IDA_BYTE1(v8) = v17; /*0x7c5145*/
                v25 = v8 << 16; /*0x7c5149*/
                IDA_LOWORD(v25) = v8; /*0x7c514c*/
                v8 = a6; /*0x7c514f*/
                v26 = v23 >> 2; /*0x7c5153*/
                memset32(a3, v25, v26); /*0x7c5156*/
                memset(&a3[4 * v26], v25, v24 & 3); /*0x7c515d*/
                v18 = v61; /*0x7c515f*/
                v23 = 2 * v61; /*0x7c5163*/
                a3 += 2 * v61; /*0x7c5166*/
              }
              a3 += v8 - v23; /*0x7c516c*/
              --v55; /*0x7c5173*/
            }
            while ( v55 ); /*0x7c5177*/
            a3 -= 2 * v8; /*0x7c517d*/
          }
          a3 += 2 * v18; /*0x7c518d*/
          v59 += v18; /*0x7c5190*/
          ++a2; /*0x7c5194*/
          goto LABEL_79; /*0x7c5198*/
        }
        if ( v19 == 49152 ) /*0x7c50cb*/
        {
          v20 = (unsigned char *)(a1 + 16 * (v17 & 0xFFF)); /*0x7c50dd*/
          v62 = 2; /*0x7c50df*/
          do /*0x7c511c*/
          {
            if ( v18 ) /*0x7c50e9*/
            {
              v21 = v18; /*0x7c50eb*/
              do /*0x7c5105*/
              {
                v22 = 2; /*0x7c50ed*/
                do /*0x7c50ff*/
                {
                  if ( *v20 ) /*0x7c50f2*/
                    *a3 = *v20; /*0x7c50f8*/
                  ++a3; /*0x7c50fa*/
                  v20 += 2; /*0x7c50fb*/
                  --v22; /*0x7c50fe*/
                }
                while ( v22 ); /*0x7c50ff*/
                v20 -= 4; /*0x7c5101*/
                --v21; /*0x7c5104*/
              }
              while ( v21 ); /*0x7c5105*/
            }
            v20 += 4; /*0x7c510e*/
            a3 += v8 - 2 * v18; /*0x7c5111*/
            --v62; /*0x7c5118*/
          }
          while ( v62 ); /*0x7c511c*/
          a3 += 2 * (v18 - v8); /*0x7c5122*/
          goto LABEL_43; /*0x7c5125*/
        }
      }
  LABEL_79:
      result = v59 / a4; /*0x7c5365*/
      if ( !(v59 % a4) ) /*0x7c536d*/
      {
        a3 = &v57[2 * v8]; /*0x7c5379*/
        v57 = a3; /*0x7c537c*/
      }
    }
    while ( v59 < v58 ); /*0x7c4fcc*/
  }
  return result; /*0x7c538d*/
}
}
// 0x7C53A0
namespace gamemd {
int TileRenderer_DrawBlock2(int a1, unsigned short * a2, unsigned char * a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  int v8; // ebx
  uint16_t v9; // dx
  uint16_t v10; // ax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  uint16_t v17; // dx
  int v18; // edi
  int v19; // ecx
  unsigned char *v20; // ecx
  int v21; // ebp
  int v22; // edx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  unsigned char *v27; // eax
  int v28; // ebp
  int v29; // ecx
  unsigned int v30; // eax
  int16_t *v31; // ebp
  unsigned int v32; // ecx
  int16_t v33; // dx
  char v34; // cl
  int v35; // ebp
  int v36; // edi
  unsigned char *v37; // esi
  int v38; // eax
  unsigned char *v39; // esi
  int v40; // edi
  int v41; // ecx
  unsigned char *v42; // esi
  int v43; // eax
  bool v44; // zf
  int v45; // edi
  unsigned char *v46; // esi
  unsigned int v47; // eax
  int v48; // edi
  unsigned char *v49; // eax
  int v50; // edx
  int v51; // edi
  unsigned char *v52; // edx
  int v53; // eax
  int v54; // [esp+4h] [ebp-Ch]
  int v55; // [esp+4h] [ebp-Ch]
  int v56; // [esp+4h] [ebp-Ch]
  unsigned char *v57; // [esp+8h] [ebp-8h]
  unsigned int v58; // [esp+Ch] [ebp-4h]
  unsigned int v59; // [esp+1Ch] [ebp+Ch]
  int v60; // [esp+24h] [ebp+14h]
  int v61; // [esp+24h] [ebp+14h]
  int v62; // [esp+24h] [ebp+14h]
  int v63; // [esp+24h] [ebp+14h]
  unsigned int v64; // [esp+24h] [ebp+14h]

  result = a5 * a4; /*0x7c53b0*/
  v59 = 0; /*0x7c53b9*/
  v57 = a3; /*0x7c53c3*/
  v58 = a5 * a4; /*0x7c53c7*/
  if ( a5 * a4 ) /*0x7c53b0*/
  {
    v8 = a6; /*0x7c53d2*/
    do /*0x7c53dc*/
    {
      v9 = *a2; /*0x7c53dc*/
      if ( (IDA_HIBYTE(*a2) & 0x80u) == 0 ) /*0x7c53e3*/
      {
        v51 = 2; /*0x7c575f*/
        v52 = (unsigned char *)(a1 + 8 * *a2); /*0x7c5764*/
        do /*0x7c577a*/
        {
          v53 = 4; /*0x7c5767*/
          do /*0x7c5773*/
          {
            *a3++ = *v52++; /*0x7c576e*/
            --v53; /*0x7c5772*/
          }
          while ( v53 ); /*0x7c5773*/
          --v51; /*0x7c5775*/
          a3 = &a3[v8 - 4]; /*0x7c5776*/
        }
        while ( v51 ); /*0x7c577a*/
        a3 += 2 * (2 - v8); /*0x7c5783*/
        goto LABEL_75; /*0x7c5783*/
      }
      v10 = *a2; /*0x7c53eb*/
      v11 = v9 & 0xF000; /*0x7c53f2*/
      if ( v11 > 0xC000 ) /*0x7c53fe*/
      {
        if ( v11 == 57344 ) /*0x7c56d9*/
        {
          v48 = 2; /*0x7c5721*/
          v49 = (unsigned char *)(a1 + 8 * (v9 & 0xFFF)); /*0x7c5726*/
          do /*0x7c5740*/
          {
            v50 = 4; /*0x7c5729*/
            do /*0x7c5739*/
            {
              if ( *v49 ) /*0x7c572e*/
                *a3 = *v49; /*0x7c5734*/
              ++a3; /*0x7c5736*/
              ++v49; /*0x7c5737*/
              --v50; /*0x7c5738*/
            }
            while ( v50 ); /*0x7c5739*/
            --v48; /*0x7c573b*/
            a3 = &a3[v8 - 4]; /*0x7c573c*/
          }
          while ( v48 ); /*0x7c5740*/
          ++a2; /*0x7c574c*/
          a3 += 2 * (2 - v8); /*0x7c5750*/
          goto LABEL_76; /*0x7c5753*/
        }
        if ( v11 == 61440 ) /*0x7c56e1*/
        {
          if ( (unsigned char)v9 ) /*0x7c56e9*/
          {
            v45 = 2; /*0x7c56ee*/
            do /*0x7c570a*/
            {
              v46 = a3 + 4; /*0x7c56f5*/
              IDA_LOBYTE(v11) = v9; /*0x7c56f8*/
              IDA_BYTE1(v11) = v9; /*0x7c56fa*/
              v47 = v11 << 16; /*0x7c56fe*/
              IDA_LOWORD(v47) = v11; /*0x7c5701*/
              *((unsigned int *)v46 - 1) = v47; /*0x7c5704*/
              a3 = &v46[v8 - 4]; /*0x7c5707*/
              --v45; /*0x7c5709*/
            }
            while ( v45 ); /*0x7c570a*/
            a3 -= 2 * v8; /*0x7c5710*/
          }
          a3 += 4; /*0x7c5713*/
  LABEL_75:
          ++a2; /*0x7c5786*/
  LABEL_76:
          v30 = v59 + 1; /*0x7c578b*/
          goto LABEL_77; /*0x7c578f*/
        }
      }
      else
      {
        if ( v11 == 49152 ) /*0x7c5404*/
        {
          v31 = (int16_t *)(a2 + 1); /*0x7c5623*/
          v32 = v9 & 0xFFF; /*0x7c5626*/
          ++a2; /*0x7c5628*/
          v64 = v32; /*0x7c562e*/
          if ( v32 >> 1 ) /*0x7c562c*/
          {
            v56 = (uint16_t)(v9 & 0xFFF) >> 1; /*0x7c5638*/
            do /*0x7c56be*/
            {
              v33 = *v31; /*0x7c563c*/
              v34 = IDA_HIBYTE(*v31); /*0x7c5642*/
              if ( v34 ) /*0x7c5646*/
              {
                v35 = v8 - 4; /*0x7c5648*/
                v36 = 2; /*0x7c564b*/
                do /*0x7c5667*/
                {
                  v37 = a3 + 4; /*0x7c5652*/
                  IDA_LOBYTE(v8) = v34; /*0x7c5655*/
                  IDA_BYTE1(v8) = v34; /*0x7c5657*/
                  v38 = v8 << 16; /*0x7c565b*/
                  IDA_LOWORD(v38) = v8; /*0x7c565e*/
                  *((unsigned int *)v37 - 1) = v38; /*0x7c5661*/
                  a3 = &v37[v35]; /*0x7c5664*/
                  --v36; /*0x7c5666*/
                }
                while ( v36 ); /*0x7c5667*/
                v8 = a6; /*0x7c5669*/
                a3 -= 2 * a6; /*0x7c5671*/
              }
              v39 = a3 + 4; /*0x7c5674*/
              if ( (unsigned char)v33 ) /*0x7c5679*/
              {
                v40 = v8 - 4; /*0x7c567b*/
                v41 = 2; /*0x7c567e*/
                do /*0x7c569a*/
                {
                  v42 = v39 + 4; /*0x7c5685*/
                  IDA_LOBYTE(v8) = v33; /*0x7c5688*/
                  IDA_BYTE1(v8) = v33; /*0x7c568a*/
                  v43 = v8 << 16; /*0x7c568e*/
                  IDA_LOWORD(v43) = v8; /*0x7c5691*/
                  *((unsigned int *)v42 - 1) = v43; /*0x7c5694*/
                  v39 = &v42[v40]; /*0x7c5697*/
                  --v41; /*0x7c5699*/
                }
                while ( v41 ); /*0x7c569a*/
                v8 = a6; /*0x7c569c*/
                v39 -= 2 * a6; /*0x7c56a4*/
              }
              a3 = v39 + 4; /*0x7c56af*/
              v31 = (int16_t *)(a2 + 1); /*0x7c56b2*/
              v44 = v56 == 1; /*0x7c56b5*/
              ++a2; /*0x7c56b6*/
              --v56; /*0x7c56ba*/
            }
            while ( !v44 ); /*0x7c56be*/
            v32 = v64; /*0x7c56c4*/
          }
          v30 = v32 + v59; /*0x7c56cc*/
          goto LABEL_77; /*0x7c56ce*/
        }
        if ( v11 != 40960 ) /*0x7c5410*/
        {
          if ( v11 == 45056 ) /*0x7c541c*/
          {
            v12 = IDA_HIBYTE(v9) & 0xF; /*0x7c5425*/
            v60 = v12; /*0x7c542a*/
            if ( (unsigned char)v9 ) /*0x7c542e*/
            {
              v13 = 4 * v12; /*0x7c5430*/
              v54 = 2; /*0x7c5437*/
              do /*0x7c5481*/
              {
                if ( v13 ) /*0x7c5441*/
                {
                  v14 = v13; /*0x7c5445*/
                  IDA_LOBYTE(v8) = v9; /*0x7c5447*/
                  IDA_BYTE1(v8) = v9; /*0x7c544b*/
                  v15 = v8 << 16; /*0x7c544f*/
                  IDA_LOWORD(v15) = v8; /*0x7c5452*/
                  v8 = a6; /*0x7c5455*/
                  v16 = v13 >> 2; /*0x7c5459*/
                  memset32(a3, v15, v16); /*0x7c545c*/
                  memset(&a3[4 * v16], v15, v14 & 3); /*0x7c5463*/
                  v12 = IDA_HIBYTE(v9) & 0xF; /*0x7c5465*/
                  v13 = 4 * v60; /*0x7c5469*/
                  a3 += 4 * v60; /*0x7c5470*/
                }
                a3 += v8 - v13; /*0x7c5476*/
                --v54; /*0x7c547d*/
              }
              while ( v54 ); /*0x7c5481*/
              a3 -= 2 * v8; /*0x7c5487*/
            }
            a3 += 4 * v12; /*0x7c548e*/
            v59 += v12; /*0x7c549a*/
            ++a2; /*0x7c549e*/
          }
          goto LABEL_78; /*0x7c54a2*/
        }
        v17 = a2[1]; /*0x7c54a7*/
        ++a2; /*0x7c54b3*/
        v18 = v10 & 0xFFF; /*0x7c54b7*/
        v61 = v18; /*0x7c54bc*/
        if ( (v17 & 0x8000u) == 0 ) /*0x7c54c0*/
        {
          v63 = 2; /*0x7c55c0*/
          v27 = (unsigned char *)(a1 + 8 * v17); /*0x7c55c8*/
          do /*0x7c55fe*/
          {
            if ( v18 ) /*0x7c55cd*/
            {
              v28 = v18; /*0x7c55cf*/
              do /*0x7c55e3*/
              {
                v29 = 4; /*0x7c55d1*/
                do /*0x7c55dd*/
                {
                  *a3++ = *v27++; /*0x7c55d8*/
                  --v29; /*0x7c55dc*/
                }
                while ( v29 ); /*0x7c55dd*/
                v27 -= 4; /*0x7c55df*/
                --v28; /*0x7c55e2*/
              }
              while ( v28 ); /*0x7c55e3*/
            }
            v27 += 4; /*0x7c55f4*/
            a3 += v8 - 4 * v18; /*0x7c55f7*/
            --v63; /*0x7c55fa*/
          }
          while ( v63 ); /*0x7c55fe*/
  LABEL_42:
          ++a2; /*0x7c5600*/
          a3 += 2 * (2 * v18 - v8); /*0x7c5610*/
          v30 = v18 + v59; /*0x7c5617*/
  LABEL_77:
          v59 = v30; /*0x7c5790*/
          goto LABEL_78; /*0x7c5790*/
        }
        v19 = v17 & 0xC000; /*0x7c54cf*/
        if ( v19 == 0x8000 ) /*0x7c54db*/
        {
          if ( (unsigned char)v17 ) /*0x7c553d*/
          {
            v23 = 4 * v18; /*0x7c553f*/
            v55 = 2; /*0x7c5546*/
            do /*0x7c5590*/
            {
              if ( v23 ) /*0x7c5550*/
              {
                v24 = v23; /*0x7c5554*/
                IDA_LOBYTE(v8) = v17; /*0x7c5556*/
                IDA_BYTE1(v8) = v17; /*0x7c555a*/
                v25 = v8 << 16; /*0x7c555e*/
                IDA_LOWORD(v25) = v8; /*0x7c5561*/
                v8 = a6; /*0x7c5564*/
                v26 = v23 >> 2; /*0x7c5568*/
                memset32(a3, v25, v26); /*0x7c556b*/
                memset(&a3[4 * v26], v25, v24 & 3); /*0x7c5572*/
                v18 = v61; /*0x7c5574*/
                v23 = 4 * v61; /*0x7c5578*/
                a3 += 4 * v61; /*0x7c557f*/
              }
              a3 += v8 - v23; /*0x7c5585*/
              --v55; /*0x7c558c*/
            }
            while ( v55 ); /*0x7c5590*/
            a3 -= 2 * v8; /*0x7c5596*/
          }
          a3 += 4 * v18; /*0x7c55a6*/
          v59 += v18; /*0x7c55a9*/
          ++a2; /*0x7c55ad*/
          goto LABEL_78; /*0x7c55b1*/
        }
        if ( v19 == 49152 ) /*0x7c54e3*/
        {
          v62 = 2; /*0x7c54f2*/
          v20 = (unsigned char *)(a1 + 8 * (v17 & 0xFFF)); /*0x7c54fa*/
          do /*0x7c5534*/
          {
            if ( (v10 & 0xFFF) != 0 ) /*0x7c54ff*/
            {
              v21 = v10 & 0xFFF; /*0x7c5501*/
              do /*0x7c5519*/
              {
                v22 = 4; /*0x7c5503*/
                do /*0x7c5513*/
                {
                  if ( *v20 ) /*0x7c5508*/
                    *a3 = *v20; /*0x7c550e*/
                  ++a3; /*0x7c5510*/
                  ++v20; /*0x7c5511*/
                  --v22; /*0x7c5512*/
                }
                while ( v22 ); /*0x7c5513*/
                v20 -= 4; /*0x7c5515*/
                --v21; /*0x7c5518*/
              }
              while ( v21 ); /*0x7c5519*/
            }
            v20 += 4; /*0x7c552a*/
            a3 += v8 - 4 * v18; /*0x7c552d*/
            --v62; /*0x7c5530*/
          }
          while ( v62 ); /*0x7c5534*/
          goto LABEL_42; /*0x7c5534*/
        }
      }
  LABEL_78:
      result = v59 / a4; /*0x7c5794*/
      if ( !(v59 % a4) ) /*0x7c579c*/
      {
        result = (int)v57; /*0x7c57a4*/
        a3 = &v57[2 * v8]; /*0x7c57a8*/
        v57 = a3; /*0x7c57ab*/
      }
    }
    while ( v59 < v58 ); /*0x7c53dc*/
  }
  return result; /*0x7c57bc*/
}
}
// 0x7C57D0
namespace gamemd {
int TileRenderer_DrawBlock2Sub(int a1, unsigned short * a2, unsigned char * a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  uint16_t *v7; // ebp
  unsigned char *v8; // esi
  int v9; // ebx
  uint16_t v10; // dx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  unsigned char *v16; // edi
  uint16_t v17; // dx
  int v18; // edi
  int v19; // ecx
  unsigned char *v20; // eax
  int v21; // ebp
  int v22; // ecx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  unsigned char *v27; // eax
  int v28; // edx
  int v29; // ebp
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // ebp
  int v34; // edi
  uint16_t v35; // dx
  char v36; // cl
  unsigned char *v37; // esi
  int v38; // eax
  int v39; // edi
  int v40; // ecx
  unsigned char *v41; // esi
  unsigned char *v42; // esi
  int v43; // eax
  bool v44; // zf
  int v45; // edi
  unsigned char *v46; // esi
  int v47; // ecx
  int v48; // edi
  unsigned char *v49; // eax
  int v50; // ecx
  int v51; // edi
  unsigned char *v52; // eax
  int v53; // ecx
  int v54; // [esp+8h] [ebp-10h]
  int v55; // [esp+8h] [ebp-10h]
  unsigned int v56; // [esp+8h] [ebp-10h]
  unsigned char *v57; // [esp+Ch] [ebp-Ch]
  char v58; // [esp+10h] [ebp-8h]
  unsigned int v59; // [esp+14h] [ebp-4h]
  unsigned int v60; // [esp+24h] [ebp+Ch]
  int v61; // [esp+2Ch] [ebp+14h]
  int v62; // [esp+2Ch] [ebp+14h]
  int v63; // [esp+2Ch] [ebp+14h]
  unsigned int v64; // [esp+2Ch] [ebp+14h]

  result = a5 * a4; /*0x7c57d8*/
  v7 = a2; /*0x7c57dd*/
  v8 = a3; /*0x7c57e2*/
  v57 = a3; /*0x7c57ec*/
  v60 = 0; /*0x7c57f0*/
  v59 = a5 * a4; /*0x7c57f8*/
  if ( a5 * a4 ) /*0x7c57d8*/
  {
    v9 = a6; /*0x7c5803*/
    while ( 1 ) /*0x7c580e*/
    {
      v10 = *v7; /*0x7c580e*/
      v58 = *v7; /*0x7c5815*/
      if ( (IDA_HIBYTE(*v7) & 0x80u) == 0 ) /*0x7c5819*/
        break; /*0x7c5819*/
      v11 = v10; /*0x7c5821*/
      v12 = v10 & 0xF000; /*0x7c5828*/
      if ( v12 > 0xC000 ) /*0x7c5834*/
      {
        if ( v12 != 57344 ) /*0x7c5ae6*/
        {
          if ( v12 != 61440 ) /*0x7c5aee*/
            goto LABEL_66; /*0x7c5aee*/
          v45 = 2; /*0x7c5af7*/
          do /*0x7c5b13*/
          {
            v46 = v8 + 4; /*0x7c5afe*/
            IDA_LOBYTE(v11) = v10; /*0x7c5b01*/
            IDA_BYTE1(v11) = v10; /*0x7c5b03*/
            v47 = v11 << 16; /*0x7c5b07*/
            IDA_LOWORD(v47) = v11; /*0x7c5b0a*/
            *((unsigned int *)v46 - 1) = v47; /*0x7c5b0d*/
            v8 = &v46[v9 - 4]; /*0x7c5b10*/
            --v45; /*0x7c5b12*/
          }
          while ( v45 ); /*0x7c5b13*/
          v8 += 2 * (2 - v9); /*0x7c5b1c*/
          goto LABEL_64; /*0x7c5b1f*/
        }
        v48 = 2; /*0x7c5b2a*/
        v49 = (unsigned char *)(a1 + 8 * (v10 & 0xFFF)); /*0x7c5b2f*/
        do /*0x7c5b45*/
        {
          v50 = 4; /*0x7c5b32*/
          do /*0x7c5b3e*/
          {
            *v8++ = *v49++; /*0x7c5b39*/
            --v50; /*0x7c5b3d*/
          }
          while ( v50 ); /*0x7c5b3e*/
          --v48; /*0x7c5b40*/
          v8 = &v8[v9 - 4]; /*0x7c5b41*/
        }
        while ( v48 ); /*0x7c5b45*/
  LABEL_63:
        v8 += 2 * (2 - v9); /*0x7c5b70*/
  LABEL_64:
        v31 = v60 + 1; /*0x7c5b7a*/
        ++a2; /*0x7c5b86*/
        goto LABEL_65; /*0x7c5b86*/
      }
      switch ( v12 ) /*0x7c583a*/
      {
        case 0xC000u: /*0x7c583a*/
          v32 = v10 & 0xFFF; /*0x7c5a44*/
          v64 = v32; /*0x7c5a4e*/
          a2 = v7 + 1; /*0x7c5a54*/
          if ( v32 >> 1 ) /*0x7c5a52*/
          {
            v33 = v9 - 4; /*0x7c5a5a*/
            v56 = v32 >> 1; /*0x7c5a5d*/
            do /*0x7c5acd*/
            {
              v34 = 2; /*0x7c5a67*/
              v35 = *a2; /*0x7c5a6c*/
              v36 = IDA_HIBYTE(*a2); /*0x7c5a6f*/
              do /*0x7c5a88*/
              {
                v37 = v8 + 4; /*0x7c5a73*/
                IDA_LOBYTE(v9) = v36; /*0x7c5a76*/
                IDA_BYTE1(v9) = v36; /*0x7c5a78*/
                v38 = v9 << 16; /*0x7c5a7c*/
                IDA_LOWORD(v38) = v9; /*0x7c5a7f*/
                *((unsigned int *)v37 - 1) = v38; /*0x7c5a82*/
                v8 = &v37[v33]; /*0x7c5a85*/
                --v34; /*0x7c5a87*/
              }
              while ( v34 ); /*0x7c5a88*/
              IDA_HIWORD(v9) = IDA_HIWORD(a6); /*0x7c5a8a*/
              v39 = 2; /*0x7c5a95*/
              v40 = 2 * (2 - a6); /*0x7c5a9a*/
              v41 = &v8[v40]; /*0x7c5a9c*/
              do /*0x7c5ab5*/
              {
                v42 = v41 + 4; /*0x7c5aa0*/
                IDA_LOBYTE(v9) = v35; /*0x7c5aa3*/
                IDA_BYTE1(v9) = v35; /*0x7c5aa5*/
                v43 = v9 << 16; /*0x7c5aa9*/
                IDA_LOWORD(v43) = v9; /*0x7c5aac*/
                *((unsigned int *)v42 - 1) = v43; /*0x7c5aaf*/
                v41 = &v42[v33]; /*0x7c5ab2*/
                --v39; /*0x7c5ab4*/
              }
              while ( v39 ); /*0x7c5ab5*/
              v8 = &v41[v40]; /*0x7c5abb*/
              v44 = v56 == 1; /*0x7c5ac4*/
              ++a2; /*0x7c5ac5*/
              --v56; /*0x7c5ac9*/
            }
            while ( !v44 ); /*0x7c5acd*/
            v32 = v64; /*0x7c5acf*/
            v9 = a6; /*0x7c5ad3*/
          }
          v60 += v32; /*0x7c5ad7*/
          break;
        case 0xA000u: /*0x7c583a*/
          v17 = v7[1]; /*0x7c58d6*/
          a2 = v7 + 1; /*0x7c58e2*/
          v18 = v11 & 0xFFF; /*0x7c58e6*/
          v62 = v18; /*0x7c58eb*/
          if ( (v17 & 0x8000u) == 0 ) /*0x7c58ef*/
          {
            v27 = (unsigned char *)(a1 + 8 * v7[1]); /*0x7c59ed*/
            v28 = 2; /*0x7c59f0*/
            do /*0x7c5a24*/
            {
              if ( v18 ) /*0x7c59f7*/
              {
                v29 = v18; /*0x7c59f9*/
                do /*0x7c5a0d*/
                {
                  v30 = 4; /*0x7c59fb*/
                  do /*0x7c5a07*/
                  {
                    *v8++ = *v27++; /*0x7c5a02*/
                    --v30; /*0x7c5a06*/
                  }
                  while ( v30 ); /*0x7c5a07*/
                  v27 -= 4; /*0x7c5a09*/
                  --v29; /*0x7c5a0c*/
                }
                while ( v29 ); /*0x7c5a0d*/
                v9 = a6; /*0x7c5a0f*/
              }
              v27 += 4; /*0x7c5a1e*/
              v8 += v9 - 4 * v18; /*0x7c5a21*/
              --v28; /*0x7c5a23*/
            }
            while ( v28 ); /*0x7c5a24*/
            v8 += 2 * (2 * v18 - v9); /*0x7c5a2b*/
            goto LABEL_39; /*0x7c5a2b*/
          }
          v19 = v17 & 0xC000; /*0x7c58fe*/
          if ( v19 != 0x8000 ) /*0x7c590a*/
          {
            if ( v19 != 49152 ) /*0x7c5912*/
              break; /*0x7c5912*/
            v63 = 2; /*0x7c5921*/
            v20 = (unsigned char *)(a1 + 8 * (v17 & 0xFFF)); /*0x7c5929*/
            do /*0x7c595f*/
            {
              if ( v18 ) /*0x7c592e*/
              {
                v21 = v18; /*0x7c5930*/
                do /*0x7c5944*/
                {
                  v22 = 4; /*0x7c5932*/
                  do /*0x7c593e*/
                  {
                    *v8++ = *v20++; /*0x7c5939*/
                    --v22; /*0x7c593d*/
                  }
                  while ( v22 ); /*0x7c593e*/
                  v20 -= 4; /*0x7c5940*/
                  --v21; /*0x7c5943*/
                }
                while ( v21 ); /*0x7c5944*/
              }
              v20 += 4; /*0x7c5955*/
              v8 += v9 - 4 * v18; /*0x7c5958*/
              --v63; /*0x7c595b*/
            }
            while ( v63 ); /*0x7c595f*/
            v8 += 2 * (2 * v18 - v9); /*0x7c5966*/
  LABEL_39:
            v31 = v18 + v60; /*0x7c5a2e*/
            ++a2; /*0x7c5a3b*/
  LABEL_65:
            v60 = v31; /*0x7c5b8a*/
            break; /*0x7c5b8a*/
          }
          v23 = 4 * v18; /*0x7c596e*/
          v55 = 2; /*0x7c5975*/
          do /*0x7c59bf*/
          {
            if ( v23 ) /*0x7c597f*/
            {
              v24 = v23; /*0x7c5983*/
              IDA_LOBYTE(v9) = v17; /*0x7c5985*/
              IDA_BYTE1(v9) = v17; /*0x7c5989*/
              v25 = v9 << 16; /*0x7c598d*/
              IDA_LOWORD(v25) = v9; /*0x7c5990*/
              v9 = a6; /*0x7c5993*/
              v26 = v23 >> 2; /*0x7c5997*/
              memset32(v8, v25, v26); /*0x7c599a*/
              memset(&v8[4 * v26], v25, v24 & 3); /*0x7c59a1*/
              v18 = v62; /*0x7c59a3*/
              v23 = 4 * v62; /*0x7c59a7*/
              v8 += 4 * v62; /*0x7c59ae*/
            }
            v8 += v9 - v23; /*0x7c59b4*/
            --v55; /*0x7c59bb*/
          }
          while ( v55 ); /*0x7c59bf*/
          v8 += 2 * (2 * v18 - v9); /*0x7c59ca*/
          v60 += v18; /*0x7c59d6*/
          ++a2; /*0x7c59da*/
          break;
        case 0xB000u: /*0x7c583a*/
          v13 = IDA_HIBYTE(v10) & 0xF; /*0x7c585b*/
          v54 = 2; /*0x7c585e*/
          v61 = v13; /*0x7c5866*/
          v14 = 4 * v13; /*0x7c586a*/
          do /*0x7c58b2*/
          {
            if ( v14 ) /*0x7c5873*/
            {
              IDA_LOBYTE(v9) = v10; /*0x7c5879*/
              IDA_BYTE1(v9) = v10; /*0x7c587d*/
              v15 = v9 << 16; /*0x7c5883*/
              IDA_LOWORD(v15) = v9; /*0x7c5886*/
              v9 = a6; /*0x7c5889*/
              memset32(v8, v15, v14 >> 2); /*0x7c5890*/
              v16 = &v8[4 * (v14 >> 2)]; /*0x7c5890*/
              IDA_LOBYTE(v10) = v58; /*0x7c5894*/
              v8 += v14; /*0x7c589b*/
              memset(v16, v15, v14 & 3); /*0x7c589d*/
              v13 = v61; /*0x7c589f*/
            }
            v8 += v9 - v14; /*0x7c58a7*/
            --v54; /*0x7c58ae*/
          }
          while ( v54 ); /*0x7c58b2*/
          v60 += v13; /*0x7c58c6*/
          ++a2; /*0x7c58ca*/
          v8 += 2 * (2 * v13 - v9); /*0x7c58ce*/
          break;
      }
  LABEL_66:
      result = v60 / a4; /*0x7c5b8e*/
      if ( !(v60 % a4) ) /*0x7c5b96*/
      {
        v8 = &v57[2 * v9]; /*0x7c5ba2*/
        v57 = v8; /*0x7c5ba5*/
      }
      if ( v60 >= v59 ) /*0x7c5bad*/
        return result; /*0x7c5bad*/
      v7 = a2; /*0x7c580a*/
    }
    v51 = 2; /*0x7c5b53*/
    v52 = (unsigned char *)(a1 + 8 * *v7); /*0x7c5b58*/
    do /*0x7c5b6e*/
    {
      v53 = 4; /*0x7c5b5b*/
      do /*0x7c5b67*/
      {
        *v8++ = *v52++; /*0x7c5b62*/
        --v53; /*0x7c5b66*/
      }
      while ( v53 ); /*0x7c5b67*/
      --v51; /*0x7c5b69*/
      v8 = &v8[v9 - 4]; /*0x7c5b6a*/
    }
    while ( v51 ); /*0x7c5b6e*/
    goto LABEL_63; /*0x7c5b6e*/
  }
  return result; /*0x7c5bb5*/
}
}
// 0x7C6620
namespace gamemd {
void sub_7C6620(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  unsigned int *v6; // esi
  int v8; // eax
  int v9; // [esp-8h] [ebp-20h]
  unsigned int v10; // [esp+14h] [ebp-4h]

  v10 = *((unsigned int *)g_SlaveManagerPool + 2 * a1 + 2 * dword_8759A4 * a2); /*0x7c6642*/
  v4 = -1; /*0x7c6645*/
  do /*0x7c6719*/
  {
    v5 = -1; /*0x7c664a*/
    do /*0x7c670f*/
    {
      if ( v5 | v4 ) /*0x7c6651*/
      {
        v6 = (char *)g_SlaveManagerPool + 8 * v5 + 8 * a1 + 8 * dword_8759A4 * (v4 + a2); /*0x7c667a*/
        if ( (v6[1] & 1) != 0 ) /*0x7c6684*/
        {
          if ( !a4 && abs32(*v6 - v10) > 0xC ) /*0x7c6699*/
            return 0; /*0x7c66a2*/
        }
        else if ( abs32(*v6 - v10) > 0xC ) /*0x7c66b0*/
        {
          if ( a3 == 1 ) /*0x7c66b6*/
          {
            if ( *v6 < v10 ) /*0x7c66bd*/
            {
              *v6 = v10 - 12; /*0x7c66c5*/
              v6[1] |= 2u; /*0x7c66c7*/
            }
          }
          else if ( *v6 > v10 ) /*0x7c66d2*/
          {
            *v6 = v10 + 12; /*0x7c66da*/
            v6[1] |= 2u; /*0x7c66dc*/
          }
          v9 = v5; /*0x7c66e0*/
          v8 = sub_7C6620(v5 + a1, v4 + a2, a3, a4); /*0x7c66ee*/
          v5 = v9; /*0x7c66f8*/
          if ( !v8 && !a4 ) /*0x7c6701*/
            return 0; /*0x7c670a*/
        }
      }
      ++v5; /*0x7c670b*/
    }
    while ( v5 < 2 ); /*0x7c670f*/
    ++v4; /*0x7c6715*/
  }
  while ( v4 < 2 ); /*0x7c6719*/
  return 1; /*0x7c669e*/
}
}
// 0x7C6B70
namespace gamemd {
short sub_7C6B70(int a1, unsigned char * a2, int * a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int16_t v19; // bx
  int v20; // ebx
  int v21; // ebx
  int *v23; // [esp+8h] [ebp-10h]
  int v24; // [esp+Ch] [ebp-Ch]
  int *v25; // [esp+10h] [ebp-8h]
  unsigned int v26; // [esp+14h] [ebp-4h]
  int v27; // [esp+34h] [ebp+1Ch]

  v27 = 2 * a6; /*0x7c6b7b*/
  v24 = v27; /*0x7c6b84*/
  v6 = a2; /*0x7c6b87*/
  v26 = (unsigned int)&a2[a4 * a5]; /*0x7c6b95*/
  v7 = a3; /*0x7c6b98*/
  v25 = a3; /*0x7c6b9b*/
  do /*0x7c6c6b*/
  {
  LABEL_2:
    v8 = a4; /*0x7c6b9e*/
    do /*0x7c6c59*/
    {
      while ( 1 ) /*0x7c6ba1*/
      {
        v9 = a4 * a5; /*0x7c6ba1*/
        IDA_HIWORD(v10) = 0; /*0x7c6ba4*/
        IDA_BYTE1(v10) = v6[a4 * a5]; /*0x7c6ba6*/
        IDA_LOBYTE(v10) = *v6++; /*0x7c6ba9*/
        if ( (v10 & 0x8000) != 0 ) /*0x7c6baf*/
          break; /*0x7c6baf*/
        v11 = (int *)(a1 + 32 * v10); /*0x7c6bb4*/
        v12 = v11[1]; /*0x7c6bb9*/
        *v7 = *v11; /*0x7c6bbc*/
        v7[1] = v12; /*0x7c6bbe*/
        v13 = v11[3]; /*0x7c6bc4*/
        v23 = v11; /*0x7c6bc7*/
        *(int *)((char *)v7 + v27) = v11[2]; /*0x7c6bcd*/
        *(int *)((char *)v7 + v27 + 4) = v13; /*0x7c6bd0*/
        v14 = v11[5]; /*0x7c6bda*/
        v15 = 2 * v27; /*0x7c6be0*/
        *(int *)((char *)v7 + v15) = v23[4]; /*0x7c6be2*/
        *(int *)((char *)v7 + v15 + 4) = v14; /*0x7c6be5*/
        v16 = v23[6]; /*0x7c6bec*/
        v17 = v23[7]; /*0x7c6bef*/
        v18 = 3 * v27; /*0x7c6bf7*/
        *(int *)((char *)v7 + v18) = v16; /*0x7c6bfa*/
        *(int *)((char *)v7 + v18 + 4) = v17; /*0x7c6bfd*/
        v7 += 2; /*0x7c6c01*/
        if ( !--v8 ) /*0x7c6c05*/
        {
          v7 = &v25[v24]; /*0x7c6c0a*/
          v25 = (int *)((char *)v25 + v24 * 4); /*0x7c6c0d*/
          if ( (unsigned int)v6 >= v26 ) /*0x7c6c13*/
            return v16; /*0x7c6c13*/
          goto LABEL_2; /*0x7c6c13*/
        }
      }
      v19 = *((unsigned short *)dword_B1D14C + (v10 & 0x7FFF)); /*0x7c6c29*/
      IDA_LOWORD(v9) = v19; /*0x7c6c25*/
      v16 = v9 << 16; /*0x7c6c2c*/
      IDA_LOWORD(v16) = v19; /*0x7c6c2f*/
      *v7 = v16; /*0x7c6c32*/
      v7[1] = v16; /*0x7c6c34*/
      *(int *)((char *)v7 + v27) = v16; /*0x7c6c3a*/
      *(int *)((char *)v7 + v27 + 4) = v16; /*0x7c6c3d*/
      v20 = 2 * v27; /*0x7c6c41*/
      *(int *)((char *)v7 + v20) = v16; /*0x7c6c44*/
      *(int *)((char *)v7 + v20 + 4) = v16; /*0x7c6c47*/
      v21 = 3 * v27; /*0x7c6c4b*/
      *(int *)((char *)v7 + v21) = v16; /*0x7c6c4e*/
      *(int *)((char *)v7 + v21 + 4) = v16; /*0x7c6c51*/
      v7 += 2; /*0x7c6c55*/
      --v8; /*0x7c6c58*/
    }
    while ( v8 ); /*0x7c6c59*/
    v7 = &v25[v24]; /*0x7c6c62*/
    v25 = (int *)((char *)v25 + v24 * 4); /*0x7c6c65*/
  }
  while ( (unsigned int)v6 < v26 ); /*0x7c6c6b*/
  return v16; /*0x7c6c76*/
}
}
// 0x7C6C79
namespace gamemd {
short sub_7C6C79(int a1, unsigned char * a2, int * a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // ebx
  int16_t v16; // bx
  int v17; // ebx
  int v19; // [esp+Ch] [ebp-Ch]
  int *v20; // [esp+10h] [ebp-8h]
  unsigned int v21; // [esp+14h] [ebp-4h]
  int v22; // [esp+34h] [ebp+1Ch]

  v22 = 2 * a6; /*0x7c6c84*/
  v19 = v22; /*0x7c6c8d*/
  v6 = a2; /*0x7c6c90*/
  v21 = (unsigned int)&a2[a4 * a5]; /*0x7c6c9e*/
  v7 = a3; /*0x7c6ca1*/
  v20 = a3; /*0x7c6ca4*/
  do /*0x7c6d31*/
  {
  LABEL_2:
    v8 = a4; /*0x7c6ca7*/
    do /*0x7c6d23*/
    {
      while ( 1 ) /*0x7c6caa*/
      {
        v9 = a4 * a5; /*0x7c6caa*/
        IDA_HIWORD(v10) = 0; /*0x7c6cad*/
        IDA_BYTE1(v10) = v6[a4 * a5]; /*0x7c6caf*/
        IDA_LOBYTE(v10) = *v6++; /*0x7c6cb2*/
        if ( (v10 & 0x8000) != 0 ) /*0x7c6cb8*/
          break; /*0x7c6cb8*/
        v11 = (int *)(a1 + 32 * v10); /*0x7c6cbd*/
        v12 = v11[1]; /*0x7c6cc2*/
        *v7 = *v11; /*0x7c6cc5*/
        v7[1] = v12; /*0x7c6cc7*/
        v13 = v11[4]; /*0x7c6cca*/
        v14 = v11[5]; /*0x7c6ccd*/
        v15 = 2 * v22; /*0x7c6cd3*/
        *(int *)((char *)v7 + v15) = v13; /*0x7c6cd5*/
        *(int *)((char *)v7 + v15 + 4) = v14; /*0x7c6cd8*/
        v7 += 2; /*0x7c6cdc*/
        if ( !--v8 ) /*0x7c6ce0*/
        {
          v7 = &v20[v19]; /*0x7c6ce5*/
          v20 = (int *)((char *)v20 + v19 * 4); /*0x7c6ce8*/
          if ( (unsigned int)v6 >= v21 ) /*0x7c6cee*/
            return v13; /*0x7c6cee*/
          goto LABEL_2; /*0x7c6cee*/
        }
      }
      v16 = *((unsigned short *)dword_B1D14C + (v10 & 0x7FFF)); /*0x7c6d04*/
      IDA_LOWORD(v9) = v16; /*0x7c6d00*/
      v13 = v9 << 16; /*0x7c6d07*/
      IDA_LOWORD(v13) = v16; /*0x7c6d0a*/
      *v7 = v13; /*0x7c6d0d*/
      v7[1] = v13; /*0x7c6d0f*/
      v17 = 2 * v22; /*0x7c6d15*/
      *(int *)((char *)v7 + v17) = v13; /*0x7c6d18*/
      *(int *)((char *)v7 + v17 + 4) = v13; /*0x7c6d1b*/
      v7 += 2; /*0x7c6d1f*/
      --v8; /*0x7c6d22*/
    }
    while ( v8 ); /*0x7c6d23*/
    v7 = &v20[v19]; /*0x7c6d28*/
    v20 = (int *)((char *)v20 + v19 * 4); /*0x7c6d2b*/
  }
  while ( (unsigned int)v6 < v21 ); /*0x7c6d31*/
  return v13; /*0x7c6d3c*/
}
}
// 0x7C6D40
namespace gamemd {
short sub_7C6D40(int a1, unsigned char * a2, int * a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // eax
  int v13; // edx
  int v15; // [esp+8h] [ebp-Ch]
  int *v16; // [esp+Ch] [ebp-8h]
  unsigned int v17; // [esp+10h] [ebp-4h]

  v15 = 2 * a6; /*0x7c6d50*/
  v6 = a2; /*0x7c6d53*/
  v17 = (unsigned int)&a2[a4 * a5]; /*0x7c6d61*/
  v7 = a3; /*0x7c6d64*/
  v16 = a3; /*0x7c6d67*/
  do /*0x7c6dcb*/
  {
  LABEL_2:
    v8 = a4; /*0x7c6d6a*/
    do /*0x7c6dbd*/
    {
      while ( 1 ) /*0x7c6d6d*/
      {
        v9 = a4 * a5; /*0x7c6d6d*/
        IDA_HIWORD(v10) = 0; /*0x7c6d70*/
        IDA_BYTE1(v10) = v6[a4 * a5]; /*0x7c6d72*/
        IDA_LOBYTE(v10) = *v6++; /*0x7c6d75*/
        if ( IDA_BYTE1(v10) == 0xFF ) /*0x7c6d7b*/
          break; /*0x7c6d7b*/
        v11 = (int *)(a1 + 8 * v10); /*0x7c6d80*/
        v12 = *v11; /*0x7c6d83*/
        v13 = v11[1]; /*0x7c6d85*/
        *v7 = *v11; /*0x7c6d8b*/
        *(int *)((char *)v7++ + a6) = v13; /*0x7c6d8d*/
        if ( !--v8 ) /*0x7c6d94*/
        {
          v7 = (int *)((char *)v16 + v15); /*0x7c6d99*/
          v16 = (int *)((char *)v16 + v15); /*0x7c6d9c*/
          if ( (unsigned int)v6 >= v17 ) /*0x7c6da2*/
            return v12; /*0x7c6da2*/
          goto LABEL_2; /*0x7c6da2*/
        }
      }
      IDA_BYTE1(v10) = v10; /*0x7c6da6*/
      IDA_LOWORD(v9) = v10; /*0x7c6da8*/
      v12 = __ROL4__(v9, 16); /*0x7c6dab*/
      IDA_LOWORD(v12) = v10; /*0x7c6dae*/
      *v7 = v12; /*0x7c6db4*/
      *(int *)((char *)v7++ + a6) = v12; /*0x7c6db6*/
      --v8; /*0x7c6dbc*/
    }
    while ( v8 ); /*0x7c6dbd*/
    v7 = (int *)((char *)v16 + v15); /*0x7c6dc2*/
    v16 = (int *)((char *)v16 + v15); /*0x7c6dc5*/
  }
  while ( (unsigned int)v6 < v17 ); /*0x7c6dcb*/
  return v12; /*0x7c6dd3*/
}
}
// 0x7C6DD6
namespace gamemd {
short sub_7C6DD6(int a1, unsigned char * a2, unsigned int * a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  unsigned int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  unsigned int *v11; // ebx
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v16; // [esp+8h] [ebp-Ch]
  unsigned int *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v16 = a6; /*0x7c6de7*/
  v6 = a2; /*0x7c6dea*/
  v18 = (unsigned int)&a2[a4 * a5]; /*0x7c6df8*/
  v7 = a3; /*0x7c6dfb*/
  v17 = a3; /*0x7c6dfe*/
  do /*0x7c6e86*/
  {
  LABEL_2:
    v8 = a4; /*0x7c6e01*/
    do /*0x7c6e78*/
    {
      while ( 1 ) /*0x7c6e04*/
      {
        v9 = a4 * a5; /*0x7c6e04*/
        IDA_HIWORD(v10) = 0; /*0x7c6e07*/
        IDA_BYTE1(v10) = v6[a4 * a5]; /*0x7c6e09*/
        IDA_LOBYTE(v10) = *v6++; /*0x7c6e0c*/
        if ( IDA_BYTE1(v10) == 0xFF ) /*0x7c6e12*/
          break; /*0x7c6e12*/
        v11 = (unsigned int *)(a1 + 16 * v10); /*0x7c6e17*/
        v12 = v11[1]; /*0x7c6e1c*/
        *v7 = *v11; /*0x7c6e1f*/
        *(unsigned int *)((char *)v7 + a6) = v12; /*0x7c6e26*/
        v13 = v11[2]; /*0x7c6e2b*/
        v14 = v11[3]; /*0x7c6e2e*/
        *(unsigned int *)((char *)v7 + 2 * a6) = v13; /*0x7c6e36*/
        *(unsigned int *)((char *)v7++ + 3 * a6) = v14; /*0x7c6e3c*/
        if ( !--v8 ) /*0x7c6e43*/
        {
          v7 = &v17[v16]; /*0x7c6e48*/
          v17 = (unsigned int *)((char *)v17 + v16 * 4); /*0x7c6e4b*/
          if ( (unsigned int)v6 >= v18 ) /*0x7c6e51*/
            return v13; /*0x7c6e51*/
          goto LABEL_2; /*0x7c6e51*/
        }
      }
      IDA_BYTE1(v10) = v10; /*0x7c6e55*/
      IDA_LOWORD(v9) = v10; /*0x7c6e57*/
      v13 = __ROL4__(v9, 16); /*0x7c6e5a*/
      IDA_LOWORD(v13) = v10; /*0x7c6e5d*/
      *v7 = v13; /*0x7c6e60*/
      *(unsigned int *)((char *)v7 + a6) = v13; /*0x7c6e65*/
      *(unsigned int *)((char *)v7 + 2 * a6) = v13; /*0x7c6e6b*/
      *(unsigned int *)((char *)v7++ + 3 * a6) = v13; /*0x7c6e71*/
      --v8; /*0x7c6e77*/
    }
    while ( v8 ); /*0x7c6e78*/
    v7 = &v17[v16]; /*0x7c6e7d*/
    v17 = (unsigned int *)((char *)v17 + v16 * 4); /*0x7c6e80*/
  }
  while ( (unsigned int)v6 < v18 ); /*0x7c6e86*/
  return v13; /*0x7c6e91*/
}
}
// 0x7C6E94
namespace gamemd {
short sub_7C6E94(int a1, unsigned char * a2, unsigned short * a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  unsigned short *v7; // edi
  int v8; // ecx
  int v9; // ebx
  unsigned char *v10; // ebx
  int16_t v11; // ax
  int16_t result; // ax
  int v13; // [esp+8h] [ebp-Ch]
  unsigned short *v14; // [esp+Ch] [ebp-8h]
  unsigned int v15; // [esp+10h] [ebp-4h]

  v13 = a6; /*0x7c6ea4*/
  v6 = a2; /*0x7c6ea7*/
  v15 = (unsigned int)&a2[a4 * a5]; /*0x7c6eb5*/
  v7 = a3; /*0x7c6eb8*/
  v14 = a3; /*0x7c6ebb*/
  do /*0x7c6f23*/
  {
  LABEL_2:
    v8 = a4; /*0x7c6ebe*/
    do /*0x7c6f15*/
    {
      while ( 1 ) /*0x7c6ec4*/
      {
        IDA_HIWORD(v9) = 0; /*0x7c6ec4*/
        IDA_BYTE1(v9) = v6[a4 * a5]; /*0x7c6ec6*/
        IDA_LOBYTE(v9) = *v6++; /*0x7c6ec9*/
        if ( IDA_BYTE1(v9) == 0xFF ) /*0x7c6ecf*/
          break; /*0x7c6ecf*/
        v10 = (unsigned char *)(a1 + 16 * v9); /*0x7c6ed4*/
        IDA_LOBYTE(v11) = *v10; /*0x7c6ed7*/
        IDA_HIBYTE(v11) = v10[2]; /*0x7c6ed9*/
        *v7 = v11; /*0x7c6edc*/
        IDA_LOBYTE(result) = v10[8]; /*0x7c6edf*/
        IDA_HIBYTE(result) = v10[10]; /*0x7c6ee2*/
        *(unsigned short *)((char *)v7++ + a6) = result; /*0x7c6ee8*/
        if ( !--v8 ) /*0x7c6ef0*/
        {
          v7 = &v14[v13]; /*0x7c6ef5*/
          v14 = (unsigned short *)((char *)v14 + v13 * 2); /*0x7c6ef8*/
          if ( (unsigned int)v6 >= v15 ) /*0x7c6efe*/
            return result; /*0x7c6efe*/
          goto LABEL_2; /*0x7c6efe*/
        }
      }
      IDA_BYTE1(v9) = v9; /*0x7c6f02*/
      result = v9; /*0x7c6f04*/
      *v7 = v9; /*0x7c6f07*/
      *(unsigned short *)((char *)v7++ + a6) = v9; /*0x7c6f0d*/
      --v8; /*0x7c6f14*/
    }
    while ( v8 ); /*0x7c6f15*/
    v7 = &v14[v13]; /*0x7c6f1a*/
    v14 = (unsigned short *)((char *)v14 + v13 * 2); /*0x7c6f1d*/
  }
  while ( (unsigned int)v6 < v15 ); /*0x7c6f23*/
  return result; /*0x7c6f2b*/
}
}
// 0x7C6FC8
namespace gamemd {
short sub_7C6FC8(int a1, unsigned char * a2, int * a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int16_t v19; // bx
  int v20; // ebx
  int v21; // ebx
  int *v23; // [esp+8h] [ebp-10h]
  int v24; // [esp+Ch] [ebp-Ch]
  int *v25; // [esp+10h] [ebp-8h]
  unsigned int v26; // [esp+14h] [ebp-4h]
  int v27; // [esp+34h] [ebp+1Ch]

  v27 = 2 * a6; /*0x7c6fd3*/
  v24 = v27; /*0x7c6fdc*/
  v6 = a2; /*0x7c6fdf*/
  v26 = (unsigned int)&a2[a4 * a5]; /*0x7c6fed*/
  v7 = a3; /*0x7c6ff0*/
  v25 = a3; /*0x7c6ff3*/
  do /*0x7c70b6*/
  {
  LABEL_2:
    v8 = a4; /*0x7c6ff6*/
    do /*0x7c70a4*/
    {
      while ( 1 ) /*0x7c6ff9*/
      {
        v9 = a4 * a5; /*0x7c6ff9*/
        IDA_HIWORD(v10) = 0; /*0x7c6ffc*/
        IDA_BYTE1(v10) = v6[a4 * a5]; /*0x7c6ffe*/
        IDA_LOBYTE(v10) = *v6++; /*0x7c7001*/
        if ( (v10 & 0x8000) != 0 ) /*0x7c7007*/
          break; /*0x7c7007*/
        v11 = (int *)(a1 + 32 * v10); /*0x7c700c*/
        v12 = v11[1]; /*0x7c7011*/
        *v7 = *v11; /*0x7c7014*/
        v7[1] = v12; /*0x7c7016*/
        v13 = v11[3]; /*0x7c701c*/
        v23 = v11; /*0x7c701f*/
        *(int *)((char *)v7 + v27) = v11[2]; /*0x7c7025*/
        *(int *)((char *)v7 + v27 + 4) = v13; /*0x7c7028*/
        v14 = v11[5]; /*0x7c7032*/
        v15 = 2 * v27; /*0x7c7038*/
        *(int *)((char *)v7 + v15) = v23[4]; /*0x7c703a*/
        *(int *)((char *)v7 + v15 + 4) = v14; /*0x7c703d*/
        v16 = v23[6]; /*0x7c7044*/
        v17 = v23[7]; /*0x7c7047*/
        v18 = 3 * v27; /*0x7c704f*/
        *(int *)((char *)v7 + v18) = v16; /*0x7c7052*/
        *(int *)((char *)v7 + v18 + 4) = v17; /*0x7c7055*/
        v7 += 2; /*0x7c7059*/
        if ( !--v8 ) /*0x7c705d*/
        {
          v7 = &v25[v24]; /*0x7c7062*/
          v25 = (int *)((char *)v25 + v24 * 4); /*0x7c7065*/
          if ( (unsigned int)v6 >= v26 ) /*0x7c706b*/
            return v16; /*0x7c706b*/
          goto LABEL_2; /*0x7c706b*/
        }
      }
      v19 = v10 & 0x7FFF; /*0x7c706f*/
      IDA_LOWORD(v9) = v19; /*0x7c7074*/
      v16 = v9 << 16; /*0x7c7077*/
      IDA_LOWORD(v16) = v19; /*0x7c707a*/
      *v7 = v16; /*0x7c707d*/
      v7[1] = v16; /*0x7c707f*/
      *(int *)((char *)v7 + v27) = v16; /*0x7c7085*/
      *(int *)((char *)v7 + v27 + 4) = v16; /*0x7c7088*/
      v20 = 2 * v27; /*0x7c708c*/
      *(int *)((char *)v7 + v20) = v16; /*0x7c708f*/
      *(int *)((char *)v7 + v20 + 4) = v16; /*0x7c7092*/
      v21 = 3 * v27; /*0x7c7096*/
      *(int *)((char *)v7 + v21) = v16; /*0x7c7099*/
      *(int *)((char *)v7 + v21 + 4) = v16; /*0x7c709c*/
      v7 += 2; /*0x7c70a0*/
      --v8; /*0x7c70a3*/
    }
    while ( v8 ); /*0x7c70a4*/
    v7 = &v25[v24]; /*0x7c70ad*/
    v25 = (int *)((char *)v25 + v24 * 4); /*0x7c70b0*/
  }
  while ( (unsigned int)v6 < v26 ); /*0x7c70b6*/
  return v16; /*0x7c70c1*/
}
}
// 0x7C85EA
namespace gamemd {
int wsprintfA()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd
}

// 0x7C85F0
namespace gamemd {
int PostMessageA()
{
  return __imp_PostMessageA(hWnd, Msg, wParam, lParam);
}
} // namespace gamemd

// 0x7C8992
namespace gamemd {
void closesocket()
{
  return __imp_closesocket(s);
}
}
// 0x7C8B48
namespace gamemd {
void qsort(AbstractClass * aP0, IUnknown * aP1, size_t SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  int result; // eax
  char *v6; // esi
  size_t v7; // eax
  char *i; // edi
  char *v9; // eax
  void **v10; // edx
  char **v11; // ecx
  void **v12; // ecx
  char **v13; // eax
  char v14; // [esp+Ch] [ebp-F8h] BYREF
  char v15; // [esp+84h] [ebp-80h] BYREF
  char *v16; // [esp+FCh] [ebp-8h]
  int v17; // [esp+100h] [ebp-4h]
  char **Basea; // [esp+10Ch] [ebp+8h]
  void **NumOfElementsa; // [esp+110h] [ebp+Ch]

  if ( aP1 >= 2 && SizeOfElements ) /*0x7c8b64*/
  {
    v17 = 0; /*0x7c8b6a*/
    Basea = (char **)&v15; /*0x7c8b79*/
    v6 = (char *)aP0 + SizeOfElements * (aP1 - 1); /*0x7c8b82*/
    NumOfElementsa = (void **)&v14; /*0x7c8b84*/
    while ( 1 ) /*0x7c8c35*/
    {
      while ( 1 ) /*0x7c8b92*/
      {
        v7 = (v6 - (unsigned char *)aP0) / SizeOfElements + 1; /*0x7c8b92*/
        if ( v7 <= 8 ) /*0x7c8b96*/
        {
          result = shortsort(aP0, v6, SizeOfElements, CompareFunction); /*0x7c8b9e*/
          goto LABEL_6; /*0x7c8b9e*/
        }
        swap((char *)aP0 + SizeOfElements * (v7 >> 1), (char *)aP0, SizeOfElements); /*0x7c8bd1*/
        v16 = (char *)aP0; /*0x7c8bd9*/
        for ( i = &v6[SizeOfElements]; ; swap(v16, i, SizeOfElements) ) /*0x7c8bdc*/
        {
          do /*0x7c8bf4*/
          {
            v9 = &v16[SizeOfElements]; /*0x7c8be1*/
            v16 += SizeOfElements; /*0x7c8be6*/
          }
          while ( v16 <= v6 && CompareFunction(v9) <= 0 ); /*0x7c8bf4*/
          do /*0x7c8c06*/
            i -= SizeOfElements; /*0x7c8bf6*/
          while ( i > aP0 && CompareFunction(i) >= 0 ); /*0x7c8c06*/
          if ( i < v16 ) /*0x7c8c0f*/
            break; /*0x7c8c0f*/
        }
        swap((char *)aP0, i, SizeOfElements); /*0x7c8c1f*/
        result = (int)v16; /*0x7c8c24*/
        if ( i - (unsigned char *)aP0 - 1 >= v6 - v16 ) /*0x7c8c35*/
          break; /*0x7c8c35*/
        if ( v16 < v6 ) /*0x7c8c69*/
        {
          v12 = NumOfElementsa; /*0x7c8c6b*/
          ++v17; /*0x7c8c6e*/
          ++NumOfElementsa; /*0x7c8c71*/
          *v12 = v16; /*0x7c8c75*/
          v13 = Basea++; /*0x7c8c77*/
          *v13 = v6; /*0x7c8c7e*/
        }
        result = (int)aP0 + SizeOfElements; /*0x7c8c83*/
        if ( (char *)aP0 + SizeOfElements >= i ) /*0x7c8c87*/
        {
  LABEL_6:
          --v17; /*0x7c8ba6*/
          --NumOfElementsa; /*0x7c8ba9*/
          --Basea; /*0x7c8bad*/
          if ( v17 < 0 ) /*0x7c8bb5*/
            return result; /*0x7c8bb5*/
          aP0 = *NumOfElementsa; /*0x7c8bbe*/
          v6 = *Basea; /*0x7c8bc3*/
        }
        else
        {
          v6 = &i[-SizeOfElements]; /*0x7c8c90*/
        }
      }
      if ( (char *)aP0 + SizeOfElements < i ) /*0x7c8c3f*/
      {
        v10 = NumOfElementsa++; /*0x7c8c41*/
        v11 = Basea; /*0x7c8c4a*/
        ++v17; /*0x7c8c4d*/
        ++Basea; /*0x7c8c50*/
        *v10 = aP0; /*0x7c8c54*/
        *v11 = &i[-SizeOfElements]; /*0x7c8c56*/
      }
      if ( result >= (unsigned int)v6 ) /*0x7c8c5a*/
        goto LABEL_6; /*0x7c8c5a*/
      aP0 = (void *)result; /*0x7c8c60*/
    }
  }
  return result; /*0x7c8c97*/
}
}
// 0x7C8C9C
namespace gamemd {
void int shortsort(AbstractClass * aP0, unsigned int a2, int a3, int (__cdecl *a4)(unsigned int) a4)
{
  char *result; // eax
  char *i; // edi
  char *v6; // ebx
  char *j; // esi

  result = a1; /*0x7c8c9f*/
  for ( i = a2; i > a1; i -= a3 ) /*0x7c8ca8*/
  {
    v6 = a1; /*0x7c8cb4*/
    for ( j = &a1[a3]; j <= i; j += a3 ) /*0x7c8cb7*/
    {
      if ( a4(j) > 0 ) /*0x7c8cc7*/
        v6 = j; /*0x7c8cc9*/
    }
    result = swap(v6, i, a3); /*0x7c8cd5*/
  }
  return result; /*0x7c8ce7*/
}
}
// 0x7C8D20
namespace gamemd {
void _strcmpi(char * a1, char * a2)
{
  int result; // eax
  char v5; // t0
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+0h] [ebp-10h]

  if ( dword_B782A0 )
  {
    _InterlockedIncrement(&dword_B78BA4); /*0x7c8d73*/
    if ( dword_B78BA0 > 0 ) /*0x7c8d81*/
    {
      _InterlockedDecrement(&dword_B78BA4); /*0x7c8d87*/
      _lock(19); /*0x7c8d90*/
      v10 = 1; /*0x7c8d95*/
    }
    else
    {
      v10 = 0; /*0x7c8d83*/
    }
    v6 = 255; /*0x7c8d9c*/
    v7 = 0; /*0x7c8da1*/
    while ( (unsigned char)v6 ) /*0x7c8da6*/
    {
      IDA_LOBYTE(v6) = *a2++; /*0x7c8da8*/
      IDA_LOBYTE(v7) = *a1++; /*0x7c8dab*/
      if ( (unsigned char)v6 != (unsigned char)v7 ) /*0x7c8db0*/
      {
        v9 = v6; /*0x7c8db2*/
        v7 = tolower_0(v7); /*0x7c8db9*/
        v6 = tolower_0(v9); /*0x7c8dbe*/
        if ( (unsigned char)v7 != (unsigned char)v6 ) /*0x7c8dc8*/
        {
          v6 = -((uint8_t)v7 < (uint8_t)v6) - (((uint8_t)v7 < (uint8_t)v6) - 1); /*0x7c8dcc*/
          break; /*0x7c8dcc*/
        }
      }
    }
    v8 = v6; /*0x7c8dcf*/
    if ( v10 ) /*0x7c8dd4*/
      _unlock(19); /*0x7c8de1*/
    else
      _InterlockedDecrement(&dword_B78BA4); /*0x7c8dd6*/
    return v8; /*0x7c8de9*/
  }
  else
  {
    IDA_LOBYTE(result) = -1; /*0x7c8d38*/
    while ( (unsigned char)result )
    {
      IDA_LOBYTE(result) = *a2++; /*0x7c8d40*/
      IDA_BYTE1(result) = *a1++; /*0x7c8d43*/
      if ( IDA_BYTE1(result) != (unsigned char)result )
      {
        v5 = IDA_BYTE1(result); /*0x7c8d57*/
        IDA_BYTE1(result) = ((uint8_t)(result - 65) < 0x1Au ? 0x20 : 0) + result;
        IDA_LOBYTE(result) = ((uint8_t)(v5 - 65) < 0x1Au ? 0x20 : 0) + v5;
        if ( (unsigned char)result != IDA_BYTE1(result) ) /*0x7c8d68*/
        {
          IDA_LOBYTE(result) = -((uint8_t)result < IDA_BYTE1(result)) - (((uint8_t)result < IDA_BYTE1(result)) - 1); /*0x7c8d6c*/
          return (char)result; /*0x7c8d6c*/
        }
      }
    }
    return (char)result; /*0x7c8d6e*/
  }
}
}
// 0x7C8E25
namespace gamemd {
void * bsearch(const void * Key, const void * Base, ObjectClass * aP2, size_t SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  size_t v5; // eax
  char *v6; // edi
  size_t v7; // ebx
  size_t v8; // eax
  char *v9; // esi
  int v10; // eax
  char NumOfElementsb; // [esp+1Ch] [ebp+10h]
  size_t NumOfElementsa; // [esp+1Ch] [ebp+10h]

  v5 = aP2; /*0x7c8e28*/
  v6 = (char *)Base + SizeOfElements * (aP2 - 1); /*0x7c8e38*/
  if ( Base > v6 ) /*0x7c8e3f*/
    return 0; /*0x7c8e3f*/
  while ( 1 ) /*0x7c8e43*/
  {
    v7 = v5 >> 1; /*0x7c8e43*/
    if ( !(v5 >> 1) ) /*0x7c8e43*/
      break; /*0x7c8e43*/
    NumOfElementsb = v5; /*0x7c8e47*/
    v8 = v5 >> 1; /*0x7c8e4a*/
    NumOfElementsa = NumOfElementsb & 1; /*0x7c8e4c*/
    if ( !NumOfElementsa ) /*0x7c8e50*/
      v8 = v7 - 1; /*0x7c8e52*/
    v9 = (char *)Base + SizeOfElements * v8; /*0x7c8e5c*/
    v10 = CompareFunction(Key); /*0x7c8e62*/
    if ( !v10 ) /*0x7c8e69*/
      return v9; /*0x7c8e95*/
    if ( v10 >= 0 ) /*0x7c8e6b*/
    {
      Base = &v9[SizeOfElements]; /*0x7c8e82*/
  LABEL_10:
      v5 = v7; /*0x7c8e85*/
      goto LABEL_11; /*0x7c8e85*/
    }
    v6 = &v9[-SizeOfElements]; /*0x7c8e74*/
    if ( NumOfElementsa ) /*0x7c8e76*/
      goto LABEL_10; /*0x7c8e76*/
    v5 = v7 - 1; /*0x7c8e78*/
  LABEL_11:
    if ( Base > v6 ) /*0x7c8e8a*/
      return 0; /*0x7c8e8a*/
  }
  if ( !v5 ) /*0x7c8e99*/
    return 0; /*0x7c8e92*/
  return CompareFunction(Key, Base) == 0 ? (void *)Base : 0;
}
}
// 0x7C8F5E
namespace gamemd {
int(__cdecl *_cfltcvt_init_13())( int, void * Src, int a3, size_t Size, int a5)
{
  off_87C4D4[0] = (void (__noreturn *)())_cropzeros; /*0x7c8f63*/
  off_87C4D0[0] = (void (__noreturn *)())_cfltcvt; /*0x7c8f6d*/
  off_87C4D8[0] = (void (__noreturn *)())_fassign; /*0x7c8f72*/
  off_87C4DC[0] = (void (__noreturn *)())_forcdecpt; /*0x7c8f7c*/
  off_87C4E0[0] = (void (__noreturn *)())_positive; /*0x7c8f86*/
  off_87C4E4 = (void (__noreturn *)())_cfltcvt; /*0x7c8f90*/
  return _cfltcvt; /*0x7c8f95*/
}
}
// 0x7C8F96
namespace gamemd {
void sub_7C8F96(int a1)
{
  int result; // eax

  result = dword_B7819C; /*0x7c8f9a*/
  dword_B7819C = a1; /*0x7c8f9f*/
  return result; /*0x7c8fa5*/
}
}
// 0x7C91D0
namespace gamemd {
void * strncpy(char * Destination, const char * Source, IUnknown * aP2)
{
  size_t v3; // ecx
  size_t v4; // ebx
  const char *v5; // esi
  char *v6; // edi
  size_t v7; // ecx
  char v8; // al
  size_t v10; // ecx
  int v11; // eax
  int v12; // edx

  v3 = aP2; /*0x7c91d0*/
  if ( !aP2 ) /*0x7c91d7*/
    return Destination; /*0x7c9258*/
  v4 = aP2; /*0x7c91db*/
  v5 = Source; /*0x7c91dd*/
  v6 = Destination; /*0x7c91e7*/
  if ( ((uint8_t)Source & 3) == 0 ) /*0x7c91eb*/
  {
    v7 = aP2 >> 2; /*0x7c91ed*/
    if ( aP2 >> 2 ) /*0x7c91ed*/
      goto main_loop_entrance; /*0x7c91f0*/
  copy_tail_loop:
    while ( 1 ) /*0x7c9215*/
    {
      v8 = *v5++; /*0x7c9215*/
      *v6++ = v8; /*0x7c9218*/
      if ( !v8 ) /*0x7c921d*/
        break; /*0x7c921d*/
      if ( !--v4 ) /*0x7c9220*/
        return Destination; /*0x7c9220*/
    }
    while ( --v4 ) /*0x7c924e*/
  finish_loop:
      *v6++ = v8; /*0x7c924b*/
    return Destination; /*0x7c924f*/
  }
  do /*0x7c9207*/
  {
    v8 = *v5++; /*0x7c91f4*/
    *v6++ = v8; /*0x7c91f7*/
    if ( !--v3 ) /*0x7c91fb*/
      return Destination; /*0x7c91fb*/
    if ( !v8 ) /*0x7c91ff*/
    {
      while ( ((uint8_t)v6 & 3) != 0 ) /*0x7c9230*/
      {
        *v6++ = 0; /*0x7c9232*/
        if ( !--v3 ) /*0x7c9236*/
          return Destination; /*0x7c9236*/
      }
      v4 = v3; /*0x7c9244*/
      v10 = v3 >> 2; /*0x7c9246*/
      if ( !v10 ) /*0x7c9249*/
        goto finish_loop; /*0x7c9249*/
      goto fill_dwords_with_EOS; /*0x7c9249*/
    }
  }
  while ( ((uint8_t)v5 & 3) != 0 ); /*0x7c9207*/
  IDA_LOBYTE(v4) = v3; /*0x7c9209*/
  v7 = v3 >> 2; /*0x7c920b*/
  if ( !v7 ) /*0x7c920e*/
  {
  tail_loop_start:
    v4 &= 3u; /*0x7c9210*/
    if ( v4 ) /*0x7c9213*/
      goto copy_tail_loop; /*0x7c9213*/
    return Destination; /*0x7c9229*/
  }
  while ( 1 ) /*0x7c926d*/
  {
  main_loop_entrance:
    v11 = (*(unsigned int *)v5 + 2130640639) ^ ~*(unsigned int *)v5; /*0x7c9261*/
    v12 = *(unsigned int *)v5; /*0x7c926f*/
    v5 += 4; /*0x7c9271*/
    if ( (v11 & 0x81010100) == 0 ) /*0x7c9279*/
      goto main_loop; /*0x7c9279*/
    if ( !(unsigned char)v12 ) /*0x7c927d*/
      break; /*0x7c927d*/
    if ( !IDA_BYTE1(v12) ) /*0x7c9281*/
    {
      *(unsigned int *)v6 = (uint8_t)v12; /*0x7c92a7*/
      goto fill_with_EOS_dwords; /*0x7c92a9*/
    }
    if ( (v12 & 0xFF0000) == 0 ) /*0x7c9289*/
    {
      *(unsigned int *)v6 = (uint16_t)v12; /*0x7c929d*/
      goto fill_with_EOS_dwords; /*0x7c929f*/
    }
    if ( (v12 & 0xFF000000) == 0 ) /*0x7c9291*/
    {
      *(unsigned int *)v6 = v12; /*0x7c9293*/
      goto fill_with_EOS_dwords; /*0x7c9295*/
    }
  main_loop:
    *(unsigned int *)v6 = v12; /*0x7c9259*/
    v6 += 4; /*0x7c925b*/
    if ( !--v7 ) /*0x7c925f*/
      goto tail_loop_start; /*0x7c925f*/
  }
  *(unsigned int *)v6 = 0; /*0x7c92ad*/
  fill_with_EOS_dwords:
  v6 += 4; /*0x7c92af*/
  v8 = 0; /*0x7c92b2*/
  v10 = v7 - 1; /*0x7c92b4*/
  if ( v10 ) /*0x7c92b5*/
  {
  fill_dwords_with_EOS:
    v8 = 0; /*0x7c92b7*/
    do /*0x7c92bf*/
    {
      *(unsigned int *)v6 = 0; /*0x7c92b9*/
      v6 += 4; /*0x7c92bb*/
      --v10; /*0x7c92be*/
    }
    while ( v10 ); /*0x7c92bf*/
  }
  v4 &= 3u; /*0x7c92c1*/
  if ( v4 ) /*0x7c92c4*/
    goto finish_loop; /*0x7c92c4*/
  return Destination; /*0x7c9228*/
}
}
// 0x7C94EB
namespace gamemd {
void fread(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
  size_t v4; // edi
  size_t v6; // ecx
  unsigned int cnt; // eax
  size_t v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  size_t Buffera; // [esp+18h] [ebp+8h]
  unsigned int Streama; // [esp+24h] [ebp+14h]

  v4 = ElementCount * ElementSize; /*0x7c94f5*/
  v6 = ElementCount * ElementSize; /*0x7c94fc*/
  Buffera = ElementCount * ElementSize; /*0x7c9503*/
  if ( !(ElementCount * ElementSize) ) /*0x7c94f5*/
    return 0; /*0x7c950a*/
  if ( (Stream->_flag & 0x10C) != 0 ) /*0x7c9518*/
    Streama = Stream->_bufsiz; /*0x7c951d*/
  else
    Streama = 4096; /*0x7c9522*/
  while ( 1 ) /*0x7c952e*/
  {
    if ( (Stream->_flag & 0x10C) != 0 ) /*0x7c9534*/
    {
      cnt = Stream->_cnt; /*0x7c9536*/
      if ( cnt ) /*0x7c953b*/
      {
        v10 = v6; /*0x7c953f*/
        if ( v6 >= cnt ) /*0x7c9541*/
          v10 = Stream->_cnt; /*0x7c9543*/
        memcpy_0(Buffer, Stream->_ptr, v10); /*0x7c9549*/
        Buffera -= v10; /*0x7c954e*/
        Stream->_cnt -= v10; /*0x7c9551*/
        Stream->_ptr += v10; /*0x7c9554*/
        Buffer = (char *)Buffer + v10; /*0x7c9559*/
        v4 = ElementCount * ElementSize; /*0x7c955b*/
        goto LABEL_20; /*0x7c955e*/
      }
    }
    if ( v6 >= Streama ) /*0x7c9563*/
      break; /*0x7c9563*/
    v13 = _filbuf(Stream); /*0x7c9594*/
    if ( v13 == -1 ) /*0x7c959d*/
      return (v4 - Buffera) / ElementSize; /*0x7c959d*/
    *(unsigned char *)Buffer = v13; /*0x7c959f*/
    Buffer = (char *)Buffer + 1; /*0x7c95a4*/
    --Buffera; /*0x7c95a5*/
    Streama = Stream->_bufsiz; /*0x7c95a8*/
  LABEL_20:
    if ( !Buffera ) /*0x7c95af*/
      return ElementCount; /*0x7c95bc*/
    v6 = Buffera; /*0x7c952b*/
  }
  v11 = v6; /*0x7c9569*/
  if ( Streama ) /*0x7c956b*/
    v11 = v6 - v6 % Streama; /*0x7c9574*/
  v12 = _read(Stream->_file, Buffer, v11); /*0x7c957b*/
  if ( !v12 ) /*0x7c9585*/
  {
    Stream->_flag |= 0x10u; /*0x7c95bd*/
    return (v4 - Buffera) / ElementSize; /*0x7c95c1*/
  }
  if ( v12 != -1 ) /*0x7c958a*/
  {
    Buffera -= v12; /*0x7c958c*/
    Buffer = (char *)Buffer + v12; /*0x7c958f*/
    goto LABEL_20; /*0x7c9591*/
  }
  Stream->_flag |= 0x20u; /*0x7c95c3*/
  return (v4 - Buffera) / ElementSize; /*0x7c95b8*/
}
}
// 0x7C9602
namespace gamemd {
void fwrite(const void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
  size_t v4; // edi
  size_t v5; // ebx
  unsigned int cnt; // eax
  size_t v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // eax
  size_t v12; // eax
  int Streama; // [esp+24h] [ebp+14h]

  v4 = ElementCount * ElementSize; /*0x7c960c*/
  v5 = ElementCount * ElementSize; /*0x7c961b*/
  if ( !(ElementCount * ElementSize) ) /*0x7c960c*/
    return 0; /*0x7c9621*/
  if ( (Stream->_flag & 0x10C) != 0 ) /*0x7c962f*/
    Streama = Stream->_bufsiz; /*0x7c9634*/
  else
    Streama = 4096; /*0x7c9639*/
  while ( 1 ) /*0x7c9640*/
  {
    if ( (Stream->_flag & 0x108) != 0 ) /*0x7c9649*/
    {
      cnt = Stream->_cnt; /*0x7c964b*/
      if ( cnt ) /*0x7c9650*/
      {
        v9 = v5; /*0x7c9654*/
        if ( v5 >= cnt ) /*0x7c9656*/
          v9 = Stream->_cnt; /*0x7c9658*/
        memcpy_0(Stream->_ptr, Buffer, v9); /*0x7c9660*/
        Stream->_cnt -= v9; /*0x7c9665*/
        Stream->_ptr += v9; /*0x7c9668*/
        v5 -= v9; /*0x7c966d*/
        Buffer = (char *)Buffer + v9; /*0x7c966f*/
  LABEL_19:
        v4 = ElementCount * ElementSize; /*0x7c96ba*/
        goto LABEL_23; /*0x7c96bd*/
      }
    }
    if ( v5 >= Streama ) /*0x7c9677*/
      break; /*0x7c9677*/
    if ( _flsbuf(*(char *)Buffer, Stream) == -1 ) /*0x7c96d1*/
      goto LABEL_26; /*0x7c96d1*/
    Buffer = (char *)Buffer + 1; /*0x7c96d3*/
    --v5; /*0x7c96d9*/
    Streama = Stream->_bufsiz; /*0x7c96da*/
    if ( Streama <= 0 ) /*0x7c96df*/
      Streama = 1; /*0x7c96e1*/
  LABEL_23:
    if ( !v5 ) /*0x7c96ea*/
      return ElementCount; /*0x7c96f7*/
  }
  if ( (Stream->_flag & 0x108) == 0 || !_flush(Stream) ) /*0x7c967e*/
  {
    if ( Streama ) /*0x7c968c*/
      v10 = v5 - v5 % Streama; /*0x7c9697*/
    else
      v10 = v5; /*0x7c969b*/
    v11 = _write(Stream->_file, Buffer, v10); /*0x7c96a4*/
    if ( v11 == -1 || (Buffer = (char *)Buffer + v11, v5 -= v11, v11 < v10) ) /*0x7c96b8*/
    {
      Stream->_flag |= 0x20u; /*0x7c96f8*/
      v12 = ElementCount * ElementSize; /*0x7c96fc*/
      return (v12 - v5) / ElementSize; /*0x7c96ff*/
    }
    goto LABEL_19; /*0x7c96b8*/
  }
  LABEL_26:
  v12 = v4; /*0x7c9701*/
  return (v12 - v5) / ElementSize; /*0x7c96f3*/
}
}
// 0x7C970C
namespace gamemd {
void _onexit(_onexit_t Func)
{
  size_t v1; // eax
  _onexit_t *v2; // ecx
  size_t v3; // eax
  char *v4; // eax
  int (__cdecl *v5)(); // esi
  int v6; // ecx

  _lockexit(); /*0x7c970d*/
  v1 = _msize(dword_B78BC0); /*0x7c9718*/
  v2 = (_onexit_t *)dword_B78BBC; /*0x7c9724*/
  if ( v1 >= dword_B78BBC - (int)dword_B78BC0 + 4 ) /*0x7c9733*/
    goto LABEL_5; /*0x7c9733*/
  v3 = _msize(dword_B78BC0); /*0x7c9736*/
  v4 = (char *)realloc(dword_B78BC0, v3 + 16); /*0x7c9745*/
  if ( v4 ) /*0x7c974f*/
  {
    v6 = dword_B78BBC - (unsigned int)dword_B78BC0; /*0x7c975b*/
    dword_B78BC0 = v4; /*0x7c9761*/
    v2 = (_onexit_t *)&v4[4 * (v6 >> 2)]; /*0x7c9769*/
    dword_B78BBC = (int)v2; /*0x7c976c*/
  LABEL_5:
    *v2 = Func; /*0x7c9772*/
    dword_B78BBC += 4; /*0x7c9778*/
    v5 = Func; /*0x7c977f*/
    goto LABEL_6; /*0x7c977f*/
  }
  v5 = 0; /*0x7c9751*/
  LABEL_6:
  _unlockexit(); /*0x7c9781*/
  return v5; /*0x7c9788*/
}
}
// 0x7C979C
namespace gamemd {
void* * __onexitinit()
{
  unsigned int *v0; // eax

  v0 = malloc(0x80u); /*0x7c97a1*/
  dword_B78BC0 = v0; /*0x7c97a9*/
  if ( !v0 ) /*0x7c97ae*/
    _amsg_exit(0x18u); /*0x7c97b2*/
  *v0 = 0; /*0x7c97bd*/
  dword_B78BBC = (int)dword_B78BC0; /*0x7c97c5*/
  return dword_B78BC0; /*0x7c97ca*/
}
}
// 0x7C97D3
namespace gamemd {
void toupper(Color * aP0)
{
  int v1; // ebx
  int result; // eax
  int Ca; // [esp+8h] [ebp+4h]

  v1 = 0; /*0x7c97d4*/
  if ( dword_B782A0 ) /*0x7c97dc*/
  {
    InterlockedIncrement(&dword_B78BA4); /*0x7c97f9*/
    if ( dword_B78BA0 ) /*0x7c980b*/
    {
      InterlockedDecrement(&dword_B78BA4); /*0x7c980e*/
      _lock(19); /*0x7c9812*/
      v1 = 1; /*0x7c981a*/
    }
    Ca = toupper_0(aP0); /*0x7c9827*/
    if ( v1 ) /*0x7c982b*/
      _unlock(19); /*0x7c982f*/
    else
      InterlockedDecrement(&dword_B78BA4); /*0x7c9838*/
    return Ca; /*0x7c983a*/
  }
  else
  {
    result = aP0; /*0x7c97de*/
    if ( aP0 >= 97 && aP0 <= 122 ) /*0x7c97ea*/
      return aP0 - 32; /*0x7c97ec*/
  }
  return result; /*0x7c97ef*/
}
}
// 0x7C9842
namespace gamemd {
ControlClass * * toupper_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  CHAR DestStr[4]; // [esp+4h] [ebp-4h] BYREF

  if ( dword_B782A0 )
  {
    v2 = C; /*0x7c986d*/
    if ( (C >= 256 || ((int)SrcSizeInBytes <= 1 ? (v3 = *((unsigned char *)off_87C590 + 2 * C) & 2) : (v3 = _isctype(C, 2)), v3))
      && (*((char *)off_87C590 + 2 * IDA_BYTE1(v2) + 1) >= 0
        ? (IDA_LOWORD(C) = (uint8_t)v2, v4 = __crtLCMapStringA(
                                                   dword_B782A0,
                                                   0x200u,
                                                   (LPCSTR)&C,
                                                   1,
                                                   DestStr,
                                                   3,
                                                   0,
                                                   1))
        : (IDA_LOBYTE(C) = IDA_BYTE1(v2),
           *(unsigned short *)((char *)&C + 1) = (uint8_t)v2,
           v4 = __crtLCMapStringA(dword_B782A0, 0x200u, (LPCSTR)&C, 2, DestStr, 3, 0, 1)),
          v4) )
    {
      if ( v4 == 1 ) /*0x7c98f6*/
        return (uint8_t)DestStr[0]; /*0x7c98f8*/
      else
        return *(uint16_t *)DestStr; /*0x7c9909*/
    }
    else
    {
      return v2; /*0x7c989c*/
    }
  }
  else
  {
    result = C; /*0x7c9850*/
    if ( C >= 97 && C <= 122 ) /*0x7c985f*/
      return C - 32; /*0x7c9865*/
  }
  return result; /*0x7c990b*/
}
}
// 0x7C990E
namespace gamemd {
void isalpha(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9915*/
    return *((unsigned short *)off_87C590 + C) & 0x103; /*0x7c9936*/
  else
    return _isctype(C, 259); /*0x7c9920*/
}
}
// 0x7C993C
namespace gamemd {
int isupper(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9943*/
    return *((unsigned char *)off_87C590 + 2 * C) & 1; /*0x7c9960*/
  else
    return _isctype(C, 1); /*0x7c994b*/
}
}
// 0x7C9964
namespace gamemd {
int islower(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c996b*/
    return *((unsigned char *)off_87C590 + 2 * C) & 2; /*0x7c9988*/
  else
    return _isctype(C, 2); /*0x7c9973*/
}
}
// 0x7C998C
namespace gamemd {
void isdigit(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9993*/
    return *((unsigned char *)off_87C590 + 2 * C) & 4; /*0x7c99b0*/
  else
    return _isctype(C, 4); /*0x7c999b*/
}
}
// 0x7C99B4
namespace gamemd {
void isxdigit(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c99bb*/
    return *((unsigned char *)off_87C590 + 2 * C) & 0x80; /*0x7c99db*/
  else
    return _isctype(C, 128); /*0x7c99c6*/
}
}
// 0x7C99E1
namespace gamemd {
void isspace(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c99e8*/
    return *((unsigned char *)off_87C590 + 2 * C) & 8; /*0x7c9a05*/
  else
    return _isctype(C, 8); /*0x7c99f0*/
}
}
// 0x7C9A09
namespace gamemd {
int ispunct(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9a10*/
    return *((unsigned char *)off_87C590 + 2 * C) & 0x10; /*0x7c9a2d*/
  else
    return _isctype(C, 16); /*0x7c9a18*/
}
}
// 0x7C9A31
namespace gamemd {
void isalnum(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9a38*/
    return *((unsigned short *)off_87C590 + C) & 0x107; /*0x7c9a59*/
  else
    return _isctype(C, 263); /*0x7c9a43*/
}
}
// 0x7C9A5F
namespace gamemd {
int isprint(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9a66*/
    return *((unsigned short *)off_87C590 + C) & 0x157; /*0x7c9a87*/
  else
    return _isctype(C, 343); /*0x7c9a71*/
}
}
// 0x7C9A8D
namespace gamemd {
void isgraph(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9a94*/
    return *((unsigned short *)off_87C590 + C) & 0x117; /*0x7c9ab5*/
  else
    return _isctype(C, 279); /*0x7c9a9f*/
}
}
// 0x7C9ABB
namespace gamemd {
int iscntrl(int C)
{
  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9ac2*/
    return *((unsigned char *)off_87C590 + 2 * C) & 0x20; /*0x7c9adf*/
  else
    return _isctype(C, 32); /*0x7c9aca*/
}
}
// 0x7C9AF8
namespace gamemd {
int __iscsymf(int C)
{
  int result; // eax

  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9aff*/
    result = *((unsigned short *)off_87C590 + C) & 0x103; /*0x7c9b20*/
  else
    result = _isctype(C, 259); /*0x7c9b0a*/
  if ( result || C == 95 ) /*0x7c9b2e*/
    return 1; /*0x7c9b33*/
  return result; /*0x7c9b30*/
}
}
// 0x7C9B35
namespace gamemd {
int __iscsym(int C)
{
  int result; // eax

  if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9b3c*/
    result = *((unsigned short *)off_87C590 + C) & 0x107; /*0x7c9b5d*/
  else
    result = _isctype(C, 263); /*0x7c9b47*/
  if ( result || C == 95 ) /*0x7c9b6b*/
    return 1; /*0x7c9b70*/
  return result; /*0x7c9b6d*/
}
}
// 0x7C9B72
namespace gamemd {
void atol(const char * String)
{
  int v3; // esi
  const char *v4; // edi
  int v5; // ebp
  int v6; // ebx
  int result; // eax

  while ( (int)SrcSizeInBytes <= 1
        ? *((unsigned char *)off_87C590 + 2 * *(uint8_t *)String) & 8
        : _isctype(*(uint8_t *)String, 8) )
    ++String; /*0x7c9ba5*/
  v3 = *(uint8_t *)String; /*0x7c9ba8*/
  v4 = String + 1; /*0x7c9bab*/
  v5 = v3; /*0x7c9baf*/
  if ( v3 == 45 || v3 == 43 ) /*0x7c9bb6*/
    v3 = *(uint8_t *)v4++; /*0x7c9bb8*/
  v6 = 0; /*0x7c9bbc*/
  while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v3) & 4 : _isctype(v3, 4) )
  {
    v6 = v3 + 10 * v6 - 48; /*0x7c9be5*/
    v3 = *(uint8_t *)v4++; /*0x7c9be9*/
  }
  result = v6; /*0x7c9bf2*/
  if ( v5 == 45 ) /*0x7c9bf4*/
    return -v6; /*0x7c9bf6*/
  return result; /*0x7c9bf8*/
}
}
// 0x7C9C08
namespace gamemd {
long long long _atoi64(const char * String)
{
  int v3; // esi
  const char *v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  uint64_t v8; // kr00_8
  int64_t result; // rax
  int v10; // [esp+10h] [ebp-4h]

  while ( (int)SrcSizeInBytes <= 1
        ? *((unsigned char *)off_87C590 + 2 * *(uint8_t *)String) & 8
        : _isctype(*(uint8_t *)String, 8) )
    ++String; /*0x7c9c3c*/
  v3 = *(uint8_t *)String; /*0x7c9c3f*/
  v4 = String + 1; /*0x7c9c42*/
  v10 = v3; /*0x7c9c46*/
  if ( v3 == 45 || v3 == 43 ) /*0x7c9c4f*/
    v3 = *(uint8_t *)v4++; /*0x7c9c51*/
  v5 = 0; /*0x7c9c55*/
  v6 = 0; /*0x7c9c57*/
  while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v3) & 4 : _isctype(v3, 4) )
  {
    v8 = 10 * IDA___PAIR64__(v6, v5) + v3 - 48; /*0x7c9c9a*/
    v6 = IDA_HIDWORD(v8); /*0x7c9c9e*/
    v5 = v8; /*0x7c9c9e*/
    v3 = *(uint8_t *)v4++; /*0x7c9ca0*/
  }
  IDA_LODWORD(result) = v5; /*0x7c9cab*/
  if ( v10 == 45 ) /*0x7c9cad*/
    return -__SPAIR64__(v6, v5); /*0x7c9cb6*/
  IDA_HIDWORD(result) = v6; /*0x7c9cba*/
  return result; /*0x7c9cbc*/
}
}
// 0x7C9CC2
namespace gamemd {
ObjectClass * * strtok(char * String, ObjectClass * aP1)
{
  char v3; // dl
  char *v4; // edx
  char *v5; // ebx
  unsigned char v7[32]; // [esp+Ch] [ebp-20h] BYREF
  const char *Delimitera; // [esp+38h] [ebp+Ch]

  Delimitera = (const char *)_getptd(); /*0x7c9cd5*/
  memset(v7, 0, sizeof(v7)); /*0x7c9ce0*/
  do /*0x7c9cfc*/
  {
    v3 = *aP1; /*0x7c9ce3*/
    v7[*(uint8_t *)aP1 >> 3] |= 1 << (*aP1 & 7); /*0x7c9cf7*/
    ++aP1; /*0x7c9cf9*/
  }
  while ( v3 ); /*0x7c9cfc*/
  v4 = String; /*0x7c9cfe*/
  if ( !String ) /*0x7c9d03*/
    v4 = (char *)*((unsigned int *)Delimitera + 6); /*0x7c9d08*/
  while ( ((uint8_t)(1 << (*v4 & 7)) & v7[(uint8_t)*v4 >> 3]) != 0 && *v4 ) /*0x7c9d26*/
    ++v4; /*0x7c9d28*/
  v5 = v4; /*0x7c9d2b*/
  while ( *v4 ) /*0x7c9d31*/
  {
    if ( ((uint8_t)(1 << (*v4 & 7)) & v7[(uint8_t)*v4 >> 3]) != 0 ) /*0x7c9d48*/
    {
      *v4++ = 0; /*0x7c9d4d*/
      break; /*0x7c9d50*/
    }
    ++v4; /*0x7c9d4a*/
  }
  *((unsigned int *)Delimitera + 6) = v4; /*0x7c9d51*/
  return v4 != v5 ? v5 : 0;
}
}
// 0x7C9D66
namespace gamemd {
void atof(CCINIClass * aP0)
{
  unsigned char v4[24]; // [esp+4h] [ebp-18h] BYREF

  while ( (int)SrcSizeInBytes <= 1
        ? *((unsigned char *)off_87C590 + 2 * *(uint8_t *)aP0) & 8
        : _isctype(*(uint8_t *)aP0, 8) )
    ++aP0; /*0x7c9d9b*/
  strlen(aP0); /*0x7c9da3*/
  return _fltin2(v4, aP0); /*0x7c9dba*/
}
}
// 0x7C9DD4
namespace gamemd {
ControlClass * * strtoxl(unsigned char * a1, unsigned char ** a2, int a3, int a4)
{
  uint8_t vtable0; // bl
  uint8_t *i; // esi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  uint8_t *v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-Ch]
  unsigned int v13; // [esp+10h] [ebp-8h]
  char *v14; // [esp+14h] [ebp-4h]
  uint8_t *v15; // [esp+14h] [ebp-4h]

  v13 = 0; /*0x7c9ddb*/
  vtable0 = (uint8_t)a1->AbstractClass; /*0x7c9de4*/
  for ( i = (uint8_t *)&a1->AbstractClass + 1;
        (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * vtable0) & 8 : _isctype(vtable0, 8);
        ++i )
  {
    vtable0 = *i; /*0x7c9e17*/
  }
  v14 = (char *)i; /*0x7c9e1f*/
  if ( vtable0 == 45 ) /*0x7c9e22*/
  {
    a4 |= 2u; /*0x7c9e24*/
  LABEL_10:
    vtable0 = *i++; /*0x7c9e2f*/
    v14 = (char *)i; /*0x7c9e32*/
    goto LABEL_11; /*0x7c9e32*/
  }
  if ( vtable0 == 43 ) /*0x7c9e2d*/
    goto LABEL_10; /*0x7c9e2d*/
  LABEL_11:
  if ( a3 >= 0 && a3 != 1 && a3 <= 36 ) /*0x7c9e4c*/
  {
    if ( !a3 ) /*0x7c9e57*/
    {
      if ( vtable0 != 48 ) /*0x7c9e5c*/
      {
        a3 = 10; /*0x7c9e5e*/
  LABEL_26:
        v12 = 0xFFFFFFFF / a3; /*0x7c9e99*/
        while ( 1 ) /*0x7c9ea9*/
        {
          if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9eb3*/
            v7 = *((unsigned char *)off_87C590 + 2 * vtable0) & 4; /*0x7c9ec9*/
          else
            v7 = _isctype(vtable0, 4); /*0x7c9eb8*/
          if ( v7 ) /*0x7c9ece*/
          {
            v8 = (char)vtable0 - 48; /*0x7c9ed3*/
          }
          else
          {
            if ( (int)SrcSizeInBytes <= 1 ) /*0x7c9edf*/
              v9 = *((unsigned short *)off_87C590 + vtable0) & 0x103; /*0x7c9ef5*/
            else
              v9 = _isctype(vtable0, 259); /*0x7c9ee3*/
            if ( !v9 ) /*0x7c9ef9*/
            {
  LABEL_44:
              v15 = (uint8_t *)(v14 - 1); /*0x7c9f45*/
              if ( (a4 & 8) != 0 ) /*0x7c9f50*/
              {
                if ( (a4 & 4) != 0 /*0x7c9f84*/
                  || (a4 & 1) == 0 && ((a4 & 2) != 0 && v13 > 0x80000000 || (a4 & 2) == 0 && v13 > 0x7FFFFFFF) )
                {
                  *_errno() = 34; /*0x7c9f8f*/
                  if ( (a4 & 1) != 0 ) /*0x7c9f95*/
                    v13 = -1; /*0x7c9f97*/
                  else
                    v13 = ((a4 & 2) != 0) + 0x7FFFFFFF; /*0x7c9faa*/
                }
              }
              else
              {
                if ( a2 ) /*0x7c9f54*/
                  v15 = (uint8_t *)a1; /*0x7c9f59*/
                v13 = 0; /*0x7c9f5c*/
              }
              if ( a2 ) /*0x7c9faf*/
                *a2 = v15; /*0x7c9fb4*/
              if ( (a4 & 2) != 0 ) /*0x7c9fba*/
                return -v13; /*0x7c9fc1*/
              return v13; /*0x7c9fc7*/
            }
            v8 = toupper((char)vtable0) - 55; /*0x7c9f07*/
          }
          if ( v8 >= a3 ) /*0x7c9f0d*/
            goto LABEL_44; /*0x7c9f0d*/
          a4 |= 8u; /*0x7c9f12*/
          if ( v13 < v12 || v13 == v12 && v8 <= 0xFFFFFFFF % a3 ) /*0x7c9f27*/
            v13 = v8 + a3 * v13; /*0x7c9f35*/
          else
            a4 |= 4u; /*0x7c9f29*/
          v10 = (uint8_t *)v14++; /*0x7c9f38*/
          vtable0 = *v10; /*0x7c9f3e*/
        }
      }
      if ( *i != 120 && *i != 88 ) /*0x7c9e6f*/
      {
        a3 = 8; /*0x7c9e71*/
        goto LABEL_26; /*0x7c9e78*/
      }
      a3 = 16; /*0x7c9e7a*/
    }
    if ( a3 == 16 && vtable0 == 48 && (*i == 120 || *i == 88) ) /*0x7c9e8f*/
    {
      vtable0 = i[1]; /*0x7c9e91*/
      v14 = (char *)(i + 2); /*0x7c9e96*/
    }
    goto LABEL_26; /*0x7c9e96*/
  }
  if ( a2 ) /*0x7c9fce*/
    *a2 = (uint8_t *)a1; /*0x7c9fd0*/
  return 0; /*0x7c9fd4*/
}
}
// 0x7CA090
namespace gamemd {
EditClass * * memcpy(void * a0, AbstractClass * aP1, size_t Size)
{
  char *v3; // esi
  char *v4; // edi
  size_t v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = (char *)aP1; /*0x7ca095*/
  v4 = (char *)a0; /*0x7ca09b*/
  if ( a0 > aP1 && a0 < (char *)aP1 + Size ) /*0x7ca0aa*/
  {
    v7 = (char *)aP1 + Size - 4; /*0x7ca228*/
    v8 = (char *)a0 + Size - 4; /*0x7ca22c*/
    if ( ((uint8_t)v8 & 3) == 0 ) /*0x7ca236*/
    {
      v9 = Size >> 2; /*0x7ca238*/
      if ( Size >> 2 >= 8 ) /*0x7ca241*/
      {
        while ( v9 ) /*0x7ca244*/
        {
          *(unsigned int *)v8 = *(unsigned int *)v7; /*0x7ca244*/
          v7 -= 4; /*0x7ca244*/
          v8 -= 4; /*0x7ca244*/
          --v9; /*0x7ca244*/
        }
        switch ( Size & 3 ) /*0x7ca247*/
        {
          case 0u: /*0x7ca247*/
            goto TrailDown0;
          case 1u: /*0x7ca247*/
            goto TrailDown1;
          case 2u: /*0x7ca247*/
            goto TrailDown2;
          case 3u: /*0x7ca247*/
            goto TrailDown3;
        }
      }
      switch ( Size & 3 ) /*0x7ca367*/
      {
        case 0u: /*0x7ca367*/
          goto TrailDown0;
        case 1u: /*0x7ca367*/
          goto TrailDown1;
        case 2u: /*0x7ca367*/
          goto TrailDown2;
        case 3u: /*0x7ca367*/
          goto TrailDown3;
      }
    }
    switch ( Size ) /*0x7ca274*/
    {
      case 0u: /*0x7ca274*/
  TrailDown0:
        result = a0; /*0x7ca380*/
        break; /*0x7ca386*/
      case 1u: /*0x7ca274*/
  TrailDown1:
        v8[3] = v7[3]; /*0x7ca388*/
        result = a0; /*0x7ca38e*/
        break; /*0x7ca394*/
      case 2u: /*0x7ca274*/
  TrailDown2:
        v8[3] = v7[3]; /*0x7ca398*/
        v8[2] = v7[2]; /*0x7ca3a1*/
        result = a0; /*0x7ca3a4*/
        break; /*0x7ca3aa*/
      case 3u: /*0x7ca274*/
  TrailDown3:
        v8[3] = v7[3]; /*0x7ca3ac*/
        v8[2] = v7[2]; /*0x7ca3b5*/
        v8[1] = v7[1]; /*0x7ca3bb*/
        result = a0; /*0x7ca3be*/
        break; /*0x7ca3be*/
      default:
        __asm { jmp dword ptr ds:loc_7CA274+4[eax*4] } /*0x7ca26d*/
        return result; /*0x7ca26d*/
    }
  }
  else
  {
    if ( ((uint8_t)a0 & 3) != 0 ) /*0x7ca0b6*/
    {
      if ( Size >= 4 ) /*0x7ca0d6*/
        __asm { jmp dword ptr ds:loc_7CA0EC+4[eax*4] } /*0x7ca0dd*/
      __asm { jmp dword ptr ds:TrailUp0[ecx*4]; jumptable 007CA0C5 case 0 } /*0x7ca0e4*/
    }
    v5 = Size >> 2; /*0x7ca0b8*/
    switch ( v5 ) /*0x7ca0ec*/
    {
      case 0u: /*0x7ca0ec*/
        goto UnwindUp0;
      case 1u: /*0x7ca0ec*/
        goto UnwindUp1;
      case 2u: /*0x7ca0ec*/
        goto UnwindUp2;
      case 3u: /*0x7ca0ec*/
        goto UnwindUp3;
      case 4u: /*0x7ca0ec*/
        goto UnwindUp4;
      case 5u: /*0x7ca0ec*/
        goto UnwindUp5;
      case 6u: /*0x7ca0ec*/
        goto UnwindUp6;
      case 7u: /*0x7ca0ec*/
        *((unsigned int *)a0 + v5 - 7) = *((unsigned int *)aP1 + v5 - 7); /*0x7ca190*/
  UnwindUp6:
        *((unsigned int *)a0 + v5 - 6) = *((unsigned int *)aP1 + v5 - 6); /*0x7ca194*/
  UnwindUp5:
        *((unsigned int *)a0 + v5 - 5) = *((unsigned int *)aP1 + v5 - 5); /*0x7ca19c*/
  UnwindUp4:
        *((unsigned int *)a0 + v5 - 4) = *((unsigned int *)aP1 + v5 - 4); /*0x7ca1a4*/
  UnwindUp3:
        *((unsigned int *)a0 + v5 - 3) = *((unsigned int *)aP1 + v5 - 3); /*0x7ca1ac*/
  UnwindUp2:
        *((unsigned int *)a0 + v5 - 2) = *((unsigned int *)aP1 + v5 - 2); /*0x7ca1b4*/
  UnwindUp1:
        *((unsigned int *)a0 + v5 - 1) = *((unsigned int *)aP1 + v5 - 1); /*0x7ca1bc*/
        v3 = (char *)aP1 + 4 * v5; /*0x7ca1cb*/
        v4 = (char *)a0 + 4 * v5; /*0x7ca1cd*/
  UnwindUp0:
        switch ( Size & 3 ) /*0x7ca1cf*/
        {
          case 0u: /*0x7ca1cf*/
            goto TrailUp0;
          case 1u: /*0x7ca1cf*/
            goto TrailUp1;
          case 2u: /*0x7ca1cf*/
            goto TrailUp2;
          case 3u: /*0x7ca1cf*/
            goto TrailUp3;
        }
      default:
        qmemcpy(a0, aP1, 4 * v5); /*0x7ca0c3*/
        v3 = (char *)aP1 + 4 * v5; /*0x7ca0c3*/
        v4 = (char *)a0 + 4 * v5; /*0x7ca0c3*/
        switch ( Size & 3 ) /*0x7ca0c5*/
        {
          case 0u: /*0x7ca0c5*/
  TrailUp0:
            result = a0; /*0x7ca1e8*/
            break; /*0x7ca1ee*/
          case 1u: /*0x7ca0c5*/
  TrailUp1:
            *v4 = *v3; /*0x7ca1f0*/
            result = a0; /*0x7ca1f4*/
            break; /*0x7ca1fa*/
          case 2u: /*0x7ca0c5*/
  TrailUp2:
            *v4 = *v3; /*0x7ca1fc*/
            v4[1] = v3[1]; /*0x7ca203*/
            result = a0; /*0x7ca206*/
            break; /*0x7ca20c*/
          case 3u: /*0x7ca0c5*/
  TrailUp3:
            *v4 = *v3; /*0x7ca210*/
            v4[1] = v3[1]; /*0x7ca217*/
            v4[2] = v3[2]; /*0x7ca21d*/
            result = a0; /*0x7ca220*/
            break; /*0x7ca226*/
        }
        break; /*0x7ca226*/
    }
  }
  return result; /*0x7ca1eb*/
}
}
// 0x7CA4B0
namespace gamemd {
void * strstr(ObjectClass * aP0, const char * SubStr)
{
  char v2; // dl
  const char *v3; // edi
  char v4; // dh
  const char *v5; // ecx
  char *v6; // esi
  char v7; // al
  char v9; // ah
  char v10; // al
  char v11; // al

  v2 = *SubStr; /*0x7ca4b7*/
  v3 = aP0; /*0x7ca4b9*/
  if ( !*SubStr ) /*0x7ca4b7*/
    return (char *)aP0; /*0x7ca52a*/
  v4 = SubStr[1]; /*0x7ca4c1*/
  if ( !v4 ) /*0x7ca4c6*/
    JUMPOUT(0x7CAF36); /*0x7caf36*/
  findnext:
  v5 = SubStr; /*0x7ca4c8*/
  v6 = (char *)(v3 + 1); /*0x7ca4d0*/
  if ( *v3 == v2 ) /*0x7ca4d3*/
    goto first_char_found; /*0x7ca4d3*/
  if ( *v3 ) /*0x7ca4ce*/
  {
    while ( 2 ) /*0x7ca4d9*/
    {
      v7 = *v6++; /*0x7ca4d9*/
      while ( v7 == v2 ) /*0x7ca4de*/
      {
  first_char_found:
        v7 = *v6++; /*0x7ca4ea*/
        if ( v7 == v4 ) /*0x7ca4ef*/
        {
          v3 = v6 - 1; /*0x7ca4f1*/
          while ( 1 ) /*0x7ca4f4*/
          {
            v9 = v5[2]; /*0x7ca4f4*/
            if ( !v9 ) /*0x7ca4f9*/
              break; /*0x7ca4f9*/
            v10 = *v6; /*0x7ca4fb*/
            v6 += 2; /*0x7ca4fd*/
            if ( v10 != v9 ) /*0x7ca502*/
              goto findnext; /*0x7ca502*/
            v11 = v5[3]; /*0x7ca504*/
            if ( !v11 ) /*0x7ca509*/
              break; /*0x7ca509*/
            v5 += 2; /*0x7ca50e*/
            if ( v11 != *(v6 - 1) ) /*0x7ca513*/
              goto findnext; /*0x7ca513*/
          }
          return (char *)(v3 - 1); /*0x7ca529*/
        }
      }
      if ( v7 ) /*0x7ca4e2*/
        continue; /*0x7ca4e2*/
      break;
    }
  }
  return 0; /*0x7ca4e4*/
}
}
// 0x7CA650
namespace gamemd {
void _alloca_probe(WinModemClass * aP0, char a2)
{
  char *i; // ecx

  for ( i = &a2; a1 >= 0x1000; a1 -= 4096 ) /*0x7ca65a*/
    i -= 4096; /*0x7ca65c*/
  __asm { retn } /*0x7ca67e*/
}
}
// 0x7CA67F
namespace gamemd {
void time(__time32_t *const Time)
{
  int v1; // eax
  DWORD v2; // eax
  int result; // eax
  struct _TIME_ZONE_INFORMATION TimeZoneInformation; // [esp+0h] [ebp-CCh] BYREF
  struct _SYSTEMTIME v5; // [esp+ACh] [ebp-20h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+BCh] [ebp-10h] BYREF

  GetLocalTime(&SystemTime); /*0x7ca68c*/
  GetSystemTime(&v5); /*0x7ca696*/
  if ( v5.wMinute == IDA_WORD5(xmmword_B781B0) /*0x7ca6db*/
    && v5.wHour == IDA_WORD4(xmmword_B781B0)
    && v5.wDay == IDA_WORD3(xmmword_B781B0)
    && v5.wMonth == IDA_WORD1(xmmword_B781B0)
    && v5.wYear == (unsigned short)xmmword_B781B0 )
  {
    v1 = dword_B781A8; /*0x7ca6dd*/
  }
  else
  {
    v2 = GetTimeZoneInformation(&TimeZoneInformation); /*0x7ca6eb*/
    if ( v2 == -1 ) /*0x7ca6f4*/
      v1 = -1; /*0x7ca711*/
    else
      v1 = v2 == 2 && TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias; /*0x7ca70a*/
    xmmword_B781B0 = (__int128)v5; /*0x7ca71e*/
    dword_B781A8 = v1; /*0x7ca723*/
  }
  result = __loctotime_t( /*0x7ca748*/
             SystemTime.wYear,
             SystemTime.wMonth,
             SystemTime.wDay,
             SystemTime.wHour,
             SystemTime.wMinute,
             SystemTime.wSecond,
             v1);
  if ( Time ) /*0x7ca755*/
    *Time = result; /*0x7ca757*/
  return result; /*0x7ca759*/
}
}
// 0x7CA9AF
namespace gamemd {
void ObjectClass::j_Exception_Destructor()
{

  Exception::Destructor(this); /*0x7ca9af*/

}
}
// 0x7CAA00
namespace gamemd {
void ObjectClass::j_Exception_Destructor_2()
{

  Exception::Destructor(this); /*0x7caa00*/

}
}
// 0x7CAC2F
namespace gamemd {
void ObjectClass::j_Exception_Destructor_3()
{

  Exception::Destructor(this); /*0x7cac2f*/

}
}
// 0x7CACC0
namespace gamemd {
const struct _s_RTTIBaseClassDescriptor * _FindMITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(void * a1, const struct _s_RTTICompleteObjectLocator * a2, struct TypeDescriptor * a3, int a4, struct TypeDescriptor * a5)
{
  const struct _s_RTTICompleteObjectLocator *v5; // ebx
  int v6; // eax
  int **v7; // edi
  int *v8; // esi
  int v9; // eax
  int *v10; // ebx
  int v11; // eax
  int v12; // eax
  int **v13; // edi
  int v14; // eax
  unsigned int v16; // [esp+Ch] [ebp-Ch]
  int **v17; // [esp+10h] [ebp-8h]
  unsigned int v18; // [esp+14h] [ebp-4h]
  unsigned int v19; // [esp+14h] [ebp-4h]

  v18 = 0; /*0x7cacc6*/
  v5 = a2; /*0x7caccb*/
  v6 = *((unsigned int *)a2 + 4); /*0x7cacd0*/
  v7 = *(int ***)(v6 + 12); /*0x7cacd7*/
  if ( *(unsigned int *)(v6 + 8) ) /*0x7cacd3*/
  {
    while ( 1 ) /*0x7cace0*/
    {
      v8 = *v7; /*0x7cace0*/
      v9 = **v7; /*0x7cace5*/
      if ( (struct TypeDescriptor *)v9 == a5 || !strcmp((const char *)(v9 + 8), a5->name) ) /*0x7cacf3*/
      {
        v16 = 0; /*0x7cacfe*/
        v17 = v7 + 1; /*0x7cad09*/
        if ( v8[1] ) /*0x7cad02*/
          break; /*0x7cad02*/
      }
  LABEL_10:
      ++v18; /*0x7cad54*/
      ++v7; /*0x7cad5d*/
      if ( v18 >= *(unsigned int *)(*((unsigned int *)v5 + 4) + 8) ) /*0x7cad63*/
        goto LABEL_11; /*0x7cad63*/
    }
    while ( 1 ) /*0x7cad14*/
    {
      v10 = *v17; /*0x7cad14*/
      v11 = **v17; /*0x7cad16*/
      if ( ((struct TypeDescriptor *)v11 == a3 || !strcmp((const char *)(v11 + 8), a3->name)) /*0x7cad40*/
        && _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)(v10 + 2)) == a4 )
      {
        break; /*0x7cad40*/
      }
      ++v16; /*0x7cad42*/
      ++v17; /*0x7cad45*/
      if ( v16 >= v8[1] ) /*0x7cad4f*/
      {
        v5 = a2; /*0x7cad51*/
        goto LABEL_10; /*0x7cad51*/
      }
    }
  }
  else
  {
  LABEL_11:
    v12 = *((unsigned int *)v5 + 4); /*0x7cad69*/
    v19 = 0; /*0x7cad6c*/
    v13 = *(int ***)(v12 + 12); /*0x7cad74*/
    if ( !*(unsigned int *)(v12 + 8) ) /*0x7cad77*/
      return 0; /*0x7cadb4*/
    while ( 1 ) /*0x7cad79*/
    {
      v8 = *v13; /*0x7cad79*/
      v14 = **v13; /*0x7cad7e*/
      if ( ((struct TypeDescriptor *)v14 == a5 || !strcmp((const char *)(v14 + 8), a5->name)) && (v8[5] & 3) == 0 ) /*0x7cad9b*/
        break; /*0x7cad9b*/
      ++v19; /*0x7cad9d*/
      ++v13; /*0x7cada6*/
      if ( v19 >= *(unsigned int *)(*((unsigned int *)v5 + 4) + 8) ) /*0x7cadac*/
        return 0; /*0x7cadac*/
    }
  }
  return (const struct _s_RTTIBaseClassDescriptor *)v8; /*0x7cadb0*/
}
}
// 0x7CADB9
namespace gamemd {
const struct _s_RTTIBaseClassDescriptor * _FindVITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(void * a1, const struct _s_RTTICompleteObjectLocator * a2, struct TypeDescriptor * a3, int a4, struct TypeDescriptor * a5)
{
  const struct _s_RTTICompleteObjectLocator *v5; // edi
  int v6; // eax
  int **v7; // ebx
  int *v8; // esi
  int v9; // eax
  int *v10; // edi
  int v11; // eax
  const struct _s_RTTIBaseClassDescriptor *v12; // edi
  const struct _s_RTTIBaseClassDescriptor *result; // eax
  int v14; // eax
  int **v15; // ebx
  int *v16; // esi
  int v17; // eax
  const struct _s_RTTIBaseClassDescriptor *v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+Ch] [ebp-10h]
  unsigned int v20; // [esp+10h] [ebp-Ch]
  int **v21; // [esp+14h] [ebp-8h]
  unsigned int v22; // [esp+18h] [ebp-4h]
  unsigned int v23; // [esp+18h] [ebp-4h]

  v5 = a2; /*0x7cadc2*/
  v6 = *((unsigned int *)a2 + 4); /*0x7cadc7*/
  v18 = 0; /*0x7cadca*/
  v22 = 0; /*0x7cadcd*/
  v7 = *(int ***)(v6 + 12); /*0x7cadd3*/
  if ( !*(unsigned int *)(v6 + 8) ) /*0x7cadd0*/
    goto LABEL_15; /*0x7cadd0*/
  do /*0x7cae94*/
  {
    v8 = *v7; /*0x7caddc*/
    v9 = **v7; /*0x7cade1*/
    if ( (struct TypeDescriptor *)v9 == a5 || !strcmp((const char *)(v9 + 8), a5->name) ) /*0x7cadef*/
    {
      v20 = 0; /*0x7cadfe*/
      v21 = v7 + 1; /*0x7cae09*/
      if ( v8[1] ) /*0x7cae02*/
      {
        do /*0x7cae80*/
        {
          v10 = *v21; /*0x7cae14*/
          v11 = **v21; /*0x7cae16*/
          if ( ((struct TypeDescriptor *)v11 == a3 || !strcmp((const char *)(v11 + 8), a3->name)) /*0x7cae40*/
            && _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)(v10 + 2)) == a4 )
          {
            v12 = v18; /*0x7cae42*/
            if ( v18 ) /*0x7cae47*/
            {
              v19 = _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)(v8 + 2)); /*0x7cae5b*/
              if ( _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)((char *)v12 + 8)) != v19 ) /*0x7cae6e*/
                return 0; /*0x7cae6e*/
            }
            v18 = (const struct _s_RTTIBaseClassDescriptor *)v8; /*0x7cae70*/
          }
          ++v20; /*0x7cae73*/
          ++v21; /*0x7cae76*/
        }
        while ( v20 < v8[1] ); /*0x7cae80*/
        v5 = a2; /*0x7cae82*/
      }
    }
    ++v22; /*0x7cae85*/
    ++v7; /*0x7cae8e*/
  }
  while ( v22 < *(unsigned int *)(*((unsigned int *)v5 + 4) + 8) ); /*0x7cae94*/
  result = v18; /*0x7cae9a*/
  if ( !v18 ) /*0x7caea1*/
  {
  LABEL_15:
    v14 = *((unsigned int *)v5 + 4); /*0x7caea3*/
    v23 = 0; /*0x7caea6*/
    v15 = *(int ***)(v14 + 12); /*0x7caeac*/
    if ( *(unsigned int *)(v14 + 8) ) /*0x7caea9*/
    {
      while ( 1 ) /*0x7caeb1*/
      {
        v16 = *v15; /*0x7caeb1*/
        v17 = **v15; /*0x7caeb6*/
        if ( ((struct TypeDescriptor *)v17 == a5 || !strcmp((const char *)(v17 + 8), a5->name)) && (v16[5] & 3) == 0 ) /*0x7caed3*/
          break; /*0x7caed3*/
        ++v23; /*0x7caed5*/
        ++v15; /*0x7caede*/
        if ( v23 >= *(unsigned int *)(*((unsigned int *)v5 + 4) + 8) ) /*0x7caee4*/
          return 0; /*0x7caee4*/
      }
      return (const struct _s_RTTIBaseClassDescriptor *)v16; /*0x7caeed*/
    }
    else
    {
      return 0; /*0x7caee6*/
    }
  }
  return result; /*0x7caee8*/
}
}
// 0x7CAF30
namespace gamemd {
void * strchr(const char * Str, int Val)
{
  const char *v2; // edx
  char v3; // cl
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  v2 = Str; /*0x7caf3c*/
  if ( ((uint8_t)Str & 3) != 0 ) /*0x7caf46*/
  {
    while ( 1 ) /*0x7caf48*/
    {
      v3 = *v2++; /*0x7caf48*/
      if ( v3 == (unsigned char)Val ) /*0x7caf4d*/
        return (char *)(v2 - 1); /*0x7caf20*/
      if ( !v3 ) /*0x7caf51*/
        return 0; /*0x7caf51*/
      if ( ((uint8_t)v2 & 3) == 0 ) /*0x7caf59*/
        goto main_loop_0; /*0x7caf59*/
    }
  }
  else
  {
    while ( 1 ) /*0x7caf8a*/
    {
  main_loop_0:
      while ( 1 ) /*0x7caf71*/
      {
        v4 = (((uint8_t)Val << 8) /*0x7caf71*/
            | (uint8_t)Val
            | ((((uint8_t)Val << 8) | (uint8_t)Val) << 16))
           ^ *(unsigned int *)v2;
        v5 = *(unsigned int *)v2 + 2130640639; /*0x7caf73*/
        v6 = v5 ^ ~*(unsigned int *)v2; /*0x7caf7f*/
        v2 += 4; /*0x7caf81*/
        if ( (((v4 + 2130640639) ^ ~v4) & 0x81010100) != 0 ) /*0x7caf8a*/
          break; /*0x7caf8a*/
        v7 = v6 & 0x81010100; /*0x7caf8c*/
        if ( v7 && ((v7 & 0x1010100) != 0 || (v5 & 0x80000000) == 0) ) /*0x7cafa0*/
          return 0; /*0x7cafa7*/
      }
      v9 = *((unsigned int *)v2 - 1); /*0x7cafa8*/
      if ( (unsigned char)v9 == (unsigned char)Val ) /*0x7cafad*/
        break; /*0x7cafad*/
      if ( !(unsigned char)v9 ) /*0x7cafb1*/
        return 0; /*0x7cafb1*/
      if ( IDA_BYTE1(v9) == (unsigned char)Val ) /*0x7cafb5*/
        return (char *)(v2 - 3); /*0x7cafe4*/
      if ( !IDA_BYTE1(v9) ) /*0x7cafb9*/
        return 0; /*0x7cafb9*/
      v10 = IDA_HIWORD(v9); /*0x7cafbb*/
      if ( (unsigned char)v10 == (unsigned char)Val ) /*0x7cafc0*/
        return (char *)(v2 - 2); /*0x7cafdd*/
      if ( !(unsigned char)v10 ) /*0x7cafc4*/
        return 0; /*0x7cafc4*/
      if ( IDA_BYTE1(v10) == (unsigned char)Val ) /*0x7cafc8*/
        return (char *)(v2 - 1); /*0x7cafd6*/
      if ( !IDA_BYTE1(v10) ) /*0x7cafcc*/
        return 0; /*0x7cafcc*/
    }
    return (char *)(v2 - 4); /*0x7cafe5*/
  }
}
}
// 0x7CAFF4
namespace gamemd {
void tolower(int C)
{
  int v1; // ebx
  int result; // eax
  int Ca; // [esp+8h] [ebp+4h]

  v1 = 0; /*0x7caff5*/
  if ( dword_B782A0 ) /*0x7caffd*/
  {
    InterlockedIncrement(&dword_B78BA4); /*0x7cb01a*/
    if ( dword_B78BA0 ) /*0x7cb02c*/
    {
      InterlockedDecrement(&dword_B78BA4); /*0x7cb02f*/
      _lock(19); /*0x7cb033*/
      v1 = 1; /*0x7cb03b*/
    }
    Ca = tolower_0(C); /*0x7cb048*/
    if ( v1 ) /*0x7cb04c*/
      _unlock(19); /*0x7cb050*/
    else
      InterlockedDecrement(&dword_B78BA4); /*0x7cb059*/
    return Ca; /*0x7cb05b*/
  }
  else
  {
    result = C; /*0x7cafff*/
    if ( C >= 65 && C <= 90 ) /*0x7cb00b*/
      return C + 32; /*0x7cb00d*/
  }
  return result; /*0x7cb010*/
}
}
// 0x7CB063
namespace gamemd {
ControlClass * * tolower_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  CHAR DestStr[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( dword_B782A0 )
  {
    v2 = C; /*0x7cb090*/
    if ( (C >= 256 || ((int)SrcSizeInBytes <= 1 ? (v3 = *((unsigned char *)off_87C590 + 2 * C) & 1) : (v3 = _isctype(C, 1)), v3))
      && (*((char *)off_87C590 + 2 * IDA_BYTE1(v2) + 1) >= 0
        ? (IDA_LOWORD(C) = (uint8_t)v2, v4 = 1)
        : (IDA_LOBYTE(C) = IDA_BYTE1(v2), *(unsigned short *)((char *)&C + 1) = (uint8_t)v2, v4 = 2),
          (v5 = __crtLCMapStringA(dword_B782A0, 0x100u, (LPCSTR)&C, v4, DestStr, 3, 0, 1)) != 0) )
    {
      if ( v5 == 1 ) /*0x7cb114*/
        return (uint8_t)DestStr[0]; /*0x7cb116*/
      else
        return *(uint16_t *)DestStr; /*0x7cb127*/
    }
    else
    {
      return v2; /*0x7cb0c0*/
    }
  }
  else
  {
    result = C; /*0x7cb073*/
    if ( C >= 65 && C <= 90 ) /*0x7cb082*/
      return C + 32; /*0x7cb088*/
  }
  return result; /*0x7cb129*/
}
}
// 0x7CB12E
namespace gamemd {
void _putws(const wchar_t * Buffer)
{
  int v1; // ebx
  wchar_t v3; // ax
  int v5; // [esp+Ch] [ebp-4h]

  v1 = 0xFFFF; /*0x7cb13d*/
  _lock_file2(1, (int)&File); /*0x7cb142*/
  v5 = _stbuf(&File); /*0x7cb153*/
  while ( 1 ) /*0x7cb156*/
  {
    v3 = *Buffer; /*0x7cb156*/
    if ( !*Buffer ) /*0x7cb156*/
      break; /*0x7cb156*/
    ++Buffer; /*0x7cb161*/
    if ( (uint16_t)_putwc_lk(v3, &File) == 0xFFFF ) /*0x7cb16c*/
      goto LABEL_7; /*0x7cb16c*/
  }
  if ( (uint16_t)_putwc_lk(0xAu, &File) != 0xFFFF ) /*0x7cb17d*/
    v1 = 0; /*0x7cb17f*/
  LABEL_7:
  _ftbuf(v5, &File); /*0x7cb181*/
  _unlock_file2(1, (int)&File); /*0x7cb18d*/
  return v1; /*0x7cb197*/
}
}
// 0x7CB25E
namespace gamemd {
void flsall(MouseClass * aP0)
{
  int v1; // ebx
  int v2; // edi
  int i; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int result; // eax

  v1 = 0; /*0x7cb263*/
  v2 = 0; /*0x7cb265*/
  _lock(2); /*0x7cb267*/
  for ( i = 0; i < (int)Count; ++i ) /*0x7cb275*/
  {
    v4 = *(unsigned int *)(dword_B78BC4 + 4 * i); /*0x7cb27c*/
    if ( v4 && (*(unsigned char *)(v4 + 12) & 0x83) != 0 ) /*0x7cb287*/
    {
      _lock_file2(i, *(unsigned int *)(dword_B78BC4 + 4 * i)); /*0x7cb28b*/
      v5 = *(unsigned int *)(dword_B78BC4 + 4 * i); /*0x7cb297*/
      v6 = *(unsigned int *)(v5 + 12); /*0x7cb29a*/
      if ( (v6 & 0x83) != 0 ) /*0x7cb2a0*/
      {
        if ( aP0 == 1 ) /*0x7cb2a7*/
        {
          if ( _fflush_lk(v5) != -1 ) /*0x7cb2b3*/
            ++v1; /*0x7cb2b5*/
        }
        else if ( !aP0 && (v6 & 2) != 0 && _fflush_lk(*(unsigned int *)(dword_B78BC4 + 4 * i)) == -1 ) /*0x7cb2ce*/
        {
          v2 = -1; /*0x7cb2d0*/
        }
      }
      _unlock_file2(i, *(unsigned int *)(dword_B78BC4 + 4 * i)); /*0x7cb2db*/
    }
  }
  _unlock(2); /*0x7cb2ed*/
  result = v1; /*0x7cb2f8*/
  if ( aP0 != 1 ) /*0x7cb2fa*/
    return v2; /*0x7cb2fc*/
  return result; /*0x7cb2fe*/
}
}
// 0x7CB33D
namespace gamemd {
void __initstdio()
{
  size_t v1; // eax
  int v2; // ecx
  void **v3; // eax
  int v4; // ecx
  unsigned int *v5; // edx
  int result; // eax

  v1 = Count; /*0x7cb33d*/
  if ( !Count ) /*0x7cb348*/
  {
    v1 = 512; /*0x7cb34a*/
  LABEL_5:
    Count = v1; /*0x7cb357*/
    goto LABEL_6; /*0x7cb357*/
  }
  if ( (int)Count < 20 ) /*0x7cb353*/
  {
    v1 = 20; /*0x7cb355*/
    goto LABEL_5; /*0x7cb355*/
  }
  LABEL_6:
  dword_B78BC4 = (int)calloc(v1, 4u); /*0x7cb35c*/
  if ( !dword_B78BC4 ) /*0x7cb36d*/
  {
    Count = 20; /*0x7cb372*/
    dword_B78BC4 = (int)calloc(0x14u, 4u); /*0x7cb37e*/
    if ( !dword_B78BC4 ) /*0x7cb386*/
      _amsg_exit(0x1Au); /*0x7cb38a*/
  }
  v2 = 0; /*0x7cb390*/
  v3 = &off_87BF50; /*0x7cb392*/
  do /*0x7cb3ab*/
  {
    *(unsigned int *)(v2 + dword_B78BC4) = v3; /*0x7cb39d*/
    v3 += 8; /*0x7cb3a0*/
    v2 += 4; /*0x7cb3a3*/
  }
  while ( (int)v3 < (int)&dword_87C1D0 ); /*0x7cb3ab*/
  v4 = 0; /*0x7cb3ad*/
  v5 = &unk_87BF60; /*0x7cb3af*/
  do /*0x7cb3e1*/
  {
    result = *(unsigned int *)(dword_B78A80[v4 >> 5] + 36 * (v4 & 0x1F)); /*0x7cb3c8*/
    if ( result == -1 || !result ) /*0x7cb3d2*/
      *v5 = -1; /*0x7cb3d4*/
    v5 += 8; /*0x7cb3d7*/
    ++v4; /*0x7cb3da*/
  }
  while ( (int)v5 < (int)dword_87BFC0 ); /*0x7cb3e1*/
  return result; /*0x7cb3e3*/
}
}
// 0x7CB3F9
namespace gamemd {
void _lock_file(MouseClass * aP0)
{
  if ( aP0 < (FILE *)&off_87BF50 || aP0 > &stru_87C1B0 ) /*0x7cb40b*/
    EnterCriticalSection((LPCRITICAL_SECTION)&aP0[1]); /*0x7cb421*/
  else
    _lock((((char *)aP0 - (char *)&off_87BF50) >> 5) + 28); /*0x7cb416*/
}
}
// 0x7CB44B
namespace gamemd {
void _unlock_file(MouseClass * aP0)
{
  if ( aP0 < (FILE *)&off_87BF50 || aP0 > &stru_87C1B0 ) /*0x7cb45d*/
    LeaveCriticalSection((LPCRITICAL_SECTION)&aP0[1]); /*0x7cb473*/
  else
    _unlock((((char *)aP0 - (char *)&off_87BF50) >> 5) + 28); /*0x7cb468*/
}
}
// 0x7CB504
namespace gamemd {
void * wcsncat(AbstractClass * aP0, const wchar_t * Source, size_t Count)
{
  wchar_t *v3; // ecx
  wchar_t *result; // eax
  wchar_t *v6; // ecx
  size_t v7; // ebx
  wchar_t v9; // dx

  v3 = aP0; /*0x7cb504*/
  result = aP0; /*0x7cb508*/
  while ( *v3++ ) /*0x7cb512*/
    ; /*0x7cb50a*/
  v6 = v3 - 1; /*0x7cb51c*/
  v7 = Count - 1; /*0x7cb51d*/
  if ( Count ) /*0x7cb521*/
  {
    while ( 1 ) /*0x7cb527*/
    {
      v9 = *Source; /*0x7cb527*/
      *v6++ = *Source++; /*0x7cb52a*/
      if ( !v9 ) /*0x7cb534*/
        break; /*0x7cb534*/
      if ( !v7-- ) /*0x7cb536*/
        goto LABEL_6; /*0x7cb53b*/
    }
  }
  else
  {
  LABEL_6:
    *v6 = 0; /*0x7cb53d*/
  }
  return result; /*0x7cb541*/
}
}
// 0x7CB550
namespace gamemd {
void * strncat(CCINIClass * aP0, const char * Source, size_t Count)
{
  size_t v3; // ecx
  char *v4; // edi
  int v6; // eax
  int v7; // eax
  char *v8; // edi
  const char *v9; // esi
  char v10; // bl
  size_t v11; // ecx
  int v12; // edx
  char v13; // dl
  int v15; // eax

  v3 = Count; /*0x7cb550*/
  if ( !Count ) /*0x7cb557*/
    return aP0; /*0x7cb557*/
  v4 = aP0; /*0x7cb55d*/
  if ( ((uint8_t)aP0 & 3) == 0 ) /*0x7cb569*/
    goto find_end_of_front_string_loop; /*0x7cb569*/
  do /*0x7cb578*/
  {
    if ( !*v4++ ) /*0x7cb56b*/
    {
  start_byte_3:
      v8 = v4 - 1; /*0x7cb5ab*/
      goto copy_start; /*0x7cb5ac*/
    }
  }
  while ( ((uint8_t)v4 & 3) != 0 ); /*0x7cb578*/
  while ( 1 ) /*0x7cb590*/
  {
    do /*0x7cb590*/
    {
  find_end_of_front_string_loop:
      v6 = (*(unsigned int *)v4 + 2130640639) ^ ~*(unsigned int *)v4; /*0x7cb57a*/
      v4 += 4; /*0x7cb588*/
    }
    while ( (v6 & 0x81010100) == 0 ); /*0x7cb590*/
    v7 = *((unsigned int *)v4 - 1); /*0x7cb592*/
    if ( !(unsigned char)v7 ) /*0x7cb597*/
      break; /*0x7cb597*/
    if ( !IDA_BYTE1(v7) ) /*0x7cb59b*/
    {
      v8 = v4 - 3; /*0x7cb5b3*/
      goto copy_start; /*0x7cb5b6*/
    }
    if ( (v7 & 0xFF0000) == 0 ) /*0x7cb5a2*/
    {
      v8 = v4 - 2; /*0x7cb5ae*/
      goto copy_start; /*0x7cb5b1*/
    }
    if ( (v7 & 0xFF000000) == 0 ) /*0x7cb5a9*/
      goto start_byte_3; /*0x7cb5a9*/
  }
  v8 = v4 - 4; /*0x7cb5b8*/
  copy_start:
  v9 = Source; /*0x7cb5bb*/
  if ( ((uint8_t)Source & 3) == 0 ) /*0x7cb5c5*/
  {
    v10 = Count; /*0x7cb5c7*/
    v11 = Count >> 2; /*0x7cb5c9*/
    if ( Count >> 2 ) /*0x7cb5c9*/
      goto main_loop_entrance_0; /*0x7cb5cc*/
  tail_loop_start_0:
    v3 = v10 & 3; /*0x7cb5ec*/
    if ( (v10 & 3) != 0 ) /*0x7cb5f1*/
    {
      while ( 1 ) /*0x7cb5f3*/
      {
        v13 = *v9++; /*0x7cb5f3*/
        *v8++ = v13; /*0x7cb5f6*/
        if ( !v13 ) /*0x7cb5fb*/
          break; /*0x7cb5fb*/
        if ( !--v3 ) /*0x7cb5fe*/
          goto empty_counter; /*0x7cb5fe*/
      }
    }
    else
    {
  empty_counter:
      *v8 = v3; /*0x7cb600*/
    }
    return aP0; /*0x7cb609*/
  }
  do /*0x7cb5e3*/
  {
    IDA_LOBYTE(v12) = *v9++; /*0x7cb5d0*/
    if ( !(unsigned char)v12 ) /*0x7cb5d5*/
    {
  LABEL_26:
      *v8 = v12; /*0x7cb60a*/
      return aP0; /*0x7cb613*/
    }
    *v8++ = v12; /*0x7cb5d7*/
    if ( !--v3 ) /*0x7cb5db*/
      goto empty_counter; /*0x7cb5db*/
  }
  while ( ((uint8_t)v9 & 3) != 0 ); /*0x7cb5e3*/
  v10 = v3; /*0x7cb5e5*/
  v11 = v3 >> 2; /*0x7cb5e7*/
  if ( !v11 ) /*0x7cb5ea*/
    goto tail_loop_start_0; /*0x7cb5ea*/
  while ( 1 ) /*0x7cb628*/
  {
  main_loop_entrance_0:
    v15 = (*(unsigned int *)v9 + 2130640639) ^ ~*(unsigned int *)v9; /*0x7cb61c*/
    v12 = *(unsigned int *)v9; /*0x7cb62a*/
    v9 += 4; /*0x7cb62c*/
    if ( (v15 & 0x81010100) == 0 ) /*0x7cb634*/
      goto main_loop_1; /*0x7cb634*/
    if ( !(unsigned char)v12 ) /*0x7cb638*/
      goto LABEL_26; /*0x7cb638*/
    if ( !IDA_BYTE1(v12) ) /*0x7cb63c*/
      break; /*0x7cb63c*/
    if ( (v12 & 0xFF0000) == 0 ) /*0x7cb644*/
    {
      *(unsigned short *)v8 = v12; /*0x7cb658*/
      v8[2] = 0; /*0x7cb661*/
      return aP0; /*0x7cb667*/
    }
    if ( (v12 & 0xFF000000) == 0 ) /*0x7cb64c*/
    {
      *(unsigned int *)v8 = v12; /*0x7cb64e*/
      return aP0; /*0x7cb657*/
    }
  main_loop_1:
    *(unsigned int *)v8 = v12; /*0x7cb614*/
    v8 += 4; /*0x7cb616*/
    if ( !--v11 ) /*0x7cb61a*/
      goto tail_loop_start_0; /*0x7cb61a*/
  }
  *(unsigned short *)v8 = (uint8_t)v12; /*0x7cb668*/
  return aP0; /*0x7cb608*/
}
}
// 0x7CB673
namespace gamemd {
AbstractClass * * _splitpath(const char * FullPath, char * Drive, char * Dir, ObjectClass * aP3, char * Ext)
{
  const char *v5; // ebx
  char *v6; // eax
  size_t v7; // esi
  uint8_t v8; // cl
  size_t v9; // edi
  size_t v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // eax
  uint8_t *Source; // [esp+Ch] [ebp-4h]
  const char *FullPatha; // [esp+18h] [ebp+8h]
  char *Drivea; // [esp+1Ch] [ebp+Ch]

  Source = 0; /*0x7cb677*/
  v5 = FullPath; /*0x7cb67c*/
  if ( strlen(FullPath) && FullPath[1] == 58 ) /*0x7cb691*/
  {
    if ( Drive ) /*0x7cb698*/
    {
      _mbsnbcpy((uint8_t *)Drive, (const uint8_t *)FullPath, 2u); /*0x7cb69e*/
      Drive[2] = 0; /*0x7cb6a6*/
    }
    v5 = FullPath + 2; /*0x7cb6ab*/
  }
  else if ( Drive ) /*0x7cb6b3*/
  {
    *Drive = 0; /*0x7cb6b5*/
  }
  Drivea = 0; /*0x7cb6b8*/
  v6 = (char *)v5; /*0x7cb6bf*/
  v7 = 255; /*0x7cb6c1*/
  FullPatha = v5; /*0x7cb6c6*/
  if ( !*v5 ) /*0x7cb6bc*/
    goto LABEL_23; /*0x7cb6bc*/
  do /*0x7cb6f7*/
  {
    v8 = *v6; /*0x7cb6cb*/
    if ( (byte_B78961[(uint8_t)*v6] & 4) != 0 ) /*0x7cb6d7*/
    {
      ++v6; /*0x7cb6d9*/
    }
    else if ( v8 == 47 || v8 == 92 ) /*0x7cb6e4*/
    {
      Drivea = v6 + 1; /*0x7cb6f3*/
    }
    else if ( v8 == 46 ) /*0x7cb6e9*/
    {
      Source = (uint8_t *)v6; /*0x7cb6eb*/
    }
    ++v6; /*0x7cb6f6*/
  }
  while ( *v6 ); /*0x7cb6f7*/
  FullPatha = v6; /*0x7cb6ff*/
  if ( Drivea ) /*0x7cb704*/
  {
    if ( Dir ) /*0x7cb70a*/
    {
      v9 = Drivea - v5; /*0x7cb70c*/
      if ( (unsigned int)(Drivea - v5) >= 0xFF ) /*0x7cb710*/
        v9 = 255; /*0x7cb712*/
      _mbsnbcpy((uint8_t *)Dir, (const uint8_t *)v5, v9); /*0x7cb719*/
      Dir[v9] = 0; /*0x7cb724*/
      v6 = (char *)FullPatha; /*0x7cb728*/
    }
    v5 = Drivea; /*0x7cb72b*/
  }
  else
  {
  LABEL_23:
    if ( Dir ) /*0x7cb735*/
      *Dir = 0; /*0x7cb737*/
  }
  if ( Source && Source >= (uint8_t *)v5 ) /*0x7cb743*/
  {
    if ( aP3 ) /*0x7cb749*/
    {
      v10 = Source - (uint8_t *)v5; /*0x7cb74b*/
      if ( (unsigned int)(Source - (uint8_t *)v5) >= 0xFF ) /*0x7cb74f*/
        v10 = 255; /*0x7cb751*/
      _mbsnbcpy((uint8_t *)aP3, (const uint8_t *)v5, v10); /*0x7cb758*/
      aP3[v10] = 0; /*0x7cb763*/
      v6 = (char *)FullPatha; /*0x7cb767*/
    }
    if ( Ext ) /*0x7cb76f*/
    {
      v11 = v6 - (char *)Source; /*0x7cb771*/
      if ( v11 < 0xFF ) /*0x7cb776*/
        v7 = v11; /*0x7cb778*/
      _mbsnbcpy((uint8_t *)Ext, Source, v7); /*0x7cb77f*/
      Ext[v7] = 0; /*0x7cb787*/
    }
  }
  else
  {
    if ( aP3 ) /*0x7cb792*/
    {
      v12 = v6 - v5; /*0x7cb794*/
      if ( v12 < 0xFF ) /*0x7cb798*/
        v7 = v12; /*0x7cb79a*/
      _mbsnbcpy((uint8_t *)aP3, (const uint8_t *)v5, v7); /*0x7cb79f*/
      aP3[v7] = 0; /*0x7cb7a7*/
    }
    if ( Ext ) /*0x7cb7b0*/
      *Ext = 0; /*0x7cb7b2*/
  }
}
}
// 0x7CB847
namespace gamemd {
int isleadbyte(int C)
{
  return *((unsigned short *)off_87C590 + (uint8_t)C) & 0x8000; /*0x7cb85b*/
}
}
// 0x7CB911
namespace gamemd {
void * wcstok(wchar_t * String, CampaignScore * aP1, wchar_t ** Context)
{
  unsigned int *v3; // eax
  wchar_t *v4; // ecx
  wchar_t i; // dx
  const wchar_t *v6; // esi
  wchar_t v7; // di
  wchar_t v8; // dx
  const wchar_t *v9; // esi
  wchar_t v10; // di
  wchar_t *Stringa; // [esp+Ch] [ebp+8h]

  v3 = _getptd(); /*0x7cb915*/
  v4 = String; /*0x7cb91a*/
  if ( !String ) /*0x7cb922*/
    v4 = (wchar_t *)v3[7]; /*0x7cb924*/
  for ( i = *v4; *v4; i = *v4 ) /*0x7cb927*/
  {
    v6 = aP1; /*0x7cb937*/
    if ( *aP1 ) /*0x7cb934*/
    {
      v7 = *aP1; /*0x7cb93f*/
      do /*0x7cb948*/
      {
        if ( v7 == i ) /*0x7cb944*/
          break; /*0x7cb944*/
        v7 = *++v6; /*0x7cb948*/
      }
      while ( *v6 ); /*0x7cb948*/
    }
    if ( !*v6 ) /*0x7cb950*/
      break; /*0x7cb954*/
    ++v4; /*0x7cb957*/
  }
  v8 = *v4; /*0x7cb960*/
  Stringa = v4; /*0x7cb963*/
  if ( *v4 ) /*0x7cb960*/
  {
    while ( 1 ) /*0x7cb971*/
    {
      v9 = aP1; /*0x7cb971*/
      if ( *aP1 ) /*0x7cb96e*/
      {
        v10 = *aP1; /*0x7cb979*/
        do /*0x7cb982*/
        {
          if ( v10 == v8 ) /*0x7cb97e*/
            break; /*0x7cb97e*/
          v10 = *++v9; /*0x7cb982*/
        }
        while ( *v9 ); /*0x7cb982*/
      }
      if ( *v9 ) /*0x7cb98a*/
        break; /*0x7cb98a*/
      v8 = *++v4; /*0x7cb992*/
      if ( !*v4 ) /*0x7cb992*/
        goto LABEL_19; /*0x7cb998*/
    }
    *v4++ = 0; /*0x7cb99c*/
  }
  LABEL_19:
  v3[7] = v4; /*0x7cb9a2*/
  return v4 != Stringa ? Stringa : 0;
}
}
// 0x7CB9CF
namespace gamemd {
void wcstoxl(wint_t * a1, wint_t ** a2, int a3, int a4)
{
  wint_t v4; // si
  wint_t *v5; // edi
  unsigned int v6; // ebx
  wint_t *v7; // edi
  unsigned int v8; // ecx
  wint_t *v9; // edi
  int v11; // [esp-4h] [ebp-14h]
  unsigned int v12; // [esp+Ch] [ebp-4h]
  unsigned int v13; // [esp+20h] [ebp+10h]

  v12 = 0; /*0x7cb9d3*/
  v4 = *a1; /*0x7cb9dd*/
  v5 = a1 + 1; /*0x7cb9e0*/
  while ( iswctype(v4, 8u) ) /*0x7cb9ef*/
    v4 = *v5++; /*0x7cb9f1*/
  if ( v4 == 45 ) /*0x7cb9fc*/
  {
    a4 |= 2u; /*0x7cb9fe*/
  LABEL_7:
    v4 = *v5++; /*0x7cba0a*/
    goto LABEL_8; /*0x7cba0e*/
  }
  if ( v4 == 43 ) /*0x7cba08*/
    goto LABEL_7; /*0x7cba08*/
  LABEL_8:
  v6 = a3; /*0x7cba0f*/
  if ( a3 < 0 || a3 == 1 || a3 > 36 ) /*0x7cba26*/
  {
    if ( a2 ) /*0x7cbb68*/
      *a2 = a1; /*0x7cbb6d*/
    return 0; /*0x7cbb6f*/
  }
  if ( !a3 ) /*0x7cba2e*/
  {
    if ( v4 != 48 ) /*0x7cba34*/
    {
      v11 = 10; /*0x7cba36*/
  LABEL_17:
      v6 = v11; /*0x7cba4b*/
      goto LABEL_24; /*0x7cba4c*/
    }
    if ( *v5 != 120 && *v5 != 88 ) /*0x7cba47*/
    {
      v11 = 8; /*0x7cba49*/
      goto LABEL_17; /*0x7cba49*/
    }
    v6 = 16; /*0x7cba50*/
  }
  if ( v6 == 16 && v4 == 48 && (*v5 == 120 || *v5 == 88) ) /*0x7cba69*/
  {
    v7 = v5 + 1; /*0x7cba6c*/
    v4 = *v7; /*0x7cba6d*/
    v5 = v7 + 1; /*0x7cba71*/
  }
  LABEL_24:
  v13 = 0xFFFFFFFF / v6; /*0x7cba72*/
  while ( 1 ) /*0x7cba88*/
  {
    if ( iswctype(v4, 4u) ) /*0x7cba7f*/
    {
      v8 = v4 - 48; /*0x7cba8d*/
    }
    else
    {
      if ( !iswctype(v4, 0x103u) ) /*0x7cbaa1*/
        break; /*0x7cbaa1*/
      v8 = towupper(v4) - 55; /*0x7cbaad*/
    }
    if ( v8 >= v6 ) /*0x7cbab2*/
      break; /*0x7cbab2*/
    a4 |= 8u; /*0x7cbab7*/
    if ( v12 < v13 || v12 == v13 && v8 <= 0xFFFFFFFF % v6 ) /*0x7cbacb*/
      v12 = v8 + v6 * v12; /*0x7cbad8*/
    else
      a4 |= 4u; /*0x7cbacd*/
    v4 = *v5++; /*0x7cbadb*/
  }
  v9 = v5 - 1; /*0x7cbae2*/
  if ( (a4 & 8) != 0 ) /*0x7cbaea*/
  {
    if ( (a4 & 4) != 0 || (a4 & 1) == 0 && ((a4 & 2) != 0 && v12 > 0x80000000 || (a4 & 2) == 0 && v12 > 0x7FFFFFFF) ) /*0x7cbb21*/
    {
      *_errno() = 34; /*0x7cbb2b*/
      if ( (a4 & 1) != 0 ) /*0x7cbb31*/
        v12 = -1; /*0x7cbb33*/
      else
        v12 = ((a4 & 2) != 0) + 0x7FFFFFFF; /*0x7cbb45*/
    }
  }
  else
  {
    if ( a2 ) /*0x7cbaf0*/
      v9 = a1; /*0x7cbaf2*/
    v12 = 0; /*0x7cbaf5*/
  }
  if ( a2 ) /*0x7cbb4d*/
    *a2 = v9; /*0x7cbb4f*/
  if ( (a4 & 2) != 0 ) /*0x7cbb54*/
    return -v12; /*0x7cbb5b*/
  return v12; /*0x7cbb71*/
}
}
// 0x7CBE1C
namespace gamemd {
void doexit(UINT uExitCode, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  void (**v4)(void); // esi

  _lockexit(); /*0x7cbe1d*/
  if ( dword_B78204 == 1 ) /*0x7cbe2b*/
  {
    CurrentProcess = GetCurrentProcess(); /*0x7cbe31*/
    TerminateProcess(CurrentProcess, uExitCode); /*0x7cbe38*/
  }
  dword_B78200 = 1; /*0x7cbe48*/
  byte_B781FC = a3; /*0x7cbe4e*/
  if ( !a2 ) /*0x7cbe54*/
  {
    if ( dword_B78BC0 ) /*0x7cbe5d*/
    {
      v4 = (void (**)(void))(dword_B78BBC - 4); /*0x7cbe66*/
      if ( dword_B78BBC - 4 >= (unsigned int)dword_B78BC0 ) /*0x7cbe6b*/
      {
        do /*0x7cbe7e*/
        {
          if ( *v4 ) /*0x7cbe6d*/
            (*v4)(); /*0x7cbe73*/
          --v4; /*0x7cbe75*/
        }
        while ( v4 >= dword_B78BC0 ); /*0x7cbe7e*/
      }
    }
    _initterm(&dword_815DC0, &dword_815DD0); /*0x7cbe8b*/
  }
  _initterm(&dword_815DD4, &dword_815DDC); /*0x7cbe9c*/
  if ( !a3 ) /*0x7cbea6*/
  {
    dword_B78204 = 1; /*0x7cbeb3*/
    ExitProcess(uExitCode); /*0x7cbeb9*/
  }
  return _unlockexit(); /*0x7cbead*/
}
}
// 0x7CBED3
namespace gamemd {
void _initterm(_PVFV * First, _PVFV * Last)
{
  while ( First < Last ) /*0x7cbedc*/
  {
    if ( *First ) /*0x7cbede*/
      (*First)(); /*0x7cbee4*/
    ++First; /*0x7cbee6*/
  }
}
}
// 0x7CBF00
namespace gamemd {
unsigned int _clearfp()
{
  __asm { fnclex } /*0x7cbf07*/
  return _abstract_sw(); /*0x7cbf12*/
}
}
// 0x7CBF5F
namespace gamemd {
void _fpreset()
{
  unsigned int *v0; // esi
  unsigned int *v1; // eax

  v0 = *__pxcptinfoptrs(); /*0x7cbf65*/
  __asm { fninit } /*0x7cbf67*/
  _setdefaultprecision(); /*0x7cbf69*/
  if ( v0 ) /*0x7cbf70*/
  {
    v1 = (unsigned int *)v0[1]; /*0x7cbf72*/
    if ( (*v1 & 0x10008) != 0 ) /*0x7cbf7b*/
    {
      v1[8] = 0; /*0x7cbf7d*/
      v1[9] = 0xFFFF; /*0x7cbf81*/
    }
  }
}
}
// 0x7CC309
namespace gamemd {
void _mbstowcs_lk(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int cchWideChar)
{
  LPWSTR v3; // edx
  unsigned int result; // eax
  int v6; // eax
  LPCCH lpMultiByteStra; // [esp+18h] [ebp+Ch]

  v3 = lpWideCharStr; /*0x7cc30c*/
  result = 0; /*0x7cc313*/
  if ( !lpWideCharStr ) /*0x7cc318*/
  {
    if ( !dword_B782A0 ) /*0x7cc3dd*/
      return strlen(lpMultiByteStr); /*0x7cc3e8*/
    v6 = MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, -1, 0, 0); /*0x7cc3f9*/
    if ( !v6 ) /*0x7cc401*/
    {
  LABEL_9:
      *_errno() = 42; /*0x7cc385*/
      return -1; /*0x7cc393*/
    }
    return v6 - 1; /*0x7cc403*/
  }
  if ( !cchWideChar ) /*0x7cc323*/
    return result; /*0x7cc323*/
  if ( !dword_B782A0 ) /*0x7cc32f*/
  {
    do /*0x7cc353*/
    {
      *v3 = (uint8_t)lpMultiByteStr[result]; /*0x7cc342*/
      if ( !lpMultiByteStr[result] ) /*0x7cc345*/
        break; /*0x7cc348*/
      ++result; /*0x7cc34e*/
      ++v3; /*0x7cc350*/
    }
    while ( result < cchWideChar ); /*0x7cc353*/
    return result; /*0x7cc353*/
  }
  v6 = MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, -1, lpWideCharStr, cchWideChar); /*0x7cc370*/
  if ( v6 ) /*0x7cc374*/
    return v6 - 1; /*0x7cc374*/
  if ( GetLastError() != 122 ) /*0x7cc383*/
    goto LABEL_9; /*0x7cc383*/
  lpMultiByteStr = lpMultiByteStr; /*0x7cc398*/
  lpMultiByteStra = (LPCCH)(cchWideChar - 1); /*0x7cc39a*/
  do /*0x7cc3bd*/
  {
    if ( !*lpMultiByteStr ) /*0x7cc39d*/
      break; /*0x7cc3a1*/
    if ( *((char *)off_87C590 + 2 * lpMultiByteStr->u32_1 < 0 ) /*0x7cc3b1*/
      ++lpMultiByteStr; /*0x7cc3b3*/
    lpMultiByteStra = lpMultiByteStra; /*0x7cc3b4*/
    ++lpMultiByteStr; /*0x7cc3b7*/
    --lpMultiByteStra; /*0x7cc3b8*/
  }
  while ( lpMultiByteStra ); /*0x7cc3bd*/
  result = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, lpMultiByteStr - lpMultiByteStr, lpWideCharStr, cchWideChar); /*0x7cc3cf*/
  if ( !result ) /*0x7cc3d3*/
    goto LABEL_9; /*0x7cc3d3*/
  return result; /*0x7cc404*/
}
}
// 0x7CC409
namespace gamemd {
void * wcspbrk(BlowStraw * aP0, CampaignScore * aP1)
{
  wchar_t *result; // eax
  wchar_t v3; // dx
  const wchar_t *v4; // esi
  wchar_t v5; // cx

  result = (wchar_t *)aP0; /*0x7cc409*/
  v3 = *aP0; /*0x7cc410*/
  if ( !*aP0 ) /*0x7cc410*/
    return 0; /*0x7cc441*/
  while ( 1 ) /*0x7cc422*/
  {
    v4 = aP1; /*0x7cc422*/
    if ( *aP1 ) /*0x7cc41c*/
      break; /*0x7cc41c*/
  LABEL_6:
    v3 = *++result; /*0x7cc439*/
    if ( !*result ) /*0x7cc439*/
      return 0; /*0x7cc43f*/
  }
  v5 = *aP1; /*0x7cc426*/
  while ( v5 != v3 ) /*0x7cc42b*/
  {
    v5 = *++v4; /*0x7cc42f*/
    if ( !*v4 ) /*0x7cc42f*/
      goto LABEL_6; /*0x7cc435*/
  }
  return result; /*0x7cc443*/
}
}
// 0x7CC4A4
namespace gamemd {
void _wcstombs_lk(CCINIClass * aP0, ObjectClass * aP1, unsigned int cchWideChar)
{
  int v3; // edi
  int result; // eax
  CHAR *v5; // ecx
  int16_t v6; // ax
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  int i; // edx
  CHAR v11; // cl
  BOOL UsedDefaultChar; // [esp+10h] [ebp-8h] BYREF
  CHAR MultiByteStr[2]; // [esp+16h] [ebp-2h] BYREF
  int cchWideChara; // [esp+28h] [ebp+10h]

  v3 = 0; /*0x7cc4b2*/
  UsedDefaultChar = 0; /*0x7cc4b6*/
  if ( !aP0 ) /*0x7cc4b9*/
  {
    if ( !dword_B782A0 ) /*0x7cc60a*/
      return wcslen(aP1); /*0x7cc615*/
    result = WideCharToMultiByte(CodePage, 0x220u, aP1, -1, 0, 0, 0, &UsedDefaultChar); /*0x7cc62e*/
    if ( !result || UsedDefaultChar ) /*0x7cc63b*/
      goto LABEL_34; /*0x7cc63b*/
    return --result; /*0x7cc63e*/
  }
  if ( !cchWideChar ) /*0x7cc4c4*/
    return 0; /*0x7cc4c8*/
  if ( !dword_B782A0 ) /*0x7cc4d3*/
  {
    v5 = (CHAR *)aP1; /*0x7cc4d9*/
    while ( *(unsigned short *)v5 <= 0xFFu ) /*0x7cc4e1*/
    {
      aP0[v3] = *v5; /*0x7cc4e9*/
      v6 = *(unsigned short *)v5; /*0x7cc4ec*/
      v5 += 2; /*0x7cc4f0*/
      if ( v6 ) /*0x7cc4f4*/
      {
        if ( ++v3 < cchWideChar ) /*0x7cc4f9*/
          continue; /*0x7cc4f9*/
      }
      return v3; /*0x7cc4fd*/
    }
    goto LABEL_34; /*0x7cc4e1*/
  }
  if ( SrcSizeInBytes == 1 ) /*0x7cc509*/
  {
    cchWideChara = wcsncnt(aP1, cchWideChar); /*0x7cc519*/
    result = WideCharToMultiByte( /*0x7cc535*/
               CodePage,
               0x220u,
               aP1,
               cchWideChara,
               aP0,
               cchWideChara,
               0,
               &UsedDefaultChar);
    if ( result && !UsedDefaultChar ) /*0x7cc546*/
    {
      if ( aP0[result - 1] ) /*0x7cc54c*/
        return result; /*0x7cc550*/
      return --result; /*0x7cc550*/
    }
  LABEL_34:
    *_errno() = 42; /*0x7cc640*/
    return -1; /*0x7cc64b*/
  }
  v7 = WideCharToMultiByte(CodePage, 0x220u, aP1, -1, aP0, cchWideChar, 0, &UsedDefaultChar); /*0x7cc578*/
  v8 = v7; /*0x7cc57a*/
  if ( v7 ) /*0x7cc57e*/
  {
    if ( !UsedDefaultChar ) /*0x7cc583*/
      return v7 - 1; /*0x7cc58c*/
    goto LABEL_34; /*0x7cc583*/
  }
  if ( UsedDefaultChar || GetLastError() != 122 ) /*0x7cc5a3*/
    goto LABEL_34; /*0x7cc5a3*/
  while ( v8 < cchWideChar ) /*0x7cc5ac*/
  {
    v9 = WideCharToMultiByte(CodePage, 0, aP1, 1, MultiByteStr, SrcSizeInBytes, 0, &UsedDefaultChar); /*0x7cc5c9*/
    if ( !v9 || UsedDefaultChar ) /*0x7cc5d5*/
      goto LABEL_34; /*0x7cc5d5*/
    if ( v9 + v8 > cchWideChar ) /*0x7cc5dd*/
      break; /*0x7cc5dd*/
    for ( i = 0; i < v9; ++v8 ) /*0x7cc5e3*/
    {
      v11 = MultiByteStr[i]; /*0x7cc5e5*/
      aP0[v8] = v11; /*0x7cc5ee*/
      if ( !v11 ) /*0x7cc5f1*/
        return v8; /*0x7cc5f1*/
      ++i; /*0x7cc5f3*/
    }
    ++aP1; /*0x7cc5fa*/
  }
  return v8; /*0x7cc64e*/
}
}
// 0x7CC6C3
namespace gamemd {
char * * _Getdays()
{
  const char **v0; // esi
  int v1; // ebx
  int v2; // edi
  int v3; // eax
  bool v4; // zf
  char *v5; // esi
  const char **v6; // edi
  int v7; // ebx
  char *v8; // esi
  char *v9; // eax
  char *v10; // esi
  char *v11; // eax
  const char **v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]
  char *v15; // [esp+10h] [ebp-4h]

  v0 = (const char **)off_87C1E0; /*0x7cc6ca*/
  v13 = (const char **)off_87C1E0; /*0x7cc6d1*/
  v1 = 0; /*0x7cc6d4*/
  v14 = 7; /*0x7cc6d6*/
  do /*0x7cc6fc*/
  {
    v2 = strlen(v0[7]); /*0x7cc6e7*/
    v3 = v1 + strlen(*v0++); /*0x7cc6ee*/
    v4 = v14-- == 1; /*0x7cc6f4*/
    v1 = v3 + v2 + 2; /*0x7cc6f8*/
  }
  while ( !v4 ); /*0x7cc6fc*/
  v5 = (char *)malloc(v3 + v2 + 3); /*0x7cc705*/
  v15 = v5; /*0x7cc70a*/
  if ( v5 ) /*0x7cc70d*/
  {
    v6 = v13; /*0x7cc70f*/
    v7 = 7; /*0x7cc714*/
    do /*0x7cc745*/
    {
      *v5 = 58; /*0x7cc715*/
      v8 = v5 + 1; /*0x7cc71a*/
      v9 = strcpy(v8, *v6); /*0x7cc71c*/
      v10 = &v8[strlen(v9)]; /*0x7cc727*/
      *v10++ = 58; /*0x7cc729*/
      v11 = strcpy(v10, v6[7]); /*0x7cc731*/
      v5 = &v10[strlen(v11)]; /*0x7cc73f*/
      ++v6; /*0x7cc741*/
      --v7; /*0x7cc744*/
    }
    while ( v7 ); /*0x7cc745*/
    *v5 = 0; /*0x7cc747*/
  }
  return v15; /*0x7cc74d*/
}
}
// 0x7CC752
namespace gamemd {
char * * _Getmonths()
{
  char *v0; // edi
  const char **v1; // esi
  int v2; // ebx
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  char *v6; // esi
  const char **v7; // edi
  int v8; // ebx
  char *v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v14; // [esp+Ch] [ebp-8h]
  char *v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]

  v16 = 0; /*0x7cc757*/
  v0 = (char *)off_87C1E0; /*0x7cc75e*/
  v14 = 12; /*0x7cc764*/
  v1 = (const char **)((char *)off_87C1E0 + 56); /*0x7cc76b*/
  do /*0x7cc791*/
  {
    v2 = strlen(v1[12]); /*0x7cc778*/
    v3 = strlen(*v1++); /*0x7cc77a*/
    v4 = v14-- == 1; /*0x7cc786*/
    v5 = v16 + v3 + v2 + 2; /*0x7cc78a*/
    v16 = v5; /*0x7cc78e*/
  }
  while ( !v4 ); /*0x7cc791*/
  v6 = (char *)malloc(v5 + 1); /*0x7cc79a*/
  v15 = v6; /*0x7cc79f*/
  if ( v6 ) /*0x7cc7a2*/
  {
    v7 = (const char **)(v0 + 104); /*0x7cc7a6*/
    v8 = 12; /*0x7cc7a9*/
    do /*0x7cc7da*/
    {
      *v6 = 58; /*0x7cc7aa*/
      v9 = v6 + 1; /*0x7cc7b0*/
      v10 = strcpy(v9, *(v7 - 12)); /*0x7cc7b2*/
      v11 = &v9[strlen(v10)]; /*0x7cc7bd*/
      *v11++ = 58; /*0x7cc7bf*/
      v12 = strcpy(v11, *v7); /*0x7cc7c6*/
      v6 = &v11[strlen(v12)]; /*0x7cc7d4*/
      ++v7; /*0x7cc7d6*/
      --v8; /*0x7cc7d9*/
    }
    while ( v8 ); /*0x7cc7da*/
    *v6 = 0; /*0x7cc7dc*/
  }
  return v15; /*0x7cc7e2*/
}
}
// 0x7CC7E7
namespace gamemd {
void * * _Gettnames()
{
  const char **v0; // esi
  int v1; // edi
  int v2; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // eax
  char *v10; // eax
  unsigned int *v11; // ebx
  char *v12; // edi
  char *v13; // eax
  char *v14; // edi
  char *v15; // eax
  int v16; // eax
  const char **v17; // eax
  char *v18; // eax
  char *v19; // edi
  char *v20; // eax
  int v21; // eax
  char *v22; // eax
  char *v23; // edi
  char *v24; // eax
  char *v25; // edi
  char *v26; // eax
  char *v27; // edi
  char *v28; // eax
  int v30; // [esp+Ch] [ebp-10h]
  int v31; // [esp+Ch] [ebp-10h]
  int v32; // [esp+Ch] [ebp-10h]
  int v33; // [esp+Ch] [ebp-10h]
  int v34; // [esp+10h] [ebp-Ch]
  int v35; // [esp+10h] [ebp-Ch]
  char **v36; // [esp+10h] [ebp-Ch]
  char **v37; // [esp+10h] [ebp-Ch]
  const char **v38; // [esp+14h] [ebp-8h]
  const char **v39; // [esp+14h] [ebp-8h]
  int v40; // [esp+14h] [ebp-8h]
  const char **v41; // [esp+18h] [ebp-4h]
  const char **i; // [esp+18h] [ebp-4h]

  v0 = (const char **)off_87C1E0; /*0x7cc7ef*/
  v1 = 0; /*0x7cc7f6*/
  v38 = (const char **)off_87C1E0; /*0x7cc7f8*/
  v34 = 7; /*0x7cc7fb*/
  do /*0x7cc82b*/
  {
    v30 = strlen(v38[7]); /*0x7cc811*/
    v2 = strlen(*v38++); /*0x7cc814*/
    v3 = v34-- == 1; /*0x7cc824*/
    v1 += v2 + v30 + 2; /*0x7cc827*/
  }
  while ( !v3 ); /*0x7cc82b*/
  v35 = 12; /*0x7cc830*/
  v39 = (const char **)((char *)off_87C1E0 + 56); /*0x7cc837*/
  do /*0x7cc863*/
  {
    v31 = strlen(v39[12]); /*0x7cc849*/
    v4 = strlen(*v39++); /*0x7cc84c*/
    v3 = v35-- == 1; /*0x7cc85c*/
    v1 += v4 + v31 + 2; /*0x7cc85f*/
  }
  while ( !v3 ); /*0x7cc863*/
  v5 = strlen(*((const char **)off_87C1E0 + 38)); /*0x7cc876*/
  v6 = v1 + strlen(*((const char **)off_87C1E0 + 39)) + v5 + 2; /*0x7cc885*/
  v7 = v6 + strlen(*((const char **)off_87C1E0 + 40)) + 1; /*0x7cc894*/
  v8 = v7 + strlen(*((const char **)off_87C1E0 + 41)) + 1; /*0x7cc8a3*/
  v9 = strlen(*((const char **)off_87C1E0 + 42)); /*0x7cc8a7*/
  v10 = (char *)malloc(v8 + v9 + 173); /*0x7cc8b6*/
  v11 = v10; /*0x7cc8bb*/
  if ( v10 ) /*0x7cc8c2*/
  {
    v12 = v10 + 172; /*0x7cc8cd*/
    memcpy_0(v10, off_87C1E0, 0xACu); /*0x7cc8da*/
    v40 = (char *)v11 - (char *)v0; /*0x7cc8e8*/
    v36 = (char **)v11; /*0x7cc8eb*/
    v41 = v0 + 7; /*0x7cc8ee*/
    v32 = 7; /*0x7cc8f1*/
    do /*0x7cc93c*/
    {
      *v36 = v12; /*0x7cc8fb*/
      v13 = strcpy(v12, *(v41 - 7)); /*0x7cc904*/
      v14 = &v12[strlen(v13) + 1]; /*0x7cc912*/
      *(const char **)((char *)v41 + v40) = v14; /*0x7cc919*/
      v15 = strcpy(v14, *v41); /*0x7cc91f*/
      v16 = strlen(v15); /*0x7cc925*/
      ++v36; /*0x7cc92a*/
      ++v41; /*0x7cc92e*/
      v3 = v32-- == 1; /*0x7cc935*/
      v12 = &v14[v16 + 1]; /*0x7cc938*/
    }
    while ( !v3 ); /*0x7cc93c*/
    v33 = 12; /*0x7cc941*/
    v37 = (char **)(v11 + 26); /*0x7cc948*/
    v17 = v0 + 14; /*0x7cc94b*/
    for ( i = v0 + 14; ; v17 = i ) /*0x7cc94e*/
    {
      *(const char **)((char *)v17 + v40) = v12; /*0x7cc959*/
      v18 = strcpy(v12, *v17); /*0x7cc95f*/
      v19 = &v12[strlen(v18) + 1]; /*0x7cc96a*/
      *v37 = v19; /*0x7cc971*/
      v20 = strcpy(v19, i[12]); /*0x7cc97a*/
      v21 = strlen(v20); /*0x7cc980*/
      ++i; /*0x7cc985*/
      ++v37; /*0x7cc989*/
      v3 = v33-- == 1; /*0x7cc990*/
      v12 = &v19[v21 + 1]; /*0x7cc993*/
      if ( v3 ) /*0x7cc997*/
        break; /*0x7cc997*/
    }
    v11[38] = v12; /*0x7cc999*/
    v22 = strcpy(v12, v0[38]); /*0x7cc9a6*/
    v23 = &v12[strlen(v22) + 1]; /*0x7cc9b1*/
    v11[39] = v23; /*0x7cc9b5*/
    v24 = strcpy(v23, v0[39]); /*0x7cc9c2*/
    v25 = &v23[strlen(v24) + 1]; /*0x7cc9cd*/
    v11[40] = v25; /*0x7cc9d1*/
    v26 = strcpy(v25, v0[40]); /*0x7cc9de*/
    v27 = &v25[strlen(v26) + 1]; /*0x7cc9e9*/
    v11[41] = v27; /*0x7cc9ed*/
    v28 = strcpy(v27, v0[41]); /*0x7cc9fa*/
    v11[42] = &v27[strlen(v28) + 1]; /*0x7cca0c*/
  }
  return v11; /*0x7cca12*/
}
}
// 0x7CCB2E
namespace gamemd {
exception * * _expandtime(char a1, unsigned int * a2, unsigned int * a3, unsigned int * a4, unsigned char ** a5)
{
  int v5; // edx
  unsigned int *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  unsigned int v12; // [esp-Ch] [ebp-18h]
  unsigned int *v13; // [esp-8h] [ebp-14h]
  unsigned int *v14; // [esp-8h] [ebp-14h]
  unsigned int *v15; // [esp-4h] [ebp-10h]
  unsigned int *v16; // [esp-4h] [ebp-10h]

  if ( (char)a1 <= 90 ) /*0x7ccb3b*/
  {
    if ( (char)a1 != 90 ) /*0x7ccb41*/
    {
      if ( (char)a1 > 77 ) /*0x7ccb4a*/
      {
        if ( (char)a1 == 83 ) /*0x7ccc1b*/
        {
          dword_B78BB0 = dword_B78BAC; /*0x7cccfc*/
          _store_num(*a2, 2u, a3, a4); /*0x7ccd0b*/
          return; /*0x7ccd0b*/
        }
        if ( (char)a1 == 85 ) /*0x7ccc23*/
        {
          dword_B78BB0 = dword_B78BAC; /*0x7cccb9*/
          v6 = a2; /*0x7cccbe*/
          v8 = a2[6]; /*0x7cccc1*/
        }
        else
        {
          if ( (char)a1 != 87 ) /*0x7ccc2b*/
          {
            if ( (char)a1 == 88 ) /*0x7ccc2e*/
            {
              dword_B78BAC = 0; /*0x7ccc7a*/
              _store_winword(*(uint8_t **)(a5 + 168), (int)a2, a3, a4, a5); /*0x7ccc91*/
            }
            else if ( (char)a1 == 89 ) /*0x7ccc31*/
            {
              dword_B78BB0 = dword_B78BAC; /*0x7ccc3f*/
              _store_num(a2[5] % 100 + 100 * (a2[5] / 100 + 19), 4u, a3, a4); /*0x7ccc6a*/
            }
            return; /*0x7ccc72*/
          }
          dword_B78BB0 = dword_B78BAC; /*0x7ccc9b*/
          v6 = a2; /*0x7ccca0*/
          v7 = a2[6]; /*0x7ccca3*/
          if ( v7 ) /*0x7ccca8*/
            v8 = v7 - 1; /*0x7cccaf*/
          else
            v8 = 6; /*0x7cccac*/
        }
        v9 = v6[7]; /*0x7cccc4*/
        if ( v9 >= v8 ) /*0x7cccc9*/
        {
          v10 = v9 / 7; /*0x7cccd9*/
          if ( v9 % 7 >= v8 ) /*0x7ccce3*/
            ++v10; /*0x7ccce5*/
        }
        else
        {
          v10 = 0; /*0x7ccccb*/
        }
        _store_num(v10, 2u, a3, a4); /*0x7cccef*/
      }
      else
      {
        switch ( (char)a1 ) /*0x7ccb50*/
        {
          case 'M': /*0x7ccb50*/
            dword_B78BB0 = dword_B78BAC; /*0x7ccc06*/
            _store_num(a2[1], 2u, a3, a4); /*0x7ccc16*/
            break;
          case '%': /*0x7ccb50*/
            *(unsigned char *)(*a3)++ = 37; /*0x7ccbef*/
            --*a4; /*0x7ccbf7*/
            break;
          case 'A': /*0x7ccb50*/
            _store_str(*(ObjectClass **)(a5 + 4 * a2[6] + 28), a3, a4); /*0x7ccbe5*/
            break;
          case 'B': /*0x7ccb50*/
            _store_str(*(ObjectClass **)(a5 + 4 * a2[4] + 104), a3, a4); /*0x7ccbcd*/
            break;
          case 'H': /*0x7ccb50*/
            dword_B78BB0 = dword_B78BAC; /*0x7ccba5*/
            _store_num(a2[2], 2u, a3, a4); /*0x7ccbb5*/
            break;
          case 'I': /*0x7ccb50*/
            dword_B78BB0 = dword_B78BAC; /*0x7ccb7a*/
            v5 = a2[2] % 12; /*0x7ccb87*/
            if ( !v5 ) /*0x7ccb8b*/
              v5 = 12; /*0x7ccb8e*/
            v15 = a4; /*0x7ccb8f*/
            v13 = a3; /*0x7ccb92*/
            goto LABEL_13; /*0x7ccb92*/
          default:
            return; /*0x7ccb6d*/
        }
      }
      return; /*0x7ccbb5*/
    }
  LABEL_59:
    __tzset(); /*0x7cce4c*/
    _store_str((ObjectClass *)(&lpMultiByteStr)[a2[8] != 0], a3, a4); /*0x7cce69*/
    return; /*0x7cce69*/
  }
  if ( (char)a1 <= 109 ) /*0x7ccd13*/
  {
    switch ( (char)a1 ) /*0x7ccd19*/
    {
      case 'm': /*0x7ccd19*/
        v16 = a4; /*0x7cce15*/
        dword_B78BB0 = dword_B78BAC; /*0x7cce18*/
        v14 = a3; /*0x7cce20*/
        v11 = a2[4]; /*0x7cce23*/
        v12 = 2; /*0x7cce26*/
        break;
      case 'a': /*0x7ccd19*/
        _store_str(*(ObjectClass **)(a5 + 4 * a2[6]), a3, a4); /*0x7cce0b*/
        return; /*0x7cce0b*/
      case 'b': /*0x7ccd19*/
        _store_str(*(ObjectClass **)(a5 + 4 * a2[4] + 56), a3, a4); /*0x7ccdf4*/
        return; /*0x7ccdf4*/
      case 'c': /*0x7ccd19*/
        if ( dword_B78BAC ) /*0x7ccd81*/
        {
          dword_B78BAC = 0; /*0x7ccd8c*/
          _store_winword(*(uint8_t **)(a5 + 164), (int)a2, a3, a4, a5); /*0x7ccd9f*/
        }
        else
        {
          _store_winword(*(uint8_t **)(a5 + 160), (int)a2, a3, a4, a5); /*0x7ccdb6*/
        }
        if ( *a4 ) /*0x7ccdbe*/
        {
          *(unsigned char *)(*a3)++ = 32; /*0x7ccdcf*/
          --*a4; /*0x7ccdd4*/
          _store_winword(*(uint8_t **)(a5 + 168), (int)a2, a3, a4, a5); /*0x7ccddc*/
        }
        return; /*0x7ccddc*/
      case 'd': /*0x7ccd19*/
        dword_B78BB0 = dword_B78BAC; /*0x7ccd65*/
        _store_num(a2[3], 2u, a3, a4); /*0x7ccd75*/
        return; /*0x7ccd75*/
      case 'j': /*0x7ccd19*/
        v16 = a4; /*0x7ccd43*/
        dword_B78BB0 = dword_B78BAC; /*0x7ccd46*/
        v14 = a3; /*0x7ccd4e*/
        v11 = a2[7]; /*0x7ccd51*/
        v12 = 3; /*0x7ccd54*/
        break;
      default:
        return; /*0x7ccd38*/
    }
    _store_num(v11 + 1, v12, v14, v16); /*0x7ccd58*/
    return; /*0x7ccd58*/
  }
  switch ( (char)a1 ) /*0x7cce30*/
  {
    case 'p': /*0x7cce30*/
      if ( (int)a2[2] > 11 ) /*0x7ccf00*/
        _store_str(*(ObjectClass **)(a5 + 156), a3, a4); /*0x7ccf10*/
      else
        _store_str(*(ObjectClass **)(a5 + 152), a3, a4); /*0x7ccf08*/
      return; /*0x7ccf08*/
    case 'w': /*0x7cce30*/
      dword_B78BB0 = dword_B78BAC; /*0x7ccedb*/
      _store_num(a2[6], 1u, a3, a4); /*0x7cceeb*/
      return; /*0x7cceeb*/
    case 'x': /*0x7cce30*/
      if ( dword_B78BAC ) /*0x7cce98*/
      {
        dword_B78BAC = 0; /*0x7cce9d*/
        _store_winword(*(uint8_t **)(a5 + 164), (int)a2, a3, a4, a5); /*0x7cceb4*/
      }
      else
      {
        _store_winword(*(uint8_t **)(a5 + 160), (int)a2, a3, a4, a5); /*0x7cced1*/
      }
      return; /*0x7ccebc*/
    case 'y': /*0x7cce30*/
      v15 = a4; /*0x7cce73*/
      dword_B78BB0 = dword_B78BAC; /*0x7cce76*/
      v13 = a3; /*0x7cce7e*/
      v5 = a2[5] % 100; /*0x7cce8a*/
  LABEL_13:
      _store_num(v5, 2u, v13, v15); /*0x7ccb97*/
      return; /*0x7ccb98*/
    case 'z': /*0x7cce30*/
      goto LABEL_59; /*0x7cce46*/
  }
}
}
// 0x7CCFFC
namespace gamemd {
void _store_winword(unsigned char * a1, int a2, unsigned int * a3, unsigned int * a4, int a5)
{
  uint8_t *v5; // ebx
  int v8; // ecx
  unsigned char *v9; // eax
  uint8_t v10; // dl
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned char *v15; // ebx
  uint8_t v16; // al
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  uint8_t *v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  char *v24; // [esp+18h] [ebp+8h]
  int v25; // [esp+20h] [ebp+10h]
  int v26; // [esp+20h] [ebp+10h]
  char v27; // [esp+24h] [ebp+14h]

  v5 = a1; /*0x7cd001*/
  while ( *v5 ) /*0x7cd006*/
  {
    v8 = 0; /*0x7cd015*/
    if ( !*a4 ) /*0x7cd019*/
      return; /*0x7cd019*/
    dword_B78BB0 = 0; /*0x7cd01f*/
    v25 = (int)(v5 + 1); /*0x7cd030*/
    do /*0x7cd041*/
    {
      v9 = (unsigned char *)v25; /*0x7cd033*/
      v10 = *v5; /*0x7cd036*/
      ++v8; /*0x7cd039*/
      ++v25; /*0x7cd03a*/
    }
    while ( *v9 == *v5 ); /*0x7cd041*/
    v26 = v25 - 1; /*0x7cd043*/
    v24 = (char *)v8; /*0x7cd046*/
    if ( (char)v10 > 100 ) /*0x7cd04f*/
    {
      switch ( v10 ) /*0x7cd1c4*/
      {
        case 'h': /*0x7cd1c4*/
          v23 = v8 - 1; /*0x7cd29d*/
          if ( v23 ) /*0x7cd29e*/
          {
            if ( v23 != 1 ) /*0x7cd2a1*/
            {
  LABEL_12:
              if ( *((char *)off_87C590 + 2 * v10 + 1) < 0 ) /*0x7cd08e*/
              {
                ++v5; /*0x7cd092*/
                *(unsigned char *)(*a3)++ = v10; /*0x7cd095*/
                --*a4; /*0x7cd099*/
              }
              *(unsigned char *)(*a3)++ = *v5++; /*0x7cd09f*/
              --*a4; /*0x7cd0a4*/
              continue; /*0x7cd0a4*/
            }
          }
          else
          {
            dword_B78BB0 = 1; /*0x7cd2a8*/
          }
          v27 = 73; /*0x7cd2b2*/
          break;
        case 'm': /*0x7cd1c4*/
          v22 = v8 - 1; /*0x7cd282*/
          if ( v22 ) /*0x7cd283*/
          {
            if ( v22 != 1 ) /*0x7cd286*/
              goto LABEL_12; /*0x7cd286*/
          }
          else
          {
            dword_B78BB0 = 1; /*0x7cd28d*/
          }
          v27 = 77; /*0x7cd297*/
          break;
        case 's': /*0x7cd1c4*/
          v21 = v8 - 1; /*0x7cd267*/
          if ( v21 ) /*0x7cd268*/
          {
            if ( v21 != 1 ) /*0x7cd26b*/
              goto LABEL_12; /*0x7cd26b*/
          }
          else
          {
            dword_B78BB0 = 1; /*0x7cd272*/
          }
          v27 = 83; /*0x7cd27c*/
          break;
        case 't': /*0x7cd1c4*/
          if ( *(int *)(a2 + 8) > 11 ) /*0x7cd212*/
            v20 = *(uint8_t **)(a5 + 156); /*0x7cd21c*/
          else
            v20 = *(uint8_t **)(a5 + 152); /*0x7cd214*/
          if ( v8 > 0 ) /*0x7cd224*/
          {
            do /*0x7cd25d*/
            {
              if ( !*a4 ) /*0x7cd226*/
                break; /*0x7cd229*/
              if ( *((char *)off_87C590 + 2 * *v20 + 1) < 0 && *a4 > 1u ) /*0x7cd240*/
              {
                *(unsigned char *)(*a3)++ = *v20++; /*0x7cd244*/
                --*a4; /*0x7cd249*/
              }
              *(unsigned char *)(*a3)++ = *v20++; /*0x7cd24f*/
              --*a4; /*0x7cd254*/
              --v24; /*0x7cd256*/
            }
            while ( (int)v24 > 0 ); /*0x7cd25d*/
          }
          goto LABEL_73; /*0x7cd25d*/
        case 'y': /*0x7cd1c4*/
          if ( v8 == 2 ) /*0x7cd1ec*/
          {
            v27 = 121; /*0x7cd1ff*/
          }
          else
          {
            if ( v8 != 4 ) /*0x7cd1f0*/
              goto LABEL_12; /*0x7cd1f0*/
            v27 = 89; /*0x7cd1f6*/
          }
          break;
        default:
          goto LABEL_12; /*0x7cd1e2*/
      }
    }
    else
    {
      switch ( v10 ) /*0x7cd055*/
      {
        case 'd': /*0x7cd055*/
          v17 = v8 - 1; /*0x7cd18c*/
          if ( v17 ) /*0x7cd18d*/
          {
            v18 = v17 - 1; /*0x7cd18f*/
            if ( v18 ) /*0x7cd190*/
            {
              v19 = v18 - 1; /*0x7cd192*/
              if ( v19 ) /*0x7cd193*/
              {
                if ( v19 != 1 ) /*0x7cd196*/
                  goto LABEL_12; /*0x7cd196*/
                v27 = 65; /*0x7cd19c*/
              }
              else
              {
                v27 = 97; /*0x7cd1a5*/
              }
              break; /*0x7cd1a0*/
            }
          }
          else
          {
            dword_B78BB0 = 1; /*0x7cd1ae*/
          }
          v27 = 100; /*0x7cd1b8*/
          break;
        case '\'': /*0x7cd055*/
          if ( (v8 & 1) != 0 ) /*0x7cd139*/
          {
            for ( v5 += v8; ; ++v5 ) /*0x7cd13b*/
            {
              v16 = *v5; /*0x7cd13d*/
              if ( !*v5 || !*a4 ) /*0x7cd147*/
                break; /*0x7cd147*/
              if ( v16 == 39 ) /*0x7cd152*/
              {
                ++v5; /*0x7cd17f*/
                goto LABEL_15; /*0x7cd180*/
              }
              if ( *((char *)off_87C590 + 2 * v16 + 1) < 0 && *a4 > 1u ) /*0x7cd167*/
              {
                *(unsigned char *)(*a3)++ = v16; /*0x7cd16b*/
                ++v5; /*0x7cd16f*/
                --*a4; /*0x7cd170*/
              }
              *(unsigned char *)(*a3)++ = *v5; /*0x7cd176*/
              --*a4; /*0x7cd17b*/
            }
          }
          else
          {
            v5 += v8; /*0x7cd185*/
          }
          continue; /*0x7cd14a*/
        case 'A': /*0x7cd055*/
          goto LABEL_30; /*0x7cd067*/
        case 'H': /*0x7cd055*/
          v14 = v8 - 1; /*0x7cd0e5*/
          if ( v14 ) /*0x7cd0e6*/
          {
            if ( v14 != 1 ) /*0x7cd0e9*/
              goto LABEL_12; /*0x7cd0e9*/
          }
          else
          {
            dword_B78BB0 = 1; /*0x7cd0ed*/
          }
          v27 = 72; /*0x7cd0f7*/
          break; /*0x7cd0fb*/
        case 'M': /*0x7cd055*/
          v11 = v8 - 1; /*0x7cd0b4*/
          if ( v11 ) /*0x7cd0b5*/
          {
            v12 = v11 - 1; /*0x7cd0b7*/
            if ( v12 ) /*0x7cd0b8*/
            {
              v13 = v12 - 1; /*0x7cd0ba*/
              if ( v13 ) /*0x7cd0bb*/
              {
                if ( v13 != 1 ) /*0x7cd0be*/
                  goto LABEL_12; /*0x7cd0be*/
                v27 = 66; /*0x7cd0c0*/
              }
              else
              {
                v27 = 98; /*0x7cd0c9*/
              }
              break; /*0x7cd0c4*/
            }
          }
          else
          {
            dword_B78BB0 = 1; /*0x7cd0d2*/
          }
          v27 = 109; /*0x7cd0dc*/
          break;
        case 'a': /*0x7cd055*/
  LABEL_30:
          if ( !_strcmpi(v5, "am/pm") ) /*0x7cd106*/
          {
            v15 = v5 + 5; /*0x7cd111*/
            goto LABEL_34; /*0x7cd114*/
          }
          if ( !_strcmpi(v5, &off_7F978C) ) /*0x7cd11c*/
          {
            v15 = v5 + 3; /*0x7cd127*/
  LABEL_34:
            v26 = (int)v15; /*0x7cd12a*/
          }
          v27 = 112; /*0x7cd12d*/
          break; /*0x7cd131*/
        default:
          goto LABEL_12; /*0x7cd07a*/
      }
    }
    _expandtime(v27, a2, a3, a4, a5); /*0x7cd2b6*/
  LABEL_73:
    v5 = (uint8_t *)v26; /*0x7cd25f*/
  LABEL_15:
    ; /*0x7cd0a6*/
  }
}
}
// 0x7CD2CB
namespace gamemd {
struct tm * localtime(CampaignScore * aP0)
{
  const __time32_t *v1; // esi
  int v3; // eax
  struct tm *v4; // eax
  struct tm *v5; // esi
  bool v6; // zf
  int tm_sec; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  bool v12; // sf
  int tm_mday; // eax

  v1 = aP0; /*0x7cd2cf*/
  if ( *aP0 < 0 ) /*0x7cd2d5*/
    return 0; /*0x7cd2d9*/
  __tzset(); /*0x7cd2de*/
  v3 = *v1; /*0x7cd2e3*/
  if ( *v1 > 259200 && v3 < 2147224447 ) /*0x7cd2f1*/
  {
    aP0 = (const __time32_t *const)(v3 - dword_87CA60); /*0x7cd2f9*/
    v4 = gmtime((const __time32_t *const)&aP0); /*0x7cd300*/
    v5 = v4; /*0x7cd30d*/
    if ( dword_87CA64 ) /*0x7cd30f*/
    {
      if ( _isindst((int)v4) ) /*0x7cd316*/
      {
        aP0 = (const __time32_t *const)((char *)aP0 - dword_87CA68); /*0x7cd329*/
        v5 = gmtime((const __time32_t *const)&aP0); /*0x7cd335*/
        v5->tm_isdst = 1; /*0x7cd338*/
      }
    }
    return v5; /*0x7cd33f*/
  }
  v5 = gmtime(v1); /*0x7cd34a*/
  v6 = _isindst((int)v5) == 0; /*0x7cd353*/
  tm_sec = v5->tm_sec; /*0x7cd355*/
  if ( !v6 ) /*0x7cd358*/
    tm_sec -= dword_87CA68; /*0x7cd35a*/
  aP0 = (const __time32_t *const)(tm_sec - dword_87CA60); /*0x7cd369*/
  v8 = (tm_sec - dword_87CA60) % 60; /*0x7cd370*/
  v5->tm_sec = v8; /*0x7cd374*/
  if ( v8 < 0 ) /*0x7cd376*/
  {
    v5->tm_sec = v8 + 60; /*0x7cd37a*/
    aP0 -= 15; /*0x7cd37c*/
  }
  aP0 = (const __time32_t *const)(v5->tm_min + (int)aP0 / 60); /*0x7cd38a*/
  v9 = (int)aP0 % 60; /*0x7cd38e*/
  v12 = (int)aP0 % 60 < 0; /*0x7cd391*/
  v5->tm_min = (int)aP0 % 60; /*0x7cd393*/
  if ( v12 ) /*0x7cd396*/
  {
    v5->tm_min = v9 + 60; /*0x7cd39b*/
    aP0 -= 15; /*0x7cd39e*/
  }
  aP0 = (const __time32_t *const)(v5->tm_hour + (int)aP0 / 60); /*0x7cd3ad*/
  v10 = (int)aP0 % 24; /*0x7cd3b1*/
  v12 = (int)aP0 % 24 < 0; /*0x7cd3b3*/
  v5->tm_hour = (int)aP0 % 24; /*0x7cd3b5*/
  if ( v12 ) /*0x7cd3b8*/
  {
    v5->tm_hour = v10 + 24; /*0x7cd3bc*/
    aP0 -= 6; /*0x7cd3bf*/
  }
  v11 = (int)aP0 / 24; /*0x7cd3cb*/
  v12 = (int)aP0 / 24 < 0; /*0x7cd3cd*/
  aP0 = (const __time32_t *const)((int)aP0 / 24); /*0x7cd3cf*/
  if ( (int)aP0 <= 0 ) /*0x7cd3d2*/
  {
    if ( !v12 ) /*0x7cd3f3*/
      return v5; /*0x7cd3f3*/
    v5->tm_wday = (v5->tm_wday + v11 + 7) % 7; /*0x7cd402*/
    v5->tm_mday += (int)aP0; /*0x7cd408*/
    tm_mday = v5->tm_mday; /*0x7cd40b*/
    if ( tm_mday <= 0 ) /*0x7cd410*/
    {
      --v5->tm_year; /*0x7cd415*/
      v5->tm_mday = tm_mday + 31; /*0x7cd418*/
      v5->tm_yday = 364; /*0x7cd41b*/
      v5->tm_mon = 11; /*0x7cd422*/
      return v5; /*0x7cd429*/
    }
  }
  else
  {
    v5->tm_wday = (v11 + v5->tm_wday) % 7; /*0x7cd3df*/
    v5->tm_mday += (int)aP0; /*0x7cd3e5*/
  }
  v5->tm_yday += (int)aP0; /*0x7cd3eb*/
  return v5; /*0x7cd3f0*/
}
}
// 0x7CD460
namespace gamemd {
void * tmpnam(char * Buffer)
{
  char *v1; // edi
  unsigned int *v2; // edi
  void *v3; // eax

  _lock(3); /*0x7cd465*/
  if ( byte_B78208 ) /*0x7cd478*/
    goto LABEL_4; /*0x7cd478*/
  init_namebuf(0); /*0x7cd47b*/
  while ( !_access(&byte_B78208, 0) ) /*0x7cd48c*/
  {
  LABEL_4:
    if ( genfname((char)&byte_B78208) ) /*0x7cd48f*/
    {
      v1 = 0; /*0x7cd499*/
      goto LABEL_12; /*0x7cd49b*/
    }
  }
  v1 = Buffer; /*0x7cd49d*/
  if ( Buffer ) /*0x7cd4a3*/
    goto LABEL_11; /*0x7cd4a3*/
  v2 = _getptd(); /*0x7cd4aa*/
  if ( v2[10] || (v3 = malloc(0xEu), (v2[10] = v3) != 0) ) /*0x7cd4be*/
  {
    v1 = (char *)v2[10]; /*0x7cd4c4*/
  LABEL_11:
    strcpy(v1, &byte_B78208); /*0x7cd4c7*/
    goto LABEL_12; /*0x7cd4c9*/
  }
  v1 = &byte_B78208; /*0x7cd4c0*/
  LABEL_12:
  _unlock(3); /*0x7cd4d0*/
  return v1; /*0x7cd4da*/
}
}
// 0x7CD4DE
namespace gamemd {
void * * tmpfile()
{
  FILE *v0; // esi
  int v1; // ebp
  char *v2; // eax
  int v3; // eax

  _lock(3); /*0x7cd4e4*/
  if ( byte_B78218 ) /*0x7cd4f6*/
  {
    if ( genfname((char)&byte_B78218) ) /*0x7cd503*/
      goto LABEL_13; /*0x7cd50b*/
  }
  else
  {
    init_namebuf(1); /*0x7cd4fa*/
  }
  v0 = (FILE *)_getstream(); /*0x7cd512*/
  if ( v0 ) /*0x7cd516*/
  {
    v1 = _sopen(&byte_B78218, 34114, 64, 384); /*0x7cd52b*/
    if ( v1 != -1 ) /*0x7cd533*/
      goto LABEL_10; /*0x7cd533*/
    do /*0x7cd560*/
    {
      if ( *_errno() != 17 ) /*0x7cd53d*/
        break; /*0x7cd53d*/
      if ( genfname((char)&byte_B78218) ) /*0x7cd540*/
        break; /*0x7cd548*/
      v1 = _sopen(&byte_B78218, 34114, 64, 384); /*0x7cd558*/
    }
    while ( v1 == -1 ); /*0x7cd560*/
    if ( v1 != -1 ) /*0x7cd565*/
    {
  LABEL_10:
      v2 = _strdup(&byte_B78218); /*0x7cd568*/
      v0->_tmpfname = v2; /*0x7cd56e*/
      if ( v2 ) /*0x7cd575*/
      {
        v0->_cnt = 0; /*0x7cd589*/
        v0->_ptr = 0; /*0x7cd58c*/
        v0->_base = 0; /*0x7cd58e*/
        v3 = dword_B783D4; /*0x7cd591*/
        IDA_LOBYTE(v3) = dword_B783D4 | 0x80; /*0x7cd596*/
        v0->_flag = v3; /*0x7cd599*/
        v0->_file = v1; /*0x7cd59c*/
        _unlock_file(v0); /*0x7cd59f*/
        goto LABEL_15; /*0x7cd59f*/
      }
      _close(v1); /*0x7cd578*/
    }
    _unlock_file(v0); /*0x7cd57f*/
  }
  LABEL_13:
  v0 = 0; /*0x7cd585*/
  LABEL_15:
  _unlock(3); /*0x7cd5a5*/
  return v0; /*0x7cd5af*/
}
}
// 0x7CD5B4
namespace gamemd {
void * init_namebuf(int a1)
{
  char *v1; // esi
  unsigned char *v2; // eax
  DWORD CurrentProcessId; // eax
  char *v5; // [esp-8h] [ebp-Ch]

  v1 = &byte_B78208; /*0x7cd5ba*/
  if ( a1 ) /*0x7cd5bf*/
    v1 = &byte_B78218; /*0x7cd5c1*/
  strcpy(v1, asc_815E74); /*0x7cd5cc*/
  v2 = v1 + 1; /*0x7cd5d2*/
  if ( *v1 != 92 && *v1 != 47 ) /*0x7cd5e1*/
  {
    *v2 = 92; /*0x7cd5e3*/
    v2 = v1 + 2; /*0x7cd5e6*/
  }
  if ( a1 ) /*0x7cd5ec*/
    *v2 = 116; /*0x7cd5ee*/
  else
    *v2 = 115; /*0x7cd5f3*/
  v5 = v2 + 1; /*0x7cd5f9*/
  CurrentProcessId = GetCurrentProcessId(); /*0x7cd5fa*/
  _ultoa(CurrentProcessId, v5, 32); /*0x7cd600*/
  return strcat(v1, asc_826598); /*0x7cd613*/
}
}
// 0x7CD662
namespace gamemd {
void unknown_libname_75()
{
  struct tm *v1; // eax

  v1 = localtime(Time); /*0x7cd666*/
  if ( v1 ) /*0x7cd66e*/
    return asctime(v1); /*0x7cd671*/
  else
    return 0; /*0x7cd678*/
}
}
// 0x7CD680
namespace gamemd {
void _strnicmp(const char * String1, const char * String2, size_t MaxCount)
{
  size_t v3; // ecx
  uint8_t v6; // ah
  uint8_t v7; // al
  bool v8; // cf
  unsigned int v9; // eax
  unsigned int v10; // ebx
  bool v11; // cf
  int v12; // ebx
  int v14; // [esp-8h] [ebp-18h]
  size_t v15; // [esp-4h] [ebp-14h]
  int v16; // [esp+0h] [ebp-10h]

  v3 = MaxCount; /*0x7cd686*/
  if ( MaxCount ) /*0x7cd68b*/
  {
    if ( dword_B782A0 ) /*0x7cd6a1*/
    {
      _InterlockedIncrement(&dword_B78BA4); /*0x7cd6f1*/
      if ( dword_B78BA0 > 0 ) /*0x7cd6ff*/
      {
        _InterlockedDecrement(&dword_B78BA4); /*0x7cd705*/
        _lock(19); /*0x7cd710*/
        v16 = 1; /*0x7cd715*/
        v3 = MaxCount; /*0x7cd71c*/
      }
      else
      {
        v16 = 0; /*0x7cd701*/
      }
      v9 = 0; /*0x7cd71e*/
      v10 = 0; /*0x7cd720*/
      do /*0x7cd74d*/
      {
        IDA_LOBYTE(v9) = *String1; /*0x7cd724*/
        IDA_LOBYTE(v10) = *String2; /*0x7cd728*/
        if ( !v9 || !v10 ) /*0x7cd72e*/
          break; /*0x7cd72e*/
        ++String1; /*0x7cd730*/
        ++String2; /*0x7cd731*/
        v15 = v3; /*0x7cd732*/
        v14 = v9; /*0x7cd733*/
        v10 = tolower_0(v10); /*0x7cd73a*/
        v9 = tolower_0(v14); /*0x7cd73f*/
        v11 = v9 < v10; /*0x7cd748*/
        if ( v9 != v10 ) /*0x7cd74a*/
          goto differ2; /*0x7cd74a*/
        v3 = v15 - 1; /*0x7cd74c*/
      }
      while ( v15 != 1 ); /*0x7cd74d*/
      v3 = 0; /*0x7cd74f*/
      v11 = v9 < v10; /*0x7cd751*/
      if ( v9 == v10 ) /*0x7cd753*/
        goto toend2; /*0x7cd753*/
  differ2:
      v3 = -1; /*0x7cd755*/
      if ( !v11 ) /*0x7cd75a*/
        v3 = 1; /*0x7cd75c*/
  toend2:
      if ( v16 ) /*0x7cd761*/
      {
        v12 = v3; /*0x7cd76c*/
        _unlock(19); /*0x7cd770*/
        return v12; /*0x7cd778*/
      }
      else
      {
        _InterlockedDecrement(&dword_B78BA4); /*0x7cd763*/
      }
    }
    else
    {
      do /*0x7cd6d3*/
      {
        v6 = *String1; /*0x7cd6ac*/
        v7 = *String2; /*0x7cd6b0*/
        if ( !*String1 || !v7 ) /*0x7cd6b6*/
          break; /*0x7cd6b6*/
        ++String1; /*0x7cd6b8*/
        ++String2; /*0x7cd6b9*/
        if ( v6 >= 0x41u && v6 <= 0x5Au ) /*0x7cd6c0*/
          v6 += 32; /*0x7cd6c2*/
        if ( v7 >= 0x41u && v7 <= 0x5Au ) /*0x7cd6ca*/
          v7 += 32; /*0x7cd6cc*/
        v8 = v6 < v7; /*0x7cd6ce*/
        if ( v6 != v7 ) /*0x7cd6d0*/
          goto differ; /*0x7cd6d0*/
        --v3; /*0x7cd6d2*/
      }
      while ( v3 ); /*0x7cd6d3*/
      v3 = 0; /*0x7cd6d5*/
      v8 = v6 < v7; /*0x7cd6d7*/
      if ( v6 == v7 ) /*0x7cd6d9*/
        return v3; /*0x7cd6d9*/
  differ:
      v3 = -1; /*0x7cd6df*/
      if ( !v8 ) /*0x7cd6e4*/
        return 1; /*0x7cd6ea*/
    }
  }
  return v3; /*0x7cd77c*/
}
}
// 0x7CD7CE
namespace gamemd {
void wcscspn(ObjectClass * aP0, const wchar_t * Control)
{
  const wchar_t *v2; // eax
  const wchar_t *v3; // edx
  wchar_t v4; // cx

  v2 = aP0; /*0x7cd7ce*/
  if ( *aP0 ) /*0x7cd7d5*/
  {
    while ( 1 ) /*0x7cd7e5*/
    {
      v3 = Control; /*0x7cd7e5*/
      if ( *Control ) /*0x7cd7df*/
        break; /*0x7cd7df*/
  LABEL_6:
      if ( !*++v2 ) /*0x7cd7ff*/
        return v2 - aP0; /*0x7cd803*/
    }
    v4 = *Control; /*0x7cd7ec*/
    while ( v4 != *v2 ) /*0x7cd7f1*/
    {
      v4 = *++v3; /*0x7cd7f5*/
      if ( !*v3 ) /*0x7cd7f5*/
        goto LABEL_6; /*0x7cd7fb*/
    }
  }
  return v2 - aP0; /*0x7cd809*/
}
}
// 0x7CD80F
namespace gamemd {
void __noreturn start()
{
  DWORD Version; // eax
  int wShowWindow; // eax
  HMODULE ModuleHandleA; // eax
  int v4; // [esp-4h] [ebp-78h]
  ObjectClass *v5; // [esp+0h] [ebp-74h]
  CHAR *lpCmdLine; // [esp+10h] [ebp-64h]
  int v7; // [esp+14h] [ebp-60h]
  struct _STARTUPINFOA StartupInfo; // [esp+18h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  Version = GetVersion(); /*0x7cd835*/
  dword_B781D4 = IDA_BYTE1(Version); /*0x7cd83f*/
  dword_B781D0 = (uint8_t)Version; /*0x7cd84d*/
  dword_B781CC = IDA_BYTE1(Version) + ((uint8_t)Version << 8); /*0x7cd858*/
  dword_B781C8 = IDA_HIWORD(Version); /*0x7cd861*/
  if ( !_heap_init(1) ) /*0x7cd868*/
    fast_error_exit(0x1Cu); /*0x7cd874*/
  if ( !_mtinit() ) /*0x7cd87a*/
    fast_error_exit(0x10u); /*0x7cd885*/
  ms_exc.registration.TryLevel = 0; /*0x7cd88d*/
  _ioinit(v5); /*0x7cd890*/
  dword_B78BA8 = (int)GetCommandLineA(); /*0x7cd89b*/
  dword_B78228 = __crtGetEnvironmentStringsA(); /*0x7cd8a5*/
  _setargv(); /*0x7cd8aa*/
  _setenvp(); /*0x7cd8af*/
  _cinit(); /*0x7cd8b4*/
  StartupInfo.dwFlags = 0; /*0x7cd8b9*/
  GetStartupInfoA(&StartupInfo); /*0x7cd8c0*/
  lpCmdLine = _wincmdln(); /*0x7cd8cb*/
  if ( (StartupInfo.dwFlags & 1) != 0 ) /*0x7cd8d2*/
    wShowWindow = StartupInfo.wShowWindow; /*0x7cd8d4*/
  else
    wShowWindow = 10; /*0x7cd8dc*/
  v4 = wShowWindow; /*0x7cd8dd*/
  ModuleHandleA = GetModuleHandleA(0); /*0x7cd8e3*/
  v7 = WinMain(ModuleHandleA, 0, lpCmdLine, v4); /*0x7cd8ef*/
  exit(v7); /*0x7cd8f3*/
}
}
// 0x7CDA90
namespace gamemd {
void strcmp(IUnknown * aP0, IUnknown * aP1)
{
  const char *v2; // edx
  const char *v3; // ecx
  unsigned int v4; // eax
  bool v5; // cf
  unsigned int v6; // eax
  int16_t v8; // ax

  v2 = aP0; /*0x7cda90*/
  v3 = aP1; /*0x7cda94*/
  if ( ((uint8_t)aP0 & 3) == 0 ) /*0x7cda9e*/
  {
  dodwords:
    while ( 1 ) /*0x7cdaa0*/
    {
      v4 = *(unsigned int *)v2; /*0x7cdaa0*/
      v5 = (uint8_t)*(unsigned int *)v2 < (unsigned int)*v3; /*0x7cdaa2*/
      if ( (uint8_t)*(unsigned int *)v2 != *v3 ) /*0x7cdaa4*/
        break; /*0x7cdaa4*/
      if ( !(unsigned char)v4 ) /*0x7cdaa8*/
        return 0; /*0x7cdaa8*/
      v5 = IDA_BYTE1(v4) < (unsigned int)v3[1]; /*0x7cdaaa*/
      if ( IDA_BYTE1(v4) != v3[1] ) /*0x7cdaad*/
        break; /*0x7cdaad*/
      if ( !IDA_BYTE1(v4) ) /*0x7cdab1*/
        return 0; /*0x7cdab1*/
      v6 = IDA_HIWORD(v4); /*0x7cdab3*/
      v5 = (uint8_t)v6 < (unsigned int)v3[2]; /*0x7cdab6*/
      if ( (unsigned char)v6 != v3[2] ) /*0x7cdab9*/
        break; /*0x7cdab9*/
      if ( !(unsigned char)v6 ) /*0x7cdabd*/
        return 0; /*0x7cdabd*/
      v5 = IDA_BYTE1(v6) < (unsigned int)v3[3]; /*0x7cdabf*/
      if ( IDA_BYTE1(v6) != v3[3] ) /*0x7cdac2*/
        break; /*0x7cdac2*/
      v3 += 4; /*0x7cdac4*/
      v2 += 4; /*0x7cdac7*/
      if ( !IDA_BYTE1(v6) ) /*0x7cdacc*/
        return 0; /*0x7cdacc*/
    }
    return -2 * v5 + 1; /*0x7cdac2*/
  }
  if ( ((uint8_t)aP0 & 1) != 0 ) /*0x7cdae2*/
  {
    v2 = aP0 + 1; /*0x7cdae6*/
    v5 = *aP0 < (unsigned int)*aP1; /*0x7cdae7*/
    if ( *aP0 != *aP1 ) /*0x7cdae9*/
      return -2 * v5 + 1; /*0x7cdae9*/
    v3 = aP1 + 1; /*0x7cdaeb*/
    if ( !*aP0 ) /*0x7cdaee*/
      return 0; /*0x7cdad2*/
    if ( ((uint8_t)v2 & 2) == 0 ) /*0x7cdaf6*/
      goto dodwords; /*0x7cdaf6*/
  }
  v8 = *(unsigned short *)v2; /*0x7cdaf8*/
  v2 += 2; /*0x7cdafb*/
  v5 = (uint8_t)v8 < (unsigned int)*v3; /*0x7cdafe*/
  if ( (unsigned char)v8 != *v3 ) /*0x7cdb00*/
    return -2 * v5 + 1; /*0x7cdb00*/
  if ( !(unsigned char)v8 ) /*0x7cdb04*/
    return 0; /*0x7cdb04*/
  v5 = IDA_HIBYTE(v8) < (unsigned int)v3[1]; /*0x7cdb06*/
  if ( IDA_HIBYTE(v8) == v3[1] ) /*0x7cdb09*/
  {
    if ( IDA_HIBYTE(v8) ) /*0x7cdb0d*/
    {
      v3 += 2; /*0x7cdb0f*/
      goto dodwords; /*0x7cdb12*/
    }
    return 0; /*0x7cdb0d*/
  }
  return -2 * v5 + 1; /*0x7cdad2*/
}
}
// 0x7CDB14
namespace gamemd {
char * * setlocale(int Category, const char * Locale)
{
  char *v2; // ebx
  char *v3; // eax
  char *all; // esi
  const char *v5; // edi
  char *i; // esi
  size_t v7; // eax
  const char **v8; // ebx
  const char *v9; // esi
  size_t v10; // eax
  size_t v11; // edi
  const char *v12; // edi
  bool v13; // zf
  const char **v14; // edi
  char Destination[132]; // [esp+8h] [ebp-88h] BYREF
  int v17; // [esp+8Ch] [ebp-4h]
  int Categorya; // [esp+98h] [ebp+8h]
  int Localea; // [esp+9Ch] [ebp+Ch]

  v2 = 0; /*0x7cdb22*/
  if ( (unsigned int)Category <= 5 ) /*0x7cdb26*/
  {
    _lock(19); /*0x7cdb37*/
    ++dword_B78BA0; /*0x7cdb3c*/
    while ( dword_B78BA4 ) /*0x7cdb49*/
      Sleep(1u); /*0x7cdb4d*/
    if ( Category ) /*0x7cdb58*/
    {
      if ( Locale ) /*0x7cdb5d*/
      {
        v3 = _setlocale_set_cat((void *)Category, (char *)Locale); /*0x7cdb63*/
  LABEL_45:
        all = v3; /*0x7cdd3f*/
        goto LABEL_46; /*0x7cdd3f*/
      }
      all = (&Block)[3 * Category]; /*0x7cdb72*/
  LABEL_46:
      _unlock(19); /*0x7cdd41*/
  LABEL_47:
      --dword_B78BA0; /*0x7cdd49*/
      return all; /*0x7cdd52*/
    }
    v5 = Locale; /*0x7cdb7e*/
    v17 = 1; /*0x7cdb81*/
    Categorya = 0; /*0x7cdb8a*/
    if ( Locale ) /*0x7cdb8d*/
    {
      if ( *Locale == 76 && Locale[1] == 67 && Locale[2] == 95 ) /*0x7cdbaa*/
      {
        for ( i = strpbrk(Locale, "=;"); i; i = strpbrk(v5, "=;") ) /*0x7cdbc1*/
        {
          v7 = i - v5; /*0x7cdbcd*/
          v17 = i - v5; /*0x7cdbcf*/
          if ( i == v5 || *i == 59 ) /*0x7cdbdb*/
            break; /*0x7cdbdb*/
          Localea = 1; /*0x7cdbe1*/
          v8 = (const char **)&off_87C48C; /*0x7cdbe8*/
          while ( strncmp(*v8, v5, v7) || v17 != strlen(*v8) ) /*0x7cdbf6*/
          {
            ++Localea; /*0x7cdc0f*/
            v8 += 3; /*0x7cdc12*/
            if ( (int)v8 > (int)&off_87C4BC ) /*0x7cdc1b*/
              break; /*0x7cdc1b*/
            v7 = v17; /*0x7cdbef*/
          }
          v9 = i + 1; /*0x7cdc1d*/
          v10 = strcspn(v9, asc_81C8FC); /*0x7cdc24*/
          v11 = v10; /*0x7cdc29*/
          if ( !v10 && *v9 != 59 ) /*0x7cdc34*/
            break; /*0x7cdc34*/
          if ( Localea <= 5 ) /*0x7cdc3a*/
          {
            strncpy(Destination, v9, v10); /*0x7cdc45*/
            Destination[v11] = 0; /*0x7cdc4a*/
            if ( _setlocale_set_cat((void *)Localea, Destination) ) /*0x7cdc5c*/
              ++Categorya; /*0x7cdc68*/
          }
          v12 = &v9[v11]; /*0x7cdc6b*/
          if ( *v12 ) /*0x7cdc6d*/
          {
            v5 = v12 + 1; /*0x7cdc72*/
            if ( *v5 ) /*0x7cdc73*/
              continue; /*0x7cdc73*/
          }
          v13 = Categorya == 0; /*0x7cdca0*/
          goto LABEL_31; /*0x7cdca0*/
        }
        _unlock(19); /*0x7cdc91*/
        all = 0; /*0x7cdc99*/
        goto LABEL_47; /*0x7cdc9b*/
      }
      all = (char *)_expandlocale((char *)Locale, Destination, 0, 0); /*0x7cdcc1*/
      if ( !all ) /*0x7cdcc8*/
        goto LABEL_46; /*0x7cdcc8*/
      v14 = (const char **)&Block; /*0x7cdccf*/
      do /*0x7cdd0e*/
      {
        if ( v14 != (const char **)&Block ) /*0x7cdcd3*/
        {
          if ( !strcmp(Destination, *v14) || _setlocale_set_cat(v2, Destination) ) /*0x7cdcf1*/
            ++Categorya; /*0x7cdd01*/
          else
            v17 = 0; /*0x7cdcfc*/
        }
        v14 += 3; /*0x7cdd04*/
        ++v2; /*0x7cdd07*/
      }
      while ( (int)v14 <= (int)&off_87C4C0 ); /*0x7cdd0e*/
      if ( v17 ) /*0x7cdd15*/
      {
        all = (char *)_setlocale_get_all(); /*0x7cdd22*/
        free(Block); /*0x7cdd24*/
        Block = 0; /*0x7cdd2a*/
        goto LABEL_46; /*0x7cdd30*/
      }
      v13 = Categorya == 0; /*0x7cdd32*/
  LABEL_31:
      if ( v13 ) /*0x7cdca4*/
      {
        all = 0; /*0x7cdcaa*/
        goto LABEL_46; /*0x7cdcac*/
      }
    }
    v3 = (char *)_setlocale_get_all(); /*0x7cdd3a*/
    goto LABEL_45; /*0x7cdd3a*/
  }
  return 0; /*0x7cdd56*/
}
}
// 0x7CDD5A
namespace gamemd {
void * _setlocale_set_cat(void * a0, IUnknown * aP1)
{
  int v3; // eax
  char Str[132]; // [esp+Ch] [ebp-A4h] BYREF
  unsigned char v6[8]; // [esp+90h] [ebp-20h] BYREF
  int v7; // [esp+98h] [ebp-18h] BYREF
  int v8; // [esp+9Ch] [ebp-14h]
  unsigned short Src[4]; // [esp+A0h] [ebp-10h] BYREF
  void *v10; // [esp+A8h] [ebp-8h]
  UINT v11; // [esp+ACh] [ebp-4h]
  char *v12; // [esp+B8h] [ebp+8h]
  char *Blocka; // [esp+BCh] [ebp+Ch]

  if ( !_expandlocale(aP1, Str, Src, &v7) ) /*0x7cdd7c*/
    return 0; /*0x7cdd7c*/
  v3 = strlen(Str); /*0x7cdd93*/
  Blocka = (char *)malloc(v3 + 1); /*0x7cdda0*/
  if ( !Blocka ) /*0x7cdda6*/
    return 0; /*0x7cdda6*/
  v12 = (&::aP1)[3 * (unsigned int)a0]; /*0x7cddc1*/
  v8 = dword_B78298[(unsigned int)a0]; /*0x7cddc6*/
  v10 = (void *)(6 * (unsigned int)a0 + 12027168); /*0x7cddd3*/
  memcpy_0(v6, v10, 6u); /*0x7cdddb*/
  v11 = CodePage; /*0x7cdde5*/
  (&::aP1)[3 * (unsigned int)a0] = strcpy(Blocka, Str); /*0x7cddf7*/
  dword_B78298[(unsigned int)a0] = Src[0]; /*0x7cde03*/
  memcpy_0(v10, Src, 6u); /*0x7cde0c*/
  if ( a0 == (void *)2 ) /*0x7cde1a*/
    CodePage = v7; /*0x7cde1c*/
  if ( a0 == (void *)1 ) /*0x7cde24*/
    dword_B782B4 = v7; /*0x7cde26*/
  if ( (*(&funcs_7CDE2B + 3 * (unsigned int)a0))() ) /*0x7cde2b*/
  {
    (&::aP1)[3 * (unsigned int)a0] = v12; /*0x7cde3b*/
    free(Blocka); /*0x7cde41*/
    dword_B78298[(unsigned int)a0] = v8; /*0x7cde4a*/
    CodePage = v11; /*0x7cde4f*/
    return 0; /*0x7cde56*/
  }
  if ( v12 != (char *)&unk_87C370 ) /*0x7cde5f*/
    free(v12); /*0x7cde64*/
  return (&::aP1)[3 * (unsigned int)a0]; /*0x7cde70*/
}
}
// 0x7CDF2E
namespace gamemd {
void * _expandlocale(IUnknown * aP0, IUnknown * aP1, unsigned short * a2, unsigned int * a3)
{
  char *result; // eax
  char Source[136]; // [esp+Ch] [ebp-88h] BYREF

  if ( !aP0 ) /*0x7cdf41*/
    return 0; /*0x7cdf41*/
  if ( *aP0 == 67 && !aP0[1] ) /*0x7cdf4c*/
  {
    result = aP1; /*0x7cdf51*/
    aP1[1] = 0; /*0x7cdf57*/
    *aP1 = 67; /*0x7cdf5c*/
    if ( a2 ) /*0x7cdf5f*/
    {
      *a2 = 0; /*0x7cdf61*/
      a2[1] = 0; /*0x7cdf64*/
      a2[2] = 0; /*0x7cdf68*/
    }
    if ( a3 ) /*0x7cdf71*/
      *a3 = 0; /*0x7cdf77*/
    return result; /*0x7cdf79*/
  }
  if ( strcmp(Str1, aP0) && strcmp(aC_0, aP0) ) /*0x7cdf97*/
  {
    if ( __lc_strtolc(Source, aP0) || !__get_qualified_locale(Source, word_B782B8, (int)Source) ) /*0x7cdfc8*/
      return 0; /*0x7cdfd6*/
    dword_B782C0 = (uint16_t)word_B782BC; /*0x7cdfdf*/
    __lc_lctostr(Str1, Source); /*0x7cdfec*/
    if ( *aP0 ) /*0x7cdff1*/
      strcpy(aC_0, aP0); /*0x7cdff9*/
    else
      strcpy(aC_0, Str1); /*0x7cdffd*/
  }
  if ( a2 ) /*0x7ce008*/
    memcpy_0(a2, word_B782B8, 6u); /*0x7ce014*/
  if ( a3 ) /*0x7ce020*/
    memcpy_0(a3, &dword_B782C0, sizeof(unsigned int)); /*0x7ce02c*/
  strcpy(aP1, Str1); /*0x7ce038*/
  return Str1; /*0x7ce041*/
}
}
// 0x7CE18D
namespace gamemd {
void _flsbuf(int Ch, FILE * File)
{
  FILE *v2; // esi
  int flag; // eax
  int v4; // ebx
  int v5; // eax
  char *base; // eax
  signed int v7; // edi
  unsigned char *v8; // eax

  v2 = File; /*0x7ce192*/
  flag = File->_flag; /*0x7ce195*/
  v4 = File->_file; /*0x7ce198*/
  if ( (flag & 0x82) == 0 || (flag & 0x40) != 0 ) /*0x7ce1a5*/
    goto LABEL_24; /*0x7ce1a5*/
  if ( (flag & 1) == 0 ) /*0x7ce1ad*/
    goto LABEL_6; /*0x7ce1ad*/
  File->_cnt = 0; /*0x7ce1af*/
  if ( (flag & 0x10) == 0 ) /*0x7ce1b5*/
  {
  LABEL_24:
    IDA_LOBYTE(flag) = flag | 0x20; /*0x7ce299*/
    v2->_flag = flag; /*0x7ce29b*/
    return -1; /*0x7ce29b*/
  }
  IDA_LOBYTE(flag) = flag & 0xFE; /*0x7ce1be*/
  v2->_ptr = v2->_base; /*0x7ce1c0*/
  v2->_flag = flag; /*0x7ce1c2*/
  LABEL_6:
  v5 = v2->_flag; /*0x7ce1c5*/
  v2->_cnt = 0; /*0x7ce1c8*/
  File = 0; /*0x7ce1cc*/
  IDA_LOBYTE(v5) = v5 & 0xED | 2; /*0x7ce1d2*/
  v2->_flag = v5; /*0x7ce1d8*/
  if ( (v5 & 0x10C) == 0 && (v2 != &::File && v2 != (FILE *)&unk_87BF90 || !_isatty(v4)) ) /*0x7ce1ee*/
    _getbuf(v2); /*0x7ce1f9*/
  if ( (v2->_flag & 0x108) != 0 ) /*0x7ce206*/
  {
    base = v2->_base; /*0x7ce208*/
    v7 = v2->_ptr - base; /*0x7ce20d*/
    v2->_ptr = base + 1; /*0x7ce212*/
    v2->_cnt = v2->_bufsiz - 1; /*0x7ce21a*/
    if ( v7 <= 0 ) /*0x7ce21d*/
    {
      if ( v4 == -1 ) /*0x7ce232*/
        v8 = &unk_87C928; /*0x7ce24d*/
      else
        v8 = (unsigned char *)(dword_B78A80[v4 >> 5] + 36 * (v4 & 0x1F)); /*0x7ce248*/
      if ( (v8[4] & 0x20) != 0 ) /*0x7ce256*/
        _lseek(v4, 0, 2); /*0x7ce25d*/
    }
    else
    {
      File = (FILE *)_write(v4, base, v7); /*0x7ce22a*/
    }
    *v2->_base = Ch; /*0x7ce26b*/
  }
  else
  {
    v7 = 1; /*0x7ce274*/
    File = (FILE *)_write(v4, &Ch, 1u); /*0x7ce280*/
  }
  if ( File == (FILE *)v7 ) /*0x7ce287*/
    return (uint8_t)Ch; /*0x7ce297*/
  v2->_flag |= 0x20u; /*0x7ce289*/
  return -1; /*0x7ce2a1*/
}
}
// 0x7CE2A5
namespace gamemd {
void _output(FILE * File, char * a2, int a3)
{
  int v3; // esi
  char v4; // bl
  char *v5; // edi
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int int_arg; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  char *v13; // ecx
  char *i; // eax
  int v15; // edx
  wchar_t short_arg; // ax
  int16_t *v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  char *j; // eax
  int v22; // edx
  unsigned short *v23; // eax
  int64_t v24; // rax
  uint64_t v25; // rdi
  int v26; // eax
  int v27; // ebx
  uint64_t v28; // kr08_8
  unsigned char *v29; // eax
  char *v30; // eax
  char v31; // bl
  int v32; // esi
  wchar_t *v33; // ebx
  int v34; // edi
  wchar_t v35; // ax
  int v36; // eax
  char MbCh; // [esp+Ch] [ebp-248h] BYREF
  char v40; // [esp+20Bh] [ebp-49h] BYREF
  int v41; // [esp+20Ch] [ebp-48h]
  int v42; // [esp+210h] [ebp-44h]
  int64_t v43; // [esp+214h] [ebp-40h]
  char v44[4]; // [esp+21Ch] [ebp-38h] BYREF
  int v45; // [esp+220h] [ebp-34h]
  int v46; // [esp+224h] [ebp-30h]
  int v47; // [esp+228h] [ebp-2Ch]
  int v48; // [esp+22Ch] [ebp-28h]
  int v49; // [esp+230h] [ebp-24h]
  int v50; // [esp+234h] [ebp-20h]
  int v51; // [esp+238h] [ebp-1Ch]
  unsigned short v52[3]; // [esp+23Eh] [ebp-16h] BYREF
  int v53; // [esp+244h] [ebp-10h]
  int v54; // [esp+248h] [ebp-Ch]
  int p_MbCh; // [esp+24Ch] [ebp-8h]
  int v56; // [esp+250h] [ebp-4h]
  char *v57; // [esp+260h] [ebp+Ch]

  v3 = 0; /*0x7ce2b4*/
  v4 = *a2; /*0x7ce2b6*/
  v5 = a2 + 1; /*0x7ce2b8*/
  v6 = *a2 == 0; /*0x7ce2b9*/
  v54 = 0; /*0x7ce2bb*/
  *(unsigned int *)&v52[1] = 0; /*0x7ce2be*/
  v57 = a2 + 1; /*0x7ce2c1*/
  if ( !v6 ) /*0x7ce2c4*/
  {
    v7 = v53; /*0x7ce2ca*/
    while ( 1 ) /*0x7ce2d9*/
    {
      if ( *(int *)&v52[1] < 0 ) /*0x7ce2dc*/
        return *(unsigned int *)&v52[1]; /*0x7ce2dc*/
      if ( v4 < 32 || v4 > 120 ) /*0x7ce2ea*/
        v8 = 0; /*0x7ce2fa*/
      else
        v8 = byte_7F97CC[v4] & 0xF; /*0x7ce2f5*/
      v46 = byte_7F97EC[8 * v8 + v3] >> 4; /*0x7ce30a*/
      switch ( v46 ) /*0x7ce313*/
      {
        case 0: /*0x7ce313*/
          goto $NORMAL_STATE$1535;
        case 1: /*0x7ce313*/
          v53 = -1; /*0x7ce31a*/
          v45 = 0; /*0x7ce31e*/
          v48 = 0; /*0x7ce321*/
          v50 = 0; /*0x7ce324*/
          v51 = 0; /*0x7ce327*/
          v56 = 0; /*0x7ce32a*/
          v49 = 0; /*0x7ce32d*/
          goto LABEL_171; /*0x7ce330*/
        case 2: /*0x7ce313*/
          switch ( v4 ) /*0x7ce33b*/
          {
            case ' ': /*0x7ce33b*/
              v56 |= 2u; /*0x7ce378*/
              break;
            case '#': /*0x7ce33b*/
              IDA_LOBYTE(v56) = v56 | 0x80; /*0x7ce36f*/
              break;
            case '+': /*0x7ce33b*/
              v56 |= 1u; /*0x7ce366*/
              break;
            case '-': /*0x7ce33b*/
              v56 |= 4u; /*0x7ce35d*/
              break;
            case '0': /*0x7ce33b*/
              v56 |= 8u; /*0x7ce354*/
              break;
          }
          goto LABEL_171; /*0x7ce358*/
        case 3: /*0x7ce313*/
          if ( v4 == 42 ) /*0x7ce384*/
          {
            int_arg = get_int_arg(&a3); /*0x7ce38a*/
            v50 = int_arg; /*0x7ce392*/
            if ( int_arg >= 0 ) /*0x7ce395*/
              goto LABEL_171; /*0x7ce395*/
            v56 |= 4u; /*0x7ce39b*/
            v10 = -int_arg; /*0x7ce39f*/
          }
          else
          {
            v10 = v4 + 10 * v50 - 48; /*0x7ce3b2*/
          }
          v50 = v10; /*0x7ce3a1*/
          goto LABEL_171; /*0x7ce3a4*/
        case 4: /*0x7ce313*/
          v53 = 0; /*0x7ce3b8*/
          goto LABEL_171; /*0x7ce3bb*/
        case 5: /*0x7ce313*/
          if ( v4 == 42 ) /*0x7ce3c3*/
          {
            v53 = get_int_arg(&a3); /*0x7ce3d1*/
            if ( v53 < 0 ) /*0x7ce3d4*/
              v53 = -1; /*0x7ce3da*/
          }
          else
          {
            v53 = v4 + 10 * v7 - 48; /*0x7ce3ed*/
          }
          goto LABEL_171; /*0x7ce3de*/
        case 6: /*0x7ce313*/
          switch ( v4 ) /*0x7ce3f8*/
          {
            case 'I': /*0x7ce3f8*/
              if ( *v5 == 54 && v5[1] == 52 ) /*0x7ce431*/
              {
                IDA_BYTE1(v56) |= 0x80u; /*0x7ce435*/
                v57 = v5 + 2; /*0x7ce439*/
              }
              else
              {
                v46 = 0; /*0x7ce441*/
  $NORMAL_STATE$1535: /*0x7ce444*/
                v49 = 0; /*0x7ce444*/
                if ( *((char *)off_87C590 + 2 * (uint8_t)v4 + 1) < 0 ) /*0x7ce455*/
                {
                  write_char(v4, File, &v52[1]); /*0x7ce462*/
                  v4 = *v5; /*0x7ce467*/
                  v57 = v5 + 1; /*0x7ce46d*/
                }
                write_char(v4, File, &v52[1]); /*0x7ce47b*/
              }
              break;
            case 'h': /*0x7ce3f8*/
              v56 |= 0x20u; /*0x7ce41f*/
              break;
            case 'l': /*0x7ce3f8*/
              v56 |= 0x10u; /*0x7ce416*/
              break;
            case 'w': /*0x7ce3f8*/
              IDA_BYTE1(v56) |= 8u; /*0x7ce40d*/
              break;
          }
          goto LABEL_171; /*0x7ce411*/
        case 7: /*0x7ce313*/
          if ( v4 > 103 ) /*0x7ce48e*/
          {
            switch ( v4 ) /*0x7ce6b3*/
            {
              case 'i': /*0x7ce6b3*/
                goto LABEL_114; /*0x7ce6b3*/
              case 'n': /*0x7ce6b3*/
                v23 = (unsigned short *)get_int_arg(&a3); /*0x7ce764*/
                if ( (v56 & 0x20) != 0 ) /*0x7ce76e*/
                  *v23 = v52[1]; /*0x7ce774*/
                else
                  *(unsigned int *)v23 = *(unsigned int *)&v52[1]; /*0x7ce77c*/
                v48 = 1; /*0x7ce77e*/
                goto LABEL_171; /*0x7ce785*/
              case 'o': /*0x7ce6b3*/
                v54 = 8; /*0x7ce751*/
                if ( (v56 & 0x80u) != 0 ) /*0x7ce758*/
                  IDA_BYTE1(v56) |= 2u; /*0x7ce75a*/
                break;
              default:
                switch ( v4 ) /*0x7ce6ca*/
                {
                  case 'p': /*0x7ce6ca*/
                    v53 = 8; /*0x7ce71d*/
  LABEL_105:
                    v47 = 7; /*0x7ce724*/
                    break;
                  case 's': /*0x7ce6ca*/
                    goto LABEL_55; /*0x7ce6cf*/
                  case 'u': /*0x7ce6ca*/
                    goto LABEL_115; /*0x7ce6d7*/
                  case 'x': /*0x7ce6ca*/
                    v47 = 39; /*0x7ce6e6*/
                    break;
                  default:
                    goto LABEL_148; /*0x7ce6e0*/
                }
                v54 = 16; /*0x7ce72f*/
                if ( (v56 & 0x80u) != 0 ) /*0x7ce736*/
                {
                  IDA_LOBYTE(v52[0]) = 48; /*0x7ce73b*/
                  v51 = 2; /*0x7ce741*/
                  IDA_HIBYTE(v52[0]) = v47 + 81; /*0x7ce748*/
                }
                break;
            }
  LABEL_116:
            if ( (v56 & 0x8000) == 0 ) /*0x7ce799*/
            {
              if ( (v56 & 0x20) != 0 ) /*0x7ce7ab*/
              {
                if ( (v56 & 0x40) != 0 ) /*0x7ce7b5*/
                  IDA_LODWORD(v24) = (int16_t)get_int_arg(&a3); /*0x7ce7bd*/
                else
                  IDA_LODWORD(v24) = (uint16_t)get_int_arg(&a3); /*0x7ce7c9*/
              }
              else
              {
                if ( (v56 & 0x40) == 0 ) /*0x7ce7d6*/
                {
                  v24 = (unsigned int)get_int_arg(&a3); /*0x7ce7e0*/
                  goto LABEL_126; /*0x7ce7e0*/
                }
                IDA_LODWORD(v24) = get_int_arg(&a3); /*0x7ce7d8*/
              }
              v24 = (int)v24; /*0x7ce7c0*/
            }
            else
            {
              IDA_LODWORD(v24) = get_int64_arg(&a3); /*0x7ce79f*/
            }
  LABEL_126:
            if ( (v56 & 0x40) != 0 && v24 < 0 ) /*0x7ce7f0*/
            {
              IDA_HIDWORD(v25) = -(int)v24; /*0x7ce7fd*/
              IDA_BYTE1(v56) |= 1u; /*0x7ce801*/
              IDA_LODWORD(v25) = (uint64_t)-v24 >> 32; /*0x7ce805*/
            }
            else
            {
              v25 = IDA___PAIR64__(v24, IDA_HIDWORD(v24)); /*0x7ce80b*/
            }
            if ( (v56 & 0x8000) == 0 ) /*0x7ce811*/
              IDA_LODWORD(v25) = 0; /*0x7ce813*/
            if ( v53 >= 0 ) /*0x7ce81a*/
              v56 &= ~8u; /*0x7ce825*/
            else
              v53 = 1; /*0x7ce81c*/
            if ( !v25 ) /*0x7ce82d*/
              v51 = 0; /*0x7ce82f*/
            p_MbCh = (int)&v40; /*0x7ce836*/
            while ( 1 ) /*0x7ce839*/
            {
              v26 = v53--; /*0x7ce839*/
              if ( v26 <= 0 && !v25 ) /*0x7ce847*/
                break; /*0x7ce847*/
              v43 = v54; /*0x7ce851*/
              v27 = IDA___PAIR64__(v25, IDA_HIDWORD(v25)) % v54 + 48; /*0x7ce861*/
              v28 = IDA___PAIR64__(v25, IDA_HIDWORD(v25)) / v54; /*0x7ce873*/
              v25 = IDA___PAIR64__(v28, IDA_HIDWORD(v28)); /*0x7ce873*/
              if ( v27 > 57 ) /*0x7ce875*/
                IDA_LOBYTE(v27) = v47 + v27; /*0x7ce877*/
              v29 = (unsigned char *)p_MbCh--; /*0x7ce87a*/
              *v29 = v27; /*0x7ce880*/
            }
            v30 = &v40 - p_MbCh++; /*0x7ce887*/
            v54 = (int)v30; /*0x7ce891*/
            if ( (v56 & 0x200) != 0 && (*(unsigned char *)p_MbCh != 48 || !v30) ) /*0x7ce8a0*/
            {
              --p_MbCh; /*0x7ce8a2*/
              v20 = (int)(v30 + 1); /*0x7ce8a5*/
              *(unsigned char *)p_MbCh = 48; /*0x7ce8a9*/
              goto LABEL_147; /*0x7ce8a9*/
            }
            goto LABEL_148; /*0x7ce8a0*/
          }
          if ( v4 >= 101 ) /*0x7ce497*/
            goto LABEL_65; /*0x7ce497*/
          if ( v4 > 88 ) /*0x7ce4a0*/
          {
            if ( v4 == 90 ) /*0x7ce594*/
            {
              v17 = (int16_t *)get_int_arg(&a3); /*0x7ce5cc*/
              if ( v17 && (v18 = *((unsigned int *)v17 + 1)) != 0 ) /*0x7ce5db*/
              {
                if ( (v56 & 0x800) != 0 ) /*0x7ce5e1*/
                {
                  v19 = (unsigned int)*v17 >> 1; /*0x7ce5e6*/
                  p_MbCh = v18; /*0x7ce5e8*/
                  v54 = v19; /*0x7ce5eb*/
                  v49 = 1; /*0x7ce5ee*/
                  goto LABEL_148; /*0x7ce5f5*/
                }
                v49 = 0; /*0x7ce5fa*/
                p_MbCh = v18; /*0x7ce5fe*/
                v20 = *v17; /*0x7ce601*/
              }
              else
              {
                p_MbCh = (int)off_87C4C8; /*0x7ce60e*/
                v20 = strlen(off_87C4C8); /*0x7ce6a5*/
              }
              goto LABEL_147; /*0x7ce604*/
            }
            if ( v4 == 99 ) /*0x7ce599*/
              goto LABEL_69; /*0x7ce599*/
            if ( v4 != 100 ) /*0x7ce59c*/
              goto LABEL_148; /*0x7ce59c*/
  LABEL_114:
            v56 |= 0x40u; /*0x7ce78a*/
  LABEL_115:
            v54 = 10; /*0x7ce78e*/
            goto LABEL_116; /*0x7ce78e*/
          }
          switch ( v4 ) /*0x7ce4a6*/
          {
            case 'X': /*0x7ce4a6*/
              goto LABEL_105; /*0x7ce4a6*/
            case 'C': /*0x7ce4a6*/
              if ( (v56 & 0x830) == 0 ) /*0x7ce55a*/
                IDA_BYTE1(v56) |= 8u; /*0x7ce55c*/
  LABEL_69:
              if ( (v56 & 0x810) != 0 ) /*0x7ce56a*/
              {
                short_arg = get_short_arg(&a3); /*0x7ce56c*/
                v54 = wctomb(&MbCh, short_arg); /*0x7ce581*/
                if ( v54 < 0 ) /*0x7ce586*/
                  v48 = 1; /*0x7ce588*/
              }
              else
              {
                MbCh = get_int_arg(&a3); /*0x7ce5ad*/
                v54 = 1; /*0x7ce5b3*/
              }
              p_MbCh = (int)&MbCh; /*0x7ce5c0*/
              break; /*0x7ce5c3*/
            case 'E': /*0x7ce4a6*/
            case 'G': /*0x7ce4a6*/
              v45 = 1; /*0x7ce529*/
              v4 += 32; /*0x7ce530*/
  LABEL_65:
              v56 |= 0x40u; /*0x7ce533*/
              p_MbCh = (int)&MbCh; /*0x7ce53f*/
              if ( v7 >= 0 ) /*0x7ce542*/
              {
                if ( !v7 && v4 == 103 ) /*0x7ce61c*/
                  v53 = 1; /*0x7ce61e*/
              }
              else
              {
                v53 = 6; /*0x7ce548*/
              }
              a3 += 8; /*0x7ce62e*/
              v41 = *(unsigned int *)(a3 - 8); /*0x7ce637*/
              v42 = *(unsigned int *)(a3 - 4); /*0x7ce63d*/
              off_87C4D0[0](); /*0x7ce64f*/
            case 'S': /*0x7ce4a6*/
              if ( (v56 & 0x830) == 0 ) /*0x7ce4cc*/
                IDA_BYTE1(v56) |= 8u; /*0x7ce4ce*/
  LABEL_55:
              v11 = v53; /*0x7ce4d2*/
              if ( v53 == -1 ) /*0x7ce4d8*/
                v11 = 0x7FFFFFFF; /*0x7ce4da*/
              v12 = get_int_arg(&a3); /*0x7ce4e3*/
              v13 = (char *)v12; /*0x7ce4ef*/
              p_MbCh = v12; /*0x7ce4f1*/
              if ( (v56 & 0x810) != 0 ) /*0x7ce4f4*/
              {
                if ( !v12 ) /*0x7ce4fc*/
                {
                  v13 = (char *)off_87C4CC; /*0x7ce4fe*/
                  p_MbCh = (int)off_87C4CC; /*0x7ce504*/
                }
                v49 = 1; /*0x7ce507*/
                for ( i = v13; ; i += 2 ) /*0x7ce50e*/
                {
                  v15 = v11--; /*0x7ce510*/
                  if ( !v15 || !*(unsigned short *)i ) /*0x7ce51b*/
                    break; /*0x7ce51b*/
                }
                v20 = (i - v13) >> 1; /*0x7ce6f1*/
              }
              else
              {
                if ( !v12 ) /*0x7ce6fa*/
                {
                  v13 = off_87C4C8; /*0x7ce6fc*/
                  p_MbCh = (int)off_87C4C8; /*0x7ce702*/
                }
                for ( j = v13; ; ++j ) /*0x7ce705*/
                {
                  v22 = v11--; /*0x7ce707*/
                  if ( !v22 || !*j ) /*0x7ce70e*/
                    break; /*0x7ce70e*/
                }
                v20 = j - v13; /*0x7ce716*/
              }
  LABEL_147:
              v54 = v20; /*0x7ce8ac*/
              break;
          }
  LABEL_148:
          if ( v48 ) /*0x7ce8b3*/
            goto LABEL_171; /*0x7ce8b3*/
          v31 = v56; /*0x7ce8b9*/
          if ( (v56 & 0x40) == 0 ) /*0x7ce8bf*/
            goto LABEL_157; /*0x7ce8bf*/
          if ( (v56 & 0x100) != 0 ) /*0x7ce8c4*/
          {
            IDA_LOBYTE(v52[0]) = 45; /*0x7ce8c6*/
  LABEL_156:
            v51 = 1; /*0x7ce8e0*/
            goto LABEL_157; /*0x7ce8e0*/
          }
          if ( (v56 & 1) != 0 ) /*0x7ce8cf*/
          {
            IDA_LOBYTE(v52[0]) = 43; /*0x7ce8d1*/
            goto LABEL_156; /*0x7ce8d5*/
          }
          if ( (v56 & 2) != 0 ) /*0x7ce8da*/
          {
            IDA_LOBYTE(v52[0]) = 32; /*0x7ce8dc*/
            goto LABEL_156; /*0x7ce8dc*/
          }
  LABEL_157:
          v32 = v50 - v51 - v54; /*0x7ce8e7*/
          if ( (v56 & 0xC) == 0 ) /*0x7ce8f3*/
            write_multi_char(32, v50 - v51 - v54, File, (int)&v52[1]); /*0x7ce8ff*/
          write_string((int)v52, v51, File, (int)&v52[1]); /*0x7ce915*/
          if ( (v31 & 8) != 0 && (v31 & 4) == 0 ) /*0x7ce925*/
            write_multi_char(48, v32, File, (int)&v52[1]); /*0x7ce931*/
          if ( v49 && v54 > 0 ) /*0x7ce943*/
          {
            v33 = (wchar_t *)p_MbCh; /*0x7ce948*/
            v34 = v54 - 1; /*0x7ce94b*/
            do /*0x7ce97c*/
            {
              v35 = *v33++; /*0x7ce94e*/
              v36 = wctomb(v44, v35); /*0x7ce958*/
              if ( v36 <= 0 ) /*0x7ce961*/
                break; /*0x7ce961*/
              write_string((int)v44, v36, File, (int)&v52[1]); /*0x7ce96f*/
            }
            while ( v34-- ); /*0x7ce97c*/
          }
          else
          {
            write_string(p_MbCh, v54, File, (int)&v52[1]); /*0x7ce98d*/
          }
          if ( (v56 & 4) != 0 ) /*0x7ce999*/
            write_multi_char(32, v32, File, (int)&v52[1]); /*0x7ce9a5*/
  LABEL_171:
          v4 = *v57; /*0x7ce9ad*/
          v5 = v57 + 1; /*0x7ce9b2*/
          v6 = *v57++ == 0; /*0x7ce9b3*/
          if ( v6 ) /*0x7ce9b8*/
            return *(unsigned int *)&v52[1]; /*0x7ce9b8*/
          v7 = v53; /*0x7ce2d1*/
          v3 = v46; /*0x7ce2d4*/
          break; /*0x7ce2d4*/
        default:
          goto LABEL_171;
      }
    }
  }
  return *(unsigned int *)&v52[1]; /*0x7ce9c1*/
}
}
// 0x7CEB28
namespace gamemd {
void _forcdecpt(char * a1)
{
  ObjectClass *v1; // esi
  int v2; // eax
  char result; // al
  char *v4; // esi
  char v5; // cl

  v1 = a1; /*0x7ceb29*/
  if ( tolower(IDA_SLOBYTE(a1->AbstractClass)) != 101 ) /*0x7ceb3a*/
  {
    do /*0x7ceb66*/
    {
      v1 = (ObjectClass *)((char *)v1 + 1); /*0x7ceb3c*/
      if ( (int)SrcSizeInBytes <= 1 ) /*0x7ceb44*/
        v2 = *((unsigned char *)off_87C590 + 2 * IDA_SLOBYTE(v1->AbstractClass)) & 4; /*0x7ceb61*/
      else
        v2 = _isctype(IDA_SLOBYTE(v1->AbstractClass), 4); /*0x7ceb4c*/
    }
    while ( v2 ); /*0x7ceb66*/
  }
  result = (char)v1->AbstractClass; /*0x7ceb6e*/
  IDA_LOBYTE(v1->AbstractClass) = SrcCh[0]; /*0x7ceb70*/
  v4 = (char *)&v1->AbstractClass + 1; /*0x7ceb72*/
  do /*0x7ceb7e*/
  {
    v5 = *v4; /*0x7ceb73*/
    *v4 = result; /*0x7ceb75*/
    result = v5; /*0x7ceb77*/
  }
  while ( *v4++ ); /*0x7ceb7e*/
  return result; /*0x7ceb80*/
}
}
// 0x7CED9E
namespace gamemd {
void * _cftof2(char * Src, int Size, unsigned int * a3, char a4)
{
  int v4; // eax
  char *v5; // eax
  char *v6; // edi
  int v7; // eax
  char *v8; // edi
  int v9; // esi
  char *v10; // edi
  int v11; // esi

  v4 = a3[1] - 1; /*0x7cedad*/
  if ( a4 && v4 == Size ) /*0x7cedb7*/
  {
    v5 = &Src[v4 + (*a3 == 45)]; /*0x7cedc5*/
    *v5 = 48; /*0x7cedc7*/
    v5[1] = 0; /*0x7cedca*/
  }
  v6 = Src; /*0x7cedd1*/
  if ( *a3 == 45 ) /*0x7cedd3*/
  {
    *Src = 45; /*0x7cedd5*/
    v6 = Src + 1; /*0x7cedd8*/
  }
  v7 = a3[1]; /*0x7ceddb*/
  if ( v7 > 0 ) /*0x7cede0*/
  {
    v8 = &v6[v7]; /*0x7cedf2*/
  }
  else
  {
    _shift(v6, 1); /*0x7cede5*/
    *v6 = 48; /*0x7cedeb*/
    v8 = v6 + 1; /*0x7cedef*/
  }
  if ( Size > 0 ) /*0x7cedf8*/
  {
    _shift(v8, 1); /*0x7cedfd*/
    *v8 = SrcCh; /*0x7cee08*/
    v9 = a3[1]; /*0x7cee0a*/
    v10 = v8 + 1; /*0x7cee0d*/
    if ( v9 < 0 ) /*0x7cee11*/
    {
      if ( a4 ) /*0x7cee17*/
      {
        v11 = -v9; /*0x7cee19*/
      }
      else
      {
        v11 = -v9; /*0x7cee1d*/
        if ( Size < v11 ) /*0x7cee22*/
        {
  LABEL_15:
          _shift(v10, Size); /*0x7cee27*/
          memset(v10, 48, Size); /*0x7cee36*/
          return Src; /*0x7cee36*/
        }
      }
      Size = v11; /*0x7cee24*/
      goto LABEL_15; /*0x7cee24*/
    }
  }
  return Src; /*0x7cee3e*/
}
}
// 0x7CF0AE
namespace gamemd {
void* __ffexpm1()
{
  bool v2; // c0
  char v3; // c2
  bool v4; // c3
  double v5; // st6
  int16_t v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int16_t v10; // fps
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  int16_t v16; // fps
  long double v17; // st6
  bool v18; // c0
  char v19; // c2
  bool v20; // c3

  v5 = fabs(a2); /*0x7cf0b0*/
  v7 = *(double *)&tbyte_87C50E < v5; /*0x7cf0b8*/
  v8 = 0; /*0x7cf0b8*/
  v9 = *(double *)&tbyte_87C50E == v5; /*0x7cf0b8*/
  *(unsigned short *)(a1 - 160) = v6; /*0x7cf0ba*/
  if ( (*(unsigned char *)(a1 - 159) & 0x41) != 0 ) /*0x7cf0c9*/
  {
    v2 = a2 < 0.0; /*0x7cf061*/
    v3 = 0; /*0x7cf061*/
    v4 = a2 == 0.0; /*0x7cf061*/
    *(unsigned short *)(a1 - 160) = v6; /*0x7cf063*/
    if ( (*(unsigned char *)(a1 - 159) & 1) != 0 ) /*0x7cf072*/
    {
      *(unsigned char *)(a1 - 144) = 4; /*0x7cf083*/
      JUMPOUT(0x7CF266); /*0x7cf266*/
    }
    expbigret(); /*0x7cf07e*/
  }
  else
  {
    _ST6 = a2; /*0x7cf0cb*/
    __asm { frndint } /*0x7cf0cd*/
    v13 = _ST6 < 0.0; /*0x7cf0cf*/
    v14 = 0; /*0x7cf0cf*/
    v15 = _ST6 == 0.0; /*0x7cf0cf*/
    *(unsigned short *)(a1 - 160) = v10; /*0x7cf0d1*/
    v17 = a2 - _ST6; /*0x7cf0e1*/
    v18 = v17 < 0.0; /*0x7cf0e3*/
    v19 = 0; /*0x7cf0e3*/
    v20 = v17 == 0.0; /*0x7cf0e3*/
    *(unsigned short *)(a1 - 160) = v16; /*0x7cf0e5*/
  }
}
}
// 0x7CF0F1
namespace gamemd {
void* _isintTOS()
{
  _ST6 = a1; /*0x7cf0f1*/
  __asm { frndint } /*0x7cf0f3*/
  if ( _ST6 != a1 ) /*0x7cf0fb*/
    return notanint(); /*0x7cf0fb*/
  _ST5 = a1 * dbl_87C522; /*0x7cf105*/
  __asm { frndint } /*0x7cf107*/
  if ( _ST5 == a1 * dbl_87C522 ) /*0x7cf10f*/
    return evenint(); /*0x7cf10f*/
  else
    return isintTOSret(); /*0x7cf112*/
}
}
// 0x7CF125
namespace gamemd {
void* _usepowhlp()
{
  int v4; // eax
  double result; // st7
  double *v6; // [esp+10h] [ebp-7Ch]
  double v7[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v7; /*0x7cf129*/
  v6 = v7; /*0x7cf12b*/
  __asm { fsave byte ptr [esi+8] } /*0x7cf138*/
  v4 = _powhlp(a3, a2, (int)v7); /*0x7cf13c*/
  __asm { frstor byte ptr [esi+8] } /*0x7cf144*/
  result = v7[0]; /*0x7cf147*/
  if ( v4 ) /*0x7cf14f*/
    *(unsigned char *)(a1 - 144) = 1; /*0x7cf319*/
  return result; /*0x7cf149*/
}
}
// 0x7CF390
namespace gamemd {
void* __twoToTOS()
{
  _ST6 = a1; /*0x7cf390*/
  __asm { frndint } /*0x7cf392*/
  return __FSCALE__(__F2XM1__(-(_ST6 - a1)) + 1.0, _ST6); /*0x7cf3a4*/
}
}
// 0x7CF479
namespace gamemd {
void* __check_range_exit()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd
}

// 0x7CF51C
namespace gamemd {
void* _powhlp(double a1, double a2, double * a3)
{
  double v4; // st7
  int v5; // esi
  char v6; // c0
  double v7; // st7
  int v8; // ecx

  v4 = a1; /*0x7cf52a*/
  v5 = 0; /*0x7cf530*/
  if ( v6 ) /*0x7cf535*/
    v4 = -a1; /*0x7cf537*/
  if ( IDA_HIDWORD(a2) != 2146435072 ) /*0x7cf549*/
  {
    if ( a2 == -INFINITY ) /*0x7cf582*/
    {
      if ( v4 > 1.0 ) /*0x7cf595*/
        goto LABEL_17; /*0x7cf595*/
      if ( v4 >= 1.0 ) /*0x7cf5a3*/
        goto LABEL_7; /*0x7cf5a3*/
  LABEL_15:
      v7 = dbl_87D550; /*0x7cf5c3*/
  LABEL_28:
      *a3 = v7; /*0x7cf642*/
      return v5; /*0x7cf645*/
    }
  LABEL_12:
    if ( IDA_HIDWORD(a1) == 2146435072 ) /*0x7cf5aa*/
    {
      if ( IDA_LODWORD(a1) ) /*0x7cf5af*/
        return v5; /*0x7cf5af*/
      if ( a2 > 0.0 ) /*0x7cf5c1*/
        goto LABEL_15; /*0x7cf5c1*/
      if ( a2 < 0.0 ) /*0x7cf5d7*/
        goto LABEL_17; /*0x7cf5d7*/
    }
    else
    {
      if ( a1 != -INFINITY ) /*0x7cf5e0*/
        return v5; /*0x7cf5e0*/
      v8 = _d_inttype(a2); /*0x7cf5ff*/
      if ( a2 > 0.0 ) /*0x7cf604*/
      {
        v7 = dbl_87D550; /*0x7cf606*/
        if ( v8 == 1 ) /*0x7cf60f*/
          v7 = -dbl_87D550; /*0x7cf611*/
        goto LABEL_28; /*0x7cf611*/
      }
      if ( a2 < 0.0 ) /*0x7cf627*/
      {
        if ( v8 == 1 ) /*0x7cf62c*/
          v7 = dbl_87D570; /*0x7cf62e*/
        else
          v7 = 0.0; /*0x7cf636*/
        goto LABEL_28; /*0x7cf634*/
      }
    }
    v7 = 1.0; /*0x7cf640*/
    goto LABEL_28; /*0x7cf640*/
  }
  if ( IDA_LODWORD(a2) ) /*0x7cf54e*/
    goto LABEL_12; /*0x7cf54e*/
  if ( v4 > 1.0 ) /*0x7cf55c*/
    goto LABEL_15; /*0x7cf55c*/
  if ( v4 < 1.0 ) /*0x7cf56a*/
  {
  LABEL_17:
    v7 = 0.0; /*0x7cf5d9*/
    goto LABEL_28; /*0x7cf5db*/
  }
  LABEL_7:
  v5 = 1; /*0x7cf56c*/
  *a3 = dbl_87D558; /*0x7cf578*/
  return v5; /*0x7cf64a*/
}
}
// 0x7CF6B1
namespace gamemd {
void _heap_init(int a1)
{
  hHeap = HeapCreate(a1 == 0, 0x1000u, 0); /*0x7cf6ca*/
  if ( !hHeap ) /*0x7cf6cf*/
    return 0; /*0x7cf6cf*/
  if ( !__sbh_heap_init() ) /*0x7cf6d1*/
  {
    HeapDestroy(hHeap); /*0x7cf6e0*/
    return 0; /*0x7cf6e8*/
  }
  return 1; /*0x7cf6e8*/
}
}
// 0x7CF6ED
namespace gamemd {
void* _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi

  v0 = 0; /*0x7cf6ee*/
  if ( dword_B78B94 > 0 ) /*0x7cf6fd*/
  {
    v1 = (LPVOID *)((char *)lp + 12); /*0x7cf70c*/
    do /*0x7cf73f*/
    {
      VirtualFree(*v1, 0x100000u, 0x4000u); /*0x7cf71b*/
      VirtualFree(*v1, 0, 0x8000u); /*0x7cf726*/
      HeapFree(hHeap, 0, v1[1]); /*0x7cf733*/
      v1 += 5; /*0x7cf735*/
      ++v0; /*0x7cf738*/
    }
    while ( v0 < dword_B78B94 ); /*0x7cf73f*/
  }
  HeapFree(hHeap, 0, lp); /*0x7cf751*/
  return HeapDestroy(hHeap); /*0x7cf75f*/
}
}
// 0x7CF77F
namespace gamemd {
int __sbh_heap_init()
{
  int result; // eax

  result = (int)HeapAlloc(hHeap, 0, 0x140u); /*0x7cf78c*/
  lp = (LPVOID)result; /*0x7cf794*/
  if ( result ) /*0x7cf799*/
  {
    dword_B78B90 = 0; /*0x7cf79c*/
    dword_B78B94 = 0; /*0x7cf7a3*/
    dword_B78B8C = result; /*0x7cf7ac*/
    dword_B78B84 = 16; /*0x7cf7b1*/
    return 1; /*0x7cf7bb*/
  }
  return result; /*0x7cf79b*/
}
}
// 0x7CF7BD
namespace gamemd {
void * __sbh_find_block(INIClass * aP0)
{
  char *result; // eax

  for ( result = (char *)lp; result < (char *)lp + 20 * dword_B78B94; result += 20 ) /*0x7cf7c5*/
  {
    if ( (unsigned int)(aP0 - *((unsigned int *)result + 3)) < 0x100000 ) /*0x7cf7de*/
      return result; /*0x7cf7de*/
  }
  return 0; /*0x7cf7e7*/
}
}
// 0x7CF7E8
namespace gamemd {
unsigned int * __sbh_free_block(AbstractClass * aP0, INIClass * aP1)
{
  int uniqueId; // eax
  int *v3; // edx
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // ecx
  unsigned char *v7; // ecx
  unsigned int v8; // edi
  bool v9; // zf
  unsigned char *v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned char *v16; // ecx
  unsigned int v17; // edx
  unsigned char *v18; // ecx
  unsigned int v19; // edx
  unsigned int *v20; // ecx
  unsigned int *result; // eax
  LPVOID *v22; // eax
  unsigned int *v23; // [esp+10h] [ebp-10h]
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]
  int *v26; // [esp+18h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp-4h]
  char v28; // [esp+2Fh] [ebp+Fh]

  uniqueId = aP0->?; /*0x7cf7f6*/
  v3 = (int *)(aP1 - 4); /*0x7cf801*/
  v4 = (aP1 - (unsigned int)aP0->?) >> 15; /*0x7cf805*/
  v5 = *(unsigned int *)(aP1 - 4) - 1; /*0x7cf813*/
  v27 = *(unsigned int *)(aP1 - 8); /*0x7cf814*/
  v24 = v5; /*0x7cf81e*/
  v23 = (unsigned int *)(516 * v4 + uniqueId + 324); /*0x7cf821*/
  v6 = *(unsigned int *)(v5 + aP1 - 4); /*0x7cf824*/
  v25 = v6; /*0x7cf82a*/
  if ( (v6 & 1) == 0 ) /*0x7cf82d*/
  {
    aP1 = (v6 >> 4) - 1; /*0x7cf836*/
    if ( aP1 > 0x3F ) /*0x7cf83b*/
      aP1 = 63; /*0x7cf83d*/
    if ( *(int *)((char *)v3 + v5 + 4) == *(int *)((char *)v3 + v5 + 8) ) /*0x7cf848*/
    {
      if ( aP1 >= 0x20 ) /*0x7cf850*/
      {
        v10 = (unsigned char *)(aP1 + uniqueId + 4); /*0x7cf87b*/
        v11 = ~(0x80000000 >> (aP1 - 32)); /*0x7cf87f*/
        *(unsigned int *)(uniqueId + 4 * v4 + 196) &= v11; /*0x7cf881*/
        v9 = (*v10)-- == 1; /*0x7cf888*/
        if ( v9 ) /*0x7cf88a*/
          aP0->? = (void *)((int)aP0->? & v11); /*0x7cf88f*/
      }
      else
      {
        v7 = (unsigned char *)(aP1 + uniqueId + 4); /*0x7cf859*/
        v8 = ~(0x80000000 >> aP1); /*0x7cf85d*/
        *(unsigned int *)(uniqueId + 4 * v4 + 68) &= v8; /*0x7cf85f*/
        v9 = (*v7)-- == 1; /*0x7cf863*/
        if ( v9 ) /*0x7cf865*/
          aP0->AbstractClass = (void *)((int)aP0->AbstractClass & v8); /*0x7cf86a*/
      }
    }
    *(unsigned int *)(*(int *)((char *)v3 + v5 + 8) + 4) = *(int *)((char *)v3 + v5 + 4); /*0x7cf89a*/
    v12 = *(int *)((char *)v3 + v5 + 4); /*0x7cf89d*/
    v13 = *(int *)((char *)v3 + v5 + 8); /*0x7cf8a1*/
    v5 += v25; /*0x7cf8a5*/
    *(unsigned int *)(v12 + 8) = v13; /*0x7cf8a8*/
    v24 = v5; /*0x7cf8ab*/
  }
  v14 = (v5 >> 4) - 1; /*0x7cf8b3*/
  if ( v14 > 0x3F ) /*0x7cf8b7*/
    v14 = 63; /*0x7cf8bb*/
  if ( (v27 & 1) == 0 ) /*0x7cf8c5*/
  {
    v26 = (int *)((char *)v3 - v27); /*0x7cf8d6*/
    v15 = (v27 >> 4) - 1; /*0x7cf8d9*/
    aP1 = v15; /*0x7cf8dd*/
    if ( v15 > 0x3F ) /*0x7cf8e0*/
    {
      aP1 = 63; /*0x7cf8e2*/
      v15 = 63; /*0x7cf8e5*/
    }
    v5 += v27; /*0x7cf8e7*/
    v24 = v5; /*0x7cf8ec*/
    v14 = (v5 >> 4) - 1; /*0x7cf8f2*/
    if ( v14 > 0x3F ) /*0x7cf8f5*/
      v14 = 63; /*0x7cf8f7*/
    if ( v15 != v14 ) /*0x7cf8fb*/
    {
      if ( v26[1] == v26[2] ) /*0x7cf906*/
      {
        if ( aP1 >= 0x20 ) /*0x7cf90e*/
        {
          v18 = (unsigned char *)(aP1 + uniqueId + 4); /*0x7cf939*/
          v19 = ~(0x80000000 >> (aP1 - 32)); /*0x7cf93d*/
          *(unsigned int *)(uniqueId + 4 * v4 + 196) &= v19; /*0x7cf93f*/
          v9 = (*v18)-- == 1; /*0x7cf946*/
          if ( v9 ) /*0x7cf948*/
            aP0->? = (void *)((int)aP0->? & v19); /*0x7cf94d*/
        }
        else
        {
          v16 = (unsigned char *)(aP1 + uniqueId + 4); /*0x7cf917*/
          v17 = ~(0x80000000 >> aP1); /*0x7cf91b*/
          *(unsigned int *)(uniqueId + 4 * v4 + 68) &= v17; /*0x7cf91d*/
          v9 = (*v16)-- == 1; /*0x7cf921*/
          if ( v9 ) /*0x7cf923*/
            aP0->AbstractClass = (void *)((int)aP0->AbstractClass & v17); /*0x7cf928*/
        }
      }
      *(unsigned int *)(v26[2] + 4) = v26[1]; /*0x7cf959*/
      *(unsigned int *)(v26[1] + 8) = v26[2]; /*0x7cf965*/
    }
    v3 = v26; /*0x7cf968*/
  }
  if ( (v27 & 1) != 0 || aP1 != v14 ) /*0x7cf974*/
  {
    v3[1] = v23[2 * v14 + 1]; /*0x7cf983*/
    v20 = &v23[2 * v14]; /*0x7cf989*/
    v3[2] = (int)v20; /*0x7cf98c*/
    v20[1] = v3; /*0x7cf98f*/
    *(unsigned int *)(v3[1] + 8) = v3; /*0x7cf995*/
    if ( v3[1] == v3[2] ) /*0x7cf99e*/
    {
      v28 = *(unsigned char *)(v14 + uniqueId + 4); /*0x7cf9a7*/
      *(unsigned char *)(v14 + uniqueId + 4) = v28 + 1; /*0x7cf9ac*/
      if ( v14 >= 0x20 ) /*0x7cf9b0*/
      {
        if ( !v28 ) /*0x7cf9db*/
          aP0->? = (void *)((int)aP0->? | (0x80000000 >> (v14 - 32))); /*0x7cf9ea*/
        *(unsigned int *)(uniqueId + 4 * v4 + 196) |= 0x80000000 >> (v14 - 32); /*0x7cf9fe*/
      }
      else
      {
        if ( !v28 ) /*0x7cf9b6*/
          aP0->AbstractClass = (void *)((int)aP0->AbstractClass | (0x80000000 >> v14)); /*0x7cf9c4*/
        *(unsigned int *)(uniqueId + 4 * v4 + 68) |= 0x80000000 >> v14; /*0x7cf9d3*/
      }
      v5 = v24; /*0x7cfa00*/
    }
  }
  result = (unsigned int *)(516 * v4 + uniqueId + 324); /*0x7cfa03*/
  *v3 = v5; /*0x7cfa06*/
  *(int *)((char *)v3 + v5 - 4) = v5; /*0x7cfa08*/
  v9 = (*v23)-- == 1; /*0x7cfa0c*/
  if ( v9 ) /*0x7cfa0e*/
  {
    if ( !dword_B78B90 ) /*0x7cfa1b*/
      goto LABEL_46; /*0x7cfa1b*/
    VirtualFree((LPVOID)(*((unsigned int *)dword_B78B90 + 3) + (dword_B78B88 << 15)), 0x8000u, 0x4000u); /*0x7cfa3f*/
    *((unsigned int *)dword_B78B90 + 2) |= 0x80000000 >> dword_B78B88; /*0x7cfa53*/
    *(unsigned int *)(*((unsigned int *)dword_B78B90 + 4) + 4 * dword_B78B88 + 196) = 0; /*0x7cfa64*/
    --*(unsigned char *)(*((unsigned int *)dword_B78B90 + 4) + 67); /*0x7cfa74*/
    v22 = (LPVOID *)dword_B78B90; /*0x7cfa77*/
    if ( !*(unsigned char *)(*((unsigned int *)dword_B78B90 + 4) + 67) ) /*0x7cfa7f*/
    {
      *((unsigned int *)dword_B78B90 + 1) &= ~1u; /*0x7cfa85*/
      v22 = (LPVOID *)dword_B78B90; /*0x7cfa89*/
    }
    if ( v22[2] == (LPVOID)-1 ) /*0x7cfa92*/
    {
      VirtualFree(v22[3], 0, 0x8000u); /*0x7cfa9a*/
      HeapFree(hHeap, 0, *((LPVOID *)dword_B78B90 + 4)); /*0x7cfaac*/
      memcpy(dword_B78B90, (char *)dword_B78B90 + 20, (size_t)lp + 20 * dword_B78B94 - (unsigned int)dword_B78B90 - 20); /*0x7cfad6*/
      result = &aP0->AbstractClass; /*0x7cfadb*/
      --dword_B78B94; /*0x7cfae1*/
      if ( aP0 > dword_B78B90 ) /*0x7cfaed*/
        result = (unsigned int *)((char *)aP0 - 20); /*0x7cfaef*/
      dword_B78B8C = (int)lp; /*0x7cfaf8*/
    }
    else
    {
  LABEL_46:
      result = &aP0->AbstractClass; /*0x7cfb00*/
    }
    dword_B78B90 = result; /*0x7cfb03*/
    dword_B78B88 = v4; /*0x7cfb08*/
  }
  return result; /*0x7cfb0e*/
}
}
// 0x7CFB13
namespace gamemd {
unsigned int * __sbh_alloc_block(IUnknown * aP0)
{
  int v1; // ecx
  unsigned int v2; // esi
  char *i; // ebx
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  unsigned int *v8; // eax
  int v9; // edx
  unsigned int *v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int *v14; // edx
  int v15; // ecx
  int v16; // esi
  unsigned int v17; // ebx
  unsigned char *v18; // edi
  unsigned int v19; // ebx
  unsigned char *v20; // edi
  int v21; // ebx
  unsigned int *v22; // ecx
  char v23; // cl
  unsigned int *v24; // edx
  ObjectClass *v25; // [esp+0h] [ebp-20h]
  int v26; // [esp+Ch] [ebp-14h]
  int v27; // [esp+Ch] [ebp-14h]
  signed int v28; // [esp+10h] [ebp-10h]
  unsigned int v29; // [esp+14h] [ebp-Ch]
  unsigned int *v30; // [esp+14h] [ebp-Ch]
  unsigned int v31; // [esp+18h] [ebp-8h]
  int v32; // [esp+18h] [ebp-8h]
  char *v33; // [esp+1Ch] [ebp-4h]
  int v34; // [esp+1Ch] [ebp-4h]
  ObjectClass *thisa; // [esp+28h] [ebp+8h]

  v33 = (char *)lp + 20 * dword_B78B94; /*0x7cfb30*/
  v28 = ((unsigned int)&aP0->? + 3) & 0xFFFFFFF0; /*0x7cfb39*/
  v1 = (v28 >> 4) - 1; /*0x7cfb3f*/
  if ( v1 >= 32 ) /*0x7cfb43*/
  {
    v2 = 0; /*0x7cfb59*/
    v29 = 0; /*0x7cfb5d*/
    v31 = 0xFFFFFFFF >> ((v28 >> 4) - 33); /*0x7cfb60*/
  }
  else
  {
    v2 = 0xFFFFFFFF >> v1; /*0x7cfb48*/
    v31 = -1; /*0x7cfb4a*/
    v29 = 0xFFFFFFFF >> v1; /*0x7cfb4e*/
  }
  i = (char *)dword_B78B8C; /*0x7cfb68*/
  thisa = (ObjectClass *)dword_B78B8C; /*0x7cfb6c*/
  if ( dword_B78B8C < (unsigned int)lp + 20 * dword_B78B94 ) /*0x7cfb6f*/
  {
    do /*0x7cfb88*/
    {
      if ( v2 & *(unsigned int *)i | v31 & *((unsigned int *)i + 1) ) /*0x7cfb7b*/
        break; /*0x7cfb7d*/
      i += 20; /*0x7cfb7f*/
      thisa = (ObjectClass *)i; /*0x7cfb85*/
    }
    while ( i < v33 ); /*0x7cfb88*/
  }
  if ( i == v33 ) /*0x7cfb8d*/
  {
    for ( i = (char *)lp; ; i += 20 ) /*0x7cfb8f*/
    {
      v4 = i == (char *)dword_B78B8C; /*0x7cfb91*/
      thisa = (ObjectClass *)i; /*0x7cfb93*/
      if ( (unsigned int)i >= dword_B78B8C ) /*0x7cfb96*/
        break; /*0x7cfb96*/
      if ( v2 & *(unsigned int *)i | v31 & *((unsigned int *)i + 1) ) /*0x7cfba2*/
      {
        v4 = i == (char *)dword_B78B8C; /*0x7cfbab*/
        break; /*0x7cfbab*/
      }
    }
    if ( v4 ) /*0x7cfbad*/
    {
      while ( 1 ) /*0x7cfbaf*/
      {
        v5 = i == v33; /*0x7cfbaf*/
        if ( i >= v33 ) /*0x7cfbb2*/
          break; /*0x7cfbb2*/
        if ( *((unsigned int *)i + 2) ) /*0x7cfbb4*/
        {
          v5 = i == v33; /*0x7cfbc2*/
          break; /*0x7cfbc2*/
        }
        i += 20; /*0x7cfbba*/
        thisa = (ObjectClass *)i; /*0x7cfbbd*/
      }
      if ( v5 ) /*0x7cfbc5*/
      {
        for ( i = (char *)lp; ; i += 20 ) /*0x7cfbc7*/
        {
          v6 = i == (char *)dword_B78B8C; /*0x7cfbc9*/
          thisa = (ObjectClass *)i; /*0x7cfbcb*/
          if ( (unsigned int)i >= dword_B78B8C ) /*0x7cfbce*/
            break; /*0x7cfbce*/
          if ( *((unsigned int *)i + 2) ) /*0x7cfbd0*/
          {
            v6 = i == (char *)dword_B78B8C; /*0x7cfbdb*/
            break; /*0x7cfbdb*/
          }
        }
        if ( v6 ) /*0x7cfbdd*/
        {
          i = __sbh_alloc_new_region(v25); /*0x7cfbe4*/
          thisa = (ObjectClass *)i; /*0x7cfbe8*/
          if ( !i ) /*0x7cfbeb*/
            return 0; /*0x7cfbeb*/
        }
      }
      **((unsigned int **)i + 4) = __sbh_alloc_new_group(i); /*0x7cfbf7*/
      if ( **((unsigned int **)i + 4) == -1 ) /*0x7cfbff*/
        return 0; /*0x7cfc03*/
    }
  }
  dword_B78B8C = (int)i; /*0x7cfc08*/
  v8 = (unsigned int *)*((unsigned int *)i + 4); /*0x7cfc0e*/
  v9 = *v8; /*0x7cfc11*/
  v34 = *v8; /*0x7cfc16*/
  if ( *v8 == -1 || !(v2 & v8[v9 + 17] | v31 & v8[v9 + 49]) ) /*0x7cfc2b*/
  {
    v34 = 0; /*0x7cfc3e*/
    v10 = v8 + 17; /*0x7cfc42*/
    v2 = v29; /*0x7cfc47*/
    if ( !(v29 & v8[17] | v31 & v8[49]) ) /*0x7cfc45*/
    {
      do /*0x7cfc61*/
      {
        v11 = v10[33]; /*0x7cfc4c*/
        ++v34; /*0x7cfc52*/
        ++v10; /*0x7cfc58*/
      }
      while ( !(*v10 & v29 | v31 & v11) ); /*0x7cfc61*/
    }
    v9 = v34; /*0x7cfc63*/
  }
  v12 = 0; /*0x7cfc68*/
  v30 = &v8[129 * v9 + 81]; /*0x7cfc77*/
  v13 = v2 & v8[v9 + 17]; /*0x7cfc7e*/
  if ( !v13 ) /*0x7cfc80*/
  {
    v13 = v31 & v8[v9 + 49]; /*0x7cfc8b*/
    v12 = 32; /*0x7cfc8e*/
  }
  while ( v13 >= 0 ) /*0x7cfc91*/
  {
    v13 *= 2; /*0x7cfc93*/
    ++v12; /*0x7cfc95*/
  }
  v14 = (int *)v30[2 * v12 + 1]; /*0x7cfc9b*/
  v32 = *v14 - v28; /*0x7cfca6*/
  v15 = v32; /*0x7cfca1*/
  v16 = (v32 >> 4) - 1; /*0x7cfcac*/
  if ( v16 > 63 ) /*0x7cfcb0*/
    v16 = 63; /*0x7cfcb4*/
  if ( v16 == v12 ) /*0x7cfcb7*/
    goto LABEL_57; /*0x7cfcb7*/
  if ( v14[1] != v14[2] ) /*0x7cfcc3*/
    goto LABEL_47; /*0x7cfcc3*/
  if ( v12 >= 32 ) /*0x7cfcc8*/
  {
    v19 = 0x80000000 >> (v12 - 32); /*0x7cfcfd*/
    v20 = (char *)v8 + v12 + 4; /*0x7cfd02*/
    v21 = ~v19; /*0x7cfd0d*/
    v8[v34 + 49] &= v21; /*0x7cfd0f*/
    v4 = (*v20)-- == 1; /*0x7cfd11*/
    v27 = v21; /*0x7cfd13*/
    if ( v4 ) /*0x7cfd16*/
    {
      i = (char *)thisa; /*0x7cfd18*/
      thisa->vtable2 = (void *)((int)thisa->vtable2 & v27); /*0x7cfd1e*/
      goto LABEL_47; /*0x7cfd21*/
    }
  }
  else
  {
    v17 = 0x80000000 >> v12; /*0x7cfcd1*/
    v18 = (char *)v8 + v12 + 4; /*0x7cfcd6*/
    v26 = ~v17; /*0x7cfcdc*/
    v8[v34 + 17] &= ~v17; /*0x7cfce3*/
    v4 = (*v18)-- == 1; /*0x7cfce7*/
    if ( v4 ) /*0x7cfce9*/
    {
      i = (char *)thisa; /*0x7cfceb*/
      thisa->AbstractClass = (void *)((int)thisa->AbstractClass & v26); /*0x7cfcf1*/
      goto LABEL_47; /*0x7cfcf3*/
    }
  }
  i = (char *)thisa; /*0x7cfd23*/
  LABEL_47:
  *(unsigned int *)(v14[2] + 4) = v14[1]; /*0x7cfd26*/
  *(unsigned int *)(v14[1] + 8) = v14[2]; /*0x7cfd39*/
  if ( v32 ) /*0x7cfd3c*/
  {
    v22 = &v30[2 * v16]; /*0x7cfd49*/
    v14[1] = v22[1]; /*0x7cfd4c*/
    v14[2] = (int)v22; /*0x7cfd4f*/
    v22[1] = v14; /*0x7cfd52*/
    *(unsigned int *)(v14[1] + 8) = v14; /*0x7cfd58*/
    if ( v14[1] == v14[2] ) /*0x7cfd61*/
    {
      v23 = *((unsigned char *)v8 + v16 + 4); /*0x7cfd63*/
      if ( v16 >= 32 ) /*0x7cfd6d*/
      {
        *((unsigned char *)v8 + v16 + 4) = v23 + 1; /*0x7cfd9e*/
        if ( !v23 ) /*0x7cfda2*/
          *((unsigned int *)i + 1) |= 0x80000000 >> (v16 - 32); /*0x7cfdae*/
        v8[v34 + 49] |= 0x80000000 >> (v16 - 32); /*0x7cfdc5*/
      }
      else
      {
        *((unsigned char *)v8 + v16 + 4) = v23 + 1; /*0x7cfd75*/
        if ( !v23 ) /*0x7cfd79*/
          *(unsigned int *)i |= 0x80000000 >> v16; /*0x7cfd84*/
        v8[v34 + 17] |= 0x80000000 >> v16; /*0x7cfd92*/
      }
    }
    v15 = v32; /*0x7cfdc7*/
  LABEL_57:
    if ( v15 ) /*0x7cfdcc*/
    {
      *v14 = v15; /*0x7cfdce*/
      *(int *)((char *)v14 + v15 - 4) = v15; /*0x7cfdd0*/
    }
    goto LABEL_60; /*0x7cfdd4*/
  }
  v15 = 0; /*0x7cfdd6*/
  LABEL_60:
  v24 = (int *)((char *)v14 + v15); /*0x7cfdd9*/
  *v24 = v28 + 1; /*0x7cfde1*/
  *(unsigned int *)((char *)v24 + v28 - 4) = v28 + 1; /*0x7cfde3*/
  v4 = (*v30)++ == 0; /*0x7cfdec*/
  if ( v4 && i == dword_B78B90 && v34 == dword_B78B88 ) /*0x7cfe06*/
    dword_B78B90 = 0; /*0x7cfe08*/
  *v8 = v34; /*0x7cfe12*/
  return v24 + 1; /*0x7cfe17*/
}
}
// 0x7CFE1C
namespace gamemd {
void * __sbh_alloc_new_region()
{
  int v1; // eax
  void *v2; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v1 = dword_B78B94; /*0x7cfe1c*/
  if ( dword_B78B94 == dword_B78B84 ) /*0x7cfe2d*/
  {
    v2 = HeapReAlloc(hHeap, 0, lp, 4 * (5 * dword_B78B84 + 80)); /*0x7cfe44*/
    if ( !v2 ) /*0x7cfe4c*/
      return 0; /*0x7cfeb1*/
    dword_B78B84 += 16; /*0x7cfe4e*/
    lp = v2; /*0x7cfe55*/
    v1 = dword_B78B94; /*0x7cfe5a*/
  }
  v3 = (char *)lp + 20 * v1; /*0x7cfe75*/
  v4 = HeapAlloc(hHeap, 8u, 0x41C4u); /*0x7cfe78*/
  *((unsigned int *)v3 + 4) = v4; /*0x7cfe80*/
  if ( !v4 ) /*0x7cfe83*/
    return 0; /*0x7cfe83*/
  v5 = VirtualAlloc(0, 0x100000u, 0x2000u, 4u); /*0x7cfe92*/
  *((unsigned int *)v3 + 3) = v5; /*0x7cfe9a*/
  if ( !v5 ) /*0x7cfe9d*/
  {
    HeapFree(hHeap, 0, *((LPVOID *)v3 + 4)); /*0x7cfea9*/
    return 0; /*0x7cfea9*/
  }
  *((unsigned int *)v3 + 2) = -1; /*0x7cfeb3*/
  *(unsigned int *)v3 = 0; /*0x7cfeb7*/
  *((unsigned int *)v3 + 1) = 0; /*0x7cfeb9*/
  ++dword_B78B94; /*0x7cfebc*/
  **((unsigned int **)v3 + 4) = -1; /*0x7cfec5*/
  return v3; /*0x7cfeca*/
}
}
// 0x7CFFC8
namespace gamemd {
AbstractClass * * __sbh_resize_block(unsigned int * a0, CCINIClass * aP1, AbstractClass * aP2)
{
  int v3; // eax
  signed int v4; // esi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned char *v11; // ecx
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // ebx
  unsigned char *v15; // ecx
  int v16; // ebx
  unsigned int v17; // edi
  int v18; // ecx
  unsigned int *v19; // eax
  char v20; // cl
  int v21; // edx
  int *v22; // eax
  int v24; // ecx
  int *v25; // ebx
  unsigned int v26; // esi
  unsigned int v27; // esi
  unsigned int v28; // ebx
  unsigned char *v29; // esi
  int v30; // ebx
  unsigned char *v31; // ecx
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  unsigned int *v34; // eax
  char v35; // cl
  int v36; // [esp+Ch] [ebp-Ch]
  int v37; // [esp+10h] [ebp-8h]
  int v38; // [esp+14h] [ebp-4h]
  int v39; // [esp+14h] [ebp-4h]
  int *v40; // [esp+24h] [ebp+Ch]
  char v41; // [esp+27h] [ebp+Fh]
  int v42; // [esp+28h] [ebp+10h]
  unsigned int v43; // [esp+28h] [ebp+10h]
  int v44; // [esp+28h] [ebp+10h]
  char v45; // [esp+2Bh] [ebp+13h]

  v3 = a0[4]; /*0x7cffe2*/
  v4 = (aP2 + 23) & 0xFFFFFFF0; /*0x7cffe5*/
  v5 = (unsigned int)(aP1 - a0[3]) >> 15; /*0x7cffe8*/
  v36 = 516 * v5 + v3 + 324; /*0x7cfffa*/
  v6 = *(unsigned int *)(aP1 - 4) - 1; /*0x7d0000*/
  v42 = v6; /*0x7d0003*/
  v7 = *(unsigned int *)(v6 + aP1 - 4); /*0x7d0006*/
  v8 = v6 + aP1 - 4; /*0x7d000a*/
  v38 = v7; /*0x7d000e*/
  if ( v4 <= v6 ) /*0x7d0011*/
  {
    if ( v4 < v6 ) /*0x7d0176*/
    {
      v44 = v6 - v4; /*0x7d017f*/
      v24 = v4 + 1; /*0x7d0182*/
      *(unsigned int *)(aP1 - 4) = v4 + 1; /*0x7d0185*/
      v25 = (int *)(aP1 + v4 - 4); /*0x7d0188*/
      v40 = v25; /*0x7d018f*/
      v26 = (v44 >> 4) - 1; /*0x7d0195*/
      *(v25 - 1) = v24; /*0x7d0196*/
      if ( v26 > 0x3F ) /*0x7d019c*/
        v26 = 63; /*0x7d01a0*/
      if ( (v38 & 1) == 0 ) /*0x7d01a5*/
      {
        v27 = (v38 >> 4) - 1; /*0x7d01b1*/
        if ( v27 > 0x3F ) /*0x7d01b5*/
          v27 = 63; /*0x7d01b9*/
        if ( *(unsigned int *)(v8 + 4) == *(unsigned int *)(v8 + 8) ) /*0x7d01c0*/
        {
          if ( v27 >= 0x20 ) /*0x7d01c5*/
          {
            v31 = (unsigned char *)(v27 + v3 + 4); /*0x7d01ef*/
            v32 = ~(0x80000000 >> (v27 - 32)); /*0x7d01f3*/
            *(unsigned int *)(v3 + 4 * v5 + 196) &= v32; /*0x7d01f5*/
            v13 = (*v31)-- == 1; /*0x7d01fc*/
            if ( v13 ) /*0x7d01fe*/
              a0[1] &= v32; /*0x7d0203*/
          }
          else
          {
            v28 = 0x80000000 >> v27; /*0x7d01ce*/
            v29 = (unsigned char *)(v27 + v3 + 4); /*0x7d01d0*/
            v30 = ~v28; /*0x7d01d4*/
            *(unsigned int *)(v3 + 4 * v5 + 68) &= v30; /*0x7d01d6*/
            v13 = (*v29)-- == 1; /*0x7d01da*/
            if ( v13 ) /*0x7d01dc*/
              *a0 &= v30; /*0x7d01e1*/
          }
          v25 = v40; /*0x7d0206*/
        }
        *(unsigned int *)(*(unsigned int *)(v8 + 8) + 4) = *(unsigned int *)(v8 + 4); /*0x7d020f*/
        *(unsigned int *)(*(unsigned int *)(v8 + 4) + 8) = *(unsigned int *)(v8 + 8); /*0x7d0218*/
        v44 += v38; /*0x7d0221*/
        v26 = (v44 >> 4) - 1; /*0x7d0227*/
        if ( v26 > 0x3F ) /*0x7d022b*/
          v26 = 63; /*0x7d022f*/
      }
      v33 = v36 + 8 * v26; /*0x7d0237*/
      v25[1] = *(unsigned int *)(v33 + 4); /*0x7d023a*/
      v25[2] = v33; /*0x7d023d*/
      *(unsigned int *)(v33 + 4) = v25; /*0x7d0240*/
      *(unsigned int *)(v25[1] + 8) = v25; /*0x7d0246*/
      if ( v25[1] == v25[2] ) /*0x7d024f*/
      {
        v41 = *(unsigned char *)(v26 + v3 + 4); /*0x7d0258*/
        *(unsigned char *)(v26 + v3 + 4) = v41 + 1; /*0x7d025d*/
        if ( v26 >= 0x20 ) /*0x7d0261*/
        {
          if ( !v41 ) /*0x7d0288*/
            a0[1] |= 0x80000000 >> (v26 - 32); /*0x7d0297*/
          v34 = (unsigned int *)(v3 + 4 * v5 + 196); /*0x7d029a*/
          v35 = v26 - 32; /*0x7d02a1*/
        }
        else
        {
          if ( !v41 ) /*0x7d0267*/
            *a0 |= 0x80000000 >> v26; /*0x7d0275*/
          v34 = (unsigned int *)(v3 + 4 * v5 + 68); /*0x7d0277*/
          v35 = v26; /*0x7d0280*/
        }
        *v34 |= 0x80000000 >> v35; /*0x7d02ab*/
      }
      *v25 = v44; /*0x7d02b0*/
      *(int *)((char *)v25 + v44 - 4) = v44; /*0x7d02b2*/
    }
  }
  else
  {
    if ( (v7 & 1) != 0 || v4 > v6 + v7 ) /*0x7d0024*/
      return 0; /*0x7d0171*/
    v9 = (v7 >> 4) - 1; /*0x7d0030*/
    v37 = v9; /*0x7d0034*/
    if ( v9 > 0x3F ) /*0x7d0037*/
    {
      v9 = 63; /*0x7d003b*/
      v37 = 63; /*0x7d003c*/
    }
    if ( *(unsigned int *)(v8 + 4) == *(unsigned int *)(v8 + 8) ) /*0x7d0045*/
    {
      if ( v9 >= 0x20 ) /*0x7d004a*/
      {
        v14 = 0x80000000 >> (v9 - 32); /*0x7d0073*/
        v15 = (unsigned char *)(v37 + v3 + 4); /*0x7d0078*/
        v16 = ~v14; /*0x7d007c*/
        *(unsigned int *)(v3 + 4 * v5 + 196) &= v16; /*0x7d007e*/
        v13 = (*v15)-- == 1; /*0x7d0085*/
        if ( v13 ) /*0x7d0087*/
          a0[1] &= v16; /*0x7d008c*/
      }
      else
      {
        v10 = 0x80000000 >> v9; /*0x7d0051*/
        v11 = (unsigned char *)(v37 + v3 + 4); /*0x7d0056*/
        v12 = ~v10; /*0x7d005a*/
        *(unsigned int *)(v3 + 4 * v5 + 68) &= v12; /*0x7d005c*/
        v13 = (*v11)-- == 1; /*0x7d0060*/
        if ( v13 ) /*0x7d0062*/
          *a0 &= v12; /*0x7d0067*/
      }
    }
    *(unsigned int *)(*(unsigned int *)(v8 + 8) + 4) = *(unsigned int *)(v8 + 4); /*0x7d0095*/
    *(unsigned int *)(*(unsigned int *)(v8 + 4) + 8) = *(unsigned int *)(v8 + 8); /*0x7d009e*/
    v39 = v42 - v4 + v38; /*0x7d00a6*/
    if ( v39 <= 0 ) /*0x7d00ad*/
    {
      v21 = aP1; /*0x7d015d*/
    }
    else
    {
      v17 = (v39 >> 4) - 1; /*0x7d00bc*/
      v18 = aP1 + v4 - 4; /*0x7d00bd*/
      if ( v17 > 0x3F ) /*0x7d00c4*/
        v17 = 63; /*0x7d00c8*/
      v43 = v36 + 8 * v17; /*0x7d00cf*/
      *(unsigned int *)(aP1 + v4) = *(unsigned int *)(v43 + 4); /*0x7d00d5*/
      *(unsigned int *)(v18 + 8) = v43; /*0x7d00db*/
      *(unsigned int *)(v43 + 4) = v18; /*0x7d00de*/
      *(unsigned int *)(*(unsigned int *)(aP1 + v4) + 8) = aP1 + v4 - 4; /*0x7d00e4*/
      if ( *(unsigned int *)(aP1 + v4) == *(unsigned int *)(aP1 + v4 - 4 + 8) ) /*0x7d00ed*/
      {
        v45 = *(unsigned char *)(v17 + v3 + 4); /*0x7d00f6*/
        *(unsigned char *)(v17 + v3 + 4) = v45 + 1; /*0x7d00fb*/
        if ( v17 >= 0x20 ) /*0x7d00ff*/
        {
          if ( !v45 ) /*0x7d0126*/
            a0[1] |= 0x80000000 >> (v17 - 32); /*0x7d0135*/
          v19 = (unsigned int *)(v3 + 4 * v5 + 196); /*0x7d0138*/
          v20 = v17 - 32; /*0x7d013f*/
        }
        else
        {
          if ( !v45 ) /*0x7d0105*/
            *a0 |= 0x80000000 >> v17; /*0x7d0113*/
          v19 = (unsigned int *)(v3 + 4 * v5 + 68); /*0x7d0115*/
          v20 = v17; /*0x7d011e*/
        }
        *v19 |= 0x80000000 >> v20; /*0x7d0149*/
      }
      v21 = aP1; /*0x7d014b*/
      v22 = (int *)(aP1 + v4 - 4); /*0x7d0151*/
      *v22 = v39; /*0x7d0155*/
      *(int *)((char *)v22 + v39 - 4) = v39; /*0x7d0157*/
    }
    *(unsigned int *)(v21 - 4) = v4 + 1; /*0x7d0163*/
    *(unsigned int *)(v21 + v4 - 8) = v4 + 1; /*0x7d0166*/
  }
  return 1; /*0x7d02b9*/
}
}
// 0x7C30D0
namespace gamemd {
int ProcessAudioStreamBuffer(int a1, signed int a2, int a3)
{
  bool v5; // bl
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  char v11; // [esp+Bh] [ebp-5h] BYREF
  int v12; // [esp+Ch] [ebp-4h]

  v12 = *(unsigned int *)(a1 + 368); /*0x7c30df*/
  if ( (*(unsigned char *)(a1 + 1980) & 0x40) != 0 ) /*0x7c30eb*/
    Audio_Process_7BD2B0((UnitClass *)a1); /*0x7c30ed*/
  if ( a2 <= *(unsigned int *)(a1 + 284) && *(unsigned int *)(a1 + 1892) ) /*0x7c30fe*/
  {
    *(unsigned int *)(a1 + 1808) = -1; /*0x7c3113*/
    *(unsigned int *)(a1 + 1800) = -1; /*0x7c3119*/
    *(unsigned int *)(a1 + 1804) = -1; /*0x7c311f*/
    Audio_Process_7BE660((TechnoClass *)a1); /*0x7c3125*/
    v5 = 0; /*0x7c3130*/
    if ( !*(unsigned char *)(a1 + 264) && !Audio_Process_7C04E0(a1, a2) ) /*0x7c313a*/
    {
      v6 = Audio_Process_7C0530(a1, a2, 1); /*0x7c314e*/
      if ( v6 != -1 ) /*0x7c3153*/
        return v6; /*0x7c321d*/
      v5 = (*(unsigned char *)(v12 + 20) & 4) != 0; /*0x7c3163*/
    }
    *(unsigned int *)(a1 + 384) = a2; /*0x7c3165*/
    IDA_LOBYTE(v12) = (~*(unsigned char *)(a1 + 234) & 8) != 0; /*0x7c317d*/
    v6 = ProcessAudioStreamPlayback(a1, a2, *(uint8_t *)(a1 + 245), v12, 1, &v11); /*0x7c319b*/
    if ( v6 == -1 ) /*0x7c31a0*/
    {
      v7 = *(unsigned int *)(a1 + 368); /*0x7c31a2*/
      *(unsigned int *)(a1 + 384) = a2; /*0x7c31aa*/
      *(unsigned int *)(v7 + 20) = 0; /*0x7c31b2*/
      if ( v5 ) /*0x7c31b5*/
        *(unsigned int *)(*(unsigned int *)(a1 + 368) + 20) |= 4u; /*0x7c31bd*/
      v8 = *(unsigned int *)(a1 + 368); /*0x7c31c1*/
      v9 = *(unsigned int *)(v8 + 12); /*0x7c31c7*/
      if ( v9 != v8 ) /*0x7c31cc*/
      {
        do /*0x7c31da*/
        {
          *(unsigned int *)(v9 + 20) = 0; /*0x7c31ce*/
          v9 = *(unsigned int *)(v9 + 12); /*0x7c31d1*/
        }
        while ( v9 != *(unsigned int *)(a1 + 368) ); /*0x7c31da*/
      }
      *(unsigned int *)(a1 + 416) = *(unsigned int *)(a1 + 368); /*0x7c31e2*/
      v6 = Audio_Process_7C0490((ObjectClass *)a1); /*0x7c31ef*/
      if ( v6 >= 0xFFFFFFFE ) /*0x7c31f4*/
      {
        v6 = a2; /*0x7c3201*/
        CalcAudioStreamOffset(a1, 60 * a2 / *(unsigned int *)(a1 + 116)); /*0x7c320f*/
      }
    }
    return v6; /*0x7c320f*/
  }
  return -6; /*0x7c3218*/
}
} // namespace gamemd

// 0x7C35B0
namespace gamemd {
int E4Recv_7C35B0::sub_7C35B0()
{

  return *((unsigned short *)this + 906); /*0x7c35b9*/

}
} // namespace gamemd

// 0x7C3670
namespace gamemd {
int E4Recv_7C3670::sub_7C3670()
{

  *((unsigned int *)this + 452) = -1; /*0x7c3673*/
  *((unsigned int *)this + 450) = -1; /*0x7c3679*/
  *((unsigned int *)this + 451) = -1; /*0x7c367f*/
  return -1; /*0x7c3685*/

}
} // namespace gamemd

// 0x7C36C0
namespace gamemd {
void * sub_7C36C0()
{
  return &unk_84E7C0; /*0x7c36c5*/
}
} // namespace gamemd

// 0x7C3740
namespace gamemd {
char * sub_7C3740()
{
  return aVqaPlayback50O; /*0x7c3745*/
}
} // namespace gamemd

// 0x7C3840
namespace gamemd {
int sub_7C3840(int a1, unsigned int * a2, unsigned int * a3)
{
  *a2 = *(uint16_t *)(a1 + 250); /*0x7c3849*/
  *a3 = *(uint16_t *)(a1 + 252); /*0x7c3858*/
  return -1; /*0x7c385d*/
}
} // namespace gamemd

// 0x7C3910
namespace gamemd {
int AudioStream_CalcOffset(int a1, int a2)
{
  int v3; // edi
  int result; // eax

  *(unsigned int *)(a1 + 328) = 0; /*0x7c3917*/
  v3 = a2 - (unsigned int)(60 * (*(int (__cdecl **)(int))(a1 + 80))(a1)) / *(unsigned int *)(a1 + 120); /*0x7c3935*/
  result = *(unsigned int *)(a1 + 328); /*0x7c3937*/
  *(unsigned int *)(a1 + 328) = v3 - result; /*0x7c393f*/
  return result; /*0x7c3945*/
}
} // namespace gamemd

// 0x7C5EE0
namespace gamemd {
void * sub_7C5EE0()
{
  void *retaddr; // [esp+0h] [ebp+0h]

  return retaddr; /*0x7c5ee3*/
}
} // namespace gamemd

// 0x7C61CF
namespace gamemd {
int sub_7C61CF(int a1)
{
  char v1; // ch
  char *v2; // esi
  char v3; // cl
  char v4; // al
  unsigned short *v5; // edx
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int result; // eax

  v1 = 0; /*0x7c61d6*/
  v2 = *(char **)(a1 + 76); /*0x7c61d8*/
  do /*0x7c625a*/
  {
    v3 = 0; /*0x7c61db*/
    do /*0x7c6232*/
    {
      v4 = *v2++; /*0x7c61dd*/
      if ( v4 ) /*0x7c61e3*/
      {
        v5 = *(unsigned short **)(a1 + 64); /*0x7c61ea*/
        v6 = *(unsigned int *)(a1 + 16) + **(uint8_t **)(a1 + 80); /*0x7c61ef*/
        if ( (uint16_t)v6 < *v5 ) /*0x7c61fa*/
        {
          *v5 = v6; /*0x7c61fc*/
          v7 = **(uint16_t **)(a1 + 68); /*0x7c6205*/
          IDA_LOWORD(v7) = *(unsigned short *)(*(unsigned int *)(a1 + 144) + 2 * v7); /*0x7c620e*/
          IDA_LOBYTE(v7) = v4; /*0x7c6212*/
          **(unsigned short **)(a1 + 72) = *(unsigned short *)(*(unsigned int *)(a1 + 88) + 2 * v7); /*0x7c621b*/
        }
      }
      ++v3; /*0x7c621e*/
      ++*(unsigned int *)(a1 + 80); /*0x7c6220*/
      *(unsigned int *)(a1 + 72) += 2; /*0x7c6223*/
      *(unsigned int *)(a1 + 64) += 2; /*0x7c6227*/
      *(unsigned int *)(a1 + 68) += 2; /*0x7c622b*/
    }
    while ( v3 < *(char *)a1 ); /*0x7c6232*/
    *(unsigned int *)(a1 + 72) += *(unsigned int *)(a1 + 28); /*0x7c6237*/
    v8 = *(unsigned int *)(a1 + 20); /*0x7c623a*/
    *(unsigned int *)(a1 + 64) += v8; /*0x7c623d*/
    *(unsigned int *)(a1 + 64) += v8; /*0x7c6240*/
    v9 = *(unsigned int *)(a1 + 24); /*0x7c6243*/
    *(unsigned int *)(a1 + 68) += v9; /*0x7c6246*/
    *(unsigned int *)(a1 + 68) += v9; /*0x7c6249*/
    result = *(unsigned int *)(a1 + 32); /*0x7c624c*/
    v2 += result; /*0x7c624f*/
    *(unsigned int *)(a1 + 80) += result; /*0x7c6252*/
    ++v1; /*0x7c6255*/
  }
  while ( v1 < *(char *)(a1 + 4) ); /*0x7c625a*/
  return result; /*0x7c6260*/
}
} // namespace gamemd

// 0x7C8362
namespace gamemd {
int FindClose()
{
  return __imp_FindClose(hFindFile);
}
} // namespace gamemd

// 0x7C8368
namespace gamemd {
int FindNextFileA()
{
  return __imp_FindNextFileA(hFindFile, lpFindFileData);
}
} // namespace gamemd

// 0x7C836E
namespace gamemd {
int FindFirstFileA()
{
  return __imp_FindFirstFileA(lpFileName, lpFindFileData);
}
} // namespace gamemd

// 0x7C8374
namespace gamemd {
int FormatMessageA()
{
  return __imp_FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}
} // namespace gamemd

// 0x7C837A
namespace gamemd {
int GetLastError()
{
  return __imp_GetLastError();
}
} // namespace gamemd

// 0x7C8380
namespace gamemd {
int SetThreadPriority()
{
  return __imp_SetThreadPriority(hThread, nPriority);
}
} // namespace gamemd

// 0x7C8386
namespace gamemd {
int CreateThread()
{
  return __imp_CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}
} // namespace gamemd

// 0x7C838C
namespace gamemd {
int InitializeCriticalSection()
{
  __imp_InitializeCriticalSection(lpCriticalSection); /*0x7c838c*/
}
} // namespace gamemd

// 0x7C8392
namespace gamemd {
int Sleep()
{
  __imp_Sleep(dwMilliseconds); /*0x7c8392*/
}
} // namespace gamemd

// 0x7C8398
namespace gamemd {
int LeaveCriticalSection()
{
  __imp_LeaveCriticalSection(lpCriticalSection); /*0x7c8398*/
}
} // namespace gamemd

// 0x7C839E
namespace gamemd {
int EnterCriticalSection()
{
  __imp_EnterCriticalSection(lpCriticalSection); /*0x7c839e*/
}
} // namespace gamemd

// 0x7C83A4
namespace gamemd {
int DeleteCriticalSection()
{
  __imp_DeleteCriticalSection(lpCriticalSection); /*0x7c83a4*/
}
} // namespace gamemd

// 0x7C83AA
namespace gamemd {
int CloseHandle()
{
  return __imp_CloseHandle(hObject);
}
} // namespace gamemd

// 0x7C83B0
namespace gamemd {
int WaitForSingleObject()
{
  return __imp_WaitForSingleObject(hHandle, dwMilliseconds);
}
} // namespace gamemd

// 0x7C83B6
namespace gamemd {
int QueryPerformanceFrequency()
{
  return __imp_QueryPerformanceFrequency(lpFrequency);
}
} // namespace gamemd

// 0x7C83BC
namespace gamemd {
int QueryPerformanceCounter()
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}
} // namespace gamemd

// 0x7C83C2
namespace gamemd {
int GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}
} // namespace gamemd

// 0x7C83C8
namespace gamemd {
int InterlockedDecrement()
{
  return __imp_InterlockedDecrement(lpAddend);
}
} // namespace gamemd

// 0x7C83CE
namespace gamemd {
int InterlockedIncrement()
{
  return __imp_InterlockedIncrement(lpAddend);
}
} // namespace gamemd

// 0x7C83D4
namespace gamemd {
int MultiByteToWideChar()
{
  return __imp_MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}
} // namespace gamemd

// 0x7C83DA
namespace gamemd {
int SetFilePointer()
{
  return __imp_SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
}
} // namespace gamemd

// 0x7C83E0
namespace gamemd {
int CreateFileA()
{
  return __imp_CreateFileA(
           lpFileName,
           dwDesiredAccess,
           dwShareMode,
           lpSecurityAttributes,
           dwCreationDisposition,
           dwFlagsAndAttributes,
           hTemplateFile);
}
} // namespace gamemd

// 0x7C83E6
namespace gamemd {
int DeviceIoControl()
{
  return __imp_DeviceIoControl(
           hDevice,
           dwIoControlCode,
           lpInBuffer,
           nInBufferSize,
           lpOutBuffer,
           nOutBufferSize,
           lpBytesReturned,
           lpOverlapped);
}
} // namespace gamemd

// 0x7C83EC
namespace gamemd {
int GetDriveTypeA()
{
  return __imp_GetDriveTypeA(lpRootPathName);
}
} // namespace gamemd

// 0x7C83F2
namespace gamemd {
int WideCharToMultiByte()
{
  return __imp_WideCharToMultiByte(
           CodePage,
           dwFlags,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           lpDefaultChar,
           lpUsedDefaultChar);
}
} // namespace gamemd

// 0x7C83F8
namespace gamemd {
int GetDiskFreeSpaceA()
{
  return __imp_GetDiskFreeSpaceA(
           lpRootPathName,
           lpSectorsPerCluster,
           lpBytesPerSector,
           lpNumberOfFreeClusters,
           lpTotalNumberOfClusters);
}
} // namespace gamemd

// 0x7C83FE
namespace gamemd {
int GetProcAddress()
{
  return __imp_GetProcAddress(hModule, lpProcName);
}
} // namespace gamemd

// 0x7C8404
namespace gamemd {
int GetModuleHandleA()
{
  return __imp_GetModuleHandleA(lpModuleName);
}
} // namespace gamemd

// 0x7C840A
namespace gamemd {
int CreateMutexA()
{
  return __imp_CreateMutexA(lpMutexAttributes, bInitialOwner, lpName);
}
} // namespace gamemd

// 0x7C8410
namespace gamemd {
int MapViewOfFileEx()
{
  return __imp_MapViewOfFileEx(
           hFileMappingObject,
           dwDesiredAccess,
           dwFileOffsetHigh,
           dwFileOffsetLow,
           dwNumberOfBytesToMap,
           lpBaseAddress);
}
} // namespace gamemd

// 0x7C8416
namespace gamemd {
int SetEvent()
{
  return __imp_SetEvent(hEvent);
}
} // namespace gamemd

// 0x7C841C
namespace gamemd {
int OpenEventA()
{
  return __imp_OpenEventA(dwDesiredAccess, bInheritHandle, lpName);
}
} // namespace gamemd

// 0x7C8422
namespace gamemd {
int UnmapViewOfFile()
{
  return __imp_UnmapViewOfFile(lpBaseAddress);
}
} // namespace gamemd

// 0x7C8428
namespace gamemd {
int LockResource()
{
  return __imp_LockResource(hResData);
}
} // namespace gamemd

// 0x7C842E
namespace gamemd {
int LoadResource()
{
  return __imp_LoadResource(hModule, hResInfo);
}
} // namespace gamemd

// 0x7C8434
namespace gamemd {
int FindResourceA()
{
  return __imp_FindResourceA(hModule, lpName, lpType);
}
} // namespace gamemd

// 0x7C843A
namespace gamemd {
int GetVolumeInformationA()
{
  return __imp_GetVolumeInformationA(
           lpRootPathName,
           lpVolumeNameBuffer,
           nVolumeNameSize,
           lpVolumeSerialNumber,
           lpMaximumComponentLength,
           lpFileSystemFlags,
           lpFileSystemNameBuffer,
           nFileSystemNameSize);
}
} // namespace gamemd

// 0x7C8440
namespace gamemd {
int FreeLibrary()
{
  return __imp_FreeLibrary(hLibModule);
}
} // namespace gamemd

// 0x7C8446
namespace gamemd {
int LoadLibraryA()
{
  return __imp_LoadLibraryA(lpLibFileName);
}
} // namespace gamemd

// 0x7C844C
namespace gamemd {
int FreeConsole()
{
  return __imp_FreeConsole();
}
} // namespace gamemd

// 0x7C8452
namespace gamemd {
int AllocConsole()
{
  return __imp_AllocConsole();
}
} // namespace gamemd

// 0x7C8458
namespace gamemd {
int ExitProcess()
{
  __imp_ExitProcess(uExitCode); /*0x7c8458*/
}
} // namespace gamemd

// 0x7C845E
namespace gamemd {
int IsBadReadPtr()
{
  return __imp_IsBadReadPtr(lp, ucb);
}
} // namespace gamemd

// 0x7C8464
namespace gamemd {
int IsBadCodePtr()
{
  return __imp_IsBadCodePtr(lpfn);
}
} // namespace gamemd

// 0x7C846A
namespace gamemd {
int lstrcatA()
{
  return __imp_lstrcatA(lpString1, lpString2);
}
} // namespace gamemd

// 0x7C8470
namespace gamemd {
int lstrlenA()
{
  return __imp_lstrlenA(lpString);
}
} // namespace gamemd

// 0x7C8476
namespace gamemd {
int GetModuleFileNameA()
{
  return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}
} // namespace gamemd

// 0x7C847C
namespace gamemd {
int GetCurrentProcess()
{
  return __imp_GetCurrentProcess();
}
} // namespace gamemd

// 0x7C8482
namespace gamemd {
int WriteFile()
{
  return __imp_WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}
} // namespace gamemd

// 0x7C8488
namespace gamemd {
int FlushInstructionCache()
{
  return __imp_FlushInstructionCache(hProcess, lpBaseAddress, dwSize);
}
} // namespace gamemd

// 0x7C848E
namespace gamemd {
int VirtualProtect()
{
  return __imp_VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}
} // namespace gamemd

// 0x7C8494
namespace gamemd {
int VirtualQuery()
{
  return __imp_VirtualQuery(lpAddress, lpBuffer, dwLength);
}
} // namespace gamemd

// 0x7C849A
namespace gamemd {
int GetTickCount()
{
  return __imp_GetTickCount();
}
} // namespace gamemd

// 0x7C84A0
namespace gamemd {
int GetSystemTime()
{
  __imp_GetSystemTime(lpSystemTime); /*0x7c84a0*/
}
} // namespace gamemd

// 0x7C84A6
namespace gamemd {
int GlobalMemoryStatus()
{
  __imp_GlobalMemoryStatus(lpBuffer); /*0x7c84a6*/
}
} // namespace gamemd

// 0x7C84AC
namespace gamemd {
int CreateProcessA()
{
  return __imp_CreateProcessA(
           lpApplicationName,
           lpCommandLine,
           lpProcessAttributes,
           lpThreadAttributes,
           bInheritHandles,
           dwCreationFlags,
           lpEnvironment,
           lpCurrentDirectory,
           lpStartupInfo,
           lpProcessInformation);
}
} // namespace gamemd

// 0x7C84B2
namespace gamemd {
int DeleteFileA()
{
  return __imp_DeleteFileA(lpFileName);
}
} // namespace gamemd

// 0x7C84B8
namespace gamemd {
int GetTempFileNameA()
{
  return __imp_GetTempFileNameA(lpPathName, lpPrefixString, uUnique, lpTempFileName);
}
} // namespace gamemd

// 0x7C84BE
namespace gamemd {
int GetWindowsDirectoryA()
{
  return __imp_GetWindowsDirectoryA(lpBuffer, uSize);
}
} // namespace gamemd

// 0x7C84C4
namespace gamemd {
int GetTimeFormatA()
{
  return __imp_GetTimeFormatA(Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}
} // namespace gamemd

// 0x7C84CA
namespace gamemd {
int GetDateFormatA()
{
  return __imp_GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
}
} // namespace gamemd

// 0x7C84D0
namespace gamemd {
int FileTimeToSystemTime()
{
  return __imp_FileTimeToSystemTime(lpFileTime, lpSystemTime);
}
} // namespace gamemd

// 0x7C84D6
namespace gamemd {
int FileTimeToLocalFileTime()
{
  return __imp_FileTimeToLocalFileTime(lpFileTime, lpLocalFileTime);
}
} // namespace gamemd

// 0x7C84DC
namespace gamemd {
int SystemTimeToFileTime()
{
  return __imp_SystemTimeToFileTime(lpSystemTime, lpFileTime);
}
} // namespace gamemd

// 0x7C84E2
namespace gamemd {
int CompareFileTime()
{
  return __imp_CompareFileTime(lpFileTime1, lpFileTime2);
}
} // namespace gamemd

// 0x7C84E8
namespace gamemd {
int CopyFileA()
{
  return __imp_CopyFileA(lpExistingFileName, lpNewFileName, bFailIfExists);
}
} // namespace gamemd

// 0x7C84EE
namespace gamemd {
int CreateDirectoryA()
{
  return __imp_CreateDirectoryA(lpPathName, lpSecurityAttributes);
}
} // namespace gamemd

// 0x7C84F4
namespace gamemd {
int MulDiv()
{
  return __imp_MulDiv(nNumber, nNumerator, nDenominator);
}
} // namespace gamemd

// 0x7C84FA
namespace gamemd {
int EscapeCommFunction()
{
  return __imp_EscapeCommFunction(hFile, dwFunc);
}
} // namespace gamemd

// 0x7C8500
namespace gamemd {
int ClearCommBreak()
{
  return __imp_ClearCommBreak(hFile);
}
} // namespace gamemd

// 0x7C8506
namespace gamemd {
int SetCommBreak()
{
  return __imp_SetCommBreak(hFile);
}
} // namespace gamemd

// 0x7C850C
namespace gamemd {
int ReadFile()
{
  return __imp_ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}
} // namespace gamemd

// 0x7C8512
namespace gamemd {
int GetFileSize()
{
  return __imp_GetFileSize(hFile, lpFileSizeHigh);
}
} // namespace gamemd

// 0x7C8518
namespace gamemd {
int FileTimeToDosDateTime()
{
  return __imp_FileTimeToDosDateTime(lpFileTime, lpFatDate, lpFatTime);
}
} // namespace gamemd

// 0x7C851E
namespace gamemd {
int GetFileInformationByHandle()
{
  return __imp_GetFileInformationByHandle(hFile, lpFileInformation);
}
} // namespace gamemd

// 0x7C8524
namespace gamemd {
int SetFileTime()
{
  return __imp_SetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
} // namespace gamemd

// 0x7C852A
namespace gamemd {
int DosDateTimeToFileTime()
{
  return __imp_DosDateTimeToFileTime(wFatDate, wFatTime, lpFileTime);
}
} // namespace gamemd

// 0x7C8530
namespace gamemd {
int GetStartupInfoA()
{
  __imp_GetStartupInfoA(lpStartupInfo); /*0x7c8530*/
}
} // namespace gamemd

// 0x7C8536
namespace gamemd {
int TerminateProcess()
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}
} // namespace gamemd

// 0x7C853C
namespace gamemd {
int WaitForMultipleObjects()
{
  return __imp_WaitForMultipleObjects(nCount, lpHandles, bWaitAll, dwMilliseconds);
}
} // namespace gamemd

// 0x7C8542
namespace gamemd {
int lstrcpyA()
{
  return __imp_lstrcpyA(lpString1, lpString2);
}
} // namespace gamemd

// 0x7C8548
namespace gamemd {
int SetUnhandledExceptionFilter()
{
  return __imp_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}
} // namespace gamemd

// 0x7C854E
namespace gamemd {
int SetCurrentDirectoryA()
{
  return __imp_SetCurrentDirectoryA(lpPathName);
}
} // namespace gamemd

// 0x7C8554
namespace gamemd {
int OpenMutexA()
{
  return __imp_OpenMutexA(dwDesiredAccess, bInheritHandle, lpName);
}
} // namespace gamemd

// 0x7C855A
namespace gamemd {
int GetFileTime()
{
  return __imp_GetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
} // namespace gamemd

// 0x7C8560
namespace gamemd {
int GetLogicalDriveStringsA()
{
  return __imp_GetLogicalDriveStringsA(nBufferLength, lpBuffer);
}
} // namespace gamemd

// 0x7C8566
namespace gamemd {
int ClearCommError()
{
  return __imp_ClearCommError(hFile, lpErrors, lpStat);
}
} // namespace gamemd

// 0x7C856C
namespace gamemd {
int SetCommTimeouts()
{
  return __imp_SetCommTimeouts(hFile, lpCommTimeouts);
}
} // namespace gamemd

// 0x7C8572
namespace gamemd {
int SetCommState()
{
  return __imp_SetCommState(hFile, lpDCB);
}
} // namespace gamemd

// 0x7C8578
namespace gamemd {
int GetCommState()
{
  return __imp_GetCommState(hFile, lpDCB);
}
} // namespace gamemd

// 0x7C857E
namespace gamemd {
int CreateEventA()
{
  return __imp_CreateEventA(lpEventAttributes, bManualReset, bInitialState, lpName);
}
} // namespace gamemd

// 0x7C8584
namespace gamemd {
int PurgeComm()
{
  return __imp_PurgeComm(hFile, dwFlags);
}
} // namespace gamemd

// 0x7C858A
namespace gamemd {
int SetupComm()
{
  return __imp_SetupComm(hFile, dwInQueue, dwOutQueue);
}
} // namespace gamemd

// 0x7C8590
namespace gamemd {
int GetCommMask()
{
  return __imp_GetCommMask(hFile, lpEvtMask);
}
} // namespace gamemd

// 0x7C8596
namespace gamemd {
int ResetEvent()
{
  return __imp_ResetEvent(hEvent);
}
} // namespace gamemd

// 0x7C859C
namespace gamemd {
int GetCommModemStatus()
{
  return __imp_GetCommModemStatus(hFile, lpModemStat);
}
} // namespace gamemd

// 0x7C85A2
namespace gamemd {
int GetOverlappedResult()
{
  return __imp_GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
}
} // namespace gamemd

// 0x7C85A8
namespace gamemd {
int GetVersionExA()
{
  return __imp_GetVersionExA(lpVersionInformation);
}
} // namespace gamemd

// 0x7C85AE
namespace gamemd {
int GetExitCodeProcess()
{
  return __imp_GetExitCodeProcess(hProcess, lpExitCode);
}
} // namespace gamemd

// 0x7C85B4
namespace gamemd {
int GetCurrentDirectoryA()
{
  return __imp_GetCurrentDirectoryA(nBufferLength, lpBuffer);
}
} // namespace gamemd

// 0x7C85BA
namespace gamemd {
int HeapDestroy()
{
  return __imp_HeapDestroy(hHeap);
}
} // namespace gamemd

// 0x7C85C0
namespace gamemd {
int GetComputerNameA()
{
  return __imp_GetComputerNameA(lpBuffer, nSize);
}
} // namespace gamemd

// 0x7C85C6
namespace gamemd {
int ReleaseMutex()
{
  return __imp_ReleaseMutex(hMutex);
}
} // namespace gamemd

// 0x7C85CC
namespace gamemd {
int GetClientRect()
{
  return __imp_GetClientRect(hWnd, lpRect);
}
} // namespace gamemd

// 0x7C85D2
namespace gamemd {
int DispatchMessageA()
{
  return __imp_DispatchMessageA(lpMsg);
}
} // namespace gamemd

// 0x7C85D8
namespace gamemd {
int TranslateMessage()
{
  return __imp_TranslateMessage(lpMsg);
}
} // namespace gamemd

// 0x7C85DE
namespace gamemd {
int ClientToScreen()
{
  return __imp_ClientToScreen(hWnd, lpPoint);
}
} // namespace gamemd

// 0x7C85E4
namespace gamemd {
int SetRect()
{
  return __imp_SetRect(lprc, xLeft, yTop, xRight, yBottom);
}
} // namespace gamemd

// 0x7C85F6
namespace gamemd {
int GetDlgItem()
{
  return __imp_GetDlgItem(hDlg, nIDDlgItem);
}
} // namespace gamemd

// 0x7C85FC
namespace gamemd {
int SendMessageA()
{
  return __imp_SendMessageA(hWnd, Msg, wParam, lParam);
}
} // namespace gamemd

// 0x7C8602
namespace gamemd {
int EnableWindow()
{
  return __imp_EnableWindow(hWnd, bEnable);
}
} // namespace gamemd

// 0x7C8608
namespace gamemd {
int InvalidateRect()
{
  return __imp_InvalidateRect(hWnd, lpRect, bErase);
}
} // namespace gamemd

// 0x7C860E
namespace gamemd {
int ShowWindow()
{
  return __imp_ShowWindow(hWnd, nCmdShow);
}
} // namespace gamemd

// 0x7C8614
namespace gamemd {
int SetTimer()
{
  return __imp_SetTimer(hWnd, nIDEvent, uElapse, lpTimerFunc);
}
} // namespace gamemd

// 0x7C861A
namespace gamemd {
int SendDlgItemMessageA()
{
  return __imp_SendDlgItemMessageA(hDlg, nIDDlgItem, Msg, wParam, lParam);
}
} // namespace gamemd

// 0x7C8620
namespace gamemd {
int KillTimer()
{
  return __imp_KillTimer(hWnd, uIDEvent);
}
} // namespace gamemd

// 0x7C8626
namespace gamemd {
int ValidateRect()
{
  return __imp_ValidateRect(hWnd, lpRect);
}
} // namespace gamemd

// 0x7C862C
namespace gamemd {
int GetWindowLongA()
{
  return __imp_GetWindowLongA(hWnd, nIndex);
}
} // namespace gamemd

// 0x7C8632
namespace gamemd {
int SetWindowLongA()
{
  return __imp_SetWindowLongA(hWnd, nIndex, dwNewLong);
}
} // namespace gamemd

// 0x7C8638
namespace gamemd {
int UpdateWindow()
{
  return __imp_UpdateWindow(hWnd);
}
} // namespace gamemd

// 0x7C863E
namespace gamemd {
int MessageBoxIndirectA()
{
  return __imp_MessageBoxIndirectA(lpmbp);
}
} // namespace gamemd

// 0x7C8644
namespace gamemd {
int PeekMessageA()
{
  return __imp_PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
}
} // namespace gamemd

// 0x7C864A
namespace gamemd {
int MessageBoxA()
{
  return __imp_MessageBoxA(hWnd, lpText, lpCaption, uType);
}
} // namespace gamemd

// 0x7C8650
namespace gamemd {
int ReleaseDC()
{
  return __imp_ReleaseDC(hWnd, hDC);
}
} // namespace gamemd

// 0x7C8656
namespace gamemd {
int GetDC()
{
  return __imp_GetDC(hWnd);
}
} // namespace gamemd

// 0x7C865C
namespace gamemd {
int CloseWindow()
{
  return __imp_CloseWindow(hWnd);
}
} // namespace gamemd

// 0x7C8662
namespace gamemd {
int DefWindowProcA()
{
  return __imp_DefWindowProcA(hWnd, Msg, wParam, lParam);
}
} // namespace gamemd

// 0x7C8668
namespace gamemd {
int GetActiveWindow()
{
  return __imp_GetActiveWindow();
}
} // namespace gamemd

// 0x7C866E
namespace gamemd {
int EndDialog()
{
  return __imp_EndDialog(hDlg, nResult);
}
} // namespace gamemd

// 0x7C8674
namespace gamemd {
int SetFocus()
{
  return __imp_SetFocus(hWnd);
}
} // namespace gamemd

// 0x7C867A
namespace gamemd {
int SetDlgItemTextA()
{
  return __imp_SetDlgItemTextA(hDlg, nIDDlgItem, lpString);
}
} // namespace gamemd

// 0x7C8680
namespace gamemd {
int DialogBoxParamA()
{
  return __imp_DialogBoxParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}
} // namespace gamemd

// 0x7C8686
namespace gamemd {
int DialogBoxIndirectParamA()
{
  return __imp_DialogBoxIndirectParamA(hInstance, hDialogTemplate, hWndParent, lpDialogFunc, dwInitParam);
}
} // namespace gamemd

// 0x7C868C
namespace gamemd {
int ShowCursor()
{
  return __imp_ShowCursor(bShow);
}
} // namespace gamemd

// 0x7C8692
namespace gamemd {
int SetWindowPos()
{
  return __imp_SetWindowPos(hWnd, hWndInsertAfter, X, Y, cx, cy, uFlags);
}
} // namespace gamemd

// 0x7C8698
namespace gamemd {
int DestroyWindow()
{
  return __imp_DestroyWindow(hWnd);
}
} // namespace gamemd

// 0x7C869E
namespace gamemd {
int ReleaseCapture()
{
  return __imp_ReleaseCapture();
}
} // namespace gamemd

// 0x7C86A4
namespace gamemd {
int GetCapture()
{
  return __imp_GetCapture();
}
} // namespace gamemd

// 0x7C86AA
namespace gamemd {
int SetCapture()
{
  return __imp_SetCapture(hWnd);
}
} // namespace gamemd

// 0x7C86B0
namespace gamemd {
int GetDlgCtrlID()
{
  return __imp_GetDlgCtrlID(hWnd);
}
} // namespace gamemd

// 0x7C86B6
namespace gamemd {
int ChildWindowFromPointEx()
{
  return __imp_ChildWindowFromPointEx(hwnd, pt, flags);
}
} // namespace gamemd

// 0x7C86BC
namespace gamemd {
int GetWindowRect()
{
  return __imp_GetWindowRect(hWnd, lpRect);
}
} // namespace gamemd

// 0x7C86C2
namespace gamemd {
int GetCursorPos()
{
  return __imp_GetCursorPos(lpPoint);
}
} // namespace gamemd

// 0x7C86C8
namespace gamemd {
int GetKeyState()
{
  return __imp_GetKeyState(nVirtKey);
}
} // namespace gamemd

// 0x7C86CE
namespace gamemd {
int GetAsyncKeyState()
{
  return __imp_GetAsyncKeyState(vKey);
}
} // namespace gamemd

// 0x7C86D4
namespace gamemd {
int ToAscii()
{
  return __imp_ToAscii(uVirtKey, uScanCode, lpKeyState, lpChar, uFlags);
}
} // namespace gamemd

// 0x7C86DA
namespace gamemd {
int MapVirtualKeyA()
{
  return __imp_MapVirtualKeyA(uCode, uMapType);
}
} // namespace gamemd

// 0x7C86E0
namespace gamemd {
int GetSystemMetrics()
{
  return __imp_GetSystemMetrics(nIndex);
}
} // namespace gamemd

// 0x7C86E6
namespace gamemd {
int MoveWindow()
{
  return __imp_MoveWindow(hWnd, X, Y, nWidth, nHeight, bRepaint);
}
} // namespace gamemd

// 0x7C86EC
namespace gamemd {
int AdjustWindowRectEx()
{
  return __imp_AdjustWindowRectEx(lpRect, dwStyle, bMenu, dwExStyle);
}
} // namespace gamemd

// 0x7C86F2
namespace gamemd {
int GetMenu()
{
  return __imp_GetMenu(hWnd);
}
} // namespace gamemd

// 0x7C86F8
namespace gamemd {
int AdjustWindowRect()
{
  return __imp_AdjustWindowRect(lpRect, dwStyle, bMenu);
}
} // namespace gamemd

// 0x7C86FE
namespace gamemd {
int GetSysColor()
{
  return __imp_GetSysColor(nIndex);
}
} // namespace gamemd

// 0x7C8704
namespace gamemd {
int CreateDialogParamA()
{
  return __imp_CreateDialogParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}
} // namespace gamemd

// 0x7C870A
namespace gamemd {
int EndPaint()
{
  return __imp_EndPaint(hWnd, lpPaint);
}
} // namespace gamemd

// 0x7C8710
namespace gamemd {
int BeginPaint()
{
  return __imp_BeginPaint(hWnd, lpPaint);
}
} // namespace gamemd

// 0x7C8716
namespace gamemd {
int CharToOemBuffA()
{
  return __imp_CharToOemBuffA(lpszSrc, lpszDst, cchDstLength);
}
} // namespace gamemd

// 0x7C871C
namespace gamemd {
int TranslateAcceleratorA()
{
  return __imp_TranslateAcceleratorA(hWnd, hAccTable, lpMsg);
}
} // namespace gamemd

// 0x7C8722
namespace gamemd {
int IsDialogMessageA()
{
  return __imp_IsDialogMessageA(hDlg, lpMsg);
}
} // namespace gamemd

// 0x7C8728
namespace gamemd {
int GetWindowTextA()
{
  return __imp_GetWindowTextA(hWnd, lpString, nMaxCount);
}
} // namespace gamemd

// 0x7C872E
namespace gamemd {
int IsWindowEnabled()
{
  return __imp_IsWindowEnabled(hWnd);
}
} // namespace gamemd

// 0x7C8734
namespace gamemd {
int GetNextDlgTabItem()
{
  return __imp_GetNextDlgTabItem(hDlg, hCtl, bPrevious);
}
} // namespace gamemd

// 0x7C873A
namespace gamemd {
int GetParent()
{
  return __imp_GetParent(hWnd);
}
} // namespace gamemd

// 0x7C8740
namespace gamemd {
int GetClassNameA()
{
  return __imp_GetClassNameA(hWnd, lpClassName, nMaxCount);
}
} // namespace gamemd

// 0x7C8746
namespace gamemd {
int EnumChildWindows()
{
  return __imp_EnumChildWindows(hWndParent, lpEnumFunc, lParam);
}
} // namespace gamemd

// 0x7C874C
namespace gamemd {
int IsWindowVisible()
{
  return __imp_IsWindowVisible(hWnd);
}
} // namespace gamemd

// 0x7C8752
namespace gamemd {
int SetForegroundWindow()
{
  return __imp_SetForegroundWindow(hWnd);
}
} // namespace gamemd

// 0x7C8758
namespace gamemd {
int RegisterClassA()
{
  return __imp_RegisterClassA(lpWndClass);
}
} // namespace gamemd

// 0x7C875E
namespace gamemd {
int CreateWindowExA()
{
  return __imp_CreateWindowExA(
           dwExStyle,
           lpClassName,
           lpWindowName,
           dwStyle,
           X,
           Y,
           nWidth,
           nHeight,
           hWndParent,
           hMenu,
           hInstance,
           lpParam);
}
} // namespace gamemd

// 0x7C8764
namespace gamemd {
int CallWindowProcA()
{
  return __imp_CallWindowProcA(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
}
} // namespace gamemd

// 0x7C876A
namespace gamemd {
int BringWindowToTop()
{
  return __imp_BringWindowToTop(hWnd);
}
} // namespace gamemd

// 0x7C8770
namespace gamemd {
int GetWindow()
{
  return __imp_GetWindow(hWnd, uCmd);
}
} // namespace gamemd

// 0x7C8776
namespace gamemd {
int IntersectRect()
{
  return __imp_IntersectRect(lprcDst, lprcSrc1, lprcSrc2);
}
} // namespace gamemd

// 0x7C877C
namespace gamemd {
int WindowFromPoint()
{
  return __imp_WindowFromPoint(Point);
}
} // namespace gamemd

// 0x7C8782
namespace gamemd {
int GetUpdateRect()
{
  return __imp_GetUpdateRect(hWnd, lpRect, bErase);
}
} // namespace gamemd

// 0x7C8788
namespace gamemd {
int GetFocus()
{
  return __imp_GetFocus();
}
} // namespace gamemd

// 0x7C878E
namespace gamemd {
int LockWindowUpdate()
{
  return __imp_LockWindowUpdate(hWndLock);
}
} // namespace gamemd

// 0x7C8794
namespace gamemd {
int ScreenToClient()
{
  return __imp_ScreenToClient(hWnd, lpPoint);
}
} // namespace gamemd

// 0x7C879A
namespace gamemd {
int GetKeyNameTextA()
{
  return __imp_GetKeyNameTextA(lParam, lpString, cchSize);
}
} // namespace gamemd

// 0x7C87A0
namespace gamemd {
int CreateDialogIndirectParamA()
{
  return __imp_CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, dwInitParam);
}
} // namespace gamemd

// 0x7C87A6
namespace gamemd {
int SetCursorPos()
{
  return __imp_SetCursorPos(X, Y);
}
} // namespace gamemd

// 0x7C87AC
namespace gamemd {
int FindWindowA()
{
  return __imp_FindWindowA(lpClassName, lpWindowName);
}
} // namespace gamemd

// 0x7C87B2
namespace gamemd {
int PostQuitMessage()
{
  __imp_PostQuitMessage(nExitCode); /*0x7c87b2*/
}
} // namespace gamemd

// 0x7C87B8
namespace gamemd {
int SetCursor()
{
  return __imp_SetCursor(hCursor);
}
} // namespace gamemd

// 0x7C87BE
namespace gamemd {
int LoadCursorA()
{
  return __imp_LoadCursorA(hInstance, lpCursorName);
}
} // namespace gamemd

// 0x7C87C4
namespace gamemd {
int ChildWindowFromPoint()
{
  return __imp_ChildWindowFromPoint(hWndParent, Point);
}
} // namespace gamemd

// 0x7C87CA
namespace gamemd {
int WinHelpA()
{
  return __imp_WinHelpA(hWndMain, lpszHelp, uCommand, dwData);
}
} // namespace gamemd

// 0x7C87D0
namespace gamemd {
int GetWindowContextHelpId()
{
  return __imp_GetWindowContextHelpId(a1);
}
} // namespace gamemd

// 0x7C87D6
namespace gamemd {
int RedrawWindow()
{
  return __imp_RedrawWindow(hWnd, lprcUpdate, hrgnUpdate, flags);
}
} // namespace gamemd

// 0x7C87DC
namespace gamemd {
int SetActiveWindow()
{
  return __imp_SetActiveWindow(hWnd);
}
} // namespace gamemd

// 0x7C87E2
namespace gamemd {
int RegisterHotKey()
{
  return __imp_RegisterHotKey(hWnd, id, fsModifiers, vk);
}
} // namespace gamemd

// 0x7C87E8
namespace gamemd {
int LoadIconA()
{
  return __imp_LoadIconA(hInstance, lpIconName);
}
} // namespace gamemd

// 0x7C87EE
namespace gamemd {
int GetForegroundWindow()
{
  return __imp_GetForegroundWindow();
}
} // namespace gamemd

// 0x7C87F4
namespace gamemd {
int GetTopWindow()
{
  return __imp_GetTopWindow(hWnd);
}
} // namespace gamemd

// 0x7C87FA
namespace gamemd {
int WaitForInputIdle()
{
  return __imp_WaitForInputIdle(hProcess, dwMilliseconds);
}
} // namespace gamemd

// 0x7C8800
namespace gamemd {
int CheckDlgButton()
{
  return __imp_CheckDlgButton(hDlg, nIDButton, uCheck);
}
} // namespace gamemd

// 0x7C8806
namespace gamemd {
int IsDlgButtonChecked()
{
  return __imp_IsDlgButtonChecked(hDlg, nIDButton);
}
} // namespace gamemd

// 0x7C880C
namespace gamemd {
int CreateDIBSection()
{
  return __imp_CreateDIBSection(hdc, pbmi, usage, ppvBits, hSection, offset);
}
} // namespace gamemd

// 0x7C8812
namespace gamemd {
int DeleteObject()
{
  return __imp_DeleteObject(ho);
}
} // namespace gamemd

// 0x7C8818
namespace gamemd {
int GetTextMetricsA()
{
  return __imp_GetTextMetricsA(hdc, lptm);
}
} // namespace gamemd

// 0x7C881E
namespace gamemd {
int SelectObject()
{
  return __imp_SelectObject(hdc, h);
}
} // namespace gamemd

// 0x7C8824
namespace gamemd {
int CreateFontIndirectA()
{
  return __imp_CreateFontIndirectA(lplf);
}
} // namespace gamemd

// 0x7C882A
namespace gamemd {
int GetDeviceCaps()
{
  return __imp_GetDeviceCaps(hdc, index);
}
} // namespace gamemd

// 0x7C8830
namespace gamemd {
int TextOutA()
{
  return __imp_TextOutA(hdc, x, y, lpString, c);
}
} // namespace gamemd

// 0x7C8836
namespace gamemd {
int SetTextColor()
{
  return __imp_SetTextColor(hdc, color);
}
} // namespace gamemd

// 0x7C883C
namespace gamemd {
int SetBkColor()
{
  return __imp_SetBkColor(hdc, color);
}
} // namespace gamemd

// 0x7C8842
namespace gamemd {
int SetBkMode()
{
  return __imp_SetBkMode(hdc, mode);
}
} // namespace gamemd

// 0x7C8848
namespace gamemd {
int CreateSolidBrush()
{
  return __imp_CreateSolidBrush(color);
}
} // namespace gamemd

// 0x7C884E
namespace gamemd {
int GetTextColor()
{
  return __imp_GetTextColor(hdc);
}
} // namespace gamemd

// 0x7C8854
namespace gamemd {
int GetBkColor()
{
  return __imp_GetBkColor(hdc);
}
} // namespace gamemd

// 0x7C885A
namespace gamemd {
int GetBkMode()
{
  return __imp_GetBkMode(hdc);
}
} // namespace gamemd

// 0x7C8860
namespace gamemd {
int GetStockObject()
{
  return __imp_GetStockObject(i);
}
} // namespace gamemd

// 0x7C8866
namespace gamemd {
int RestoreDC()
{
  return __imp_RestoreDC(hdc, nSavedDC);
}
} // namespace gamemd

// 0x7C886C
namespace gamemd {
int DPtoLP()
{
  return __imp_DPtoLP(hdc, lppt, c);
}
} // namespace gamemd

// 0x7C8872
namespace gamemd {
int SetWindowOrgEx()
{
  return __imp_SetWindowOrgEx(hdc, x, y, lppt);
}
} // namespace gamemd

// 0x7C8878
namespace gamemd {
int SetViewportOrgEx()
{
  return __imp_SetViewportOrgEx(hdc, x, y, lppt);
}
} // namespace gamemd

// 0x7C887E
namespace gamemd {
int ModifyWorldTransform()
{
  return __imp_ModifyWorldTransform(hdc, lpxf, mode);
}
} // namespace gamemd

// 0x7C8884
namespace gamemd {
int SetGraphicsMode()
{
  return __imp_SetGraphicsMode(hdc, iMode);
}
} // namespace gamemd

// 0x7C888A
namespace gamemd {
int SaveDC()
{
  return __imp_SaveDC(hdc);
}
} // namespace gamemd

// 0x7C8890
namespace gamemd {
int RegCloseKey()
{
  return __imp_RegCloseKey(hKey);
}
} // namespace gamemd

// 0x7C8896
namespace gamemd {
int RegQueryValueExA()
{
  return __imp_RegQueryValueExA(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}
} // namespace gamemd

// 0x7C889C
namespace gamemd {
int RegOpenKeyExA()
{
  return __imp_RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult);
}
} // namespace gamemd

// 0x7C88A2
namespace gamemd {
int RegDeleteValueA()
{
  return __imp_RegDeleteValueA(hKey, lpValueName);
}
} // namespace gamemd

// 0x7C88A8
namespace gamemd {
int RegSetValueExA()
{
  return __imp_RegSetValueExA(hKey, lpValueName, Reserved, dwType, lpData, cbData);
}
} // namespace gamemd

// 0x7C88AE
namespace gamemd {
int RegCreateKeyExA()
{
  return __imp_RegCreateKeyExA(
           hKey,
           lpSubKey,
           Reserved,
           lpClass,
           dwOptions,
           samDesired,
           lpSecurityAttributes,
           phkResult,
           lpdwDisposition);
}
} // namespace gamemd

// 0x7C88B4
namespace gamemd {
int RegEnumKeyExA()
{
  return __imp_RegEnumKeyExA(hKey, dwIndex, lpName, lpcchName, lpReserved, lpClass, lpcchClass, lpftLastWriteTime);
}
} // namespace gamemd

// 0x7C88BA
namespace gamemd {
int RegDeleteKeyA()
{
  return __imp_RegDeleteKeyA(hKey, lpSubKey);
}
} // namespace gamemd

// 0x7C88C0
namespace gamemd {
int RegQueryInfoKeyA()
{
  return __imp_RegQueryInfoKeyA(
           hKey,
           lpClass,
           lpcchClass,
           lpReserved,
           lpcSubKeys,
           lpcbMaxSubKeyLen,
           lpcbMaxClassLen,
           lpcValues,
           lpcbMaxValueNameLen,
           lpcbMaxValueLen,
           lpcbSecurityDescriptor,
           lpftLastWriteTime);
}
} // namespace gamemd

// 0x7C88C6
namespace gamemd {
int FindExecutableA()
{
  return __imp_FindExecutableA(lpFile, lpDirectory, lpResult);
}
} // namespace gamemd

// 0x7C88CC
namespace gamemd {
int OleRun()
{
  return __imp_OleRun(pUnknown);
}
} // namespace gamemd

// 0x7C88D2
namespace gamemd {
int CoCreateInstance()
{
  return __imp_CoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
}
} // namespace gamemd

// 0x7C88D8
namespace gamemd {
int OleLoadFromStream()
{
  return __imp_OleLoadFromStream(pStm, iidInterface, ppvObj);
}
} // namespace gamemd

// 0x7C88DE
namespace gamemd {
int OleSaveToStream()
{
  return __imp_OleSaveToStream(pPStm, pStm);
}
} // namespace gamemd

// 0x7C88E4
namespace gamemd {
int CLSIDFromString()
{
  return __imp_CLSIDFromString(lpsz, pclsid);
}
} // namespace gamemd

// 0x7C88EA
namespace gamemd {
int StringFromCLSID()
{
  return __imp_StringFromCLSID(rclsid, lplpsz);
}
} // namespace gamemd

// 0x7C88F0
namespace gamemd {
int CoFileTimeNow()
{
  return __imp_CoFileTimeNow(lpFileTime);
}
} // namespace gamemd

// 0x7C88F6
namespace gamemd {
int StgCreateDocfile()
{
  return __imp_StgCreateDocfile(pwcsName, grfMode, reserved, ppstgOpen);
}
} // namespace gamemd

// 0x7C88FC
namespace gamemd {
int StgOpenStorage()
{
  return __imp_StgOpenStorage(pwcsName, pstgPriority, grfMode, snbExclude, reserved, ppstgOpen);
}
} // namespace gamemd

// 0x7C8902
namespace gamemd {
int StringFromGUID2()
{
  return __imp_StringFromGUID2(rguid, lpsz, cchMax);
}
} // namespace gamemd

// 0x7C8908
namespace gamemd {
int CoDisconnectObject()
{
  return __imp_CoDisconnectObject(pUnk, dwReserved);
}
} // namespace gamemd

// 0x7C890E
namespace gamemd {
int CoRegisterClassObject()
{
  return __imp_CoRegisterClassObject(rclsid, pUnk, dwClsContext, flags, lpdwRegister);
}
} // namespace gamemd

// 0x7C8914
namespace gamemd {
int OleInitialize()
{
  return __imp_OleInitialize(pvReserved);
}
} // namespace gamemd

// 0x7C8920
namespace gamemd {
int CoRevokeClassObject()
{
  return __imp_CoRevokeClassObject(dwRegister);
}
} // namespace gamemd

// 0x7C8926
namespace gamemd {
int SysAllocString()
{
  return __imp_SysAllocString(psz);
}
} // namespace gamemd

// 0x7C892C
namespace gamemd {
int SysFreeString()
{
  __imp_SysFreeString(bstrString); /*0x7c892c*/
}
} // namespace gamemd

// 0x7C8932
namespace gamemd {
int LoadTypeLib()
{
  return __imp_LoadTypeLib(szFile, pptlib);
}
} // namespace gamemd

// 0x7C8938
namespace gamemd {
int RevokeActiveObject()
{
  return __imp_RevokeActiveObject(dwRegister, pvReserved);
}
} // namespace gamemd

// 0x7C893E
namespace gamemd {
int RegisterActiveObject()
{
  return __imp_RegisterActiveObject(punk, rclsid, dwFlags, pdwRegister);
}
} // namespace gamemd

// 0x7C8944
namespace gamemd {
int _1timeGetTime()
{
  return timeGetTime();
}
} // namespace gamemd

// 0x7C894A
namespace gamemd {
int timeEndPeriod()
{
  return __imp_timeEndPeriod(uPeriod);
}
} // namespace gamemd

// 0x7C8950
namespace gamemd {
int timeKillEvent()
{
  return __imp_timeKillEvent(uTimerID);
}
} // namespace gamemd

// 0x7C8956
namespace gamemd {
int timeSetEvent()
{
  return __imp_timeSetEvent(uDelay, uResolution, fptc, dwUser, fuEvent);
}
} // namespace gamemd

// 0x7C895C
namespace gamemd {
int timeBeginPeriod()
{
  return __imp_timeBeginPeriod(uPeriod);
}
} // namespace gamemd

// 0x7C8962
namespace gamemd {
int htonl()
{
  return __imp_htonl(hostlong);
}
} // namespace gamemd

// 0x7C8968
namespace gamemd {
int htons()
{
  int result; // eax

  IDA_LOWORD(result) = __imp_htons(hostshort); /*0x7c8968*/
  return result;
}
} // namespace gamemd

// 0x7C896E
namespace gamemd {
int ntohl()
{
  return __imp_ntohl(netlong);
}
} // namespace gamemd

// 0x7C8974
namespace gamemd {
int ntohs()
{
  int result; // eax

  IDA_LOWORD(result) = __imp_ntohs(netshort); /*0x7c8974*/
  return result;
}
} // namespace gamemd

// 0x7C897A
namespace gamemd {
int WSAGetLastError()
{
  return __imp_WSAGetLastError();
}
} // namespace gamemd

// 0x7C8980
namespace gamemd {
int gethostbyname()
{
  return __imp_gethostbyname(name);
}
} // namespace gamemd

// 0x7C8986
namespace gamemd {
int ntoainet()
{
  return inet_ntoa(in);
}
} // namespace gamemd

// 0x7C898C
namespace gamemd {
int getsockopt()
{
  return __imp_getsockopt(s, level, optname, optval, optlen);
}
} // namespace gamemd

// 0x7C8998
namespace gamemd {
int bind()
{
  return __imp_bind(s, name, namelen);
}
} // namespace gamemd

// 0x7C899E
namespace gamemd {
int socket()
{
  return __imp_socket(af, type, protocol);
}
} // namespace gamemd

// 0x7C89A4
namespace gamemd {
int setsockopt()
{
  return __imp_setsockopt(s, level, optname, optval, optlen);
}
} // namespace gamemd

// 0x7C89AA
namespace gamemd {
int recvfrom()
{
  return __imp_recvfrom(s, buf, len, flags, from, fromlen);
}
} // namespace gamemd

// 0x7C89B0
namespace gamemd {
int sendto()
{
  return __imp_sendto(s, buf, len, flags, to, tolen);
}
} // namespace gamemd

// 0x7C89B6
namespace gamemd {
int WSACleanup()
{
  return __imp_WSACleanup();
}
} // namespace gamemd

// 0x7C89BC
namespace gamemd {
int WSAAsyncSelect()
{
  return (AnimClass *)__imp_WSAAsyncSelect((SOCKET)retstr, (HWND)s, (u_int)hWnd, wMsg);
}
} // namespace gamemd

// 0x7C89C2
namespace gamemd {
int EnumProtocolsA()
{
  return __imp_EnumProtocolsA(lpiProtocols, lpProtocolBuffer, lpdwBufferLength);
}
} // namespace gamemd

// 0x7C89C8
namespace gamemd {
int WSAStartup()
{
  return __imp_WSAStartup(wVersionRequested, lpWSAData);
}
} // namespace gamemd

// 0x7C89CE
namespace gamemd {
int gethostname()
{
  return __imp_gethostname(name, namelen);
}
} // namespace gamemd

// 0x7C89D4
namespace gamemd {
int DirectDrawCreate()
{
  return __imp_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
}
} // namespace gamemd

// 0x7C89DA
namespace gamemd {
int DirectSoundCreate()
{
  return __imp_DirectSoundCreate(pcGuidDevice, ppDS, pUnkOuter);
}
} // namespace gamemd

// 0x7C89E0
namespace gamemd {
int VerQueryValueA()
{
  return __imp_VerQueryValueA(pBlock, lpSubBlock, lplpBuffer, puLen);
}
} // namespace gamemd

// 0x7C89E6
namespace gamemd {
int GetFileVersionInfoA()
{
  return __imp_GetFileVersionInfoA(lptstrFilename, dwHandle, dwLen, lpData);
}
} // namespace gamemd

// 0x7C89EC
namespace gamemd {
int GetFileVersionInfoSizeA()
{
  return __imp_GetFileVersionInfoSizeA(lptstrFilename, lpdwHandle);
}
} // namespace gamemd

// 0x7C8A16
namespace gamemd {
int InitCommonControls()
{
  __imp_InitCommonControls(); /*0x7c8a16*/
}
} // namespace gamemd

// 0x7C8A1C
namespace gamemd {
int ImmAssociateContext()
{
  return (int)__imp_ImmAssociateContext(a1, a2);
}
} // namespace gamemd

// 0x7C8A22
namespace gamemd {
int ImmGetContext()
{
  return __imp_ImmGetContext(a1);
}
} // namespace gamemd

// 0x7C8A28
namespace gamemd {
int ImmNotifyIME()
{
  return __imp_ImmNotifyIME(a1, dwAction, dwIndex, dwValue);
}
} // namespace gamemd

// 0x7C8A2E
namespace gamemd {
int ImmGetCandidateListA()
{
  return __imp_ImmGetCandidateListA(a1, deIndex, lpCandList, dwBufLen);
}
} // namespace gamemd

// 0x7C8A34
namespace gamemd {
int ImmGetCompositionStringA()
{
  return __imp_ImmGetCompositionStringA(a1, a2, lpBuf, dwBufLen);
}
} // namespace gamemd

// 0x7C8A3A
namespace gamemd {
int ImmSetOpenStatus()
{
  return __imp_ImmSetOpenStatus(a1, a2);
}
} // namespace gamemd

// 0x7C8A40
namespace gamemd {
int _BinkClose_4()
{
  return BinkClose(a1);
}
} // namespace gamemd

// 0x7C8A46
namespace gamemd {
int _BinkDDSurfaceType_4()
{
  return BinkDDSurfaceType(a1);
}
} // namespace gamemd

// 0x7C8A4C
namespace gamemd {
int _BinkSetVolume_8()
{
  return BinkSetVolume(a1, a2);
}
} // namespace gamemd

// 0x7C8A52
namespace gamemd {
int _BinkGetError_0()
{
  return BinkGetError();
}
} // namespace gamemd

// 0x7C8A58
namespace gamemd {
int _BinkOpen_8()
{
  return BinkOpen(a1, a2);
}
} // namespace gamemd

// 0x7C8A5E
namespace gamemd {
int _BinkSetSoundSystem_8()
{
  return BinkSetSoundSystem(a1, a2);
}
} // namespace gamemd

// 0x7C8A64
namespace gamemd {
int _BinkOpenDirectSound_4()
{
  return BinkOpenDirectSound(a1);
}
} // namespace gamemd

// 0x7C8A6A
namespace gamemd {
int _BinkGoto_12()
{
  return BinkGoto(a1, a2, a3);
}
} // namespace gamemd

// 0x7C8A70
namespace gamemd {
int _BinkPause_8()
{
  return BinkPause(a1, a2);
}
} // namespace gamemd

// 0x7C8A76
namespace gamemd {
int _BinkNextFrame_4()
{
  return BinkNextFrame(a1);
}
} // namespace gamemd

// 0x7C8A7C
namespace gamemd {
int _BinkCopyToBuffer_28()
{
  return BinkCopyToBuffer(a1, a2, a3, a4, a5, a6, a7);
}
} // namespace gamemd

// 0x7C8A82
namespace gamemd {
int _BinkDoFrame_4()
{
  return BinkDoFrame(a1);
}
} // namespace gamemd

// 0x7C8A88
namespace gamemd {
int _BinkWait_4()
{
  return BinkWait(a1);
}
} // namespace gamemd

// 0x7C8A8E
namespace gamemd {
void E4Recv_7C8A8E::__1type_info_UAE_XZ()
{

  void *v2; // esi

  *(unsigned int *)this = &off_7F9594; /*0x7c8a93*/
  _lock(27); /*0x7c8a99*/
  v2 = (void *)*((unsigned int *)this + 1); /*0x7c8a9e*/
  if ( v2 ) /*0x7c8aa4*/
    free(v2); /*0x7c8aa7*/
  _unlock(27); /*0x7c8aaf*/

}
} // namespace gamemd

// 0x7C8AB7
namespace gamemd {
ObjectClass * E4Recv_7C8AB7::___Gtype_info_UAEPAXI_Z(char a2)
{

  __1type_info_UAE_XZ(this); /*0x7c8aba*/
  if ( (a2 & 1) != 0 ) /*0x7c8ac4*/
    RA2_OPDEL(this); /*0x7c8ac7*/
  return (ObjectClass *)this; /*0x7c8acf*/

}
} // namespace gamemd

// 0x7C8AD3
namespace gamemd {
BOOL E4Recv_7C8AD3::__8type_info_QBEHABV0__Z(int a2)
{

  return strcmp((const char *)(a2 + 9), (unsigned char *)this + 9) == 0; /*0x7c8aeb*/

}
} // namespace gamemd

// 0x7C8AEE
namespace gamemd {
BOOL E4Recv_7C8AEE::__9type_info_QBEHABV0__Z(int a2)
{

  return strcmp((const char *)(a2 + 9), (unsigned char *)this + 9) != 0; /*0x7c8b07*/

}
} // namespace gamemd

// 0x7C8B0A
namespace gamemd {
BOOL E4Recv_7C8B0A::_before_type_info__QBEHABV1__Z(const struct type_info * a2)
{

  return strcmp((const char *)a2 + 9, (const char *)this + 9) > 0; /*0x7c8b26*/

}
} // namespace gamemd

// 0x7C8B29
namespace gamemd {
char * E4Recv_7C8B29::sub_7C8B29()
{

  return (unsigned char *)this + 8; /*0x7c8b2c*/

}
} // namespace gamemd

// 0x7C8B2D
namespace gamemd {
unsigned int * E4Recv_7C8B2D::sub_7C8B2D(int a2)
{

  *this = &off_7F9594; /*0x7c8b2f*/
  return this; /*0x7c8b35*/

}
} // namespace gamemd

// 0x7C8B38
namespace gamemd {
ObjectClass * E4Recv_7C8B38::sub_7C8B38(int a2)
{

  return (ObjectClass *)this; /*0x7c8b3a*/

}
} // namespace gamemd

// 0x7C8B3D
namespace gamemd {
void RA2_OPDEL(void * Block)
{
  free(Block); /*0x7c8b41*/
}
} // namespace gamemd

// 0x7C8CEA
namespace gamemd {
char * swap(char * a1, char * a2, int a3)
{
  char *result; // eax
  char *v4; // ecx
  int v5; // esi
  char v6; // dl

  result = a1; /*0x7c8cea*/
  v4 = a2; /*0x7c8cee*/
  if ( a1 != a2 && a3 ) /*0x7c8d00*/
  {
    v5 = a3; /*0x7c8d03*/
    do /*0x7c8d11*/
    {
      v6 = *result; /*0x7c8d08*/
      *result++ = *v4; /*0x7c8d0a*/
      *v4++ = v6; /*0x7c8d0d*/
      --v5; /*0x7c8d10*/
    }
    while ( v5 ); /*0x7c8d11*/
  }
  return result; /*0x7c8d14*/
}
} // namespace gamemd

// 0x7C8DF0
namespace gamemd {
char * strrchr(const char * Str, int Ch)
{
  unsigned int v2; // ecx
  const char *v3; // edi
  bool v4; // zf
  char *v5; // edi

  v2 = strlen(Str) + 1; /*0x7c8dff*/
  v3 = &Str[v2 - 1]; /*0x7c8e01*/
  do /*0x7c8e06*/
  {
    if ( !v2 ) /*0x7c8e06*/
      break; /*0x7c8e06*/
    v4 = *v3-- == (uint8_t)Ch; /*0x7c8e06*/
    --v2; /*0x7c8e06*/
  }
  while ( !v4 ); /*0x7c8e06*/
  v5 = (char *)(v3 + 1); /*0x7c8e08*/
  if ( *v5 == (unsigned char)Ch ) /*0x7c8e0b*/
    return v5; /*0x7c8e11*/
  else
    return 0; /*0x7c8e0d*/
}
} // namespace gamemd

// 0x7C8E17
namespace gamemd {
int operator new(size_t Size)
{
  return _nh_malloc(Size, 1); /*0x7c8e24*/
}
} // namespace gamemd

// 0x7C8EC0
namespace gamemd {
unsigned long long _allmul(long long a1, long long a2)
{
  if ( IDA_HIDWORD(a1) | IDA_HIDWORD(a2) ) /*0x7c8ec8*/
    return a1 * a2; /*0x7c8eec*/
  else
    return (unsigned int)a2 * (uint64_t)(unsigned int)a1; /*0x7c8ed4*/
}
} // namespace gamemd

// 0x7C8EF4
namespace gamemd {
int sprintf(char *const Buffer, ObjectClass * aP1, INIClass * aP2)
{
  int v2; // eax
  bool v3; // sf
  int v4; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, Format);
  File._base = Buffer; /*0x7c8efe*/
  File._ptr = Buffer; /*0x7c8f01*/
  File._flag = 66; /*0x7c8f07*/
  File._cnt = 0x7FFFFFFF; /*0x7c8f15*/
  v2 = _output(&File, (int)Format, (int)va); /*0x7c8f1d*/
  v3 = --File._cnt < 0; /*0x7c8f25*/
  v4 = v2; /*0x7c8f28*/
  if ( v3 ) /*0x7c8f2a*/
    _flsbuf(0, &File); /*0x7c8f3a*/
  else
    *File._ptr = 0; /*0x7c8f2f*/
  return v4; /*0x7c8f43*/
}
} // namespace gamemd

// 0x7C8F5D
namespace gamemd {
void nullsub_268()
{
  ; /*0x7c8f5d*/
}
} // namespace gamemd

// 0x7C8FB0
namespace gamemd {
int __CIpow()
{
  CIpow_Helper(x, IDA_HIDWORD(x), IDA_LODWORD(y), IDA_HIDWORD(y)); /*0x7c8fc0*/
  return y; /*0x7c8fc5*/
}
} // namespace gamemd

// 0x7C8FC9
namespace gamemd {
double pow(double X, double Y)
{
  _fload_withFB(); /*0x7c8fcd*/
  return CIpow_Helper(IDA_LODWORD(X), IDA_HIDWORD(X), IDA_LODWORD(Y), IDA_HIDWORD(Y));
}
} // namespace gamemd

// 0x7C92D0
namespace gamemd {
int _alldiv(unsigned long long a1, long long a2)
{
  int v2; // edi
  int v3; // eax
  uint64_t v4; // rtt
  int64_t v5; // rax
  uint64_t v6; // rcx
  uint64_t v7; // rax
  unsigned int v8; // esi
  uint64_t v9; // rax

  v2 = 0; /*0x7c92d3*/
  if ( (a1 & 0x8000000000000000uLL) != 0LL ) /*0x7c92db*/
  {
    v2 = 1; /*0x7c92dd*/
    IDA_HIDWORD(a1) = -IDA_HIDWORD(a1) - ((unsigned int)a1 != 0); /*0x7c92e9*/
    IDA_LODWORD(a1) = -(int)a1; /*0x7c92ed*/
  }
  v3 = IDA_HIDWORD(a2); /*0x7c92f1*/
  if ( a2 < 0 ) /*0x7c92f7*/
  {
    ++v2; /*0x7c92f9*/
    v3 = -IDA_HIDWORD(a2) - ((unsigned int)a2 != 0); /*0x7c9302*/
    IDA_HIDWORD(a2) = v3; /*0x7c9305*/
    IDA_LODWORD(a2) = -(int)a2; /*0x7c9309*/
  }
  if ( v3 ) /*0x7c930f*/
  {
    v6 = IDA___PAIR64__(v3, a2); /*0x7c932b*/
    v7 = a1; /*0x7c9333*/
    do /*0x7c9341*/
    {
      v6 >>= 1; /*0x7c9337*/
      v7 >>= 1; /*0x7c933b*/
    }
    while ( IDA_HIDWORD(v6) ); /*0x7c9341*/
    v8 = v7 / (unsigned int)v6; /*0x7c9345*/
    v9 = v8 * (uint64_t)(unsigned int)a2; /*0x7c9351*/
    if ( __CFADD__(IDA_HIDWORD(a2) * v8, IDA_HIDWORD(v9)) || (IDA_HIDWORD(v9) = (a2 * (uint64_t)v8) >> 32, v9 > a1) ) /*0x7c9363*/
      --v8; /*0x7c9365*/
    v5 = v8; /*0x7c9368*/
  }
  else
  {
    IDA_LODWORD(v4) = a1; /*0x7c9323*/
    IDA_HIDWORD(v4) = IDA_HIDWORD(a1) % (unsigned int)a2; /*0x7c9323*/
    IDA_LODWORD(v5) = v4 / (unsigned int)a2; /*0x7c9323*/
    IDA_HIDWORD(v5) = IDA_HIDWORD(a1) / (unsigned int)a2; /*0x7c9325*/
  }
  if ( v2 == 1 ) /*0x7c936b*/
    return -v5; /*0x7c9371*/
  return v5; /*0x7c9374*/
}
} // namespace gamemd

// 0x7C9380
namespace gamemd {
unsigned int _aulldiv(unsigned long long a1, long long a2)
{
  uint64_t v3; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  uint64_t v6; // rax
  char v7; // cf
  unsigned int v8; // esi
  uint64_t v9; // rax

  if ( IDA_HIDWORD(a2) ) /*0x7c9388*/
  {
    v4 = IDA_HIDWORD(a2); /*0x7c93a2*/
    v5 = a2; /*0x7c93a4*/
    v6 = a1; /*0x7c93ac*/
    do /*0x7c93ba*/
    {
      v7 = v4 & 1; /*0x7c93b0*/
      v4 >>= 1; /*0x7c93b0*/
      v5 = (v5 >> 1) | (v7 << 31); /*0x7c93b2*/
      v6 >>= 1; /*0x7c93b4*/
    }
    while ( v4 ); /*0x7c93ba*/
    v8 = v6 / v5; /*0x7c93be*/
    v9 = v8 * (uint64_t)(unsigned int)a2; /*0x7c93ca*/
    if ( __CFADD__(IDA_HIDWORD(a2) * v8, IDA_HIDWORD(v9)) || (IDA_HIDWORD(v9) = (a2 * (uint64_t)v8) >> 32, v9 > a1) ) /*0x7c93dc*/
      --v8; /*0x7c93de*/
    return v8; /*0x7c93e1*/
  }
  else
  {
    IDA_LODWORD(v3) = a1; /*0x7c939c*/
    IDA_HIDWORD(v3) = IDA_HIDWORD(a1) % (unsigned int)a2; /*0x7c939c*/
    return v3 / (unsigned int)a2; /*0x7c939c*/
  }
}
} // namespace gamemd

// 0x7C93E8
namespace gamemd {
void free(void * Block)
{
  int result; // eax
  int v2; // eax

  if ( Block ) /*0x7c93ef*/
  {
    _lock(9); /*0x7c93f3*/
    v2 = __sbh_find_block(Block); /*0x7c93f9*/
    if ( v2 ) /*0x7c9402*/
    {
      __sbh_free_block(v2, Block); /*0x7c9406*/
      return _unlock(9); /*0x7c940d*/
    }
    else
    {
      _unlock(9); /*0x7c9419*/
      return HeapFree(hHeap, 0, Block); /*0x7c9428*/
    }
  }
  return result; /*0x7c9415*/
}
} // namespace gamemd

// 0x7C9430
namespace gamemd {
void * malloc(AbstractClass * aP0)
{
  return (void *)_nh_malloc(aP0, dword_B782C4); /*0x7c9441*/
}
} // namespace gamemd

// 0x7C9442
namespace gamemd {
int _nh_malloc(IUnknown * aP0, int a2)
{
  int result; // eax

  if ( aP0 > 0xFFFFFFE0 ) /*0x7c9447*/
    return 0; /*0x7c946b*/
  while ( 1 ) /*0x7c944d*/
  {
    result = _heap_alloc(aP0); /*0x7c944d*/
    if ( result || !a2 ) /*0x7c945b*/
      break; /*0x7c945b*/
    if ( !_callnewh(aP0) ) /*0x7c9461*/
      return 0; /*0x7c9469*/
  }
  return result; /*0x7c946d*/
}
} // namespace gamemd

// 0x7C946E
namespace gamemd {
LPVOID _heap_alloc(IUnknown * aP0)
{
  int v1; // esi
  unsigned int *v2; // edi

  v1 = aP0; /*0x7c946f*/
  if ( aP0 <= dword_87C584 ) /*0x7c947a*/
  {
    _lock(9); /*0x7c947e*/
    v2 = __sbh_alloc_block(aP0); /*0x7c948b*/
    _unlock(9); /*0x7c948d*/
    if ( v2 ) /*0x7c9497*/
      return v2; /*0x7c9499*/
  }
  if ( !aP0 ) /*0x7c949f*/
    v1 = 1; /*0x7c94a3*/
  return HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0); /*0x7c94b9*/
}
} // namespace gamemd

// 0x7C978A
namespace gamemd {
int atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != 0) - 1; /*0x7c979b*/
}
} // namespace gamemd

// 0x7C97CB
namespace gamemd {
int _toupper(int C)
{
  return C - 32; /*0x7c97d2*/
}
} // namespace gamemd

// 0x7C9AE3
namespace gamemd {
int __isascii(int C)
{
  return (unsigned int)C < 0x80; /*0x7c9aef*/
}
} // namespace gamemd

// 0x7C9AF0
namespace gamemd {
int __toascii(int C)
{
  return C & 0x7F; /*0x7c9af7*/
}
} // namespace gamemd

// 0x7C9BFD
namespace gamemd {
int atoi(const char * String)
{
  return atol(String); /*0x7c9c07*/
}
} // namespace gamemd

// 0x7C9DBD
namespace gamemd {
int globalHelper_0C9DBD(int a1, CCINIClass * aP1, int a3)
{
  return strtoxl(a1, aP1, a3, 0); /*0x7c9dd3*/
}
} // namespace gamemd

// 0x7C9FD9
namespace gamemd {
unsigned int strtoul(const char * String, char ** EndPtr, int Radix)
{
  return strtoxl((uint8_t *)String, (uint8_t **)EndPtr, Radix, 1); /*0x7c9fef*/
}
} // namespace gamemd

// 0x7C9FF0
namespace gamemd {
void _makepath(char * Buffer, const char * Drive, const char * Dir, const char * FName, const char * Ext)
{
  char *v5; // esi
  const char *v6; // ecx
  char v7; // al
  uint8_t v8; // al
  const char *v9; // ecx
  char v10; // al
  int result; // eax
  char v12; // cl

  if ( Drive && *Drive ) /*0x7c9ffb*/
  {
    *Buffer = *Drive; /*0x7ca004*/
    Buffer[1] = 58; /*0x7ca007*/
    v5 = Buffer + 2; /*0x7ca00a*/
  }
  else
  {
    v5 = Buffer; /*0x7ca00d*/
  }
  v6 = Dir; /*0x7ca015*/
  if ( Dir ) /*0x7ca017*/
  {
    v7 = *Dir; /*0x7ca019*/
    if ( *Dir ) /*0x7ca019*/
    {
      do /*0x7ca028*/
      {
        *v5 = v7; /*0x7ca01f*/
        v7 = v6[1]; /*0x7ca021*/
        ++v5; /*0x7ca024*/
        ++v6; /*0x7ca025*/
      }
      while ( v7 ); /*0x7ca028*/
      v8 = *_mbsdec((const uint8_t *)Dir, (const uint8_t *)v6); /*0x7ca031*/
      if ( v8 != 47 && v8 != 92 ) /*0x7ca03b*/
        *v5++ = 92; /*0x7ca03d*/
    }
  }
  v9 = FName; /*0x7ca046*/
  if ( FName ) /*0x7ca048*/
  {
    v10 = *FName; /*0x7ca04a*/
    while ( v10 ) /*0x7ca04e*/
    {
      *v5 = v10; /*0x7ca050*/
      v10 = v9[1]; /*0x7ca052*/
      ++v5; /*0x7ca055*/
      ++v9; /*0x7ca056*/
    }
  }
  result = (int)Ext; /*0x7ca059*/
  if ( Ext ) /*0x7ca05e*/
  {
    if ( *Ext && *Ext != 46 ) /*0x7ca069*/
      *v5++ = 46; /*0x7ca06b*/
    do /*0x7ca077*/
    {
      v12 = *(unsigned char *)result; /*0x7ca06f*/
      *v5++ = *(unsigned char *)result++; /*0x7ca071*/
    }
    while ( v12 ); /*0x7ca077*/
  }
  else
  {
    *v5 = 0; /*0x7ca07b*/
  }
  return result; /*0x7ca07e*/
}
} // namespace gamemd

// 0x7CA3C5
namespace gamemd {
wchar_t * wcsrchr(const wchar_t * Str, wchar_t Ch)
{
  const wchar_t *v2; // eax
  wchar_t i; // si
  const wchar_t *j; // eax

  v2 = Str; /*0x7ca3c5*/
  for ( i = *Str; ; i = *v2 ) /*0x7ca3ce*/
  {
    ++v2; /*0x7ca3d2*/
    if ( !i ) /*0x7ca3d7*/
      break; /*0x7ca3d7*/
  }
  for ( j = v2 - 1; j != Str; --j ) /*0x7ca3e7*/
  {
    if ( *j == Ch ) /*0x7ca3ec*/
      break; /*0x7ca3ec*/
  }
  return Ch == *j ? (wchar_t *)j : 0;
}
} // namespace gamemd

// 0x7CA405
namespace gamemd {
size_t wcslen(const wchar_t * String)
{
  const wchar_t *v1; // eax

  v1 = String + 1; /*0x7ca40d*/
  if ( *String ) /*0x7ca409*/
  {
    while ( *v1++ ) /*0x7ca41a*/
      ; /*0x7ca412*/
  }
  return v1 - String - 1; /*0x7ca421*/
}
} // namespace gamemd

// 0x7CA422
namespace gamemd {
wchar_t * wcsncpy(wchar_t * Destination, const wchar_t * Source, size_t MaxCount)
{
  size_t v3; // ecx
  wchar_t *v4; // edi
  wchar_t v6; // ax
  size_t v7; // ecx
  char v8; // cf
  size_t v9; // ecx
  wchar_t *v10; // edi
  int i; // ecx

  v3 = MaxCount; /*0x7ca422*/
  v4 = Destination; /*0x7ca428*/
  if ( MaxCount ) /*0x7ca430*/
  {
    do /*0x7ca446*/
    {
      v6 = *Source; /*0x7ca436*/
      *v4++ = *Source++; /*0x7ca439*/
      if ( !v6 ) /*0x7ca443*/
        break; /*0x7ca443*/
      --v3; /*0x7ca445*/
    }
    while ( v3 ); /*0x7ca446*/
    if ( v3 ) /*0x7ca44a*/
    {
      v7 = v3 - 1; /*0x7ca44c*/
      if ( v7 ) /*0x7ca44d*/
      {
        v8 = v7 & 1; /*0x7ca451*/
        v9 = v7 >> 1; /*0x7ca451*/
        memset(v4, 0, 4 * v9); /*0x7ca453*/
        v10 = &v4[2 * v9]; /*0x7ca453*/
        for ( i = v8; i; --i ) /*0x7ca455*/
          *v10++ = 0; /*0x7ca457*/
      }
    }
  }
  return Destination; /*0x7ca45c*/
}
} // namespace gamemd

// 0x7CA45F
namespace gamemd {
wchar_t * wcscat(wchar_t * Destination, const wchar_t * Source)
{
  wchar_t *result; // eax
  wchar_t *i; // ecx
  wchar_t v5; // si

  result = Destination; /*0x7ca45f*/
  for ( i = Destination; *i; ++i ) /*0x7ca465*/
    ; /*0x7ca46c*/
  do /*0x7ca485*/
  {
    v5 = *Source; /*0x7ca478*/
    *i++ = *Source++; /*0x7ca47b*/
  }
  while ( v5 ); /*0x7ca485*/
  return result; /*0x7ca488*/
}
} // namespace gamemd

// 0x7CA489
namespace gamemd {
wchar_t * wcscpy(wchar_t * Destination, const wchar_t * Source)
{
  const wchar_t *v2; // ecx
  wchar_t *result; // eax
  wchar_t v4; // dx
  wchar_t *v5; // esi

  v2 = Source; /*0x7ca489*/
  result = Destination; /*0x7ca48d*/
  v4 = *Source; /*0x7ca492*/
  v5 = Destination + 1; /*0x7ca495*/
  *Destination = *Source; /*0x7ca498*/
  while ( 1 ) /*0x7ca49c*/
  {
    ++v2; /*0x7ca49c*/
    if ( !v4 ) /*0x7ca4a0*/
      break; /*0x7ca4a0*/
    v4 = *v2; /*0x7ca4a2*/
    *v5++ = *v2; /*0x7ca4a5*/
  }
  return result; /*0x7ca4ac*/
}
} // namespace gamemd

// 0x7CA530
namespace gamemd {
int sscanf(const char *const Buffer, const char *const Format, ...)
{
  FILE Stream; // [esp+0h] [ebp-20h] BYREF
  va_list va; // [esp+30h] [ebp+10h] BYREF

  va_start(va, Format);
  Stream._flag = 73; /*0x7ca539*/
  Stream._base = (char *)Buffer; /*0x7ca541*/
  Stream._ptr = (char *)Buffer; /*0x7ca544*/
  Stream._cnt = strlen(Buffer); /*0x7ca54c*/
  return _input(&Stream, (int)Format, (int)va); /*0x7ca562*/
}
} // namespace gamemd

// 0x7CA564
namespace gamemd {
int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, CampaignScore * aP3)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = (char *)Buffer; /*0x7ca56e*/
  File._ptr = (char *)Buffer; /*0x7ca571*/
  File._flag = 66; /*0x7ca577*/
  File._cnt = 0x7FFFFFFF; /*0x7ca585*/
  v3 = _woutput(&File, BufferCount, (int)&Format); /*0x7ca58d*/
  v4 = --File._cnt < 0; /*0x7ca595*/
  v5 = v3; /*0x7ca598*/
  if ( v4 ) /*0x7ca59a*/
    _flsbuf(0, &File); /*0x7ca5ad*/
  else
    *File._ptr++ = 0; /*0x7ca59f*/
  if ( --File._cnt < 0 ) /*0x7ca5b7*/
    _flsbuf(0, &File); /*0x7ca5c7*/
  else
    *File._ptr = 0; /*0x7ca5bc*/
  return v5; /*0x7ca5d0*/
}
} // namespace gamemd

// 0x7CA5D3
namespace gamemd {
int wcscmp(const wchar_t * String1, const wchar_t * String2)
{
  const wchar_t *v3; // esi
  wchar_t i; // cx
  int result; // eax

  v3 = String2; /*0x7ca5d8*/
  for ( i = *String2; ; i = *v3 ) /*0x7ca5dd*/
  {
    result = *String1 - i; /*0x7ca5e6*/
    if ( result || !i ) /*0x7ca5ed*/
      break; /*0x7ca5ed*/
    ++String1; /*0x7ca5f0*/
    ++v3; /*0x7ca5f2*/
  }
  if ( result < 0 ) /*0x7ca5fc*/
    return -1; /*0x7ca5fe*/
  if ( result > 0 ) /*0x7ca602*/
    return 1; /*0x7ca606*/
  return result; /*0x7ca5f8*/
}
} // namespace gamemd

// 0x7CA610
namespace gamemd {
int strncmp(const char * Str1, const char * Str2, size_t MaxCount)
{
  size_t v3; // ecx
  const char *v4; // edi
  bool v5; // zf
  size_t v6; // ecx
  const char *v7; // edi
  uint8_t v9; // al

  v3 = MaxCount; /*0x7ca616*/
  if ( MaxCount ) /*0x7ca619*/
  {
    v4 = Str1; /*0x7ca61d*/
    do /*0x7ca624*/
    {
      if ( !v3 ) /*0x7ca624*/
        break; /*0x7ca624*/
      v5 = *v4++ == 0; /*0x7ca624*/
      --v3; /*0x7ca624*/
    }
    while ( !v5 ); /*0x7ca624*/
    v6 = MaxCount - v3; /*0x7ca628*/
    v7 = Str1; /*0x7ca62a*/
    do /*0x7ca62f*/
    {
      if ( !v6 ) /*0x7ca62f*/
        break; /*0x7ca62f*/
      v5 = *Str2++ == *v7++; /*0x7ca62f*/
      --v6; /*0x7ca62f*/
    }
    while ( v5 ); /*0x7ca62f*/
    v9 = *(Str2 - 1); /*0x7ca631*/
    v3 = 0; /*0x7ca634*/
    if ( v9 > (unsigned int)*(v7 - 1) ) /*0x7ca639*/
      return ~v3; /*0x7ca639*/
    if ( v9 != *(v7 - 1) ) /*0x7ca63b*/
    {
      v3 = -2; /*0x7ca63e*/
      return ~v3; /*0x7ca63f*/
    }
  }
  return v3; /*0x7ca643*/
}
} // namespace gamemd

// 0x7CA75B
namespace gamemd {
int fclose(MouseClass * aP0)
{
  int v1; // edi

  v1 = -1; /*0x7ca761*/
  if ( (aP0->_flag & 0x40) != 0 ) /*0x7ca768*/
  {
    aP0->_flag = 0; /*0x7ca76a*/
  }
  else
  {
    _lock_file(aP0); /*0x7ca771*/
    v1 = _fclose_lk(aP0); /*0x7ca77d*/
    _unlock_file(aP0); /*0x7ca77f*/
  }
  return v1; /*0x7ca789*/
}
} // namespace gamemd

// 0x7CA78C
namespace gamemd {
int _fclose_lk(MouseClass * aP0)
{
  int v1; // edi

  v1 = -1; /*0x7ca792*/
  if ( (*(unsigned char *)(aP0 + 12) & 0x83) != 0 ) /*0x7ca799*/
  {
    v1 = _flush((unsigned int *)aP0); /*0x7ca7a2*/
    _freebuf(aP0); /*0x7ca7a4*/
    if ( _close(*(unsigned int *)(aP0 + 16)) >= 0 ) /*0x7ca7b6*/
    {
      if ( *(unsigned int *)(aP0 + 28) ) /*0x7ca7bd*/
      {
        free(*(void **)(aP0 + 28)); /*0x7ca7c5*/
        *(unsigned int *)(aP0 + 28) = 0; /*0x7ca7ca*/
      }
    }
    else
    {
      v1 = -1; /*0x7ca7b8*/
    }
  }
  *(unsigned int *)(aP0 + 12) = 0; /*0x7ca7cf*/
  return v1; /*0x7ca7d5*/
}
} // namespace gamemd

// 0x7CA7D8
namespace gamemd {
int fprintf(MouseClass * aP0, const char *const Format, CellStruct * aP2)
{
  int v2; // edi
  int v3; // ebx
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, Format);
  _lock_file(Stream); /*0x7ca7e0*/
  v2 = _stbuf(Stream); /*0x7ca7eb*/
  v3 = _output(Stream, (int)Format, (int)va); /*0x7ca7fe*/
  _ftbuf(v2, Stream); /*0x7ca800*/
  _unlock_file(Stream); /*0x7ca806*/
  return v3; /*0x7ca810*/
}
} // namespace gamemd

// 0x7CA814
namespace gamemd {
FILE * _fsopen(const char * FileName, const char * Mode, int ShFlag)
{
  FILE *result; // eax
  FILE *v4; // esi
  FILE *v5; // edi

  result = (FILE *)_getstream(); /*0x7ca815*/
  v4 = result; /*0x7ca81a*/
  if ( result ) /*0x7ca81e*/
  {
    v5 = (FILE *)_openfile((char *)FileName, (int)Mode, ShFlag, (int)result); /*0x7ca836*/
    _unlock_file(v4); /*0x7ca838*/
    return v5; /*0x7ca840*/
  }
  return result; /*0x7ca820*/
}
} // namespace gamemd

// 0x7CA845
namespace gamemd {
FILE * fopen(const char * FileName, const char * Mode)
{
  return _fsopen(FileName, Mode, 64); /*0x7ca857*/
}
} // namespace gamemd

// 0x7CA858
namespace gamemd {
int vswprintf(wchar_t *const Buffer, CampaignScore * aP1, ObjectClass * aP2, SessionClass * aP3)
{
  int v4; // eax
  bool v5; // sf
  int v6; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = (char *)Buffer; /*0x7ca865*/
  File._ptr = (char *)Buffer; /*0x7ca868*/
  File._flag = 66; /*0x7ca871*/
  File._cnt = 0x7FFFFFFF; /*0x7ca878*/
  v4 = _woutput(&File, aP1, (int)aP2); /*0x7ca880*/
  v5 = --File._cnt < 0; /*0x7ca888*/
  v6 = v4; /*0x7ca88b*/
  if ( v5 ) /*0x7ca88d*/
    _flsbuf(0, &File); /*0x7ca8a0*/
  else
    *File._ptr++ = 0; /*0x7ca892*/
  if ( --File._cnt < 0 ) /*0x7ca8aa*/
    _flsbuf(0, &File); /*0x7ca8ba*/
  else
    *File._ptr = 0; /*0x7ca8af*/
  return v6; /*0x7ca8c3*/
}
} // namespace gamemd

// 0x7CA8C6
namespace gamemd {
wchar_t * wcschr(wchar_t * Str, int Ch)
{
  while ( *Str && *Str != Ch ) /*0x7ca8d7*/
    ++Str; /*0x7ca8da*/
  return Ch == *Str ? (wchar_t *)Str : 0;
}
} // namespace gamemd

// 0x7CA8EF
namespace gamemd {
void * __RTCastToVoid(void ** a1)
{
  if ( a1 ) /*0x7ca919*/
    return _FindCompleteObject_YAPAXPAPAX_Z(a1); /*0x7ca933*/
  else
    return 0; /*0x7ca91b*/
}
} // namespace gamemd

// 0x7CA971
namespace gamemd {
__non_rtti_object * E4Recv_7CA971::__0__non_rtti_object_QAE_PBD_Z(char * a2)
{

  __0exception_QAE_ABQBD_Z(this, (const char *const *)&a2); /*0x7ca981*/
  *(unsigned int *)this = &vt_non_rtti_object; /*0x7ca986*/
  return this; /*0x7ca98e*/

}
} // namespace gamemd

// 0x7CA993
namespace gamemd {
ObjectClass * ObjectClass::sub_7CA993(void * Block, char a2)
{

  j_Exception_Destructor(Block); /*0x7ca996*/
  if ( (a2 & 1) != 0 ) /*0x7ca9a0*/
    RA2_OPDEL(Block); /*0x7ca9a3*/
  return (ObjectClass *)Block; /*0x7ca9ab*/

}
} // namespace gamemd

// 0x7CA9B4
namespace gamemd {
exception * E4Recv_7CA9B4::sub_7CA9B4(struct exception * a2)
{

  __0exception_QAE_ABV0__Z(this, a2); /*0x7ca9bb*/
  *(unsigned int *)this = &vt_non_rtti_object; /*0x7ca9c0*/
  return this; /*0x7ca9c8*/

}
} // namespace gamemd

// 0x7CA9CC
namespace gamemd {
exception * E4Recv_7CA9CC::sub_7CA9CC(struct exception * a1)
{

  __0exception_QAE_ABV0__Z((exception *)this, a1); /*0x7ca9d3*/
  this->vfptr = &vt_bad_typeid; /*0x7ca9d8*/
  return (exception *)this; /*0x7ca9e0*/

}
} // namespace gamemd

// 0x7CA9E4
namespace gamemd {
ObjectClass * ObjectClass::sub_7CA9E4(void * Block, char a2)
{

  j_Exception_Destructor_2(Block); /*0x7ca9e7*/
  if ( (a2 & 1) != 0 ) /*0x7ca9f1*/
    RA2_OPDEL(Block); /*0x7ca9f4*/
  return (ObjectClass *)Block; /*0x7ca9fc*/

}
} // namespace gamemd

// 0x7CAA05
namespace gamemd {
int __RTtypeid(unsigned int * a1)
{
  int v1; // esi
  int result; // eax
  unsigned char v3[12]; // [esp+1Ch] [ebp-34h] BYREF
  unsigned char pExceptionObject[12]; // [esp+28h] [ebp-28h] BYREF
  int v5; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  if ( !a1 ) /*0x7caa30*/
  {
    RTtypeid_Helper((exception *)pExceptionObject, "Attempted a typeid of NULL pointer!"); /*0x7caa3a*/
    _CxxThrowException_8(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_typeid__); /*0x7caa48*/
  }
  ms_exc.registration.TryLevel = 0; /*0x7caa4d*/
  v1 = *(unsigned int *)(*a1 - 4); /*0x7caa53*/
  v5 = v1; /*0x7caa56*/
  if ( IsBadReadPtr(*(const void **)(v1 + 12), 8u) ) /*0x7caa5e*/
  {
    __0__non_rtti_object_QAE_PBD_Z((__non_rtti_object *)v3, "Bad read pointer - no RTTI data!"); /*0x7caa86*/
    _CxxThrowException_8(v3, (_ThrowInfo *)&_TI3_AV__non_rtti_object__); /*0x7caa94*/
  }
  result = *(unsigned int *)(v1 + 12); /*0x7caa68*/
  ms_exc.registration.TryLevel = -1; /*0x7caa6b*/
  return result; /*0x7caa6f*/
}
} // namespace gamemd

// 0x7CAAE4
namespace gamemd {
unsigned char * __RTDynamicCast(IUnknown * aP0, int arg4, struct TypeDescriptor * a2, struct TypeDescriptor * a3, int a5)
{
  unsigned char *result; // eax
  unsigned char *CompleteObject_YAPAXPAPAX_Z; // edi
  int v7; // eax
  char *v8; // esi
  int v9; // ecx
  const struct _s_RTTIBaseClassDescriptor *VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z; // eax
  char *v11; // [esp+1Ch] [ebp-3Ch] BYREF
  unsigned char pExceptionObject[12]; // [esp+20h] [ebp-38h] BYREF
  unsigned char *v13; // [esp+2Ch] [ebp-2Ch]
  char *v14; // [esp+30h] [ebp-28h]
  int v15; // [esp+34h] [ebp-24h]
  int v16; // [esp+38h] [ebp-20h]
  const struct _s_RTTIBaseClassDescriptor *v17; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  if ( !aP0 ) /*0x7cab0f*/
    return 0; /*0x7cab11*/
  ms_exc.registration.TryLevel = 0; /*0x7cab22*/
  CompleteObject_YAPAXPAPAX_Z = _FindCompleteObject_YAPAXPAPAX_Z(aP0); /*0x7cab2d*/
  v13 = CompleteObject_YAPAXPAPAX_Z; /*0x7cab2f*/
  v7 = *((unsigned int *)*aP0 - 1); /*0x7cab34*/
  v15 = v7; /*0x7cab37*/
  v8 = (char *)((char *)aP0 - arg4 - CompleteObject_YAPAXPAPAX_Z); /*0x7cab40*/
  v14 = v8; /*0x7cab42*/
  v9 = *(unsigned int *)(*(unsigned int *)(v7 + 16) + 4); /*0x7cab48*/
  if ( (v9 & 1) != 0 ) /*0x7cab4e*/
  {
    if ( (v9 & 2) != 0 ) /*0x7cab6c*/
      VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindVITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab75*/
    else
      VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindMITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab6e*/
  }
  else
  {
    VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab59*/
  }
  v17 = VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z; /*0x7cab7d*/
  if ( VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z ) /*0x7cab82*/
  {
    result = &CompleteObject_YAPAXPAPAX_Z[_PMDtoOffset_YAHPAXABUPMD___Z( /*0x7cab90*/
                                            CompleteObject_YAPAXPAPAX_Z,
                                            (const struct PMD *)((char *)VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z
                                                               + 8))];
    v16 = (int)result; /*0x7cab92*/
  }
  else
  {
    result = 0; /*0x7cab9e*/
    v16 = 0; /*0x7caba0*/
    if ( a5 ) /*0x7caba6*/
    {
      v11 = "Bad dynamic_cast!"; /*0x7caba8*/
      __0bad_cast_QAE_ABQBD_Z((bad_cast *)pExceptionObject, (const char *const *)&v11); /*0x7cabb6*/
      _CxxThrowException_8(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast__); /*0x7cabc4*/
    }
  }
  ms_exc.registration.TryLevel = -1; /*0x7cab95*/
  return result; /*0x7cab13*/
}
} // namespace gamemd

// 0x7CAC13
namespace gamemd {
ObjectClass * ObjectClass::sub_7CAC13(void * Block, char a2)
{

  j_Exception_Destructor_3(Block); /*0x7cac16*/
  if ( (a2 & 1) != 0 ) /*0x7cac20*/
    RA2_OPDEL(Block); /*0x7cac23*/
  return (ObjectClass *)Block; /*0x7cac2b*/

}
} // namespace gamemd

// 0x7CAC34
namespace gamemd {
exception * E4Recv_7CAC34::sub_7CAC34(struct exception * a2)
{

  __0exception_QAE_ABV0__Z(this, a2); /*0x7cac3b*/
  *(unsigned int *)this = &vt_bad_cast; /*0x7cac40*/
  return this; /*0x7cac48*/

}
} // namespace gamemd

// 0x7CAC4C
namespace gamemd {
char * _FindCompleteObject_YAPAXPAPAX_Z(void ** a1)
{
  int v1; // edx
  char *result; // eax
  int v3; // edx

  v1 = *((unsigned int *)*a1 - 1); /*0x7cac52*/
  result = (char *)a1 - *(unsigned int *)(v1 + 4); /*0x7cac57*/
  v3 = *(unsigned int *)(v1 + 8); /*0x7cac5a*/
  if ( v3 ) /*0x7cac5f*/
    return &result[*(unsigned int *)((char *)a1 - v3)]; /*0x7cac63*/
  return result; /*0x7cac65*/
}
} // namespace gamemd

// 0x7CAC66
namespace gamemd {
const struct _s_RTTIBaseClassDescriptor * _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(void * a1, const struct _s_RTTICompleteObjectLocator * a2, struct TypeDescriptor * a3, int a4, struct TypeDescriptor * a5)
{
  int v5; // eax
  int **v6; // esi
  int *v7; // edi
  int v8; // eax
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v10 = 0; /*0x7cac6a*/
  v5 = *((unsigned int *)a2 + 4); /*0x7cac74*/
  v6 = *(int ***)(v5 + 12); /*0x7cac7b*/
  if ( !*(unsigned int *)(v5 + 8) ) /*0x7cac77*/
    return 0; /*0x7cacb5*/
  while ( 1 ) /*0x7cac80*/
  {
    v7 = *v6; /*0x7cac80*/
    v8 = **v6; /*0x7cac85*/
    if ( ((struct TypeDescriptor *)v8 == a5 || !strcmp((const char *)(v8 + 8), a5->name)) && (v7[5] & 1) == 0 ) /*0x7caca2*/
      break; /*0x7caca2*/
    ++v10; /*0x7caca4*/
    ++v6; /*0x7cacad*/
    if ( v10 >= *(unsigned int *)(*((unsigned int *)a2 + 4) + 8) ) /*0x7cacb3*/
      return 0; /*0x7cacb3*/
  }
  return (const struct _s_RTTIBaseClassDescriptor *)v7; /*0x7cacb7*/
}
} // namespace gamemd

// 0x7CAEF1
namespace gamemd {
int _PMDtoOffset_YAHPAXABUPMD___Z(char * a1, const struct PMD * a2)
{
  int v2; // ecx
  int pdisp; // edx

  v2 = 0; /*0x7caef5*/
  pdisp = a2->pdisp; /*0x7caef7*/
  if ( pdisp >= 0 ) /*0x7caefc*/
    v2 = *(unsigned int *)(*(unsigned int *)&a1[pdisp] + a2->vdisp) + a2->pdisp; /*0x7caf0b*/
  return v2 + a2->mdisp; /*0x7caf13*/
}
} // namespace gamemd

// 0x7CAFEC
namespace gamemd {
int _tolower(int C)
{
  return C + 32; /*0x7caff3*/
}
} // namespace gamemd

// 0x7CB19C
namespace gamemd {
int fflush(MouseClass * aP0)
{
  int v2; // edi

  if ( !aP0 ) /*0x7cb1a3*/
    return flsall(0); /*0x7cb1a6*/
  _lock_file(aP0); /*0x7cb1b0*/
  v2 = _fflush_lk(aP0); /*0x7cb1bc*/
  _unlock_file(aP0); /*0x7cb1be*/
  return v2; /*0x7cb1ac*/
}
} // namespace gamemd

// 0x7CB1CB
namespace gamemd {
int _fflush_lk(int a1)
{
  if ( _flush((unsigned int *)a1) ) /*0x7cb1d1*/
    return -1; /*0x7cb1db*/
  if ( (*(unsigned char *)(a1 + 13) & 0x40) != 0 ) /*0x7cb1e4*/
    return -(_commit(*(unsigned int *)(a1 + 16)) != 0); /*0x7cb1f2*/
  return 0; /*0x7cb1de*/
}
} // namespace gamemd

// 0x7CB1F9
namespace gamemd {
int _flush(MouseClass * aP0)
{
  int v1; // ebx
  const void *v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax

  v1 = 0; /*0x7cb1ff*/
  if ( (aP0[3] & 3) == 2 && (aP0[3] & 0x108) != 0 ) /*0x7cb213*/
  {
    v2 = (const void *)aP0[2]; /*0x7cb215*/
    if ( *aP0 - (int)v2 > 0 ) /*0x7cb21e*/
    {
      v3 = *aP0 - (unsigned int)v2; /*0x7cb21a*/
      if ( _write(aP0[4], v2, v3) == v3 ) /*0x7cb22f*/
      {
        v4 = aP0[3]; /*0x7cb231*/
        if ( (v4 & 0x80u) != 0 ) /*0x7cb236*/
        {
          IDA_LOBYTE(v4) = v4 & 0xFD; /*0x7cb238*/
          aP0[3] = v4; /*0x7cb23a*/
        }
      }
      else
      {
        aP0[3] |= 0x20u; /*0x7cb23f*/
        v1 = -1; /*0x7cb243*/
      }
    }
  }
  v5 = aP0[2]; /*0x7cb246*/
  aP0[1] = 0; /*0x7cb249*/
  *aP0 = v5; /*0x7cb24d*/
  return v1; /*0x7cb24f*/
}
} // namespace gamemd

// 0x7CB302
namespace gamemd {
int sub_7CB302(FILE * Stream, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx

  _lock_file(Stream); /*0x7cb30a*/
  v3 = _stbuf(Stream); /*0x7cb319*/
  v4 = _output(Stream, a2, a3); /*0x7cb327*/
  _ftbuf(v3, Stream); /*0x7cb329*/
  _unlock_file(Stream); /*0x7cb32f*/
  return v4; /*0x7cb339*/
}
} // namespace gamemd

// 0x7CB3E5
namespace gamemd {
int __endstdio()
{
  int result; // eax

  result = Endstdio_Helper(); /*0x7cb3e5*/
  if ( byte_B781FC ) /*0x7cb3f1*/
    return _fcloseall(); /*0x7cb3f3*/
  return result; /*0x7cb3f8*/
}
} // namespace gamemd

// 0x7CB428
namespace gamemd {
void _lock_file2(int a1, int a2)
{
  if ( a1 >= 20 ) /*0x7cb42f*/
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32)); /*0x7cb444*/
  else
    _lock(a1 + 28); /*0x7cb435*/
}
} // namespace gamemd

// 0x7CB47A
namespace gamemd {
void _unlock_file2(int a1, int a2)
{
  if ( a1 >= 20 ) /*0x7cb481*/
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32)); /*0x7cb496*/
  else
    _unlock(a1 + 28); /*0x7cb487*/
}
} // namespace gamemd

// 0x7CB49D
namespace gamemd {
IUnknown * srand(IUnknown * aP0)
{
  _getptd()[5] = aP0; /*0x7cb4a6*/
}
} // namespace gamemd

// 0x7CB4AA
namespace gamemd {
int rand()
{
  unsigned int *v0; // eax
  unsigned int v1; // ecx

  v0 = _getptd(); /*0x7cb4aa*/
  v1 = 214013 * v0[5] + 2531011; /*0x7cb4b8*/
  v0[5] = v1; /*0x7cb4be*/
  return IDA_HIWORD(v1) & 0x7FFF; /*0x7cb4cb*/
}
} // namespace gamemd

// 0x7CB4CC
namespace gamemd {
int wcsncmp(const wchar_t * String1, CampaignScore * aP1, size_t MaxCount)
{
  bool v4; // zf
  size_t MaxCounta; // [esp+10h] [ebp+10h]

  if ( !MaxCount ) /*0x7cb4d3*/
    return 0; /*0x7cb4d5*/
  v4 = MaxCount == 1; /*0x7cb4d9*/
  MaxCounta = MaxCount - 1; /*0x7cb4d9*/
  if ( !v4 ) /*0x7cb4e2*/
  {
    do /*0x7cb4f8*/
    {
      if ( !*String1 ) /*0x7cb4e4*/
        break; /*0x7cb4ea*/
      if ( *String1 != *aP1 ) /*0x7cb4ef*/
        break; /*0x7cb4ef*/
      ++String1; /*0x7cb4f2*/
      ++aP1; /*0x7cb4f4*/
      --MaxCounta; /*0x7cb4f5*/
    }
    while ( MaxCounta ); /*0x7cb4f8*/
  }
  return *String1 - *aP1; /*0x7cb4d7*/
}
} // namespace gamemd

// 0x7CB7BA
namespace gamemd {
int vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = Buffer; /*0x7cb7c7*/
  File._ptr = Buffer; /*0x7cb7ca*/
  File._flag = 66; /*0x7cb7d3*/
  File._cnt = 0x7FFFFFFF; /*0x7cb7da*/
  v3 = _output(&File, (int)Format, (int)ArgList); /*0x7cb7e2*/
  v4 = --File._cnt < 0; /*0x7cb7ea*/
  v5 = v3; /*0x7cb7ed*/
  if ( v4 ) /*0x7cb7ef*/
    _flsbuf(0, &File); /*0x7cb7ff*/
  else
    *File._ptr = 0; /*0x7cb7f4*/
  return v5; /*0x7cb808*/
}
} // namespace gamemd

// 0x7CB80B
namespace gamemd {
int fgetc(MouseClass * aP0)
{
  int v2; // edi

  _lock_file(aP0); /*0x7cb812*/
  if ( --aP0->_cnt < 0 ) /*0x7cb817*/
    v2 = _filbuf(aP0); /*0x7cb82e*/
  else
    v2 = *(uint8_t *)aP0->_ptr++; /*0x7cb81f*/
  _unlock_file(aP0); /*0x7cb831*/
  return v2; /*0x7cb839*/
}
} // namespace gamemd

// 0x7CB85C
namespace gamemd {
int iswalpha(wint_t C)
{
  return iswctype(C, 0x103u); /*0x7cb86c*/
}
} // namespace gamemd

// 0x7CB87B
namespace gamemd {
int iswlower(wint_t C)
{
  return iswctype(C, 2u); /*0x7cb888*/
}
} // namespace gamemd

// 0x7CB889
namespace gamemd {
int iswdigit(wint_t C)
{
  return iswctype(C, 4u); /*0x7cb896*/
}
} // namespace gamemd

// 0x7CB897
namespace gamemd {
int iswxdigit(wint_t C)
{
  return iswctype(C, 0x80u); /*0x7cb8a7*/
}
} // namespace gamemd

// 0x7CB8A8
namespace gamemd {
int iswspace(wint_t C)
{
  return iswctype(C, 8u); /*0x7cb8b5*/
}
} // namespace gamemd

// 0x7CB8C4
namespace gamemd {
int iswalnum(wint_t C)
{
  return iswctype(C, 0x107u); /*0x7cb8d4*/
}
} // namespace gamemd

// 0x7CB8D5
namespace gamemd {
int iswprint(wint_t C)
{
  return iswctype(C, 0x157u); /*0x7cb8e5*/
}
} // namespace gamemd

// 0x7CB8E6
namespace gamemd {
int iswgraph(wint_t C)
{
  return iswctype(C, 0x117u); /*0x7cb8f6*/
}
} // namespace gamemd

// 0x7CB8F7
namespace gamemd {
int iswcntrl(wint_t C)
{
  return iswctype(C, 0x20u); /*0x7cb904*/
}
} // namespace gamemd

// 0x7CB905
namespace gamemd {
int iswascii(wint_t C)
{
  return C < 0x80u; /*0x7cb910*/
}
} // namespace gamemd

// 0x7CB9B8
namespace gamemd {
int wcstol(BlowStraw * aP0, wchar_t ** EndPtr, int Radix)
{
  return wcstoxl(aP0, EndPtr, Radix, 0); /*0x7cb9ce*/
}
} // namespace gamemd

// 0x7CBB8D
namespace gamemd {
size_t _mbsnccnt(const unsigned char * Str, size_t MaxCount)
{
  size_t v2; // esi
  size_t v3; // edx

  _lock(25); /*0x7cbb90*/
  v2 = 0; /*0x7cbb99*/
  v3 = MaxCount - 1; /*0x7cbb9d*/
  if ( MaxCount ) /*0x7cbba1*/
  {
    do /*0x7cbbcd*/
    {
      if ( !*Str ) /*0x7cbba7*/
        break; /*0x7cbba7*/
      if ( (byte_B78961[*Str] & 4) != 0 ) /*0x7cbbb7*/
      {
        if ( !v3-- ) /*0x7cbbb9*/
          break; /*0x7cbbbe*/
        if ( !*++Str ) /*0x7cbbc1*/
          break; /*0x7cbbc4*/
      }
      ++v2; /*0x7cbbc6*/
      ++Str; /*0x7cbbc7*/
    }
    while ( v3-- ); /*0x7cbbcd*/
  }
  _unlock(25); /*0x7cbbd1*/
  return v2; /*0x7cbbd9*/
}
} // namespace gamemd

// 0x7CBBDB
namespace gamemd {
int swscanf(const wchar_t *const Buffer, CampaignScore * aP1, ...)
{
  FILE File; // [esp+0h] [ebp-20h] BYREF
  va_list va; // [esp+30h] [ebp+10h] BYREF

  va_start(va, Format);
  File._flag = 73; /*0x7cbbe4*/
  File._base = (char *)Buffer; /*0x7cbbec*/
  File._ptr = (char *)Buffer; /*0x7cbbef*/
  File._cnt = 2 * wcslen(Buffer); /*0x7cbbf9*/
  return _winput(&File, (int)Format, (int)va); /*0x7cbc0f*/
}
} // namespace gamemd

// 0x7CBC32
namespace gamemd {
char * getenv(const char * VarName)
{
  const char **v1; // esi
  size_t v2; // edi

  v1 = (const char **)dword_B781E4; /*0x7cbc3b*/
  if ( dword_B78BB4 ) /*0x7cbc42*/
  {
    if ( dword_B781E4 || dword_B781EC && !__wtomb_environ() && (v1 = (const char **)dword_B781E4) != 0 ) /*0x7cbc61*/
    {
      if ( VarName ) /*0x7cbc69*/
      {
        v2 = strlen(VarName); /*0x7cbc72*/
        while ( *v1 ) /*0x7cbc78*/
        {
          if ( strlen(*v1) > v2 /*0x7cbc9a*/
            && (*v1)[v2] == 61
            && !_mbsnbicoll((const uint8_t *)*v1, (const uint8_t *)VarName, v2) )
          {
            return (char *)&(*v1)[v2 + 1]; /*0x7cbca7*/
          }
          ++v1; /*0x7cbc9c*/
        }
      }
    }
  }
  return 0; /*0x7cbcab*/
}
} // namespace gamemd

// 0x7CBCAF
namespace gamemd {
wchar_t * _itow(int Value, wchar_t * Buffer, int Radix)
{
  CHAR MultiByteStr[20]; // [esp+0h] [ebp-14h] BYREF

  _itoa(Value, MultiByteStr, Radix); /*0x7cbcbf*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 20); /*0x7cbcd6*/
  return Buffer; /*0x7cbcdf*/
}
} // namespace gamemd

// 0x7CBCE1
namespace gamemd {
wchar_t * _ltow(int Value, wchar_t * Buffer, int Radix)
{
  CHAR MultiByteStr[40]; // [esp+0h] [ebp-28h] BYREF

  _ltoa(Value, MultiByteStr, Radix); /*0x7cbcf1*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 40); /*0x7cbd08*/
  return Buffer; /*0x7cbd11*/
}
} // namespace gamemd

// 0x7CBD13
namespace gamemd {
wchar_t * _ultow(unsigned int Value, wchar_t * Buffer, int Radix)
{
  CHAR MultiByteStr[40]; // [esp+0h] [ebp-28h] BYREF

  _ultoa(Value, MultiByteStr, Radix); /*0x7cbd23*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 40); /*0x7cbd3a*/
  return Buffer; /*0x7cbd43*/
}
} // namespace gamemd

// 0x7CBD45
namespace gamemd {
wchar_t * _i64tow(long long Value, wchar_t * Buffer, int Radix)
{
  CHAR MultiByteStr[80]; // [esp+0h] [ebp-50h] BYREF

  _i64toa(Value, MultiByteStr, Radix); /*0x7cbd58*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 80); /*0x7cbd6f*/
  return Buffer; /*0x7cbd78*/
}
} // namespace gamemd

// 0x7CBD7A
namespace gamemd {
wchar_t * _ui64tow(unsigned long long Value, wchar_t * Buffer, int Radix)
{
  CHAR MultiByteStr[80]; // [esp+0h] [ebp-50h] BYREF

  _ui64toa(Value, MultiByteStr, Radix); /*0x7cbd8d*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 80); /*0x7cbda4*/
  return Buffer; /*0x7cbdad*/
}
} // namespace gamemd

// 0x7CBDAF
namespace gamemd {
void _cinit()
{
  if ( off_87BEB8 ) /*0x7cbdb6*/
    off_87BEB8(); /*0x7cbdb8*/
  _initterm(&First, &Last); /*0x7cbdc4*/
  _initterm(&dword_812000, &dword_815DA4); /*0x7cbdd3*/
}
} // namespace gamemd

// 0x7CBDDC
namespace gamemd {
void  __noreturn exit(int Code)
{
  doexit(Code, 0, 0); /*0x7cbde4*/
}
} // namespace gamemd

// 0x7CBDED
namespace gamemd {
void  __noreturn _exit(int Code)
{
  doexit(Code, 1, 0); /*0x7cbdf5*/
}
} // namespace gamemd

// 0x7CBDFE
namespace gamemd {
void _cexit()
{
  doexit(0, 0, 1); /*0x7cbe04*/
}
} // namespace gamemd

// 0x7CBE0D
namespace gamemd {
void _c_exit()
{
  doexit(0, 1, 1); /*0x7cbe13*/
}
} // namespace gamemd

// 0x7CBEC1
namespace gamemd {
void _lockexit()
{
  _lock(13); /*0x7cbec3*/
}
} // namespace gamemd

// 0x7CBECA
namespace gamemd {
int _unlockexit()
{
  _unlock(13); /*0x7cbecc*/
}
} // namespace gamemd

// 0x7CBEED
namespace gamemd {
unsigned int _statusfp()
{
  return _abstract_sw(); /*0x7cbefe*/
}
} // namespace gamemd

// 0x7CBF14
namespace gamemd {
unsigned int _control87(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v2; // esi

  v2 = Mask & NewValue | ~Mask & _abstract_cw(); /*0x7cbf34*/
  _hw_cw(v2); /*0x7cbf37*/
  return v2; /*0x7cbf46*/
}
} // namespace gamemd

// 0x7CBF49
namespace gamemd {
unsigned int _controlfp(unsigned int NewValue, unsigned int Mask)
{
  return _control87(NewValue, Mask & 0xFFF7FFFF); /*0x7cbf5e*/
}
} // namespace gamemd

// 0x7CBF8A
namespace gamemd {
char _abstract_cw(char a1)
{
  char result; // al

  result = 0; /*0x7cbf8f*/
  if ( (a1 & 1) != 0 ) /*0x7cbf96*/
    result = 16; /*0x7cbf9a*/
  if ( (a1 & 4) != 0 ) /*0x7cbf9e*/
    result |= 8u; /*0x7cbfa0*/
  if ( (a1 & 8) != 0 ) /*0x7cbfa5*/
    result |= 4u; /*0x7cbfa7*/
  if ( (a1 & 0x10) != 0 ) /*0x7cbfac*/
    result |= 2u; /*0x7cbfae*/
  if ( (a1 & 0x20) != 0 ) /*0x7cbfb3*/
    return result | 1; /*0x7cbfb5*/
  return result; /*0x7cc00e*/
}
} // namespace gamemd

// 0x7CC01C
namespace gamemd {
char _hw_cw(int a1)
{
  char result; // al

  result = (a1 & 0x10) != 0; /*0x7cc02b*/
  if ( (a1 & 8) != 0 ) /*0x7cc02f*/
    result |= 4u; /*0x7cc031*/
  if ( (a1 & 4) != 0 ) /*0x7cc036*/
    result |= 8u; /*0x7cc038*/
  if ( (a1 & 2) != 0 ) /*0x7cc03d*/
    result |= 0x10u; /*0x7cc03f*/
  if ( (a1 & 1) != 0 ) /*0x7cc044*/
    result |= 0x20u; /*0x7cc046*/
  if ( (a1 & 0x80000) != 0 ) /*0x7cc04e*/
    return result | 2; /*0x7cc050*/
  return result; /*0x7cc097*/
}
} // namespace gamemd

// 0x7CC0A5
namespace gamemd {
char _abstract_sw(char a1)
{
  char result; // al

  result = 0; /*0x7cc0a9*/
  if ( (a1 & 1) != 0 ) /*0x7cc0ae*/
    result = 16; /*0x7cc0b2*/
  if ( (a1 & 4) != 0 ) /*0x7cc0b6*/
    result |= 8u; /*0x7cc0b8*/
  if ( (a1 & 8) != 0 ) /*0x7cc0bd*/
    result |= 4u; /*0x7cc0bf*/
  if ( (a1 & 0x10) != 0 ) /*0x7cc0c4*/
    result |= 2u; /*0x7cc0c6*/
  if ( (a1 & 0x20) != 0 ) /*0x7cc0cb*/
    return result | 1; /*0x7cc0cd*/
  return result; /*0x7cc0d9*/
}
} // namespace gamemd

// 0x7CC0DC
namespace gamemd {
void _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, 0, 0); /*0x7cc0ef*/
}
} // namespace gamemd

// 0x7CC0FC
namespace gamemd {
int _unwind_handler(int a1, int a2, int a3, unsigned int * a4)
{
  int result; // eax

  result = 1; /*0x7cc107*/
  if ( (*(unsigned int *)(a1 + 4) & 6) != 0 ) /*0x7cc10c*/
  {
    *a4 = a2; /*0x7cc116*/
    return 3; /*0x7cc118*/
  }
  return result; /*0x7cc11d*/
}
} // namespace gamemd

// 0x7CC11E
namespace gamemd {
int _local_unwind2(int a1, int a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // esi
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-1Ch]
  int (__cdecl *v7)(int, int, int, int); // [esp-4h] [ebp-18h]

  v7 = _unwind_handler; /*0x7cc128*/
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList; /*0x7cc12d*/
  while ( 1 ) /*0x7cc13b*/
  {
    result = a1; /*0x7cc13b*/
    v3 = *(unsigned int *)(a1 + 8); /*0x7cc13f*/
    v4 = *(unsigned int *)(a1 + 12); /*0x7cc142*/
    if ( v4 == -1 || v4 == a2 ) /*0x7cc14e*/
      break; /*0x7cc14e*/
    v5 = 3 * v4; /*0x7cc150*/
    *(unsigned int *)(a1 + 12) = *(unsigned int *)(v3 + 4 * v5); /*0x7cc15a*/
    if ( !*(unsigned int *)(v3 + 4 * v5 + 4) ) /*0x7cc15d*/
    {
      _NLG_Notify(257); /*0x7cc16d*/
      (*(void (__cdecl **)(struct _EXCEPTION_REGISTRATION_RECORD *, int (__cdecl *)(int, int, int, int)))(v3 + 4 * v5 + 8))( /*0x7cc172*/
        ExceptionList,
        v7);
    }
  }
  return result; /*0x7cc182*/
}
} // namespace gamemd

// 0x7CC186
namespace gamemd {
int _abnormal_termination()
{
  int result; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx

  result = 0; /*0x7cc186*/
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList; /*0x7cc188*/
  if ( (int (__cdecl *)(int, int, int, unsigned int *))ExceptionList->Handler == _unwind_handler ) /*0x7cc196*/
    return ExceptionList[1].Next == (struct _EXCEPTION_REGISTRATION_RECORD *)*((unsigned int *)ExceptionList[1].Handler + 3); /*0x7cc1a3*/
  return result; /*0x7cc1a8*/
}
} // namespace gamemd

// 0x7CC1A9
namespace gamemd {
void _NLG_Notify1(int a1)
{
  JUMPOUT(0x7CC1BC); /*0x7cc1bc*/
}
} // namespace gamemd

// 0x7CC1B2
namespace gamemd {
int __NLG_Notify()
{
  unk_87C1D8 = *(unsigned int *)(a2 + 8); /*0x7cc1bc*/
  unk_87C1D4 = result; /*0x7cc1bf*/
  unk_87C1DC = a2; /*0x7cc1c2*/
  return result; /*0x7cc1c6*/
}
} // namespace gamemd

// 0x7CC1D4
namespace gamemd {
int _except_handler3(int a1, unsigned int * TargetFrame, int a3)
{
  int *v3; // ebp
  unsigned int *v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  unsigned int v11[2]; // [esp+10h] [ebp-8h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v3 = &savedregs; /*0x7cc1d5*/
  v4 = TargetFrame; /*0x7cc1df*/
  if ( (*(unsigned int *)(a1 + 4) & 6) != 0 ) /*0x7cc1ec*/
  {
    _local_unwind2((int)TargetFrame, -1); /*0x7cc27b*/
    return 1; /*0x7cc284*/
  }
  else
  {
    v11[0] = a1; /*0x7cc1f2*/
    v11[1] = a3; /*0x7cc1f8*/
    *(TargetFrame - 1) = v11; /*0x7cc1fe*/
    v5 = TargetFrame[3]; /*0x7cc201*/
    v6 = TargetFrame[2]; /*0x7cc204*/
    while ( v5 != -1 ) /*0x7cc20a*/
    {
      if ( *(unsigned int *)(v6 + 12 * v5 + 4) ) /*0x7cc20f*/
      {
        v7 = (*(int (**)(void))(v6 + 12 * v5 + 4))(); /*0x7cc21b*/
        v4 = (unsigned int *)v3[3]; /*0x7cc221*/
        if ( v7 ) /*0x7cc226*/
        {
          if ( v7 < 0 ) /*0x7cc228*/
            return 0; /*0x7cc26b*/
          v8 = v4[2]; /*0x7cc22a*/
          _global_unwind2((PVOID)v3[3]); /*0x7cc22e*/
          v3 = v4 + 4; /*0x7cc236*/
          _local_unwind2((int)v4, v5); /*0x7cc23b*/
          _NLG_Notify(*(unsigned int *)(v8 + 12 * v5 + 8), (int)(v4 + 4), 1); /*0x7cc24c*/
          v4[3] = *(unsigned int *)(v8 + 4 * v9); /*0x7cc254*/
          (*(void (**)(void))(v8 + 4 * v9 + 8))(); /*0x7cc257*/
        }
      }
      v6 = v4[2]; /*0x7cc25b*/
      v5 = *(unsigned int *)(v6 + 12 * v5); /*0x7cc261*/
    }
    return 1; /*0x7cc26d*/
  }
}
} // namespace gamemd

// 0x7CC291
namespace gamemd {
int _seh_longjmp_unwind_4(int a1)
{
  return _local_unwind2(a1->?, a1->?); /*0x7cc2a8*/
}
} // namespace gamemd

// 0x7CC2AC
namespace gamemd {
size_t mbstowcs(wchar_t * Dest, const char * Source, size_t MaxCount)
{
  int v3; // ebx
  size_t MaxCounta; // [esp+1Ch] [ebp+10h]

  InterlockedIncrement(&dword_B78BA4); /*0x7cc2b8*/
  v3 = 0; /*0x7cc2c4*/
  if ( dword_B78BA0 ) /*0x7cc2cc*/
  {
    InterlockedDecrement(&dword_B78BA4); /*0x7cc2cf*/
    _lock(19); /*0x7cc2d3*/
    v3 = 1; /*0x7cc2db*/
  }
  MaxCounta = _mbstowcs_lk(Dest, Source, MaxCount); /*0x7cc2ed*/
  if ( v3 ) /*0x7cc2f2*/
    _unlock(19); /*0x7cc2f6*/
  else
    InterlockedDecrement(&dword_B78BA4); /*0x7cc2ff*/
  return MaxCounta; /*0x7cc304*/
}
} // namespace gamemd

// 0x7CC447
namespace gamemd {
size_t wcstombs(CCINIClass * aP0, ObjectClass * aP1, size_t MaxCount)
{
  int v3; // ebx
  int MaxCounta; // [esp+1Ch] [ebp+10h]

  InterlockedIncrement(&dword_B78BA4); /*0x7cc453*/
  v3 = 0; /*0x7cc45f*/
  if ( dword_B78BA0 ) /*0x7cc467*/
  {
    InterlockedDecrement(&dword_B78BA4); /*0x7cc46a*/
    _lock(19); /*0x7cc46e*/
    v3 = 1; /*0x7cc476*/
  }
  MaxCounta = _wcstombs_lk(aP0, aP1, MaxCount); /*0x7cc488*/
  if ( v3 ) /*0x7cc48d*/
    _unlock(19); /*0x7cc491*/
  else
    InterlockedDecrement(&dword_B78BA4); /*0x7cc49a*/
  return MaxCounta; /*0x7cc49f*/
}
} // namespace gamemd

// 0x7CC653
namespace gamemd {
int wcsncnt(ObjectClass * aP0, int a2)
{
  int v2; // ecx
  unsigned short *v3; // eax

  v2 = a2; /*0x7cc656*/
  v3 = aP0; /*0x7cc659*/
  if ( !a2 ) /*0x7cc660*/
    return a2; /*0x7cc660*/
  do /*0x7cc66a*/
  {
    if ( !*v3 ) /*0x7cc662*/
      break; /*0x7cc665*/
    ++v3; /*0x7cc668*/
    --v2; /*0x7cc669*/
  }
  while ( v2 ); /*0x7cc66a*/
  if ( v2 && !*v3 ) /*0x7cc670*/
    return v3 - aP0 + 1; /*0x7cc67a*/
  else
    return a2; /*0x7cc67d*/
}
} // namespace gamemd

// 0x7CC682
namespace gamemd {
wchar_t * wcsstr(CampaignScore * aP0, const wchar_t * SubStr)
{
  wchar_t *result; // eax
  const wchar_t *v3; // ecx
  int v4; // edx

  for ( result = (wchar_t *)aP0; *result; ++result ) /*0x7cc682*/
  {
    v3 = SubStr; /*0x7cc690*/
    v4 = (char *)result - (char *)SubStr; /*0x7cc696*/
    do /*0x7cc6ad*/
    {
      if ( !*v3 ) /*0x7cc698*/
        break; /*0x7cc69e*/
      if ( *(const wchar_t *)((char *)v3 + v4) != *v3 ) /*0x7cc6a7*/
        break; /*0x7cc6a9*/
      ++v3; /*0x7cc6ac*/
    }
    while ( *(const wchar_t *)((char *)v3 + v4) ); /*0x7cc6ad*/
    if ( !*v3 ) /*0x7cc6b8*/
      return result; /*0x7cc6b8*/
  }
  return 0; /*0x7cc6c0*/
}
} // namespace gamemd

// 0x7CCF1D
namespace gamemd {
void _store_str(unsigned char * a1, unsigned int * a2, unsigned int * a3)
{
  if ( *a3 ) /*0x7ccf23*/
  {
    do /*0x7ccf3f*/
    {
      if ( !IDA_LOBYTE(a1->AbstractClass) ) /*0x7ccf30*/
        break; /*0x7ccf34*/
      *(unsigned char *)(*a2)++ = a1->AbstractClass; /*0x7ccf38*/
      a1 = (ObjectClass *)((char *)a1 + 1); /*0x7ccf3c*/
    }
    while ( (*a3)-- != 1 ); /*0x7ccf3f*/
  }
}
} // namespace gamemd

// 0x7CCF44
namespace gamemd {
int _store_num(int a1, unsigned int a2, unsigned int * a3, unsigned int * a4)
{
  int result; // eax
  unsigned int v5; // ecx
  int v6; // [esp+4h] [ebp-4h]

  result = 0; /*0x7ccf48*/
  v6 = 0; /*0x7ccf51*/
  if ( dword_B78BB0 ) /*0x7ccf54*/
    return _store_number(a1, a3, a4); /*0x7ccf5f*/
  if ( a2 >= *a4 ) /*0x7ccf71*/
  {
    *a4 = 0; /*0x7ccfae*/
  }
  else
  {
    v5 = a2 - 1; /*0x7ccf73*/
    if ( a2 ) /*0x7ccf7d*/
    {
      do /*0x7ccfa1*/
      {
        *(unsigned char *)(*a3 + v5) = a1 % 10 + 48; /*0x7ccf8e*/
        ++v6; /*0x7ccf97*/
        --v5; /*0x7ccf9a*/
        a1 /= 10; /*0x7ccf9e*/
      }
      while ( v5 != -1 ); /*0x7ccfa1*/
    }
    *a3 += v6; /*0x7ccfa7*/
    *a4 -= v6; /*0x7ccfa9*/
    return v6; /*0x7ccfa4*/
  }
  return result; /*0x7ccfb0*/
}
} // namespace gamemd

// 0x7CCFB3
namespace gamemd {
char * _store_number(int a1, char ** a2, unsigned int * a3)
{
  char *v3; // ecx
  char *result; // eax
  char *v5; // ecx
  char v6; // dl

  v3 = *a2; /*0x7ccfbf*/
  do /*0x7ccfe2*/
  {
    if ( *a3 <= 1u ) /*0x7ccfc4*/
      break; /*0x7ccfc4*/
    *v3++ = a1 % 10 + 48; /*0x7ccfd5*/
    --*a3; /*0x7ccfdb*/
    a1 /= 10; /*0x7ccfdf*/
  }
  while ( a1 > 0 ); /*0x7ccfe2*/
  result = *a2; /*0x7ccfe4*/
  *a2 = v3; /*0x7ccfe6*/
  v5 = v3 - 1; /*0x7ccfe8*/
  do /*0x7ccff5*/
  {
    v6 = *v5; /*0x7ccfeb*/
    *v5-- = *result; /*0x7ccfed*/
    *result++ = v6; /*0x7ccff0*/
  }
  while ( result < v5 ); /*0x7ccff5*/
  return result; /*0x7ccff7*/
}
} // namespace gamemd

// 0x7CD42B
namespace gamemd {
int remove(const char * FileName)
{
  DWORD LastError; // eax

  if ( DeleteFileA(FileName) ) /*0x7cd42f*/
    LastError = 0; /*0x7cd441*/
  else
    LastError = GetLastError(); /*0x7cd439*/
  if ( !LastError ) /*0x7cd445*/
    return 0; /*0x7cd452*/
  _dosmaperr(LastError); /*0x7cd448*/
  return -1; /*0x7cd451*/
}
} // namespace gamemd

// 0x7CD455
namespace gamemd {
int _unlink(const char * FileName)
{
  return remove(FileName); /*0x7cd45f*/
}
} // namespace gamemd

// 0x7CD615
namespace gamemd {
int genfname(const unsigned char * Buffer)
{
  char *v1; // esi
  unsigned int v2; // eax
  char *v4; // eax

  v1 = (char *)(_mbsrchr(Buffer, 0x2Eu) + 1); /*0x7cd627*/
  v2 = strtoul(v1, 0, 32) + 1; /*0x7cd633*/
  if ( v2 >= 0x7FFF ) /*0x7cd639*/
    return -1; /*0x7cd63b*/
  v4 = _ultoa(v2, (char *)&Buffer, 32); /*0x7cd647*/
  strcpy(v1, v4); /*0x7cd64e*/
  return 0; /*0x7cd658*/
}
} // namespace gamemd

// 0x7CD65B
namespace gamemd {
void sub_7CD65B()
{
  ++dword_87CB14; /*0x7cd65b*/
}
} // namespace gamemd

// 0x7CD790
namespace gamemd {
size_t strcspn(IUnknown * aP0, const char * Control)
{
  unsigned int v2; // eax
  int v5; // ecx
  signed int32_t v7[9]; // [esp+0h] [ebp-24h] BYREF

  v2 = 0; /*0x7cd794*/
  memset(v7, 0, 32); /*0x7cd79d*/
  while ( 1 ) /*0x7cd7a4*/
  {
    IDA_LOBYTE(v2) = *Control; /*0x7cd7a4*/
    if ( !*Control ) /*0x7cd7a4*/
      break; /*0x7cd7a4*/
    ++Control; /*0x7cd7aa*/
    _bittestandset(v7, v2); /*0x7cd7ab*/
  }
  v5 = -1; /*0x7cd7b4*/
  do /*0x7cd7c4*/
  {
    ++v5; /*0x7cd7b8*/
    IDA_LOBYTE(v2) = *aP0; /*0x7cd7b9*/
    if ( !*aP0 ) /*0x7cd7b9*/
      break; /*0x7cd7bd*/
    ++aP0; /*0x7cd7bf*/
  }
  while ( !_bittest(v7, v2) ); /*0x7cd7c4*/
  return v5; /*0x7cd7cb*/
}
} // namespace gamemd

// 0x7CD917
namespace gamemd {
void  __noreturn _amsg_exit(DWORD NumberOfBytesWritten)
{
  if ( dword_B78230 == 1 ) /*0x7cd91e*/
    _FF_MSGBANNER(); /*0x7cd920*/
  _NMSG_WRITE(NumberOfBytesWritten); /*0x7cd929*/
  off_87C2A0(255); /*0x7cd933*/
}
} // namespace gamemd

// 0x7CD93C
namespace gamemd {
void  __noreturn fast_error_exit(DWORD NumberOfBytesWritten)
{
  if ( dword_B78230 == 1 ) /*0x7cd943*/
    _FF_MSGBANNER(); /*0x7cd945*/
  _NMSG_WRITE(NumberOfBytesWritten); /*0x7cd94e*/
  ExitProcess(0xFFu); /*0x7cd959*/
}
} // namespace gamemd

// 0x7CD95F
namespace gamemd {
void nullsub_269()
{
  ; /*0x7cd95f*/
}
} // namespace gamemd

// 0x7CD960
namespace gamemd {
void _mtinitlocks()
{
  InitializeCriticalSection(lpCriticalSection); /*0x7cd96d*/
  InitializeCriticalSection(off_87C2DC); /*0x7cd975*/
  InitializeCriticalSection(off_87C2CC); /*0x7cd97d*/
  InitializeCriticalSection(off_87C2AC); /*0x7cd985*/
}
} // namespace gamemd

// 0x7CD989
namespace gamemd {
void _mtdeletelocks()
{
  LPCRITICAL_SECTION *v0; // esi

  v0 = &dword_87C2A8; /*0x7cd991*/
  do /*0x7cd9d0*/
  {
    if ( *v0 && v0 != &lpCriticalSection && v0 != &off_87C2DC && v0 != &off_87C2CC && v0 != &off_87C2AC ) /*0x7cd9ba*/
    {
      DeleteCriticalSection(*v0); /*0x7cd9bd*/
      free(*v0); /*0x7cd9c1*/
    }
    ++v0; /*0x7cd9c7*/
  }
  while ( (int)v0 < (int)dword_87C368 ); /*0x7cd9d0*/
  DeleteCriticalSection(off_87C2CC); /*0x7cd9d8*/
  DeleteCriticalSection(off_87C2DC); /*0x7cd9e0*/
  DeleteCriticalSection(lpCriticalSection); /*0x7cd9e8*/
  DeleteCriticalSection(off_87C2AC); /*0x7cd9f0*/
}
} // namespace gamemd

// 0x7CD9F5
namespace gamemd {
void _lock(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // edi

  if ( !*(&dword_87C2A8 + a1) ) /*0x7cd9fc*/
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)malloc(0x18u); /*0x7cda15*/
    if ( !v1 ) /*0x7cda1a*/
      _amsg_exit(0x11u); /*0x7cda1e*/
    _lock(17); /*0x7cda26*/
    if ( *(&dword_87C2A8 + a1) ) /*0x7cda2b*/
    {
      free(v1); /*0x7cda3c*/
    }
    else
    {
      InitializeCriticalSection(v1); /*0x7cda32*/
      *(&dword_87C2A8 + a1) = v1; /*0x7cda38*/
    }
    _unlock(17); /*0x7cda44*/
  }
  EnterCriticalSection(*(&dword_87C2A8 + a1)); /*0x7cda4d*/
}
} // namespace gamemd

// 0x7CDA56
namespace gamemd {
void _unlock(int a1)
{
  LeaveCriticalSection(*(&dword_87C2A8 + a1)); /*0x7cda63*/
}
} // namespace gamemd

// 0x7CDA82
namespace gamemd {
void nullsub_270()
{
  ; /*0x7cda82*/
}
} // namespace gamemd

// 0x7CDE75
namespace gamemd {
CCINIClass * _setlocale_get_all()
{
  char *v0; // eax
  int v1; // ebp
  const char **v2; // esi
  const char **v3; // ebx
  const char *v5; // [esp-Ch] [ebp-1Ch]

  v0 = Block; /*0x7cde75*/
  v1 = 1; /*0x7cde82*/
  if ( !Block ) /*0x7cde83*/
  {
    v0 = (char *)malloc(0x351u); /*0x7cde8a*/
    Block = v0; /*0x7cde90*/
  }
  *v0 = 0; /*0x7cde95*/
  _strcats(Block, 3); /*0x7cdeb2*/
  v2 = (const char **)&off_87C490; /*0x7cdeb7*/
  v3 = (const char **)&off_87C490; /*0x7cdebf*/
  do /*0x7cdf05*/
  {
    strcat(Block, asc_81C8FC); /*0x7cdecc*/
    v5 = v2[3]; /*0x7cded1*/
    v2 += 3; /*0x7cded4*/
    if ( strcmp(*v3, v5) ) /*0x7cded9*/
      v1 = 0; /*0x7cdee5*/
    v3 = v2; /*0x7cdee9*/
    _strcats(Block, 3); /*0x7cdef7*/
  }
  while ( (int)v2 < (int)&off_87C4C0 ); /*0x7cdf05*/
  if ( !v1 ) /*0x7cdf0d*/
    return Block; /*0x7cdf0f*/
  free(Block); /*0x7cdf1b*/
  Block = 0; /*0x7cdf20*/
  return (char *)off_87C49C; /*0x7cdf07*/
}
} // namespace gamemd

// 0x7CE046
namespace gamemd {
int ReturnNull3()
{
  return 0; /*0x7ce048*/
}
} // namespace gamemd

// 0x7CE049
namespace gamemd {
char * _strcats(CCINIClass * aP0, int a2)
{
  int v2; // edi
  int *v3; // esi
  char *result; // eax
  const char *v5; // [esp-8h] [ebp-Ch]

  v2 = a2; /*0x7ce04a*/
  if ( a2 > 0 ) /*0x7ce050*/
  {
    v3 = &a2; /*0x7ce053*/
    do /*0x7ce069*/
    {
      v5 = (const char *)v3[1]; /*0x7ce057*/
      ++v3; /*0x7ce05a*/
      result = strcat(aP0, v5); /*0x7ce061*/
      --v2; /*0x7ce067*/
    }
    while ( v2 ); /*0x7ce069*/
  }
  return result; /*0x7ce06c*/
}
} // namespace gamemd

// 0x7CE06E
namespace gamemd {
int __lc_strtolc(char * a0, IUnknown * aP1)
{
  const char *v2; // esi
  signed int v4; // eax
  char v5; // bl
  const char *v6; // edi
  char *v7; // eax
  const char *v8; // [esp-8h] [ebp-14h]
  size_t v9; // [esp-4h] [ebp-10h]
  char *Sourcea; // [esp+18h] [ebp+Ch]

  memset(a0, 0, 0x88u); /*0x7ce07f*/
  v2 = aP1; /*0x7ce084*/
  if ( !*aP1 ) /*0x7ce08e*/
    return 0; /*0x7ce08e*/
  if ( *aP1 == 46 && aP1[1] ) /*0x7ce094*/
  {
    strcpy(a0 + 128, aP1 + 1); /*0x7ce0a5*/
    return 0; /*0x7ce0ae*/
  }
  for ( Sourcea = 0; ; ++Sourcea ) /*0x7ce0b3*/
  {
    v4 = strcspn(v2, "_.,"); /*0x7ce0bd*/
    if ( !v4 ) /*0x7ce0c6*/
      break; /*0x7ce0c6*/
    v5 = v2[v4]; /*0x7ce0cc*/
    v6 = &v2[v4]; /*0x7ce0cf*/
    if ( Sourcea ) /*0x7ce0d2*/
    {
      if ( Sourcea == (char *)1 ) /*0x7ce0e9*/
      {
        if ( v4 >= 64 || v5 == 95 ) /*0x7ce0f3*/
          return -1; /*0x7ce0f3*/
        v9 = v4; /*0x7ce0f5*/
        v8 = v2; /*0x7ce0f9*/
        v7 = a0 + 64; /*0x7ce0fa*/
      }
      else
      {
        if ( Sourcea != (char *)2 || v5 && v5 != 44 ) /*0x7ce10c*/
          return -1; /*0x7ce10c*/
        v9 = v4; /*0x7ce10e*/
        v8 = v2; /*0x7ce112*/
        v7 = a0 + 128; /*0x7ce113*/
      }
      strncpy(v7, v8, v9); /*0x7ce119*/
    }
    else
    {
      if ( v4 >= 64 || v5 == 46 ) /*0x7ce0dc*/
        return -1; /*0x7ce0dc*/
      strncpy(a0, v2, v4); /*0x7ce0e3*/
    }
    if ( v5 == 44 || !v5 ) /*0x7ce128*/
      return 0; /*0x7ce128*/
    v2 = v6 + 1; /*0x7ce12d*/
  }
  return -1; /*0x7ce135*/
}
} // namespace gamemd

// 0x7CE13A
namespace gamemd {
char * __lc_lctostr(char * Destination, char * Source)
{
  char *result; // eax

  strcpy(Destination, Source); /*0x7ce144*/
  if ( Source[64] ) /*0x7ce149*/
    _strcats(Destination, 2); /*0x7ce160*/
  result = Source + 128; /*0x7ce16f*/
  if ( Source[128] ) /*0x7ce168*/
    return _strcats(Destination, 2); /*0x7ce184*/
  return result; /*0x7ce175*/
}
} // namespace gamemd

// 0x7CE9E6
namespace gamemd {
unsigned int * write_char(int a1, FILE * File, unsigned int * a3)
{
  int v4; // eax
  bool v5; // zf
  unsigned int *result; // eax

  if ( --File->_cnt < 0 ) /*0x7ce9ec*/
  {
    v4 = _flsbuf(a1, File); /*0x7cea03*/
  }
  else
  {
    *File->_ptr++ = a1; /*0x7ce9f6*/
    v4 = (uint8_t)a1; /*0x7ce9fa*/
  }
  v5 = v4 == -1; /*0x7cea0a*/
  result = a3; /*0x7cea0d*/
  if ( v5 ) /*0x7cea10*/
    *a3 = -1; /*0x7cea12*/
  else
    ++*a3; /*0x7cea17*/
  return result; /*0x7cea15*/
}
} // namespace gamemd

// 0x7CEA1B
namespace gamemd {
unsigned int * write_multi_char(int a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
  unsigned int *result; // eax
  unsigned int *i; // edi

  result = a2; /*0x7cea21*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7cea26*/
  {
    result = write_char(a1, File, a4); /*0x7cea35*/
    if ( *a4 == -1 ) /*0x7cea40*/
      break; /*0x7cea40*/
    result = i; /*0x7cea42*/
  }
  return result; /*0x7cea49*/
}
} // namespace gamemd

// 0x7CEA4C
namespace gamemd {
unsigned int * write_string(char * a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
  unsigned int *result; // eax
  unsigned int *i; // ebx
  int v7; // eax

  result = a2; /*0x7cea51*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7cea58*/
  {
    v7 = *a1++; /*0x7cea62*/
    result = write_char(v7, File, a4); /*0x7cea6c*/
    if ( *a4 == -1 ) /*0x7cea77*/
      break; /*0x7cea77*/
    result = i; /*0x7cea79*/
  }
  return result; /*0x7cea80*/
}
} // namespace gamemd

// 0x7CEA84
namespace gamemd {
int get_int_arg(unsigned int * a1)
{
  *a1 += 4; /*0x7cea88*/
  return *(unsigned int *)(*a1 - 4); /*0x7cea90*/
}
} // namespace gamemd

// 0x7CEA91
namespace gamemd {
long long get_int64_arg(unsigned int * a1)
{
  *a1 += 8; /*0x7cea95*/
  return *(unsigned long long *)(*a1 - 8); /*0x7ceaa0*/
}
} // namespace gamemd

// 0x7CEAA1
namespace gamemd {
short get_short_arg(unsigned int * a1)
{
  *a1 += 4; /*0x7ceaa5*/
  return *(unsigned short *)(*a1 - 4); /*0x7ceaae*/
}
} // namespace gamemd

// 0x7CEAAF
namespace gamemd {
unsigned int _setdefaultprecision()
{
  return _controlfp(0x10000u, 0x30000u); /*0x7ceac0*/
}
} // namespace gamemd

// 0x7CEAC1
namespace gamemd {
bool _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0; /*0x7ceaf9*/
}
} // namespace gamemd

// 0x7CEAFF
namespace gamemd {
int _ms_p5_mp_test_fdiv()
{
  HMODULE ModuleHandleA; // eax
  FARPROC ProcAddress; // eax

  ModuleHandleA = GetModuleHandleA("KERNEL32"); /*0x7ceb04*/
  if ( ModuleHandleA && (ProcAddress = GetProcAddress(ModuleHandleA, "IsProcessorFeaturePresent")) != 0 ) /*0x7ceb1c*/
    return ProcAddress(0); /*0x7ceb20*/
  else
    return _ms_p5_test_fdiv(); /*0x7ceb23*/
}
} // namespace gamemd

// 0x7CEB82
namespace gamemd {
char * _cropzeros(char * a1)
{
  char *v1; // eax
  char i; // cl
  char v3; // cl
  char *result; // eax
  char v5; // cl
  char *v6; // ecx
  char v7; // dl

  v1 = a1; /*0x7ceb82*/
  for ( i = *a1; i; i = *++v1 ) /*0x7ceb8c*/
  {
    if ( i == SrcCh ) /*0x7ceb94*/
      break; /*0x7ceb94*/
  }
  v3 = *v1; /*0x7ceb9e*/
  result = v1 + 1; /*0x7ceba0*/
  if ( v3 ) /*0x7ceba3*/
  {
    while ( 1 ) /*0x7ceba5*/
    {
      v5 = *result; /*0x7ceba5*/
      if ( !*result || v5 == 101 || v5 == 69 ) /*0x7cebb3*/
        break; /*0x7cebb3*/
      ++result; /*0x7cebb5*/
    }
    v6 = result; /*0x7cebb8*/
    do /*0x7cebbe*/
      --result; /*0x7cebba*/
    while ( *result == 48 ); /*0x7cebbe*/
    if ( *result == SrcCh ) /*0x7cebc2*/
      --result; /*0x7cebc4*/
    do /*0x7cebcd*/
    {
      v7 = *v6; /*0x7cebc5*/
      ++result; /*0x7cebc7*/
      ++v6; /*0x7cebc8*/
      *result = v7; /*0x7cebcb*/
    }
    while ( v7 ); /*0x7cebcd*/
  }
  return result; /*0x7cebcf*/
}
} // namespace gamemd

// 0x7CEBD0
namespace gamemd {
bool _positive(double * a1)
{
  return *a1 >= 0.0; /*0x7cebe4*/
}
} // namespace gamemd

// 0x7CEBE8
namespace gamemd {
int * _fassign(int a1, int * a2, int a3)
{
  unsigned int v4[2]; // [esp+0h] [ebp-8h] BYREF

  if ( a1 ) /*0x7cebf4*/
  {
    Fassign_Helper((int)v4, a3); /*0x7cebfa*/
    *a2 = v4[0]; /*0x7cec07*/
    a2[1] = v4[1]; /*0x7cec0c*/
    return a2; /*0x7cebff*/
  }
  else
  {
    Fassign_Helper_7D7D1C((int)&a3, a3); /*0x7cec15*/
    *a2 = a3; /*0x7cec22*/
    return a2; /*0x7cec1a*/
  }
}
} // namespace gamemd

// 0x7CEC26
namespace gamemd {
unsigned char * _cftoe(double * a1, unsigned char * a2, int a3, int a4)
{
  double v6; // [esp+0h] [ebp-3Ch]
  char Destination[24]; // [esp+14h] [ebp-28h] BYREF
  int v8[4]; // [esp+2Ch] [ebp-10h] BYREF

  v6 = *a1; /*0x7cec3c*/
  _fltout2(IDA_SLOBYTE(v6), IDA_SHIDWORD(v6), v8, Destination); /*0x7cec3f*/
  _fptostr((char *)((v8[0] == 45) + a2 + (a3 > 0)), (char *)(a3 + 1), (int)v8); /*0x7cec67*/
  _cftoe2(a2, a3, a4, v8, 0); /*0x7cec79*/
  return a2; /*0x7cec84*/
}
} // namespace gamemd

// 0x7CEC87
namespace gamemd {
unsigned char * _cftoe2(unsigned char * a1, int a2, int a3, int a4, char a5)
{
  unsigned char *v5; // eax
  char *v6; // eax
  int v7; // ebx

  if ( a5 ) /*0x7cec98*/
    _shift(&a1[*(unsigned int *)a4 == 45], a2 > 0); /*0x7cecae*/
  v5 = a1; /*0x7cecb8*/
  if ( *(unsigned int *)a4 == 45 ) /*0x7cecba*/
  {
    *a1 = 45; /*0x7cecbc*/
    v5 = a1 + 1; /*0x7cecbf*/
  }
  if ( a2 > 0 ) /*0x7cecc5*/
  {
    *v5 = v5[1]; /*0x7ceccd*/
    *++v5 = SrcCh; /*0x7cecd7*/
  }
  v6 = strcpy(&v5[(a5 == 0) + a2], "e+000"); /*0x7cecec*/
  if ( a3 ) /*0x7cecf8*/
    *v6 = 69; /*0x7cecfa*/
  if ( **(unsigned char **)(a4 + 12) != 48 ) /*0x7ced04*/
  {
    v7 = *(unsigned int *)(a4 + 4) - 1; /*0x7ced09*/
    if ( v7 < 0 ) /*0x7ced0a*/
    {
      v7 = 1 - *(unsigned int *)(a4 + 4); /*0x7ced0c*/
      v6[1] = 45; /*0x7ced0e*/
    }
    if ( v7 >= 100 ) /*0x7ced15*/
    {
      v6[2] += v7 / 100; /*0x7ced1f*/
      v7 %= 100; /*0x7ced26*/
    }
    if ( v7 >= 10 ) /*0x7ced2c*/
    {
      v6[3] += v7 / 10; /*0x7ced36*/
      v7 %= 10; /*0x7ced3d*/
    }
    v6[4] += v7; /*0x7ced3f*/
  }
  return a1; /*0x7ced44*/
}
} // namespace gamemd

// 0x7CED49
namespace gamemd {
char * _cftof(double * a1, char * Src, size_t Size)
{
  double v5; // [esp+0h] [ebp-3Ch]
  char Destination[24]; // [esp+14h] [ebp-28h] BYREF
  int v7[4]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = *a1; /*0x7ced5f*/
  _fltout2(IDA_SLOBYTE(v5), IDA_SHIDWORD(v5), v7, Destination); /*0x7ced62*/
  _fptostr(&Src[v7[0] == 45], (char *)(Size + v7[1]), (int)v7); /*0x7ced81*/
  _cftof2(Src, Size, (int)v7, 0); /*0x7ced90*/
  return Src; /*0x7ced9b*/
}
} // namespace gamemd

// 0x7CEE45
namespace gamemd {
char * _cftog(double * a1, char * Src, char * Size, int a4)
{
  int v5; // esi
  char *v6; // edi
  double v8; // [esp+0h] [ebp-44h]
  char Destination[24]; // [esp+1Ch] [ebp-28h] BYREF
  int v10; // [esp+34h] [ebp-10h] BYREF
  int v11; // [esp+38h] [ebp-Ch]

  v8 = *a1; /*0x7cee5d*/
  _fltout2(IDA_SLOBYTE(v8), IDA_SHIDWORD(v8), &v10, Destination); /*0x7cee60*/
  v5 = v11 - 1; /*0x7cee6b*/
  v6 = &Src[v10 == 45]; /*0x7cee7a*/
  _fptostr(v6, Size, (int)&v10); /*0x7cee82*/
  if ( v11 - 1 < -4 || v11 - 1 >= (int)Size ) /*0x7cee9a*/
    return _cftoe2(Src, (int)Size, a4, (int)&v10, 1); /*0x7ceecb*/
  if ( v5 < v11 - 1 ) /*0x7cee9e*/
    v6[strlen(v6) - 1] = 0; /*0x7ceea7*/
  return _cftof2(Src, (int)Size, &v10, 1); /*0x7ceed3*/
}
} // namespace gamemd

// 0x7CEED8
namespace gamemd {
char * _cfltcvt(double * a1, char * Src, int a3, char * Size, int a5)
{
  if ( a3 == 101 || a3 == 69 ) /*0x7ceee5*/
    return (char *)_cftoe(a1, (int)Src, (int)Size, a5); /*0x7cef1f*/
  if ( a3 == 102 ) /*0x7ceeeb*/
    return _cftof(a1, Src, (size_t)Size); /*0x7ceef6*/
  return _cftog(a1, Src, Size, a5); /*0x7ceefe*/
}
} // namespace gamemd

// 0x7CEF29
namespace gamemd {
void _shift(const char * Src, int a2)
{
  int v2; // eax

  if ( a2 ) /*0x7cef30*/
  {
    v2 = strlen(Src); /*0x7cef38*/
    memcpy((void *)&Src[a2], Src, v2 + 1); /*0x7cef43*/
  }
}
} // namespace gamemd

// 0x7CF037
namespace gamemd {
void zerotoxdone()
{
  ; /*0x7cf037*/
}
} // namespace gamemd

// 0x7CF082
namespace gamemd {
void expbigret()
{
  ; /*0x7cf082*/
}
} // namespace gamemd

// 0x7CF116
namespace gamemd {
void isintTOSret()
{
  ; /*0x7cf116*/
}
} // namespace gamemd

// 0x7CF117
namespace gamemd {
void notanint()
{
  isintTOSret(); /*0x7cf11c*/
}
} // namespace gamemd

// 0x7CF11E
namespace gamemd {
void evenint()
{
  isintTOSret(); /*0x7cf123*/
}
} // namespace gamemd

// 0x7CF330
namespace gamemd {
void __noreturn _startTwoArgErrorHandling()
{
  JUMPOUT(0x7CF350); /*0x7cf350*/
}
} // namespace gamemd

// 0x7CF347
namespace gamemd {
void* __startOneArgErrorHandling()
{
  unsigned int v9[6]; // [esp+0h] [ebp-20h] BYREF
  double v10; // [esp+18h] [ebp-8h]

  v9[0] = a1; /*0x7cf34d*/
  v10 = a4; /*0x7cf350*/
  v9[1] = a3; /*0x7cf353*/
  v9[2] = a7; /*0x7cf35c*/
  v9[3] = a8; /*0x7cf35f*/
  _87except(a2, v9, &a5); /*0x7cf36b*/
  return v10; /*0x7cf381*/
}
}
// 0x7CF3A5
namespace gamemd {
void _load_CW()
{
  ; /*0x7cf3a5*/
}
} // namespace gamemd

// 0x7CF3D5
namespace gamemd {
double _fload_withFB(int a1, unsigned int * a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 ) /*0x7cf3e2*/
    return *(double *)a2; /*0x7cf3e4*/
  result = (unsigned long long)(*(unsigned long long *)a2 << 11); /*0x7cf409*/
  return result; /*0x7cf3e6*/
}
} // namespace gamemd

// 0x7CF429
namespace gamemd {
int expspecial(int a1, int a2)
{
  return a2; /*0x7cf42d*/
}
} // namespace gamemd

// 0x7CF465
namespace gamemd {
void _check_overflow_exit()
{
  JUMPOUT(0x7CF48D); /*0x7cf48d*/
}
} // namespace gamemd

// 0x7CF64C
namespace gamemd {
int _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 ) /*0x7cf662*/
    return 0; /*0x7cf6ad*/
  _frnd(X); /*0x7cf66c*/
  _frnd(X / 2.0); /*0x7cf695*/
  return 2; /*0x7cf6ab*/
}
} // namespace gamemd

// 0x7CF762
namespace gamemd {
int sub_7CF762()
{
  return dword_87C584; /*0x7cf767*/
}
} // namespace gamemd

// 0x7CF768
namespace gamemd {
int _set_sbh_threshold(size_t NewValue)
{
  if ( NewValue > 0x3F8 ) /*0x7cf771*/
    return 0; /*0x7cf773*/
  dword_87C584 = NewValue; /*0x7cf778*/
  return 1; /*0x7cf775*/
}
} // namespace gamemd

// 0x7CFECD
namespace gamemd {
int __sbh_alloc_new_group(AbstractClass * aP0)
{
  int v1; // esi
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  unsigned int *v6; // edi
  unsigned int *v8; // eax

  v1 = aP0[4]; /*0x7cfed7*/
  v2 = aP0[2]; /*0x7cfeda*/
  v3 = 0; /*0x7cfedd*/
  while ( v2 >= 0 ) /*0x7cfee1*/
  {
    v2 *= 2; /*0x7cfee3*/
    ++v3; /*0x7cfee5*/
  }
  v4 = 63; /*0x7cfef2*/
  v5 = 516 * v3 + v1 + 324; /*0x7cfef3*/
  do /*0x7cff07*/
  {
    *(unsigned int *)(v5 + 8) = v5; /*0x7cfefd*/
    *(unsigned int *)(v5 + 4) = v5; /*0x7cff00*/
    v5 += 8; /*0x7cff03*/
    --v4; /*0x7cff06*/
  }
  while ( v4 ); /*0x7cff07*/
  v6 = (unsigned int *)(aP0[3] + (v3 << 15)); /*0x7cff10*/
  if ( !VirtualAlloc(v6, 0x8000u, 0x1000u, 4u) ) /*0x7cff1e*/
    return -1; /*0x7cff28*/
  if ( v6 < v6 + 7168 ) /*0x7cff38*/
  {
    v8 = v6 + 4; /*0x7cff3a*/
    do /*0x7cff74*/
    {
      *(v8 - 2) = -1; /*0x7cff3d*/
      v8[1019] = -1; /*0x7cff41*/
      *(v8 - 1) = 4080; /*0x7cff4e*/
      *v8 = v8 + 1023; /*0x7cff55*/
      v8[1] = v8 - 1025; /*0x7cff5d*/
      v8[1018] = 4080; /*0x7cff60*/
      v8 += 1024; /*0x7cff6a*/
    }
    while ( v8 - 4 <= v6 + 7168 ); /*0x7cff74*/
  }
  *(unsigned int *)(516 * v3 + v1 + 832) = v6 + 3; /*0x7cff84*/
  v6[5] = 516 * v3 + v1 + 828; /*0x7cff87*/
  *(unsigned int *)(516 * v3 + v1 + 836) = v6 + 7171; /*0x7cff8d*/
  v6[7172] = 516 * v3 + v1 + 828; /*0x7cff90*/
  *(unsigned int *)(v1 + 4 * v3 + 68) = 0; /*0x7cff93*/
  *(unsigned int *)(v1 + 4 * v3 + 196) = 1; /*0x7cff98*/
  if ( (*(unsigned char *)(v1 + 67))++ == 0 ) /*0x7cffa6*/
    aP0[1] |= 1u; /*0x7cffb0*/
  aP0[2] &= ~(0x80000000 >> v3); /*0x7cffbe*/
  return v3; /*0x7cffc3*/
}
} // namespace gamemd
