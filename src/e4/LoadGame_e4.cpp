// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/VectorClass_Building_e4.hpp"
#include "e4/classes/VectorClass_ptr_SuperClass_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/E4Recv_65FB80_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/AudioSample_e4.hpp"
#include "e4/classes/DListNode_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x660840
namespace gamemd {
int LoadGame::LoadTriggerEvents()
{

  int LoadGame_field_0x10; // edx
  int v2; // edi
  int LoadGame_field_0x04; // ecx
  void *v5; // esi
  int v6; // eax
  int v7; // eax
  int v9; // esi
  ObjectClass *v10; // eax
  unsigned int *_65FB80; // eax
  int v12; // [esp+20h] [ebp-8h] BYREF
  int v13; // [esp+24h] [ebp-4h] BYREF

  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x660840*/
  v2 = stru_B04DA8.LoadGame_field_0x10 - 1; /*0x66084d*/
  if ( stru_B04DA8.LoadGame_field_0x10 - 1 >= 0 ) /*0x660856*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660858*/
    do /*0x6608cb*/
    {
      v5 = *(void **)(LoadGame_field_0x04 + 4 * v2); /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = *(unsigned int *)(LoadGame_field_0x04 + 4 * v2); /*0x660875*/
        v6 = (*(int (**)(LoadGame *, int *))(*(unsigned int *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v12); /*0x660879*/
        if ( v6 != -1 ) /*0x66087f*/
          LoadGame::RemoveItem(&stru_B04DA8, v6); /*0x660887*/
        __3_YAXPAX_Z(v5); /*0x66088d*/
        LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660892*/
        LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x660898*/
      }
      if ( v2 < LoadGame_field_0x10 ) /*0x6608a3*/
      {
        --LoadGame_field_0x10; /*0x6608a5*/
        v7 = v2; /*0x6608a6*/
        for ( stru_B04DA8.LoadGame_field_0x10 = LoadGame_field_0x10; v7 < stru_B04DA8.LoadGame_field_0x10; ++v7 ) /*0x6608b0*/
        {
          *(unsigned int *)(LoadGame_field_0x04 + 4 * v7) = *(unsigned int *)(LoadGame_field_0x04 + 4 * v7 + 4); /*0x6608b6*/
          LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x6608b9*/
          LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x6608bf*/
        }
      }
      --v2; /*0x6608ca*/
    }
    while ( v2 >= 0 ); /*0x6608cb*/
  }
  if ( (*(int (**)(LoadGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))(this, &v13, 4, 0) < 0 ) /*0x6608dd*/
    return 0; /*0x6608e8*/
  v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
      v10 = (ObjectClass *)__2_YAPAXI_Z(0x40u); /*0x6608f5*/
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        _65FB80 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        _65FB80 = 0; /*0x66091b*/
      }
      if ( (*(int (**)(LoadGame *, unsigned int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x660929*/
             this,
             _65FB80,
             64,
             0) < 0 )
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        return (*(int (**)(LoadGame *, int16_t *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x660932*/
                 this,
                 &word_B04D78,
                 4,
                 0) >= 0;
    }
    return 0; /*0x660929*/
  }
  return (*(int (**)(LoadGame *, int16_t *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x6608df*/
           this,
           &word_B04D78,
           4,
           0) >= 0;

}
    return 0; /*0x6608e8*/
  v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
      v10 = (unsigned int *)(RA2_OPNEW(0x40u));
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        v11 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        v11 = 0; /*0x66091b*/
      }
      ( this, _65FB80, 64, 0)
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        // glued-defhead: bool LoadGame::LoadTriggerEvents(LoadGame *this)
    }
    return 0; /*0x660929*/
  }
  ( this, &word_B04D78, 4, 0)

}
} // namespace gamemd
// 0x660F10
namespace gamemd {
void LoadGame::RemoveItem( int a2)
{

  int LoadGame_field_0x10; // edx
  int v3; // eax
  int v4; // edx

  LoadGame_field_0x10 = this->LoadGame_field_0x10; /*0x660f10*/
  v3 = a2; /*0x660f13*/
  if ( a2 >= LoadGame_field_0x10 ) /*0x660f19*/
    return 0; /*0x660f3c*/
  v4 = LoadGame_field_0x10 - 1; /*0x660f1b*/
  this->LoadGame_field_0x10 = v4; /*0x660f1e*/
  if ( a2 < v4 ) /*0x660f21*/
  {
    do /*0x660f34*/
    {
      ++v3; /*0x660f27*/
      *(unsigned int *)(this->LoadGame_field_0x04 + 4 * v3 - 4) = *(unsigned int *)(this->LoadGame_field_0x04 + 4 * v3); /*0x660f2b*/
    }
    while ( v3 < this->LoadGame_field_0x10 ); /*0x660f34*/
  }
  return 1; /*0x660f39*/

}
} // namespace gamemd
// 0x67E730
namespace gamemd {
void LoadGame::Start(LPSTREAM pStm)
{

  char result; // al
  int *Viewport; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ebp
  int v9; // ebp
  int v10; // ebp
  int v11; // ebp
  int v12; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  int v21; // ebp
  int v22; // ebp
  int v23; // ebp
  int v24; // ebp
  int v25; // ebp
  int v26; // ebp
  int v27; // ebp
  int v28; // ebp
  int v29; // ebp
  int v30; // ebp
  int v31; // ebp
  int v32; // ebp
  int v33; // ebp
  int v34; // ebp
  int v35; // ebp
  int v36; // ebp
  int v37; // ebp
  int v38; // ebp
  int v39; // ebp
  int v40; // ebp
  int v41; // ebp
  int v42; // ebp
  int v43; // ebp
  int v44; // ebp
  int v45; // ebp
  int v46; // ebp
  int v47; // ebp
  int v48; // ebp
  int v49; // ebp
  int v50; // ebp
  int v51; // ebp
  int v52; // ebp
  int v53; // ebp
  int v54; ... [31771 chars total]
}
} // namespace gamemd

// 0x69B5B0
namespace gamemd {
int LoadGame::LoadBlock300(int a2)
{

  int v2; // esi
  int v4; // eax
  bool result; // al

  v2 = a2; /*0x69b5b1*/
  result = 0; /*0x69b5f3*/
  if ( a2 ) /*0x69b5ba*/
  {
    if ( (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, &a2, 4, 0) >= 0 && a2 == 300 ) /*0x69b5d7*/
    {
      v4 = (*(int (**)(int, LoadGame *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      this->LoadGame_field_0x04 = -1; /*0x69b5e9*/
      if ( v4 >= 0 ) /*0x69b5f0*/
        return 1; /*0x69b5ba*/
    }
  }
  return result; /*0x69b5f2*/

}
} // namespace gamemd
// 0x751710
namespace gamemd {
int LoadGame::RestoreAudioState()
{

  LoadGame *v1; // edi
  int Next; // esi
  int NextAlt; // ebx
  int result; // eax
  AudioMixer *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int *v8; // eax
  int *v9; // esi
  int v10; // ebx
  int v11; // eax
  int v13; // [esp+24h] [ebp-2Ch]
  int v14; // [esp+28h] [ebp-28h] BYREF
  int v15; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+30h] [ebp-20h]
  int v17; // [esp+3Ch] [ebp-14h]
  unsigned int v18[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x751717*/
  Next = AudioQueue::GetNext((AudioQueue *)&stru_B1D290.isAliveFlag); /*0x751727*/
  if ( Next ) /*0x75172b*/
  {
    do /*0x751763*/
    {
      NextAlt = AudioQueue::GetNextAlt((AudioQueue *)Next); /*0x751737*/
      AudioController::Stop((AudioController *)(Next + 12)); /*0x751739*/
      LinkedList::Init((LinkedList *)Next); /*0x751740*/
      PushFrontLinkedListAlt(dword_B1D3A4, Next); /*0x75174d*/
      Next = NextAlt; /*0x751758*/
      --dword_B1D3A8; /*0x75175d*/
    }
    while ( NextAlt ); /*0x751763*/
  }
  AudioMixer::Shutdown(); /*0x751765*/
  result = (*(int (**)(LoadGame *, int *, int, unsigned int))(*(unsigned int *)v1->__pad_0 + 12))(v1, &v14, 4, 0); /*0x751776*/
  if ( result >= 0 ) /*0x75177b*/
  {
    v13 = 0; /*0x751785*/
    if ( v14 > 0 ) /*0x75178f*/
    {
      while ( 1 ) /*0x7517a1*/
      {
        result = (*(int (**)(LoadGame *, unsigned int *, int, unsigned int))(*(unsigned int *)v1->__pad_0 + 12))(v1, v18, 16, 0); /*0x7517a1*/
        v16 = result; /*0x7517a6*/
        if ( result < 0 ) /*0x7517aa*/
          break; /*0x7517aa*/
        if ( v18[0] != -1 && v18[0] < g_VocPlayState && v18[0] >= 0 ) /*0x7517cb*/
        {
          v5 = (AudioMixer *)**((unsigned int **)g_VocAudioConfig + v18[0]); /*0x7517da*/
          if ( v5 ) /*0x7517de*/
          {
            if ( AudioMixer::SetVolume(v5) ) /*0x7517e4*/
            {
              v6 = v18[1]; /*0x7517f9*/
              v7 = v18[2]; /*0x7517fd*/
              v17 = v18[3]; /*0x751803*/
              v15 = v18[0]; /*0x751807*/
              if ( v18[0] >= 0 ) /*0x75180b*/
              {
                v8 = LinkedList::Next((LinkedList *)dword_B1D3A4); /*0x751813*/
                v9 = v8; /*0x751818*/
                if ( v8 ) /*0x75181c*/
                {
                  ((AudioController *)((AudioController *)(v8 + 3)))->Init(); /*0x751823*/
                  DListNode::InitEmpty((DListNode *)v9); /*0x75182a*/
                  v9[12] = 0; /*0x751831*/
                  v9[11] = 0; /*0x75183a*/
                  v9[8] = v6; /*0x75183d*/
                  v10 = v17; /*0x75183f*/
                  v9[9] = v7; /*0x751843*/
                  v9[10] = v10; /*0x751846*/
                  StartAudioControllerAt(v15, v9 + 8, (int **)v9 + 3); /*0x75184d*/
                  InsertAfterDListNode((int)&stru_B1D290.isAliveFlag, v9); /*0x751859*/
                  v11 = ++dword_B1D3A8; /*0x751869*/
                  if ( dword_B1D3A8 > dword_B1D3AC ) /*0x751871*/
                    dword_B1D3AC = v11; /*0x751873*/
                  v1 = this; /*0x751878*/
                }
              }
            }
          }
        }
        if ( ++v13 >= v14 ) /*0x75188b*/
          return v16; /*0x751891*/
      }
    }
  }
  return result; /*0x751895*/

}
} // namespace gamemd
// 0x7533F0
namespace gamemd {
int LoadGame::LoadMagicAndAudio()
{

  int result; // eax
  int v3; // [esp+30h] [ebp-10h] BYREF
  unsigned int v4[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( dword_B1D4C4 ) /*0x7533fd*/
  {
    *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x7533ff*/
    dword_B1D4C4 = 0; /*0x753406*/
  }
  if ( g_InfantryDrawState ) /*0x753418*/
    Audio::Release(g_InfantryDrawState); /*0x75341a*/
  ThemeClass::ClearQueues(); /*0x75341f*/
  result = (*(int (**)(LoadGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))(this, &v3, 4, 0); /*0x753430*/
  if ( result >= 0 && v3 == 1450145875 ) /*0x753443*/
  {
    result = (*(int (**)(LoadGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))(this, &v3, 4, 0); /*0x753455*/
    if ( result >= 0 ) /*0x75345a*/
    {
      while ( v3 != 1450145861 ) /*0x753466*/
      {
        if ( v3 != 1450145865 ) /*0x75346e*/
          return -2147467259; /*0x7534cb*/
        result = (*(int (**)(LoadGame *, unsigned int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x75347c*/
                   this,
                   v4,
                   12,
                   0);
        if ( result >= 0 ) /*0x753481*/
        {
          if ( g_InfantryDrawState && v4[0] >= 0 && v4[0] < g_InfantrySelectState ) /*0x75349a*/
            Audio_Load(*((unsigned int *)g_InfantryRenderPool + v4[0]), v4[1], v4[2]); /*0x7534ae*/
          result = (*(int (**)(LoadGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x7534bf*/
                     this,
                     &v3,
                     4,
                     0);
          if ( result >= 0 ) /*0x7534c4*/
            continue; /*0x7534c4*/
        }
        return result; /*0x7534c4*/
      }
    }
  }
  return result; /*0x7534c6*/

}
} // namespace gamemd
// 0x54E7B0
namespace gamemd {
int LoadGame::LoadPointArray(int a2)
{

  int v3; // ebx
  int *v4; // edi
  int LoadGame_field_0x14; // eax
  int *p_LoadGame_field_0x0C; // esi
  int LoadGame_field_0x20; // ecx
  int v8; // eax
  int v9; // edx
  int v11; // [esp+28h] [ebp-8h] BYREF
  LoadGame *v12; // [esp+2Ch] [ebp-4h]
  int v13; // [esp+34h] [ebp+4h]

  v12 = this; /*0x54e7ba*/
  v3 = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, &v11, 4, 0); /*0x54e7cf*/
  if ( v3 >= 0 ) /*0x54e7d3*/
  {
    v13 = 0; /*0x54e7dd*/
    while ( v13 < v11 ) /*0x54e7e7*/
    {
      v4 = (int *)__2_YAPAXI_Z(8u); /*0x54e7fa*/
      v3 = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, v4, 8, 0); /*0x54e805*/
      if ( v3 < 0 ) /*0x54e809*/
        break; /*0x54e809*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4); /*0x54e811*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 1); /*0x54e81f*/
      LoadGame_field_0x14 = v12->LoadGame_field_0x14; /*0x54e828*/
      p_LoadGame_field_0x0C = &v12->LoadGame_field_0x0C; /*0x54e82b*/
      if ( v12->LoadGame_field_0x1C >= LoadGame_field_0x14 ) /*0x54e833*/
      {
        if ( !BYTE1(v12->LoadGame_field_0x18) && LoadGame_field_0x14 ) /*0x54e83e*/
          continue; /*0x54e83e*/
        LoadGame_field_0x20 = v12->LoadGame_field_0x20; /*0x54e840*/
        if ( LoadGame_field_0x20 <= 0 /*0x54e850*/
          || !(*(uint8_t (**)(int *, int, unsigned int))(*p_LoadGame_field_0x0C + 8))(
                &v12->LoadGame_field_0x0C,
                LoadGame_field_0x14 + LoadGame_field_0x20,
                0) )
        {
          continue; /*0x54e850*/
        }
      }
      v8 = (unsigned int)(p_LoadGame_field_0x0C[4]);
      v9 = (unsigned int)(p_LoadGame_field_0x0C[1]);
      p_LoadGame_field_0x0C[4] = (unsigned int)(v8 + 1);
      *(unsigned int *)(v9 + 4 * v8) = v4; /*0x54e863*/
      ++v13; /*0x54e871*/
    }
  }
  return v3; /*0x54e87b*/

}
} // namespace gamemd
// 0x721040
namespace gamemd {
int sub_721040(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // esi
  int v5; // [esp+20h] [ebp-4h] BYREF

  v1 = a1; /*0x721042*/
  v2 = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)a1 + 12))(a1, &a1, 4, 0); /*0x721056*/
  if ( v2 >= 0 ) /*0x72105a*/
  {
    v2 = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v1 + 12))(v1, &v5, 4, 0); /*0x72106f*/
    if ( v2 >= 0 ) /*0x721073*/
    {
      if ( byte_A8EBA5 ) /*0x721080*/
      {
        ThemeClass::Play(&unk_A83D10, a1); /*0x721090*/
        v3 = v5; /*0x72109a*/
        if ( byte_A8EC74 ) /*0x7210a0*/
        {
          if ( this->Audio::IsSoundEnabled() ) /*0x7210a6*/
          {
            if ( !byte_A8ED64 ) /*0x7210ba*/
            {
              dword_A83D18 = v3; /*0x7210bf*/
              if ( v3 != -1 && v3 != -2 && v3 != dword_A83D14 ) /*0x7210d2*/
              {
                this->Debug::Log(); /*0x7210da*/
                if ( dword_A83D3C ) /*0x7210ea*/
                {
                  if ( byte_A83D21 && !AudioSample::IsBuffering(dword_A83D3C) ) /*0x7210f5*/
                    Audio::Release((unsigned int *)dword_A83D3C); /*0x721104*/
                  if ( Audio::IsSoundPlaying((unsigned int *)dword_A83D3C) != 0 ) /*0x721116*/
                  {
                    if ( dword_A83D3C ) /*0x721125*/
                      ThemeClass::RequestBuffer((unsigned int *)dword_A83D3C); /*0x721127*/
                    byte_A83D21 = 1; /*0x72112c*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2; /*0x721135*/
}
} // namespace gamemd
