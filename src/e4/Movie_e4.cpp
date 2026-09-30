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

// 0x49CAF0
namespace gamemd {
AbstractClass * * Movie::SetupScreen(CCINIClass * aP1)
{

  CCINIClass *v3; // eax
  TechnoTypeClass *v4; // ecx
  char *v5; // ebp
  CCINIClass *v6; // ecx
  int i; // edi
  CCINIClass *v8; // edx
  int v9; // edi
  void * v10;
  int v12; // [esp+8h] [ebp-4h]

  if ( !g_abs_89F578 ) /*0x49cafc*/
    ((CampaignClass *)((int)&g_abs_89F518))->LoadFromINI(); /*0x49cb03*/
  v3 = aP1; /*0x49cb08*/
  if ( (int)aP1 < 0 || (int)aP1 >= (int)((int))((int))(g_abs_89F574) ) /*0x49cb1c*/
    return 0; /*0x49cc46*/
  v4 = (TechnoTypeClass *)g_abs_89F570; /*0x49cb29*/
  *((unsigned char *)this + 108) = 1; /*0x49cb2f*/
  *((unsigned int *)this + 14) = -1; /*0x49cb33*/
  v5 = &v4->vtable0[76 * (unsigned int)aP1]; /*0x49cb3a*/
  v6 = *(CCINIClass **)((char *)this + 68); /*0x49cb3d*/
  *((unsigned int *)this + 18) = 0; /*0x49cb42*/
  *((unsigned int *)this + 19) = 0; /*0x49cb45*/
  *((unsigned int *)this + 20) = 0; /*0x49cb48*/
  *((unsigned int *)this + 21) = 0; /*0x49cb4b*/
  *((unsigned int *)this + 24) = 0; /*0x49cb4e*/
  *((unsigned int *)this + 25) = 0; /*0x49cb51*/
  *((unsigned int *)this + 22) = 0; /*0x49cb54*/
  *((unsigned int *)this + 23) = 0; /*0x49cb57*/
  *((unsigned int *)this + 26) = 0; /*0x49cb5a*/
  if ( v6 != aP1 ) /*0x49cb5d*/
  {
    if ( *((unsigned int *)this + 15) ) /*0x49cb63*/
    {
      for ( i = 0; i < *((unsigned int *)this + 16); ++i ) /*0x49cb72*/
      {
        v8 = *(CCINIClass **)((char *)this + 60); /*0x49cb74*/
        if ( *(unsigned int *)&v8-((unsigned int *)(>__pad_0))[4 * i] ) /*0x49cb77*/
          RA2_OPDEL(*(void **)&v8->__pad_0[4 * i]); /*0x49cb7f*/
      }
      RA2_OPDEL(*(void **)((char *)this + 60)); /*0x49cb93*/
    }
    *((unsigned int *)this + 15) = 0; /*0x49cb9b*/
    *((unsigned int *)this + 16) = 0; /*0x49cb9e*/
    *((unsigned int *)this + 15) = RA2_OPNEW(4 * v5[8]); /*0x49cbae*/
    v9 = 0; /*0x49cbb7*/
    if ( v5[8] > 0 ) /*0x49cbbb*/
    {
      v12 = 0; /*0x49cbbd*/
      do /*0x49cc26*/
      {
        v10 = (unsigned int)((CCINIClass *)Random::Range(&g_abs_A8B230->random[1], 0, (IUnknown *)2));
        *(unsigned int *)(*((unsigned int *)this + 15) + 4 * v9) = RA2_OPNEW(0x104u); /*0x49cbf1*/
        strncpy( /*0x49cc0c*/
          *(char **)(*((unsigned int *)this + 15) + 4 * v9++),
          (const char *)(*((unsigned int *)v5 + 3) + 260 * ((unsigned int)v10 + v12)),
          0x103u);
        v12 += 3; /*0x49cc22*/
      }
      while ( v9 < v5[8] ); /*0x49cc26*/
    }
    v3 = (gamemd::CCINIClass *)((unsigned int)(aP1));
    *((unsigned int *)this + 16) = v5[8]; /*0x49cc32*/
    *((unsigned int *)this + 14) = 0; /*0x49cc35*/
  }
  *((unsigned int *)this + 17) = v3; /*0x49cc39*/
  return 1; /*0x49cc3d*/

}
}
// 0x49E3B0
namespace gamemd {
CampaignClass * * Movie::GetSection(CCINIClass * aP1, CCINIClass * aP2)
{

  if ( !*((unsigned char *)this + 96) ) /*0x49e3b3*/
    ((CampaignClass *)(this))->LoadFromINI(); /*0x49e3ba*/
  if ( (int)aP1 < 0 || (int)aP1 >= *((unsigned int *)this + 23) ) /*0x49e3ca*/
  {
    *(unsigned int *)aP2->__pad_0 = 0; /*0x49e3e9*/
    return 0; /*0x49e3ef*/
  }
  else
  {
    *(unsigned int *)aP2->__pad_0 = *((unsigned int *)this + 22) + 76 * (unsigned int)aP1; /*0x49e3df*/
    return 1; /*0x49e3dd*/
  }

}
}
// 0x5BED40
namespace gamemd {
int Movie::Play(CCINIClass * aP0, int a2, CCINIClass * aP2, IUnknown * aP3, char a5, char a6, char a7)
{

  int v7; // edx
  const char *v8; // ecx
  char *v9; // eax
  Frame *v10; // ecx
  Frame *v11; // ecx
  int eax16a; // eax
  ObjectClass *VQMovie; // eax
  ObjectClass *v12; // esi
  bool v15; // al
  double v16; // st7
  int v17; // eax
  Frame *v18; // ecx
  Frame *v19; // ecx
  int v20; // [esp+10h] [ebp-140h]
  int fallRate; // [esp+14h] [ebp-13Ch]
  unsigned int v22[13]; // [esp+1Ch] [ebp-134h] BYREF
  char Str[256]; // [esp+50h] [ebp-100h] BYREF

  v20 = v7; /*0x5bed49*/
  if ( Render_Play(v8, Str, 1) && !*(unsigned int *)&HouseClass_Player.__pad_5568[8068] ) /*0x5bed6a*/
  {
    Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5bed76*/
    v9 = strrchr(Str, 46); /*0x5bed82*/
    if ( !v9 || _strcmpi(v9, aBik) ) /*0x5bed98*/
    {
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5bef0b*/
      eax16a = Math::RoundToInt(*(float *)&HouseClass_Player.__pad_5568[22760] * 255.0); /*0x5bef24*/
      VQMovie = LoadVQMovie(Str, *(int **)&stru_87C374.__pad_579C[22528], 0, 0, 0, 0, 0, 0, 0, 0, eax16a, 1); /*0x5bef56*/
      v12 = VQMovie; /*0x5bef5b*/
      if ( VQMovie ) /*0x5bef61*/
      {
        if ( MovieClass::GetWidth(*(unsigned int **)VQMovie->__pad_0) >= 320 /*0x5bef81*/
          || MovieClass::GetHeight(*(unsigned int **)v12->__pad_0) >= 200 )
        {
          v15 = (int)((unsigned char)a2 == 1 && HouseClass_Player.__pad_5568[22752] == 1);
          if ( stru_89E138.__pad_14B0[6150] == 1 && v15 ) /*0x5befcb*/
          {
            fallRate = (int)(v12->fallRate);
            if ( fallRate < *(int *)&stru_87C374.__pad_579C[21672] /*0x5befec*/
              && (int)v12->nextObject < *(int *)&stru_87C374.__pad_579C[21676] )
            {
              v16 = (double)*(int *)&stru_87C374.__pad_579C[21672]; /*0x5befee*/
              v12->ambientSoundController[0] = *(unsigned int *)&stru_87C374.__pad_579C[21672]; /*0x5beff4*/
              v17 = Math::RoundToInt(v16 / (double)fallRate); /*0x5bf001*/
              v12->attachedTag = 0; /*0x5bf008*/
              v12->ambientSoundController[1] = v17; /*0x5bf00b*/
              v12->attachedBomb = (void *)((*(unsigned int *)&stru_87C374.__pad_579C[21676] - v17) / 2); /*0x5bf01d*/
              this->Debug::Log(); /*0x5bf02b*/
            }
          }
          (*(void (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23344] + 12))(*(unsigned int *)&stru_87C374.__pad_579C[23344]); /*0x5bf03b*/
          if ( (unsigned char)aP2 ) /*0x5bf045*/
          {
            (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bf050*/
              *(unsigned int *)&stru_87C374.__pad_579C[22524],
              0);
            IDA_LOBYTE(v18) = 1; /*0x5bf059*/
            ((Frame *)(v18))->Present(0); /*0x5bf05c*/
          }
          if ( !*((unsigned char *)&g_MatrixTransformState + 1356) ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            this->AudioQueue::IncrementPriority(); /*0x5bf06e*/
            this->AudioQueue::ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x2000); /*0x5bf083*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x2000); /*0x5bf093*/
            *((unsigned char *)&g_MatrixTransformState + 1356) = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(44100, 16, 2); /*0x5bf0b0*/
          RenderMovieFrame((int)v12, 1, v20, 0); /*0x5bf0bf*/
          sub_40A850(); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( *((unsigned char *)&g_MatrixTransformState + 1356) ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            Mixer::RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x4000); /*0x5bf0f0*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x4000); /*0x5bf100*/
            AudioMixer::Pump(); /*0x5bf105*/
            *((unsigned char *)&g_MatrixTransformState + 1356) = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v12); /*0x5bf112*/
          BinkMovie::Cleanup(v12); /*0x5bf119*/
          RA2_OPDEL(v12); /*0x5bf11f*/
          if ( (unsigned char)aP0 == 1 ) /*0x5bf130*/
          {
            (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bf13b*/
              *(unsigned int *)&stru_87C374.__pad_579C[22524],
              0);
            IDA_LOBYTE(v19) = 1; /*0x5bf144*/
            ((Frame *)(v19))->Present(0); /*0x5bf147*/
          }
          (*(void (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23344] + 16))(*(unsigned int *)&stru_87C374.__pad_579C[23344]); /*0x5bf154*/
          MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5bf15e*/
          Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5bf169*/
        }
        else
        {
          MovieContext::Cleanup(v12); /*0x5bef85*/
          BinkMovie::Cleanup(v12); /*0x5bef8c*/
          RA2_OPDEL(v12); /*0x5bef92*/
        }
      }
    }
    else
    {
      this->Debug::Log(); /*0x5bedad*/
      (*(void (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23344] + 12))(*(unsigned int *)&stru_87C374.__pad_579C[23344]); /*0x5bedbd*/
      if ( (unsigned char)aP2 ) /*0x5bedc7*/
      {
        (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bedd2*/
          *(unsigned int *)&stru_87C374.__pad_579C[22524],
          0);
        IDA_LOBYTE(v10) = 1; /*0x5beddb*/
        ((Frame *)(v10))->Present(0); /*0x5bedde*/
      }
      BinkMovie::Close(v22, Str); /*0x5bedec*/
      if ( (unsigned char)aP3 == 1 ) /*0x5bedf9*/
        IDA_LOBYTE(v22[0]) = 1; /*0x5bedfb*/
      if ( !*((unsigned char *)&g_MatrixTransformState + 1356) ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        this->AudioQueue::IncrementPriority(); /*0x5bee0d*/
        this->AudioQueue::ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x2000); /*0x5bee22*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x2000); /*0x5bee32*/
        *((unsigned char *)&g_MatrixTransformState + 1356) = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(44100, 16, 2); /*0x5bee4f*/
      BinkMovie::Play(v22); /*0x5bee58*/
      sub_40A850(); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( *((unsigned char *)&g_MatrixTransformState + 1356) ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        Mixer::RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x4000); /*0x5bee89*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x4000); /*0x5bee99*/
        AudioMixer::Pump(); /*0x5bee9e*/
        *((unsigned char *)&g_MatrixTransformState + 1356) = 0; /*0x5beea3*/
      }
      if ( (unsigned char)aP0 == 1 ) /*0x5beeb1*/
      {
        (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5beebc*/
          *(unsigned int *)&stru_87C374.__pad_579C[22524],
          0);
        IDA_LOBYTE(v11) = 1; /*0x5beec5*/
        ((Frame *)(v11))->Present(0); /*0x5beec8*/
      }
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5beed3*/
      (*(void (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23344] + 16))(*(unsigned int *)&stru_87C374.__pad_579C[23344]); /*0x5beee0*/
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5beeea*/
      BinkMovie::Stop((int)v22); /*0x5beef3*/
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
    Movie::Play(-1, a2, a3, a4, a5, a6, 0); /*0x5bf296*/
    byte_A8E378 = v6; /*0x5bf29b*/
  }
}
}
// 0x7209D0
namespace gamemd {
int Movie::Update()
{

  int IsSoundEnabled; // eax
  int v3; // ecx

  IsSoundEnabled = this->Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( IsSoundEnabled ) /*0x7209da*/
  {
    IDA_LOBYTE(IsSoundEnabled) = g_abs_A8D63C; /*0x7209e0*/
    if ( !g_abs_A8D63C ) /*0x7209e7*/
    {
      IDA_LOBYTE(IsSoundEnabled) = g_abs_A8D63C; /*0x7209ed*/
      if ( g_abs_A8D63C ) /*0x7209f4*/
      {
        IsSoundEnabled = *(unsigned int *)(this + 12); /*0x7209fa*/
        if ( IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(unsigned int *)(this + 44); /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( *(unsigned char *)(this + 17) && !AudioSample::IsBuffering(v3) ) /*0x720a0f*/
            Audio::Release(*(unsigned int **)(this + 44)); /*0x720a1b*/
          IDA_LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(unsigned int **)(this + 44)) != 0; /*0x720a2a*/
          if ( !(unsigned char)IsSoundEnabled ) /*0x720a2f*/
          {
LABEL_10:
            IsSoundEnabled = *(unsigned int *)(this + 8); /*0x720a31*/
            if ( IsSoundEnabled != -1 && IsSoundEnabled != -3 && !*(unsigned int *)&g_abs_A8D63C ) /*0x720a46*/
            {
              if ( IsSoundEnabled == -2 ) /*0x720a4b*/
              {
                *(unsigned int *)(this + 8) = Movie::SelectNextBuildableType(this, *(AnimClass **)(this + 4)); /*0x720a5e*/
                this->Debug::Log(); /*0x720a61*/
              }
              IDA_LOBYTE(IsSoundEnabled) = ThemeClass::Play((int *)this, *(Movie **)(this + 8)); /*0x720a6f*/
              *(unsigned int *)(this + 8) = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720a7b*/

}
}
// 0x720A80
namespace gamemd {
unsigned int Movie::SelectNextBuildableType(AnimClass * aP1)
{

  TechnoTypeClass *v2; // ebp
  int v4; // edi
  TechnoTypeClass *v5; // eax
  TechnoTypeClass *v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = (TechnoTypeClass *)aP1; /*0x720a81*/
  if ( ((int)aP1 <= -1 /*0x720aa7*/
     || *(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 6) + 4 * (unsigned int)aP1) + 649)
     || *((unsigned char *)this + 16))
    && (int)aP1 >= 0 )
  {
    return (unsigned int)v2; /*0x720b18*/
  }
  if ( *((unsigned char *)this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = (TechnoTypeClass *)Random::Range( /*0x720abe*/
                                &g_abs_87F8E4,
                                0,
                                (IUnknown *)(*((unsigned int *)this + 9) - 1));
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != (TechnoTypeClass *)aP1 && RulesClass::IsTypeBuildable((unsigned int *)this, v5) ) /*0x720ad5*/
      {
        v7 = v4 == 1000; /*0x720ade*/
        break; /*0x720ade*/
      }
    }
    if ( v7 ) /*0x720ae4*/
      return 0; /*0x720ae6*/
    return (unsigned int)v6; /*0x720ae8*/
  }
  else
  {
    v9 = *((unsigned int *)this + 9) + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      v2 = (TechnoTypeClass *)((char *)v2 + 1); /*0x720af8*/
      if ( (int)v2 >= *((unsigned int *)this + 9) ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( RulesClass::IsTypeBuildable((unsigned int *)this, v2) ) /*0x720b05*/
        return (unsigned int)v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }

}
}
// 0x49BC80
namespace gamemd {
char Movie::GetSectionID(unsigned int * a2)
{

  if ( !*((unsigned char *)this + 108) ) /*0x49bc80*/
    return 0; /*0x49bc87*/
  *a2 = *((unsigned int *)this + 17); /*0x49bc93*/
  return 1; /*0x49bc89*/

}
} // namespace gamemd

// 0x49BCC0
namespace gamemd {
char Movie::GetState(CCINIClass * aP1)
{

  if ( !*((unsigned char *)this + 108) ) /*0x49bcc0*/
    return 0; /*0x49bcc7*/
  *(unsigned int *)aP1->__pad_0 = *((unsigned int *)this + 14); /*0x49bcd3*/
  return 1; /*0x49bcc9*/

}
} // namespace gamemd
