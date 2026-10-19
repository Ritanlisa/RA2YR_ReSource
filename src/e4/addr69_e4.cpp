// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/E4Recv_690400_e4.hpp"
#include "e4/classes/E4Recv_690530_e4.hpp"
#include "e4/classes/E4Recv_6905F0_e4.hpp"
#include "e4/classes/E4Recv_691590_e4.hpp"
#include "e4/classes/E4Recv_693440_e4.hpp"
#include "e4/classes/E4Recv_695BC0_e4.hpp"
#include "e4/classes/E4Recv_696200_e4.hpp"
#include "e4/classes/E4Recv_6966D0_e4.hpp"
#include "e4/classes/E4Recv_696950_e4.hpp"
#include "e4/classes/E4Recv_697F10_e4.hpp"
#include "e4/classes/E4Recv_6990A0_e4.hpp"
#include "e4/classes/E4Recv_69ADE0_e4.hpp"
#include "e4/classes/E4Recv_69B170_e4.hpp"
#include "e4/classes/E4Recv_69B690_e4.hpp"
#include "e4/classes/E4Recv_69E060_e4.hpp"
#include "e4/classes/E4Recv_69E430_e4.hpp"
#include "e4/classes/E4Recv_69E9F0_e4.hpp"
#include "e4/classes/E4Recv_69F0C0_e4.hpp"
#include "e4/classes/E4Recv_69F1B0_e4.hpp"
#include "e4/classes/E4Recv_69F210_e4.hpp"
#include "e4/classes/E4Recv_69F5E0_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_6A89E0_e4.hpp"
#include "e4/classes/E4Recv_6A87F0_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/E4Recv_6A93F0_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/E4Recv_6A74A0_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/E4Recv_6A6AF0_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Hash_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/ProgressAnim_e4.hpp"
#include "e4/classes/SHPClass_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/LoadScreen_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/ListBox_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/INISectionList_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Straw_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/DiskSpace_e4.hpp"  // w18j2 C3861 DiskSpace:: supply
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int CheckAvailable(); }  // x4:empty@0x48dd50
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int DlgProcLoadGame_Load(ObjectClass *p_this);  // x4:ida@0x6967b0
} // namespace gamemd
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aBasic_0[8];  // data: 0x83f488 truth(IDA G42.57w9)
extern char aDigest_0[9];  // data: 0x83f440 truth(IDA G42.57w9)
extern unsigned char aMaxplayers;  // data: 0x83f3f0 truth(IDA G42.57w9)
extern unsigned char aMinplayers;  // data: 0x83f3fc truth(IDA G42.57w9)


// 0x690400
namespace gamemd {  // G42.18 ns repair
AbstractClass * * E4Recv_690400::sub_690400()
{

  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  GetClientRect(g_hWnd, &Rect); /*0x690412*/
  ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x690423*/
  char *ptr_0; // eax
  ptr_0 = (char *)this->AbstractClass; /*0x690429*/
  char *ptr_0; // esi
  ptr_0 = (char *)this->M4; /*0x69042f*/
  unsigned int v5[4]; // [esp+8h] [ebp-30h] BYREF
  v5[0] = (unsigned int)(ptr_0); /*0x690432*/
  unsigned int v6[4]; // [esp+18h] [ebp-20h] BYREF
  v6[0] = (unsigned int)(&ptr_0[Rect.left]); /*0x69043d*/
  v5[1] = (unsigned int)(ptr_0); /*0x690441*/
  v6[3] = 400; /*0x69044d*/
  v5[3] = 400; /*0x690451*/
  v6[1] = (unsigned int)(&ptr_0[Rect.top]); /*0x69045b*/
  v6[2] = 640; /*0x690467*/
  v5[2] = 640; /*0x69046b*/
  if ( stru_887598.lineTrailer ) /*0x69046f*/
    (*(void (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 60))( /*0x69047c*/
      stru_887598.lineTrailer,
      g_DSurface_Hidden,
      0);
  int result; // eax
  result = (*((int (**)(DSurface *, unsigned int *, ObjectClass *, unsigned int *, unsigned int, int))g_DSurface_Primary /*0x69049c*/
  + 2))(
             g_DSurface_Primary,
             v6,
             g_DSurface_Hidden,
             v5,
             0,
             1);
  if ( stru_887598.lineTrailer ) /*0x6904a7*/
    return (*(int (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x6904b4*/
             stru_887598.lineTrailer,
             g_DSurface_Hidden,
             0);
  return (gamemd::AbstractClass **)(result); /*0x6904b7*/

}
}  // G42.18 ns repair
// 0x693B70
namespace gamemd {
CampaignClass * * Network_RequestFile(char * a1, int a2, int a3)
{
  char *Flagged; // eax
  char *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  bool v13; // al
  char *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  char *v22; // eax
  char *v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // eax
  char v30; // bl
  const char *v31; // eax
  DWORD Ticks; // [esp+10h] [ebp-5C0h]
  DWORD v33; // [esp+10h] [ebp-5C0h]
  DWORD v34; // [esp+10h] [ebp-5C0h]
  int v36; // [esp+20h] [ebp-5B0h]
  int v37; // [esp+24h] [ebp-5ACh] BYREF
  unsigned char v38[6]; // [esp+2Ah] [ebp-5A6h] BYREF
  unsigned char v39[12]; // [esp+38h] [ebp-598h] BYREF
  unsigned char v40[4]; // [esp+44h] [ebp-58Ch] BYREF
  unsigned int v41[62]; // [esp+48h] [ebp-588h] BYREF
  int16_t v42; // [esp+140h] [ebp-490h]
  int v43[113]; // [esp+144h] [ebp-48Ch] BYREF
  int16_t v44; // [esp+308h] [ebp-2C8h]
  char v45; // [esp+30Ah] [ebp-2C6h]
  unsigned char v46[163]; // [esp+30Ch] [ebp-2C4h] BYREF
  char v47[89]; // [esp+3AFh] [ebp-221h] BYREF
  int v48; // [esp+408h] [ebp-1C8h] BYREF
  unsigned char v49[171]; // [esp+40Ch] [ebp-1C4h] BYREF
  int v50; // [esp+4B7h] [ebp-119h]
  char v51[277]; // [esp+4BBh] [ebp-115h] BYREF

  v36 = 0; /*0x693b86*/
  (v39)->InitInvalid(); /*0x693b8a*/
  Debug::Log(aGettingFileFro); /*0x693b94*/
  TimerGetTicks(); /*0x693ba0*/
  Debug::Log(aRequestingFile); /*0x693bb2*/
  Ticks = TimerGetTicks(); /*0x693bc3*/
  if ( a2 == 1 || a2 == 2 ) /*0x693be4*/
  {
    memset(v41, 0, sizeof(v41)); /*0x693cd4*/
    v42 = 0; /*0x693ce5*/
    v41[0] = 110; /*0x693ce7*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v41, 250, 1); /*0x693cef*/
    while ( Count::GetCountQueue(&unk_A8EA70) > 0 ) /*0x693d00*/
    {
      v8 = 3600; /*0x693d06*/
      if ( Ticks != -1 ) /*0x693d0d*/
      {
        v9 = TimerGetTicks() - Ticks; /*0x693d18*/
        if ( v9 >= 3600 ) /*0x693d1e*/
          break; /*0x693d1e*/
        v8 = 3600 - v9; /*0x693d20*/
      }
      if ( !v8 ) /*0x693d24*/
        break; /*0x693d24*/
      Event::Dispatch(); /*0x693d26*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693bfa*/
    v44 = 0; /*0x693c02*/
    v45 = 0; /*0x693c04*/
    v43[0] = 16; /*0x693c05*/
    CopyWideToChar(&v43[1], *(char **)dword_A8DA78, -1); /*0x693c19*/
    if ( dword_A8B238 == 3 ) /*0x693c25*/
    {
      Network::SendMessage((int)unk_A8E9C0, (int)v43, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x693c42*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x693c49*/
      if ( Flagged ) /*0x693c50*/
      {
        v5 = CharToWideString(Flagged + 36); /*0x693c55*/
        Network::SendToPlayer((int)unk_A8E9C0, (int)v43, 455, 1, (wchar_t *)v5); /*0x693c6f*/
      }
    }
    while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x693c80*/
    {
      v6 = 3600; /*0x693c8a*/
      if ( Ticks != -1 ) /*0x693c91*/
      {
        v7 = TimerGetTicks() - Ticks; /*0x693c9c*/
        if ( v7 >= 3600 ) /*0x693ca2*/
          break; /*0x693ca2*/
        v6 = 3600 - v7; /*0x693ca8*/
      }
      if ( !v6 ) /*0x693cac*/
        break; /*0x693cac*/
      Event::Dispatch(); /*0x693cb2*/
    }
  }
  v10 = 3600; /*0x693d39*/
  if ( Ticks != -1 ) /*0x693d44*/
  {
    v11 = TimerGetTicks() - Ticks; /*0x693d4f*/
    if ( v11 >= 3600 ) /*0x693d55*/
    {
      LABEL_24:
      Debug::Log(aTimeoutWaiting); /*0x693d5d*/
      return 0; /*0x693d76*/
    }
    v10 = 3600 - v11; /*0x693d57*/
  }
  if ( !v10 ) /*0x693d5b*/
    goto LABEL_24; /*0x693d5b*/
  v33 = TimerGetTicks(); /*0x693d8e*/
  if ( a2 == 1 || a2 == 2 ) /*0x693da8*/
  {
    while ( 1 ) /*0x693e97*/
    {
      Event::Dispatch(); /*0x693e97*/
      if ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v46, (int)v40) > 0 && *(unsigned int *)v46 == 111 ) /*0x693ebe*/
        break; /*0x693ebe*/
      v18 = 3600; /*0x693ec4*/
      if ( v33 != -1 ) /*0x693ecb*/
      {
        v19 = TimerGetTicks() - v33; /*0x693ed6*/
        if ( v19 >= 3600 ) /*0x693edc*/
          goto LABEL_50; /*0x693edc*/
        v18 = 3600 - v19; /*0x693ede*/
      }
      if ( !v18 ) /*0x693ee2*/
        goto LABEL_50; /*0x693ee2*/
    }
    v17 = *(unsigned int *)&v46[158]; /*0x693ef8*/
    strcpy(a1, v47); /*0x693f0a*/
  }
  else
  {
    while ( 1 ) /*0x693db3*/
    {
      Event::Dispatch(); /*0x693db3*/
      v37 = 455; /*0x693dd4*/
      if ( ((Network *)((int)unk_A8E9C0))->Send((int)&v48, (int)&v37, (int)v39, (int)v38) ) /*0x693ddc*/
      {
        v13 = NetworkID::Compare((int)v39, (int)&stru_A8BB1C); /*0x693dee*/
        if ( dword_A8B238 == 4 ) /*0x693df9*/
        {
          v14 = GameSettings::FindFlagged(); /*0x693dfb*/
          v13 = v14 && !_strcmpi(v14 + 36, v49); /*0x693e20*/
        }
        if ( v48 == 17 && v13 ) /*0x693e2d*/
          break; /*0x693e2d*/
      }
      v15 = 3600; /*0x693e33*/
      if ( v33 != -1 ) /*0x693e3a*/
      {
        v16 = TimerGetTicks() - v33; /*0x693e45*/
        if ( v16 >= 3600 ) /*0x693e4b*/
          goto LABEL_50; /*0x693e4b*/
        v15 = 3600 - v16; /*0x693e51*/
      }
      if ( !v15 ) /*0x693e55*/
        goto LABEL_50; /*0x693e55*/
    }
    v17 = v50; /*0x693e72*/
    strcpy(a1, v51); /*0x693e84*/
  }
  v36 = v17; /*0x693f18*/
  Debug::Log(aHostRespondedW); /*0x693f1c*/
  Debug::Log("File name is %s\n", a1); /*0x693f2b*/
  LABEL_50:
  v20 = 3600; /*0x693f33*/
  if ( v33 != -1 ) /*0x693f3e*/
  {
    v21 = TimerGetTicks() - v33; /*0x693f49*/
    if ( v21 >= 3600 ) /*0x693f4f*/
    {
      LABEL_54:
      Debug::Log(aTimeoutWaiting_0); /*0x693f57*/
      return 0; /*0x693f70*/
    }
    v20 = 3600 - v21; /*0x693f51*/
  }
  if ( !v20 ) /*0x693f55*/
    goto LABEL_54; /*0x693f55*/
  Debug::Log(aSendingFileInf); /*0x693f78*/
  v34 = TimerGetTicks(); /*0x693f95*/
  if ( a2 == 1 || a2 == 2 ) /*0x693faa*/
  {
    memset(v41, 0, sizeof(v41)); /*0x6940b8*/
    v42 = 0; /*0x6940ba*/
    v41[0] = 113; /*0x6940cb*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v41, 250, 1); /*0x6940d3*/
    while ( Count::GetCountQueue(&unk_A8EA70) > 0 ) /*0x6940e4*/
    {
      v26 = 3600; /*0x6940ea*/
      if ( v34 != -1 ) /*0x6940f1*/
      {
        v27 = TimerGetTicks() - v34; /*0x6940fc*/
        if ( v27 >= 3600 ) /*0x694102*/
          break; /*0x694102*/
        v26 = 3600 - v27; /*0x694104*/
      }
      if ( !v26 ) /*0x694108*/
        break; /*0x694108*/
      Event::Dispatch(); /*0x69410a*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693fbe*/
    v44 = 0; /*0x693fc0*/
    v45 = 0; /*0x693fc2*/
    v43[0] = 21; /*0x693fc8*/
    strcpy((char *)&v43[1], ToWideStringChar(*(char **)dword_A8DA78)); /*0x693ff7*/
    if ( dword_A8B238 == 4 ) /*0x694007*/
    {
      v22 = GameSettings::FindFlagged(); /*0x694009*/
      if ( v22 ) /*0x694010*/
      {
        v23 = CharToWideString(v22 + 36); /*0x694015*/
        Network::SendToPlayer((int)unk_A8E9C0, (int)v43, 455, 1, (wchar_t *)v23); /*0x69402f*/
      }
    }
    else
    {
      Network::SendMessage((int)unk_A8E9C0, (int)v43, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x694053*/
    }
    while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x694064*/
    {
      v24 = 3600; /*0x69406e*/
      if ( v34 != -1 ) /*0x694075*/
      {
        v25 = TimerGetTicks() - v34; /*0x694080*/
        if ( v25 >= 3600 ) /*0x694086*/
          break; /*0x694086*/
        v24 = 3600 - v25; /*0x69408c*/
      }
      if ( !v24 ) /*0x694090*/
        break; /*0x694090*/
      Event::Dispatch(); /*0x694096*/
    }
  }
  v28 = 3600; /*0x69411d*/
  if ( v34 != -1 ) /*0x694128*/
  {
    v29 = TimerGetTicks() - v34; /*0x694133*/
    if ( v29 >= 3600 ) /*0x694139*/
    {
      LABEL_78:
      Debug::Log(aTimeoutWaiting_1); /*0x694141*/
      return 0; /*0x69415a*/
    }
    v28 = 3600 - v29; /*0x69413b*/
  }
  if ( !v28 ) /*0x69413f*/
    goto LABEL_78; /*0x69413f*/
  v30 = ReceiveNetworkFile(a1, v36, a2, a3); /*0x694173*/
  v31 = (const char *)(g_Str_true); /*0x694175*/
  if ( !v30 ) /*0x69417c*/
    v31 = (const char *)(g_Str_false); /*0x69417e*/
  Debug::Log("Receive_Remote_File returned %s\n", v31); /*0x694189*/
  return (gamemd::CampaignClass **)(v30); /*0x693d6c*/
}
}
// 0x6941A0
namespace gamemd {
char ReceiveNetworkFile(int a1, DWORD a2, int a3, char a4)
{

  unsigned __int16 *v6; // ebp
  size_t v7; // esi
  wchar_t *StringCSF; // eax
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  char v13; // al
  char *Flagged; // eax
  unsigned char *v15; // eax
  int v16; // esi
  int v17; // esi
  unsigned __int16 v18; // dx
  int v19; // esi
  int v20; // eax
  char v21; // bl
  char v23; // [esp+21h] [ebp-77h]
  char v24[2]; // [esp+22h] [ebp-76h] BYREF
  signed int v25; // [esp+24h] [ebp-74h]
  int v26; // [esp+28h] [ebp-70h]
  LPCVOID lpBuffer; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  int v29; // [esp+34h] [ebp-64h] BYREF
  int v30; // [esp+38h] [ebp-60h]
  DWORD nNumberOfBytesToWrite; // [esp+3Ch] [ebp-5Ch]
  char v32[4]; // [esp+40h] [ebp-58h] BYREF
  int Ticks; // [esp+44h] [ebp-54h]
  int v34; // [esp+48h] [ebp-50h]
  int v35; // [esp+4Ch] [ebp-4Ch]
  int v36; // [esp+50h] [ebp-48h]
  int v37; // [esp+54h] [ebp-44h]
  int v38; // [esp+58h] [ebp-40h]
  int v39; // [esp+5Ch] [ebp-3Ch]
  int v40; // [esp+60h] [ebp-38h]
  int v41; // [esp+64h] [ebp-34h]
  bool v42[12]; // [esp+68h] [ebp-30h] BYREF
  LPCSTR v43[9]; // [esp+74h] [ebp-24h] BYREF

  nNumberOfBytesToWrite = a2; /*0x6941ae*/
  Ticks = Timer::GetTicks(); /*0x6941bb*/
  v35 = 0; /*0x6941bf*/
  Waypoint::InitInvalid((Waypoint *)v42); /*0x6941c7*/
  v23 = 0; /*0x6941cc*/
  v6 = (unsigned __int16 *)__2_YAPAXI_Z(0x1E7u); /*0x6941e1*/
  Debug::Log(); /*0x6941e3*/
  RawFileClass::Construct((BufferIOFileClass *)v43, a1); /*0x6941f0*/
  if ( (unsigned __int8)FileClass::Open((RawFileClass *)v43, 0) ) /*0x6941fb*/
    FileClass::Delete((RawFileClass *)v43); /*0x694208*/
  FileClass::Open2((RawFileClass *)v43, (const CHAR *)2); /*0x694213*/
  v7 = a2 / 0xC0; /*0x69422c*/
  v25 = a2 / 0xC0; /*0x69422f*/
  if ( a2 % 0xC0 ) /*0x69422a*/
    v25 = ++v7; /*0x694238*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x69424e*/
  memset(Block, 0, v7); /*0x694253*/
  v26 = 0; /*0x694257*/
  lpBuffer = (LPCVOID)__2_YAPAXI_Z(a2); /*0x694269*/
  if ( a4 ) /*0x694279*/
  {
    ProgressAnim::Init((int)&stru_AC4B48.__pad_2F4[284], 0, 1079574528, 1, 0); /*0x69428f*/
    SHPClass::Load((int)&stru_AC4B48.__pad_2F4[284], g_Str_File_PROGBARM_SHP, 0, 0); /*0x6942a2*/
    StringCSF = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 355); /*0x6942c2*/
    TextRenderer::MeasureBuilding((int *)&stru_AC4B48.__pad_2F4[284], -1, -1, (int)StringCSF, 0, 1); /*0x6942cf*/
    Screen::Capture(1, 0, a2, (int)v6); /*0x6942d8*/
    LoadScreen::Render((int)&stru_AC4B48.__pad_2F4[284], a2, (int)v6, NAN); /*0x6942ea*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, 0.0, NAN); /*0x694302*/
  }
  v9 = a3; /*0x694307*/
  if ( a3 == 3 || (v10 = 10800, a3 != 4) ) /*0x69431b*/
    v10 = 3600; /*0x69431d*/
  Ticks = Timer::GetTicks(); /*0x69432b*/
  v34 = v40; /*0x694333*/
  v35 = v10; /*0x69433f*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x694343*/
  {
    IPXManagerClass::createConnection((IPXManagerClass *)&stru_A8E960.nextScenario[96]); /*0x69434a*/
    TacticalClass::SetCameraPosition((IPXManagerClass *)&stru_A8E960.nextScenario[96], 120, -1, 1200); /*0x69435d*/
  }
  if ( a3 == 3 || (v11 = 10800, a3 != 4) ) /*0x69436f*/
    v11 = 3600; /*0x694371*/
  Ticks = Timer::GetTicks(); /*0x694383*/
  v34 = v40; /*0x694387*/
  v35 = v11; /*0x69438b*/
  v12 = 0; /*0x69438f*/
  while ( v9 == 1 || v9 == 2 ) /*0x69439d*/
  {
    MessageLoop(); /*0x69452f*/
    Event::Dispatch(); /*0x694534*/
    if ( ObjectTypeClass::CreateInstance((ObjectTypeClass *)&stru_A8E960.altNextScenario[12], (int)v6, (int)v32) <= 0 ) /*0x69454b*/
      goto LABEL_43; /*0x69454b*/
    if ( *(unsigned int *)v6 != 112 ) /*0x694555*/
      goto LABEL_43; /*0x694555*/
    v18 = v6[12]; /*0x694561*/
    if ( *((unsigned char *)Block + v18) ) /*0x694567*/
      goto LABEL_43; /*0x69456a*/
    *((unsigned char *)Block + v18) = 1; /*0x694570*/
    ++v26; /*0x69457c*/
    v12 += 100; /*0x694580*/
    v39 = Timer::GetTicks(); /*0x69458c*/
    Ticks = v39; /*0x694595*/
    v34 = v40; /*0x69459b*/
    v35 = 1800; /*0x69459f*/
    v41 = 1800; /*0x6945ad*/
    Debug::Log(); /*0x6945b1*/
    qmemcpy((char *)lpBuffer + 192 * v6[12], v6 + 14, v6[13]); /*0x6945dd*/
    if ( a4 ) /*0x6945eb*/
    {
      v30 = v12 / v25; /*0x694604*/
      Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, (double)(v12 / v25), NAN); /*0x694611*/
    }
    if ( v26 == v25 ) /*0x694620*/
    {
      if ( a4 ) /*0x694685*/
        Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, 100.0, NAN); /*0x69469d*/
      v23 = 1; /*0x6946a2*/
LABEL_53:
      v21 = v23; /*0x6946a7*/
      goto LABEL_54; /*0x6946a7*/
    }
LABEL_42:
    v9 = a3; /*0x694622*/
LABEL_43:
    v19 = v35; /*0x694629*/
    if ( Ticks != -1 ) /*0x694634*/
    {
      v20 = Timer::GetTicks() - Ticks; /*0x69463f*/
      if ( v20 >= v19 ) /*0x694645*/
        goto LABEL_53; /*0x694645*/
      v19 -= v20; /*0x694647*/
    }
    if ( !v19 ) /*0x69464b*/
      goto LABEL_53; /*0x69464b*/
  }
  MessageLoop(); /*0x6943a3*/
  Event::Dispatch(); /*0x6943a8*/
  v29 = 487; /*0x6943c2*/
  if ( !Network::Send((Network *)&stru_A8E960.nextScenario[96], (int)v6, (int)&v29, (int)v42, (int)v24) ) /*0x6943ca*/
    goto LABEL_43; /*0x6943ca*/
  v13 = NetworkID::Compare(v42, (int)&stru_A8BB1C); /*0x6943e0*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x6943ec*/
  {
    Flagged = GameSettings::FindFlagged(); /*0x6943ee*/
    v13 = Flagged && !_strcmpi(Flagged + 36, v6 + 2); /*0x69440f*/
  }
  if ( *(unsigned int *)v6 != 18 ) /*0x694415*/
    goto LABEL_43; /*0x694415*/
  if ( !v13 ) /*0x69441d*/
    goto LABEL_43; /*0x69441d*/
  v15 = (char *)Block + v6[12]; /*0x69442d*/
  if ( *v15 ) /*0x69442f*/
    goto LABEL_43; /*0x694432*/
  v16 = v26; /*0x694438*/
  *v15 = 1; /*0x69443c*/
  v12 += 100; /*0x694442*/
  v26 = v16 + 1; /*0x694448*/
  if ( v9 == 3 || (v17 = 10800, v9 != 4) ) /*0x694454*/
    v17 = 3600; /*0x694456*/
  v36 = Timer::GetTicks(); /*0x694471*/
  v38 = v17 / 2; /*0x69447a*/
  Ticks = v36; /*0x69447e*/
  v34 = v37; /*0x694482*/
  v35 = v17 / 2; /*0x694486*/
  if ( v36 != -1 ) /*0x69448a*/
    Timer::GetTicks(); /*0x694490*/
  Debug::Log(); /*0x6944b5*/
  qmemcpy((char *)lpBuffer + 192 * v6[12], v6 + 14, v6[13]); /*0x6944e1*/
  if ( a4 ) /*0x6944ef*/
  {
    v30 = v12 / v25; /*0x694508*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, (double)(v12 / v25), NAN); /*0x694515*/
  }
  if ( v26 != v25 ) /*0x694524*/
    goto LABEL_42; /*0x694524*/
  v21 = 1; /*0x694659*/
  if ( a4 ) /*0x69465d*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, 100.0, NAN); /*0x694675*/
LABEL_54:
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x6946b4*/
    IPXManagerClass::destroyConnection((IPXManagerClass *)&stru_A8E960.nextScenario[96]); /*0x6946bb*/
  FileClass::Write2((RawFileClass *)v43, lpBuffer, nNumberOfBytesToWrite); /*0x6946ce*/
  __3_YAXPAX_Z((void *)lpBuffer); /*0x6946d8*/
  __3_YAXPAX_Z(Block); /*0x6946e2*/
  Debug::Log(); /*0x6946fa*/
  FileClass::CloseHandle((RawFileClass *)v43); /*0x694706*/
  Debug::Log(); /*0x694710*/
  if ( !v21 && (unsigned __int8)FileClass::Open((RawFileClass *)v43, 0) ) /*0x694722*/
  {
    FileClass::Delete((RawFileClass *)v43); /*0x69472f*/
    Debug::Log(); /*0x694739*/
  }
  __3_YAXPAX_Z(v6); /*0x694742*/
  RawFileClass::Dtor((BufferIOFileClass *)v43); /*0x69474e*/
  return v21; /*0x694755*/

}
}
// 0x694760
namespace gamemd {
int Network_SendFile(char * Source, int a2, char a3, char a4)
{

  int result; // eax
  int Size; // ebx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ebx
  int v27; // ebp
  wchar_t *StringCSF; // eax
  int v29; // edi
  int v30; // esi
  int v31; // edi
  int v32; // esi
  int v33; // eax
  char *v34; // edi
  int v35; // edx
  int v36; // eax
  int i; // edi
  int v38; // esi
  int j; // edi
  int v40; // esi
  int v41; // eax
  char v42; // bl
  int Ticks; // [esp+20h] [ebp-710h]
  int v44; // [esp+20h] [ebp-710h]
  int v45; // [esp+20h] [ebp-710h]
  int v46; // [esp+28h] [ebp-708h]
  char v47; // [esp+2Fh] [ebp-701h]
  int v48; // [esp+30h] [ebp-700h] BYREF
  int v49; // [esp+34h] [ebp-6FCh]
  int v50; // [esp+38h] [ebp-6F8h]
  int v51; // [esp+3Ch] [ebp-6F4h]
  char v52[2]; // [esp+4Eh] [ebp-6E2h] BYREF
  char v53[4]; // [esp+50h] [ebp-6E0h] BYREF
  CCFileClass v54; // [esp+54h] [ebp-6DCh] BYREF
  int v55[3]; // [esp+ACh] [ebp-684h] BYREF
  int v56; // [esp+B8h] [ebp-678h]
  Waypoint Buffer; // [esp+C0h] [ebp-670h] BYREF
  unsigned char v58[163]; // [esp+1A8h] [ebp-588h] BYREF
  char v59[89]; // [esp+24Bh] [ebp-4E5h] BYREF
  int v60; // [esp+2A4h] [ebp-48Ch] BYREF
  char v61[171]; // [esp+2A8h] [ebp-488h] BYREF
  int v62; // [esp+353h] [ebp-3DDh]
  char v63[277]; // [esp+357h] [ebp-3D9h] BYREF
  int v64[63]; // [esp+46Ch] [ebp-2C4h] BYREF
  int v65[114]; // [esp+568h] [ebp-1C8h] BYREF

  v51 = a2; /*0x694772*/
  Timer::GetTicks(); /*0x694776*/
  v47 = 0; /*0x69478b*/
  Debug::Log(); /*0x694790*/
  CCFileClass::Construct(&v54, Source); /*0x69479d*/
  if ( !(unsigned __int8)CCFileClass::Open(&v54, 0) ) /*0x6947a7*/
  {
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x6947b7*/
    v56 = 0; /*0x6947bf*/
    Vector::Clear((int)v55); /*0x6947c6*/
    *(unsigned int *)v54.__tail_0 = &off_7E1668; /*0x6947cf*/
    result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x6947d7*/
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x6947dc*/
    return result; /*0x6947e8*/
  }
  Size = CCFileClass::GetSize(&v54); /*0x6947f4*/
  v49 = Size; /*0x6947fa*/
  Ticks = Timer::GetTicks(); /*0x694803*/
  Debug::Log(); /*0x69481d*/
  if ( a2 != 1 && a2 != 2 ) /*0x694831*/
  {
    v60 = 17; /*0x69484f*/
    strcpy(v63, Source); /*0x69485d*/
    v62 = Size; /*0x69486c*/
    strcpy(v61, ToWideStringChar(**(char ***)&stru_A8D804.__pad_3D[567])); /*0x694897*/
    if ( a3 ) /*0x6948a9*/
    {
      v8 = 1; /*0x6948b0*/
      if ( *(int *)&stru_A8D804.__pad_3D[579] > 1 ) /*0x6948b7*/
      {
        while ( 1 ) /*0x6948c0*/
        {
          Event::Dispatch(); /*0x6948c0*/
          if ( Network::SendToPlayer( /*0x6948e3*/
                 (int)&stru_A8E960.nextScenario[96],
                 (int)&v60,
                 455,
                 1,
                 *(wchar_t **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v8)) )
          {
            goto LABEL_12; /*0x6948ea*/
          }
          v9 = 3600; /*0x6948f0*/
          if ( Ticks == -1 ) /*0x6948f6*/
          {
LABEL_11:
            if ( !v9 ) /*0x69490d*/
              goto LABEL_12; /*0x69490d*/
          }
          else
          {
            v10 = Timer::GetTicks() - Ticks; /*0x694901*/
            if ( v10 < 3600 ) /*0x694907*/
            {
              v9 = 3600 - v10; /*0x694909*/
              goto LABEL_11; /*0x694909*/
            }
LABEL_12:
            if ( ++v8 >= *(int *)&stru_A8D804.__pad_3D[579] ) /*0x694917*/
              goto LABEL_21; /*0x694917*/
          }
        }
      }
      goto LABEL_21; /*0x6948b7*/
    }
    v11 = 0; /*0x694923*/
    if ( dword_A8BB18 <= 0 ) /*0x694927*/
    {
LABEL_21:
      while ( Network::GetQueueCount((IPXManagerClass *)&stru_A8E960.nextScenario[96]) > 0 ) /*0x6949ba*/
      {
        v14 = 3600; /*0x6949c4*/
        if ( Ticks != -1 ) /*0x6949cb*/
        {
          v15 = Timer::GetTicks() - Ticks; /*0x6949d6*/
          if ( v15 >= 3600 ) /*0x6949dc*/
            goto LABEL_34; /*0x6949dc*/
          v14 = 3600 - v15; /*0x6949e2*/
        }
        if ( !v14 ) /*0x6949e6*/
          break; /*0x6949e6*/
        Event::Dispatch(); /*0x6949ec*/
      }
      goto LABEL_34; /*0x6949fd*/
    }
    while ( 1 ) /*0x694930*/
    {
      Event::Dispatch(); /*0x694930*/
      Debug::Log(); /*0x69494b*/
      if ( Network::SendToPlayer( /*0x694978*/
             (int)&stru_A8E960.nextScenario[96],
             (int)&v60,
             455,
             1,
             *(wchar_t **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * byte_A8BB10[v11])) )
      {
        goto LABEL_20; /*0x69497f*/
      }
      v12 = 3600; /*0x694985*/
      if ( Ticks == -1 ) /*0x69498b*/
      {
LABEL_19:
        if ( !v12 ) /*0x6949a2*/
          goto LABEL_20; /*0x6949a2*/
      }
      else
      {
        v13 = Timer::GetTicks() - Ticks; /*0x694996*/
        if ( v13 < 3600 ) /*0x69499c*/
        {
          v12 = 3600 - v13; /*0x69499e*/
          goto LABEL_19; /*0x69499e*/
        }
LABEL_20:
        if ( ++v11 >= dword_A8BB18 ) /*0x6949ac*/
          goto LABEL_21; /*0x6949ac*/
      }
    }
  }
  *(unsigned int *)v58 = 111; /*0x694a1d*/
  strcpy(v59, Source); /*0x694a2b*/
  *(unsigned int *)&v58[158] = Size; /*0x694a42*/
  Stream::WriteBlock((int *)&stru_A8E960.altNextScenario[12], (int)v58, 250, 1); /*0x694a4f*/
  while ( Count::GetCountQueue((Count *)&stru_A8E960.altNextScenario[12]) > 0 ) /*0x694a60*/
  {
    v16 = 3600; /*0x694a66*/
    if ( Ticks != -1 ) /*0x694a6d*/
    {
      v17 = Timer::GetTicks() - Ticks; /*0x694a78*/
      if ( v17 >= 3600 ) /*0x694a7e*/
        break; /*0x694a7e*/
      v16 = 3600 - v17; /*0x694a80*/
    }
    if ( !v16 ) /*0x694a84*/
      break; /*0x694a84*/
    Event::Dispatch(); /*0x694a86*/
  }
LABEL_34:
  v18 = 3600; /*0x694a99*/
  if ( Ticks != -1 ) /*0x694aa4*/
  {
    v19 = Timer::GetTicks() - Ticks; /*0x694aaf*/
    if ( v19 >= 3600 ) /*0x694ab5*/
    {
LABEL_38:
      Debug::Log(); /*0x694abd*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x694ad1*/
      v56 = 0; /*0x694ad9*/
      Vector::Clear((int)v55); /*0x694ae4*/
      *(unsigned int *)v54.__tail_0 = &off_7E1668; /*0x694aed*/
      result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x694af5*/
      (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x694afa*/
      return result; /*0x694b06*/
    }
    v18 = 3600 - v19; /*0x694ab7*/
  }
  if ( !v18 ) /*0x694abb*/
    goto LABEL_38; /*0x694abb*/
  Waypoint::InitInvalid(&Buffer); /*0x694b10*/
  v20 = 0; /*0x694b1c*/
  if ( a3 ) /*0x694b20*/
    v21 = *(unsigned int *)&stru_A8D804.__pad_3D[579] - 1; /*0x694b28*/
  else
    v21 = dword_A8BB18; /*0x694b2d*/
  v44 = Timer::GetTicks(); /*0x694b3c*/
  if ( a2 == 1 || a2 == 2 ) /*0x694b59*/
  {
    while ( 1 ) /*0x694bce*/
    {
      Event::Dispatch(); /*0x694bce*/
      if ( ObjectTypeClass::CreateInstance((ObjectTypeClass *)&stru_A8E960.altNextScenario[12], (int)v64, (int)v53) > 0 /*0x694bf5*/
        && v64[0] == 113 )
      {
        break; /*0x694bf5*/
      }
      v24 = 3600; /*0x694bfb*/
      if ( v44 != -1 ) /*0x694c02*/
      {
        v25 = Timer::GetTicks() - v44; /*0x694c0d*/
        if ( v25 >= 3600 ) /*0x694c13*/
          goto LABEL_62; /*0x694c13*/
        v24 = 3600 - v25; /*0x694c15*/
      }
      if ( !v24 || v21 <= 0 ) /*0x694c1d*/
        goto LABEL_62; /*0x694c1d*/
    }
    Debug::Log(); /*0x694c26*/
  }
  else
  {
    do /*0x694bc5*/
    {
      Event::Dispatch(); /*0x694b60*/
      v48 = 455; /*0x694b84*/
      if ( Network::Send((Network *)&stru_A8E960.nextScenario[96], (int)v65, (int)&v48, (int)&Buffer, (int)v52) /*0x694b9c*/
        && v65[0] == 21 )
      {
        ++v20; /*0x694b9e*/
      }
      v22 = 3600; /*0x694ba3*/
      if ( v44 != -1 ) /*0x694baa*/
      {
        v23 = Timer::GetTicks() - v44; /*0x694bb5*/
        if ( v23 >= 3600 ) /*0x694bbb*/
          break; /*0x694bbb*/
        v22 = 3600 - v23; /*0x694bbd*/
      }
    }
    while ( v22 && v20 < v21 ); /*0x694bc5*/
  }
LABEL_62:
  v26 = (v49 + 191) / 192; /*0x694c2e*/
  FileClass::Load(&v54, (const CHAR *)1); /*0x694c51*/
  v27 = 0; /*0x694c56*/
  if ( a4 ) /*0x694c61*/
  {
    ProgressAnim::Init((int)&stru_AC4B48.__pad_2F4[284], 0, 1079574528, 1, 0); /*0x694c75*/
    SHPClass::Load((int)&stru_AC4B48.__pad_2F4[284], g_Str_File_PROGBARM_SHP, 0, 0); /*0x694c86*/
    StringCSF = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 658); /*0x694ca5*/
    TextRenderer::MeasureBuilding((int *)&stru_AC4B48.__pad_2F4[284], -1, -1, (int)StringCSF, 0, 1); /*0x694cb2*/
    Screen::Capture(1, 0, v26, 0); /*0x694cbb*/
    LoadScreen::Render((int)&stru_AC4B48.__pad_2F4[284], v26, 0, NAN); /*0x694ccd*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, 0.0, NAN); /*0x694ce2*/
  }
  v29 = v51; /*0x694ce7*/
  Timer::GetTicks(); /*0x694d03*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x694d20*/
  {
    IPXManagerClass::createConnection((IPXManagerClass *)&stru_A8E960.nextScenario[96]); /*0x694d27*/
    TacticalClass::SetCameraPosition((IPXManagerClass *)&stru_A8E960.nextScenario[96], 240, -1, 1200); /*0x694d3d*/
  }
  if ( v29 == 3 || (v30 = 10800, v29 != 4) ) /*0x694d4f*/
    v30 = 3600; /*0x694d51*/
  v45 = Timer::GetTicks(); /*0x694d63*/
  v46 = v30; /*0x694d6b*/
  v48 = 0; /*0x694d6f*/
LABEL_70:
  v31 = v49; /*0x694d77*/
  do /*0x694fb0*/
  {
    while ( 1 ) /*0x694d7f*/
    {
      v32 = v46; /*0x694d7f*/
      if ( v45 != -1 ) /*0x694d86*/
      {
        v33 = Timer::GetTicks() - v45; /*0x694d91*/
        if ( v33 >= v46 ) /*0x694d97*/
          goto LABEL_115; /*0x694d97*/
        v32 = v46 - v33; /*0x694d9d*/
      }
      if ( !v32 ) /*0x694da1*/
        goto LABEL_115; /*0x694da1*/
      if ( v51 != 1 && v51 != 2 ) /*0x694db7*/
        break; /*0x694db7*/
      MessageLoop(); /*0x694fbb*/
      Event::Dispatch(); /*0x694fc0*/
      if ( v27 >= v26 ) /*0x694fcc*/
      {
        if ( !Count::GetCountQueue((Count *)&stru_A8E960.altNextScenario[12]) ) /*0x6950e3*/
        {
          v47 = 1; /*0x69514d*/
          if ( a4 ) /*0x695154*/
            Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, 100.0, NAN); /*0x69516c*/
LABEL_115:
          v42 = v47; /*0x695171*/
          goto LABEL_116; /*0x695171*/
        }
      }
      else
      {
        if ( Count::GetCountQueue((Count *)&stru_A8E960.altNextScenario[12]) >= 2 ) /*0x694fda*/
          goto LABEL_70; /*0x694fda*/
        *(unsigned int *)&Buffer.u32_C = 112; /*0x694fe6*/
        *(unsigned short *)&Buffer.q024 = v27; /*0x694ff1*/
        *(unsigned short *)&Buffer.__pad_0[38] = v31; /*0x694ff9*/
        if ( v31 >= 192 ) /*0x695001*/
          *(unsigned short *)&Buffer.__pad_0[38] = 192; /*0x695003*/
        v31 -= *(unsigned __int16 *)&Buffer.__pad_0[38]; /*0x695021*/
        v49 = v31; /*0x695028*/
        v41 = CCFileClass::Read(&v54, &Buffer.q028, *(unsigned __int16 *)&Buffer.__pad_0[38]); /*0x69502c*/
        if ( v41 == *(unsigned __int16 *)&Buffer.__pad_0[38] ) /*0x695040*/
        {
          if ( v45 != -1 ) /*0x69504f*/
            Timer::GetTicks(); /*0x695055*/
          Debug::Log(); /*0x695072*/
          Stream::WriteBlock((int *)&stru_A8E960.altNextScenario[12], (int)&Buffer.u32_C, 220, 1); /*0x69508e*/
        }
        ++v27; /*0x69509e*/
        v48 += 100; /*0x6950a4*/
        if ( !a4 ) /*0x6950a8*/
          goto LABEL_70; /*0x6950a8*/
        v50 = v48 / v26; /*0x6950c5*/
        Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, (double)(v48 / v26), NAN); /*0x6950d2*/
      }
    }
    MessageLoop(); /*0x694dbd*/
    Event::Dispatch(); /*0x694dc2*/
    if ( v27 < v26 ) /*0x694dce*/
    {
      if ( Network::GetQueueCount((IPXManagerClass *)&stru_A8E960.nextScenario[96]) < 10 ) /*0x694ddc*/
      {
        *(unsigned int *)&Buffer.u32_C = 18; /*0x694de4*/
        *(unsigned short *)&Buffer.q024 = v27; /*0x694def*/
        *(unsigned short *)&Buffer.__pad_0[38] = v31; /*0x694df7*/
        if ( v31 >= 192 ) /*0x694dff*/
          *(unsigned short *)&Buffer.__pad_0[38] = 192; /*0x694e01*/
        v34 = ToWideStringChar(**(char ***)&stru_A8D804.__pad_3D[567]); /*0x694e17*/
        v35 = v49; /*0x694e31*/
        strcpy(&Buffer.u32_10, v34); /*0x694e38*/
        v49 = v35 - *(unsigned __int16 *)&Buffer.__pad_0[38]; /*0x694e5c*/
        v36 = CCFileClass::Read(&v54, &Buffer.q028, *(unsigned __int16 *)&Buffer.__pad_0[38]); /*0x694e60*/
        if ( v36 == *(unsigned __int16 *)&Buffer.__pad_0[38] ) /*0x694e74*/
        {
          if ( v45 != -1 ) /*0x694e85*/
            Timer::GetTicks(); /*0x694e8b*/
          Debug::Log(); /*0x694ea6*/
          if ( a3 ) /*0x694eb7*/
          {
            for ( i = 1; i < *(int *)&stru_A8D804.__pad_3D[579]; ++i ) /*0x694ec5*/
            {
              do /*0x694ef6*/
              {
                v38 = Network::SendToPlayer( /*0x694eed*/
                        (int)&stru_A8E960.nextScenario[96],
                        (int)&Buffer.u32_C,
                        220,
                        1,
                        *(wchar_t **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i));
                Event::Dispatch(); /*0x694eef*/
              }
              while ( !v38 ); /*0x694ef6*/
            }
          }
          else
          {
            for ( j = 0; j < dword_A8BB18; ++j ) /*0x694f0d*/
            {
              do /*0x694f42*/
              {
                v40 = Network::SendToPlayer( /*0x694f39*/
                        (int)&stru_A8E960.nextScenario[96],
                        (int)&Buffer.u32_C,
                        220,
                        1,
                        *(wchar_t **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * byte_A8BB10[j]));
                Event::Dispatch(); /*0x694f3b*/
              }
              while ( !v40 ); /*0x694f42*/
            }
          }
        }
        ++v27; /*0x694f59*/
        v48 += 100; /*0x694f5f*/
        if ( a4 ) /*0x694f63*/
        {
          v50 = v48 / v26; /*0x694f80*/
          Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, (double)(v48 / v26), NAN); /*0x694f8d*/
        }
      }
      goto LABEL_70; /*0x694f92*/
    }
    if ( Network::GetQueueCount((IPXManagerClass *)&stru_A8E960.nextScenario[96]) ) /*0x694f97*/
      goto LABEL_70; /*0x694f9e*/
  }
  while ( Network::GetQueueCount((IPXManagerClass *)&stru_A8E960.nextScenario[96]) ); /*0x694fb0*/
  if ( v45 != -1 ) /*0x6950f5*/
    Timer::GetTicks(); /*0x6950fb*/
  Debug::Log(); /*0x695114*/
  v42 = 1; /*0x695125*/
  if ( a4 ) /*0x695127*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B48.__pad_2F4[284], 0, 100.0, NAN); /*0x69513f*/
LABEL_116:
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x69517c*/
    IPXManagerClass::destroyConnection((IPXManagerClass *)&stru_A8E960.nextScenario[96]); /*0x695183*/
  Debug::Log(); /*0x69519c*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x6951ab*/
  v56 = 0; /*0x6951b3*/
  Vector::Clear((int)v55); /*0x6951be*/
  *(unsigned int *)v54.__tail_0 = &off_7E1668; /*0x6951c7*/
  result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x6951cf*/
  (result) = ((result) & ~0xFF) | ((v42) & 0xFF); /*0x6951d4*/
  return result; /*0x6947de*/

}
}
// 0x6951F0
namespace gamemd {
char FindAndValidateMap(ObjectClass * aP0, int edx0, const char *a2, int a4, char a5, void * aNoDigestHereMa)
{
  const void *v5; // esi
  int v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  void *v13[3]; // [esp+20h] [ebp-CCh] BYREF
  unsigned int v14[10]; // [esp+2Ch] [ebp-C0h] BYREF
  char v15; // [esp+54h] [ebp-98h]
  int v16; // [esp+58h] [ebp-94h]
  int v17; // [esp+5Ch] [ebp-90h]
  int v18[22]; // [esp+60h] [ebp-8Ch] BYREF
  unsigned char v19[12]; // [esp+B8h] [ebp-34h] BYREF
  int v20; // [esp+C4h] [ebp-28h]
  char Destination[32]; // [esp+CCh] [ebp-20h] BYREF

  v5 = a1; /*0x6951fa*/
  if ( !_strcmpi(a1, aRandmapSed) ) /*0x69520a*/
    return 0; /*0x69520a*/
  v6 = 0; /*0x695221*/
  if ( dword_A8B8D8 <= 0 ) /*0x695225*/
    return 0; /*0x69540d*/
  while ( _strcmpi((const void *)(*(unsigned int *)(dword_A8B8CC + 4 * v6) + 88), v5) ) /*0x695249*/
  {
    LABEL_17:
    if ( ++v6 >= dword_A8B8D8 ) /*0x6953fb*/
      return 0; /*0x6953fb*/
  }
  CCFileClass::Construct(v18, (char *)(*(unsigned int *)(dword_A8B8CC + 4 * v6) + 88)); /*0x695260*/
  if ( !((CCFileClass *)(v18))->Open(0) && a5 == 1 ) /*0x69527b*/
  {
    v7 = *(unsigned int *)(dword_A8B8CC + 4 * v6); /*0x695283*/
    v8 = Game::CheckForGameCD(60); /*0x69528b*/
    if ( !(uint8_t)(v8)->CheckExists() ) /*0x695293*/
    {
      v9 = GameOption::GetField(v7); /*0x69529e*/
      SetSoundWarning(v9); /*0x6952a5*/
    }
    ++dword_A8DAB4; /*0x6952bb*/
    if ( !(uint8_t)g_ptr_7E4C30(dword_81C1D0) ) /*0x6952d5*/
    {
      --dword_A8DAB4; /*0x695418*/
      v18[0] = (int)&g_ptr_7E16B0; /*0x69541d*/
      v20 = 0; /*0x695425*/
      Vector::Clear((int)v19); /*0x69542c*/
      v18[0] = (int)&off_7E1668; /*0x695435*/
      ((BufferIOFileClass *)(v18))->Dtor(); /*0x69543d*/
      return 0; /*0x69544e*/
    }
    --dword_A8DAB4; /*0x6952dc*/
  }
  if ( !((CCFileClass *)(v18))->Open(0) || CCFileClass::GetSize(v18) != a2 ) /*0x695300*/
  {
    LABEL_16:
    v18[0] = (int)&g_ptr_7E16B0; /*0x6953c3*/
    v20 = 0; /*0x6953d2*/
    Vector::Clear((int)v19); /*0x6953d9*/
    v18[0] = (int)&off_7E1668; /*0x6953e2*/
    ((BufferIOFileClass *)(v18))->Dtor(); /*0x6953ea*/
    v5 = a1; /*0x6953ef*/
    goto LABEL_17; /*0x6953ef*/
  }
  v13[1] = 0; /*0x69530a*/
  v13[2] = 0; /*0x69530e*/
  GenericList::Constructor(v14); /*0x695312*/
  v14[0] = &g_var_a3009f; /*0x695321*/
  memset(&v14[7], 0, 12); /*0x695329*/
  v15 = 0; /*0x695335*/
  v16 = 0; /*0x695339*/
  v17 = 0; /*0x69533d*/
  v13[0] = &g_ptr_7EA5F4; /*0x695341*/
  FileStraw::Open(v13, (int)v18, 0); /*0x695349*/
  INIClass::GetString( /*0x69536b*/
    (uint8_t ***)v13,
    (uint8_t *)g_INI_Key_Digest,
    (uint8_t *)::a1,
    aNoDigestHereMa,
    Destination,
    32);
  if ( a3 && *a3 && strcmp(a3, Destination) ) /*0x69538f*/
  {
    HashTable::DestroyHashTableINIClass(v13); /*0x6953be*/
    goto LABEL_16; /*0x6953be*/
  }
  strcpy((char *)a1, (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * v6) + 88)); /*0x695472*/
  HashTable::DestroyHashTableINIClass(v13); /*0x69547f*/
  v18[0] = (int)&g_ptr_7E16B0; /*0x69548b*/
  v20 = 0; /*0x695493*/
  Vector::Clear((int)v19); /*0x69549a*/
  v18[0] = (int)&off_7E1668; /*0x6954a3*/
  ((BufferIOFileClass *)(v18))->Dtor(); /*0x6954ab*/
  return 1; /*0x695401*/
}
}
// 0x695760
namespace gamemd {
int LoadGame_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  void (__stdcall *v11)(HWND, UINT, WPARAM, LPARAM); // ebp
  const char *v12; // edi
  HWND v13; // eax
  HWND v14; // esi
  char *v15; // eax
  char *v16; // edi
  LRESULT v17; // eax
  LPARAM v18; // ebx
  HWND v19; // eax
  HWND v20; // esi
  LRESULT wParama; // [esp+14h] [ebp+8h]
  LRESULT wParamb; // [esp+14h] [ebp+8h]

  result = BaseDialogProc(hWnd, wParam, a3, (unsigned int)a4); /*0x695777*/
  if ( result ) /*0x69577e*/
    return result; /*0x69577e*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x69578e*/
  if ( wParam != 273 ) /*0x695799*/
  {
    if ( wParam == 1175 ) /*0x6957a0*/
    {
      DlgItem = GetDlgItem(hWnd, 1629); /*0x6957b2*/
      if ( DlgItem ) /*0x6957bc*/
        SendMessageA(DlgItem, 0xC5u, 0x28u, 0); /*0x6957c8*/
      v7 = GetDlgItem(hWnd, 1631); /*0x6957d0*/
      if ( v7 ) /*0x6957d4*/
        SendMessageA(v7, 0xC5u, 0x3Eu, 0); /*0x6957e0*/
      v8 = GetDlgItem(hWnd, 1626); /*0x6957e8*/
      if ( v8 ) /*0x6957ec*/
      {
        SendMessageA(v8, 0xC5u, 0xFu, 0); /*0x6957fc*/
        return 0; /*0x695804*/
      }
    }
    return 0; /*0x6957ec*/
  }
  if ( (uint16_t)a3 > 0x65Bu ) /*0x695813*/
  {
    switch ( (int16_t)a3 ) /*0x695a7f*/
    {
      case 1628: /*0x695a7f*/
        if ( (*(((unsigned short *)&(a3)) + 1)) ) /*0x695b69*/
        {
        SendMessageA(a4, 0xF1u, 1u, 0); /*0x695b78*/
        SendDlgItemMessageA(hWnd, 1627, 0xF1u, 0, 0); /*0x695b8d*/
      }
        return 0; /*0x695b8d*/
      case 1629: /*0x695a7f*/
        if ( (*(((unsigned short *)&(a3)) + 1)) != 1281 ) /*0x695b2d*/
          return 0; /*0x695b2d*/
        goto LABEL_55; /*0x695b2d*/
      case 1630: /*0x695a7f*/
        if ( (*(((unsigned short *)&(a3)) + 1)) != 2 ) /*0x695ab1*/
          return 0; /*0x695ab1*/
        if ( SendMessageA(a4, 0x18Bu, 0, 0) <= 0 ) /*0x695acb*/
          return 0; /*0x695acb*/
        v17 = SendMessageA(a4, 0x188u, 0, 0); /*0x695adb*/
        if ( v17 == -1 ) /*0x695ae0*/
          return 0; /*0x695ae0*/
        v18 = WindowLongA + 8; /*0x695ae6*/
        SendMessageA(a4, 0x4B7u, v17, v18); /*0x695af1*/
        v19 = GetDlgItem(hWnd, 1629); /*0x695af9*/
        v20 = v19; /*0x695aff*/
        if ( !v19 ) /*0x695b03*/
          return 0; /*0x695b03*/
        SendMessageA(v19, 0x4B4u, 0, v18); /*0x695b12*/
        SetFocus(v20); /*0x695b15*/
        return 0; /*0x695b21*/
      case 1631: /*0x695a7f*/
        if ( (*(((unsigned short *)&(a3)) + 1)) != 1281 && (*(((unsigned short *)&(a3)) + 1)) != 512 ) /*0x695a95*/
          return 0; /*0x695a95*/
        DlgProcLoadGame_Load(WindowLongA); /*0x695a9d*/
        return 0; /*0x695aa8*/
      case 1632: /*0x695a7f*/
        if ( (*(((unsigned short *)&(a3)) + 1)) ) /*0x695b54*/
          return 0; /*0x695b57*/
        DlgProcLoadGame_Load_696C40(WindowLongA); /*0x695b5b*/
        return 0; /*0x695b66*/
      case 1633: /*0x695a7f*/
        if ( (*(((unsigned short *)&(a3)) + 1)) ) /*0x695b3f*/
          return 0; /*0x695b42*/
        LABEL_55:
        DlgProcLoadGame_Load_696AE0(WindowLongA); /*0x695b2f*/
        result = 0; /*0x695b39*/
        break; /*0x695b3c*/
      default:
        return 0;
    }
    return result; /*0x695b3c*/
  }
  if ( (uint16_t)a3 == 1627 ) /*0x695819*/
  {
    if ( (*(((unsigned short *)&(a3)) + 1)) ) /*0x695a3a*/
    {
      SendMessageA(a4, 0xF1u, 1u, 0); /*0x695a4d*/
      SendDlgItemMessageA(hWnd, 1628, 0xF1u, 0, 0); /*0x695a62*/
      return 0; /*0x695a6e*/
    }
    return 0; /*0x695a3d*/
  }
  if ( (uint16_t)a3 <= 0x3EBu ) /*0x695824*/
  {
    switch ( (uint16_t)a3 ) /*0x695826*/
    {
      case 0x3EBu: /*0x695826*/
        goto LABEL_65; /*0x695826*/
      case 1u: /*0x695826*/
        if ( !(*(((unsigned short *)&(a3)) + 1)) && (uint8_t)ApplyModemConfigSettings(WindowLongA) == 1 ) /*0x695886*/
        {
        WindowLongA->__pad_004 = 1; /*0x69588c*/
        return 0; /*0x695899*/
      }
        return 0; /*0x695886*/
      case 2u: /*0x695826*/
        if ( !(*(((unsigned short *)&(a3)) + 1)) ) /*0x69585b*/
        {
        WindowLongA->__pad_004 = 2; /*0x695864*/
        return 0; /*0x695871*/
      }
        return 0; /*0x69585e*/
      case 0x3EAu: /*0x695826*/
        LABEL_65:
        if ( (*(((unsigned short *)&(a3)) + 1)) ) /*0x695839*/
        {
        SendMessageA(a4, 0xF1u, 1u, 0); /*0x69584c*/
        return 0; /*0x695858*/
      }
        break;
    }
    return 0; /*0x695b93*/
  }
  if ( (uint16_t)a3 == 1623 ) /*0x6958a1*/
  {
    if ( (*(((unsigned short *)&(a3)) + 1)) != 1 ) /*0x695998*/
      return 0; /*0x695998*/
    v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x69599e*/
    wParamb = SendMessageA(a4, 0x147u, 0, 0); /*0x6959b9*/
    if ( SendMessageA(a4, 0x150u, wParamb, 0) == 4 ) /*0x6959c2*/
    {
      v12 = &WindowLongA->q008; /*0x6959c8*/
      SendMessageA(a4, 0x4BDu, wParamb, WindowLongA + 8); /*0x6959d3*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1631); /*0x6959dd*/
      goto LABEL_38; /*0x6959dd*/
    }
    LABEL_34:
    SetFocus(0); /*0x695981*/
    return 0; /*0x69598f*/
  }
  if ( (uint16_t)a3 != 1625 ) /*0x6958aa*/
  {
    if ( (uint16_t)a3 == 1626 && ((*(((unsigned short *)&(a3)) + 1)) == 1281 || (*(((unsigned short *)&(a3)) + 1)) == 512) ) /*0x6958c6*/
    {
      v9 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x6958d4*/
      v10 = v9; /*0x6958da*/
      if ( v9 ) /*0x6958de*/
      {
        ShowWindow(v9, 0); /*0x6958e7*/
        EnableWindow(v10, 0); /*0x6958f0*/
        SendMessageA(v10, 0x4B5u, 0x10u, WindowLongA + 8); /*0x695902*/
        WindowLongA->u8_17 = 0; /*0x69590a*/
        String::Trim(&WindowLongA->q008); /*0x69590e*/
        _strupr(&WindowLongA->q008); /*0x695914*/
        ListBox::SetCustomEntry((HWND *)WindowLongA, 1625, 3, &WindowLongA->q008); /*0x695926*/
        return 0; /*0x695931*/
      }
    }
    return 0; /*0x6958de*/
  }
  if ( (*(((unsigned short *)&(a3)) + 1)) != 1 ) /*0x69593a*/
    return 0; /*0x69593a*/
  v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x695940*/
  wParama = SendMessageA(a4, 0x147u, 0, 0); /*0x69595b*/
  if ( SendMessageA(a4, 0x150u, wParama, 0) != 3 ) /*0x695964*/
    goto LABEL_34; /*0x695964*/
  v12 = &WindowLongA->q008; /*0x69596a*/
  SendMessageA(a4, 0x4BDu, wParama, WindowLongA + 8); /*0x695975*/
  v13 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x69597f*/
  LABEL_38:
  v14 = v13; /*0x6959e3*/
  if ( !v13 ) /*0x6959e7*/
    return 0; /*0x6959e7*/
  ShowWindow(v13, 5); /*0x6959f0*/
  EnableWindow(v14, 1); /*0x6959f9*/
  v15 = strchr(v12, 45); /*0x695a02*/
  if ( v15 ) /*0x695a0e*/
  {
    v16 = v15 + 1; /*0x695a10*/
    String::Trim(v15 + 1); /*0x695a13*/
  }
  else
  {
    v16 = &g_INI_DefaultBuffer; /*0x695a1a*/
  }
  v11(v14, 0x4B4u, 0, (LPARAM)v16); /*0x695a28*/
  SetFocus(v14); /*0x695a2b*/
  return 0; /*0x6957ff*/
}
}
// 0x6994F0
namespace gamemd {
int ParseMapFileHeader(CampaignScore * aP0, unsigned short * a1, char * a2, CampaignScore * aP3, unsigned char * a4, unsigned int * a5, unsigned int * a6)
{

  int v7; // edi
  void *v8; // ebp
  signed int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v13; // edi
  void *v14; // esi
  signed int v15; // edi
  int v17; // [esp+10h] [ebp-1A4h]
  char *v19; // [esp+1Ch] [ebp-198h]
  CCFileClass v20; // [esp+20h] [ebp-194h] BYREF
  int v21[3]; // [esp+78h] [ebp-13Ch] BYREF
  int v22; // [esp+84h] [ebp-130h]
  Straw v23; // [esp+8Ch] [ebp-128h] BYREF
  int v24; // [esp+94h] [ebp-120h]
  Buffer v25; // [esp+98h] [ebp-11Ch] BYREF
  int v26; // [esp+C0h] [ebp-F4h]
  INIClass v27; // [esp+C4h] [ebp-F0h] BYREF
  char v28; // [esp+104h] [ebp-B0h]
  INIClass v29; // [esp+11Ch] [ebp-98h] BYREF
  char v30; // [esp+15Ch] [ebp-58h]
  char v31[64]; // [esp+174h] [ebp-40h] BYREF

  CCFileClass::Construct(&v20, aP0); /*0x699507*/
  if ( (unsigned __int8)CCFileClass::Open(&v20, 0) && FileClass::Load(&v20, (const CHAR *)1) ) /*0x699526*/
  {
    v7 = 0; /*0x699533*/
    v8 = 0; /*0x699535*/
    while ( 1 ) /*0x69953b*/
    {
      v7 += 5; /*0x69953b*/
      v9 = v7 * CCFileClass::GetSize(&v20) / 100; /*0x69955b*/
      if ( v8 ) /*0x69955d*/
        __3_YAXPAX_Z(v8); /*0x699560*/
      v8 = (void *)__2_YAPAXI_Z(v9 + 1); /*0x699571*/
      if ( !v8 ) /*0x699578*/
        break; /*0x699578*/
      BufferIOFileClass::Seek(&v20, 0, 0); /*0x699584*/
      CCFileClass::Read(&v20, v8, v9); /*0x69958f*/
      *((unsigned char *)v8 + v9) = 0; /*0x699594*/
      v10 = strstr((const char *)v8, aBasic_0); /*0x69959d*/
      v11 = v10; /*0x6995a2*/
      if ( v10 ) /*0x6995a9*/
      {
        v12 = strstr(v10 + 5, asc_83F484); /*0x6995b4*/
        v19 = v12; /*0x6995be*/
        if ( v12 > v11 ) /*0x6995c2*/
        {
          v12[1] = 0; /*0x6995e1*/
          Debug::Log(); /*0x6995e4*/
          v13 = 0; /*0x6995ec*/
          v14 = 0; /*0x6995ee*/
          while ( 1 ) /*0x6995f5*/
          {
            v17 = v13 + 1; /*0x6995f5*/
            v15 = (v13 + 1) * CCFileClass::GetSize(&v20) / 100; /*0x699616*/
            if ( v14 ) /*0x699618*/
              __3_YAXPAX_Z(v14); /*0x69961b*/
            v14 = (void *)__2_YAPAXI_Z(v15 + 1); /*0x69962c*/
            if ( !v14 ) /*0x699633*/
              goto LABEL_20; /*0x699633*/
            BufferIOFileClass::Seek(&v20, -v15, 2u); /*0x699644*/
            CCFileClass::Read(&v20, v14, v15); /*0x69964f*/
            *((unsigned char *)v14 + v15) = 0; /*0x699654*/
            if ( strstr((const char *)v14, aDigest_0) ) /*0x69965d*/
            {
              Debug::Log(); /*0x699693*/
              v27.headNode[0] = 0; /*0x6996a2*/
              v27.headNode[1] = 0; /*0x6996a9*/
              INISectionList::Constructor((INISectionList *)&v27.headNode[2]); /*0x6996b0*/
              Node::Init((MixFileClass *)&v27.needsSave_flag); /*0x6996bc*/
              v27.INIClass_field_3C = 0; /*0x6996d5*/
              v28 = 0; /*0x6996dc*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x6996e3*/
              v25.Buffer_field_14 = 0; /*0x6996ea*/
              v25.Buffer_field_18 = 0; /*0x6996f1*/
              /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E61F0) */  /*0x6996f8*/
              Buffer::Init((Buffer *)&v25.Buffer_field_1C, (int)v8, v19 - (unsigned char *)v8); /*0x699703*/
              v26 = 0; /*0x69970f*/
              /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E61E0) */  /*0x699720*/
              CCINIClass::LoadAndVerifyDigest((int *)v27.__pad_0, (int)&v25.Buffer_field_10, 0, 0); /*0x69972b*/
              v29.headNode[0] = 0; /*0x699737*/
              v29.headNode[1] = 0; /*0x69973e*/
              INISectionList::Constructor((INISectionList *)&v29.headNode[2]); /*0x699745*/
              Node::Init((MixFileClass *)&v29.needsSave_flag); /*0x699751*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x699756*/
              v29.INIClass_field_3C = 0; /*0x699764*/
              v30 = 0; /*0x69976b*/
              v23.Straw_field_0x04 = 0; /*0x69977f*/
              v24 = 0; /*0x699786*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E61F0) */  /*0x69978d*/
              Buffer::Init(&v25, (int)v14, strlen((const char *)v14) + 1); /*0x699798*/
              v25.Buffer_field_0C = 0; /*0x6997ae*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E61E0) */  /*0x6997b5*/
              CCINIClass::LoadAndVerifyDigest((int *)v29.__pad_0, (int)&v23, 0, 0); /*0x6997c0*/
              *a5 = INIClass::ReadInt_Overwrite((bool *)v27.__pad_0, aBasic, aMinplayers, *a5); /*0x6997e5*/
              *a6 = INIClass::ReadInt_Overwrite((bool *)v27.__pad_0, aBasic, aMaxplayers, *a6); /*0x69981b*/
              INIClass::GetString( /*0x699833*/
                &v27,
                aBasic,
                (unsigned __int8 *)g_INI_Key_GameMode,
                &g_INI_DefaultBuffer,
                aP3,
                256);
              INIClass::GetString(&v27, aBasic, (unsigned __int8 *)g_INI_Key_Name, g_Str_No_Name, v31, 64); /*0x699858*/
              BulkCharToWide(a1, (unsigned __int8 *)v31, -1); /*0x69986a*/
              INIClass::GetString(&v29, (unsigned __int8 *)g_INI_Key_Digest, a1, g_Str_No_Digest, a2, 32); /*0x69988f*/
              *a4 = INIClass::ReadBool_Overwrite((int *)v27.__pad_0, aBasic, (unsigned __int8 *)g_INI_Key_Official, 0); /*0x6998ba*/
              Debug::Log(); /*0x6998d9*/
              Debug::Log(); /*0x6998eb*/
              __3_YAXPAX_Z(v8); /*0x6998f1*/
              __3_YAXPAX_Z(v14); /*0x6998f7*/
              Vector::Clear((int)&v25); /*0x699906*/
              Straw::Dtor(&v23); /*0x699912*/
              HashTable::DestroyHashTableINIClass(&v29); /*0x69991e*/
              Vector::Clear((int)&v25.Buffer_field_1C); /*0x69992a*/
              Straw::Dtor((Straw *)&v25.Buffer_field_10); /*0x699936*/
              HashTable::DestroyHashTableINIClass(&v27); /*0x699942*/
              goto LABEL_20; /*0x699942*/
            }
            if ( v17 >= 100 ) /*0x699670*/
            {
              __3_YAXPAX_Z(v8); /*0x69967a*/
              __3_YAXPAX_Z(v14); /*0x699680*/
              goto LABEL_20; /*0x699688*/
            }
            v13 = v17; /*0x699672*/
          }
        }
      }
      if ( v7 >= 100 ) /*0x6995c7*/
      {
        __3_YAXPAX_Z(v8); /*0x6995ce*/
        break; /*0x6995d6*/
      }
    }
  }
LABEL_20:
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x699947*/
  v22 = 0; /*0x699953*/
  Vector::Clear((int)v21); /*0x69995a*/
  *(unsigned int *)v20.__tail_0 = &off_7E1668; /*0x699963*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x699970*/

}
}
// 0x69B690
namespace gamemd {
int ObjectClass::sub_69B690()
{

  int result; // eax
  int v3; // edi
  int v4; // edx
  unsigned int **v5; // esi
  unsigned int *v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *i; // edx

  while ( 1 ) /*0x69b6aa*/
  {
    result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b6aa*/
    if ( result == -2 ) /*0x69b6b1*/
      return result; /*0x69b6fa*/
    v3 = this->u32_284C; /*0x69b6b3*/
    v4 = 0; /*0x69b6b9*/
    if ( v3 <= 0 ) /*0x69b6bd*/
    {
LABEL_10:
      v8 = 0; /*0x69b6e5*/
      for ( i = this->hasParachute; *(unsigned int *)i != result; i += 4 ) /*0x69b6e7*/
      {
        if ( ++v8 >= 8 ) /*0x69b6f8*/
          return result; /*0x69b6f8*/
      }
    }
    else
    {
      v5 = (unsigned int **)this->u32_2840; /*0x69b6bf*/
      while ( 1 ) /*0x69b6c5*/
      {
        v6 = *v5; /*0x69b6c5*/
        if ( *(unsigned int *)((char *)*v5 + 87) == -2 && *(unsigned int *)((char *)v6 + 83) == -1 ) /*0x69b6d0*/
          v7 = -2; /*0x69b6d2*/
        else
          v7 = *(unsigned int *)((char *)v6 + 83); /*0x69b6d6*/
        if ( v7 == result ) /*0x69b6db*/
          break; /*0x69b6db*/
        ++v4; /*0x69b6dd*/
        ++v5; /*0x69b6de*/
        if ( v4 >= v3 ) /*0x69b6e3*/
          goto LABEL_10; /*0x69b6e3*/
      }
    }
  }

}
}
// 0x69BCC0
namespace gamemd {
int sub_69BCC0(ObjectClass * aP0)
{

  int v1 = 0; // edi /*0x69bcc7*/
  char **v2; // esi
  v2 = (char **)&dword_A8DA90; /*0x69bcc9*/
  while ( 1 ) /*0x69bcd0*/
  {
    char *v3; // eax
    v3 = ToWideStringChar(*v2); /*0x69bcd0*/
    if ( !_strcmpi(aP0, v3) ) /*0x69bcd7*/
      break; /*0x69bcd7*/
    ++v2; /*0x69bce3*/
    ++v1; /*0x69bce6*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x69bced*/
      return 0; /*0x69bcf4*/
  }
  return v1; /*0x69bcef*/
}
}
// 0x69F0C0
namespace gamemd {
void * ObjectClass::sub_69F0C0(void * a2)
{
  ObjectClass *nextObject; // ebx
  int occupant; // edx
  int fallRate; // eax
  ObjectClass *v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int referenceCount; // edx
  Matrix3x4 v13; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x69f0cc*/
  nextObject = this->nextObject; /*0x69f0d1*/
  if ( nextObject ) /*0x69f0da*/
  {
    occupant = this->occupant; /*0x69f0e0*/
    fallRate = this->fallRate; /*0x69f0e3*/
    if ( occupant != -1 ) /*0x69f0ef*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - occupant >= fallRate ) /*0x69f0f7*/
        fallRate = 0; /*0x69f0fd*/
      else
        fallRate -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - occupant; /*0x69f0f9*/
    }
    if ( (double)((int)nextObject - fallRate) / (double)(int)this->nextObject < 1.0 ) /*0x69f118*/
    {
      v6 = this->nextObject; /*0x69f11a*/
      if ( v6 ) /*0x69f123*/
      {
        v8 = this->occupant; /*0x69f12d*/
        v9 = this->fallRate; /*0x69f130*/
        if ( v8 != -1 ) /*0x69f136*/
        {
          if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v8 >= v9 ) /*0x69f13e*/
            v9 = 0; /*0x69f144*/
          else
            v9 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v8; /*0x69f140*/
        }
        v7 = (double)((int)v6 - v9) / (double)(int)this->nextObject; /*0x69f150*/
      }
      else
      {
        v7 = 1.0; /*0x69f125*/
      }
      v10 = InterpolateVoxelAnimPose(v14, (int)this->NeedsSaveOrLink, this->referenceCount, v7); /*0x69f165*/
      goto LABEL_17; /*0x69f16a*/
    }
  }
  referenceCount = this->referenceCount; /*0x69f16c*/
  if ( referenceCount ) /*0x69f171*/
  {
    v10 = CopyAudioData(v14, referenceCount); /*0x69f177*/
    LABEL_17:
    memcpy(&v13, v10, sizeof(v13)); /*0x69f187*/
  }
  memcpy(a2, &v13, 0x30u); /*0x69f189*/
  return a2; /*0x69f19a*/
}
}
// 0x690150
namespace gamemd {
void nullsub_227()
{
  ; /*0x690150*/
}
} // namespace gamemd

// 0x690530
namespace gamemd {
void E4Recv_690530::sub_690530(void * a2, int a3)
{


  if ( a2 ) /*0x69053b*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x69053d*/
    {
      int i; // esi
      for ( i = 0; i < this->ambientSoundController[2]; ++i ) /*0x69054d*/
      {
        if ( !_strcmpi((char *)a2, **((char ***)&this->attachedBomb->AbstractClass + i)) ) /*0x690559*/
          break; /*0x690563*/
      }
    }
  }

}
} // namespace gamemd

// 0x6905F0
namespace gamemd {
char * E4Recv_6905F0::sub_6905F0()
{

  void *ScoreFontClass_field_0x0C; // eax
  ScoreFontClass_field_0x0C = (void *)this->M12; /*0x6905f6*/
  /* X11: ptr_0 install elided (implicit via ScoreFontClass virtuals 0x6905f9) */
  if ( ScoreFontClass_field_0x0C && this->M16 == 1 ) /*0x690607*/
  {
    operator delete((ScoreFontClass_field_0x0C)); /*0x69060a*/
    this->M12 = 0; /*0x690612*/
    this->M16 = 0; /*0x690615*/
  }
  char *result; // eax
  result = (char *)--dword_B0558C; /*0x69061d*/
  if ( !dword_B0558C ) /*0x690623*/
  {
    result = (char *)&byte_B05594; /*0x690625*/
    do /*0x690637*/
    {
      *((unsigned int *)result - 1) = 0; /*0x69062a*/
      *result = 0; /*0x69062d*/
      result += 8; /*0x69062f*/
    }
    while ( (int)result < (int)byte_B055AC ); /*0x690637*/
  }
  return result; /*0x690639*/
}
} // namespace gamemd

// 0x6911B0
namespace gamemd {
void sub_6911B0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x6911bc*/
  dbl_B055C8 = Math::Sqrt(v0 + v0); /*0x6911ce*/
}
} // namespace gamemd

// 0x6911E0
namespace gamemd {
void sub_6911E0()
{
  dbl_B05618 = dbl_B055C8 / 60.0; /*0x6911ec*/
}
} // namespace gamemd

// 0x691200
namespace gamemd {
void sub_691200()
{
  dbl_B05600 = 1.0 / dbl_B05618; /*0x69120c*/
}
} // namespace gamemd

// 0x691220
namespace gamemd {
void sub_691220()
{
  dbl_B055F8 = 0.0174532925199433 * 45.0; /*0x69122c*/
}
} // namespace gamemd

// 0x691240
namespace gamemd {
void sub_691240()
{
  dbl_B055D0 = 0.0174532925199433 * 60.0; /*0x69124c*/
}
} // namespace gamemd

// 0x691260
namespace gamemd {
void sub_691260()
{
  unk_B055A8 = 0.0174532925199433 * 90.0; /*0x69126c*/
}
} // namespace gamemd

// 0x691280
namespace gamemd {
long long sub_691280()
{

  double v0; // st7
  v0 = Math::Sin(unk_B055A8 - dbl_B055D0); /*0x691292*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B055C8 * 0.5); /*0x6912a6*/
  dword_B05620 = result; /*0x6912ab*/
  return result; /*0x6912b0*/
}
} // namespace gamemd

// 0x6912C0
namespace gamemd {
void sub_6912C0()
{
  dbl_B055D8 = Math::ArcTan((double)dword_B05620 * 0.00390625); /*0x6912d7*/
}
} // namespace gamemd

// 0x6912F0
namespace gamemd {
void sub_6912F0()
{
  dbl_B055F0 = Math::ArcTan((double)(2 * dword_B05620) / dbl_B055C8); /*0x691312*/
}
} // namespace gamemd

// 0x691320
namespace gamemd {
long long sub_691320()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B05620) + 0.5); /*0x69133b*/
  dword_B05614 = result; /*0x691340*/
  return result; /*0x691346*/
}
} // namespace gamemd

// 0x691350
namespace gamemd {
int sub_691350()
{
  word_B055C0 = 0; /*0x691352*/
  word_B055C2 = 0; /*0x691358*/
  return 0; /*0x69135e*/
}
} // namespace gamemd

// 0x691360
namespace gamemd {
int sub_691360()
{
  dword_B055E0 = 0; /*0x691362*/
  dword_B055E4 = 0; /*0x691367*/
  dword_B055E8 = 0; /*0x69136c*/
  return 0; /*0x691371*/
}
} // namespace gamemd

// 0x691380
namespace gamemd {
int sub_691380()
{
  dword_B05610 = 0; /*0x691385*/
  dword_B05608 = 128; /*0x69138f*/
  dword_B0560C = 128; /*0x691394*/
  return 128; /*0x691399*/
}
} // namespace gamemd

// 0x6913A0
namespace gamemd {
int sub_6913A0()
{
  dword_B055B0 = 0; /*0x6913a2*/
  dword_B055B4 = 0; /*0x6913a7*/
  dword_B055B8 = 0; /*0x6913ac*/
  dword_B055BC = 0; /*0x6913b1*/
  return 0; /*0x6913b6*/
}
} // namespace gamemd

// 0x691B30
namespace gamemd {
void nullsub_34()
{
  ; /*0x691b30*/
}
} // namespace gamemd

// 0x692030
namespace gamemd {
int sub_692030()
{
  dword_B05648 = 0; /*0x692032*/
  dword_B0564C = 0; /*0x692037*/
  dword_B05650 = 0; /*0x69203c*/
  dword_B05654 = 0; /*0x692041*/
  return 0; /*0x692046*/
}
} // namespace gamemd

// 0x692050
namespace gamemd {
void sub_692050()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x69205c*/
  dbl_B05660 = Math::Sqrt(v0 + v0); /*0x69206e*/
}
} // namespace gamemd

// 0x692080
namespace gamemd {
void sub_692080()
{
  dbl_B056B8 = dbl_B05660 / 60.0; /*0x69208c*/
}
} // namespace gamemd

// 0x6920A0
namespace gamemd {
void sub_6920A0()
{
  dbl_B056A0 = 1.0 / dbl_B056B8; /*0x6920ac*/
}
} // namespace gamemd

// 0x6920C0
namespace gamemd {
void sub_6920C0()
{
  dbl_B05698 = 0.0174532925199433 * 45.0; /*0x6920cc*/
}
} // namespace gamemd

// 0x6920E0
namespace gamemd {
void sub_6920E0()
{
  dbl_B05668 = 0.0174532925199433 * 60.0; /*0x6920ec*/
}
} // namespace gamemd

// 0x692100
namespace gamemd {
void sub_692100()
{
  dbl_B05630 = 0.0174532925199433 * 90.0; /*0x69210c*/
}
} // namespace gamemd

// 0x692120
namespace gamemd {
long long sub_692120()
{

  double v0; // st7
  v0 = Math::Sin(dbl_B05630 - dbl_B05668); /*0x692132*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B05660 * 0.5); /*0x692146*/
  dword_B056C0 = result; /*0x69214b*/
  return result; /*0x692150*/
}
} // namespace gamemd

// 0x692160
namespace gamemd {
void sub_692160()
{
  dbl_B05670 = Math::ArcTan((double)dword_B056C0 * 0.00390625); /*0x692177*/
}
} // namespace gamemd

// 0x692190
namespace gamemd {
void sub_692190()
{
  dbl_B05688 = Math::ArcTan((double)(2 * dword_B056C0) / dbl_B05660); /*0x6921b2*/
}
} // namespace gamemd

// 0x6921C0
namespace gamemd {
long long sub_6921C0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B056C0) + 0.5); /*0x6921db*/
  dword_B056B4 = result; /*0x6921e0*/
  return result; /*0x6921e6*/
}
} // namespace gamemd

// 0x6921F0
namespace gamemd {
int sub_6921F0()
{
  dword_B05658 = 0; /*0x6921f2*/
  return 0; /*0x6921fe*/
}
} // namespace gamemd

// 0x692200
namespace gamemd {
int sub_692200()
{
  dword_B05678 = 0; /*0x692202*/
  dword_B0567C = 0; /*0x692207*/
  dword_B05680 = 0; /*0x69220c*/
  return 0; /*0x692211*/
}
} // namespace gamemd

// 0x692220
namespace gamemd {
int sub_692220()
{
  dword_B056B0 = 0; /*0x692225*/
  dword_B056A8 = 128; /*0x69222f*/
  dword_B056AC = 128; /*0x692234*/
  return 128; /*0x692239*/
}
} // namespace gamemd

// 0x692240
namespace gamemd {
int sub_692240()
{
  dword_B05638 = TimerGetTicks(); /*0x69224f*/
  dword_B05640 = 0; /*0x692254*/
  return atexit(sub_692270); /*0x692264*/
}
} // namespace gamemd

// 0x692270
namespace gamemd {
void sub_692270()
{
  if ( (byte_B05629 & 1) == 0 ) /*0x69227a*/
    byte_B05629 |= 1u; /*0x69227e*/
}
} // namespace gamemd

// 0x692F20
namespace gamemd {
void nullsub_175()
{
  ; /*0x692f20*/
}
} // namespace gamemd

// 0x693940
namespace gamemd {
int sub_693940()
{
  dword_B056D0 = 0; /*0x693942*/
  dword_B056D4 = 0; /*0x693947*/
  dword_B056D8 = 0; /*0x69394c*/
  dword_B056DC = 0; /*0x693951*/
  return 0; /*0x693956*/
}
} // namespace gamemd

// 0x693960
namespace gamemd {
void sub_693960()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x69396c*/
  dbl_B056E8 = Math::Sqrt(v0 + v0); /*0x69397e*/
}
} // namespace gamemd

// 0x693990
namespace gamemd {
void sub_693990()
{
  dbl_B05738 = dbl_B056E8 / 60.0; /*0x69399c*/
}
} // namespace gamemd

// 0x6939B0
namespace gamemd {
void sub_6939B0()
{
  dbl_B05720 = 1.0 / dbl_B05738; /*0x6939bc*/
}
} // namespace gamemd

// 0x6939D0
namespace gamemd {
void sub_6939D0()
{
  dbl_B05718 = 0.0174532925199433 * 45.0; /*0x6939dc*/
}
} // namespace gamemd

// 0x6939F0
namespace gamemd {
void sub_6939F0()
{
  dbl_B056F0 = 0.0174532925199433 * 60.0; /*0x6939fc*/
}
} // namespace gamemd

// 0x693A10
namespace gamemd {
void sub_693A10()
{
  dbl_B056C8 = 0.0174532925199433 * 90.0; /*0x693a1c*/
}
} // namespace gamemd

// 0x693A30
namespace gamemd {
long long sub_693A30()
{

  double v0; // st7
  v0 = Math::Sin(dbl_B056C8 - dbl_B056F0); /*0x693a42*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B056E8 * 0.5); /*0x693a56*/
  dword_B05740 = result; /*0x693a5b*/
  return result; /*0x693a60*/
}
} // namespace gamemd

// 0x693A70
namespace gamemd {
void sub_693A70()
{
  dbl_B056F8 = Math::ArcTan((double)dword_B05740 * 0.00390625); /*0x693a87*/
}
} // namespace gamemd

// 0x693AA0
namespace gamemd {
void sub_693AA0()
{
  dbl_B05710 = Math::ArcTan((double)(2 * dword_B05740) / dbl_B056E8); /*0x693ac2*/
}
} // namespace gamemd

// 0x693AD0
namespace gamemd {
long long sub_693AD0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B05740) + 0.5); /*0x693aeb*/
  dword_B05734 = result; /*0x693af0*/
  return result; /*0x693af6*/
}
} // namespace gamemd

// 0x693B00
namespace gamemd {
int sub_693B00()
{
  word_B056E0 = 0; /*0x693b02*/
  word_B056E2 = 0; /*0x693b08*/
  return 0; /*0x693b0e*/
}
} // namespace gamemd

// 0x693B10
namespace gamemd {
int sub_693B10()
{
  dword_B05700 = 0; /*0x693b12*/
  dword_B05704 = 0; /*0x693b17*/
  dword_B05708 = 0; /*0x693b1c*/
  return 0; /*0x693b21*/
}
} // namespace gamemd

// 0x693B30
namespace gamemd {
int sub_693B30()
{
  dword_B05730 = 0; /*0x693b35*/
  dword_B05728 = 128; /*0x693b3f*/
  dword_B0572C = 128; /*0x693b44*/
  return 128; /*0x693b49*/
}
} // namespace gamemd

// 0x6954C0
namespace gamemd {
int sub_6954C0()
{
  dword_B05750 = 0; /*0x6954c2*/
  dword_B05754 = 0; /*0x6954c7*/
  dword_B05758 = 0; /*0x6954cc*/
  dword_B0575C = 0; /*0x6954d1*/
  return 0; /*0x6954d6*/
}
} // namespace gamemd

// 0x6954E0
namespace gamemd {
void sub_6954E0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x6954ec*/
  dbl_B05768 = Math::Sqrt(v0 + v0); /*0x6954fe*/
}
} // namespace gamemd

// 0x695510
namespace gamemd {
void sub_695510()
{
  dbl_B057B8 = dbl_B05768 / 60.0; /*0x69551c*/
}
} // namespace gamemd

// 0x695530
namespace gamemd {
void sub_695530()
{
  dbl_B057A0 = 1.0 / dbl_B057B8; /*0x69553c*/
}
} // namespace gamemd

// 0x695550
namespace gamemd {
void sub_695550()
{
  dbl_B05798 = 0.0174532925199433 * 45.0; /*0x69555c*/
}
} // namespace gamemd

// 0x695570
namespace gamemd {
void sub_695570()
{
  dbl_B05770 = 0.0174532925199433 * 60.0; /*0x69557c*/
}
} // namespace gamemd

// 0x695590
namespace gamemd {
void sub_695590()
{
  dbl_B05748 = 0.0174532925199433 * 90.0; /*0x69559c*/
}
} // namespace gamemd

// 0x6955B0
namespace gamemd {
long long sub_6955B0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_B05748 - dbl_B05770); /*0x6955c2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B05768 * 0.5); /*0x6955d6*/
  dword_B057C0 = result; /*0x6955db*/
  return result; /*0x6955e0*/
}
} // namespace gamemd

// 0x6955F0
namespace gamemd {
void sub_6955F0()
{
  dbl_B05778 = Math::ArcTan((double)dword_B057C0 * 0.00390625); /*0x695607*/
}
} // namespace gamemd

// 0x695620
namespace gamemd {
void sub_695620()
{
  dbl_B05790 = Math::ArcTan((double)(2 * dword_B057C0) / dbl_B05768); /*0x695642*/
}
} // namespace gamemd

// 0x695650
namespace gamemd {
long long sub_695650()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B057C0) + 0.5); /*0x69566b*/
  dword_B057B4 = result; /*0x695670*/
  return result; /*0x695676*/
}
} // namespace gamemd

// 0x695680
namespace gamemd {
int sub_695680()
{
  word_B05760 = 0; /*0x695682*/
  word_B05762 = 0; /*0x695688*/
  return 0; /*0x69568e*/
}
} // namespace gamemd

// 0x695690
namespace gamemd {
int sub_695690()
{
  dword_B05780 = 0; /*0x695692*/
  dword_B05784 = 0; /*0x695697*/
  dword_B05788 = 0; /*0x69569c*/
  return 0; /*0x6956a1*/
}
} // namespace gamemd

// 0x6956B0
namespace gamemd {
int sub_6956B0()
{
  dword_B057B0 = 0; /*0x6956b5*/
  dword_B057A8 = 128; /*0x6956bf*/
  dword_B057AC = 128; /*0x6956c4*/
  return 128; /*0x6956c9*/
}
} // namespace gamemd

// 0x6966D0
namespace gamemd {
HWND E4Recv_6966D0::sub_6966D0()
{

  bool v2; // bl
  v2 = this->lastLayer == 0; /*0x6966ec*/
  HWND DlgItem; // eax
  DlgItem = GetDlgItem((HWND)this->ptr_0, 1628); /*0x6966ef*/
  if ( DlgItem ) /*0x6966f9*/
    SendMessageA(DlgItem, 0xF1u, v2, 0); /*0x69670c*/
  int result; // eax
  result = (int)GetDlgItem((HWND)this->ptr_0, 1627); /*0x696716*/
  if ( result ) /*0x69671a*/
    return SendMessageA((HWND)result, 0xF1u, !v2, 0); /*0x69672c*/
  return result; /*0x69672e*/
}
} // namespace gamemd

// 0x696950
namespace gamemd {
HWND E4Recv_696950::sub_696950()
{


  int result; // eax
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1626); /*0x69695c*/
  HWND v3; // ebx
  v3 = (HWND)result; /*0x696962*/
  if ( result ) /*0x696966*/
  {
    ShowWindow((HWND)result, 0); /*0x69696c*/
    EnableWindow(v3, 0); /*0x696975*/
    SendMessageA(v3, 0x4B5u, 0x10u, (LPARAM)&this->?); /*0x696987*/
    HIBYTE(this->M23) = 0; /*0x69698f*/
    String::Trim(&this->ptr_8); /*0x696993*/
    _strupr(this->ptr_8); /*0x696999*/
    return ListBox::SetCustomEntry((ListBox *)this, 1625, 3, &this->?); /*0x6969ab*/
  }
  return result; /*0x6969b1*/

}
} // namespace gamemd

// 0x696D00
namespace gamemd {
int sub_696D00()
{
  dword_B057D0 = 0; /*0x696d02*/
  dword_B057D4 = 0; /*0x696d07*/
  dword_B057D8 = 0; /*0x696d0c*/
  dword_B057DC = 0; /*0x696d11*/
  return 0; /*0x696d16*/
}
} // namespace gamemd

// 0x696D20
namespace gamemd {
void sub_696D20()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x696d2c*/
  dbl_B057E8 = Math::Sqrt(v0 + v0); /*0x696d3e*/
}
} // namespace gamemd

// 0x696D50
namespace gamemd {
void sub_696D50()
{
  dbl_B07778 = dbl_B057E8 / 60.0; /*0x696d5c*/
}
} // namespace gamemd

// 0x696D70
namespace gamemd {
void sub_696D70()
{
  dbl_B07760 = 1.0 / dbl_B07778; /*0x696d7c*/
}
} // namespace gamemd

// 0x696D90
namespace gamemd {
void sub_696D90()
{
  dbl_B07758 = 0.0174532925199433 * 45.0; /*0x696d9c*/
}
} // namespace gamemd

// 0x696DB0
namespace gamemd {
void sub_696DB0()
{
  dbl_B057F0 = 0.0174532925199433 * 60.0; /*0x696dbc*/
}
} // namespace gamemd

// 0x696DD0
namespace gamemd {
void sub_696DD0()
{
  dbl_B057C8 = 0.0174532925199433 * 90.0; /*0x696ddc*/
}
} // namespace gamemd

// 0x696DF0
namespace gamemd {
long long sub_696DF0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_B057C8 - dbl_B057F0); /*0x696e02*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B057E8 * 0.5); /*0x696e16*/
  dword_B07780 = result; /*0x696e1b*/
  return result; /*0x696e20*/
}
} // namespace gamemd

// 0x696E30
namespace gamemd {
void sub_696E30()
{
  dbl_B057F8 = Math::ArcTan((double)dword_B07780 * 0.00390625); /*0x696e47*/
}
} // namespace gamemd

// 0x696E60
namespace gamemd {
void sub_696E60()
{
  dbl_B07750 = Math::ArcTan((double)(2 * dword_B07780) / dbl_B057E8); /*0x696e82*/
}
} // namespace gamemd

// 0x696E90
namespace gamemd {
long long sub_696E90()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B07780) + 0.5); /*0x696eab*/
  dword_B07774 = result; /*0x696eb0*/
  return result; /*0x696eb6*/
}
} // namespace gamemd

// 0x696EC0
namespace gamemd {
int sub_696EC0()
{
  word_B057E0 = 0; /*0x696ec2*/
  word_B057E2 = 0; /*0x696ec8*/
  return 0; /*0x696ece*/
}
} // namespace gamemd

// 0x696ED0
namespace gamemd {
int sub_696ED0()
{
  dword_B07740 = 0; /*0x696ed2*/
  dword_B07744 = 0; /*0x696ed7*/
  dword_B07748 = 0; /*0x696edc*/
  return 0; /*0x696ee1*/
}
} // namespace gamemd

// 0x696EF0
namespace gamemd {
int sub_696EF0()
{
  dword_B07770 = 0; /*0x696ef5*/
  dword_B07768 = 128; /*0x696eff*/
  dword_B0776C = 128; /*0x696f04*/
  return 128; /*0x696f09*/
}
} // namespace gamemd

// 0x697B60
namespace gamemd {
void nullsub_228()
{
  ; /*0x697b60*/
}
} // namespace gamemd

// 0x69A300
namespace gamemd {
void nullsub_35()
{
  ; /*0x69a300*/
}
} // namespace gamemd

// 0x69A340
namespace gamemd {
DWORD sub_69A340()
{

  DWORD Time; // [esp+Ch] [ebp-4h] BYREF
  Time = timeGetTime(); /*0x69a34a*/
  DWORD v0; // eax
  v0 = DiskSpace::CheckAvailable(); /*0x69a34e*/
  ComputeHash(&Time, v0); /*0x69a359*/
  char *v1; // eax
  v1 = Object_Init_7CBC11(aPath); /*0x69a363*/
  const char *v2 = v1; // ebx /*0x69a368*/
  if ( v1 ) /*0x69a36f*/
  {
    unsigned int v3 = 0; // esi /*0x69a378*/
    if ( strlen(v1) ) /*0x69a37a*/
    {
      do /*0x69a39d*/
        ComputeHash(&Time, v2[v3++]); /*0x69a389*/
      while ( v3 < strlen(v2) ); /*0x69a39d*/
    }
  }
  return Time; /*0x69a3a3*/
}
} // namespace gamemd

// 0x69ADE0
namespace gamemd {
char E4Recv_69ADE0::sub_69ADE0(char a2)
{
  this->M380 = a2; /*0x69ade4*/
  return a2; /*0x69adea*/
}
} // namespace gamemd

// 0x69B8B0
namespace gamemd {
void nullsub_229(int a1, int a2)
{
  ; /*0x69b8b0*/
}
} // namespace gamemd

// 0x69BD00
namespace gamemd {
int sub_69BD00(int a1)
{

  int v1 = 0; // ebx /*0x69bd07*/
  if ( dword_A8DA84 <= 0 ) /*0x69bd0d*/
    return 0; /*0x69bd48*/
  while ( 1 ) /*0x69bd18*/
  {
    char *v2; // esi
    v2 = (char *)*(&dword_A8DA90 + a1); /*0x69bd18*/
    char *v3; // edi
    v3 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v1)); /*0x69bd29*/
    char *v4; // eax
    v4 = ToWideStringChar(v2); /*0x69bd2b*/
    if ( !_strcmpi(v3, v4) ) /*0x69bd32*/
      break; /*0x69bd32*/
    if ( ++v1 >= dword_A8DA84 ) /*0x69bd46*/
      return 0; /*0x69bd46*/
  }
  return v1; /*0x69bd48*/
}
} // namespace gamemd

// 0x69DCD0
namespace gamemd {
int sub_69DCD0()
{
  dword_B07790 = 0; /*0x69dcd2*/
  dword_B07794 = 0; /*0x69dcd7*/
  dword_B07798 = 0; /*0x69dcdc*/
  dword_B0779C = 0; /*0x69dce1*/
  return 0; /*0x69dce6*/
}
} // namespace gamemd

// 0x69E060
namespace gamemd {
char E4Recv_69E060::sub_69E060()
{

  return (char)this->attachedTag; /*0x69e063*/

}
} // namespace gamemd

// 0x69E070
namespace gamemd {
int sub_69E070()
{
  dword_B077A0 = 0; /*0x69e072*/
  dword_B077A4 = 0; /*0x69e077*/
  dword_B077A8 = 0; /*0x69e07c*/
  dword_B077AC = 0; /*0x69e081*/
  return 0; /*0x69e086*/
}
} // namespace gamemd

// 0x69E9F0
namespace gamemd {
int E4Recv_69E9F0::sub_69E9F0(int a1, Straw * aP2)
{


  if ( !a1 || aP2 < 1 ) /*0x69ea03*/
    return 0; /*0x69ea29*/
  int v4; // ebx
  v4 = Delegate::Invoke((Straw *)this, a1, aP2); /*0x69ea0d*/
  if ( !LOBYTE(this->M12) ) /*0x69ea0f*/
    SHA1::Process((SHA1 *)&this->?, a1, v4); /*0x69ea1b*/
  return v4; /*0x69ea23*/

}
} // namespace gamemd

// 0x69EA40
namespace gamemd {
void sub_69EA40()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x69ea4c*/
  dbl_B077E0 = Math::Sqrt(v0 + v0); /*0x69ea5e*/
}
} // namespace gamemd

// 0x69EA70
namespace gamemd {
void sub_69EA70()
{
  dbl_B07830 = dbl_B077E0 / 60.0; /*0x69ea7c*/
}
} // namespace gamemd

// 0x69EA90
namespace gamemd {
void sub_69EA90()
{
  dbl_B07818 = 1.0 / dbl_B07830; /*0x69ea9c*/
}
} // namespace gamemd

// 0x69EAB0
namespace gamemd {
void sub_69EAB0()
{
  dbl_B07810 = 0.0174532925199433 * 45.0; /*0x69eabc*/
}
} // namespace gamemd

// 0x69EAD0
namespace gamemd {
void sub_69EAD0()
{
  dbl_B077E8 = 0.0174532925199433 * 60.0; /*0x69eadc*/
}
} // namespace gamemd

// 0x69EAF0
namespace gamemd {
void sub_69EAF0()
{
  dbl_B077C0 = 0.0174532925199433 * 90.0; /*0x69eafc*/
}
} // namespace gamemd

// 0x69EB10
namespace gamemd {
long long sub_69EB10()
{

  double v0; // st7
  v0 = Math::Sin(dbl_B077C0 - dbl_B077E8); /*0x69eb22*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B077E0 * 0.5); /*0x69eb36*/
  dword_B07838 = result; /*0x69eb3b*/
  return result; /*0x69eb40*/
}
} // namespace gamemd

// 0x69EB50
namespace gamemd {
void sub_69EB50()
{
  dbl_B077F0 = Math::ArcTan((double)dword_B07838 * 0.00390625); /*0x69eb67*/
}
} // namespace gamemd

// 0x69EB80
namespace gamemd {
void sub_69EB80()
{
  dbl_B07808 = Math::ArcTan((double)(2 * dword_B07838) / dbl_B077E0); /*0x69eba2*/
}
} // namespace gamemd

// 0x69EBB0
namespace gamemd {
long long sub_69EBB0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B07838) + 0.5); /*0x69ebcb*/
  dword_B0782C = result; /*0x69ebd0*/
  return result; /*0x69ebd6*/
}
} // namespace gamemd

// 0x69EBE0
namespace gamemd {
int sub_69EBE0()
{
  word_B077D8 = 0; /*0x69ebe2*/
  word_B077DA = 0; /*0x69ebe8*/
  return 0; /*0x69ebee*/
}
} // namespace gamemd

// 0x69EBF0
namespace gamemd {
int sub_69EBF0()
{
  g_OverlayTypeConfig = 0; /*0x69ebf2*/
  qword_B077FC = 0; /*0x69ebf7*/
  return 0; /*0x69ec01*/
}
} // namespace gamemd

// 0x69EC10
namespace gamemd {
int sub_69EC10()
{
  dword_B07828 = 0; /*0x69ec15*/
  dword_B07820 = 128; /*0x69ec1f*/
  dword_B07824 = 128; /*0x69ec24*/
  return 128; /*0x69ec29*/
}
} // namespace gamemd

// 0x69EC30
namespace gamemd {
int sub_69EC30()
{
  dword_B077C8 = 0; /*0x69ec32*/
  dword_B077CC = 0; /*0x69ec37*/
  dword_B077D0 = 0; /*0x69ec3c*/
  dword_B077D4 = 0; /*0x69ec41*/
  return 0; /*0x69ec46*/
}
} // namespace gamemd

// 0x69F1B0
namespace gamemd {
double E4Recv_69F1B0::sub_69F1B0()
{


  ObjectClass *nextObject; // esi
  nextObject = this->nextObject; /*0x69f1b4*/
  if ( !nextObject ) /*0x69f1bd*/
    return 1.0; /*0x69f1c9*/
  int occupant; // edx
  occupant = this->occupant; /*0x69f1ca*/
  int fallRate; // eax
  fallRate = this->fallRate; /*0x69f1cd*/
  if ( occupant != -1 ) /*0x69f1d3*/
  {
    if ( *(unsigned int *)&TeamTypeClass_Array - occupant < fallRate ) /*0x69f1df*/
      return (double)((int)nextObject - (fallRate - (*(unsigned int *)&TeamTypeClass_Array - occupant))) /*0x69f1f5*/
    / (double)(int)nextObject;
    fallRate = 0; /*0x69f1f6*/
  }
  return (double)((int)nextObject - fallRate) / (double)(int)nextObject; /*0x69f1c5*/

}
} // namespace gamemd

// 0x69F210
namespace gamemd {
int E4Recv_69F210::sub_69F210(int a2)
{

  int result = this->M28; // eax /*0x69f210*/
  if ( a2 != result ) /*0x69f21c*/
  {
    this->M32 = result; /*0x69f21e*/
    this->M28 = a2; /*0x69f221*/
    unsigned int *v3; // ecx
    v3 = this->ptr_0 + 9); /*0x69f229*/
    *v3 = dword_A8ED84; /*0x69f232*/
    int v4; // [esp+4h] [ebp-Ch]
    v3[1] = v4; /*0x69f23a*/
    v3[2] = 3; /*0x69f23d*/
    v3[3] = 3; /*0x69f240*/
    return v4; /*0x69f234*/
  }
  return result; /*0x69f244*/
}
} // namespace gamemd

// 0x69F5E0
namespace gamemd {
BOOL E4Recv_69F5E0::sub_69F5E0()
{

  double v2; // st7

  ObjectClass *nextObject; // edi
  nextObject = this->nextObject; /*0x69f5e4*/
  if ( nextObject ) /*0x69f5ed*/
  {
    int fallRate; // eax
    fallRate = this->fallRate; /*0x69f5f7*/
    int occupant; // esi
    occupant = this->occupant; /*0x69f5fb*/
    if ( occupant != -1 ) /*0x69f601*/
    {
      if ( *(unsigned int *)&TeamTypeClass_Array - occupant >= fallRate ) /*0x69f60d*/
        fallRate = 0; /*0x69f613*/
      else
        fallRate -= *(unsigned int *)&TeamTypeClass_Array - occupant; /*0x69f60f*/
    }
    v2 = (double)((int)nextObject - fallRate) / (double)(int)this->nextObject; /*0x69f620*/
  }
  else
  {
    v2 = 1.0; /*0x69f5ef*/
  }
  BOOL result = 0; // eax /*0x69f65f*/
  if ( v2 == 1.0 ) /*0x69f630*/
  {
    float *ptr_8; // ecx
    ptr_8 = (float *)this->M12; /*0x69f632*/
    if ( fabs(ptr_8[202]) < 0.005 && fabs(ptr_8[203]) < 0.005 ) /*0x69f65d*/
      return 1; /*0x69f630*/
  }
  return result; /*0x69f664*/

}
} // namespace gamemd
