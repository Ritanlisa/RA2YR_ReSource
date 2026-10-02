// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/AudioSample_e4.hpp"
#include "e4/e4_globals.hpp"
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

// 0x49CAF0
namespace gamemd {
AbstractClass * * Movie::SetupScreen(CCINIClass * aP1)
{

  CCINIClass * v3;
  int v4; // ecx
  int v5; // ebp
  int v6; // ecx
  int i; // edi
  int v8; // edx
  int v9; // edi
  int v10; // ebx
  int v12; // [esp+8h] [ebp-4h]

  if ( !byte_89F578 ) /*0x49cafc*/
    ((gamemd::CampaignClass *)(&g_DDrawSurfaceManager))->LoadFromINI(); /*0x49cb03*/
  v3 = aP1; /*0x49cb08*/
  if ( aP1 < 0 || aP1 >= (gamemd::CCINIClass *)(dword_89F574) ) /*0x49cb1c*/
    return 0; /*0x49cc46*/
  v4 = dword_89F570; /*0x49cb29*/
  *((unsigned char *)this + 108) = 1; /*0x49cb2f*/
  *((unsigned int *)this + 14) = -1; /*0x49cb33*/
  v5 = v4 + 76 * aP1; /*0x49cb3a*/
  v6 = *((unsigned int *)this + 17); /*0x49cb3d*/
  *((unsigned int *)this + 18) = 0; /*0x49cb42*/
  *((unsigned int *)this + 19) = 0; /*0x49cb45*/
  *((unsigned int *)this + 20) = 0; /*0x49cb48*/
  *((unsigned int *)this + 21) = 0; /*0x49cb4b*/
  *((unsigned int *)this + 24) = 0; /*0x49cb4e*/
  *((unsigned int *)this + 25) = 0; /*0x49cb51*/
  *((unsigned int *)this + 22) = 0; /*0x49cb54*/
  *((unsigned int *)this + 23) = 0; /*0x49cb57*/
  *(unsigned int *)((int))(((unsigned int *)this + 26)) = 0; /*0x49cb5a*/
  if ( v6 != (int)(aP1) ) /*0x49cb5d*/
  {
    if ( *((unsigned int *)this + 15) ) /*0x49cb63*/
    {
      for ( i = 0; i < *((unsigned int *)this + 16); ++i ) /*0x49cb72*/
      {
        v8 = *((unsigned int *)this + 15); /*0x49cb74*/
        if ( *(unsigned int *)(v8 + 4 * i) ) /*0x49cb77*/
          __3_YAXPAX_Z(*(void **)(v8 + 4 * i)); /*0x49cb7f*/
      }
      __3_YAXPAX_Z(*(void **)((char *)this + 60)); /*0x49cb93*/
    }
    *((unsigned int *)this + 15) = 0; /*0x49cb9b*/
    *((unsigned int *)this + 16) = 0; /*0x49cb9e*/
    *((unsigned int *)this + 15) = (unsigned int)(__2_YAPAXI_Z(4 * *(char *)(v5 + 8))); /*0x49cbae*/
    v9 = 0; /*0x49cbb7*/
    if ( *(char *)(v5 + 8) > 0 ) /*0x49cbbb*/
    {
      v12 = 0; /*0x49cbbd*/
      do /*0x49cc26*/
      {
        v10 = Random::Range((unsigned int *)dword_A8B230 + 134, 0, 2); /*0x49cbde*/
        *(unsigned int *)(*((unsigned int *)this + 15) + 4 * v9) = (unsigned int)(__2_YAPAXI_Z(0x104u)); /*0x49cbf1*/
        strncpy( /*0x49cc0c*/
          *(char **)(*((unsigned int *)this + 15) + 4 * v9++),
          (const char *)(*(unsigned int *)(v5 + 12) + 260 * (v12 + v10)),
          0x103u);
        v12 += 3; /*0x49cc22*/
      }
      while ( v9 < *(char *)(v5 + 8) ); /*0x49cc26*/
    }
    v3 = (gamemd::CCINIClass *)((int)(aP1));
    *((unsigned int *)this + 16) = *(char *)(v5 + 8); /*0x49cc32*/
    *((unsigned int *)this + 14) = 0; /*0x49cc35*/
  }
  *((unsigned int *)this + 17) = (unsigned int)((gamemd::AbstractClass **)((unsigned int)(v3))); /*0x49cc39*/
  return (gamemd::AbstractClass **)(1); /*0x49cc3d*/

}
}
// 0x49E3B0
namespace gamemd {
CampaignClass * * Movie::GetSection(CCINIClass * aP1, CCINIClass * aP2)
{

  if ( !*((unsigned char *)this + 96) ) /*0x49e3b3*/
    ((gamemd::CampaignClass *)(this))->LoadFromINI(); /*0x49e3ba*/
  if ( aP1 < 0 || aP1 >= *((unsigned int *)this + 23) ) /*0x49e3ca*/
  {
    *(unsigned int *)aP2 = 0; /*0x49e3e9*/
    return 0; /*0x49e3ef*/
  }
  else
  {
    *aP2 = (gamemd::CampaignClass **)(*((unsigned int *)this + 22) + 76 * aP1);
    return (gamemd::CampaignClass **)(1);
  }

}
}
// 0x5BED40
namespace gamemd {
int Movie::Play(int a1, int a2, int a3, const char *a4, char a5, char a6, char a7, char a8, int a1, int a2, int a3, int a4, int aP1)
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

  if ( Render_Play((const char *)(a4), Str, 1) && !*(unsigned int *)&dword_A8B238 ) /*0x5bed6a*/
  {
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bed76*/
    v8 = strrchr(Str, 46); /*0x5bed82*/
    if ( !v8 || _strcmpi(v8,(const char *)(aBik)) ) /*0x5bed98*/
    {
      Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bef0b*/
      v9 = 0; /*0x5bef1e*/
      v10 = 0; /*0x5bef20*/
      LOWORD(v11) = Math::RoundToInt(*(float *)&stru_A8EB00.ObjectTypeClass[39] * 255.0); /*0x5bef24*/
      VQMovie = (MovieClass **)LoadVQMovie(Str, (int *)DSurface_Alternate, 0, 0, 0, 0, 0, 0, 0, 0, v11, 1); /*0x5bef56*/
      v13 = (MovieContext *)VQMovie; /*0x5bef5b*/
      if ( VQMovie ) /*0x5bef61*/
      {
        if ( MovieClass::GetWidth(*VQMovie) >= 320 || MovieClass::GetHeight(*(MovieClass **)v13) >= 200 ) /*0x5bef81*/
        {
          v14 = a6 == 1 && LOBYTE(stru_A8EB00.ObjectTypeClass[37]) == 1; /*0x5befba*/
          if ( g_DDraw_AllowStretchBlits == 1 && v14 ) /*0x5befcb*/
          {
            v9 = (int)v13[11]; /*0x5befcd*/
            if ( v9 < *(int *)&DSurface_ViewBounds.__pad_8[16] ) /*0x5befdb*/
            {
              v10 = (int)v13[12]; /*0x5befdd*/
              if ( v10 < *(int *)&DSurface_ViewBounds.__pad_8[20] ) /*0x5befec*/
              {
                v15 = (double)*(int *)&DSurface_ViewBounds.__pad_8[16]; /*0x5befee*/
                v13[15] = *(MovieContext *)&DSurface_ViewBounds.__pad_8[16]; /*0x5beff4*/
                *(unsigned short *)v16.__tail_0 = (unsigned short)((gamemd::MovieContext)(Math::RoundToInt(v15 / (double)v9))); /*0x5bf001*/
                v13[13] = (gamemd::MovieContext)(0); /*0x5bf008*/
                v13[16] = (gamemd::MovieContext)(v16); /*0x5bf00b*/
                v13[14] = (MovieContext)((*(unsigned int *)&DSurface_ViewBounds.__pad_8[20] - *(unsigned int *)&v16) / 2); /*0x5bf01d*/
                ((gamemd::Debug *)this)->Log(); /*0x5bf02b*/
              }
            }
          }
          (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5bf03b*/
          if ( a7 ) /*0x5bf045*/
          {
            (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vtable1 + 6))(g_DSurface_Hidden, 0); /*0x5bf050*/
            Frame::Present((void *)((int)g_DSurface_Hidden), 0, v10, v9, 0, (int)v17, v20, v21); /*0x5bf05c*/
          }
          if ( !LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            ((AudioQueue *)this)->IncrementPriority(); /*0x5bf06e*/
            ((AudioQueue *)this)->ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerState), 0x2000); /*0x5bf083*/
            RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerChannel_Ambient), 0x2000); /*0x5bf093*/
            LOBYTE(g_MissionQueueFrame.localVariables[566], unsigned int a1) = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(44100, 16, 2); /*0x5bf0b0*/
          RenderMovieFrame((int)v13, 1, a1, 0); /*0x5bf0bf*/
          sub_40A850(v17); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            ((Mixer *)this)->RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerState), 0x4000); /*0x5bf0f0*/
            RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerChannel_Ambient), 0x4000); /*0x5bf100*/
            ((AudioMixer *)this)->Pump(); /*0x5bf105*/
            LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v13); /*0x5bf112*/
          BinkMovie::Cleanup((BinkMovie *)v13); /*0x5bf119*/
          __3_YAXPAX_Z(v13); /*0x5bf11f*/
          if ( a5 == 1 ) /*0x5bf130*/
          {
            (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vtable1 + 6))(g_DSurface_Hidden, 0); /*0x5bf13b*/
            Frame::Present((void *)((int)g_DSurface_Hidden), 0, v10, v9, 0, v19, v20, v21); /*0x5bf147*/
          }
          (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5bf154*/
          MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5bf15e*/
          Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bf169*/
        }
        else
        {
          MovieContext::Cleanup(v13); /*0x5bef85*/
          BinkMovie::Cleanup((BinkMovie *)v13); /*0x5bef8c*/
          __3_YAXPAX_Z(v13, unsigned int a3); /*0x5bef92*/
        }
      }
    }
    else
    {
      ((gamemd::Debug *)this)->Log(); /*0x5bedad*/
      (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5bedbd*/
      if ( a7 ) /*0x5bedc7*/
      {
        (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vtable1 + 6))(g_DSurface_Hidden, 0); /*0x5bedd2*/
        Frame::Present((int, unsigned int a8)g_DSurface_Hidden, 0, a2, a3, 0, (int)v17, v20, v21); /*0x5bedde*/
      }
      ((BinkMovie *)(&v23))->Close(Str); /*0x5bedec*/
      if ( a8 == (void *)(1) ) /*0x5bedf9*/
        ((unsigned int *)(v23.__pad_0))[0] = 1; /*0x5bedfb*/
      if ( !LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        ((AudioQueue *)this)->IncrementPriority(); /*0x5bee0d*/
        ((AudioQueue *)this)->ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerState), 0x2000); /*0x5bee22*/
        RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerChannel_Ambient), 0x2000); /*0x5bee32*/
        LOBYTE(g_MissionQueueFrame.localVariables[566]) = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(44100, 16, 2); /*0x5bee4f*/
      BinkMovie::Play(&v23); /*0x5bee58*/
      sub_40A850(v17); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        ((Mixer *)this)->RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerState), 0x4000); /*0x5bee89*/
        RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)g_MixerChannel_Ambient), 0x4000); /*0x5bee99*/
        ((AudioMixer *)this)->Pump(); /*0x5bee9e*/
        LOBYTE(g_MissionQueueFrame.localVariables[566], unsigned int a3) = 0; /*0x5beea3*/
      }
      if ( a5 == 1 ) /*0x5beeb1*/
      {
        (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vtable1 + 6))(g_DSurface_Hidden, 0); /*0x5beebc*/
        Frame::Present((void *)((int)g_DSurface_Hidden), 0, a2, a3, 0, v18, v20, v21); /*0x5beec8*/
      }
      Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5beed3*/
      (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5beee0*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5beeea*/
      ((BinkMovie *)(&v23))->Stop(); /*0x5beef3*/
    }
  }

}
}
// 0x5BF260
namespace gamemd {
void Movie_PlayWrapper(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
  char v6; // bl

  if ( a1 >= 0 && a1 < (void *)(dword_ABF3A0) ) /*0x5bf26a*/
  {
    v6 = byte_A8E378; /*0x5bf275*/
    byte_A8E378 = 0; /*0x5bf289*/
    Movie::Play((gamemd::CCINIClass *)(-1), a2, a3, a4, a5, a6, 0); /*0x5bf296*/
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
    LOBYTE(IsSoundEnabled) = *((unsigned int *)((char *)&stru_A8EB00 + 384)); /*0x7209e0*/
    if ( !((unsigned int *)&stru_A8EB00)[384] ) /*0x7209e7*/
    {
      LOBYTE(IsSoundEnabled) = *((unsigned int *)((char *)&stru_A8EB00 + 144)); /*0x7209ed*/
      if ( *((unsigned int *)((char *)&stru_A8EB00 + 144)) ) /*0x7209f4*/
      {
        IsSoundEnabled = (void *)(this->Movie_field_0xC); /*0x7209fa*/
        if ( (int)IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(AudioSample **)&this->__pad_28[4]; /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( this->__pad_10[1] && !((AudioSample *)(v3))->IsBuffering() ) /*0x720a0f*/
            ((gamemd::Audio *)(*(Audio **)&this->__pad_28[4]))->Release(); /*0x720a1b*/
          LOBYTE(IsSoundEnabled) = ((gamemd::Audio *)(*(Audio **)&this->__pad_28[4]))->IsSoundPlaying() != 0; /*0x720a2a*/
          if ( !(unsigned char)IsSoundEnabled ) /*0x720a2f*/
          {
LABEL_10:
            IsSoundEnabled = (void *)this->Movie_field_0x8; /*0x720a31*/
            if ( IsSoundEnabled != (void *)-1 && IsSoundEnabled != (void *)-3 && !dword_A8E7AC ) /*0x720a46*/
            {
              if ( IsSoundEnabled == (void *)-2 ) /*0x720a4b*/
              {
                this->Movie_field_0x8 = ((Movie *)((int)this))->SelectNextBuildableType((int)this->Movie_field_0x4); /*0x720a5e*/
                Debug::Log(); /*0x720a61*/
              }
              LOBYTE(IsSoundEnabled) = ((ThemeClass *)((ThemeClass *)this))->Play(this->Movie_field_0x8); /*0x720a6f*/
              this->Movie_field_0x8 = -2; /*0x720a74*/
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

  unsigned int v2; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = aP1; /*0x720a81*/
  if ( (aP1 <= -1 || *(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 6) + 4 * aP1) + 649) || *((unsigned char *)this + 16)) && aP1 >= 0 ) /*0x720aa7*/
    return v2; /*0x720b18*/
  if ( *((unsigned char *)this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = Random::Range(&Randomizer_Global, 0, *((unsigned int *)this + 9) - 1); /*0x720abe*/
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != aP1 && (uint8_t)((RulesClass *)((RulesClass *)this))->IsTypeBuildable(v5) ) /*0x720ad5*/
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
    v9 = *((unsigned int *)this + 9) + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      if ( (signed int)++v2 >= *((unsigned int *)this + 9) ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( (uint8_t)((RulesClass *)((RulesClass *)this))->IsTypeBuildable(v2) ) /*0x720b05*/
        return v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }

}
}
// 0x49BC80
namespace gamemd {
char Movie::GetSectionID(unsigned int *a2)
{

  int result; // eax

  if ( *((unsigned char *)this + 108) ) /*0x49bc80*/
  {
    result = *((char *)this + 17); /*0x49bc8c*/
    *a2 = result; /*0x49bc93*/
    LOBYTE(result) = 1; /*0x49bc95*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x49bc87*/
  }
  return result; /*0x49bc89*/

}
} // namespace gamemd

// 0x49BCC0
namespace gamemd {
char Movie::GetState(unsigned int *aP1)
{

  int result; // eax

  if ( *((unsigned char *)this + 108) ) /*0x49bcc0*/
  {
    result = *((char *)this + 14); /*0x49bccc*/
    *aP1 = result; /*0x49bcd3*/
    LOBYTE(result) = 1; /*0x49bcd5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x49bcc7*/
  }
  return result; /*0x49bcc9*/

}
} // namespace gamemd
