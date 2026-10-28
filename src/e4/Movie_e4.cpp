// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioSample_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Bink_e4.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/MultiplayerManBattle_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AudioFrame_e4.hpp"
#include "e4/classes/AudioTimer_e4.hpp"
#include "e4/classes/MovieContext_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"

// 0x49CAF0
namespace gamemd {  // G42.18 ns repair
AbstractClass * * Movie::SetupScreen(int aP1)
{


  if ( !byte_89F578 ) /*0x49cafc*/
    (&g_DDrawSurfaceManager)->LoadFromINI(); /*0x49cb03*/
  int v3 = aP1; // eax /*0x49cb08*/
  if ( aP1 < 0 || aP1 >= dword_89F574 ) /*0x49cb1c*/
    return 0; /*0x49cc46*/
  int v4 = dword_89F570; // ecx /*0x49cb29*/
  this->u32_6C = 1; /*0x49cb2f*/
  this->u32_38 = -1; /*0x49cb33*/
  int v5 = v4 + 76 * aP1; // ebp /*0x49cb3a*/
  int v6 = this->u32_44; // ecx /*0x49cb3d*/
  this->u32_48 = 0; /*0x49cb42*/
  this->u32_4C = 0; /*0x49cb45*/
  this->u32_50 = 0; /*0x49cb48*/
  this->u32_54 = 0; /*0x49cb4b*/
  this->u32_60 = 0; /*0x49cb4e*/
  this->u32_64 = 0; /*0x49cb51*/
  this->ptr_58 = 0; /*0x49cb54*/
  this->__pad_05C = 0; /*0x49cb57*/
  this->u32_68 = 0; /*0x49cb5a*/
  if ( v6 != aP1 ) /*0x49cb5d*/
  {
    if ( this->u32_3C ) /*0x49cb63*/
    {
      int i; // edi
      for ( i = 0; i < this->u32_40; ++i ) /*0x49cb72*/
      {
        int v8 = this->u32_3C; // edx /*0x49cb74*/
        if ( *(unsigned int *)(v8 + 4 * i) ) /*0x49cb77*/
          __3_YAXPAX_Z(*(void **)(v8 + 4 * i)); /*0x49cb7f*/
      }
      __3_YAXPAX_Z(*&this->u32_3C); /*0x49cb93*/
    }
    this->u32_3C = 0; /*0x49cb9b*/
    this->u32_40 = 0; /*0x49cb9e*/
    this->u32_3C = (unsigned int)(__2_YAPAXI_Z(4 * *(char *)(v5 + 8))); /*0x49cbae*/
    int v9 = 0; // edi /*0x49cbb7*/
    if ( *(char *)(v5 + 8) > 0 ) /*0x49cbbb*/
    {
      int v12; // [esp+8h] [ebp-4h]
      v12 = 0; /*0x49cbbd*/
      do /*0x49cc26*/
      {
        int v10; // ebx
        v10 = ((Random *)(&dword_A8B230[14].NeedsSaveOrLink))->Range(0, 2); /*0x49cbde*/
        *(unsigned int *)(this->u32_3C + 4 * v9) = (unsigned int)(__2_YAPAXI_Z(0x104u)); /*0x49cbf1*/
        strncpy( /*0x49cc0c*/
          *(char **)(this->u32_3C + 4 * v9++),
          (const char *)(*(unsigned int *)(v5 + 12) + 260 * (v12 + v10)),
          0x103u);
        v12 += 3; /*0x49cc22*/
      }
      while ( v9 < *(char *)(v5 + 8) ); /*0x49cc26*/
    }
    v3 = aP1; /*0x49cc2e*/
    this->u32_40 = *(char *)(v5 + 8); /*0x49cc32*/
    this->u32_38 = 0; /*0x49cc35*/
  }
  this->u32_44 = v3; /*0x49cc39*/
  return (gamemd::AbstractClass **)(1); /*0x49cc3d*/

}
}  // G42.18 ns repair
// 0x49E3B0
namespace gamemd {
CampaignClass * * Movie::GetSection(CCINIClass * aP1, CCINIClass * aP2, void *a3)
{
  if ( !this->u32_60 ) /*0x49e3b3*/
    CampaignClass::LoadFromINI(); /*0x49e3ba*/
  if ( aP1 < 0 || aP1 >= this->__pad_05C ) /*0x49e3ca*/
  {
    *aP2 = 0; /*0x49e3e9*/
    return 0; /*0x49e3ef*/
  }
  else
  {
    *aP2 = this->ptr_58 + 76 * aP1; /*0x49e3df*/
    return (gamemd::CampaignClass **)(1); /*0x49e3dd*/
  }
}
}
// 0x5BED40
namespace gamemd {
int Movie::Play(int a1, int a2, int a3, const char *a4, char a5, char a6, char a7, char a8, int aP1)
{

  char *v8; // eax
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  MovieClass **VQMovie; // eax
  MovieContext *v13; // esi
  bool v14; // al
  double v15; // st7
  MovieContext v16; // eax
  ObjectClass *v17; // [esp+0h] [ebp-150h]
  int v18; // [esp+0h] [ebp-150h]
  int v19; // [esp+0h] [ebp-150h]
  int v20; // [esp+4h] [ebp-14Ch]
  int *v21; // [esp+8h] [ebp-148h]
  BinkMovie v23; // [esp+1Ch] [ebp-134h] BYREF
  char Str[256]; // [esp+50h] [ebp-100h] BYREF

  if ( Render_Play(a4, Str, 1) && !*(unsigned int *)&dword_A8B238 ) /*0x5bed6a*/
  {
    Timer::PumpMessages((Timer *)dword_87F770); /*0x5bed76*/
    v8 = strrchr(Str, 46); /*0x5bed82*/
    if ( !v8 || _strcmpi(v8, aBik) ) /*0x5bed98*/
    {
      Timer::PumpMessages((Timer *)dword_87F770); /*0x5bef0b*/
      v9 = 0; /*0x5bef1e*/
      v10 = 0; /*0x5bef20*/
      (v11) = ((v11) & ~0xFFFF) | ((Math::RoundToInt(*(float *)&stru_A8E960.random[40] * 255.0)) & 0xFFFF); /*0x5bef24*/
      VQMovie = (MovieClass **)LoadVQMovie(Str, &DSurface_Alternate->DSurface_field_0x0, 0, 0, 0, 0, 0, 0, 0, 0, v11, 1); /*0x5bef56*/
      v13 = (MovieContext *)VQMovie; /*0x5bef5b*/
      if ( VQMovie ) /*0x5bef61*/
      {
        if ( MovieClass::GetWidth(*VQMovie) >= 320 || MovieClass::GetHeight(*(MovieClass **)v13) >= 200 ) /*0x5bef81*/
        {
          v14 = a6 == 1 && stru_A8E960.random[32] == 1; /*0x5befba*/
          if ( g_DDraw_AllowStretchBlits == 1 && v14 ) /*0x5befcb*/
          {
            v9 = (int)v13[11]; /*0x5befcd*/
            if ( v9 < (int)qword_886FB8 ) /*0x5befdb*/
            {
              v10 = (int)v13[12]; /*0x5befdd*/
              if ( v10 < (int)(((qword_886FB8) >> 32) & 0xFFFFFFFFu) ) /*0x5befec*/
              {
                v15 = (double)(int)qword_886FB8; /*0x5befee*/
                v13[15] = (MovieContext)qword_886FB8; /*0x5beff4*/
                *(unsigned short *)v16.__tail_0 = Math::RoundToInt(v15 / (double)v9); /*0x5bf001*/
                v13[13] = 0; /*0x5bf008*/
                v13[16] = v16; /*0x5bf00b*/
                v13[14] = (MovieContext)(((((qword_886FB8) >> 32) & 0xFFFFFFFFu) - *(unsigned int *)&v16) / 2); /*0x5bf01d*/
                Debug::Log(); /*0x5bf02b*/
              }
            }
          }
          (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x5bf03b*/
          if ( a7 ) /*0x5bf045*/
          {
            (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x5bf050*/
            Frame::Present((int)g_DSurface_Hidden, 0, v10, v9, 0, (int)v17, v20, v21); /*0x5bf05c*/
          }
          if ( !byte_ABF35C ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            AudioQueue::IncrementPriority(); /*0x5bf06e*/
            AudioQueue::ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bf083*/
            RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bf093*/
            byte_ABF35C = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(44100, 16, 2); /*0x5bf0b0*/
          RenderMovieFrame((int)v13, 1, a1, 0); /*0x5bf0bf*/
          sub_40A850(v17); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( byte_ABF35C ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            Mixer::RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf0f0*/
            RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf100*/
            AudioMixer::Pump(); /*0x5bf105*/
            byte_ABF35C = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v13); /*0x5bf112*/
          ((BinkMovie *)v13)->Cleanup(); /*0x5bf119*/
          __3_YAXPAX_Z(v13); /*0x5bf11f*/
          if ( a5 == 1 ) /*0x5bf130*/
          {
            (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x5bf13b*/
            Frame::Present((int)g_DSurface_Hidden, 0, v10, v9, 0, v19, v20, v21); /*0x5bf147*/
          }
          (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x5bf154*/
          MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x5bf15e*/
          Timer::PumpMessages((Timer *)dword_87F770); /*0x5bf169*/
        }
        else
        {
          MovieContext::Cleanup(v13); /*0x5bef85*/
          ((BinkMovie *)v13)->Cleanup(); /*0x5bef8c*/
          __3_YAXPAX_Z(v13); /*0x5bef92*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x5bedad*/
      (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x5bedbd*/
      if ( a7 ) /*0x5bedc7*/
      {
        (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x5bedd2*/
        Frame::Present((int)g_DSurface_Hidden, 0, a2, a3, 0, (int)v17, v20, v21); /*0x5bedde*/
      }
      (&v23)->Close(Str); /*0x5bedec*/
      if ( a8 == 1 ) /*0x5bedf9*/
        v23.q000 = 1; /*0x5bedfb*/
      if ( !byte_ABF35C ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        AudioQueue::IncrementPriority(); /*0x5bee0d*/
        AudioQueue::ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bee22*/
        RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bee32*/
        byte_ABF35C = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(44100, 16, 2); /*0x5bee4f*/
      BinkMovie::Play(&v23); /*0x5bee58*/
      sub_40A850(v17); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( byte_ABF35C ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        Mixer::RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bee89*/
        RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bee99*/
        AudioMixer::Pump(); /*0x5bee9e*/
        byte_ABF35C = 0; /*0x5beea3*/
      }
      if ( a5 == 1 ) /*0x5beeb1*/
      {
        (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x5beebc*/
        Frame::Present((int)g_DSurface_Hidden, 0, a2, a3, 0, v18, v20, v21); /*0x5beec8*/
      }
      Timer::PumpMessages((Timer *)dword_87F770); /*0x5beed3*/
      (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x5beee0*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x5beeea*/
      BinkMovie::Stop(&v23); /*0x5beef3*/
    }
  }

}
}
// 0x5BF260
namespace gamemd {
void Movie_PlayWrapper(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{

  if ( a1 >= 0 && a1 < (void *)(dword_ABF3A0) ) /*0x5bf26a*/
  {
    char v6 = byte_A8E378; // bl /*0x5bf275*/
    byte_A8E378 = 0; /*0x5bf289*/
    Movie::Play(-1, a2, a3, a4, a5, a6, 0); /*0x5bf296*/
    byte_A8E378 = v6; /*0x5bf29b*/
  }
}
}
// 0x7209D0
namespace gamemd {
int Movie::Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1)
{

  void *IsSoundEnabled; // eax
  AudioSample *v3; // ecx

  IsSoundEnabled = (void *)Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( IsSoundEnabled ) /*0x7209da*/
  {
    LOBYTE(IsSoundEnabled) = (unsigned char)(DataGlobal_A8EC80); /*0x7209e0*/
    if ( !DataGlobal_A8EC80 ) /*0x7209e7*/
    {
      LOBYTE(IsSoundEnabled) = yBottom; /*0x7209ed*/
      if ( yBottom ) /*0x7209f4*/
      {
        IsSoundEnabled = a1_1->Movie_field_0xC; /*0x7209fa*/
        if ( (int)IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(AudioSample **)&a1_1->__pad_28[4]; /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( a1_1->__pad_10[1] && !(v3)->IsBuffering() ) /*0x720a0f*/
            Audio::Release(*(Audio **)&a1_1->__pad_28[4]); /*0x720a1b*/
          LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(Audio **)&a1_1->__pad_28[4]) != 0; /*0x720a2a*/
          if ( !(unsigned char)IsSoundEnabled ) /*0x720a2f*/
          {
            LABEL_10:
            IsSoundEnabled = (void *)a1_1->Movie_field_0x8; /*0x720a31*/
            if ( IsSoundEnabled != (void *)-1 && IsSoundEnabled != (void *)-3 && !dword_A8E7AC ) /*0x720a46*/
            {
              if ( IsSoundEnabled == (void *)-2 ) /*0x720a4b*/
              {
                a1_1->Movie_field_0x8 = Movie::SelectNextBuildableType((int)a1_1, (int)a1_1->Movie_field_0x4); /*0x720a5e*/
                Debug::Log(); /*0x720a61*/
              }
              LOBYTE(IsSoundEnabled) = ((ThemeClass *)a1_1)->Play(a1_1->Movie_field_0x8); /*0x720a6f*/
              a1_1->Movie_field_0x8 = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return (char)IsSoundEnabled; /*0x720a7b*/

}
}
// 0x720A80
namespace gamemd {
unsigned int Movie::SelectNextBuildableType(int aP1)
{

  unsigned int v6; // ebx
  bool v7; // zf

  unsigned int v2 = aP1; // ebp /*0x720a81*/
  if ( (aP1 <= -1 || *(unsigned char *)(*(unsigned int *)(&this->__pad_10[8] + 4 * aP1) + 649) || this->__pad_10) && aP1 >= 0 ) /*0x720aa7*/
    return v2; /*0x720b18*/
  if ( this->u32_12 == 1 ) /*0x720aad*/
  {
    int v4 = 0; // edi /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      unsigned int v5; // eax
      v5 = ((Random *)(&Randomizer_Global))->Range(0, this->u32_24 - 1); /*0x720abe*/
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != aP1 && (unsigned __int8)((RulesClass *)this)->IsTypeBuildable(v5) ) /*0x720ad5*/
      {
        v7 = v4 == 1000; /*0x720ade*/
        break; /*0x720ade*/
      }
    }
    if ( v7 ) /*0x720ae4*/
      return 0; /*0x720ae6*/
    return v6; /*0x720ae8*/
  }
  else
  {
    int v9 = this->u32_24 + 1; // edi /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      if ( (signed int)++v2 >= this->u32_24 ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( (unsigned __int8)((RulesClass *)this)->IsTypeBuildable(v2) ) /*0x720b05*/
        return v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }

}
char Movie::GetSectionID(unsigned int *result)
{

  int result; // eax

  if ( this->u32_6C )
  {
    result = (unsigned int *)(this->u32_44);
    *result = (unsigned int)(result); /*0x49bc93*/
    (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF); /*0x49bc95*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF); /*0x49bc87*/
  }
  return (char)(result); /*0x49bc89*/

}
} // namespace gamemd

// 0x49BCC0
namespace gamemd {
char Movie::GetState(unsigned int *result)
{
  int result; // eax

  if ( this->u32_6C ) /*0x49bcc0*/
  {
    result = (unsigned int *)(this->u32_38); /*0x49bccc*/
    *result = (unsigned int)(result); /*0x49bcd3*/
    (*((unsigned char *)&(result))) = 1; /*0x49bcd5*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x49bcc7*/
  }
  return (char)(result); /*0x49bcc9*/
}
} // namespace gamemd
