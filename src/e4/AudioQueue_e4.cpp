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
int AudioQueue::StopAllVoices()
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x771620)
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
    if ( this->u32_3F064 == 128 ) /*0x7b219e*/
    {
      result = (unsigned char *)new unsigned char[0x2A0u]; /*0x7b21a5*/
      result[22] = 1; /*0x7b21af*/
      result[21] = 1; /*0x7b21b2*/
    }
    else
    {
      v5 = 0; /*0x7b21b7*/
      while ( 1 ) /*0x7b21b9*/
      {
        v6 = this->u32_3F058; /*0x7b21b9*/
        this->u32_3F058 = v6 + 1; /*0x7b21c5*/
        if ( v6 + 1 > 127 ) /*0x7b21cb*/
          this->u32_3F058 = 0; /*0x7b21cd*/
        if ( !*((unsigned char *)this + 672 * v6 + 172133) ) /*0x7b21e2*/
          break; /*0x7b21e2*/
        if ( ++v5 >= 128 ) /*0x7b21f2*/
          return result; /*0x7b21f2*/
      }
      result = (unsigned char *)((char *)this + 672 * v6 + 172112);
      *((unsigned char *)this + 672 * v6 + 172133) = 1; /*0x7b2212*/
      ++this->u32_3F064; /*0x7b221c*/
    }
    if ( result ) /*0x7b2224*/
    {
      result[23] = 1; /*0x7b2226*/
      result[24] = 0; /*0x7b2229*/
    }
  }
  else
  {
    if ( this->u32_3F060 == 128 ) /*0x7b20fd*/
    {
      result = (unsigned char *)new unsigned char[0x2A0u]; /*0x7b2104*/
      result[22] = 1; /*0x7b210e*/
      result[21] = 1; /*0x7b2111*/
    }
    else
    {
      v3 = 0; /*0x7b2116*/
      while ( 1 ) /*0x7b2118*/
      {
        v4 = this->u32_3F054; /*0x7b2118*/
        this->u32_3F054 = v4 + 1; /*0x7b2124*/
        if ( v4 + 1 > 127 ) /*0x7b212a*/
          this->u32_3F054 = 0; /*0x7b212c*/
        if ( !*((unsigned char *)this + 672 * v4 + 86117) ) /*0x7b2141*/
          break; /*0x7b2141*/
        if ( ++v3 >= 128 ) /*0x7b2151*/
          return result; /*0x7b2151*/
      }
      result = (unsigned char *)((char *)this + 672 * v4 + 86096);
      *((unsigned char *)this + 672 * v4 + 86117) = 1; /*0x7b216f*/
      ++this->u32_3F060; /*0x7b217a*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B22E0)
}
}
// 0x7B23B0
namespace gamemd {
AnimClass * * AudioQueue::WriteBuffer(WinsockInterfaceClass * aP1, unsigned int arg4, const void * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B23B0)
}
}
// 0x403530
namespace gamemd {
int AudioQueue::PreallocateChannels(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x403530)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4081A0)
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
int AnimClass::ReleaseBuffers()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00408270.json)
}
} // namespace gamemd

// 0x750FA0
namespace gamemd {
int AudioQueue::DrainAll()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750FA0)
}
} // namespace gamemd
