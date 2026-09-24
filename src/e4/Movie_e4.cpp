// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x49CAF0
namespace gamemd {
AbstractClass * * Movie::SetupScreen(CCINIClass * aP1)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // ecx
  int i; // edi
  int v8; // edx
  int v9; // edi
  int v10; // ebx
  int v12; // [esp+8h] [ebp-4h]

  if ( !byte_89F578 ) /*0x49cafc*/
    CampaignClass::LoadFromINI(&g_DDrawSurfaceManager); /*0x49cb03*/
  v3 = aP1; /*0x49cb08*/
  if ( aP1 < 0 || aP1 >= dword_89F574 ) /*0x49cb1c*/
    return 0; /*0x49cc46*/
  v4 = dword_89F570; /*0x49cb29*/
  *(_BYTE *)(this + 108) = 1; /*0x49cb2f*/
  *(_DWORD *)(this + 56) = -1; /*0x49cb33*/
  v5 = v4 + 76 * aP1; /*0x49cb3a*/
  v6 = *(_DWORD *)(this + 68); /*0x49cb3d*/
  *(_DWORD *)(this + 72) = 0; /*0x49cb42*/
  *(_DWORD *)(this + 76) = 0; /*0x49cb45*/
  *(_DWORD *)(this + 80) = 0; /*0x49cb48*/
  *(_DWORD *)(this + 84) = 0; /*0x49cb4b*/
  *(_DWORD *)(this + 96) = 0; /*0x49cb4e*/
  *(_DWORD *)(this + 100) = 0; /*0x49cb51*/
  *(_DWORD *)(this + 88) = 0; /*0x49cb54*/
  *(_DWORD *)(this + 92) = 0; /*0x49cb57*/
  *(_DWORD *)(this + 104) = 0; /*0x49cb5a*/
  if ( v6 != aP1 ) /*0x49cb5d*/
  {
    if ( *(_DWORD *)(this + 60) ) /*0x49cb63*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 64); ++i ) /*0x49cb72*/
      {
        v8 = *(_DWORD *)(this + 60); /*0x49cb74*/
        if ( *(_DWORD *)(v8 + 4 * i) ) /*0x49cb77*/
          __3_YAXPAX_Z(*(void **)(v8 + 4 * i)); /*0x49cb7f*/
      }
      __3_YAXPAX_Z(*(void **)(this + 60)); /*0x49cb93*/
    }
    *(_DWORD *)(this + 60) = 0; /*0x49cb9b*/
    *(_DWORD *)(this + 64) = 0; /*0x49cb9e*/
    *(_DWORD *)(this + 60) = __2_YAPAXI_Z(4 * *(char *)(v5 + 8)); /*0x49cbae*/
    v9 = 0; /*0x49cbb7*/
    if ( *(char *)(v5 + 8) > 0 ) /*0x49cbbb*/
    {
      v12 = 0; /*0x49cbbd*/
      do /*0x49cc26*/
      {
        v10 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x49cbde*/
        *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * v9) = __2_YAPAXI_Z(0x104u); /*0x49cbf1*/
        strncpy( /*0x49cc0c*/
          *(char **)(*(_DWORD *)(this + 60) + 4 * v9++),
          (const char *)(*(_DWORD *)(v5 + 12) + 260 * (v12 + v10)),
          0x103u);
        v12 += 3; /*0x49cc22*/
      }
      while ( v9 < *(char *)(v5 + 8) ); /*0x49cc26*/
    }
    v3 = aP1; /*0x49cc2e*/
    *(_DWORD *)(this + 64) = *(char *)(v5 + 8); /*0x49cc32*/
    *(_DWORD *)(this + 56) = 0; /*0x49cc35*/
  }
  *(_DWORD *)(this + 68) = v3; /*0x49cc39*/
  return 1; /*0x49cc3d*/
}
}
// 0x49E3B0
namespace gamemd {
CampaignClass * * Movie::GetSection(CCINIClass * aP1, CCINIClass * aP2)
{
  if ( !*(_BYTE *)(this + 96) ) /*0x49e3b3*/
    CampaignClass::LoadFromINI(this); /*0x49e3ba*/
  if ( aP1 < 0 || aP1 >= *(_DWORD *)(this + 92) ) /*0x49e3ca*/
  {
    *aP2 = 0; /*0x49e3e9*/
    return 0; /*0x49e3ef*/
  }
  else
  {
    *aP2 = *(_DWORD *)(this + 88) + 76 * aP1; /*0x49e3df*/
    return 1; /*0x49e3dd*/
  }
}
}
// 0x5BED40
namespace gamemd {
void Movie::Play(CCINIClass * aP0, int a2, CCINIClass * aP2, IUnknown * aP3, char a5, char a6, char a7)
{
  char *v7; // eax
  int v8; // edi
  int v9; // ebp
  char v10; // al
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  bool v13; // al
  double v14; // st7
  int v15; // eax
  int v16; // [esp+0h] [ebp-150h]
  int v17; // [esp+4h] [ebp-14Ch]
  int *v18; // [esp+8h] [ebp-148h]
  _BYTE v20[52]; // [esp+1Ch] [ebp-134h] BYREF
  char Str[256]; // [esp+50h] [ebp-100h] BYREF

  if ( (unsigned __int8)Render_Play(1) && !g_GameMode_Current ) /*0x5bed6a*/
  {
    Timer::PumpMessages(g_BinkMoviePlayer); /*0x5bed76*/
    v7 = strrchr(Str, 46); /*0x5bed82*/
    if ( !v7 || _strcmpi(v7, aBik) ) /*0x5bed98*/
    {
      Timer::PumpMessages(g_BinkMoviePlayer); /*0x5bef0b*/
      v8 = 0; /*0x5bef1e*/
      v9 = 0; /*0x5bef20*/
      v10 = Math::RoundToInt(*(float *)&dword_A8EB9C * 255.0); /*0x5bef24*/
      v11 = (_DWORD *)LoadVQMovie(Str, 0, 0, 0, 0, 0, 0, 0, 0, v10, 1); /*0x5bef56*/
      v12 = v11; /*0x5bef5b*/
      if ( v11 ) /*0x5bef61*/
      {
        if ( MovieClass::GetWidth(*v11) >= 320 || MovieClass::GetHeight(*v12) >= 200 ) /*0x5bef81*/
        {
          v13 = a5 == 1 && byte_A8EB94 == 1; /*0x5befba*/
          if ( g_DDraw_AllowStretchBlits == 1 && v13 ) /*0x5befcb*/
          {
            v8 = v12[11]; /*0x5befcd*/
            if ( v8 < g_CreditsScreenBounds ) /*0x5befdb*/
            {
              v9 = v12[12]; /*0x5befdd*/
              if ( v9 < g_CreditsScreenConfig ) /*0x5befec*/
              {
                v14 = (double)g_CreditsScreenBounds; /*0x5befee*/
                v12[15] = g_CreditsScreenBounds; /*0x5beff4*/
                v15 = Math::RoundToInt(v14 / (double)v8); /*0x5bf001*/
                v12[13] = 0; /*0x5bf008*/
                v12[16] = v15; /*0x5bf00b*/
                v12[14] = (g_CreditsScreenConfig - v15) / 2; /*0x5bf01d*/
                Debug::Log("Stretching movie %dx%d -> %dx%d\n", v8, v9, v12[15], v15); /*0x5bf02b*/
              }
            }
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x5bf03b*/
          if ( a6 ) /*0x5bf045*/
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x5bf050*/
            Frame::Present(g_DSurface_Hidden, 0, v9, v8, 0, v16, v17, v18); /*0x5bf05c*/
          }
          if ( !byte_ABF35C ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            AudioQueue::IncrementPriority(); /*0x5bf06e*/
            AudioQueue::ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer(g_MixerState, 0x2000); /*0x5bf083*/
            RequestBufferMixer(g_MixerChannel_Ambient, 0x2000); /*0x5bf093*/
            byte_ABF35C = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(2); /*0x5bf0b0*/
          RenderMovieFrame(a1, 0); /*0x5bf0bf*/
          sub_40A850(); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( byte_ABF35C ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            Mixer::RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer(g_MixerState, 0x4000); /*0x5bf0f0*/
            RequestBufferMixer(g_MixerChannel_Ambient, 0x4000); /*0x5bf100*/
            AudioMixer::Pump(); /*0x5bf105*/
            byte_ABF35C = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v12); /*0x5bf112*/
          BinkMovie::Cleanup(v12); /*0x5bf119*/
          __3_YAXPAX_Z(v12); /*0x5bf11f*/
          if ( a4 == 1 ) /*0x5bf130*/
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x5bf13b*/
            Frame::Present(g_DSurface_Hidden, 0, v9, v8, 0, v16, v17, v18); /*0x5bf147*/
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x5bf154*/
          MapClass::MarkForRedraw(2); /*0x5bf15e*/
          Timer::PumpMessages(g_BinkMoviePlayer); /*0x5bf169*/
        }
        else
        {
          MovieContext::Cleanup(v12); /*0x5bef85*/
          BinkMovie::Cleanup(v12); /*0x5bef8c*/
          __3_YAXPAX_Z(v12); /*0x5bef92*/
        }
      }
    }
    else
    {
      Debug::Log(aPlayMovieAsBin); /*0x5bedad*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x5bedbd*/
      if ( a6 ) /*0x5bedc7*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x5bedd2*/
        Frame::Present(g_DSurface_Hidden, 0, a2, a3, 0, v16, v17, v18); /*0x5bedde*/
      }
      BinkMovie::Close(Str); /*0x5bedec*/
      if ( a7 == 1 ) /*0x5bedf9*/
        v20[0] = 1; /*0x5bedfb*/
      if ( !byte_ABF35C ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        AudioQueue::IncrementPriority(); /*0x5bee0d*/
        AudioQueue::ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer(g_MixerState, 0x2000); /*0x5bee22*/
        RequestBufferMixer(g_MixerChannel_Ambient, 0x2000); /*0x5bee32*/
        byte_ABF35C = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(2); /*0x5bee4f*/
      BinkMovie::Play(v20); /*0x5bee58*/
      sub_40A850(); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( byte_ABF35C ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        Mixer::RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer(g_MixerState, 0x4000); /*0x5bee89*/
        RequestBufferMixer(g_MixerChannel_Ambient, 0x4000); /*0x5bee99*/
        AudioMixer::Pump(); /*0x5bee9e*/
        byte_ABF35C = 0; /*0x5beea3*/
      }
      if ( a4 == 1 ) /*0x5beeb1*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x5beebc*/
        Frame::Present(g_DSurface_Hidden, 0, a2, a3, 0, v16, v17, v18); /*0x5beec8*/
      }
      Timer::PumpMessages(g_BinkMoviePlayer); /*0x5beed3*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x5beee0*/
      MapClass::MarkForRedraw(2); /*0x5beeea*/
      BinkMovie::Stop(v20); /*0x5beef3*/
    }
  }
}
}
// 0x5BF260
namespace gamemd {
void Movie_PlayWrapper()
{
  char v6; // bl

  if ( a1 >= 0 && a1 < dword_ABF3A0 ) /*0x5bf26a*/
  {
    v6 = g_FramePresent_State; /*0x5bf275*/
    g_FramePresent_State = 0; /*0x5bf289*/
    Movie::Play(-1, a2, a3, a4, a5, a6, 0); /*0x5bf296*/
    g_FramePresent_State = v6; /*0x5bf29b*/
  }
}
}
// 0x7209D0
namespace gamemd {
AbstractClass * * Movie::Update()
{
  int v2; // eax
  int v3; // eax

  v2 = Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( v2 ) /*0x7209da*/
  {
    LOBYTE(v2) = byte_A8ED64; /*0x7209e0*/
    if ( !byte_A8ED64 ) /*0x7209e7*/
    {
      LOBYTE(v2) = g_ThemeMIXLoaded; /*0x7209ed*/
      if ( g_ThemeMIXLoaded ) /*0x7209f4*/
      {
        v2 = *(_DWORD *)(this + 12); /*0x7209fa*/
        if ( v2 > 0 ) /*0x7209ff*/
        {
          if ( !*(_DWORD *)(this + 44) ) /*0x720a01*/
            goto LABEL_10; /*0x720a01*/
          if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering() ) /*0x720a0f*/
            Audio::Release(*(_DWORD *)(this + 44)); /*0x720a1b*/
          LOBYTE(v2) = Audio::IsSoundPlaying(*(_DWORD *)(this + 44)) != 0; /*0x720a2a*/
          if ( !(_BYTE)v2 ) /*0x720a2f*/
          {
  LABEL_10:
            v2 = *(_DWORD *)(this + 8); /*0x720a31*/
            if ( v2 != -1 && v2 != -3 && !g_IKnowWhatImDoing ) /*0x720a46*/
            {
              if ( v2 == -2 ) /*0x720a4b*/
              {
                v3 = Movie::SelectNextBuildableType(*(_DWORD *)(this + 4)); /*0x720a53*/
                *(_DWORD *)(this + 8) = v3; /*0x720a5e*/
                Debug::Log("Theme::AI(Next song = %d)\n", v3); /*0x720a61*/
              }
              LOBYTE(v2) = ThemeClass::Play(*(_DWORD *)(this + 8)); /*0x720a6f*/
              *(_DWORD *)(this + 8) = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return v2; /*0x720a7b*/
}
}
// 0x720A80
namespace gamemd {
unsigned int Movie::SelectNextBuildableType(AnimClass * aP1)
{
  unsigned int v2; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = aP1; /*0x720a81*/
  if ( (aP1 <= -1 || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 24) + 4 * aP1) + 649) || *(_BYTE *)(this + 16)) && aP1 >= 0 ) /*0x720aa7*/
    return v2; /*0x720b18*/
  if ( *(_BYTE *)(this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = Random::Range(Randomizer_Global, 0, *(_DWORD *)(this + 36) - 1); /*0x720abe*/
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != aP1 && RulesClass::IsTypeBuildable((_DWORD *)this, v5) ) /*0x720ad5*/
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
    v9 = *(_DWORD *)(this + 36) + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      if ( (signed int)++v2 >= *(_DWORD *)(this + 36) ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( RulesClass::IsTypeBuildable((_DWORD *)this, v2) ) /*0x720b05*/
        return v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }
}
}
// 0x49BC80
namespace gamemd {
char Movie::GetSectionID(unsigned int * a2)
{
  if ( !*(_BYTE *)(this + 108) ) /*0x49bc80*/
    return 0; /*0x49bc87*/
  *a2 = *(_DWORD *)(this + 68); /*0x49bc93*/
  return 1; /*0x49bc89*/
}
} // namespace gamemd

// 0x49BCC0
namespace gamemd {
char Movie::GetState(CCINIClass * aP1)
{
  if ( !*(_BYTE *)(this + 108) ) /*0x49bcc0*/
    return 0; /*0x49bcc7*/
  *aP1 = *(_DWORD *)(this + 56); /*0x49bcd3*/
  return 1; /*0x49bcc9*/
}
} // namespace gamemd
