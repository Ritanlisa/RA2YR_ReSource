// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/DListNode_e4.hpp"
#include "e4/classes/AudioFile_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/E4Recv_5E9340_e4.hpp"
#include "e4/classes/E4Recv_6C6B00_e4.hpp"
#include "e4/classes/E4Recv_6C8870_e4.hpp"
#include "e4/classes/E4Recv_76BF00_e4.hpp"
#include "e4/classes/E4Recv_7BD170_e4.hpp"
#include "e4/classes/E4Recv_7BD290_e4.hpp"
#include "e4/classes/E4Recv_7BD2B0_e4.hpp"
#include "e4/classes/E4Recv_7BE4A0_e4.hpp"
#include "e4/classes/E4Recv_7BE660_e4.hpp"
#include "e4/classes/E4Recv_7BE670_e4.hpp"
#include "e4/classes/E4Recv_7C0490_e4.hpp"
#include "e4/classes/E4Recv_7C1150_e4.hpp"
#include "e4/classes/E4Recv_7C1A70_e4.hpp"
#include "e4/classes/E4Recv_7C1BE0_e4.hpp"
#include "e4/classes/E4Recv_7C3750_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BaseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x402720
namespace gamemd {
int Audio::GetChannelStatus(void *a1_1)
{

  int v3; // edi
  int v4; // eax

  if ( (this->__pad_3C[104] & 5) != 0 ) /*0x40272a*/
    return -2146500608; /*0x40272c*/
  if ( !*(unsigned int *)&this->__pad_3C[300] ) /*0x402733*/
    return -2147024896; /*0x40273d*/
  Audio::InitChannels(this->__pad_10); /*0x402748*/
  ((ObjectClass *)((ObjectClass *)this))->Cleanup(); /*0x40274f*/
  (*(void (**)(Audio *))(*(unsigned int *)&this->__pad_3C[152] + 40))(this); /*0x40275c*/
  v3 = (*(int (**)(Audio *))(*(unsigned int *)&this->__pad_3C[152] + 12))(this); /*0x40276a*/
  if ( !v3 ) /*0x40276e*/
  {
    v4 = *(unsigned int *)&this->__pad_3C[104]; /*0x402770*/
    LOBYTE(v4) = v4 | 1; /*0x402776*/
    *(unsigned int *)&this->__pad_3C[104] = v4; /*0x402778*/
  }
  (*(void (**)(Audio *))(*(unsigned int *)&this->__pad_3C[152] + 44))(this); /*0x402786*/
  return v3; /*0x402731*/

}
}
// 0x404D80
namespace gamemd {
int Audio::ReleaseChannelRefs()
{

  int v2; // ebx
  int result; // eax
  RefCount **v4; // esi

  v2 = 0; /*0x404d84*/
  result = *(unsigned int *)&this->__pad_3C[108]; /*0x404d86*/
  if ( result <= 0 ) /*0x404d8e*/
  {
    *(unsigned int *)&this->__pad_3C[108] = 0; /*0x404dbd*/
  }
  else
  {
    v4 = (RefCount **)&this->__pad_18[16]; /*0x404d91*/
    do /*0x404dad*/
    {
      RefCount::Decrement(*v4); /*0x404d96*/
      *v4 = 0; /*0x404d9b*/
      result = *(unsigned int *)&this->__pad_3C[108]; /*0x404da1*/
      ++v2; /*0x404da7*/
      ++v4; /*0x404da8*/
    }
    while ( v2 < result ); /*0x404dad*/
    *(unsigned int *)&this->__pad_3C[108] = 0; /*0x404daf*/
  }
  return result; /*0x404dba*/

}
}
// 0x4054A0
namespace gamemd {
int Audio::UpdatePlaybackPosition()
{

  int v2; // ecx
  unsigned int *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax

  v2 = *(unsigned int *)&this->__pad_3C[116]; /*0x4054a4*/
  if ( this != *(Audio **)(v2 + 192) ) /*0x4054b0*/
    return 0; /*0x4054b3*/
  ((AudioFile *)((AudioFile *)v2))->GetCallback(); /*0x4054b7*/
  v4 = *(unsigned int **)&this->__pad_3C[268]; /*0x4054bc*/
  v5 = *(unsigned int *)this->__pad_18; /*0x4054c2*/
  LOBYTE(v5) = v5 | 8; /*0x4054c5*/
  *(unsigned int *)this->__pad_18 = v5; /*0x4054c7*/
  BindChannelAudioStream(*(unsigned int **)&this->__pad_3C[116], v4); /*0x4054d2*/
  EndBufferMixer((int *)(*(unsigned int *)&this->__pad_3C[116] + 56), *(unsigned int *)&this->__pad_3C[272]); /*0x4054e6*/
  v6 = *(unsigned int *)&this->__pad_3C[276]; /*0x4054eb*/
  v7 = 0x4000; /*0x4054f1*/
  if ( v6 > 0 ) /*0x4054f8*/
    v7 = 0x4000 - (v6 << 14) / 0x64u; /*0x40550e*/
  EndBufferMixer((int *)(*(unsigned int *)&this->__pad_3C[116] + 16), v7); /*0x405519*/
  *(unsigned int *)&this->__pad_18[4] = 3; /*0x40551e*/
  *(unsigned int *)this->__pad_18 |= 2u; /*0x40552b*/
  *(unsigned int *)&this->__pad_3C[268] = 0; /*0x40552e*/
  if ( Audio::GetChannelStatus(*(Audio **)&this->__pad_3C[116]) ) /*0x40553e*/
  {
    *(unsigned int *)&this->__pad_18[4] = 1; /*0x405547*/
    *(unsigned int *)&this->__pad_3C[268] = (unsigned int)(v4); /*0x40554e*/
    v8 = *(unsigned int *)this->__pad_18; /*0x405554*/
    LOBYTE(v8) = v8 & 0xFD; /*0x405557*/
    *(unsigned int *)this->__pad_18 = v8; /*0x405559*/
    ((AudioStream *)(*(AudioStream **)&this->__pad_3C[116]))->Stop(); /*0x405562*/
    return 0; /*0x405567*/
  }
  else
  {
    ((AudioStream *)(*(AudioStream **)&this->__pad_3C[116]))->Stop(); /*0x405572*/
    return 1; /*0x405577*/
  }

}
}
// 0x4063B0
namespace gamemd {
void * Audio::ProcessMixerOutput(char * Source)
{

  int *Next; // esi
  unsigned int *v4; // esi

  if ( !g_AudioConfigState ) /*0x4063bb*/
    return 0; /*0x4063be*/
  Next = (int *)((AudioQueue *)(stru_87E250))->GetNext(); /*0x4063cc*/
  if ( Next ) /*0x4063d0*/
  {
    while ( _strcmpi(Source, Next + 27) ) /*0x4063e1*/
    {
      Next = (int *)((AudioQueue *)(Next))->GetNextAlt(); /*0x4063ee*/
      if ( !Next ) /*0x4063f2*/
        goto LABEL_6; /*0x4063f2*/
    }
    if ( Next ) /*0x406487*/
      return Next; /*0x40648d*/
  }
LABEL_6:
  v4 = (unsigned int *)(__2_YAPAXI_Z(0x148u)); /*0x4063f4*/
  memset(v4, 0, 0x148u); /*0x40640a*/
  memset(v4, 0, 0x148u); /*0x406413*/
  ((DListNode *)(v4))->InitEmpty(); /*0x40641a*/
  v4[3] = 1; /*0x406427*/
  v4[4] = 0; /*0x40642e*/
  v4[5] = 32; /*0x406435*/
  v4[18] = 3; /*0x40643c*/
  v4[16] = 2; /*0x406443*/
  v4[20] = 10; /*0x40644a*/
  v4[21] = 1045220557; /*0x406451*/
  SetupSampleAudioMixer(v4 + 6, 0x4000); /*0x406458*/
  strncpy((char *)v4 + 108, Source, 0x1Fu); /*0x406464*/
  *((unsigned char *)v4 + 139) = 0; /*0x406473*/
  InsertAfterDListNode((int)stru_87E250, v4); /*0x40647a*/
  return v4; /*0x4063bd*/

}
}
// 0x406870
namespace gamemd {
int Audio::ApplyFormatFlags(int * a1, char * a2)
{

  char **v4; // esi
  char *v5; // eax
  char *v6; // eax
  int v7; // eax

  v4 = (char **)(&off_816048); /*0x40687e*/
  if ( off_816048 ) /*0x406883*/
  {
    do /*0x40689d*/
    {
      if ( !_strcmpi(a2, *v4) ) /*0x406889*/
        break; /*0x406893*/
      v5 = v4[2]; /*0x406895*/
      v4 += 2; /*0x406898*/
    }
    while ( v5 ); /*0x40689d*/
  }
  if ( a1 ) /*0x4068a1*/
  {
    v6 = v4[1]; /*0x4068a3*/
    if ( ((uint8_t)v6 & 0x60) != 0 ) /*0x4068a8*/
    {
      v7 = *a1; /*0x4068aa*/
      LOBYTE(v7) = *a1 & 0x9F; /*0x4068ac*/
    }
    else
    {
      if ( (BYTE1(v6) & 0xC) == 0 ) /*0x4068b3*/
      {
LABEL_10:
        *a1 |= (unsigned int)v4[1]; /*0x4068bc*/
        return *v4 != 0; /*0x4068c3*/
      }
      v7 = *a1; /*0x4068b5*/
      BYTE1(v7) = BYTE1(*a1) & 0xF3; /*0x4068b7*/
    }
    *a1 = v7; /*0x4068ba*/
    goto LABEL_10; /*0x4068ba*/
  }
  return *v4 != 0; /*0x4068cb*/

}
}
// 0x4070B0
namespace gamemd {
int Audio::WaitForCallback(void *a1_1)
{

  int v2; // ebx
  uint64_t v3; // rax
  uint64_t v4; // kr00_8

  v2 = Audio::Callback(); /*0x4070bd*/
  LODWORD(v3) = *(unsigned int *)&this->__pad_0[4]; /*0x4070c9*/
  v4 = *(unsigned long long *)this->__pad_10 + __PAIR64__(HIDWORD(v3), v2); /*0x4070cc*/
  if ( (unsigned int)v3 != *(unsigned int *)&this->__pad_0[8] ) /*0x4070d0*/
  {
    do /*0x4070ee*/
    {
      LODWORD(v3) = Audio::Callback(); /*0x4070d2*/
      if ( v3 >= v4 ) /*0x4070df*/
        break; /*0x4070df*/
      Event::Dispatch(); /*0x4070e1*/
      LODWORD(v3) = *(unsigned int *)&this->__pad_0[8]; /*0x4070e9*/
    }
    while ( *(unsigned int *)&this->__pad_0[4] != (unsigned int)v3 ); /*0x4070ee*/
  }
  return v3; /*0x4070f0*/

}
}
// 0x407F40
namespace gamemd {
void Audio::Release()
{

  int result; // eax
  Voice *v2; // [esp+0h] [ebp-4h]

  result = *(unsigned int *)&this->__pad_3C[76]; /*0x407f43*/
  if ( !result ) /*0x407f4b*/
  {
    result = (int)this->Audio_field_0x14; /*0x407f4d*/
    if ( result ) /*0x407f52*/
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x407f59*/
      ((Voice *)(v2))->Stop(); /*0x407f62*/
      LeaveCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x407f6c*/
    }
  }
  return result; /*0x407f72*/

}
}
// 0x408070
namespace gamemd {
int Audio::IsSoundPlaying()
{

  return this->Audio_field_0xC[0] & 1; /*0x408076*/

}
}
// 0x408540
namespace gamemd {
int Audio::CalcRate(int a2, int a3)
{

  return a2 * (int)this->Audio_field_0x14 / 1000; /*0x40855b*/

}
}
// 0x409320
namespace gamemd {
int Audio::GetSampleSize(void *a1_1)
{

  return (char *)this->Audio_field_0x34 - (char *)this->Audio_field_0x38; /*0x409328*/

}
}
// 0x53E1D0
namespace gamemd {
void sub_53E1D0()
{
  signed int SampleSize; // eax
  signed int v1; // eax

  if ( dword_AA0448 ) /*0x53e1dc*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e1ed*/
    if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e210*/
    {
      SampleSize = Audio::GetSampleSize((unsigned int *)dword_AA0464); /*0x53e213*/
      WriteAudioStreamToFile(dword_AA0464, dword_AA0468, SampleSize, 0); /*0x53e225*/
      fflush(dword_AA0468); /*0x53e230*/
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e243*/
    if ( dword_AA0448 ) /*0x53e24b*/
    {
      EnterCriticalSection(&unk_AA0418); /*0x53e256*/
      if ( dword_AA0448 ) /*0x53e25e*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e265*/
        if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 && dword_AA0464 ) /*0x53e288*/
        {
          v1 = Audio::GetSampleSize((unsigned int *)dword_AA0464); /*0x53e28b*/
          WriteAudioStreamToFile(dword_AA0464, dword_AA0468, v1, 0); /*0x53e29d*/
          fflush(dword_AA0468); /*0x53e2a9*/
        }
        LeaveCriticalSection(&unk_AA0418); /*0x53e2b6*/
      }
      dword_AA0444 = 0; /*0x53e2bd*/
      if ( dword_AA0468 ) /*0x53e2c5*/
      {
        fclose(dword_AA0468); /*0x53e2c8*/
        dword_AA0468 = 0; /*0x53e2d0*/
      }
      LeaveCriticalSection(&unk_AA0418); /*0x53e2db*/
    }
  }
  if ( dword_AA044C ) /*0x53e2e4*/
  {
    RA2_OPDEL(dword_AA044C); /*0x53e2e7*/
    dword_AA044C = 0; /*0x53e2ef*/
  }
  dword_AA0450 = 0; /*0x53e2fa*/
  if ( dword_AA0458 ) /*0x53e302*/
  {
    dword_AA0378 = 1; /*0x53e304*/
    while ( !dword_AA0380 ) /*0x53e315*/
      Sleep(0); /*0x53e31e*/
    WaitForSingleObject(dword_AA03F8, 0x1388u); /*0x53e335*/
    CloseHandle(dword_AA03F8); /*0x53e341*/
    dword_AA0458 = 0; /*0x53e347*/
  }
  if ( dword_AA0460 ) /*0x53e355*/
  {
    ((Count *)((unsigned int *)dword_AA0460))->DecrementRefCountsAudio(); /*0x53e357*/
    dword_AA0460 = 0; /*0x53e35c*/
  }
  if ( dword_AA0464 ) /*0x53e36a*/
  {
    ((Count *)((unsigned int *)dword_AA0464))->DecrementRefCountsAudio(); /*0x53e36c*/
    dword_AA0464 = 0; /*0x53e371*/
  }
  if ( dword_AA045C ) /*0x53e37f*/
  {
    ((AudioSample *)((unsigned int *)dword_AA045C))->InitLinkedList(); /*0x53e381*/
    dword_AA045C = 0; /*0x53e386*/
  }
  if ( dword_AA0454 ) /*0x53e392*/
  {
    DeleteCriticalSection(&unk_AA0418); /*0x53e39f*/
    DeleteCriticalSection(&unk_AA0400); /*0x53e3a6*/
    dword_AA0454 = 0; /*0x53e3a8*/
  }
  dword_AA0448 = 0; /*0x53e3ae*/
}
}
// 0x5D0470
namespace gamemd {
ObjectClass * * Audio::ParseVolume(const char ** a1, ObjectClass * aP2)
{

  int v4; // ebp
  int v5; // eax
  String v7; // [esp+4h] [ebp-8h] BYREF

  ((String *)((String *)this))->Assign(0); /*0x5d0478*/
  *((unsigned char *)this + 4) = 0; /*0x5d0483*/
  *((unsigned int *)this + 2) = 0; /*0x5d0487*/
  *((unsigned int *)this + 3) = 255; /*0x5d048e*/
  if ( (uint8_t)((String *)((String *)a1))->NotEquals(0) && Audio::IsSoundEnabled() ) /*0x5d04a2*/
  {
    unknown_libname_73(&v7.m_3[1]); /*0x5d04b5*/
    v4 = String::Tokenize(aP2, 0, Str, (void **)&v7.m_3[1]); /*0x5d04d5*/
    unknown_libname_73(&v7); /*0x5d04d7*/
    String::Tokenize(aP2, v4, Str, (void **)&v7); /*0x5d04e9*/
    if ( (uint8_t)((String *)(&v7))->NotEquals(0) ) /*0x5d04f4*/
    {
      __1_Timevec_std__QAE_XZ((const char **)&v7); /*0x5d0503*/
      *((unsigned int *)this + 3) = v5; /*0x5d050b*/
      if ( v5 <= 100 ) /*0x5d050e*/
      {
        if ( v5 < 0 ) /*0x5d051b*/
          *((unsigned int *)this + 3) = 0; /*0x5d051d*/
      }
      else
      {
        *((unsigned int *)this + 3) = 100; /*0x5d0510*/
      }
      *((unsigned int *)this + 3) = 255 * *((unsigned int *)this + 3) / 100; /*0x5d053f*/
    }
    if ( *((int *)this + 3) > 0 && (uint8_t)((String *)((String *)&v7.m_3[1]))->NotEquals(0) ) /*0x5d054f*/
      ((String *)((String *)this))->Reassign(a1); /*0x5d055f*/
    DeleteAndZero((ObjectClass *)&v7); /*0x5d0568*/
    DeleteAndZero((ObjectClass *)&v7.m_3[1]); /*0x5d0571*/
  }
  return this; /*0x5d0578*/

}
}
// 0x5D5820
namespace gamemd {
char ** Audio::SetSoundFileName(char *Source, int a3)
{

  *(unsigned int *)this->__pad_0 = 0; /*0x5d5825*/
  *(unsigned int *)&this->__pad_0[4] = 0; /*0x5d5827*/
  this->__pad_0[8] = 0; /*0x5d582a*/
  if ( Audio::IsSoundEnabled() ) /*0x5d582d*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(_strdup(Source)); /*0x5d5843*/
  return (char **)this; /*0x5d5847*/

}
}
// 0x63F2E0
namespace gamemd {
void sub_63F2E0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int ** a7)
{
  unsigned int *v7; // ebx
  int v8; // edi
  signed int v9; // esi
  int result; // eax
  signed int v11; // ebp
  int v12; // edx
  int v13; // esi
  int v14; // edx
  int v15; // ebx
  int v16; // edx
  unsigned int *v17; // [esp+Ch] [ebp-4h]
  int v18; // [esp+14h] [ebp+4h]
  int v19; // [esp+20h] [ebp+10h]

  v7 = *a7; /*0x63f2ec*/
  v8 = a3 - a1; /*0x63f2f2*/
  v17 = *a7; /*0x63f2f6*/
  v9 = a4 - a2; /*0x63f300*/
  result = a3 - a1 <= 0 ? -1 : 1;
  v18 = result; /*0x63f308*/
  if ( a4 - a2 <= 0 ) /*0x63f30c*/
    return result; /*0x63f30c*/
  result = v8; /*0x63f315*/
  v11 = abs32(v8); /*0x63f31a*/
  if ( !v11 ) /*0x63f31c*/
  {
    v12 = v9 - a6; /*0x63f322*/
    v13 = v9 - a6 - 1; /*0x63f324*/
    if ( v12 > 0 ) /*0x63f327*/
    {
      result = v13 + 1; /*0x63f331*/
      do /*0x63f344*/
      {
        if ( a5 == 1 ) /*0x63f337*/
          *v7 = a1; /*0x63f339*/
        else
          v7[1] = a1; /*0x63f33d*/
        v7 += 2; /*0x63f340*/
        --result; /*0x63f343*/
      }
      while ( result ); /*0x63f344*/
      *a7 = v7; /*0x63f34d*/
      return result; /*0x63f351*/
    }
    goto LABEL_50; /*0x63f327*/
  }
  if ( v9 == v11 ) /*0x63f356*/
  {
    if ( a6 ) /*0x63f362*/
      a1 += v18; /*0x63f364*/
    result = v9 - a6; /*0x63f368*/
    if ( v9 - a6 <= 0 ) /*0x63f36d*/
      goto LABEL_50; /*0x63f36d*/
    do /*0x63f38c*/
    {
      if ( a5 == 1 ) /*0x63f37d*/
        *v7 = a1; /*0x63f37f*/
      else
        v7[1] = a1; /*0x63f383*/
      a1 += v18; /*0x63f386*/
      v7 += 2; /*0x63f388*/
      --result; /*0x63f38b*/
    }
    while ( result ); /*0x63f38c*/
    *a7 = v7; /*0x63f395*/
  }
  else
  {
    if ( v9 <= v11 ) /*0x63f39c*/
    {
      v15 = v18 * (v11 / v9); /*0x63f40c*/
      v16 = v11 % v9; /*0x63f412*/
      if ( v8 < 0 ) /*0x63f416*/
        result = 1 - v9; /*0x63f421*/
      else
        result = 0; /*0x63f418*/
      if ( a6 ) /*0x63f429*/
      {
        result += v16; /*0x63f42b*/
        a1 += v15; /*0x63f42d*/
        if ( result > 0 ) /*0x63f431*/
        {
          a1 += v18; /*0x63f437*/
          result -= v9; /*0x63f439*/
        }
      }
      if ( v9 - a6 > 0 ) /*0x63f444*/
      {
        v19 = v9 - a6; /*0x63f44b*/
        do /*0x63f483*/
        {
          if ( a5 == 1 ) /*0x63f45a*/
            *v17 = a1; /*0x63f45c*/
          else
            v17[1] = a1; /*0x63f460*/
          result += v16; /*0x63f463*/
          a1 += v15; /*0x63f465*/
          if ( result > 0 ) /*0x63f469*/
          {
            a1 += v18; /*0x63f46b*/
            result -= v9; /*0x63f46d*/
          }
          v17 += 2; /*0x63f476*/
          --v19; /*0x63f47f*/
        }
        while ( v19 ); /*0x63f483*/
      }
      v7 = v17; /*0x63f485*/
      goto LABEL_50; /*0x63f485*/
    }
    if ( v8 < 0 ) /*0x63f3a0*/
      result = 1 - v9; /*0x63f3ab*/
    else
      result = 0; /*0x63f3a2*/
    if ( a6 ) /*0x63f3b3*/
    {
      result += v11; /*0x63f3b5*/
      if ( result > 0 ) /*0x63f3b9*/
      {
        a1 += v18; /*0x63f3bf*/
        result -= v9; /*0x63f3c1*/
      }
    }
    if ( v9 - a6 <= 0 ) /*0x63f3cc*/
    {
  LABEL_50:
      *a7 = v7; /*0x63f489*/
      return result; /*0x63f48e*/
    }
    v14 = v9 - a6; /*0x63f3d6*/
    do /*0x63f3f3*/
    {
      if ( a5 == 1 ) /*0x63f3da*/
        *v7 = a1; /*0x63f3dc*/
      else
        v7[1] = a1; /*0x63f3e0*/
      result += v11; /*0x63f3e3*/
      if ( result > 0 ) /*0x63f3e7*/
      {
        a1 += v18; /*0x63f3e9*/
        result -= v9; /*0x63f3ed*/
      }
      v7 += 2; /*0x63f3ef*/
      --v14; /*0x63f3f2*/
    }
    while ( v14 ); /*0x63f3f3*/
    *a7 = v7; /*0x63f3fc*/
  }
  return result; /*0x63f34b*/
}
}
// 0x7207F0
namespace gamemd {
int Audio::LoadWAVFiles(void *a1_1)
{

  int IsSoundEnabled; // eax
  int i; // ebx
  int v4; // ebp
  unsigned int *v5; // ebp
  uint64_t v6; // rax
  size_t v8[2]; // [esp+8h] [ebp-294h] BYREF
  Struct v9[8]; // [esp+10h] [ebp-28Ch] BYREF
  CCFileClass v10; // [esp+30h] [ebp-26Ch] BYREF
  int v11[3]; // [esp+88h] [ebp-214h] BYREF
  int v12; // [esp+94h] [ebp-208h]
  char Buffer[512]; // [esp+9Ch] [ebp-200h] BYREF

  LOBYTE(IsSoundEnabled) = *((unsigned int *)((char *)&stru_A8EB00 + 144)); /*0x7207f0*/
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 144)) ) /*0x720801*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720807*/
    if ( IsSoundEnabled ) /*0x72080e*/
    {
      LOBYTE(IsSoundEnabled) = *((unsigned int *)((char *)&stru_A8EB00 + 384)); /*0x720814*/
      if ( !((unsigned int *)&stru_A8EB00)[384] ) /*0x72081b*/
      {
        IsSoundEnabled = *(unsigned int *)&this->__pad_18[12]; /*0x720821*/
        for ( i = 0; i < IsSoundEnabled; ++i ) /*0x720828*/
        {
          _makepath(Buffer, 0, 0, (const char *)(*(unsigned int *)(*(unsigned int *)this->__pad_18 + 4 * i) + 256), g_Str_File__WAV); /*0x720855*/
          CCFileClass::Construct(&v10, Buffer); /*0x720869*/
          v4 = 4 * i + *(unsigned int *)this->__pad_18; /*0x720877*/
          *(unsigned char *)(*(unsigned int *)v4 + 650) = ((CCFileClass *)(&v10))->Open(0); /*0x720881*/
          if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)this->__pad_18 + 4 * i) + 650) ) /*0x72088d*/
          {
            Struct::ZeroInit32(v9); /*0x72089b*/
            FileClass::Load(&v10, (const CHAR *)1); /*0x7208a6*/
            if ( ParseWaveFileHeader((int)&v10, v9, v8) ) /*0x7208b8*/
            {
              v5 = (unsigned int *)(4 * i + *(unsigned int *)this->__pad_18); /*0x7208cc*/
              v6 = sub_408560((int)v9, v8[0]) / 0x3E8; /*0x7208dc*/
              HIDWORD(v6) = *v5; /*0x7208e1*/
              v8[1] = v6; /*0x7208e4*/
              *(float *)(HIDWORD(v6) + 644) = (float)(int)v6; /*0x7208ec*/
            }
          }
          *(unsigned int *)v10.CDFileClass = &vt_CCFileClass; /*0x7208f9*/
          v12 = (unsigned int)(0); /*0x720901*/
          ((Vector *)((int)v11))->Clear(); /*0x72090c*/
          *(unsigned int *)v10.CDFileClass = &off_7E1668; /*0x720915*/
          ((BufferIOFileClass *)((BufferIOFileClass *)&v10))->Dtor(); /*0x72091d*/
          IsSoundEnabled = *(unsigned int *)&this->__pad_18[12]; /*0x720922*/
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720930*/

}
}
// 0x7510D0
namespace gamemd {
int Audio::InitFromINI()
{

  double *v3; // ecx
  double *v4; // edi
  char *v5; // eax
  char *v6; // eax
  int KeyCount; // eax
  int v8; // esi
  int v9; // ebp
  uint8_t *StringByIndex; // eax
  int v11; // esi
  char *v12; // ecx
  char *v13; // eax
  ObjectClass *v14; // eax
  ObjectClass *v15; // esi
  int v16; // eax
  int v18; // [esp+8h] [ebp-830h] BYREF
  int i; // [esp+14h] [ebp-824h]
  char Destination[32]; // [esp+18h] [ebp-820h] BYREF
  char String[2048]; // [esp+38h] [ebp-800h] BYREF

  v4 = v3; /*0x7510d9*/
  DListNode::Init((DListNode *)&unk_B1D320); /*0x7510e0*/
  dword_B1D3A4 = (VtableStub *)AllocLinkedListMemory(200, 60); /*0x7510f6*/
  dword_B1D3A8 = 0; /*0x751100*/
  dword_B1D3AC = 0; /*0x75110a*/
  if ( INIClass::BinarySearchSection((int)v4, g_INI_Key_Defaults) ) /*0x751114*/
  {
    INIClass::ReadDouble_Overwrite(v4, g_INI_Key_Defaults, g_INI_Key_Volume, flt_8464B4); /*0x75113e*/
    flt_8464B4 = a2; /*0x751143*/
    INIClass::ReadDouble_Overwrite(v4, g_INI_Key_Defaults, aMinvolume, flt_8464B8); /*0x751161*/
    flt_8464B8 = a3; /*0x751166*/
    INIClass::GetString( /*0x751187*/
      (INIClass *)v4,
      g_INI_Key_Defaults,
      (uint8_t *)aPriority,
      g_INI_Key_NORMAL,
      String,
      2048);
    sub_4067D0(String, &dword_8464B0); /*0x751195*/
    INIClass::GetString((INIClass *)v4, g_INI_Key_Defaults, aControl, &g_INI_DefaultBuffer, String, 2048); /*0x7511b5*/
    v5 = strtok(String, asc_846570); /*0x7511c4*/
    if ( v5 ) /*0x7511ce*/
    {
      dword_B1D3B0 = 0; /*0x7511d0*/
      do /*0x7511f7*/
      {
        sub_406820(&dword_B1D3B0, v5); /*0x7511e1*/
        v5 = strtok(0, asc_846570); /*0x7511ed*/
      }
      while ( v5 ); /*0x7511f7*/
    }
    INIClass::GetString( /*0x751214*/
      (INIClass *)v4,
      g_INI_Key_Defaults,
      (uint8_t *)g_INI_Key_Type,
      &g_INI_DefaultBuffer,
      String,
      2048);
    v6 = strtok(String, asc_846570); /*0x751223*/
    if ( v6 ) /*0x75122d*/
    {
      dword_8464BC = 32; /*0x75122f*/
      do /*0x751256*/
      {
        Audio::ApplyFormatFlags(&dword_8464BC, v6); /*0x751240*/
        v6 = strtok(0, asc_846570); /*0x75124c*/
      }
      while ( v6 ); /*0x751256*/
    }
    dword_8464C4 = ((INIClass *)((bool *)v4))->ReadInt_Overwrite(g_INI_Key_Defaults, aLimit, dword_8464C4); /*0x751270*/
    dword_8464C0 = ((INIClass *)((bool *)v4))->ReadInt_Overwrite(g_INI_Key_Defaults, g_INI_Key_Range, dword_8464C0); /*0x75128c*/
  }
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)v4, g_INI_Key_SoundList) != 0; /*0x75129f*/
  if ( (unsigned char)KeyCount )
  {
    KeyCount = INIClass::GetKeyCount((char *)v4, g_INI_Key_SoundList); /*0x7512b1*/
    v8 = KeyCount; /*0x7512b6*/
    v9 = 0; /*0x7512b8*/
    for ( i = KeyCount; v9 < v8; ++v9 )
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex((char *)v4, g_INI_Key_SoundList, v9); /*0x7512da*/
      KeyCount = INIClass::GetString( /*0x7512e7*/
                   (INIClass *)v4,
                   g_INI_Key_SoundList,
                   StringByIndex,
                   &g_INI_DefaultBuffer,
                   Destination,
                   32);
      if ( KeyCount )
      {
        if ( &v18 == (int *)-16 ) /*0x7512fa*/
          goto LABEL_21; /*0x7512fa*/
        v11 = 0; /*0x751301*/
        if ( g_VocPlayState <= 0 ) /*0x751305*/
          goto LABEL_21; /*0x751305*/
        while ( 1 )
        {
          v12 = (char *)**((unsigned int **)g_VocAudioConfig + v11); /*0x75130f*/
          v13 = v12 ? VocClass::GetSampleName(v12) : g_Str_Invalid_Voc;
          if ( !_strcmpi(Destination, v13) ) /*0x751327*/
            break; /*0x751327*/
          if ( ++v11 >= g_VocPlayState ) /*0x75133b*/
            goto LABEL_21; /*0x75133b*/
        }
        if ( v11 == -1 ) /*0x751342*/
        {
LABEL_21:
          v14 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x751344*/
          v15 = v14; /*0x75134b*/
          if ( v14 ) /*0x751352*/
          {
            v14->vtable0 = 0; /*0x751354*/
            if ( g_VocPlayState < dword_B1D380 /*0x75138f*/
              || (byte_B1D385 || !dword_B1D380)
              && dword_B1D38C > 0
              && (*(uint8_t (**)(int *, int, unsigned int))(dword_B1D378 + 8))(
                   &dword_B1D378,
                   dword_B1D380 + dword_B1D38C,
                   0) )
            {
              v16 = g_VocPlayState++; /*0x75139c*/
              *((unsigned int *)g_VocAudioConfig + v16) = v15; /*0x7513ab*/
            }
            v15->vtable0 = (int)Audio::ProcessMixerOutput(Destination); /*0x7513b7*/
          }
          else
          {
            v15 = 0; /*0x7513bb*/
          }
        }
        else
        {
          v15 = (ObjectClass *)*((unsigned int *)g_VocAudioConfig + v11); /*0x7513c5*/
        }
        LOBYTE(KeyCount) = LoadVocFromINI(v15, (uint8_t ***)v4); /*0x7513cb*/
        v8 = i; /*0x7513d0*/
      }
    }
  }
  return KeyCount; /*0x7513dd*/

}
}
// 0x7513F0
namespace gamemd {
void * Audio::LoadSoundINI()
{

  void *v1; // esi
  int v2; // eax
  void *result; // eax
  int Next; // esi
  int NextAlt; // edi
  int v6; // [esp+4h] [ebp-4h] BYREF

  while ( g_VocPlayState > 0 ) /*0x7513f9*/
  {
    v1 = *(void **)g_VocAudioConfig; /*0x751400*/
    if ( *(unsigned int *)g_VocAudioConfig ) /*0x751400*/
    {
      v6 = *(unsigned int *)g_VocAudioConfig; /*0x751416*/
      v2 = (*(int (**)(int *, int *))(dword_B1D378 + 16))(&dword_B1D378, &v6); /*0x75141a*/
      if ( v2 != -1 && v2 < g_VocPlayState && v2 < --g_VocPlayState ) /*0x751435*/
      {
        do /*0x75144d*/
        {
          ++v2; /*0x75143d*/
          *((unsigned int *)g_VocAudioConfig + v2 - 1) = *((unsigned int *)g_VocAudioConfig + v2); /*0x751441*/
        }
        while ( v2 < g_VocPlayState ); /*0x75144d*/
      }
      __3_YAXPAX_Z(v1); /*0x751450*/
    }
  }
  result = dword_B1D3A4; /*0x751461*/
  if ( dword_B1D3A4 ) /*0x751468*/
  {
    Next = ((AudioQueue *)((AudioQueue *)&stru_B1D290.isAliveFlag))->GetNext(); /*0x751474*/
    if ( Next ) /*0x751478*/
    {
      do /*0x7514b1*/
      {
        NextAlt = ((AudioQueue *)((AudioQueue *)Next))->GetNextAlt(); /*0x751485*/
        ((AudioController *)((AudioController *)(Next + 12)))->Stop(); /*0x751487*/
        LinkedList::Init((LinkedList *)Next); /*0x75148e*/
        PushFrontLinkedListAlt(dword_B1D3A4, Next); /*0x75149b*/
        Next = NextAlt; /*0x7514a6*/
        --dword_B1D3A8; /*0x7514ab*/
      }
      while ( NextAlt ); /*0x7514b1*/
    }
    result = (void *)VtableStub::Push_407510(dword_B1D3A4); /*0x7514ba*/
    dword_B1D3A4 = 0; /*0x7514bf*/
  }
  return result; /*0x7514c9*/

}
}
// 0x752590
namespace gamemd {
void sub_752590(int a1, int a2, int a3)
{
  unsigned int *v5; // esi

  v5 = RA2_OPNEW(0x20u); /*0x75259f*/
  ((DListNode *)(v5))->InitEmpty(); /*0x7525a6*/
  v5[3] = a1; /*0x7525af*/
  v5[5] = a3; /*0x7525b2*/
  v5[6] = a2; /*0x7525b5*/
  v5[7] = dword_B1D4C0 % 100; /*0x7525c5*/
  ++dword_B1D4C0; /*0x7525d2*/
  *(unsigned int *)(a1 + 80) = 1; /*0x7525d8*/
  if ( a2 == 3 ) /*0x7525df*/
  {
    InsertAfterDListNode((int)&stru_B1D3C8, v5); /*0x7525e8*/
  }
  else if ( a2 == 1 ) /*0x7525f7*/
  {
    InsertAfterDListNode(12 * a3 + 11654224, v5); /*0x752605*/
  }
  else if ( a3 == 3 ) /*0x752614*/
  {
    InsertAfterDListNode((int)&stru_B1D3F0, v5); /*0x75261d*/
  }
  else if ( (int *)dword_B1D3CC == &stru_B1D3C8 /*0x75264d*/
         && (int *)dword_B1D3F4 == &stru_B1D3F0
         && (!dword_B1D4B8 || *((unsigned int *)dword_B1D4B8 + 5) < a3) )
  {
    dword_B1D4B8 = v5; /*0x75264f*/
  }
  else
  {
    *(unsigned int *)(a1 + 80) = 2; /*0x75265d*/
    RA2_OPDEL(v5); /*0x752664*/
  }
}
}
// 0x7BD130
namespace gamemd {
unsigned int Audio::GetSamplePosition(int aP1, int aP2)
{

  int v4; // edi
  int result; // eax

  v4 = (*(int (**)(unsigned int, int, int))(*(unsigned int *)*((char *)this + 5) + 92))(*((char *)this + 5), aP1, aP2); /*0x7bd149*/
  (*(void (**)(unsigned int))(*(unsigned int *)*((char *)this + 5) + 96))(*((char *)this + 5)); /*0x7bd14d*/
  result = v4 + *((char *)this + 4); /*0x7bd156*/
  if ( result >= (unsigned int)*((char *)this + 7) ) /*0x7bd15a*/
    result -= *((char *)this + 8); /*0x7bd15c*/
  return result; /*0x7bd15f*/

}
}
// 0x7C1E10
namespace gamemd {
int sub_7C1E10(int a1, int a2)
{
  int v3; // ebx
  unsigned int *v4; // edi
  uint16_t *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v10; // ebp
  int v11; // ebx
  int v12; // ecx

  v3 = a2; /*0x7c1e16*/
  v4 = *(unsigned int **)(a1 + 356); /*0x7c1e1f*/
  if ( !*(unsigned char *)(a1 + 245) && !*(unsigned int *)(a1 + 376) ) /*0x7c1e2d*/
  {
    v5 = *(uint16_t **)(a1 + 1876); /*0x7c1e37*/
    v6 = *(uint16_t *)(a1 + 1868); /*0x7c1e3f*/
    v7 = 0; /*0x7c1e46*/
    if ( (unsigned short)v6 ) /*0x7c1e4a*/
    {
      while ( *v5 <= *(int *)(a1 + 384) ) /*0x7c1e59*/
      {
        ++v7; /*0x7c1e5b*/
        v5 += 3; /*0x7c1e5c*/
        if ( v7 >= v6 ) /*0x7c1e61*/
          goto LABEL_6; /*0x7c1e61*/
      }
      v8 = *(unsigned int *)(*(unsigned int *)(a1 + 1876) + 6 * v7 + 2); /*0x7c1e70*/
    }
    else
    {
  LABEL_6:
      v8 = 0; /*0x7c1e63*/
    }
    v3 = a2; /*0x7c1e74*/
    *(unsigned int *)(a1 + 380) = v8; /*0x7c1e78*/
  }
  if ( (*(int (**)(int, int, int, unsigned int))(a1 + 64))( /*0x7c1e93*/
         a1,
         5,
         *(unsigned int *)(a1 + 376) + *v4,
         (v3 + 1) & 0xFFFFFFFE) )
  {
    return -4; /*0x7c1ea7*/
  }
  v10 = v3 + *(unsigned int *)(a1 + 376); /*0x7c1eae*/
  v11 = *(unsigned int *)(a1 + 372) + 1; /*0x7c1eb6*/
  *(unsigned int *)(a1 + 376) = v10; /*0x7c1eb7*/
  *(unsigned int *)(a1 + 372) = v11; /*0x7c1ebd*/
  if ( *(unsigned char *)(a1 + 245) ) /*0x7c1ec3*/
  {
    if ( v11 != *(uint8_t *)(a1 + 245) ) /*0x7c1edb*/
      return -1; /*0x7c1f0f*/
  LABEL_13:
    v4[5] = v10; /*0x7c1edd*/
    *(unsigned int *)(a1 + 372) = 0; /*0x7c1ee2*/
    *(unsigned int *)(a1 + 376) = 0; /*0x7c1ee8*/
    v4[4] = 0; /*0x7c1eee*/
    v4[3] = 8; /*0x7c1ef1*/
    *(unsigned int *)(a1 + 360) = v4; /*0x7c1ef8*/
    *(unsigned int *)(a1 + 356) = v4[1]; /*0x7c1f01*/
    return -1; /*0x7c1f01*/
  }
  v12 = *(unsigned int *)(a1 + 380); /*0x7c1f10*/
  if ( v10 == v12 ) /*0x7c1f18*/
    goto LABEL_13; /*0x7c1f18*/
  if ( v10 <= v12 ) /*0x7c1f1a*/
    return -1; /*0x7c1f1a*/
  return -4; /*0x7c1e9d*/
}
}
// 0x7C1F30
namespace gamemd {
int sub_7C1F30(int a1, int a2)
{
  unsigned int *v3; // ebx
  int v4; // ebp
  unsigned int v5; // edi
  uint16_t *v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx

  v3 = *(unsigned int **)(a1 + 356); /*0x7c1f41*/
  v4 = *(uint8_t *)(a1 + 245); /*0x7c1f4a*/
  v5 = (a2 + 1) & 0xFFFFFFFE; /*0x7c1f52*/
  if ( !*(unsigned int *)(a1 + 376) ) /*0x7c1f4c*/
  {
    if ( *(unsigned char *)(a1 + 245) ) /*0x7c1f3b*/
    {
      *(unsigned int *)(a1 + 380) = ((v4 + 1) & 0xFFFFFFFE) + v5 * v4; /*0x7c1f7a*/
    }
    else
    {
      v6 = *(uint16_t **)(a1 + 1876); /*0x7c1f82*/
      v7 = *(uint16_t *)(a1 + 1868); /*0x7c1f8a*/
      v8 = 0; /*0x7c1f91*/
      if ( (unsigned short)v7 ) /*0x7c1f95*/
      {
        while ( *v6 <= *(int *)(a1 + 384) ) /*0x7c1fa4*/
        {
          ++v8; /*0x7c1fa6*/
          v6 += 3; /*0x7c1fa7*/
          if ( v8 >= v7 ) /*0x7c1fac*/
            goto LABEL_7; /*0x7c1fac*/
        }
        v9 = *(unsigned int *)(*(unsigned int *)(a1 + 1876) + 6 * v8 + 2); /*0x7c1fcb*/
      }
      else
      {
  LABEL_7:
        v9 = 0; /*0x7c1fb6*/
      }
      *(unsigned int *)(a1 + 380) = v9; /*0x7c1fcf*/
    }
    if ( (*(unsigned char *)(a1 + 340) & 1) != 0 ) /*0x7c1fdc*/
      v3[4] = 0; /*0x7c1ff1*/
    else
      v3[4] = *(unsigned int *)(a1 + 1896) - *(unsigned int *)(a1 + 380); /*0x7c1fec*/
  }
  if ( (*(int (**)(int, int, int, unsigned int))(a1 + 64))(a1, 5, *(unsigned int *)(a1 + 376) + *v3 + v3[4], v5) ) /*0x7c200c*/
    return -4; /*0x7c2022*/
  v11 = *(unsigned int *)(a1 + 372); /*0x7c202d*/
  v12 = a2 + *(unsigned int *)(a1 + 376); /*0x7c2033*/
  *(unsigned int *)(a1 + 376) = v12; /*0x7c2035*/
  v13 = v11 + 1; /*0x7c203f*/
  *(unsigned int *)(a1 + 372) = v13; /*0x7c2042*/
  if ( v4 ) /*0x7c2048*/
  {
    if ( v13 == v4 ) /*0x7c204c*/
      goto LABEL_17; /*0x7c204c*/
    return -1; /*0x7c204c*/
  }
  v14 = *(unsigned int *)(a1 + 380); /*0x7c2097*/
  if ( v12 == v14 ) /*0x7c209f*/
  {
  LABEL_17:
    *(unsigned int *)(a1 + 372) = 0; /*0x7c204e*/
    *(unsigned int *)(a1 + 376) = 0; /*0x7c2054*/
    v3[3] = 10; /*0x7c205a*/
    *(unsigned int *)(a1 + 360) = v3; /*0x7c2061*/
    *(unsigned int *)(a1 + 356) = v3[1]; /*0x7c206a*/
    if ( *(unsigned short *)(a1 + 232) < 3u ) /*0x7c2078*/
      *(unsigned char *)(v3[4] + *(unsigned int *)(a1 + 380) + *v3 + 1) = 0x80; /*0x7c2087*/
    return -1; /*0x7c2087*/
  }
  if ( v12 <= v14 ) /*0x7c20a1*/
    return -1; /*0x7c2096*/
  return -4; /*0x7c2016*/
}
}
// 0x7C2250
namespace gamemd {
int sub_7C2250(int a1, int a2)
{
  unsigned int v3; // edi
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned short *v7; // ebx
  int v8; // ecx
  int64_t v9; // rax
  unsigned short *v10; // ebx
  int v11; // eax
  uint16_t v12; // [esp+Ch] [ebp-4h] BYREF
  int16_t v13; // [esp+Eh] [ebp-2h]

  v3 = (a2 + 1) & 0xFFFFFFFE; /*0x7c225f*/
  if ( (*(unsigned char *)(a1 + 132) & 1) != 0 && *(unsigned int *)(a1 + 1932) ) /*0x7c226a*/
  {
    if ( (*(int (**)(int, int, uint16_t *, int))(a1 + 64))(a1, 5, &v12, 4) ) /*0x7c2282*/
      return -4; /*0x7c2295*/
    v5 = *(unsigned int *)(a1 + 1972); /*0x7c229a*/
    v6 = v3 - 4; /*0x7c22a2*/
    if ( v12 <= v5 || *(unsigned int *)(a1 + 1936) ) /*0x7c22b3*/
    {
      if ( v12 == v13 ) /*0x7c237c*/
      {
        if ( (*(int (**)(int, int, unsigned int, unsigned int))(a1 + 64))(a1, 5, *(unsigned int *)(a1 + 1960), v6) ) /*0x7c2389*/
          return -4; /*0x7c239c*/
      }
      else
      {
        v10 = (unsigned short *)(v5 + *(unsigned int *)(a1 + 1960) - v6); /*0x7c23a6*/
        if ( (*(int (**)(int, int, unsigned short *, unsigned int))(a1 + 64))(a1, 5, v10, v6) ) /*0x7c23ac*/
          return -4; /*0x7c23bf*/
        Audio_Helper_7C7F20(v12, v10, *(unsigned char **)(a1 + 1960), v12); /*0x7c23d3*/
      }
      *(unsigned int *)(a1 + 1968) = v12; /*0x7c23e9*/
      return -1; /*0x7c23e6*/
    }
    else
    {
      if ( v12 == v13 ) /*0x7c22c6*/
      {
        if ( (*(int (**)(int, int, unsigned int, unsigned int))(a1 + 64))(a1, 5, *(unsigned int *)(a1 + 1932), v6) ) /*0x7c22d3*/
          return -4; /*0x7c22e6*/
      }
      else
      {
        v7 = (unsigned short *)(*(unsigned int *)(a1 + 1932) + *(unsigned int *)(a1 + 152) - v6); /*0x7c22f6*/
        if ( (*(int (**)(int, int, unsigned short *, unsigned int))(a1 + 64))(a1, 5, v7, v6) ) /*0x7c22fc*/
          return -4; /*0x7c230f*/
        Audio_Helper_7C7F20(*(unsigned int *)(a1 + 1932), v7, *(unsigned char **)(a1 + 1932), v12); /*0x7c2323*/
      }
      v8 = 0; /*0x7c233a*/
      v9 = v12; /*0x7c233e*/
      *(unsigned int *)(a1 + 1936) += v12; /*0x7c233f*/
      if ( (int)(v9 / *(int *)(a1 + 156)) > 0 ) /*0x7c234d*/
      {
        do /*0x7c236d*/
        {
          ++v8; /*0x7c2355*/
          *(unsigned char *)(*(unsigned int *)(a1 + 1940) + v8 - 1) = 1; /*0x7c2356*/
        }
        while ( v8 < v12 / *(int *)(a1 + 156) ); /*0x7c236d*/
      }
      return -1; /*0x7c2371*/
    }
  }
  else
  {
    v11 = -((*(int (**)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, (a2 + 1) & 0xFFFFFFFE) != 0); /*0x7c2401*/
    IDA_LOBYTE(v11) = v11 & 0xFB; /*0x7c2404*/
    return v11 - 1; /*0x7c2407*/
  }
}
}
// 0x7C7F20
namespace gamemd {
void Audio_Helper_7C7F20()
{
  unsigned int v4; // kr00_4
  unsigned short *v5; // esi
  unsigned char *v6; // edi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int i; // ecx
  unsigned int v12; // ecx
  unsigned char *v13; // edi
  uint8_t v14; // ah
  char v15; // bl
  int v16; // ebx
  unsigned int v17; // kr04_4
  char v18; // cf
  unsigned int v19; // kr08_4
  char v20; // ah
  unsigned int v21; // ebx
  unsigned int v22; // kr0C_4
  unsigned int v23; // ebx
  int v24; // edx
  unsigned int v25; // kr10_4
  unsigned int v26; // ebx
  int v27; // edx
  unsigned int v28; // kr14_4
  unsigned int v29; // ebx
  int v30; // edx
  unsigned int v31; // kr18_4
  int v32; // edx
  int v34; // [esp+4h] [ebp-8h]

  v4 = __readeflags(); /*0x7c7f2b*/
  v34 = 0; /*0x7c7f2d*/
  if ( a2 && a3 && a4 ) /*0x7c7f4c*/
  {
    v5 = a2; /*0x7c7f52*/
    v6 = a3; /*0x7c7f55*/
    v7 = a4; /*0x7c7f58*/
    IDA_LOBYTE(a1) = 0x80; /*0x7c7f5b*/
    while ( v7 > 0 ) /*0x7c7f60*/
    {
      v8 = *(uint8_t *)v5; /*0x7c7f68*/
      ++v34; /*0x7c7f6a*/
      v5 = (unsigned short *)((char *)v5 + 1); /*0x7c7f6d*/
      v9 = 4 * v8; /*0x7c7f6e*/
      IDA_LOBYTE(v9) = (uint8_t)v9 >> 2; /*0x7c7f71*/
      if ( IDA_BYTE1(v9) == 2 ) /*0x7c7f77*/
      {
        if ( (v9 & 0x20) != 0 ) /*0x7c7f7b*/
        {
          IDA_LOBYTE(a1) = ((char)(8 * v9) >> 3) + a1; /*0x7c7f83*/
          *v6 = a1; /*0x7c7f85*/
          --v7; /*0x7c7f87*/
          ++v6; /*0x7c7f88*/
        }
        else
        {
          v10 = v7; /*0x7c7f8b*/
          IDA_LOWORD(v9) = (uint8_t)(v9 + 1); /*0x7c7f8f*/
          for ( i = v9 >> 1; i; --i ) /*0x7c7f93*/
          {
            *(unsigned short *)v6 = *v5++; /*0x7c7f95*/
            v6 += 2; /*0x7c7f95*/
          }
          v12 = v9 & 1; /*0x7c7f98*/
          qmemcpy(v6, v5, v12); /*0x7c7f9a*/
          v5 = (unsigned short *)((char *)v5 + v12); /*0x7c7f9a*/
          v13 = &v6[v12]; /*0x7c7f9a*/
          v34 += v9; /*0x7c7f9e*/
          v7 = v10 - v9; /*0x7c7fa1*/
          IDA_LOBYTE(a1) = *--v13; /*0x7c7fa4*/
          v6 = v13 + 1; /*0x7c7fa6*/
        }
      }
      else
      {
        IDA_LOBYTE(v9) = v9 + 1; /*0x7c7fa9*/
        if ( IDA_BYTE1(v9) == 1 ) /*0x7c7fae*/
        {
          do /*0x7c8007*/
          {
            v14 = *(unsigned char *)v5; /*0x7c7fb0*/
            v15 = *(unsigned char *)v5; /*0x7c7fb2*/
            ++v34; /*0x7c7fb4*/
            v5 = (unsigned short *)((char *)v5 + 1); /*0x7c7fb7*/
            v16 = v15 & 0xF; /*0x7c7fb8*/
            IDA_LOBYTE(a1) = byte_7C80F6[v16] + a1; /*0x7c7fbb*/
            v17 = __readeflags(); /*0x7c7fc1*/
            if ( byte_7C80F6[v16] < 0 ) /*0x7c7fc9*/
            {
              __writeeflags(v17); /*0x7c7fd2*/
              if ( !v18 ) /*0x7c7fd3*/
                IDA_LOBYTE(a1) = 0; /*0x7c7fd5*/
            }
            else
            {
              __writeeflags(v17); /*0x7c7fcb*/
              if ( v18 ) /*0x7c7fcc*/
                IDA_LOBYTE(a1) = -1; /*0x7c7fce*/
            }
            IDA_LOBYTE(v16) = v14 >> 4; /*0x7c7fdb*/
            IDA_BYTE1(a1) = byte_7C80F6[v16] + a1; /*0x7c7fde*/
            v19 = __readeflags(); /*0x7c7fe4*/
            if ( byte_7C80F6[v16] < 0 ) /*0x7c7fec*/
            {
              __writeeflags(v19); /*0x7c7ff5*/
              if ( !v18 ) /*0x7c7ff6*/
                IDA_BYTE1(a1) = 0; /*0x7c7ff8*/
            }
            else
            {
              __writeeflags(v19); /*0x7c7fee*/
              if ( v18 ) /*0x7c7fef*/
                IDA_BYTE1(a1) = -1; /*0x7c7ff1*/
            }
            *(unsigned short *)v6 = a1; /*0x7c7ffa*/
            v7 -= 2; /*0x7c7ffd*/
            v6 += 2; /*0x7c8000*/
            IDA_LOBYTE(a1) = IDA_BYTE1(a1); /*0x7c8003*/
            IDA_LOBYTE(v9) = v9 - 1; /*0x7c8005*/
          }
          while ( (unsigned char)v9 ); /*0x7c8007*/
        }
        else if ( IDA_BYTE1(v9) ) /*0x7c8011*/
        {
          memset(v6, a1, (uint8_t)v9); /*0x7c80de*/
          v6 += (uint8_t)v9; /*0x7c80de*/
          v7 -= (uint8_t)v9; /*0x7c80e0*/
        }
        else
        {
          do /*0x7c80c9*/
          {
            v20 = *(unsigned char *)v5; /*0x7c8017*/
            ++v34; /*0x7c8019*/
            v5 = (unsigned short *)((char *)v5 + 1); /*0x7c801c*/
            v21 = v20 & 3; /*0x7c801f*/
            IDA_LOBYTE(a1) = byte_7C80F2[v21] + a1; /*0x7c8022*/
            v22 = __readeflags(); /*0x7c8028*/
            if ( byte_7C80F2[v21] < 0 ) /*0x7c8030*/
            {
              __writeeflags(v22); /*0x7c8039*/
              if ( !v18 ) /*0x7c803a*/
                IDA_LOBYTE(a1) = 0; /*0x7c803c*/
            }
            else
            {
              __writeeflags(v22); /*0x7c8032*/
              if ( v18 ) /*0x7c8033*/
                IDA_LOBYTE(a1) = -1; /*0x7c8035*/
            }
            IDA_BYTE1(a1) = a1; /*0x7c803e*/
            v24 = __ROR4__(a1, 8); /*0x7c8040*/
            IDA_LOBYTE(v21) = v20; /*0x7c8043*/
            v23 = v21 >> 2; /*0x7c8045*/
            IDA_LOBYTE(v23) = v23 & 3; /*0x7c8048*/
            IDA_LOBYTE(v24) = byte_7C80F2[v23] + v24; /*0x7c804b*/
            v25 = __readeflags(); /*0x7c8051*/
            if ( byte_7C80F2[v23] < 0 ) /*0x7c8059*/
            {
              __writeeflags(v25); /*0x7c8062*/
              if ( !v18 ) /*0x7c8063*/
                IDA_LOBYTE(v24) = 0; /*0x7c8065*/
            }
            else
            {
              __writeeflags(v25); /*0x7c805b*/
              if ( v18 ) /*0x7c805c*/
                IDA_LOBYTE(v24) = -1; /*0x7c805e*/
            }
            IDA_BYTE1(v24) = v24; /*0x7c8067*/
            v27 = __ROR4__(v24, 8); /*0x7c8069*/
            IDA_LOBYTE(v23) = v20; /*0x7c806c*/
            v26 = v23 >> 4; /*0x7c806e*/
            IDA_LOBYTE(v26) = v26 & 3; /*0x7c8071*/
            IDA_LOBYTE(v27) = byte_7C80F2[v26] + v27; /*0x7c8074*/
            v28 = __readeflags(); /*0x7c807a*/
            if ( byte_7C80F2[v26] < 0 ) /*0x7c8082*/
            {
              __writeeflags(v28); /*0x7c808b*/
              if ( !v18 ) /*0x7c808c*/
                IDA_LOBYTE(v27) = 0; /*0x7c808e*/
            }
            else
            {
              __writeeflags(v28); /*0x7c8084*/
              if ( v18 ) /*0x7c8085*/
                IDA_LOBYTE(v27) = -1; /*0x7c8087*/
            }
            IDA_BYTE1(v27) = v27; /*0x7c8090*/
            v30 = __ROR4__(v27, 8); /*0x7c8092*/
            IDA_LOBYTE(v26) = v20; /*0x7c8095*/
            v29 = v26 >> 6; /*0x7c8097*/
            IDA_LOBYTE(v29) = v29 & 3; /*0x7c809a*/
            IDA_LOBYTE(v30) = byte_7C80F2[v29] + v30; /*0x7c809d*/
            v31 = __readeflags(); /*0x7c80a3*/
            if ( byte_7C80F2[v29] < 0 ) /*0x7c80ab*/
            {
              __writeeflags(v31); /*0x7c80b4*/
              if ( !v18 ) /*0x7c80b5*/
                IDA_LOBYTE(v30) = 0; /*0x7c80b7*/
            }
            else
            {
              __writeeflags(v31); /*0x7c80ad*/
              if ( v18 ) /*0x7c80ae*/
                IDA_LOBYTE(v30) = -1; /*0x7c80b0*/
            }
            v32 = __ROR4__(v30, 8); /*0x7c80b9*/
            *(unsigned int *)v6 = v32; /*0x7c80bc*/
            v7 -= 4; /*0x7c80be*/
            v6 += 4; /*0x7c80c1*/
            a1 = __ROL4__(v32, 8); /*0x7c80c4*/
            IDA_LOBYTE(v9) = v9 - 1; /*0x7c80c7*/
          }
          while ( (unsigned char)v9 ); /*0x7c80c9*/
        }
      }
    }
  }
  __writeeflags(v4); /*0x7c80e7*/
  return v34; /*0x7c80ef*/
}
}
// 0x7BE830
namespace gamemd {
int sub_7BE830(int a1, int a2)
{
  int v3; // ebp
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int *v8; // edi
  bool v9; // zf
  int result; // eax
  int v11; // ebp
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int *v16; // edi
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+18h] [ebp-8h]

  v3 = 0; /*0x7be838*/
  if ( *(unsigned int *)(a1 + 1828) ) /*0x7be83b*/
  {
    v17 = 0; /*0x7be849*/
    v21 = *(unsigned int *)(a1 + 1828); /*0x7be84d*/
    do /*0x7be8b7*/
    {
      v4 = *(unsigned int *)(*(unsigned int *)(a1 + 1844) + v3); /*0x7be861*/
      v5 = (int *)(v17 + *(unsigned int *)(a1 + 1848)); /*0x7be864*/
      v6 = v5[2]; /*0x7be867*/
      v7 = *v5; /*0x7be86b*/
      if ( v7 ) /*0x7be86f*/
      {
        v8 = (unsigned int *)(v6 + 4); /*0x7be871*/
        v19 = v7; /*0x7be874*/
        do /*0x7be89e*/
        {
          if ( v8[1] == a2 ) /*0x7be881*/
            (*(void (**)(int, int, unsigned int, unsigned int))(a1 + 72))(a1, v4, *(v8 - 1), *v8); /*0x7be88c*/
          v8 += 3; /*0x7be896*/
          --v19; /*0x7be89a*/
        }
        while ( v19 ); /*0x7be89e*/
      }
      v3 += 16; /*0x7be8a8*/
      v9 = v21 == 1; /*0x7be8ae*/
      v17 += 12; /*0x7be8af*/
      --v21; /*0x7be8b3*/
    }
    while ( !v9 ); /*0x7be8b7*/
  }
  result = *(unsigned int *)(a1 + 1852); /*0x7be8b9*/
  v11 = 0; /*0x7be8bf*/
  if ( result ) /*0x7be8c3*/
  {
    v18 = 0; /*0x7be8c5*/
    v20 = *(unsigned int *)(a1 + 1852); /*0x7be8c9*/
    do /*0x7be933*/
    {
      v12 = *(unsigned int *)(*(unsigned int *)(a1 + 1860) + v11); /*0x7be8dd*/
      v13 = (int *)(*(unsigned int *)(a1 + 1864) + v18); /*0x7be8e0*/
      v14 = v13[2]; /*0x7be8e3*/
      v15 = *v13; /*0x7be8e7*/
      if ( v15 ) /*0x7be8eb*/
      {
        v16 = (unsigned int *)(v14 + 4); /*0x7be8ed*/
        v22 = v15; /*0x7be8f0*/
        do /*0x7be91a*/
        {
          if ( v16[1] == a2 ) /*0x7be8fd*/
            (*(void (**)(int, int, unsigned int, unsigned int))(a1 + 72))(a1, v12, *(v16 - 1), *v16); /*0x7be908*/
          v16 += 3; /*0x7be912*/
          --v22; /*0x7be916*/
        }
        while ( v22 ); /*0x7be91a*/
      }
      v11 += 16; /*0x7be924*/
      result = v20 - 1; /*0x7be92a*/
      v9 = v20 == 1; /*0x7be92a*/
      v18 += 12; /*0x7be92b*/
      --v20; /*0x7be92f*/
    }
    while ( !v9 ); /*0x7be933*/
  }
  return result; /*0x7be935*/
}
}
// 0x7BEE20
namespace gamemd {
void int sub_7BEE20(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  signed int v7; // esi
  signed int result; // eax
  char v9; // bl
  int v10; // ecx
  int v11; // esi
  int Position; // eax
  bool v13; // zf
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  signed int v22; // [esp+20h] [ebp+8h]

  v5 = *(unsigned int *)(a2 + 48); /*0x7bee25*/
  v7 = *(unsigned int *)(a4 + 28); /*0x7bee37*/
  result = a5 * v5 / 0x3Cu; /*0x7bee4b*/
  v7 = v7; /*0x7bee51*/
  if ( (a3->u8_4 & 2) != 0 ) /*0x7bee58*/
    --result; /*0x7bee5a*/
  v9 = 0; /*0x7bee61*/
  v22 = *(unsigned int *)(a1 + 300); /*0x7bee63*/
  v10 = *(unsigned int *)(a1 + 336); /*0x7bee67*/
  if ( (v10 & 0x80u) != 0 ) /*0x7bee70*/
  {
    if ( (v10 & 0x100) != 0 ) /*0x7bee75*/
      v22 = *(unsigned int *)(a1 + 320); /*0x7bee7d*/
    do /*0x7beeee*/
    {
      if ( ((*(unsigned int *)(a2 + 64) & 4) != 0 || result <= v22) /*0x7beea1*/
        && ((*(unsigned int *)(a2 + 64) & 4) == 0 || v7 != *(unsigned int *)(a1 + 296) || v9) )
      {
        break; /*0x7beea1*/
      }
      v11 = *(unsigned int *)(a1 + 296) - v22 - 1; /*0x7beeb1*/
      Audio_Process_7C3950(a1, 60 * v11 / v5); /*0x7beec0*/
      Position = AudioStream::GetPosition((AudioStream *)a1); /*0x7beec7*/
      v9 = 1; /*0x7beeda*/
      v13 = v11 == 0; /*0x7beee6*/
      v7 = v7; /*0x7beee8*/
      result = v5 * Position / 60; /*0x7beeec*/
    }
    while ( !v13 ); /*0x7beeee*/
  }
  v14 = a2; /*0x7beef0*/
  if ( (*(unsigned char *)(a2 + 64) & 4) != 0 ) /*0x7beef8*/
  {
    if ( result <= v7 ) /*0x7beefc*/
    {
      v16 = *(unsigned int *)(a1 + 336); /*0x7bef3e*/
      IDA_BYTE1(v16) &= ~8u; /*0x7bef44*/
      *(unsigned int *)(a1 + 336) = v16; /*0x7bef47*/
    }
    else
    {
      if ( (*(unsigned char *)(a1 + 234) & 1) == 0 || (*(unsigned char *)(a2 + 68) & 1) == 0 ) /*0x7bef10*/
        Audio_Process_7C3950(a1, 60 * (v7 - result) / v5); /*0x7bef22*/
      v15 = *(unsigned int *)(a1 + 336); /*0x7bef27*/
      v14 = a2; /*0x7bef2d*/
      IDA_BYTE1(v15) |= 8u; /*0x7bef31*/
      result = v7; /*0x7bef34*/
      *(unsigned int *)(a1 + 336) = v15; /*0x7bef36*/
    }
  }
  if ( v9 ) /*0x7bef4f*/
  {
    if ( (a3->u8_4 & 2) != 0 && (*(unsigned char *)(v14 + 64) & 4) == 0 && --result < *(unsigned int *)(a1 + 296) ) /*0x7bef6a*/
      result = v22; /*0x7bef6c*/
    v17 = *(unsigned int *)(a1 + 312); /*0x7bef70*/
    if ( v17 != -1 ) /*0x7bef7b*/
    {
      v18 = *(unsigned int *)(a1 + 316); /*0x7bef7d*/
      *(unsigned int *)(a1 + 316) = -1; /*0x7bef83*/
      *(unsigned int *)(a1 + 296) = v18; /*0x7bef89*/
      *(unsigned int *)(a1 + 300) = v17; /*0x7bef8f*/
      *(unsigned int *)(a1 + 312) = -1; /*0x7bef95*/
    }
    v19 = *(unsigned int *)(a1 + 336); /*0x7bef9b*/
    if ( (v19 & 0x100) == 0 ) /*0x7befa4*/
    {
      *(unsigned int *)(a1 + 324) = *(unsigned int *)(a1 + 296); /*0x7befac*/
      *(unsigned int *)(a1 + 320) = *(unsigned int *)(a1 + 300); /*0x7befb8*/
    }
    *(unsigned int *)(a1 + 336) = v19 & 0xFFFFFE7F; /*0x7befc4*/
  }
  return result; /*0x7befca*/
}
}
// 0x7C0530
namespace gamemd {
int Audio_Process_7C0530(int a1, int edx0, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int *v8; // ecx
  int v9; // eax
  int v10; // edx
  unsigned int *v11; // ecx
  int v12; // ecx
  int result; // eax
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]

  v4 = -1; /*0x7c0539*/
  v5 = *(unsigned int *)(a1 + 368); /*0x7c053c*/
  v16 = -1; /*0x7c0542*/
  v17 = v5; /*0x7c0546*/
  if ( edx0 > *(unsigned int *)(a1 + 284) ) /*0x7c0552*/
    return -6; /*0x7c0552*/
  v6 = *(unsigned int *)(a1 + 1892); /*0x7c0558*/
  if ( !v6 ) /*0x7c0562*/
    return -6; /*0x7c069d*/
  if ( *(unsigned int *)(a1 + 1888) ) /*0x7c0568*/
  {
    Audio_Process_7C06B0(a1, edx0, &v14, 0); /*0x7c0578*/
    if ( a3 ) /*0x7c0581*/
    {
      v4 = v14; /*0x7c060b*/
    }
    else
    {
      Audio_Process_7C06B0(a1, *(unsigned int *)(a1 + 388), &v15, 0); /*0x7c0595*/
      v4 = v14; /*0x7c059a*/
      if ( v14 == v15 ) /*0x7c05a2*/
        return v16; /*0x7c0697*/
    }
  }
  else
  {
    v14 = -1; /*0x7c05ac*/
    v7 = edx0; /*0x7c05b0*/
    if ( edx0 >= 0 ) /*0x7c05b2*/
    {
      v8 = (unsigned int *)(v6 + 4 * edx0); /*0x7c05b4*/
      while ( (*v8 & 0x40000000) == 0 ) /*0x7c05bd*/
      {
        --v7; /*0x7c05bf*/
        --v8; /*0x7c05c0*/
        if ( v7 < 0 ) /*0x7c05c5*/
          goto LABEL_13; /*0x7c05c5*/
      }
      v4 = v7; /*0x7c05c9*/
      v14 = v7; /*0x7c05cb*/
    }
  LABEL_13:
    if ( !a3 ) /*0x7c05d3*/
    {
      v9 = *(unsigned int *)(a1 + 388); /*0x7c05d5*/
      v10 = -1; /*0x7c05db*/
      v15 = -1; /*0x7c05e0*/
      if ( v9 >= 0 ) /*0x7c05e4*/
      {
        v11 = (unsigned int *)(v6 + 4 * v9); /*0x7c05e6*/
        while ( (*v11 & 0x40000000) == 0 ) /*0x7c05ef*/
        {
          --v9; /*0x7c05f1*/
          --v11; /*0x7c05f2*/
          if ( v9 < 0 ) /*0x7c05f7*/
            goto LABEL_20; /*0x7c05f7*/
        }
        v10 = v9; /*0x7c05fb*/
        v15 = v9; /*0x7c05fd*/
      }
  LABEL_20:
      if ( v4 == v10 ) /*0x7c0603*/
        return v16; /*0x7c0603*/
    }
  }
  if ( v4 < 0 ) /*0x7c0611*/
    return v16; /*0x7c0611*/
  if ( (*(int (**)(int, int, unsigned int, int))(a1 + 64))( /*0x7c0629*/
         a1,
         7,
         0,
         2 * (*(unsigned int *)(*(unsigned int *)(a1 + 1892) + 4 * v4) & 0xFFFFFFF)) )
  {
    return -6; /*0x7c0684*/
  }
  if ( a3 ) /*0x7c0637*/
  {
    v12 = v17; /*0x7c0639*/
    *(unsigned int *)(a1 + 372) = 0; /*0x7c063d*/
    *(unsigned int *)(a1 + 376) = 0; /*0x7c0643*/
    *(unsigned int *)(a1 + 360) = *(unsigned int *)(a1 + 1772); /*0x7c064f*/
    *(unsigned int *)(a1 + 356) = *(unsigned int *)(a1 + 1772); /*0x7c065b*/
    *(unsigned int *)(a1 + 384) = 0; /*0x7c0661*/
    *(unsigned int *)(v12 + 20) = 0; /*0x7c0667*/
  }
  result = FillAudioStreamBuffer(a1, 30); /*0x7c0671*/
  v16 = result; /*0x7c0676*/
  return result; /*0x7c067a*/
}
}
// 0x7C06B0
namespace gamemd {
void Audio_Process_7C06B0(DSurface * aP0, int edx0, unsigned int * a2, unsigned int * a3)
{
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int result; // eax
  uint16_t *v8; // ebx

  v4 = *(unsigned int *)(aP0 + 1888); /*0x7c06b2*/
  v5 = *(uint16_t *)(aP0 + 1880); /*0x7c06bd*/
  v6 = 1; /*0x7c06c4*/
  result = 0; /*0x7c06c9*/
  if ( (uint16_t)v5 <= 1u ) /*0x7c06d1*/
  {
  LABEL_7:
    result = v5 - 1; /*0x7c06f6*/
  }
  else
  {
    v8 = (uint16_t *)(v4 + 2); /*0x7c06d3*/
    while ( edx0 < *(v8 - 1) || edx0 >= *v8 ) /*0x7c06e7*/
    {
      ++result; /*0x7c06e9*/
      ++v6; /*0x7c06ea*/
      ++v8; /*0x7c06eb*/
      if ( v6 >= v5 ) /*0x7c06f0*/
      {
        v4 = *(unsigned int *)(aP0 + 1888); /*0x7c06f2*/
        goto LABEL_7; /*0x7c06f2*/
      }
    }
    v4 = *(unsigned int *)(aP0 + 1888); /*0x7c06fb*/
  }
  if ( a2 ) /*0x7c0705*/
    *a2 = *(uint16_t *)(v4 + 2 * result); /*0x7c070d*/
  if ( a3 ) /*0x7c0715*/
  {
    if ( result >= v5 - 1 ) /*0x7c071a*/
      *a3 = *(unsigned int *)(aP0 + 16); /*0x7c0731*/
    else
      *a3 = *(uint16_t *)(v4 + 2 * result + 2) - 1; /*0x7c0727*/
  }
  return result; /*0x7c071e*/
}
}
// 0x7C19F0
namespace gamemd {
void Audio_Process_7C19F0(int a1, DSurface * aP1, unsigned int * a2, unsigned int * a3)
{
  int v4; // ebx
  int result; // eax
  int v6; // esi
  int v7; // ecx
  uint16_t *v8; // edi
  int v9; // ecx
  int v10; // edx

  v4 = *(unsigned int *)(a1 + 1876); /*0x7c19f1*/
  result = 0; /*0x7c19fb*/
  v6 = *(uint16_t *)(a1 + 1868); /*0x7c19fd*/
  v7 = 1; /*0x7c1a04*/
  if ( (uint16_t)v6 <= 1u ) /*0x7c1a0c*/
  {
  LABEL_6:
    result = v6 - 1; /*0x7c1a2d*/
  }
  else
  {
    v8 = (uint16_t *)(v4 + 6); /*0x7c1a0e*/
    while ( aP1 < *(v8 - 3) || aP1 >= *v8 ) /*0x7c1a22*/
    {
      ++result; /*0x7c1a24*/
      ++v7; /*0x7c1a25*/
      v8 += 3; /*0x7c1a26*/
      if ( v7 >= v6 ) /*0x7c1a2b*/
        goto LABEL_6; /*0x7c1a2b*/
    }
  }
  if ( result ) /*0x7c1a32*/
  {
    v9 = result - 1; /*0x7c1a3a*/
    v10 = result; /*0x7c1a3d*/
  }
  else
  {
    v9 = 0; /*0x7c1a34*/
    v10 = 0; /*0x7c1a36*/
  }
  if ( a2 ) /*0x7c1a45*/
    *a2 = *(uint16_t *)(v4 + 6 * v9); /*0x7c1a50*/
  if ( a3 ) /*0x7c1a58*/
    *a3 = *(uint16_t *)(v4 + 6 * v10) - 1; /*0x7c1a64*/
  return result; /*0x7c1a66*/
}
}
// 0x7C3270
namespace gamemd {
BuildingTypeClass * * Audio_Process_7C3270(int a1, int a2, unsigned int a3, ObjectClass * aP3, int a5, int a6)
{
  int v6; // eax
  unsigned int v7; // esi
  int v8; // edi
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  int v13; // edi
  int v14; // eax
  char v15; // bl
  int v16; // eax

  v6 = *(unsigned int *)(a1 + 128); /*0x7c3271*/
  v7 = a3; /*0x7c327a*/
  v8 = v6 & 0x30; /*0x7c3285*/
  if ( !a3 ) /*0x7c328a*/
    IDA_LOWORD(v7) = *(unsigned short *)(a1 + 238); /*0x7c328c*/
  v9 = aP3; /*0x7c3293*/
  if ( !aP3 ) /*0x7c3299*/
  {
    IDA_LOWORD(v9) = *(unsigned short *)(a1 + 240); /*0x7c329b*/
    aP3 = (uint16_t)v9; /*0x7c32a2*/
  }
  v10 = a5; /*0x7c32a6*/
  v11 = a6; /*0x7c32aa*/
  if ( a5 >= 0 || a6 >= 0 ) /*0x7c32b8*/
  {
    if ( (v6 & 0x40) != 0 ) /*0x7c3366*/
    {
      v10 = a5 / 2; /*0x7c336f*/
      v9 = aP3; /*0x7c3376*/
      v11 = a6 / 2; /*0x7c337c*/
    }
    if ( v8 == 32 ) /*0x7c3381*/
    {
      *(unsigned int *)(a1 + 436) = v7 - v10; /*0x7c339a*/
    }
    else
    {
      *(unsigned int *)(a1 + 436) = v10; /*0x7c3386*/
      if ( v8 != 48 ) /*0x7c338c*/
      {
        *(unsigned int *)(a1 + 440) = v11; /*0x7c338e*/
        goto LABEL_22; /*0x7c3394*/
      }
    }
    v12 = v9 - v11; /*0x7c33a2*/
  LABEL_21:
    *(unsigned int *)(a1 + 440) = v12; /*0x7c33a4*/
    goto LABEL_22; /*0x7c33a4*/
  }
  if ( (v6 & 8) != 0 ) /*0x7c32c0*/
  {
    if ( (v6 & 0x40) != 0 ) /*0x7c32c4*/
    {
      *(unsigned int *)(a1 + 436) = *(uint16_t *)(a1 + 250) >> 1; /*0x7c32d1*/
      v12 = *(uint16_t *)(a1 + 252) >> 1; /*0x7c32e0*/
    }
    else
    {
      *(unsigned int *)(a1 + 436) = *(uint16_t *)(a1 + 250); /*0x7c32f0*/
      v12 = *(uint16_t *)(a1 + 252); /*0x7c32f8*/
    }
    goto LABEL_21; /*0x7c32e2*/
  }
  if ( (v6 & 0x40) != 0 ) /*0x7c3306*/
  {
    *(unsigned int *)(a1 + 436) = (v7 - (*(uint16_t *)(a1 + 238) >> 1)) >> 1; /*0x7c331b*/
    *(unsigned int *)(a1 + 440) = (v9 - (*(uint16_t *)(a1 + 240) >> 1)) >> 1; /*0x7c3330*/
  }
  else
  {
    *(unsigned int *)(a1 + 436) = (v7 - *(uint16_t *)(a1 + 238)) >> 1; /*0x7c3349*/
    *(unsigned int *)(a1 + 440) = (v9 - *(uint16_t *)(a1 + 240)) >> 1; /*0x7c335c*/
  }
  LABEL_22:
  v13 = *(unsigned int *)(a1 + 436); /*0x7c33aa*/
  if ( v13 < 0 ) /*0x7c33b2*/
    return -24; /*0x7c33b2*/
  v14 = *(unsigned int *)(a1 + 440); /*0x7c33b4*/
  if ( v14 < 0 || v13 >= v7 || v14 >= v9 ) /*0x7c33c4*/
    return -24; /*0x7c341e*/
  v15 = *(unsigned char *)(a1 + 264); /*0x7c33c6*/
  if ( v15 == 1 || v15 == 4 ) /*0x7c33d4*/
  {
    v13 *= 2; /*0x7c33d6*/
    v14 *= 2; /*0x7c33d8*/
  }
  *(unsigned int *)(a1 + 428) = v7; /*0x7c33df*/
  *(unsigned int *)(a1 + 444) = v13 + v7 * v14; /*0x7c33e5*/
  *(unsigned int *)(a1 + 432) = v9; /*0x7c33f1*/
  if ( a2 ) /*0x7c33f7*/
  {
    *(unsigned int *)(a1 + 424) = a2; /*0x7c33f9*/
    *(unsigned int *)(a1 + 8) = a2; /*0x7c33ff*/
  }
  v16 = *(unsigned int *)(a1 + 336); /*0x7c3402*/
  IDA_LOBYTE(v16) = v16 | 0x10; /*0x7c3409*/
  *(unsigned int *)(a1 + 336) = v16; /*0x7c340c*/
  return -1; /*0x7c3408*/
}
}
// 0x7DF7C0
namespace gamemd {
int sub_7DF7C0(int * a1)
{
  int v1; // ebp
  int v2; // edx
  int v3; // ecx
  int *v4; // edi
  int v5; // eax
  int v6; // ebx
  unsigned short *v7; // edi
  int *v8; // ebp
  int v9; // ebx
  int v10; // edi
  int result; // eax
  unsigned char *v12; // edi
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // ebx
  int v16; // eax
  unsigned char *v17; // edi
  char *i; // edi
  unsigned int v19; // eax
  char v20; // dl
  int *v21; // [esp-14h] [ebp-2Ch]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp+Ch] [ebp-Ch]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v1 = *((int16_t *)a1 + 21); /*0x7df7cf*/
  v2 = *((int16_t *)a1 + 22); /*0x7df7d3*/
  v3 = *((uint8_t *)a1 + 50); /*0x7df7d9*/
  v4 = g_VoxelOffsetTable; /*0x7df7dc*/
  v5 = 0; /*0x7df7e1*/
  v6 = 0; /*0x7df7e3*/
  do /*0x7df7fb*/
  {
    *(unsigned short *)v4 = v5; /*0x7df7ea*/
    v7 = (unsigned short *)v4 + 1; /*0x7df7ed*/
    v5 += v1; /*0x7df7f0*/
    *v7 = v6; /*0x7df7f2*/
    v4 = (int *)(v7 + 1); /*0x7df7f5*/
    v6 += v2; /*0x7df7f8*/
    --v3; /*0x7df7fa*/
  }
  while ( v3 ); /*0x7df7fb*/
  v8 = &savedregs; /*0x7df7fd*/
  v23 = a1[6]; /*0x7df806*/
  IDA_BYTE1(v3) = *((unsigned char *)a1 + 49); /*0x7df809*/
  do /*0x7df851*/
  {
    *(v8 - 1) = a1[3]; /*0x7df80f*/
    *(v8 - 2) = *(v8 - 3); /*0x7df815*/
    IDA_LOBYTE(v3) = *((unsigned char *)a1 + 48); /*0x7df818*/
    do /*0x7df83b*/
    {
      a1[6] = *(v8 - 3); /*0x7df81e*/
      v9 = *a1; /*0x7df826*/
      v10 = *(unsigned int *)(*a1 + 4 * a1[3]); /*0x7df828*/
      if ( v10 >= 0 ) /*0x7df82b*/
      {
        v22 = v3; /*0x7df861*/
        v21 = v8; /*0x7df862*/
        v12 = (unsigned char *)(a1[2] + v10); /*0x7df865*/
        v13 = *((uint8_t *)a1 + 50); /*0x7df868*/
        IDA_LOWORD(v9) = *((unsigned short *)a1 + 13); /*0x7df86b*/
        v15 = v9 << 16; /*0x7df86f*/
        v14 = *(int *)((char *)a1 + 42); /*0x7df872*/
        IDA_LOWORD(v15) = *((unsigned short *)a1 + 12); /*0x7df875*/
        while ( 1 ) /*0x7df879*/
        {
          v16 = 0; /*0x7df879*/
          if ( !v13 ) /*0x7df87e*/
            break; /*0x7df87e*/
          IDA_LOBYTE(v16) = *v12; /*0x7df880*/
          v17 = v12 + 1; /*0x7df882*/
          IDA_LOBYTE(v13) = v13 - v16; /*0x7df883*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7df885*/
          IDA_BYTE1(v13) = *v17; /*0x7df88c*/
          for ( i = v17 + 1; IDA_BYTE1(v13); g_VoxelRenderBuffer[v19] = v20 ) /*0x7df891*/
          {
            IDA_LOBYTE(v13) = v13 - 1; /*0x7df895*/
            v19 = IDA_HIWORD(v15); /*0x7df897*/
            v20 = *i; /*0x7df89a*/
            IDA_LOBYTE(v19) = IDA_BYTE1(v15); /*0x7df89c*/
            i += 2; /*0x7df89e*/
            v15 += v14; /*0x7df8a1*/
            --IDA_BYTE1(v13); /*0x7df8a3*/
          }
          v12 = i + 1; /*0x7df8ad*/
        }
        v8 = v21; /*0x7df8b0*/
        v3 = v22; /*0x7df8b1*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7df830*/
      a1[3] += a1[4]; /*0x7df836*/
      IDA_LOBYTE(v3) = v3 - 1; /*0x7df839*/
    }
    while ( (unsigned char)v3 ); /*0x7df83b*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7df843*/
    result = a1[5] + *(v8 - 1); /*0x7df849*/
    a1[3] = result; /*0x7df84c*/
    --IDA_BYTE1(v3); /*0x7df84f*/
  }
  while ( IDA_BYTE1(v3) ); /*0x7df851*/
  return result; /*0x7df855*/
}
}
// 0x7DF8C0
namespace gamemd {
int sub_7DF8C0(int a1)
{
  int v1; // ebp
  int v2; // edx
  int v3; // ecx
  int *v4; // edi
  int v5; // eax
  int v6; // ebx
  unsigned short *v7; // edi
  int *v8; // ebp
  int v9; // ebx
  int v10; // edi
  int result; // eax
  uint8_t *v12; // edi
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // ebx
  uint8_t *i; // edi
  char *v17; // edi
  unsigned int v18; // eax
  char v19; // dl
  uint8_t *v20; // edi
  int v21; // eax
  int *v22; // [esp-14h] [ebp-2Ch]
  int v23; // [esp-10h] [ebp-28h]
  int v24; // [esp+Ch] [ebp-Ch]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v1 = *(int16_t *)(a1 + 42); /*0x7df8cf*/
  v2 = *(int16_t *)(a1 + 44); /*0x7df8d3*/
  v3 = *(uint8_t *)(a1 + 50); /*0x7df8d9*/
  v4 = g_VoxelOffsetTable; /*0x7df8dc*/
  v5 = 0; /*0x7df8e1*/
  v6 = 0; /*0x7df8e3*/
  do /*0x7df8fb*/
  {
    *(unsigned short *)v4 = v5; /*0x7df8ea*/
    v7 = (unsigned short *)v4 + 1; /*0x7df8ed*/
    v5 += v1; /*0x7df8f0*/
    *v7 = v6; /*0x7df8f2*/
    v4 = (int *)(v7 + 1); /*0x7df8f5*/
    v6 += v2; /*0x7df8f8*/
    --v3; /*0x7df8fa*/
  }
  while ( v3 ); /*0x7df8fb*/
  v8 = &savedregs; /*0x7df8fd*/
  v24 = *(unsigned int *)(a1 + 24); /*0x7df906*/
  IDA_BYTE1(v3) = *(unsigned char *)(a1 + 49); /*0x7df909*/
  do /*0x7df952*/
  {
    *(v8 - 1) = *(unsigned int *)(a1 + 12); /*0x7df90f*/
    *(v8 - 2) = *(v8 - 3); /*0x7df915*/
    IDA_LOBYTE(v3) = *(unsigned char *)(a1 + 48); /*0x7df918*/
    do /*0x7df93c*/
    {
      *(unsigned int *)(a1 + 24) = *(v8 - 3); /*0x7df91e*/
      v9 = *(unsigned int *)(a1 + 4); /*0x7df926*/
      v10 = *(unsigned int *)(v9 + 4 * *(unsigned int *)(a1 + 12)); /*0x7df929*/
      if ( v10 >= 0 ) /*0x7df92c*/
      {
        v23 = v3; /*0x7df961*/
        v22 = v8; /*0x7df962*/
        v12 = (uint8_t *)(*(unsigned int *)(a1 + 8) + v10); /*0x7df965*/
        v13 = *(uint8_t *)(a1 + 50); /*0x7df968*/
        IDA_LOWORD(v9) = *(unsigned short *)(a1 + 26); /*0x7df96b*/
        v15 = v9 << 16; /*0x7df96f*/
        v14 = *(unsigned int *)(a1 + 42); /*0x7df972*/
        IDA_LOWORD(v15) = *(unsigned short *)(a1 + 24); /*0x7df975*/
        while ( v13 ) /*0x7df97c*/
        {
          IDA_BYTE1(v13) = *v12; /*0x7df97e*/
          for ( i = v12 - 1; IDA_BYTE1(v13); g_VoxelRenderBuffer[v18] = v19 ) /*0x7df983*/
          {
            IDA_LOBYTE(v13) = v13 - 1; /*0x7df987*/
            v17 = (char *)(i - 1); /*0x7df989*/
            v18 = IDA_HIWORD(v15); /*0x7df98a*/
            v19 = *v17; /*0x7df98d*/
            IDA_LOBYTE(v18) = IDA_BYTE1(v15); /*0x7df98f*/
            i = (uint8_t *)(v17 - 1); /*0x7df991*/
            v15 += v14; /*0x7df992*/
            --IDA_BYTE1(v13); /*0x7df994*/
          }
          v20 = i - 1; /*0x7df99e*/
          v21 = *v20; /*0x7df9a1*/
          v12 = v20 - 1; /*0x7df9a3*/
          IDA_LOBYTE(v13) = v13 - v21; /*0x7df9a4*/
          v15 += g_VoxelOffsetTable[v21]; /*0x7df9a6*/
        }
        v8 = v22; /*0x7df9af*/
        v3 = v23; /*0x7df9b0*/
      }
      *(v8 - 3) += *(unsigned int *)(a1 + 30); /*0x7df931*/
      *(unsigned int *)(a1 + 12) += *(unsigned int *)(a1 + 16); /*0x7df937*/
      IDA_LOBYTE(v3) = v3 - 1; /*0x7df93a*/
    }
    while ( (unsigned char)v3 ); /*0x7df93c*/
    *(v8 - 3) = *(unsigned int *)(a1 + 36) + *(v8 - 2); /*0x7df944*/
    result = *(unsigned int *)(a1 + 20) + *(v8 - 1); /*0x7df94a*/
    *(unsigned int *)(a1 + 12) = result; /*0x7df94d*/
    --IDA_BYTE1(v3); /*0x7df950*/
  }
  while ( IDA_BYTE1(v3) ); /*0x7df952*/
  return result; /*0x7df956*/
}
}
// 0x7DFD00
namespace gamemd {
int sub_7DFD00(int a1)
{
  int v1; // ebp
  int v2; // edx
  int v3; // ecx
  int *v4; // edi
  int v5; // eax
  int v6; // ebx
  unsigned short *v7; // edi
  int *v8; // ebp
  int v9; // ebx
  int v10; // edi
  int result; // eax
  uint8_t *v12; // edi
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // ebx
  char *i; // edi
  unsigned int v17; // eax
  char v18; // dl
  char *v19; // edi
  int v20; // eax
  int *v21; // [esp-14h] [ebp-2Ch]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp+Ch] [ebp-Ch]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v1 = *(int16_t *)(a1 + 42); /*0x7dfd0f*/
  v2 = *(int16_t *)(a1 + 44); /*0x7dfd13*/
  v3 = 255; /*0x7dfd17*/
  IDA_LOBYTE(v3) = -1 - *(unsigned char *)(a1 + 50); /*0x7dfd1c*/
  v4 = g_VoxelOffsetTable; /*0x7dfd1f*/
  v5 = 0; /*0x7dfd24*/
  v6 = 0; /*0x7dfd26*/
  do /*0x7dfd3e*/
  {
    *(unsigned short *)v4 = v5; /*0x7dfd2d*/
    v7 = (unsigned short *)v4 + 1; /*0x7dfd30*/
    v5 += v1; /*0x7dfd33*/
    *v7 = v6; /*0x7dfd35*/
    v4 = (int *)(v7 + 1); /*0x7dfd38*/
    v6 += v2; /*0x7dfd3b*/
    --v3; /*0x7dfd3d*/
  }
  while ( v3 ); /*0x7dfd3e*/
  v8 = &savedregs; /*0x7dfd40*/
  v23 = *(unsigned int *)(a1 + 24); /*0x7dfd49*/
  IDA_BYTE1(v3) = *(unsigned char *)(a1 + 49); /*0x7dfd4c*/
  do /*0x7dfd95*/
  {
    *(v8 - 1) = *(unsigned int *)(a1 + 12); /*0x7dfd52*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfd58*/
    IDA_LOBYTE(v3) = *(unsigned char *)(a1 + 48); /*0x7dfd5b*/
    do /*0x7dfd7f*/
    {
      *(unsigned int *)(a1 + 24) = *(v8 - 3); /*0x7dfd61*/
      v9 = *(unsigned int *)(a1 + 4); /*0x7dfd69*/
      v10 = *(unsigned int *)(v9 + 4 * *(unsigned int *)(a1 + 12)); /*0x7dfd6c*/
      if ( v10 >= 0 ) /*0x7dfd6f*/
      {
        v22 = v3; /*0x7dfda1*/
        v21 = v8; /*0x7dfda2*/
        v12 = (uint8_t *)(*(unsigned int *)(a1 + 8) + v10); /*0x7dfda5*/
        v13 = *(uint8_t *)(a1 + 50); /*0x7dfda8*/
        IDA_LOWORD(v9) = *(unsigned short *)(a1 + 26); /*0x7dfdab*/
        v15 = v9 << 16; /*0x7dfdaf*/
        v14 = *(unsigned int *)(a1 + 42); /*0x7dfdb2*/
        IDA_LOWORD(v15) = *(unsigned short *)(a1 + 24); /*0x7dfdb5*/
        while ( v13 ) /*0x7dfdbc*/
        {
          IDA_BYTE1(v13) = *v12; /*0x7dfdbe*/
          for ( i = (char *)(v12 - 1); IDA_BYTE1(v13); g_VoxelRenderBuffer[v17] = v18 ) /*0x7dfdc3*/
          {
            IDA_LOBYTE(v13) = v13 - 1; /*0x7dfdc7*/
            v17 = IDA_HIWORD(v15); /*0x7dfdc9*/
            v18 = *i; /*0x7dfdcc*/
            IDA_LOBYTE(v17) = IDA_BYTE1(v15); /*0x7dfdce*/
            --i; /*0x7dfdd0*/
            v15 += v14; /*0x7dfdd1*/
            --IDA_BYTE1(v13); /*0x7dfdd3*/
          }
          v19 = i - 1; /*0x7dfddd*/
          v20 = (uint8_t)*v19; /*0x7dfde0*/
          v12 = (uint8_t *)(v19 - 1); /*0x7dfde2*/
          IDA_LOBYTE(v13) = v13 - v20; /*0x7dfde3*/
          v15 += g_VoxelOffsetTable[v20]; /*0x7dfde5*/
        }
        v8 = v21; /*0x7dfdee*/
        v3 = v22; /*0x7dfdef*/
      }
      *(v8 - 3) += *(unsigned int *)(a1 + 30); /*0x7dfd74*/
      *(unsigned int *)(a1 + 12) += *(unsigned int *)(a1 + 16); /*0x7dfd7a*/
      IDA_LOBYTE(v3) = v3 - 1; /*0x7dfd7d*/
    }
    while ( (unsigned char)v3 ); /*0x7dfd7f*/
    *(v8 - 3) = *(unsigned int *)(a1 + 36) + *(v8 - 2); /*0x7dfd87*/
    result = *(unsigned int *)(a1 + 20) + *(v8 - 1); /*0x7dfd8d*/
    *(unsigned int *)(a1 + 12) = result; /*0x7dfd90*/
    --IDA_BYTE1(v3); /*0x7dfd93*/
  }
  while ( IDA_BYTE1(v3) ); /*0x7dfd95*/
  return result; /*0x7dfd99*/
}
}
// 0x6C6D00
namespace gamemd {
AbstractClass * * sub_6C6D00()
{
  char *v1; // ecx
  int v2; // ebx
  char *v3; // eax
  char *vtable2; // esi
  void *v5; // ebp
  char v6; // dl
  unsigned int v7; // ecx

  v1 = 0; /*0x6c6d08*/
  if ( g_SidebarButtonState.AbstractClass ) /*0x6c6d0c*/
  {
    if ( (int)g_SidebarButtonState.AbstractClass <= 0 ) /*0x6c6d12*/
      v1 = (char *)g_SidebarButtonState.AbstractClass - 1; /*0x6c6d14*/
    memcpy( /*0x6c6d45*/
      (char *)((char *)&g_SidebarButtonState) + 32776 * (unsigned int)v1,
      (char *)((char *)&g_SidebarButtonState) + 32776 * (unsigned int)(v1 + 1),
      32776 * (int)g_SidebarButtonState.AbstractClass - 32776 * (unsigned int)(v1 + 1));
    if ( 3 * (int)--g_SidebarButtonState.AbstractClass <= (int)((char *)&g_SidebarButtonState) ) /*0x6c6d63*/
    {
      v2 = (int)((char *)&g_SidebarButtonState) / 2; /*0x6c6d6c*/
      if ( (int)((char *)&g_SidebarButtonState) / 2 < 10 ) /*0x6c6d71*/
        v2 = 10; /*0x6c6d73*/
      if ( v2 < (int)((char *)&g_SidebarButtonState) ) /*0x6c6d7a*/
      {
        v3 = (char *)RA2_OPNEW(32776 * v2); /*0x6c6d88*/
        vtable2 = (char *)((char *)&g_SidebarButtonState); /*0x6c6d8d*/
        v5 = v3; /*0x6c6d98*/
        if ( ((char *)&g_SidebarButtonState) ) /*0x6c6d9a*/
        {
          v6 = 8 * IDA_LOBYTE(g_SidebarButtonState.AbstractClass); /*0x6c6dae*/
          v7 = (unsigned int)(32776 * (int)g_SidebarButtonState.AbstractClass) >> 2; /*0x6c6db0*/
          qmemcpy(v3, ((char *)&g_SidebarButtonState), 4 * v7); /*0x6c6db3*/
          qmemcpy(&v3[4 * v7], &vtable2[4 * v7], v6 & 3); /*0x6c6dba*/
          vtable2 = (char *)((char *)&g_SidebarButtonState); /*0x6c6dbc*/
        }
        RA2_OPDEL(vtable2); /*0x6c6dc4*/
        ((unsigned int *)&g_SidebarButtonState)[0] = v5; /*0x6c6dcc*/
        ((unsigned int *)&g_SidebarButtonState)[0] = (void *)v2; /*0x6c6dd2*/
      }
    }
  }
}
}
// 0x6C6DE0
namespace gamemd {
AbstractClass * * sub_6C6DE0()
{
  int vtable0; // edx
  char *vtable2; // ebx
  int v3; // ecx
  char *v4; // eax
  char *v5; // edi
  unsigned char v6[32776]; // [esp+14h] [ebp-8008h] BYREF

  vtable0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6dea*/
  *(unsigned int *)v6 = 0; /*0x6c6df8*/
  *(unsigned int *)&v6[4] = 0; /*0x6c6dfc*/
  if ( g_SidebarButtonState.AbstractClass ) /*0x6c6e00*/
  {
    if ( (int)g_SidebarButtonState.AbstractClass > 0 ) /*0x6c6e06*/
    {
      Audio_Read_6C6B00((ObjectClass *)v6, (unsigned int *)((char *)&g_SidebarButtonState)); /*0x6c6e12*/
      vtable0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6e17*/
    }
  LABEL_4:
    vtable2 = (char *)((char *)&g_SidebarButtonState); /*0x6c6e1d*/
    while ( *(int *)&v6[4] < 1 || *(int *)v6 > 10 ) /*0x6c6e31*/
    {
      v3 = 0; /*0x6c6e37*/
      if ( !vtable0 ) /*0x6c6e3b*/
        return; /*0x6c6e3b*/
      if ( vtable0 <= 0 ) /*0x6c6e41*/
        v3 = vtable0 - 1; /*0x6c6e43*/
      memcpy(&vtable2[32776 * v3], &vtable2[32776 * v3 + 32776], 32776 * vtable0 - 32776 * (v3 + 1)); /*0x6c6e6e*/
      vtable0 = (int)g_SidebarButtonState.AbstractClass - 1; /*0x6c6e81*/
      g_SidebarButtonState.AbstractClass = (void *)vtable0; /*0x6c6e82*/
      if ( 3 * vtable0 <= (int)((char *)&g_SidebarButtonState) ) /*0x6c6e8d*/
      {
        Audio_Read_6C8870(&g_SidebarButtonState); /*0x6c6e94*/
        vtable0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6e99*/
      }
      if ( !vtable0 ) /*0x6c6ea1*/
        return; /*0x6c6ea1*/
      if ( vtable0 <= 0 ) /*0x6c6ea7*/
        goto LABEL_4; /*0x6c6ea7*/
      vtable2 = (char *)((char *)&g_SidebarButtonState); /*0x6c6ead*/
      *(unsigned int *)v6 = *(unsigned int *)((char *)&g_SidebarButtonState); /*0x6c6eb5*/
      *(unsigned int *)&v6[4] = *((unsigned int *)((char *)&g_SidebarButtonState) + 1); /*0x6c6ec2*/
      if ( *(int *)&v6[4] <= 0x8000 ) /*0x6c6ec6*/
        qmemcpy(&v6[8], (char *)((char *)&g_SidebarButtonState) + 8, *(unsigned int *)&v6[4]); /*0x6c6edd*/
      else
        *(unsigned int *)&v6[4] = 0; /*0x6c6ec8*/
    }
    if ( g_UIPointerTable ) /*0x6c6ef2*/
    {
      (*(void (**)(LPVOID, int *, int, unsigned char *, unsigned int))(*(unsigned int *)g_UIPointerTable + 12))( /*0x6c6f09*/
        g_UIPointerTable,
        &g_WOL_UserList.customSound_controller[2],
        dword_B76184,
        &v6[8],
        *(unsigned int *)&v6[4]);
      v4 = 0; /*0x6c6f17*/
      ++*(unsigned int *)v6; /*0x6c6f1b*/
      if ( g_SidebarButtonState.AbstractClass ) /*0x6c6f1f*/
      {
        if ( (int)g_SidebarButtonState.AbstractClass <= 0 ) /*0x6c6f21*/
          v4 = (char *)g_SidebarButtonState.AbstractClass - 1; /*0x6c6f23*/
        v5 = (char *)((char *)&g_SidebarButtonState) + 32776 * (unsigned int)v4; /*0x6c6f32*/
        if ( v5 ) /*0x6c6f37*/
          qmemcpy(v5, v6, 0x8008u); /*0x6c6f42*/
      }
    }
  }
}
}
// 0x7C2410
namespace gamemd {
int sub_7C2410(int a1, int a2)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  int v7; // esi
  int v9; // eax
  unsigned int i; // ecx
  int v11; // esi
  int v12; // eax

  v3 = a2 + 1; /*0x7c2418*/
  IDA_LOBYTE(v3) = (a2 + 1) & 0xFE; /*0x7c2421*/
  if ( (*(unsigned char *)(a1 + 132) & 1) != 0 && (v4 = *(unsigned int *)(a1 + 1932)) != 0 ) /*0x7c2434*/
  {
    v5 = *(unsigned int *)(a1 + 1972); /*0x7c2441*/
    v6 = a2 * (*(uint8_t *)(a1 + 63) >> 2); /*0x7c244a*/
    if ( v6 <= v5 || *(unsigned int *)(a1 + 1936) ) /*0x7c2455*/
    {
      v11 = v5 + *(unsigned int *)(a1 + 1960) - v3; /*0x7c2521*/
      if ( (*(int (**)(int, int, int, int))(a1 + 64))(a1, 5, v11, v3) ) /*0x7c2527*/
      {
        return -4; /*0x7c2534*/
      }
      else
      {
        Render::DrawTileBitmap( /*0x7c2557*/
          v11,
          *(unsigned short **)(a1 + 1960),
          *(uint8_t *)(a1 + 63),
          *(uint8_t *)(a1 + 62),
          v6,
          a1 + 2000);
        *(unsigned int *)(a1 + 1968) = v6; /*0x7c255f*/
        return -1; /*0x7c2565*/
      }
    }
    else
    {
      v7 = v4 + *(unsigned int *)(a1 + 152) - v3; /*0x7c246c*/
      if ( (*(int (**)(int, int, int, int))(a1 + 64))(a1, 5, v7, v3) ) /*0x7c2472*/
      {
        return -4; /*0x7c247f*/
      }
      else
      {
        Render::DrawTileBitmap( /*0x7c24a2*/
          v7,
          *(unsigned short **)(a1 + 1932),
          *(uint8_t *)(a1 + 63),
          *(uint8_t *)(a1 + 62),
          v6,
          a1 + 2000);
        v9 = *(unsigned int *)(a1 + 1964); /*0x7c24a7*/
        if ( v9 ) /*0x7c24b2*/
        {
          v6 -= v9; /*0x7c24ba*/
          qmemcpy(*(void **)(a1 + 1932), (const void *)(v9 + *(unsigned int *)(a1 + 1932)), v6); /*0x7c24c6*/
          *(unsigned int *)(a1 + 1964) = 0; /*0x7c24cf*/
        }
        *(unsigned int *)(a1 + 1936) += v6; /*0x7c24e5*/
        for ( i = 0; i < v6 / *(unsigned int *)(a1 + 156); ++i ) /*0x7c24ed*/
          *(unsigned char *)(i + *(unsigned int *)(a1 + 1940)) = 1; /*0x7c24ff*/
        return -1; /*0x7c2513*/
      }
    }
  }
  else
  {
    v12 = -((*(int (**)(int, int, int, int))(a1 + 64))(a1, 7, 1, v3) != 0); /*0x7c257b*/
    IDA_LOBYTE(v12) = v12 & 0xFB; /*0x7c257e*/
    return v12 - 1; /*0x7c2582*/
  }
}
}
// 0x7C3860
namespace gamemd {
int sub_7C3860(int a1, int a2)
{
  int result; // eax
  uint16_t *v3; // ebp
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int v10; // esi
  int v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  result = 0; /*0x7c386d*/
  v11 = 0; /*0x7c3871*/
  if ( *(unsigned short *)(a1 + 1812) ) /*0x7c3864*/
  {
    v3 = *(uint16_t **)(a1 + 1820); /*0x7c387d*/
    v12 = *(uint16_t *)(a1 + 1812); /*0x7c3887*/
    while ( 1 ) /*0x7c3892*/
    {
      v4 = v3[1]; /*0x7c3892*/
      v5 = *v3; /*0x7c3896*/
      if ( (uint16_t)v4 != *(unsigned int *)(a1 + 16) - 1 ) /*0x7c389c*/
        break; /*0x7c389c*/
      if ( a2 <= 0 ) /*0x7c38ac*/
      {
        v6 = *(unsigned int *)(a1 + 1892); /*0x7c38c5*/
        v7 = *(unsigned int *)(v6 + 4 * v4); /*0x7c38cb*/
        goto LABEL_8; /*0x7c38cb*/
      }
      v8 = 2 * (*(unsigned int *)(*(unsigned int *)(a1 + 1892) + 4 * v5) & 0xFFFFFFF); /*0x7c38bf*/
      v9 = a2; /*0x7c38c1*/
  LABEL_9:
      v10 = v9 - v8; /*0x7c38e1*/
      if ( v10 > v11 ) /*0x7c38e9*/
        v11 = v10; /*0x7c38eb*/
      v3 += 2; /*0x7c38f3*/
      if ( !--v12 ) /*0x7c38fb*/
        return v11; /*0x7c38fd*/
    }
    v6 = *(unsigned int *)(a1 + 1892); /*0x7c389e*/
    v7 = *(unsigned int *)(v6 + 4 * v4 + 4); /*0x7c38a4*/
  LABEL_8:
    v9 = 2 * (v7 & 0xFFFFFFF); /*0x7c38ce*/
    v8 = 2 * (*(unsigned int *)(v6 + 4 * v5) & 0xFFFFFFF); /*0x7c38df*/
    goto LABEL_9; /*0x7c38df*/
  }
  return result; /*0x7c3904*/
}
}
// 0x401080
namespace gamemd {
int Audio::InitChannels(void *a1_1)
{

  ((void (*)(void))AudioMixer::PlaySample)(); /*0x401083*/
  AudioMixer::PlaySample((unsigned char *)this + 40); /*0x40108b*/
  return AudioMixer::PlaySample((unsigned char *)this + 80); /*0x401093*/

}
} // namespace gamemd

// 0x404DD0
namespace gamemd {
int Audio::FlushChannel(unsigned int ** Block)
{

  LinkedList::Init((LinkedList *)Block); /*0x404dd3*/
  *(unsigned int *)&Block->__pad_3C[252] = 0; /*0x404dd8*/
  if ( Block->__pad_18[0] >= 0 ) /*0x404de7*/
    PushFrontLinkedListAlt(dword_87E2A8, (int)Block); /*0x404e07*/
  else
    __3_YAXPAX_Z(Block); /*0x404dea*/
  return --dword_87E28C; /*0x404dfd*/

}
} // namespace gamemd

// 0x406D40
namespace gamemd {
void Audio::Shutdown(void *a1_1)
{

  ObjectClass *v1; // ebx
  int result; // eax
  AudioQueue *v3; // [esp+0h] [ebp-4h]

  if ( g_Audio_Enabled ) /*0x406d4b*/
    AudioQueue::StopAllVoices(v3); /*0x406d52*/
  AudioStream::CleanupChannels((AudioStream *)v3); /*0x406d57*/
  AudioQueue::HaltVoices(); /*0x406d5c*/
  Audio_Cleanup(); /*0x406d61*/
  Audio_Cleanup_752B40(); /*0x406d66*/
  sub_403FA0(v1); /*0x406d6b*/
  sub_407780(); /*0x406d70*/
  if ( g_AudioFileData ) /*0x406d7d*/
  {
    sub_401580(g_AudioFileData); /*0x406d7f*/
    g_AudioFileData = 0; /*0x406d84*/
  }
  if ( g_MixFile_AUDIO ) /*0x406d92*/
  {
    (**(void (***)(int, int))g_MixFile_AUDIO)(g_MixFile_AUDIO, 1); /*0x406d98*/
    g_MixFile_AUDIO = 0; /*0x406d9a*/
  }
  if ( g_MixFile_THEME ) /*0x406da8*/
  {
    (**(void (***)(int, int))g_MixFile_THEME)(g_MixFile_THEME, 1); /*0x406dae*/
    g_MixFile_THEME = 0; /*0x406db0*/
  }
  if ( g_Audio_Enabled ) /*0x406dbe*/
  {
    AudioStream::DestroyAll(g_Audio_Enabled); /*0x406dc0*/
    g_Audio_Enabled = 0; /*0x406dc5*/
  }
  sub_402990((ObjectClass *)this); /*0x406dcc*/
  return result; /*0x406dcb*/

}
} // namespace gamemd

// 0x407000
namespace gamemd {
BOOL Audio::IsSoundEnabled()
{

  return g_Audio_Enabled != 0; /*0x40700d*/

}
} // namespace gamemd

// 0x407010
namespace gamemd {
void * Audio::GetEnabled()
{

  return g_Audio_Enabled; /*0x407015*/

}
} // namespace gamemd

// 0x407070
namespace gamemd {
int Audio::GetFlag(void *a1_1)
{

  return RequestBufferMixer((unsigned int *)this, 0);

}
} // namespace gamemd

// 0x4093B0
namespace gamemd {
int Audio::Callback()
{

  if ( dword_87E848 ) /*0x4093b7*/
    return dword_87E848(); /*0x4093b9*/
  else
    return 0; /*0x4093bb*/

}
} // namespace gamemd

// 0x40A7A0
namespace gamemd {
LPDIRECTSOUND Audio::GetDirectSound()
{

  return (int)dword_87E89C; /*0x40a7a5*/

}
} // namespace gamemd

// 0x5EF240
namespace gamemd {
unsigned int sub_5EF240(int a1, int a2)
{
  unsigned int result; // eax
  int i; // edi
  int v4; // esi

  result = 0; /*0x5ef242*/
  for ( i = 0; i < a2; result = v4 + 2 * result ) /*0x5ef24a*/
  {
    v4 = *(uint8_t *)(i + a1) + (result >> 31); /*0x5ef257*/
    ++i; /*0x5ef259*/
  }
  return result; /*0x5ef262*/
}
} // namespace gamemd

// 0x752290
namespace gamemd {
int sub_752290()
{
  char *v0; // esi
  int result; // eax
  void *Enabled; // eax

  dword_B1D3D8 = 0; /*0x752291*/
  dword_B1D428 = 0; /*0x75229b*/
  v0 = stru_B1D450; /*0x7522a5*/
  do /*0x7522ba*/
  {
    DListNode::Init(v0); /*0x7522ac*/
    v0 += 12; /*0x7522b1*/
  }
  while ( (int)v0 < (int)&unk_B1D480 ); /*0x7522ba*/
  DListNode::Init(&stru_B1D3F0); /*0x7522c1*/
  DListNode::Init(&stru_B1D3C8); /*0x7522cb*/
  result = (int)g_InfantryDrawState; /*0x7522d0*/
  dword_B1D4B8 = 0; /*0x7522d5*/
  dword_B1D4BC = 1; /*0x7522e1*/
  if ( g_InfantryDrawState /*0x752307*/
    || (Enabled = Audio::GetEnabled(),
        result = (int)((AudioStream *)(Enabled))->Constructor(0xBB8u),
        (g_InfantryDrawState = (void *)result) != 0) )
  {
    SetAudioFileName(result, aEvaStream); /*0x752311*/
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice); /*0x752322*/
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient); /*0x752333*/
    return 1; /*0x752338*/
  }
  return result; /*0x752309*/
}
} // namespace gamemd

// 0x752340
namespace gamemd {
void sub_752340()
{
  ThemeClass::ClearQueues(); /*0x752340*/
  if ( g_InfantryDrawState ) /*0x75234d*/
  {
    ((Audio *)(g_InfantryDrawState))->Release(); /*0x75234f*/
    AudioSample::Destructor(g_InfantryDrawState); /*0x75235a*/
    g_InfantryDrawState = 0; /*0x75235f*/
  }
}
} // namespace gamemd

// 0x7529E0
namespace gamemd {
int Audio::IsPlaying()
{

  char *v0; // eax

  UpdateThemes(); /*0x7529e0*/
  if ( !g_InfantryDrawState ) /*0x7529ed*/
    return 0; /*0x752a2d*/
  if ( !((Audio *)(g_InfantryDrawState))->IsSoundPlaying() /*0x752a17*/
    &(void *)&dword_B1D3CC == &stru_B1D3C8
    &(void *)&dword_B1D3F4 == &stru_B1D3F0
    && !dword_B1D4B8 )
  {
    v0 = stru_B1D450; /*0x752a19*/
    while ( *((char **)v0 + 1) == v0 ) /*0x752a21*/
    {
      v0 += 12; /*0x752a23*/
      if ( (int)v0 >= (int)&unk_B1D480 ) /*0x752a2b*/
        return 0; /*0x752a2b*/
    }
  }
  return 1; /*0x752a2f*/

}
} // namespace gamemd

// 0x752AD0
namespace gamemd {
int sub_752AD0()
{
  int result; // eax
  void *Enabled; // eax

  result = (int)dword_B1D4D8; /*0x752ad0*/
  if ( dword_B1D4D8 /*0x752af2*/
    || (Enabled = Audio::GetEnabled(),
        result = (int)((AudioStream *)(Enabled))->Constructor(0xBB8u),
        (dword_B1D4D8 = (void *)result) != 0) )
  {
    SetAudioFileName(result, aTauntStream); /*0x752afc*/
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice); /*0x752b0d*/
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient); /*0x752b1e*/
    unk_B1D480 = 0; /*0x752b23*/
    return 1; /*0x752b2d*/
  }
  return result; /*0x752af4*/
}
} // namespace gamemd

// 0x752B40
namespace gamemd {
void sub_752B40()
{
  if ( dword_B1D4D8 ) /*0x752b48*/
  {
    ((Audio *)(dword_B1D4D8))->Release(); /*0x752b4a*/
    AudioSample::Destructor(dword_B1D4D8); /*0x752b55*/
    dword_B1D4D8 = 0; /*0x752b5a*/
  }
}
} // namespace gamemd

// 0x753D00
namespace gamemd {
char Audio_Render(unsigned int * a0, SomeVoxelCache * edx0, ObjectClass * aP2, float * a3, float * a4, float * a5, float a7)
{
  float *v9; // eax
  float *v10; // eax
  int Info; // eax
  float *v13; // [esp+0h] [ebp-D0h]
  float *v14; // [esp+0h] [ebp-D0h]
  int v15[3]; // [esp+10h] [ebp-C0h] BYREF
  float v16[3]; // [esp+1Ch] [ebp-B4h] BYREF
  float v17[3]; // [esp+28h] [ebp-A8h] BYREF
  int v18[3]; // [esp+34h] [ebp-9Ch] BYREF
  float v19[12]; // [esp+40h] [ebp-90h] BYREF
  float v20[12]; // [esp+70h] [ebp-60h] BYREF
  float v21[12]; // [esp+A0h] [ebp-30h] BYREF

  qmemcpy(v20, InvertMatrix3x3Signs(v21, a3), sizeof(v20)); /*0x753d33*/
  qmemcpy(v19, InvertMatrix3x3Signs(v21, a4), sizeof(v19)); /*0x753d53*/
  v9 = (float *)((Matrix3x3 *)(v15))->TransformPoint(a5, v13); /*0x753d5f*/
  v17[0] = *v9; /*0x753d66*/
  v17[1] = v9[1]; /*0x753d6d*/
  v17[2] = v9[2]; /*0x753d82*/
  v15[0] = 0; /*0x753d86*/
  v15[1] = 0; /*0x753d8e*/
  v15[2] = 1065353216; /*0x753d96*/
  v10 = (float *)((Matrix3x3 *)(v18))->TransformPoint((float *)v15, v14); /*0x753d9e*/
  v16[0] = *v10; /*0x753da5*/
  v16[1] = v10[1]; /*0x753dac*/
  v16[2] = v10[2]; /*0x753dbe*/
  Info = ((VoxelSection *)(a0))->GetInfo(edx0, aP2); /*0x753dc2*/
// 0x7586f0
  return VoxelAnim::ComputeTransform(v17, v16, a7, *(uint8_t *)(Info + 163)); /*0x753de7*/
}
} // namespace gamemd

// 0x764B30
namespace gamemd {
rc_ptr * Audio_Create(rc_ptr_base * a1, const char ** a2, int a3)
{
  char *v6; // eax
  char *v7; // edi

  if ( *(unsigned int *)(a3 + 4) ) /*0x764b37*/
  {
    v6 = (char *)RA2_OPNEW(0x4Cu); /*0x764b57*/
    if ( v6 ) /*0x764b61*/
      v7 = CampaignConstructorWDT(v6, a2, a3); /*0x764b6c*/
    else
      v7 = 0; /*0x764b70*/
    ((ComPtr *)((ComPtr *)a1))->Constructor(); /*0x764b74*/
    *(unsigned int *)a1 = (void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x764b7b*/
    ((ComPtr *)((ComPtr *)a1))->Set((int)v7); /*0x764b82*/
    return a1; /*0x764b87*/
  }
  else
  {
    ((ComPtr *)((ComPtr *)a1))->Constructor(); /*0x764b42*/
    *(unsigned int *)a1 = (void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x764b47*/
    return a1; /*0x764b4d*/
  }
}
} // namespace gamemd

// 0x76ABA0
namespace gamemd {
rc_ptr * Audio_Set(rc_ptr_base * a1, void * a2)
{
  char *v4; // eax
  char *WDT; // edi

  v4 = (char *)RA2_OPNEW(0x4Cu); /*0x76aba8*/
  if ( v4 ) /*0x76abb2*/
    WDT = File::LoadWDT(v4, a2); /*0x76abbc*/
  else
    WDT = 0; /*0x76abc0*/
  ((ComPtr *)((ComPtr *)a1))->Constructor(); /*0x76abc4*/
  *(unsigned int *)a1 = (void*)&rc_ptr_WDTState_vftable; /*0x76abcb*/
  ((ComPtr *)((ComPtr *)a1))->Set((int)WDT); /*0x76abd2*/
  return a1; /*0x76abd9*/
}
} // namespace gamemd

// 0x76BE90
namespace gamemd {
rc_ptr * Audio_Create_76BE90(rc_ptr_base * a1, int a2)
{
  char *v4; // eax
  char *_76BF00; // edi

  v4 = (char *)RA2_OPNEW(0x18u); /*0x76be98*/
  if ( v4 ) /*0x76bea2*/
    _76BF00 = Audio_Create_76BF00(v4, a2); /*0x76beac*/
  else
    _76BF00 = 0; /*0x76beb0*/
  ((ComPtr *)((ComPtr *)a1))->Constructor(); /*0x76beb4*/
  *(unsigned int *)a1 = (void*)&rc_ptr_WorldDominationTour_CampaignProperties_vftable; /*0x76bebb*/
  ((ComPtr *)((ComPtr *)a1))->Set((int)_76BF00); /*0x76bec2*/
  return a1; /*0x76bec9*/
}
} // namespace gamemd

// 0x7B84D0
namespace gamemd {
int sub_7B84D0()
{
  int result; // eax

  result = dword_B7816C; /*0x7b84d0*/
  if ( !dword_B7816C ) /*0x7b84d7*/
  {
    if ( dword_B78164 ) /*0x7b84e1*/
// 0x7ba090
      return WWMouseClass::UpdateCursorMovement((LONG *)dword_B78164); /*0x7b84e3*/
  }
  return result; /*0x7b84e8*/
}
} // namespace gamemd

// 0x7C04E0
namespace gamemd {
char sub_7C04E0(int a1, int a2)
{
  int v3; // eax
  uint16_t *v4; // esi
  int v5; // ecx

  if ( !a2 ) /*0x7c04e4*/
    return 1; /*0x7c04ea*/
  v3 = *(uint16_t *)(a1 + 1812); /*0x7c04ed*/
  if ( (unsigned short)v3 && (*(unsigned char *)(a1 + 1814) & 3) != 0 ) /*0x7c0503*/
  {
    v4 = *(uint16_t **)(a1 + 1820); /*0x7c0505*/
    v5 = 0; /*0x7c050b*/
    while ( a2 != *v4 ) /*0x7c0518*/
    {
      ++v5; /*0x7c051a*/
      v4 += 2; /*0x7c051b*/
      if ( v5 >= v3 ) /*0x7c0520*/
        return 0; /*0x7c0520*/
    }
    return 1; /*0x7c0518*/
  }
  return 0; /*0x7c04e6*/
}
} // namespace gamemd

// 0x7C1130
namespace gamemd {
int sub_7C1130(int a1, int a2)
{
  int v2; // eax

  v2 = -((*(int (**)(int, int, int, unsigned int))(a1 + 64))(a1, 5, a1 + 274, (a2 + 1) & 0xFFFFFFFE) != 0); /*0x7c1147*/
  IDA_LOBYTE(v2) = v2 & 0xFD; /*0x7c1149*/
  return v2 - 1; /*0x7c114c*/
}
} // namespace gamemd

// 0x7C1D40
namespace gamemd {
int sub_7C1D40(int a1, int a2)
{
  int v2; // eax

  v2 = *(unsigned int *)(a1 + 1892); /*0x7c1d40*/
  if ( v2 ) /*0x7c1d48*/
  {
    if ( (*(int (**)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v2, (a2 + 1) & 0xFFFFFFFE) ) /*0x7c1d53*/
      return -4; /*0x7c1d62*/
  }
  else if ( (*(int (**)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, (a2 + 1) & 0xFFFFFFFE) ) /*0x7c1d6d*/
  {
    return -6; /*0x7c1d7c*/
  }
  return -1; /*0x7c1d62*/
}
} // namespace gamemd

// 0x7C1D90
namespace gamemd {
int sub_7C1D90(int a1, int a2)
{
  int v3; // eax
  unsigned int *v4; // ebp
  int v5; // edi
  int v6; // ebx

  v3 = a2 + 1; /*0x7c1d9c*/
  v4 = *(unsigned int **)(a1 + 356); /*0x7c1d9e*/
  IDA_LOBYTE(v3) = (a2 + 1) & 0xFE; /*0x7c1daa*/
  v5 = *(unsigned int *)(a1 + 1896) - v3; /*0x7c1daf*/
  v6 = v5 + *v4; /*0x7c1db1*/
  if ( (*(int (**)(int, int, int, int))(a1 + 64))(a1, 5, v6, v3) ) /*0x7c1db8*/
    return -4; /*0x7c1dc5*/
  *(unsigned int *)(a1 + 372) = 0; /*0x7c1dcd*/
  v4[3] = 10; /*0x7c1dd7*/
  v4[4] = v5; /*0x7c1dde*/
  *(unsigned int *)(a1 + 360) = v4; /*0x7c1de1*/
  *(unsigned int *)(a1 + 356) = v4[1]; /*0x7c1dea*/
  if ( *(unsigned short *)(a1 + 232) < 3u ) /*0x7c1df8*/
    *(unsigned char *)(v6 + a2 + 1) = 0x80; /*0x7c1dfe*/
  return -1; /*0x7c1dc2*/
}
} // namespace gamemd

// 0x7C20B0
namespace gamemd {
int sub_7C20B0(int a1, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v8; // edx
  char *v9; // eax
  const void *v10; // esi
  int v11; // eax

  v3 = a2 + 1; /*0x7c20bb*/
  v4 = *(unsigned int *)(a1 + 368); /*0x7c20bc*/
  IDA_LOBYTE(v3) = (a2 + 1) & 0xFE; /*0x7c20c9*/
  v5 = *(unsigned int *)(a1 + 1904) - v3; /*0x7c20cf*/
  v6 = v5 + *(unsigned int *)(v4 + 8); /*0x7c20d2*/
  if ( (*(int (**)(int, int, int, int))(a1 + 64))(a1, 5, v6, v3) ) /*0x7c20d8*/
    return -4; /*0x7c20e5*/
  v8 = *(unsigned int *)(v4 + 20) | 8; /*0x7c20f4*/
  *(unsigned int *)(v4 + 36) = v5; /*0x7c20f7*/
  *(unsigned int *)(v4 + 20) = v8; /*0x7c20fa*/
  *(unsigned int *)(v4 + 40) = a2; /*0x7c20fd*/
  if ( *(unsigned short *)(a1 + 232) < 3u ) /*0x7c2108*/
    *(unsigned char *)(v6 + a2 + 1) = 0x80; /*0x7c210a*/
  if ( *(unsigned short *)(a1 + 1880) == 1 ) /*0x7c2117*/
  {
    v9 = AudioCodec::Decode( /*0x7c212a*/
           (uint8_t *)(*(unsigned int *)(v4 + 8) + *(unsigned int *)(v4 + 36)),
           *(char **)(v4 + 8),
           *(unsigned int *)(a1 + 1904));
    *(unsigned int *)(v4 + 20) &= ~8u; /*0x7c213d*/
    v10 = *(const void **)(v4 + 8); /*0x7c2140*/
    *(unsigned int *)(v4 + 40) = v9; /*0x7c2146*/
    qmemcpy((void *)(a1 + 452), v10, (unsigned int)v9); /*0x7c214c*/
    v11 = *(unsigned int *)(a1 + 420); /*0x7c2155*/
    IDA_LOBYTE(v11) = v11 | 1; /*0x7c215e*/
    *(unsigned int *)(a1 + 448) = *(unsigned int *)(v4 + 40); /*0x7c2160*/
    *(unsigned int *)(a1 + 420) = v11; /*0x7c2166*/
  }
  return -1; /*0x7c20e2*/
}
} // namespace gamemd

// 0x7C2180
namespace gamemd {
int sub_7C2180(int a1, unsigned int a2)
{
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v7; // ecx
  int v8; // eax

  v4 = a2 + 1; /*0x7c218c*/
  IDA_LOBYTE(v4) = (a2 + 1) & 0xFE; /*0x7c218f*/
  if ( (*(unsigned char *)(a1 + 132) & 1) != 0 && (v5 = *(unsigned int *)(a1 + 1932)) != 0 ) /*0x7c21a2*/
  {
    if ( v4 <= *(unsigned int *)(a1 + 1972) || *(unsigned int *)(a1 + 1936) ) /*0x7c21b0*/
    {
      if ( (*(int (**)(int, int, unsigned int, unsigned int))(a1 + 64))(a1, 5, *(unsigned int *)(a1 + 1960), v4) ) /*0x7c2219*/
      {
        return -4; /*0x7c2224*/
      }
      else
      {
        *(unsigned int *)(a1 + 1968) = a2; /*0x7c222b*/
        return -1; /*0x7c2232*/
      }
    }
    else if ( (*(int (**)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v5, v4) ) /*0x7c21bf*/
    {
      return -4; /*0x7c21ca*/
    }
    else
    {
      v7 = 0; /*0x7c21db*/
      *(unsigned int *)(a1 + 1936) += a2; /*0x7c21dd*/
      if ( a2 / *(unsigned int *)(a1 + 156) ) /*0x7c21e5*/
      {
        do /*0x7c2206*/
          *(unsigned char *)(*(unsigned int *)(a1 + 1940) + v7++) = 1; /*0x7c21f7*/
        while ( v7 < a2 / *(unsigned int *)(a1 + 156) ); /*0x7c2206*/
      }
      return -1; /*0x7c2209*/
    }
  }
  else
  {
    v8 = -((*(int (**)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, v4) != 0); /*0x7c2245*/
    IDA_LOBYTE(v8) = v8 & 0xFB; /*0x7c2248*/
    return v8 - 1; /*0x7c224b*/
  }
}
} // namespace gamemd

// 0x7C3430
namespace gamemd {
int Audio_Render_7C3430(DSurface * aP0, int a2, int a3, unsigned int a4)
{
  int v6; // edx
  uint16_t v7; // ax
  int result; // eax

  if ( a2 >= *(uint16_t *)(aP0 + 1812) || a2 < 0 || (*(unsigned char *)(aP0 + 132) & 1) != 0 && !*(unsigned short *)(aP0 + 1812) ) /*0x7c3436*/
    return -23; /*0x7c3498*/
  v6 = *(unsigned int *)(aP0 + 1820); /*0x7c345b*/
  v7 = *(unsigned short *)(v6 + 4 * a2 + 2); /*0x7c3463*/
  IDA_LOWORD(v6) = *(unsigned short *)(v6 + 4 * a2); /*0x7c346d*/
  *(unsigned int *)(aP0 + 288) = a2; /*0x7c347d*/
  result = SeekAudioStream(aP0, (uint16_t)v6, v7, a3, a4); /*0x7c3483*/
  if ( result == -1 ) /*0x7c348b*/
    *(unsigned int *)(aP0 + 288) = a2; /*0x7c348d*/
  return result; /*0x7c3493*/
}
} // namespace gamemd

// 0x7C3950
namespace gamemd {
void sub_7C3950(int a1, int a2)
{
  *(unsigned int *)(a1 + 328) += a2; /*0x7c3950*/
}
} // namespace gamemd

// 0x7C7350
namespace gamemd {
int sub_7C7350(int a1)
{
  *(unsigned short *)(a1 + 4) = 0; /*0x7c7356*/
  *(unsigned int *)a1 = 0; /*0x7c735c*/
  *(unsigned short *)(a1 + 10) = 0; /*0x7c7362*/
  *(unsigned int *)(a1 + 6) = 0; /*0x7c7368*/
  return a1; /*0x7c736f*/
}
} // namespace gamemd

// 0x7C94BC
namespace gamemd {
size_t sub_7C94BC(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
  size_t v4; // esi

  _lock_file(Stream); /*0x7c94c3*/
  v4 = fread(Buffer, ElementSize, ElementCount, Stream); /*0x7c94dc*/
  _unlock_file(Stream); /*0x7c94de*/
  return v4; /*0x7c94e8*/
}
} // namespace gamemd

// 0x7C95D3
namespace gamemd {
size_t sub_7C95D3(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
  size_t v4; // esi

  _lock_file(Stream); /*0x7c95da*/
  v4 = fwrite(Buffer, ElementSize, ElementCount, Stream); /*0x7c95f3*/
  _unlock_file(Stream); /*0x7c95f5*/
  return v4; /*0x7c95ff*/
}
} // namespace gamemd
