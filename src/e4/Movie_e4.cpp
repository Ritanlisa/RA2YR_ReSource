// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Movie_e4.hpp"

// 0x49CAF0
namespace gamemd {
char Movie::SetupScreen(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Movie::SetupScreen(int this, CCINIClass *aP1)
{
  CCINIClass *v3; // eax
  TechnoTypeClass *v4; // ecx
  char *v5; // ebp
  CCINIClass *v6; // ecx
  int i; // edi
  CCINIClass *v8; // edx
  int v9; // edi
  CCINIClass *v10; // ebx
  int v12; // [esp+8h] [ebp-4h]

  if ( !MEMORY[0x89F578] ) /*0x49cafc*/
    CampaignClass::LoadFromINI((int)&MEMORY[0x89F518]); /*0x49cb03*/
  v3 = aP1; /*0x49cb08*/
  if ( (int)aP1 < 0 || (int)aP1 >= MEMORY[0x89F574] ) /*0x49cb1c*/
    return 0; /*0x49cc46*/
  v4 = (TechnoTypeClass *)MEMORY[0x89F570]; /*0x49cb29*/
  *(_BYTE *)(this + 108) = 1; /*0x49cb2f*/
  this->Movie_field_0x38 = -1; /*0x49cb33*/
  v5 = &v4->vtable0[76 * (_DWORD)aP1]; /*0x49cb3a*/
  v6 = *(CCINIClass **)(this + 68); /*0x49cb3d*/
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
        v8 = *(CCINIClass **)(this + 60); /*0x49cb74*/
        if ( *(_DWORD *)&v8->__pad_0[4 * i] ) /*0x49cb77*/
          __3_YAXPAX_Z(*(void **)&v8->__pad_0[4 * i]); /*0x49cb7f*/
      }
      __3_YAXPAX_Z(*(void **)(this + 60)); /*0x49cb93*/
    }
    *(_DWORD *)(this + 60) = 0; /*0x49cb9b*/
    *(_DWORD *)(this + 64) = 0; /*0x49cb9e*/
    *(_DWORD *)(this + 60) = __2_YAPAXI_Z(4 * v5[8]); /*0x49cbae*/
    v9 = 0; /*0x49cbb7*/
    if ( v5[8] > 0 ) /*0x49cbbb*/
    {
      v12 = 0; /*0x49cbbd*/
      do /*0x49cc26*/
      {
        v10 = (CCINIClass *)Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)2); /*0x49cbde*/
        *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * v9) = __2_YAPAXI_Z(0x104u); /*0x49cbf1*/
        strncpy( /*0x49cc0c*/
          *(char **)(*(_DWORD *)(this + 60) + 4 * v9++),
          (const char *)(*((_DWORD *)v5 + 3) + 260 * ((_DWORD)v10 + v12)),
          0x103u);
        v12 += 3; /*0x49cc22*/
      }
      while ( v9 < v5[8] ); /*0x49cc26*/
    }
    v3 = aP1; /*0x49cc2e*/
    *(_DWORD *)(this + 64) = v5[8]; /*0x49cc32*/
    this->Movie_field_0x38 = 0; /*0x49cc35*/
  }
  this->Movie_field_0x44 = v3; /*0x49cc39*/
  return 1; /*0x49cc3d*/
}
}
} // namespace gamemd

// 0x49E3B0
namespace gamemd {
char Movie::GetSection(CCINIClass * aP1, CCINIClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Movie::GetSection(int this, CCINIClass *aP1, CCINIClass *aP2)
{
  if ( !*(_BYTE *)(this + 96) ) /*0x49e3b3*/
    CampaignClass::LoadFromINI(this); /*0x49e3ba*/
  if ( (int)aP1 < 0 || (int)aP1 >= *(_DWORD *)(this + 92) ) /*0x49e3ca*/
  {
    *(_DWORD *)aP2->__pad_0 = 0; /*0x49e3e9*/
    return 0; /*0x49e3ef*/
  }
  else
  {
    *(_DWORD *)aP2->__pad_0 = *(_DWORD *)(this + 88) + 76 * (_DWORD)aP1; /*0x49e3df*/
    return 1; /*0x49e3dd*/
  }
}
}
} // namespace gamemd

// 0x5BED40
namespace gamemd {
void Movie::Play(CCINIClass * aP0, int a2, CCINIClass * aP2, IUnknown * aP3, char a5, char a6, char a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Movie::Play(CCINIClass *aP0, int a2, CCINIClass *aP2, IUnknown *aP3, char a5, char a6, char a7)
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
  _DWORD v22[13]; // [esp+1Ch] [ebp-134h] BYREF
  char Str[256]; // [esp+50h] [ebp-100h] BYREF

  v20 = v7; /*0x5bed49*/
  if ( Render_Play(v8, Str, 1) && !*(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x5bed6a*/
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
        if ( MovieClass::GetWidth(*(_DWORD **)VQMovie->__pad_0) >= 320 /*0x5bef81*/
          || MovieClass::GetHeight(*(_DWORD **)v12->__pad_0) >= 200 )
        {
          v15 = (_BYTE)a2 == 1 && HouseClass_Player.__pad_5568[22752] == 1; /*0x5befba*/
          if ( stru_89E138.__pad_14B0[6150] == 1 && v15 ) /*0x5befcb*/
          {
            fallRate = v12->fallRate; /*0x5befd7*/
            if ( fallRate < *(int *)&stru_87C374.__pad_579C[21672] /*0x5befec*/
              && (int)v12->nextObject < *(int *)&stru_87C374.__pad_579C[21676] )
            {
              v16 = (double)*(int *)&stru_87C374.__pad_579C[21672]; /*0x5befee*/
              v12->ambientSoundController[0] = *(_DWORD *)&stru_87C374.__pad_579C[21672]; /*0x5beff4*/
              v17 = Math::RoundToInt(v16 / (double)fallRate); /*0x5bf001*/
              v12->attachedTag = 0; /*0x5bf008*/
              v12->ambientSoundController[1] = v17; /*0x5bf00b*/
              v12->attachedBomb = (void *)((*(_DWORD *)&stru_87C374.__pad_579C[21676] - v17) / 2); /*0x5bf01d*/
              Debug::Log(); /*0x5bf02b*/
            }
          }
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5bf03b*/
          if ( (_BYTE)aP2 ) /*0x5bf045*/
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bf050*/
              *(_DWORD *)&stru_87C374.__pad_579C[22524],
              0);
            LOBYTE(v18) = 1; /*0x5bf059*/
            Frame::Present(v18, 0); /*0x5bf05c*/
          }
          if ( !*((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            AudioQueue::IncrementPriority(); /*0x5bf06e*/
            AudioQueue::ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x2000); /*0x5bf083*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x2000); /*0x5bf093*/
            *((_BYTE *)&g_MatrixTransformState + 1356) = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(44100, 16, 2); /*0x5bf0b0*/
          RenderMovieFrame((int)v12, 1, v20, 0); /*0x5bf0bf*/
          sub_40A850(); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( *((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            Mixer::RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x4000); /*0x5bf0f0*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x4000); /*0x5bf100*/
            AudioMixer::Pump(); /*0x5bf105*/
            *((_BYTE *)&g_MatrixTransformState + 1356) = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v12); /*0x5bf112*/
          BinkMovie::Cleanup(v12); /*0x5bf119*/
          __3_YAXPAX_Z(v12); /*0x5bf11f*/
          if ( (_BYTE)aP0 == 1 ) /*0x5bf130*/
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bf13b*/
              *(_DWORD *)&stru_87C374.__pad_579C[22524],
              0);
            LOBYTE(v19) = 1; /*0x5bf144*/
            Frame::Present(v19, 0); /*0x5bf147*/
          }
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5bf154*/
          MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5bf15e*/
          Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5bf169*/
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
      Debug::Log(); /*0x5bedad*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5bedbd*/
      if ( (_BYTE)aP2 ) /*0x5bedc7*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bedd2*/
          *(_DWORD *)&stru_87C374.__pad_579C[22524],
          0);
        LOBYTE(v10) = 1; /*0x5beddb*/
        Frame::Present(v10, 0); /*0x5bedde*/
      }
      BinkMovie::Close(v22, Str); /*0x5bedec*/
      if ( (_BYTE)aP3 == 1 ) /*0x5bedf9*/
        LOBYTE(v22[0]) = 1; /*0x5bedfb*/
      if ( !*((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        AudioQueue::IncrementPriority(); /*0x5bee0d*/
        AudioQueue::ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x2000); /*0x5bee22*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x2000); /*0x5bee32*/
        *((_BYTE *)&g_MatrixTransformState + 1356) = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(44100, 16, 2); /*0x5bee4f*/
      BinkMovie::Play(v22); /*0x5bee58*/
      sub_40A850(); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( *((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        Mixer::RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x4000); /*0x5bee89*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x4000); /*0x5bee99*/
        AudioMixer::Pump(); /*0x5bee9e*/
        *((_BYTE *)&g_MatrixTransformState + 1356) = 0; /*0x5beea3*/
      }
      if ( (_BYTE)aP0 == 1 ) /*0x5beeb1*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5beebc*/
          *(_DWORD *)&stru_87C374.__pad_579C[22524],
          0);
        LOBYTE(v11) = 1; /*0x5beec5*/
        Frame::Present(v11, 0); /*0x5beec8*/
      }
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5beed3*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5beee0*/
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5beeea*/
      BinkMovie::Stop((int)v22); /*0x5beef3*/
    }
  }
}
}
} // namespace gamemd

// 0x5BF260
namespace gamemd {
int Movie_PlayWrapper()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x7209D0
namespace gamemd {
char Movie::Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Movie::Update(int this)
{
  int IsSoundEnabled; // eax
  int v3; // ecx

  IsSoundEnabled = Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( IsSoundEnabled ) /*0x7209da*/
  {
    LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[632]; /*0x7209e0*/
    if ( !MEMORY[0xA8D63C].__pad_14B0[632] ) /*0x7209e7*/
    {
      LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[392]; /*0x7209ed*/
      if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x7209f4*/
      {
        IsSoundEnabled = this->Movie_field_0xC; /*0x7209fa*/
        if ( IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(_DWORD *)(this + 44); /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering(v3) ) /*0x720a0f*/
            Audio::Release(*(_DWORD **)(this + 44)); /*0x720a1b*/
          LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD **)(this + 44)) != 0; /*0x720a2a*/
          if ( !(_BYTE)IsSoundEnabled ) /*0x720a2f*/
          {
LABEL_10:
            IsSoundEnabled = this->Movie_field_0x8; /*0x720a31*/
            if ( IsSoundEnabled != -1 && IsSoundEnabled != -3 && !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x720a46*/
            {
              if ( IsSoundEnabled == -2 ) /*0x720a4b*/
              {
                this->Movie_field_0x8 = Movie::SelectNextBuildableType(this, *(AnimClass **)(this + 4)); /*0x720a5e*/
                Debug::Log(); /*0x720a61*/
              }
              LOBYTE(IsSoundEnabled) = ThemeClass::Play((int *)this, *(Movie **)(this + 8)); /*0x720a6f*/
              this->Movie_field_0x8 = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720a7b*/
}
}
} // namespace gamemd

// 0x720A80
namespace gamemd {
unsigned int Movie::SelectNextBuildableType(AnimClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall Movie::SelectNextBuildableType(int this, AnimClass *aP1)
{
  TechnoTypeClass *v2; // ebp
  int v4; // edi
  TechnoTypeClass *v5; // eax
  TechnoTypeClass *v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = (TechnoTypeClass *)aP1; /*0x720a81*/
  if ( ((int)aP1 <= -1 /*0x720aa7*/
     || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 24) + 4 * (_DWORD)aP1) + 649)
     || *(_BYTE *)(this + 16))
    && (int)aP1 >= 0 )
  {
    return (unsigned int)v2; /*0x720b18*/
  }
  if ( *(_BYTE *)(this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = (TechnoTypeClass *)Random::Range( /*0x720abe*/
                                &MEMORY[0x87F8E4].__pad_5568[7484],
                                0,
                                (IUnknown *)(this->Movie_field_0x24 - 1));
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != (TechnoTypeClass *)aP1 && RulesClass::IsTypeBuildable((_DWORD *)this, v5) ) /*0x720ad5*/
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
    v9 = this->Movie_field_0x24 + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      v2 = (TechnoTypeClass *)((char *)v2 + 1); /*0x720af8*/
      if ( (int)v2 >= this->Movie_field_0x24 ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( RulesClass::IsTypeBuildable((_DWORD *)this, v2) ) /*0x720b05*/
        return (unsigned int)v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }
}
}
} // namespace gamemd

// 0x49BC80
namespace gamemd {
char Movie::GetSectionID(unsigned int * a2)
{
{
    if ( !(unsigned char)this->Movie_field_0x6C )
    return 0;
    *a2 = this->Movie_field_0x44;
    return 1;
}
}
} // namespace gamemd

// 0x49BCC0
namespace gamemd {
char Movie::GetState(CCINIClass * aP1)
{
{
    if ( !(unsigned char)this->Movie_field_0x6C )
    return 0;
    *(int *)aP1->__pad_0 = this->Movie_field_0x38;
    return 1;
}
}
} // namespace gamemd
