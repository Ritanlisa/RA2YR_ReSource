// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AudioSettings_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/DListNode_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Voice_e4.hpp"

// 0x402AF0
namespace gamemd {
unsigned int * AudioQueue::CreateNode()
{

  DListNode *v2; // esi

  v2 = (DListNode *)__2_YAPAXI_Z(0x60u); /*0x402afc*/
  memset(v2, 0, 0x60u); /*0x402b07*/
  ((DListNode *)(v2))->InitEmpty(); /*0x402b0e*/
  *(unsigned int *)v2[2].__pad_0 = 0; /*0x402b13*/
  v2[1].DListNode_field_0x04 = (int)this; /*0x402b1c*/
  if ( ((int (*)(DListNode *))this->AudioQueue_field_0x14[0])(v2) ) /*0x402b1f*/
  {
    if ( v2 ) /*0x402b28*/
    {
      (*(void (**)(DListNode *))(v2[1].DListNode_field_0x04 + 24))(v2); /*0x402b2f*/
      *(unsigned int *)(v2[1].DListNode_field_0x04 + 12) &= ~1u; /*0x402b36*/
      __3_YAXPAX_Z(v2); /*0x402b3a*/
      return 0; /*0x402b47*/
    }
    return 0; /*0x402b28*/
  }
  if ( !v2 ) /*0x402b4a*/
    return 0; /*0x402b51*/
  *(unsigned int *)&this->__pad_0[12] |= 1u; /*0x402b5e*/
  InsertAfterDListNode((int)off_815E98, v2); /*0x402b67*/
  if ( (this->__pad_0[8] & 2) != 0 ) /*0x402b70*/
    dword_87DE28 = 1; /*0x402b72*/
  return (unsigned int *)(v2->__pad_0); /*0x402b44*/

}
}
// 0x4035F0
namespace gamemd {
int AudioQueue::FindBestChannel(int a1, int a2)
{

  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  unsigned int v5; // esi
  int result; // eax
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v2 = a2; /*0x4035f4*/
  v10 = a2; /*0x4035fc*/
  if ( a2 == -1 ) /*0x403600*/
  {
    v2 = 1; /*0x403602*/
    v10 = 1; /*0x403607*/
  }
  v3 = 127; /*0x40360b*/
  v4 = 0; /*0x403610*/
  v9 = 127; /*0x403618*/
  v11 = 0; /*0x40361c*/
  v5 = -1; /*0x403620*/
  result = ((AudioQueue *)((int *)(a1 + 248)))->GetNext(); /*0x403623*/
  if ( result ) /*0x40362a*/
  {
    while ( 1 ) /*0x403632*/
    {
      if ( *(unsigned int *)(result + 12) == v2 ) /*0x403635*/
      {
        if ( (*(unsigned char *)(result + 164) & 0x15) == 0 ) /*0x40363e*/
          return result; /*0x40363e*/
        v7 = *(unsigned int *)(result + 160); /*0x403647*/
        if ( (*(unsigned char *)(result + 164) & 1) != 0 ) /*0x40364d*/
        {
          if ( v7 >= v3 ) /*0x403651*/
          {
            if ( v7 == v3 ) /*0x40365f*/
            {
              v8 = *(unsigned int *)(result + 220); /*0x403661*/
              if ( v8 < v5 && v5 - v8 >= 0x666 ) /*0x403675*/
              {
                v3 = *(unsigned int *)(result + 160); /*0x403677*/
                v4 = result; /*0x403679*/
                v5 = *(unsigned int *)(result + 220); /*0x40367b*/
              }
            }
          }
          else
          {
            v5 = *(unsigned int *)(result + 220); /*0x403653*/
            v3 = *(unsigned int *)(result + 160); /*0x403659*/
            v4 = result; /*0x40365b*/
          }
        }
        else if ( v7 < v9 ) /*0x403683*/
        {
          v9 = *(unsigned int *)(result + 160); /*0x403685*/
          v11 = result; /*0x403689*/
        }
      }
      result = ((AudioQueue *)((int *)result))->GetNextAlt(); /*0x403693*/
      if ( !result ) /*0x40369a*/
        break; /*0x40369a*/
      v2 = v10; /*0x40362e*/
    }
  }
  result = v11; /*0x4036a2*/
  if ( !v11 || v9 > v3 ) /*0x4036ae*/
    return v4; /*0x4036b0*/
  return result; /*0x4036b2*/

}
}
// 0x403730
namespace gamemd {
int AudioQueue::StopAllVoices(int a2)
{

  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int result; // eax
  AudioQueue *v5; // esi
  int v6; // edi
  Voice *v7; // [esp+0h] [ebp-Ch]

  v3 = v1; /*0x403733*/
  result = ((AudioQueue *)((AudioQueue *)(v2 + 248)))->GetNext(); /*0x40373b*/
  v5 = (AudioQueue *)result; /*0x403740*/
  v6 = result; /*0x403744*/
  if ( result ) /*0x403746*/
  {
    do /*0x403766*/
    {
      result = ((AudioQueue *)(v5))->GetNextAlt(); /*0x40374a*/
      v5 = (AudioQueue *)result; /*0x403752*/
      if ( v3 == -1 || *(unsigned int *)(v6 + 12) == v3 ) /*0x403759*/
        result = ((Voice *)(v7))->Stop(); /*0x40375d*/
      v6 = (int)v5; /*0x403764*/
    }
    while ( v5 ); /*0x403766*/
  }
  return result; /*0x403768*/

}
}
// 0x752680
namespace gamemd {
int AudioQueue::FindByData()
{

  int *result; // eax
  AudioQueue *v3; // esi

  result = (int *)((AudioQueue *)((AudioQueue *)&stru_B1D3F0))->GetNext(); /*0x752689*/
  if ( result ) /*0x752690*/
  {
    while ( (AudioQueue *)result[3] != this ) /*0x752695*/
    {
      result = (int *)((AudioQueue *)((AudioQueue *)result))->GetNextAlt(); /*0x752699*/
      if ( !result ) /*0x7526a0*/
        goto LABEL_4; /*0x7526a0*/
    }
  }
  else
  {
LABEL_4:
    result = (int *)dword_B1D4B8; /*0x7526a2*/
    if ( !dword_B1D4B8 || *((AudioQueue **)dword_B1D4B8 + 3) != this ) /*0x7526ae*/
    {
      v3 = (gamemd::AudioQueue *)(&stru_B1D474);
      while ( 1 ) /*0x7526b7*/
      {
        result = (int *)((AudioQueue *)(v3))->GetNext(); /*0x7526b7*/
        if ( result ) /*0x7526be*/
          break; /*0x7526be*/
LABEL_10:
        v3 = (AudioQueue *)((char *)v3 - 12); /*0x7526d0*/
        if ( (int)v3 < (int)&stru_B1D450 ) /*0x7526d9*/
        {
          result = (int *)((AudioQueue *)((AudioQueue *)&stru_B1D3C8))->GetNext(); /*0x7526e0*/
          if ( !result ) /*0x7526e7*/
            return 0; /*0x7526f9*/
          while ( (AudioQueue *)result[3] != this ) /*0x7526ec*/
          {
            result = (int *)((AudioQueue *)((AudioQueue *)result))->GetNextAlt(); /*0x7526f0*/
            if ( !result ) /*0x7526f7*/
              return 0; /*0x7526f7*/
          }
          return (int)(result); /*0x7526ec*/
        }
      }
      while ( (AudioQueue *)result[3] != this ) /*0x7526c3*/
      {
        result = (int *)((AudioQueue *)((AudioQueue *)result))->GetNextAlt(); /*0x7526c7*/
        if ( !result ) /*0x7526ce*/
          goto LABEL_10; /*0x7526ce*/
      }
    }
  }
  return (int)(result); /*0x7526fb*/

}
}
// 0x771620
namespace gamemd {
int AudioQueue::Update()
{

  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  char *v8; // eax
  int v9; // eax

  v2 = *((unsigned int *)this + 237); /*0x77162a*/
  if ( *((unsigned int *)this + 235) == -1 ) /*0x771633*/
  {
LABEL_4:
    if ( v2 ) /*0x77164e*/
      return; /*0x77164e*/
    goto LABEL_5; /*0x77164e*/
  }
  v3 = ((gamemd::Timer *)this)->GetTicks() - *((unsigned int *)this + 235); /*0x771640*/
  if ( v3 < v2 ) /*0x771648*/
  {
    v2 -= v3; /*0x77164a*/
    goto LABEL_4; /*0x77164a*/
  }
LABEL_5:
  if ( *((int *)this + 244) > 0 && !(uint8_t)((gamemd::Audio *)this)->IsPlaying() ) /*0x771662*/
  {
    if ( !*((unsigned char *)this + 952) ) /*0x77166f*/
    {
      v4 = *((unsigned int *)this + 244); /*0x771679*/
      if ( v4 > 0 ) /*0x771681*/
      {
        v5 = v4 - 1; /*0x771683*/
        v6 = 0; /*0x771684*/
        for ( *((unsigned int *)this + 244) = v5; v6 < *((unsigned int *)this + 244); ++v6 ) /*0x77168e*/
          String::Reassign( /*0x77169e*/
            (String *)(*((unsigned int *)this + 241) + 4 * v6),
            (const char **)(*((unsigned int *)this + 241) + 4 * v6 + 4));
      }
      v7 = *((unsigned int *)this + 239); /*0x7716ae*/
      if ( v7 > 0 ) /*0x7716b6*/
        *((unsigned int *)this + 239) = v7 - 1; /*0x7716b9*/
    }
    if ( *((int *)this + 244) <= 0 ) /*0x7716c7*/
    {
      *((unsigned int *)this + 239) = 0; /*0x7716f1*/
      *((unsigned char *)this + 952) = 1; /*0x7716fb*/
    }
    else
    {
      v8 = ((String *)(*((String **)this + 241)))->GetOrEmpty(); /*0x7716d1*/
      v9 = VocClass::FindByName((VocClass *)v8); /*0x7716d8*/
      UpdateThemeManager(v9, -1, -1); /*0x7716e2*/
      *((unsigned char *)this + 952) = 0; /*0x7716e7*/
    }
  }

}
}
// 0x7B1D10
namespace gamemd {
int AudioQueue::Cleanup(void *a1_1)
{

  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  while ( *((unsigned int *)this + 12) ) /*0x7b1d16*/
  {
    v2 = **((unsigned int **)this + 9); /*0x7b1d1e*/
    if ( *(unsigned char *)(v2 + 22) ) /*0x7b1d20*/
    {
      __3_YAXPAX_Z(**((void ***)this + 9)); /*0x7b1d26*/
    }
    else
    {
      *(unsigned char *)(v2 + 21) = 0; /*0x7b1d30*/
      --*((unsigned int *)this + 64536); /*0x7b1d3a*/
    }
    v3 = *((unsigned int *)this + 12); /*0x7b1d40*/
    if ( v3 > 0 ) /*0x7b1d45*/
    {
      v4 = v3 - 1; /*0x7b1d47*/
      v5 = 0; /*0x7b1d4a*/
      for ( *((unsigned int *)this + 12) = v4; /*0x7b1d51*/
            v5 < *((unsigned int *)this + 12);
            *(unsigned int *)(*((unsigned int *)this + 9) + 4 * v5 - 4) = *(unsigned int *)(*((unsigned int *)this + 9) + 4 * v5) )
      {
        ++v5; /*0x7b1d56*/
      }
    }
  }
  *((unsigned int *)this + 64536) = 0; /*0x7b1d6a*/
  *((unsigned int *)this + 64533) = 0; /*0x7b1d70*/
  while ( *((unsigned int *)this + 18) ) /*0x7b1d76*/
  {
    v6 = **((unsigned int **)this + 15); /*0x7b1d7e*/
    if ( *(unsigned char *)(v6 + 22) ) /*0x7b1d80*/
    {
      __3_YAXPAX_Z(**((void ***)this + 15)); /*0x7b1d86*/
    }
    else
    {
      *(unsigned char *)(v6 + 21) = 0; /*0x7b1d90*/
      --*((unsigned int *)this + 64537); /*0x7b1d9a*/
    }
    v7 = *((unsigned int *)this + 18); /*0x7b1da0*/
    if ( v7 > 0 ) /*0x7b1da5*/
    {
      v8 = v7 - 1; /*0x7b1da7*/
      v9 = 0; /*0x7b1daa*/
      for ( *((unsigned int *)this + 18) = v8; /*0x7b1db1*/
            v9 < *((unsigned int *)this + 18);
            *(unsigned int *)(*((unsigned int *)this + 15) + 4 * v9 - 4) = *(unsigned int *)(*((unsigned int *)this + 15) + 4 * v9) )
      {
        ++v9; /*0x7b1db6*/
      }
    }
  }
  *((unsigned int *)this + 64537) = 0; /*0x7b1dca*/
  *((unsigned int *)this + 64534) = 0; /*0x7b1dd0*/

}
}
// 0x7B20E0
namespace gamemd {
unsigned char * AudioQueue::AllocBuffer(char aP1)
{

  unsigned char *result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // edi
  int v6; // esi

  result = 0; /*0x7b20e7*/
  if ( aP1 ) /*0x7b20ed*/
  {
    if ( *((unsigned int *)this + 64537) == 128 ) /*0x7b219e*/
    {
      result = (unsigned char *)__2_YAPAXI_Z(0x2A0u); /*0x7b21a5*/
      result[22] = 1; /*0x7b21af*/
      result[21] = 1; /*0x7b21b2*/
    }
    else
    {
      v5 = 0; /*0x7b21b7*/
      while ( 1 ) /*0x7b21b9*/
      {
        v6 = *((unsigned int *)this + 64534); /*0x7b21b9*/
        *((unsigned int *)this + 64534) = v6 + 1; /*0x7b21c5*/
        if ( v6 + 1 > 127 ) /*0x7b21cb*/
          *((unsigned int *)this + 64534) = 0; /*0x7b21cd*/
        if ( !*((unsigned char *)this + 672 * v6 + 172133) ) /*0x7b21e2*/
          break; /*0x7b21e2*/
        if ( ++v5 >= 128 ) /*0x7b21f2*/
          return result; /*0x7b21f2*/
      }
      result = (unsigned char *)((char *)this + 672 * v6 + 172112);
      *((unsigned char *)this + 672 * v6 + 172133) = 1; /*0x7b2212*/
      ++*((unsigned int *)this + 64537); /*0x7b221c*/
    }
    if ( result ) /*0x7b2224*/
    {
      result[23] = 1; /*0x7b2226*/
      result[24] = 0; /*0x7b2229*/
    }
  }
  else
  {
    if ( *((unsigned int *)this + 64536) == 128 ) /*0x7b20fd*/
    {
      result = (unsigned char *)__2_YAPAXI_Z(0x2A0u); /*0x7b2104*/
      result[22] = 1; /*0x7b210e*/
      result[21] = 1; /*0x7b2111*/
    }
    else
    {
      v3 = 0; /*0x7b2116*/
      while ( 1 ) /*0x7b2118*/
      {
        v4 = *((unsigned int *)this + 64533); /*0x7b2118*/
        *((unsigned int *)this + 64533) = v4 + 1; /*0x7b2124*/
        if ( v4 + 1 > 127 ) /*0x7b212a*/
          *((unsigned int *)this + 64533) = 0; /*0x7b212c*/
        if ( !*((unsigned char *)this + 672 * v4 + 86117) ) /*0x7b2141*/
          break; /*0x7b2141*/
        if ( ++v3 >= 128 ) /*0x7b2151*/
          return result; /*0x7b2151*/
      }
      result = (unsigned char *)((char *)this + 672 * v4 + 86096);
      *((unsigned char *)this + 672 * v4 + 86117) = 1; /*0x7b216f*/
      ++*((unsigned int *)this + 64536); /*0x7b217a*/
    }
    if ( result ) /*0x7b2182*/
    {
      result[23] = 0; /*0x7b2188*/
      result[24] = 0; /*0x7b218c*/
    }
  }
  return result; /*0x7b2153*/

}
}
// 0x7B22E0
namespace gamemd {
int AudioQueue::ReadBuffer(void * a2, int a3, void * a4, unsigned int * a5, unsigned short * a6)
{

  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx

  ((EventQueue *)(*(EventQueue **)&stru_87F5F0.__pad_58[296]))->Process(); /*0x7b22e9*/
  if ( !*((unsigned int *)this + 6) ) /*0x7b22ee*/
    return 0; /*0x7b22f5*/
  v8 = **((unsigned int **)this + 3); /*0x7b2304*/
  qmemcpy(a2, (const void *)(v8 + 32), *(unsigned int *)(v8 + 16)); /*0x7b2311*/
  v9 = *a5; /*0x7b231e*/
  if ( *a5 > 0x10 ) /*0x7b2323*/
    v9 = 16; /*0x7b2325*/
  *a5 = v9; /*0x7b232e*/
  qmemcpy(a4, (const void *)v8, v9); /*0x7b2337*/
  *a6 = *(unsigned short *)(v8 + 26); /*0x7b234c*/
  *(unsigned int *)a3 = *(unsigned int *)(v8 + 16); /*0x7b2352*/
  v10 = *((unsigned int *)this + 6); /*0x7b2354*/
  if ( v10 > 0 ) /*0x7b2359*/
  {
    v11 = v10 - 1; /*0x7b235b*/
    v12 = 0; /*0x7b235e*/
    for ( *((unsigned int *)this + 6) = v11; /*0x7b2365*/
          v12 < *((unsigned int *)this + 6);
          *(unsigned int *)(*((unsigned int *)this + 3) + 4 * v12 - 4) = *(unsigned int *)(*((unsigned int *)this + 3) + 4 * v12) )
    {
      ++v12; /*0x7b236a*/
    }
  }
  if ( *(unsigned char *)(v8 + 22) ) /*0x7b2379*/
  {
    __3_YAXPAX_Z((void *)v8); /*0x7b2381*/
  }
  else
  {
    *(unsigned char *)(v8 + 21) = 0; /*0x7b2391*/
    --*((unsigned int *)this + 64535); /*0x7b239d*/
  }
  return *(unsigned int *)a3; /*0x7b22f7*/

}
}
// 0x7B23B0
namespace gamemd {
AnimClass * * AudioQueue::WriteBuffer(WinsockInterfaceClass * aP1, unsigned int arg4, const void * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{

  unsigned char *v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  UINT v19; // eax

  v9 = ((AudioQueue *)((AudioQueue *)this))->AllocBuffer((char)(aP5)); /*0x7b23c4*/
  qmemcpy(v9 + 32, aP1, arg4); /*0x7b23d5*/
  *((unsigned int *)v9 + 4) = arg4; /*0x7b23e6*/
  v9[20] = 0; /*0x7b23f4*/
  v9[24] = a7; /*0x7b23f8*/
  qmemcpy(v9, a3, a5); /*0x7b23fb*/
  *((unsigned short *)v9 + 13) = a8; /*0x7b2409*/
  (*(void (**)(WinsockInterfaceClass *, unsigned char *))(this->Socket + 84))(this, v9); /*0x7b2411*/
  if ( aP5 ) /*0x7b241a*/
  {
    v10 = *((unsigned int *)this + 16); /*0x7b241c*/
    if ( *((unsigned int *)this + 18) < v10 /*0x7b2444*/
      || (*((unsigned char *)this + 69) || !v10)
      && (v11 = *((unsigned int *)this + 19), v11 > 0)
      && (*(uint8_t (**)(char *, int, unsigned int))(*((unsigned int *)this + 14) + 8))(
           (char *)this + 56,
           v10 + v11,
           0) )
    {
      v12 = *((unsigned int *)this + 18); /*0x7b244b*/
      v13 = *((unsigned int *)this + 15); /*0x7b244e*/
      *((unsigned int *)this + 18) = v12 + 1; /*0x7b2454*/
      *(unsigned int *)(v13 + 4 * v12) = (unsigned int)(v9); /*0x7b2457*/
    }
    v14 = *((unsigned int *)this + 64540); /*0x7b245a*/
  }
  else
  {
    v15 = *((unsigned int *)this + 10); /*0x7b2462*/
    if ( *((unsigned int *)this + 12) < v15 /*0x7b248a*/
      || (*((unsigned char *)this + 45) || !v15)
      && (v16 = *((unsigned int *)this + 13), v16 > 0)
      && (*(uint8_t (**)(char *, int, unsigned int))(*((unsigned int *)this + 8) + 8))(
           (char *)this + 32,
           v15 + v16,
           0) )
    {
      v17 = *((unsigned int *)this + 12); /*0x7b2491*/
      v18 = *((unsigned int *)this + 9); /*0x7b2494*/
      *((unsigned int *)this + 12) = v17 + 1; /*0x7b249a*/
      *(unsigned int *)(v18 + 4 * v17) = (unsigned int)(v9); /*0x7b249d*/
    }
    v14 = *((unsigned int *)this + 64539); /*0x7b24a0*/
  }
  v19 = (*(int (**)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v14); /*0x7b24af*/
  SendMessageA((HWND)(g_hWnd), v19, 0, 2); /*0x7b24b9*/
  return ((EventQueue *)(*(EventQueue **)&stru_87F5F0.__pad_58[296]))->Process(); /*0x7b24ca*/

}
}
// 0x403530
namespace gamemd {
int AudioQueue::PreallocateChannels(unsigned int * a1, int a2)
{

  int v4; // edi
  int *v5; // eax
  int v6; // eax

  v4 = 0; /*0x403537*/
  do /*0x40359e*/
  {
    if ( a1[12].AudioController_field_00[0] >= (int)a1[12].AudioController_field_04 ) /*0x403547*/
      break; /*0x403547*/
    v5 = ((AudioController *)(a1))->Constructor(); /*0x40354b*/
    if ( !v5 ) /*0x403552*/
      break; /*0x403552*/
    v5[43] = (int)a1; /*0x403554*/
    ++a1[12].AudioController_field_00[0]; /*0x403561*/
    ++a1[13].AudioController_field_00[0]; /*0x40356e*/
    InsertAfterDListNode((int)&a1[12].AudioController_field_08, v5); /*0x40357c*/
    v6 = a1[13].AudioController_field_00[0] - 1; /*0x403587*/
    a1[13].AudioController_field_00[0] = v6; /*0x40358a*/
    if ( v6 < 0 ) /*0x403590*/
      a1[13].AudioController_field_00[0] = 0; /*0x403592*/
    ++v4; /*0x40359c*/
    --a2; /*0x40359d*/
  }
  while ( a2 ); /*0x40359e*/
  return v4; /*0x4035a2*/

}
} // namespace gamemd

// 0x4035D0
namespace gamemd {
int * AudioQueue::IteratorNext()
{

  AudioQueue *v2; // ecx

  v2 = *(AudioQueue **)this->__pad_0; /*0x4035d3*/
  if ( v2 ) /*0x4035d7*/
    *(unsigned int *)this->__pad_0 = ((AudioQueue *)(v2))->GetNextAlt(); /*0x4035de*/
  return *(int **)this->__pad_0; /*0x4035e2*/

}
} // namespace gamemd

// 0x403770
namespace gamemd {
int AudioQueue::DeactivateAllMatching(int a1, int a2)
{

  int result; // eax
  int i; // esi

  result = ((AudioQueue *)((AudioQueue *)(a1 + 248)))->GetNext(); /*0x40377a*/
  for ( i = result; result; i = result ) /*0x403783*/
  {
    if ( (*(unsigned char *)(i + 164) & 1) != 0 && (a2 == -1 || *(unsigned int *)(i + 12) == a2) ) /*0x403796*/
      result = ((AudioChannel *)((AudioChannel *)i))->DeactivatePlay(); /*0x40379a*/
    if ( !i ) /*0x4037a1*/
      break; /*0x4037a1*/
    result = ((AudioQueue *)((AudioQueue *)i))->GetNextAlt(); /*0x4037a5*/
  }
  return result; /*0x4037b0*/

}
} // namespace gamemd

// 0x4073C0
namespace gamemd {
int AudioQueue::GetNext()
{

  int result; // eax

  if ( !this ) /*0x4073c2*/
    return 0; /*0x4073c2*/
  result = *(unsigned int *)this->__pad_0; /*0x4073c4*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x4073c4*/
  {
    if ( result == *(unsigned int *)(result + 8) ) /*0x4073cd*/
      return 0; /*0x4073cf*/
  }
  return result; /*0x4073d1*/

}
} // namespace gamemd

// 0x4073E0
namespace gamemd {
int AudioQueue::GetNextAlt()
{

  int result; // eax

  if ( !this ) /*0x4073e2*/
    return 0; /*0x4073e2*/
  result = *(unsigned int *)this->__pad_0; /*0x4073e4*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x4073e4*/
  {
    if ( result == *(unsigned int *)(result + 8) ) /*0x4073ed*/
      return 0; /*0x4073ef*/
  }
  return result; /*0x4073f1*/

}
} // namespace gamemd

// 0x407B40
namespace gamemd {
int AudioQueue::IsEmpty(int a1, int a2)
{

  int result; // eax

  result = *(unsigned int *)(a1 + 20); /*0x407b40*/
  *(unsigned int *)(result + 148) = a2; /*0x407b43*/
  return result; /*0x407b49*/

}
} // namespace gamemd

// 0x407B50
namespace gamemd {
int AudioQueue::IsNotEmpty(int a1, int a2)
{

  int result; // eax

  result = *(unsigned int *)(a1 + 20); /*0x407b50*/
  *(unsigned int *)(result + 156) = a2; /*0x407b53*/
  return result; /*0x407b59*/

}
} // namespace gamemd

// 0x4081A0
namespace gamemd {
int AudioQueue::HaltVoices(Voice *a1)
{

  int result; // eax
  int v2; // esi
  Voice *v3; // [esp-8h] [ebp-Ch]

  result = *(unsigned int *)&stru_87E790.__pad_5C[48]; /*0x4081a0*/
  if ( *(unsigned int *)&stru_87E790.__pad_5C[48] ) /*0x4081a8*/
  {
    result = ((AudioQueue *)((AudioQueue *)&stru_87E790.__pad_5C[36]))->GetNext(); /*0x4081af*/
    v2 = result; /*0x4081b4*/
    if ( result ) /*0x4081b8*/
    {
      v3 = (gamemd::Voice *)(a1);
      do /*0x4081fa*/
      {
        if ( !*(unsigned int *)(v2 + 136) ) /*0x4081c8*/
        {
          if ( *(unsigned int *)(v2 + 20) ) /*0x4081d2*/
          {
            EnterCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x4081de*/
            ((Voice *)(v3))->Stop(); /*0x4081e3*/
            LeaveCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x4081ed*/
          }
        }
        result = ((AudioQueue *)((AudioQueue *)v2))->GetNextAlt(); /*0x4081f1*/
        v2 = result; /*0x4081f6*/
      }
      while ( result ); /*0x4081fa*/
    }
  }
  return result; /*0x4081fe*/

}
} // namespace gamemd

// 0x408200
namespace gamemd {
int * AudioQueue::IncrementPriority()
{

  int *result; // eax

  result = (int *)dword_87E81C; /*0x408200*/
  if ( dword_87E81C ) /*0x408207*/
  {
    for ( result = (int *)((AudioQueue *)(unk_87E810))->GetNext(); result; result = (int *)((AudioQueue *)(result))->GetNextAlt() ) /*0x408215*/
      ++result[34]; /*0x40821e*/
  }
  return result; /*0x40822f*/

}
} // namespace gamemd

// 0x408270
namespace gamemd {
int AudioQueue::ReleaseBuffers()
{

  int result; // eax
  int i; // esi
  int v2; // eax

  result = *(unsigned int *)&stru_87E790.__pad_5C[48]; /*0x408270*/
  if ( *(unsigned int *)&stru_87E790.__pad_5C[48] ) /*0x408278*/
  {
    result = ((AudioQueue *)((AudioQueue *)&stru_87E790.__pad_5C[36]))->GetNext(); /*0x40827f*/
    for ( i = result; result; i = result ) /*0x408288*/
    {
      if ( !*(unsigned int *)(i + 128) && *(unsigned int *)(i + 20) ) /*0x4082a2*/
      {
        EnterCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x4082ae*/
        ((AudioChannel *)(*(AudioChannel **)(i + 20)))->DeactivatePlay(); /*0x4082b3*/
        v2 = *(unsigned int *)(i + 12); /*0x4082b8*/
        if ( (v2 & 1) != 0 ) /*0x4082bd*/
        {
          LOBYTE(v2) = v2 & 0xFC | 2; /*0x4082c1*/
          *(unsigned int *)(i + 12) = v2; /*0x4082c3*/
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x4082cb*/
      }
      ++*(unsigned int *)(i + 128); /*0x4082d4*/
      result = ((AudioQueue *)((AudioQueue *)i))->GetNextAlt(); /*0x4082dc*/
    }
  }
  return result; /*0x4082e9*/

}
} // namespace gamemd

// 0x750FA0
namespace gamemd {
int AudioQueue::DrainAll()
{

  int result; // eax
  int *v1; // esi
  int Next_Alt; // edi

  result = ((AudioQueue *)(unk_B1D320))->GetNext(); /*0x750fa6*/
  v1 = (int *)result; /*0x750fab*/
  if ( result ) /*0x750faf*/
  {
    do /*0x750fe8*/
    {
      Next_Alt = (gamemd::Init)(((AudioQueue *)(v1))->GetNextAlt()); /*0x750fbc*/
      ((AudioController *)(v1 + 3))->Stop(); /*0x750fbe*/
      LinkedList::Init((unsigned int **)v1); /*0x750fc5*/
      result = PushFrontLinkedListAlt((unsigned int *)(dword_B1D3A4), (int)v1); /*0x750fd2*/
      v1 = (int *)Next_Alt; /*0x750fdd*/
      --dword_B1D3A8; /*0x750fe2*/
    }
    while ( Next_Alt ); /*0x750fe8*/
  }
  return result; /*0x750feb*/

}
} // namespace gamemd
