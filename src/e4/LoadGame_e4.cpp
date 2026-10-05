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
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"

// 0x660840
namespace gamemd {
int LoadGame::LoadTriggerEvents()
{
  // G42.42c: FULL body restored (G42.40g stub reverted); truth = func_0x00660840.json
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

  LoadGame_field_0x10 = ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x10; /*0x660840*/
  v2 = ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x10 - 1; /*0x66084d*/
  if ( ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x10 - 1 >= 0 ) /*0x660856*/
  {
    LoadGame_field_0x04 = ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x04; /*0x660858*/
    do /*0x6608cb*/
    {
      v5 = *(void **)(LoadGame_field_0x04 + 4 * v2); /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = *(int *)(LoadGame_field_0x04 + 4 * v2); /*0x660875*/
        v6 = (*(int (__thiscall **)(LoadGame *, int *))(*(unsigned int *)((LoadGame *)&stru_B04DA8)->__pad_0 + 16))((LoadGame *)&stru_B04DA8, &v12); /*0x660879*/
        if ( v6 != -1 ) /*0x66087f*/
          ((LoadGame *)&stru_B04DA8)->RemoveItem(v6); /*0x660887*/
        __3_YAXPAX_Z(v5); /*0x66088d*/
        LoadGame_field_0x04 = ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x04; /*0x660892*/
        LoadGame_field_0x10 = ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x10; /*0x660898*/
      }
      if ( v2 < LoadGame_field_0x10 ) /*0x6608a3*/
      {
        --LoadGame_field_0x10; /*0x6608a5*/
        v7 = v2; /*0x6608a6*/
        for ( ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x10 = LoadGame_field_0x10; v7 < ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x10; ++v7 ) /*0x6608b0*/
        {
          *(int *)(LoadGame_field_0x04 + 4 * v7) = *(int *)(LoadGame_field_0x04 + 4 * v7 + 4); /*0x6608b6*/
          LoadGame_field_0x10 = ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x10; /*0x6608b9*/
          LoadGame_field_0x04 = ((LoadGame *)&stru_B04DA8)->LoadGame_field_0x04; /*0x6608bf*/
        }
      }
      --v2; /*0x6608ca*/
    }
    while ( v2 >= 0 ); /*0x6608cb*/
  }
  if ( (*(int (__stdcall **)(LoadGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))(this, &v13, 4, 0) < 0 ) /*0x6608dd*/
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
        _65FB80 = ((E4Recv_65FB80 *)v10)->Team_Load_65FB80(-1, 0); /*0x660914*/
      }
      else
      {
        _65FB80 = 0; /*0x66091b*/
      }
      if ( (*(int (__stdcall **)(LoadGame *, unsigned int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x660929*/
             this,
             _65FB80,
             64,
             0) < 0 )
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        return (*(int (__stdcall **)(LoadGame *, unsigned short *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x660932*/
                 this,
                 &word_B04D78,
                 4,
                 0) >= 0;
    }
    return 0; /*0x660929*/
  }
  return (*(int (__stdcall **)(LoadGame *, unsigned short *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 12))( /*0x6608df*/
           this,
           &word_B04D78,
           4,
           0) >= 0;
}
} // namespace gamemd
// 0x660F10
namespace gamemd {
char LoadGame::RemoveItem(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x660F10)
}
} // namespace gamemd
// 0x67E730
namespace gamemd {
char LoadGame::Start()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67E730)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751710)
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
    ((Audio *)(g_InfantryDrawState))->Release(); /*0x75341a*/
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
      p_LoadGame_field_0x0C = (int *)(&v12->LoadGame_field_0x0C); /*0x54e82b*/
      if ( v12->LoadGame_field_0x1C >= LoadGame_field_0x14 ) /*0x54e833*/
      {
        if ( !BYTE1(v12->LoadGame_field_0x18) && LoadGame_field_0x14 ) /*0x54e83e*/
          continue; /*0x54e83e*/
        LoadGame_field_0x20 = v12->LoadGame_field_0x20; /*0x54e840*/
        if ( LoadGame_field_0x20 <= 0 /*0x54e850*/
          || !(*(uint8_t (**)(int *, int, unsigned int))(*p_LoadGame_field_0x0C + 8))(
                (int *)&v12->LoadGame_field_0x0C,
                LoadGame_field_0x14 + LoadGame_field_0x20,
                0) )
        {
          continue; /*0x54e850*/
        }
      }
      v8 = (unsigned int)(p_LoadGame_field_0x0C[4]);
      v9 = (unsigned int)(p_LoadGame_field_0x0C[1]);
      p_LoadGame_field_0x0C[4] = (unsigned int)(v8 + 1);
      *(unsigned int *)(v9 + 4 * v8) = (unsigned int)(v4); /*0x54e863*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x721040)
}
} // namespace gamemd
