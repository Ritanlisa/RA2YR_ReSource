// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/GaugeClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x430980
namespace gamemd {
void Game::initScenario()
{

  void **v2; // esi
  int v3; // ebx
  int v4; // edi

  if ( *((unsigned int *)this + 24) ) /*0x430983*/
  {
    v2 = this; /*0x43098d*/
    v3 = 8; /*0x43098f*/
    do /*0x4309b5*/
    {
      v4 = 3; /*0x430994*/
      do /*0x4309b2*/
      {
        if ( *v2 ) /*0x430999*/
        {
          __3_YAXPAX_Z(*v2); /*0x4309a0*/
          *v2 = 0; /*0x4309a8*/
        }
        ++v2; /*0x4309ae*/
        --v4; /*0x4309b1*/
      }
      while ( v4 ); /*0x4309b2*/
      --v3; /*0x4309b4*/
    }
    while ( v3 ); /*0x4309b5*/
    *((unsigned int *)this + 24) = 0; /*0x4309b9*/
  }

}
}
// 0x46D4A0
namespace gamemd {
int Game::SendCampaignOptions()
{

  int result; // eax
  int i; // esi
  int v2; // ecx
  int Option; // eax
  int v4; // ecx
  int PlayerSide; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  wchar_t **v12; // esi
  int v13; // [esp+8h] [ebp-1C8h] BYREF
  char v14[452]; // [esp+Ch] [ebp-1C4h] BYREF

  v13 = 50; /*0x46d4bc*/
  strcpy(v14, MEMORY[0xA8B380]); /*0x46d4cd*/
  result = Settings::CheckString(); /*0x46d4d6*/
  if ( (unsigned char)result )
  {
    Debug::Log(aSendingCampaig); /*0x46d4e8*/
    v14[43] = MEMORY[0xA8EB68]; /*0x46d4f6*/
    for ( i = 0; i < 8; ++i )
    {
      v2 = *(&MEMORY[0xA8DA90] + i); /*0x46d4fc*/
      if ( !v2 || v2 == MEMORY[0xAC119C] || v2 == MEMORY[0xAC11A0] ) /*0x46d515*/
      {
        *(unsigned int *)&v14[4 * i + 44] = -1; /*0x46d542*/
        *(unsigned int *)&v14[4 * i + 76] = -1; /*0x46d54a*/
        *(unsigned int *)&v14[4 * i + 108] = -1; /*0x46d552*/
      }
      else
      {
        Option = SessionClass::GetOption(v2); /*0x46d517*/
        v4 = *(&MEMORY[0xA8DA90] + i); /*0x46d51c*/
        *(unsigned int *)&v14[4 * i + 44] = Option; /*0x46d523*/
        PlayerSide = SessionClass::GetPlayerSide(v4); /*0x46d527*/
        v6 = *(&MEMORY[0xA8DA90] + i); /*0x46d52c*/
        *(unsigned int *)&v14[4 * i + 76] = PlayerSide; /*0x46d533*/
        *(unsigned int *)&v14[4 * i + 108] = SessionClass::GetPlayerColor(v6); /*0x46d53c*/
      }
      v7 = ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + i)); /*0x46d561*/
      Debug::Log(
        "Player %i %s: Start %i, Country %i, Color %i\n",
        i,
        v7,
        *(unsigned int *)&v14[4 * i + 44],
        *(unsigned int *)&v14[4 * i + 76],
        *(unsigned int *)&v14[4 * i + 108]);
      v8 = MEMORY[0xA8B2BC][i]; /*0x46d588*/
      v9 = MEMORY[0xA8B27C][i]; /*0x46d58f*/
      *(unsigned int *)&v14[4 * i + 140] = MEMORY[0xA8B29C][i]; /*0x46d596*/
      v10 = MEMORY[0xA8B2DC][i]; /*0x46d59d*/
      *(unsigned int *)&v14[4 * i + 172] = v8; /*0x46d5a4*/
      *(unsigned int *)&v14[4 * i + 204] = v9; /*0x46d5ab*/
      *(unsigned int *)&v14[4 * i + 236] = v10; /*0x46d5b2*/
      v11 = MEMORY[0xA8B2FC][i]; /*0x46d5b9*/
      *(unsigned int *)&v14[4 * i + 268] = v11; /*0x46d5c0*/
      result = Debug::Log(
                 "AI %i: Difficulty %i, Country %i, Color %i, Start %i, Ally %i\n",
                 i,
                 *(unsigned int *)&v14[4 * i + 204],
                 *(unsigned int *)&v14[4 * i + 140],
                 *(unsigned int *)&v14[4 * i + 172],
                 *(unsigned int *)&v14[4 * i + 236],
                 v11);
    }
    v12 = (wchar_t **)&MEMORY[0xA8DA94]; /*0x46d600*/
    do /*0x46d640*/
    {
      if ( *v12 ) /*0x46d605*/
      {
        result = IsKnownPointer(*v12); /*0x46d60b*/
        if ( (unsigned char)result ) /*0x46d612*/
        {
          Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)&v13, 455, 1, *v12); /*0x46d628*/
          result = Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x46d632*/
        }
      }
      ++v12; /*0x46d637*/
    }
    while ( (int)v12 < (int)&MEMORY[0xA8DAB0] ); /*0x46d640*/
  }
  return result; /*0x46d642*/

}
}
// 0x534450
namespace gamemd {
AbstractClass * * Game::DestroyAllObjects()
{

  size_t i; // eax
  int v1; // ecx
  void *v2; // esi

  ++MEMORY[0xA8E7AC]; /*0x53445f*/
  MEMORY[0xB0F6A8] = 0; /*0x534465*/
  AbstractClassVector::ddtor(&MEMORY[0xB0F698]); /*0x53446b*/
  MixFileClass::CleanupCache(); /*0x534470*/
  for ( i = MEMORY[0xB0E844]; MEMORY[0xB0E844]; i = MEMORY[0xB0E844] ) /*0x53447c*/
  {
    if ( !MEMORY[0xB0E84C] ) /*0x534484*/
    {
      qsort(MEMORY[0xB0E840], i, 8u, CompareFunction); /*0x534494*/
      MEMORY[0xB0E850] = 0; /*0x53449c*/
      MEMORY[0xB0E84C] = 1; /*0x5344a2*/
    }
    v1 = *((unsigned int *)MEMORY[0xB0E840] + 1); /*0x5344af*/
    if ( v1 ) /*0x5344b4*/
      (*(void (**)(int, int))(*(unsigned int *)v1 + 32))(v1, 1); /*0x5344ba*/
  }
  ProcessExpiredPointers(); /*0x5344c6*/
  while ( MEMORY[0xA8ED50] ) /*0x5344d1*/
    (*(void (**)(unsigned int))(**(unsigned int **)MEMORY[0xA8ED44] + 8))(*(unsigned int *)MEMORY[0xA8ED44]); /*0x5344dd*/
  ProcessExpiredPointers(); /*0x5344e8*/
  while ( MEMORY[0xA8E370] ) /*0x5344f3*/
  {
    if ( *(unsigned int *)MEMORY[0xA8E364] ) /*0x5344fb*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8E364] + 32))(*(unsigned int *)MEMORY[0xA8E364], 1); /*0x534505*/
  }
  ProcessExpiredPointers(); /*0x534510*/
  while ( MEMORY[0xB0E730] ) /*0x53451b*/
  {
    if ( *(unsigned int *)MEMORY[0xB0E724] ) /*0x534523*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xB0E724] + 32))(*(unsigned int *)MEMORY[0xB0E724], 1); /*0x53452d*/
  }
  ProcessExpiredPointers(); /*0x534538*/
  while ( MEMORY[0xA8EAF8] ) /*0x534543*/
  {
    if ( *(unsigned int *)MEMORY[0xA8EAEC] ) /*0x53454a*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8EAEC] + 32))(*(unsigned int *)MEMORY[0xA8EAEC], 1); /*0x534554*/
  }
  ProcessExpiredPointers(); /*0x53455f*/
  while ( MEMORY[0x8B4148] ) /*0x53456a*/
  {
    if ( *(unsigned int *)MEMORY[0x8B413C] ) /*0x534571*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x8B413C] + 32))(*(unsigned int *)MEMORY[0x8B413C], 1); /*0x53457b*/
  }
  ProcessExpiredPointers(); /*0x534586*/
  while ( dword_8B41A0 ) /*0x534591*/
  {
    if ( *(unsigned int *)unk_8B4194 ) /*0x534598*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)unk_8B4194 + 32))(*(unsigned int *)unk_8B4194, 1); /*0x5345a2*/
  }
  ProcessExpiredPointers(); /*0x5345ad*/
  while ( MEMORY[0xA8EC60] ) /*0x5345b8*/
  {
    if ( *(unsigned int *)MEMORY[0xA8EC54] ) /*0x5345bf*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8EC54] + 32))(*(unsigned int *)MEMORY[0xA8EC54], 1); /*0x5345c9*/
  }
  ProcessExpiredPointers(); /*0x5345d4*/
  while ( g_GameCleanupState ) /*0x5345df*/
  {
    if ( *(unsigned int *)dword_A8020C ) /*0x5345e6*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8020C + 32))(*(unsigned int *)dword_A8020C, 1); /*0x5345f0*/
  }
  ProcessExpiredPointers(); /*0x5345fb*/
  while ( MEMORY[0xA8EC48] ) /*0x534606*/
  {
    if ( *(unsigned int *)MEMORY[0xA8EC3C] ) /*0x53460d*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8EC3C] + 32))(*(unsigned int *)MEMORY[0xA8EC3C], 1); /*0x534617*/
  }
  ProcessExpiredPointers(); /*0x534622*/
  while ( MEMORY[0xA83E40] ) /*0x53462d*/
  {
    if ( *(unsigned int *)MEMORY[0xA83E34] ) /*0x534634*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA83E34] + 32))(*(unsigned int *)MEMORY[0xA83E34], 1); /*0x53463e*/
  }
  ProcessExpiredPointers(); /*0x534649*/
  while ( MEMORY[0x8B4130] ) /*0x534654*/
  {
    if ( *(unsigned int *)MEMORY[0x8B4124] ) /*0x53465b*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x8B4124] + 32))(*(unsigned int *)MEMORY[0x8B4124], 1); /*0x534665*/
  }
  ProcessExpiredPointers(); /*0x534670*/
  while ( MEMORY[0x8B40F8] ) /*0x53467b*/
  {
    if ( *(unsigned int *)MEMORY[0x8B40EC] ) /*0x534682*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x8B40EC] + 32))(*(unsigned int *)MEMORY[0x8B40EC], 1); /*0x53468c*/
  }
  ProcessExpiredPointers(); /*0x534697*/
  while ( HouseClass_Count ) /*0x5346a2*/
  {
    if ( *(unsigned int *)HouseClass_Array ) /*0x5346a9*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)HouseClass_Array + 32))(*(unsigned int *)HouseClass_Array, 1); /*0x5346b3*/
  }
  ProcessExpiredPointers(); /*0x5346be*/
  while ( MEMORY[0xA8E9B8] ) /*0x5346c9*/
  {
    if ( *(unsigned int *)MEMORY[0xA8E9AC] ) /*0x5346d0*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8E9AC] + 32))(*(unsigned int *)MEMORY[0xA8E9AC], 1); /*0x5346da*/
  }
  ProcessExpiredPointers(); /*0x5346e5*/
  while ( MEMORY[0x8872C0] ) /*0x5346f0*/
  {
    if ( *(unsigned int *)MEMORY[0x8872B4] ) /*0x5346f7*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x8872B4] + 32))(*(unsigned int *)MEMORY[0x8872B4], 1); /*0x534701*/
  }
  ProcessExpiredPointers(); /*0x53470c*/
  while ( dword_B04BE0 ) /*0x534717*/
  {
    if ( *(unsigned int *)dword_B04BD4 ) /*0x53471e*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B04BD4 + 32))(*(unsigned int *)dword_B04BD4, 1); /*0x534728*/
  }
  ProcessExpiredPointers(); /*0x534733*/
  while ( g_BridgeCellPool ) /*0x53473e*/
  {
    if ( *(unsigned int *)dword_ABCA14 ) /*0x534745*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_ABCA14 + 32))(*(unsigned int *)dword_ABCA14, 1); /*0x53474f*/
  }
  ProcessExpiredPointers(); /*0x53475a*/
  while ( MEMORY[0x8A3880] ) /*0x534765*/
  {
    if ( *(unsigned int *)MEMORY[0x8A3874] ) /*0x53476c*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x8A3874] + 32))(*(unsigned int *)MEMORY[0x8A3874], 1); /*0x534776*/
  }
  ProcessExpiredPointers(); /*0x534781*/
  while ( dword_89E100 ) /*0x53478c*/
  {
    if ( *(unsigned int *)unk_89E0F4 ) /*0x534793*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)unk_89E0F4 + 32))(*(unsigned int *)unk_89E0F4, 1); /*0x53479d*/
  }
  ProcessExpiredPointers(); /*0x5347a8*/
  while ( MEMORY[0x8A0218] ) /*0x5347b3*/
  {
    if ( *(unsigned int *)MEMORY[0x8A020C] ) /*0x5347ba*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x8A020C] + 32))(*(unsigned int *)MEMORY[0x8A020C], 1); /*0x5347c4*/
  }
  ProcessExpiredPointers(); /*0x5347cf*/
  while ( MEMORY[0xAC4920] ) /*0x5347da*/
  {
    if ( *(unsigned int *)MEMORY[0xAC4914] ) /*0x5347e1*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xAC4914] + 32))(*(unsigned int *)MEMORY[0xAC4914], 1); /*0x5347eb*/
  }
  ProcessExpiredPointers(); /*0x5347f6*/
  while ( MEMORY[0xB0EC70] ) /*0x534801*/
  {
    if ( *(unsigned int *)MEMORY[0xB0EC64] ) /*0x534808*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xB0EC64] + 32))(*(unsigned int *)MEMORY[0xB0EC64], 1); /*0x534812*/
  }
  ProcessExpiredPointers(); /*0x53481d*/
  while ( MEMORY[0x889FC8] ) /*0x534828*/
  {
    if ( *(unsigned int *)MEMORY[0x889FBC] ) /*0x53482f*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x889FBC] + 32))(*(unsigned int *)MEMORY[0x889FBC], 1); /*0x534839*/
  }
  ProcessExpiredPointers(); /*0x534844*/
  while ( MEMORY[0xB0B890] ) /*0x53484f*/
  {
    if ( *(unsigned int *)MEMORY[0xB0B884] ) /*0x534856*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xB0B884] + 32))(*(unsigned int *)MEMORY[0xB0B884], 1); /*0x534860*/
  }
  ProcessExpiredPointers(); /*0x53486b*/
  while ( dword_89C678 ) /*0x534876*/
  {
    if ( *(unsigned int *)unk_89C66C ) /*0x53487d*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)unk_89C66C + 32))(*(unsigned int *)unk_89C66C, 1); /*0x534887*/
  }
  ProcessExpiredPointers(); /*0x534892*/
  while ( MEMORY[0xAC1688] ) /*0x53489d*/
  {
    v2 = *(void **)MEMORY[0xAC167C]; /*0x5348a5*/
    if ( *(unsigned int *)MEMORY[0xAC167C] ) /*0x5348a5*/
    {
      BuildingLightQueue::RemoveEntry(*(unsigned int *)MEMORY[0xAC167C]); /*0x5348ad*/
      __3_YAXPAX_Z(v2); /*0x5348b3*/
    }
  }
  ProcessExpiredPointers(); /*0x5348c4*/
  while ( MEMORY[0x8B3D20] ) /*0x5348cf*/
  {
    if ( *(unsigned int *)MEMORY[0x8B3D14] ) /*0x5348d7*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x8B3D14] + 32))(*(unsigned int *)MEMORY[0x8B3D14], 1); /*0x5348e1*/
  }
  ProcessExpiredPointers(); /*0x5348ec*/
  while ( MEMORY[0x88A100] ) /*0x5348f7*/
  {
    if ( *(unsigned int *)MEMORY[0x88A0F4] ) /*0x5348fe*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0x88A0F4] + 32))(*(unsigned int *)MEMORY[0x88A0F4], 1); /*0x534908*/
  }
  ProcessExpiredPointers(); /*0x534913*/
  while ( MEMORY[0xA8E998] ) /*0x53491e*/
  {
    if ( *(unsigned int *)MEMORY[0xA8E98C] ) /*0x534925*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8E98C] + 32))(*(unsigned int *)MEMORY[0xA8E98C], 1); /*0x53492f*/
  }
  ProcessExpiredPointers(); /*0x53493a*/
  sub_4C29E0(); /*0x53493f*/
  Game_Destroy(); /*0x534944*/
  Game::loadCampaignData(); /*0x534949*/
  while ( MEMORY[0xA8E978] ) /*0x534954*/
  {
    if ( *(unsigned int *)MEMORY[0xA8E96C] ) /*0x53495b*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8E96C] + 32))(*(unsigned int *)MEMORY[0xA8E96C], 1); /*0x534965*/
  }
  ProcessExpiredPointers(); /*0x534970*/
  if ( MEMORY[0x887324] ) /*0x53497d*/
    ((void (*)(LPPERSISTSTREAM, int))MEMORY[0x887324]->__tail_0[1].QueryInterface)(MEMORY[0x887324], 1); /*0x534983*/
  MEMORY[0x887324] = 0; /*0x53498b*/
  MapClass::FreeAllCells(&MEMORY[0x87F7E8]); /*0x534991*/
  ProcessExpiredPointers(); /*0x534996*/
  Game::initScenario(&dword_89C3B0); /*0x5349a0*/
  return --MEMORY[0xA8E7AC]; /*0x5349ab*/

}
}
// 0x537BC0
namespace gamemd {
int Game::MakeScreenshot(int a1)
{

  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  unsigned int *v7; // eax
  char v8; // bl
  struct tagPOINT Point; // [esp+4h] [ebp-198h] BYREF
  struct tagPOINT v10; // [esp+Ch] [ebp-190h] BYREF
  int v11; // [esp+14h] [ebp-188h]
  int v12; // [esp+18h] [ebp-184h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-180h] BYREF
  struct tagPOINT v14; // [esp+2Ch] [ebp-170h] BYREF
  unsigned int v15[4]; // [esp+34h] [ebp-168h] BYREF
  int v16[22]; // [esp+44h] [ebp-158h] BYREF
  unsigned char v17[12]; // [esp+9Ch] [ebp-100h] BYREF
  int v18; // [esp+A8h] [ebp-F4h]
  unsigned int v19[22]; // [esp+B0h] [ebp-ECh] BYREF
  unsigned char v20[12]; // [esp+108h] [ebp-94h] BYREF
  int v21; // [esp+114h] [ebp-88h]
  char Buffer[128]; // [esp+11Ch] [ebp-80h] BYREF

  result = GetClientRect(g_hWnd, &Rect); /*0x537bd3*/
  if ( result ) /*0x537bdb*/
  {
    Point.x = Rect.left; /*0x537bef*/
    Point.y = Rect.top; /*0x537bff*/
    result = ClientToScreen(g_hWnd, &Point); /*0x537c03*/
    if ( result ) /*0x537c07*/
    {
      v14 = *(struct tagPOINT *)&Rect.right; /*0x537c15*/
      result = ClientToScreen(g_hWnd, &v14); /*0x537c28*/
      if ( result ) /*0x537c2c*/
      {
        v10 = Point; /*0x537c3e*/
        v12 = Rect.bottom + 1; /*0x537c4c*/
        v11 = Rect.right + 1; /*0x537c56*/
        v2 = (*(int (**)(int))(*(unsigned int *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]); /*0x537c5c*/
        if ( v11 >= v2 ) /*0x537c63*/
          v11 = (*(int (**)(int))(*(unsigned int *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]); /*0x537c70*/
        v3 = (*(int (**)(int))(*(unsigned int *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x537c7c*/
        if ( v12 >= v3 ) /*0x537c86*/
          v12 = (*(int (**)(int))(*(unsigned int *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x537c96*/
        (*(void (**)(int))(*(unsigned int *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x537ca4*/
        v4 = (*(int (**)(int))(*(unsigned int *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]); /*0x537cb8*/
        v5 = (*(int (**)(int))(*(unsigned int *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x537cbc*/
        v15[0] = 0; /*0x537cd8*/
        v15[1] = 0; /*0x537cdd*/
        v15[2] = v4; /*0x537ce1*/
        v15[3] = v5; /*0x537ce5*/
        (*(void (**)(int, unsigned int *, int, struct tagPOINT *, unsigned int, int))(*(unsigned int *)MEMORY[0x88730C] + 8))( /*0x537cf0*/
          MEMORY[0x88730C],
          v15,
          MEMORY[0x887308],
          &v10,
          0,
          1);
        (*(void (**)(int))(*(unsigned int *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x537cfb*/
        v6 = -1; /*0x537cfe*/
        do /*0x537d6d*/
        {
          sprintf(Buffer, stru_827A48, ++v6); /*0x537d10*/
          v7 = CCFileClass::Construct(v19, Buffer); /*0x537d27*/
          v8 = (*(int (**)(unsigned int *, unsigned int))(*v7 + 20))(v7, 0); /*0x537d3b*/
          v19[0] = &vt_CCFileClass; /*0x537d3d*/
          v21 = 0; /*0x537d48*/
          Vector::Clear((int)v20); /*0x537d4f*/
          v19[0] = &off_7E1668; /*0x537d5b*/
          BufferIOFileClass::Dtor(v19); /*0x537d66*/
        }
        while ( v8 ); /*0x537d6d*/
        CCFileClass::Construct(v16, Buffer); /*0x537d7b*/
        CompressScreenshot(v16, (int *)MEMORY[0x88730C], &MEMORY[0x885780]); /*0x537d8f*/
        v16[0] = (int)&vt_CCFileClass; /*0x537d9b*/
        v18 = 0; /*0x537da3*/
        Vector::Clear((int)v17); /*0x537daa*/
        v16[0] = (int)&off_7E1668; /*0x537db3*/
        return BufferIOFileClass::Dtor(v16); /*0x537dbb*/
      }
    }
  }
  return result; /*0x537dc2*/

}
}
// 0x5B7090
namespace gamemd {
HashTable_flat * * Game::StartModemMultiplayer(char a2)
{

  unsigned char *v4; // eax
  unsigned char *v5; // esi
  int v6; // eax
  char *v7; // eax
  char *v8; // esi
  int v9; // eax
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v12; // ebp
  int v13; // edi
  int v14; // esi
  int v15; // esi
  int v16; // ecx
  int v17; // edx

  if ( a2 == 1 ) /*0x5b709b*/
    return 0; /*0x5b709f*/
  Game::processStartup(this); /*0x5b70a7*/
  MEMORY[0xA8B54C] = 0; /*0x5b70b1*/
  v4 = __2_YAPAXI_Z(0x85u); /*0x5b70bb*/
  v5 = v4; /*0x5b70c0*/
  if ( v4 ) /*0x5b70ca*/
  {
    Waypoint::InitInvalid(v4 + 40); /*0x5b70d3*/
    BulkCharToWide(v5, (unsigned __int8 *)MEMORY[0xA8B380], -1); /*0x5b70e0*/
    *(unsigned int *)(v5 + 75) = MEMORY[0xA8B3AC]; /*0x5b70ea*/
    *(unsigned int *)(v5 + 83) = MEMORY[0xA8B394]; /*0x5b70f3*/
    *(unsigned int *)(v5 + 115) = -1; /*0x5b70f6*/
    if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x5b7130*/
      || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
      && MEMORY[0xA8DA88] > 0
      && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8DA74] + 8))(
           &MEMORY[0xA8DA74],
           MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
           0) )
    {
      v6 = MEMORY[0xA8DA84]++; /*0x5b713d*/
      *(unsigned int *)(MEMORY[0xA8DA78] + 4 * v6) = v5; /*0x5b714c*/
    }
    ++MEMORY[0xA8B54C]; /*0x5b714f*/
  }
  v7 = (char *)__2_YAPAXI_Z(0x85u); /*0x5b715a*/
  v8 = v7; /*0x5b715f*/
  if ( v7 ) /*0x5b7166*/
  {
    Waypoint::InitInvalid(v7 + 40); /*0x5b716f*/
    wcscpy((wchar_t *)v8, (const wchar_t *)((char *)this + 32)); /*0x5b7179*/
    *(unsigned int *)(v8 + 75) = *((unsigned int *)this + 19); /*0x5b7184*/
    *(unsigned int *)(v8 + 83) = *((unsigned int *)this + 18); /*0x5b718a*/
    *(unsigned int *)(v8 + 115) = -1; /*0x5b718d*/
    if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x5b71c7*/
      || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
      && MEMORY[0xA8DA88] > 0
      && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8DA74] + 8))(
           &MEMORY[0xA8DA74],
           MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
           0) )
    {
      v9 = MEMORY[0xA8DA84]++; /*0x5b71d4*/
      *(unsigned int *)(MEMORY[0xA8DA78] + 4 * v9) = v8; /*0x5b71e3*/
    }
    ++MEMORY[0xA8B54C]; /*0x5b71e6*/
  }
  if ( MEMORY[0xA8B54C] != 2 ) /*0x5b71f3*/
    return 0; /*0x5b71f7*/
  StringCSF = GetStringCSF(aTxtSendingGoAc, 0, g_Str_File_ModemGst_cpp, 1779); /*0x5b7211*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b721a*/
  v12 = MessageBox; /*0x5b721f*/
  if ( MessageBox ) /*0x5b7223*/
    Dialog::Show(MessageBox); /*0x5b7227*/
  v13 = MEMORY[0x887340]; /*0x5b7231*/
  if ( MEMORY[0x887338] != -1 ) /*0x5b7239*/
    v13 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b724b*/
  while ( 1 ) /*0x5b7252*/
  {
    if ( !Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5b7252*/
      goto LABEL_31; /*0x5b7252*/
    v14 = MEMORY[0x887340]; /*0x5b7260*/
    if ( MEMORY[0x887338] != -1 ) /*0x5b7268*/
      v14 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b727a*/
    if ( (unsigned int)(v14 - v13) >= 0x708 ) /*0x5b7284*/
    {
LABEL_31:
      v15 = MEMORY[0x887340]; /*0x5b728b*/
      if ( MEMORY[0x887338] != -1 ) /*0x5b7293*/
        v15 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b72a5*/
      if ( (unsigned int)(v15 - v13) >= 0x3C ) /*0x5b72ac*/
        break; /*0x5b72ac*/
    }
    Event::Dispatch(); /*0x5b72ae*/
    MessageLoop(); /*0x5b72b3*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b72bd*/
  }
  if ( v12 ) /*0x5b72c6*/
    Dialog::Destroy(v12); /*0x5b72ca*/
  EventClass::CheckFlag(&MEMORY[0xA8EA70]); /*0x5b72d4*/
  MEMORY[0xA8D60E] = 0; /*0x5b72e4*/
  *((unsigned int *)MEMORY[0xA8B230] + 1173) = MEMORY[0xA8B254]; /*0x5b72eb*/
  MEMORY[0xA8B54C] = MEMORY[0xA8DA84]; /*0x5b730b*/
  v16 = MEMORY[0xA8E960]; /*0x5b7311*/
  BYTE1(v16) = BYTE1(MEMORY[0xA8E960]) & 0x77; /*0x5b7319*/
  v17 = v16 | ((MEMORY[0xA8B31D] & 1 | (16 * (MEMORY[0xA8B260] & 1))) << 11); /*0x5b731f*/
  LOBYTE(v17) = MEMORY[0xA8E960] | 0xC0; /*0x5b7326*/
  MEMORY[0xA8ED84] = 0; /*0x5b7329*/
  MEMORY[0xA8B24C] = 2; /*0x5b7333*/
  MEMORY[0xA8E960] = v17; /*0x5b733d*/
  nullsub_37(&MEMORY[0xA8E960]); /*0x5b7343*/
  return 1; /*0x5b709d*/

}
}
// 0x5BA660
namespace gamemd {
AbstractClass * * Game::BuildGameSetupPacket()
{

  HWND DlgItem; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  unsigned int v11[62]; // [esp+8h] [ebp-168h] BYREF
  __int16 v12; // [esp+100h] [ebp-70h]
  int v13[22]; // [esp+104h] [ebp-6Ch] BYREF
  unsigned char v14[12]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log(); /*0x5ba66f*/
  DlgItem = GetDlgItem(*(HWND *)this, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *((unsigned int *)this + 22); /*0x5ba696*/
  memset(v11, 0, sizeof(v11)); /*0x5ba699*/
  v4 = *((unsigned int *)this + 21); /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *((unsigned int *)this + 23); /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(unsigned int *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(unsigned int *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(&MEMORY[0xA8ECE0]); /*0x5ba6db*/
  v6 = NetworkBuffer::GetField3(&MEMORY[0xA8ECE0]); /*0x5ba6df*/
  *(unsigned int *)((char *)&v11[36] + 2) = MEMORY[0xA8ED94]; /*0x5ba6f0*/
  *(unsigned int *)((char *)&v11[37] + 2) = MEMORY[0xA8E960]; /*0x5ba6fd*/
  *(unsigned int *)((char *)&v11[8] + 2) = v6; /*0x5ba70a*/
  BYTE2(v11[40]) = MEMORY[0xA8B268]; /*0x5ba71b*/
  v7 = *(unsigned int *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(unsigned int *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                    | (16
                                     * (MEMORY[0xA8B262] & 1
                                      | (2
                                       * (MEMORY[0xA8B263] & 1
                                        | (2 * (MEMORY[0xA8B264] & 1 | (2 * (MEMORY[0xA8B26C] & 1))))))));
  LOBYTE(v11[6]) = MEMORY[0xA8DB30]; /*0x5ba75d*/
  v8 = MEMORY[0xA8B394]; /*0x5ba776*/
  strcpy((char *)&v11[1], MEMORY[0xA8B380]); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(unsigned int *)((char *)&v11[6] + 1) = MEMORY[0xA8B3AC]; /*0x5ba797*/
  *(unsigned int *)((char *)&v11[31] + 2) = MEMORY[0xA8B25C]; /*0x5ba79b*/
  v9 = *(unsigned int *)((char *)&v11[32] + 2) & 0xFFFFFFFE | MEMORY[0xA8B258] & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | MEMORY[0xA8B258] & 1; /*0x5ba7cc*/
  *(unsigned int *)((char *)&v11[32] + 2) = v9 | (2 * (MEMORY[0xA8B260] & 1 | (2 * (MEMORY[0xA8B261] & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = MEMORY[0xA8B274]; /*0x5ba819*/
  *(unsigned int *)((char *)&v11[35] + 2) = *(unsigned int *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                    | (4 * (MEMORY[0xA8B320] & 1)) & 0xF5
                                    | (2 * (MEMORY[0xA8B31D] & 1 | (4 * (MEMORY[0xA8B31F] & 1))));
  BYTE1(v11[35]) = MEMORY[0xA8B278]; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = MEMORY[0xA8B270]; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254])); /*0x5ba85e*/
  CCFileClass::Construct(v13, (char *)(*(unsigned int *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88)); /*0x5ba87f*/
  *(unsigned int *)((char *)&v11[39] + 2) = CCFileClass::GetSize(v13); /*0x5ba896*/
  strncpy((char *)&v11[40] + 3, (const char *)(*(unsigned int *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88), 0xDu); /*0x5ba8b3*/
  strncpy((char *)&v11[44], (const char *)(*(unsigned int *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 348), 0x20u); /*0x5ba8d7*/
  *(unsigned int *)((char *)&v11[32] + 2) = *(unsigned int *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                    | (16 * (*(unsigned char *)(*(unsigned int *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 380) & 1));
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v11, 250, 1); /*0x5ba91d*/
  v13[0] = (int)&vt_CCFileClass; /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  Vector::Clear((int)v14); /*0x5ba93f*/
  v13[0] = (int)&off_7E1668; /*0x5ba94b*/
  return BufferIOFileClass::Dtor(v13); /*0x5ba95b*/

}
}
// 0x5CA110
namespace gamemd {
int Game::GetMultiplayerScoreScreenBar()
{

  int playerSideIndex; // eax

  playerSideIndex = MEMORY[0xA8B230]->playerSideIndex; /*0x5ca115*/
  if ( playerSideIndex ) /*0x5ca11d*/
  {
    if ( playerSideIndex == 1 ) /*0x5ca21f*/
    {
      if ( !this ) /*0x5ca227*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60816], 0); /*0x5ca23b*/
      if ( this == (void *)1 ) /*0x5ca23f*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60820], 0); /*0x5ca253*/
      if ( this == (void *)2 ) /*0x5ca257*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60824], 0); /*0x5ca26c*/
      if ( this == (void *)3 ) /*0x5ca270*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60828], 0); /*0x5ca285*/
      if ( this == (void *)4 ) /*0x5ca289*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60832], 0); /*0x5ca29d*/
      if ( this == (void *)5 ) /*0x5ca2a1*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60836], 0); /*0x5ca2b6*/
      if ( this == (void *)6 ) /*0x5ca2ba*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60840], 0); /*0x5ca2cf*/
      if ( this == (void *)7 ) /*0x5ca2d3*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60844], 0); /*0x5ca2e7*/
      if ( this == (void *)8 ) /*0x5ca2eb*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60848], 0); /*0x5ca300*/
      if ( this == (void *)9 ) /*0x5ca304*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60852], 0); /*0x5ca31d*/
    }
    else if ( playerSideIndex == 2 ) /*0x5ca321*/
    {
      if ( !this ) /*0x5ca329*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60856], 0); /*0x5ca33c*/
      if ( this == (void *)1 ) /*0x5ca340*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60860], 0); /*0x5ca355*/
      if ( this == (void *)2 ) /*0x5ca359*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60864], 0); /*0x5ca36e*/
      if ( this == (void *)3 ) /*0x5ca372*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60868], 0); /*0x5ca386*/
      if ( this == (void *)4 ) /*0x5ca38a*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60872], 0); /*0x5ca39f*/
      if ( this == (void *)5 ) /*0x5ca3a3*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60876], 0); /*0x5ca3b8*/
      if ( this == (void *)6 ) /*0x5ca3bc*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60880], 0); /*0x5ca3d0*/
      if ( this == (void *)7 ) /*0x5ca3d4*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60884], 0); /*0x5ca3e9*/
      if ( this == (void *)8 ) /*0x5ca3ed*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60888], 0); /*0x5ca402*/
      if ( this == (void *)9 ) /*0x5ca406*/
        return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60892], 0); /*0x5ca41a*/
    }
  }
  else
  {
    if ( !this ) /*0x5ca125*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60776], 0); /*0x5ca139*/
    if ( this == (void *)1 ) /*0x5ca13d*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60780], 0); /*0x5ca152*/
    if ( this == (void *)2 ) /*0x5ca156*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60784], 0); /*0x5ca16a*/
    if ( this == (void *)3 ) /*0x5ca16e*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60788], 0); /*0x5ca183*/
    if ( this == (void *)4 ) /*0x5ca187*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60792], 0); /*0x5ca19c*/
    if ( this == (void *)5 ) /*0x5ca1a0*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60796], 0); /*0x5ca1b4*/
    if ( this == (void *)6 ) /*0x5ca1b8*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60800], 0); /*0x5ca1cd*/
    if ( this == (void *)7 ) /*0x5ca1d1*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60804], 0); /*0x5ca1e6*/
    if ( this == (void *)8 ) /*0x5ca1ea*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60808], 0); /*0x5ca1fe*/
    if ( this == (void *)9 ) /*0x5ca202*/
      return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&stru_830620.__pad_579C[60812], 0); /*0x5ca21b*/
  }
  return 0; /*0x5ca139*/

}
}
// 0x5DBB60
namespace gamemd {
void Game::BuildGameSettingsPacket()
{

  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  int v4; // ebx
  SessionClass *v6; // esi
  char *esi13; // esi
  INIClass *v7; // [esp-20h] [ebp-48h]
  wchar_t *v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+18h] [ebp-10h] BYREF
  int Option; // [esp+1Ch] [ebp-Ch] BYREF
  char *v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+24h] [ebp-4h]

  v1 = Buffer; /*0x5dbb6a*/
  v12 = Buffer; /*0x5dbb70*/
  v13 = 0; /*0x5dbb74*/
  if ( &HouseClass_Player == (MouseClass *)-30166 ) /*0x5dbb7c*/
  {
    v2 = 4; /*0x5dbba5*/
    v3 = String::Assign((char **)&v10, &stru_87C374.__pad_579C[33876]); /*0x5dbbaa*/
  }
  else
  {
    WideString::Assign(&v8, (CampaignScore *)&HouseClass_Player.__pad_5568[8302]); /*0x5dbb83*/
    v2 = 3; /*0x5dbb90*/
    v3 = Game_Set((char **)&Option, (const wchar_t **)&v8); /*0x5dbb95*/
  }
  String::AssignFromPtr((char **)&v9, (const char **)v3); /*0x5dbbb4*/
  if ( (v2 & 4) != 0 ) /*0x5dbbbc*/
  {
    v2 &= ~4u; /*0x5dbbc2*/
    DeleteAndZero((int)&v10); /*0x5dbbc5*/
  }
  if ( (v2 & 2) != 0 ) /*0x5dbbcd*/
  {
    v2 &= ~2u; /*0x5dbbd3*/
    DeleteAndZero((int)&Option); /*0x5dbbd6*/
  }
  if ( (v2 & 1) != 0 ) /*0x5dbbde*/
    DeleteAndZero::Alt((void **)&v8); /*0x5dbbe4*/
  String::GetOrEmpty((char **)&v9); /*0x5dbc11*/
  sprintf(v1, (ObjectClass *)&stru_830620.__pad_BC0[384], *(INIClass **)&HouseClass_Player.__pad_5568[23264]); /*0x5dbc7e*/
  memset(&g_MatrixTransformState + 1121, 0, 0x200u); /*0x5dbc92*/
  v4 = 0; /*0x5dbc99*/
  v10 = *(unsigned int *)&HouseClass_Player.__pad_5568[18384]; /*0x5dbc9d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5dbca1*/
  {
    do /*0x5dbd16*/
    {
      v6 = *(SessionClass **)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * v4); /*0x5dbca8*/
      SessionClass::GetPlayerSide((int)v6); /*0x5dbcad*/
      SessionClass::GetPlayerColor((int)v6); /*0x5dbcb6*/
      Option = SessionClass::GetOption((int)v6); /*0x5dbcc6*/
      SessionClass::GetOption2((int)v6); /*0x5dbcca*/
      v7 = (INIClass *)ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x5dbcf3*/
      sprintf( /*0x5dbd07*/
        (char *const)&g_MatrixTransformState + strlen((const char *)&g_MatrixTransformState + 4484) + 4484,
        (ObjectClass *)&stru_830620.__pad_BC0[356],
        v7);
      ++v4; /*0x5dbd13*/
    }
    while ( v4 < v10 ); /*0x5dbd16*/
    v1 = v12; /*0x5dbd18*/
  }
  *((unsigned char *)&g_MatrixTransformState + strlen((const char *)&g_MatrixTransformState + 4484) + 4483) = 58; /*0x5dbd2f*/
  strcat((char *)&g_MatrixTransformState + 4484, &stru_830620.__pad_BC0[352]); /*0x5dbd53*/
  esi13 = &HouseClass_Player.__pad_5568[8168]; /*0x5dbd5c*/
  do /*0x5dbda8*/
  {
    sprintf( /*0x5dbd97*/
      (char *const)&g_MatrixTransformState + strlen((const char *)&g_MatrixTransformState + 4484) + 4484,
      (ObjectClass *)&stru_830620.__pad_BC0[336],
      *((INIClass **)esi13 - 8));
    esi13 += 4; /*0x5dbd9c*/
  }
  while ( (int)esi13 < (int)&HouseClass_Player.__pad_5568[8200] ); /*0x5dbda8*/
  strlen((const char *)&g_MatrixTransformState + 4484); /*0x5dbdaf*/
  Debug::Log(); /*0x5dbdbf*/
  Debug::Log(); /*0x5dbdce*/
  strcat(v1, (const char *)&g_MatrixTransformState + 4484); /*0x5dbdf7*/
  DeleteAndZero((int)&v9); /*0x5dbe04*/

}
}
// 0x6579E0
namespace gamemd {
unsigned char Game::ManageGameSpeed()
{

  unsigned char *v2; // ecx
  char v3; // al
  bool v4; // bl
  int v5; // edi
  int *v6; // eax
  int v7; // ecx
  int v8; // ecx
  char v9; // al
  int v10; // eax
  unsigned int *v11; // eax
  int v12; // edx
  unsigned int *v13; // eax
  unsigned __int8 result; // al
  bool v15; // zf
  char v16; // [esp+12h] [ebp-1Eh]
  unsigned __int8 v17; // [esp+13h] [ebp-1Dh]
  unsigned char *v18; // [esp+14h] [ebp-1Ch] BYREF
  int v19[2]; // [esp+18h] [ebp-18h] BYREF
  unsigned char v20[16]; // [esp+20h] [ebp-10h] BYREF

  v2 = 0; /*0x6579ef*/
  v3 = *((unsigned char *)this + 5309); /*0x6579f1*/
  v18 = 0; /*0x6579f7*/
  v4 = g_AsyncIOState > 0; /*0x6579fd*/
  v17 = 0; /*0x657a02*/
  if ( !v3 && g_AsyncIOState > 0 ) /*0x657a0a*/
  {
    Audio::IsPlaying(); /*0x657a0c*/
    v2 = v18; /*0x657a11*/
  }
  if ( *((unsigned char *)this + 5338) == 1 && !*((unsigned char *)this + 5309) ) /*0x657a22*/
  {
    v5 = VtableStub::72F510(); /*0x657a35*/
    v19[0] = *((unsigned int *)this + 1145); /*0x657a4d*/
    v19[1] = *((unsigned int *)this + 1147); /*0x657a5f*/
    v6 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)MEMORY[0x887300] + 120))(MEMORY[0x887300], v20); /*0x657a6a*/
    DrawToSurfaceSHP(MEMORY[0x887300], v5, MEMORY[0xB04A38], 0x20u, v19, v6, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x657a84*/
    v7 = *((unsigned int *)this + 1147); /*0x657a95*/
    *((unsigned int *)this + 1155) = *((unsigned int *)this + 1145); /*0x657aab*/
    *((unsigned int *)this + 1156) = v7; /*0x657aae*/
    *((unsigned int *)this + 1157) = 168; /*0x657ab1*/
    *((unsigned int *)this + 1158) = 110; /*0x657ab4*/
    Debug::Log(); /*0x657ab7*/
    v2 = v18; /*0x657abc*/
  }
  if ( !v4 ) /*0x657ac5*/
  {
    v16 = 0; /*0x657cbe*/
    goto LABEL_22; /*0x657cc3*/
  }
  if ( g_AsyncIOState <= 0 || (v2 = *(unsigned char **)AsyncIO_Instance, (v18 = *(unsigned char **)AsyncIO_Instance) == 0) ) /*0x657ae6*/
  {
    v16 = 1; /*0x657cb4*/
LABEL_13:
    if ( v2 ) /*0x657b40*/
    {
      v10 = (*(int (**)(int *, unsigned char **))(dword_B45B58 + 16))(&dword_B45B58, &v18); /*0x657b52*/
      if ( v10 != -1 && v10 < g_AsyncIOState && v10 < --g_AsyncIOState ) /*0x657b6d*/
      {
        do /*0x657b85*/
        {
          ++v10; /*0x657b75*/
          *((unsigned int *)AsyncIO_Instance + v10 - 1) = *((unsigned int *)AsyncIO_Instance + v10); /*0x657b79*/
        }
        while ( v10 < g_AsyncIOState ); /*0x657b85*/
      }
      if ( v18 ) /*0x657b8d*/
        (**(void (***)(unsigned char *, int))v18)(v18, 1); /*0x657b93*/
    }
    v4 = g_AsyncIOState != 0; /*0x657b9d*/
    if ( g_AsyncIOState ) /*0x657ba2*/
    {
      Debug::Log(); /*0x657ba9*/
      Mixer::ReleaseChannel((int **)((char *)this + 5312)); /*0x657bb9*/
      v11 = (unsigned int *)PlayVocClass(MEMORY[0x8871E0]->?[1], 0x2000, 1.0, 0); /*0x657bd8*/
      SetAudioSource((char *)this + 5312, v11, 0); /*0x657be1*/
      *((unsigned int *)this + 1323) = 4; /*0x657be6*/
      *((unsigned int *)this + 1343) = 25; /*0x657bf0*/
    }
    goto LABEL_22; /*0x657bf0*/
  }
  if ( (*(unsigned __int8 (**)(unsigned char *))(*(unsigned int *)v2 + 4))(v2) == 1 ) /*0x657af3*/
  {
    v8 = *((unsigned int *)this + 1147); /*0x657b01*/
    *((unsigned int *)this + 1155) = *((unsigned int *)this + 1145); /*0x657b12*/
    *((unsigned int *)this + 1156) = v8; /*0x657b15*/
    *((unsigned int *)this + 1157) = 168; /*0x657b18*/
    *((unsigned int *)this + 1158) = 110; /*0x657b1b*/
  }
  v9 = (*(int (**)(unsigned char *))(*(unsigned int *)v18 + 20))(v18); /*0x657b24*/
  v2 = v18; /*0x657b27*/
  v16 = v9; /*0x657b2d*/
  v17 = v18[4]; /*0x657b34*/
  if ( v9 == 1 ) /*0x657b38*/
    goto LABEL_13; /*0x657b38*/
LABEL_22:
  *((unsigned char *)this + 5337) = 0; /*0x657bfa*/
  if ( !v4 ) /*0x657c03*/
  {
    Debug::Log(); /*0x657c0a*/
    v12 = *((unsigned int *)this + 1325); /*0x657c0f*/
    *((unsigned int *)this + 1323) = 5; /*0x657c1a*/
    RadarClass::SetViewMode(this, v12, 0); /*0x657c27*/
    Game_Process(); /*0x657c2c*/
    v17 = 0; /*0x657c37*/
    Mixer::ReleaseChannel((int **)((char *)this + 5312)); /*0x657c3d*/
    v13 = (unsigned int *)PlayVocClass(MEMORY[0x8871E0]->?[2], 0x2000, 1.0, 0); /*0x657c5b*/
    SetAudioSource((char *)this + 5312, v13, 0); /*0x657c64*/
    RadarClass::SetGlobal((void *)MEMORY[0x8871E0]->DetailMinFrameRateNormal); /*0x657c71*/
    *((unsigned char *)this + 5337) = 1; /*0x657c76*/
  }
  result = v17; /*0x657c81*/
  v15 = *((unsigned char *)this + 5308) == v17; /*0x657c90*/
  *((unsigned char *)this + 5309) = v16 == 0; /*0x657c92*/
  if ( !v15 ) /*0x657c98*/
  {
    if ( v17 ) /*0x657c9c*/
    {
      result = (unsigned __int8)SetScenarioClassTimer(0); /*0x657ca0*/
      *((unsigned char *)this + 5308) = 1; /*0x657ca5*/
    }
    else
    {
      result = (unsigned __int8)ScenarioClass::ProcessIntroTimer(); /*0x657cc8*/
      *((unsigned char *)this + 5308) = 0; /*0x657ccd*/
    }
  }
  return result; /*0x657cac*/

}
}
// 0x67C3A0
namespace gamemd {
unsigned int * Game::LockMutex(IUnknown * aP1, IUnknown * aP2)
{

  *((unsigned int *)this + 1) = 0; /*0x67c3ab*/
  *((unsigned int *)this + 2) = aP1; /*0x67c3ae*/
  *((unsigned char *)this + 12) = 1; /*0x67c3b1*/
  *((unsigned char *)this + 13) = 0; /*0x67c3b5*/
  *this = &vt_VectorClass_SmudgeTypeClass_const; /*0x67c3b8*/
  if ( aP1 ) /*0x67c3be*/
  {
    if ( aP2 ) /*0x67c3c6*/
    {
      *((unsigned int *)this + 1) = aP2; /*0x67c3c8*/
      return this; /*0x67c3ce*/
    }
    *((unsigned int *)this + 1) = __2_YAPAXI_Z(4 * (unsigned int)aP1); /*0x67c3dd*/
    *((unsigned char *)this + 13) = 1; /*0x67c3e0*/
  }
  return this; /*0x67c3cd*/

}
}
// 0x67E440
namespace gamemd {
int Game::LoadSaved()
{

  int COM; // eax
  int *p_ppstgOpen; // ecx
  int v5; // eax
  IStorage *ppstgOpen; // [esp+3Ch] [ebp-508h] BYREF
  int v7; // [esp+40h] [ebp-504h] BYREF
  IStorage *v8; // [esp+44h] [ebp-500h] BYREF
  int v9; // [esp+48h] [ebp-4FCh] BYREF
  LPSTREAM pStm; // [esp+4Ch] [ebp-4F8h] BYREF
  WCHAR WideCharStr[64]; // [esp+50h] [ebp-4F4h] BYREF
  WCHAR pwcsName[64]; // [esp+D0h] [ebp-474h] BYREF
  unsigned int v13[253]; // [esp+150h] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67e452*/
  GameState::Reset(v13); /*0x67e461*/
  ppstgOpen = 0; /*0x67e47a*/
  MultiByteToWideChar(0, 0, this->field_0, -1, WideCharStr, 64); /*0x67e47e*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e484*/
  ppstgOpen = 0; /*0x67e49e*/
  if ( StgOpenStorage(WideCharStr, 0, 0x12u, 0, 0, &ppstgOpen) < 0 ) /*0x67e4a6*/
  {
    ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e4ac*/
    return 0; /*0x67e4bd*/
  }
  COM = ScenarioPropertyReadCOM((int)v13, (int)ppstgOpen); /*0x67e4ca*/
  p_ppstgOpen = (int *)&ppstgOpen; /*0x67e4d1*/
  if ( COM < 0 ) /*0x67e4d5*/
    goto LABEL_6; /*0x67e4d5*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e4d7*/
  MEMORY[0xA8B238][0] = LoadOptions::GetFlag252(v13); /*0x67e4e8*/
  SwizzleManager::ConvertWrapper((int)&MEMORY[0xB0C110]); /*0x67e4f2*/
  v8 = 0; /*0x67e4fe*/
  MultiByteToWideChar(0, 0, this->field_0, -1, pwcsName, 64); /*0x67e50a*/
  ComPtr::ReleaseSimple((int *)&v8); /*0x67e510*/
  v8 = 0; /*0x67e527*/
  if ( StgOpenStorage(pwcsName, 0, 0x20u, 0, 0, &v8) < 0 ) /*0x67e52f*/
  {
    p_ppstgOpen = (int *)&v8; /*0x67e531*/
LABEL_6:
    ComPtr::ReleaseSimple(p_ppstgOpen); /*0x67e535*/
    return 0; /*0x67e546*/
  }
  v9 = 0; /*0x67e54b*/
  if ( !v8 ) /*0x67e551*/
    WinAPI::Wrapper(-2147467261); /*0x67e558*/
  if ( v8->lpVtbl->OpenStream(v8, (const OLECHAR *)&MEMORY[0x83D5A8], 0, 16, 0, (IStream **)&v9) >= 0 ) /*0x67e577*/
  {
    v7 = 0; /*0x67e5a6*/
    Game::readIniSettings(&v7); /*0x67e5aa*/
    if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen) >= 0 ) /*0x67e5c9*/
    {
      if ( OleRun((LPUNKNOWN)ppstgOpen) >= 0 ) /*0x67e5d8*/
        ppstgOpen->lpVtbl->QueryInterface(ppstgOpen, &MEMORY[0x83D598], (void **)&v7); /*0x67e5eb*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67e5f4*/
    }
    if ( !v7 ) /*0x67e5fd*/
      WinAPI::Wrapper(-2147467261); /*0x67e604*/
    (*(void (**)(int, int))(*(unsigned int *)v7 + 12))(v7, v9); /*0x67e615*/
    pStm = 0; /*0x67e618*/
    if ( v7 ) /*0x67e620*/
    {
      v5 = Game::validateScenario(&pStm, &v7); /*0x67e62b*/
      if ( v5 < 0 && v5 != -2147467262 ) /*0x67e639*/
        WinAPI::Wrapper(v5); /*0x67e63c*/
    }
    ProgressAnim::Init((int)MEMORY[0xAC4F58], 0, 1079574528, 0, 0); /*0x67e64e*/
    LoadGame::Start(pStm); /*0x67e659*/
    if ( !v7 ) /*0x67e664*/
      WinAPI::Wrapper(-2147467261); /*0x67e66b*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)v7 + 16))(v7, 0); /*0x67e678*/
    SwizzleManager::ConvertWrapper((int)&MEMORY[0xB0C110]); /*0x67e680*/
    Game_Load(); /*0x67e685*/
    SidebarClass::InitButtons(&MEMORY[0x87F7E8]); /*0x67e68f*/
    TacticalClass::BuildCommandBar(&MEMORY[0x87F7E8], (int)MultiByteToWideChar, 1); /*0x67e69f*/
    SidebarClass::LoadResources(); /*0x67e6a9*/
    BuildingClass::ClearOccupancyData(); /*0x67e6ae*/
    BuildingClass::ClearFactoryData(); /*0x67e6b3*/
    FogOfWar::Render((int **)&MEMORY[0x87F7E8]); /*0x67e6bd*/
    MEMORY[0xA8EA70].__pad_2EC[0] = 1; /*0x67e6c4*/
    MEMORY[0xA8E378] = 1; /*0x67e6ca*/
    ToggleDisplayMode(1); /*0x67e6d0*/
    LoadingScreen::FreeResources3(); /*0x67e6d5*/
    Debug::Log(); /*0x67e6e0*/
    if ( pStm ) /*0x67e6ee*/
      (*(void (**)(LPSTREAM))(*(unsigned int *)pStm->__pad_0 + 8))(pStm); /*0x67e6f3*/
    if ( v7 ) /*0x67e6fc*/
      (*(void (**)(int))(*(unsigned int *)v7 + 8))(v7); /*0x67e701*/
    if ( v9 ) /*0x67e70a*/
      (*(void (**)(int))(*(unsigned int *)v9 + 8))(v9); /*0x67e70f*/
    if ( v8 ) /*0x67e718*/
      v8->lpVtbl->Release(v8); /*0x67e71d*/
    return 1; /*0x67e722*/
  }
  else
  {
    if ( v9 ) /*0x67e57f*/
      (*(void (**)(int))(*(unsigned int *)v9 + 8))(v9); /*0x67e584*/
    if ( v8 ) /*0x67e58d*/
      v8->lpVtbl->Release(v8); /*0x67e592*/
    return 0; /*0x67e598*/
  }

}
}
// 0x67F9C0
namespace gamemd {
CellStruct * * Game::SerializeGameSaveState()
{

  int result; // eax
  int v3; // edi
  wchar_t *v4; // eax
  int i; // edi
  int v6; // edi
  int v7; // eax
  int j; // edi
  int v9; // edi
  int v10; // eax
  int k; // edi
  int v12; // eax
  int v13; // [esp+B8h] [ebp-8h] BYREF
  int v14; // [esp+BCh] [ebp-4h] BYREF

  result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))(this, &MEMORY[0xA8ED78], 4, 0); /*0x67f9d3*/
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], &MEMORY[0xA8ED78]); /*0x67f9e8*/
    result = (*(int (**)(void *, #375 **, int, unsigned int))(*(unsigned int *)this + 12))(this, &HouseClass_Player, 4, 0); /*0x67f9f9*/
    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)&HouseClass_Player); /*0x67fa0e*/
      result = (*(int (**)(void *, wchar_t **, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fa1f*/
                 this,
                 &MEMORY[0xA8ED84],
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))(this, &v13, 4, 0); /*0x67fa36*/
        if ( result >= 0 )
        {
          v3 = 0; /*0x67fa45*/
          if ( v13 <= 0 )
          {
LABEL_14:
            for ( i = 0; i < (int)MEMORY[0xA8ECC8]; ++i ) /*0x67face*/
              ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)MEMORY[0xA8ECBC] + i); /*0x67fade*/
            result = (*(int (**)(void *, float *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fafc*/
                       this,
                       MEMORY[0x89EA40],
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState(this); /*0x67fb09*/
              result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))(this, &v13, 4, 0); /*0x67fb1a*/
              if ( result >= 0 )
              {
                v6 = 0; /*0x67fb29*/
                if ( v13 <= 0 )
                {
LABEL_27:
                  for ( j = 0; j < MEMORY[0x8B40D8]; ++j ) /*0x67fbb2*/
                    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)MEMORY[0x8B40CC] + j); /*0x67fbc2*/
                  result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))(this, &v13, 4, 0); /*0x67fbdd*/
                  if ( result >= 0 )
                  {
                    v9 = 0; /*0x67fbec*/
                    if ( v13 <= 0 )
                    {
LABEL_39:
                      for ( k = 0; k < dword_8B41B8; ++k ) /*0x67fc74*/
                        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)unk_8B41AC + k); /*0x67fc84*/
                      result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fc9f*/
                                 this,
                                 &dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fcb2*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (**)(void *, double *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fcc8*/
                                     this,
                                     MEMORY[0x89EC28],
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (**)(void *, char *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fcdb*/
                                       this,
                                       MEMORY[0x89ECC0],
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (**)(void *, void *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fcf1*/
                                         this,
                                         &MEMORY[0xA8E3A8],
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v12 = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fd04*/
                                        this,
                                        &MEMORY[0xB07784],
                                        4,
                                        0);
                                return v12 >= 0 ? 0 : v12;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 ) /*0x67fbfe*/
                      {
                        result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))( /*0x67fbfe*/
                                   this,
                                   &v14,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67fc03*/
                          break; /*0x67fc03*/
                        if ( dword_8B41B8 < unk_8B41B0 /*0x67fc3f*/
                          || (unk_8B41B5 || !unk_8B41B0)
                          && unk_8B41BC > 0
                          && (*(unsigned __int8 (**)(int *, int, unsigned int))(unk_8B41A8 + 8))(
                               &unk_8B41A8,
                               unk_8B41B0 + unk_8B41BC,
                               0) )
                        {
                          v10 = dword_8B41B8++; /*0x67fc52*/
                          *((unsigned int *)unk_8B41AC + v10) = v14; /*0x67fc5f*/
                        }
                        if ( ++v9 >= v13 ) /*0x67fc69*/
                          goto LABEL_39; /*0x67fc69*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67fb3b*/
                  {
                    result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))(this, &v14, 4, 0); /*0x67fb3b*/
                    if ( result < 0 ) /*0x67fb40*/
                      break; /*0x67fb40*/
                    if ( MEMORY[0x8B40D8] < MEMORY[0x8B40D0] /*0x67fb7d*/
                      || (MEMORY[0x8B40D5] || !MEMORY[0x8B40D0])
                      && MEMORY[0x8B40DC] > 0
                      && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0x8B40C8] + 8))(
                           &MEMORY[0x8B40C8],
                           MEMORY[0x8B40D0] + MEMORY[0x8B40DC],
                           0) )
                    {
                      v7 = MEMORY[0x8B40D8]++; /*0x67fb90*/
                      *((unsigned int *)MEMORY[0x8B40CC] + v7) = v14; /*0x67fb9d*/
                    }
                    if ( ++v6 >= v13 ) /*0x67fba7*/
                      goto LABEL_27; /*0x67fba7*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x67fa57*/
            {
              result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)this + 12))(this, &v14, 4, 0); /*0x67fa57*/
              if ( result < 0 ) /*0x67fa5c*/
                break; /*0x67fa5c*/
              if ( (int)MEMORY[0xA8ECC8] < MEMORY[0xA8ECC0] /*0x67fa99*/
                || (MEMORY[0xA8ECC5] || !MEMORY[0xA8ECC0])
                && MEMORY[0xA8ECCC] > 0
                && (*(unsigned __int8 (**)(ObjectClass **, int, unsigned int))&MEMORY[0xA8ECB8]->__pad_0[8])(
                     &MEMORY[0xA8ECB8],
                     MEMORY[0xA8ECC0] + MEMORY[0xA8ECCC],
                     0) )
              {
                v4 = MEMORY[0xA8ECC8]; /*0x67faac*/
                MEMORY[0xA8ECC8] = (wchar_t *)((char *)MEMORY[0xA8ECC8] + 1); /*0x67faaf*/
                *((unsigned int *)MEMORY[0xA8ECBC] + (unsigned int)v4) = v14; /*0x67fab9*/
              }
              if ( ++v3 >= v13 ) /*0x67fac3*/
                goto LABEL_14; /*0x67fac3*/
            }
          }
        }
      }
    }
  }
  return result; /*0x67fd11*/

}
}
// 0x680F70
namespace gamemd {
int Game::validateScenario(unsigned int * a2)
{

  int v3; // edi
  unsigned int *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x680f78*/
  {
    v3 = (**(int (***)(unsigned int, void *, unsigned int **))*a2)(*a2, &unk_81FC50, &a2); /*0x680f8d*/
    if ( v3 >= 0 ) /*0x680f91*/
    {
      v5 = a2; /*0x680faf*/
      if ( *this ) /*0x680fac*/
        (*(void (**)(unsigned int))(*(unsigned int *)*(unsigned int *)this + 8))(*this); /*0x680fba*/
      *this = v5; /*0x680fbd*/
      return v3; /*0x680fc0*/
    }
    else
    {
      if ( *this ) /*0x680f93*/
        (*(void (**)(unsigned int))(*(unsigned int *)*(unsigned int *)this + 8))(*this); /*0x680f9c*/
      *this = 0; /*0x680fa1*/
      return v3; /*0x680f9f*/
    }
  }
  else
  {
    v6 = *this; /*0x680fc7*/
    if ( *this ) /*0x680fc7*/
    {
      *this = 0; /*0x680fcd*/
      (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x680fd6*/
    }
    return -2147467262; /*0x680fde*/
  }

}
}
// 0x685120
namespace gamemd {
void sub_685120()
{
  int v1; // ecx
  TechnoClass *v3; // [esp+0h] [ebp-4h]

  BulletTypeClass::ReadArmor(); /*0x685121*/
  nullsub_158(); /*0x685126*/
  Game_Load_Load(dword_A8B230[130].uniqueId); /*0x685136*/
  LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685147*/
  LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x685158*/
  RadarClass::InitializeHashTable((RadarClass *)&dword_87F7E8); /*0x685162*/
  if ( dword_B0EA80 != -1 ) /*0x685176*/
  {
    if ( (int)dword_A8ED84 - dword_B0EA80 >= dword_B0EA88 ) /*0x685189*/
      v1 = 0; /*0x68518f*/
    else
      v1 = dword_B0EA88 - ((unsigned int)dword_A8ED84 - dword_B0EA80); /*0x68518b*/
    dword_B0EA88 = v1; /*0x685191*/
  }
  dword_B0EA80 = (int)dword_A8ED84; /*0x6851a1*/
  CellClass::setOverlayType((CellClass *)&unk_87E8B8, (int)&dword_87F8D4); /*0x6851a7*/
  Game_Load_Load_53AB50(); /*0x6851ac*/
  FindBuildingClass(v3); /*0x6851b1*/
  MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x6851bd*/
  InvalidateRect(g_hWnd, 0, 0); /*0x6851cc*/
  Map_Reset_734210(); /*0x6851d2*/
  Selection::ClearGlobals(0); /*0x6851d9*/
  return Map_Reset_660C50(); /*0x6851de*/
}
}
// 0x698CB0
namespace gamemd {
CellStruct * * Game::Game_DumpMultiplayerGameInfo()
{

  CCINIClass *v2; // eax
  MouseClass *v4; // esi
  int i; // ebp
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int m; // edi
  unsigned int n; // edi
  CellStruct *v12; // [esp-4h] [ebp-18h]
  CellStruct *v13; // [esp-4h] [ebp-18h]
  CellStruct *v14; // [esp-4h] [ebp-18h]
  CellStruct *v15; // [esp+0h] [ebp-14h]
  CellStruct *v16; // [esp+0h] [ebp-14h]
  CellStruct *v17; // [esp+0h] [ebp-14h]
  unsigned char v18[8]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096]; /*0x698cb0*/
  v4 = (MouseClass *)Stream; /*0x698cbc*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8096] < 0 ) /*0x698cc3*/
  {
    fprintf((MouseClass *)Stream, &stru_830620.__pad_579C[38316], v15); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    *(unsigned int *)&HouseClass_Player.__pad_5568[8096] = 0; /*0x698cd5*/
  }
  v12 = a2; /*0x698ce0*/
  fprintf( /*0x698ceb*/
    v4,
    &stru_830620.__pad_579C[38300],
    *(CellStruct **)(*(unsigned int *)&HouseClass_Player.__pad_5568[9752] + 4 * (unsigned int)v2));
  fprintf(v4, &stru_830620.__pad_579C[38284], (CellStruct *)(this + 328)); /*0x698cfd*/
  for ( i = 0; i < *(unsigned int *)(this + 788); ++i ) /*0x698d0f*/
  {
    Network::CopyAddress( /*0x698d2a*/
      (unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 40),
      &Stream,
      (int)v18);
    fprintf(v4, &stru_830620.__pad_579C[38264], (CellStruct *)i); /*0x698d36*/
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)*((unsigned __int8 *)&Stream + j)); /*0x698d4d*/
    fprintf(v4, &stru_830620.__pad_1258[64], v12); /*0x698d61*/
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)(unsigned __int8)v18[k]); /*0x698d78*/
    fprintf(v4, &stru_830620.__pad_579C[38252], v13); /*0x698d8c*/
  }
  fprintf(v4, &stru_830620.__pad_579C[38252], v12); /*0x698da9*/
  Network::CopyAddress(&HouseClass_Player.__pad_5568[10344], &Stream, (int)v18); /*0x698dc0*/
  fprintf(v4, &stru_830620.__pad_579C[38240], v14); /*0x698dcb*/
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)*((unsigned __int8 *)&Stream + m)); /*0x698de3*/
  fprintf(v4, &stru_830620.__pad_1258[64], v15); /*0x698df7*/
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)(unsigned __int8)v18[n]); /*0x698e0e*/
  fprintf(v4, &stru_830620.__pad_579C[38236], v16); /*0x698e22*/
  fprintf(v4, &stru_830620.__pad_579C[38220], *(CellStruct **)(this + 792)); /*0x698e34*/
  fprintf(v4, &stru_830620.__pad_579C[38204], *(CellStruct **)(this + 1664)); /*0x698e46*/
  fprintf(v4, &stru_830620.__pad_579C[38188], *(CellStruct **)(this + 380)); /*0x698e58*/
  fprintf(v4, &stru_830620.__pad_579C[38172], *(CellStruct **)(this + 348)); /*0x698e6a*/
  fprintf(v4, &stru_830620.__pad_579C[38160], *(CellStruct **)(this + 372)); /*0x698e7c*/
  fprintf(v4, &stru_830620.__pad_579C[38140], *(CellStruct **)(this + 788)); /*0x698e91*/
  fprintf(v4, &stru_830620.__pad_579C[38120], (CellStruct *)*(unsigned __int8 *)(this + 32)); /*0x698ea2*/
  fprintf(v4, &stru_830620.__pad_579C[38096], *(CellStruct **)(this + 36)); /*0x698eb1*/
  fprintf(v4, &stru_830620.__pad_579C[38064], (CellStruct *)*(unsigned __int8 *)(this + 40)); /*0x698ec2*/
  fprintf(v4, &stru_830620.__pad_579C[38040], (CellStruct *)*(unsigned __int8 *)(this + 41)); /*0x698ed3*/
  fprintf(v4, &stru_830620.__pad_579C[38016], (CellStruct *)*(unsigned __int8 *)(this + 53)); /*0x698ee4*/
  fprintf(v4, &stru_830620.__pad_579C[37992], *(CellStruct **)(this + 56)); /*0x698ef6*/
  fprintf(v4, &stru_830620.__pad_579C[37968], *(CellStruct **)(this + 60)); /*0x698f05*/
  fprintf(v4, &stru_830620.__pad_579C[37940], *(CellStruct **)(this + 64)); /*0x698f14*/
  fprintf(v4, &stru_830620.__pad_579C[37924], *(CellStruct **)(this + 768)); /*0x698f26*/
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] == 3 ) /*0x698f36*/
  {
    fprintf(v4, &stru_830620.__pad_579C[37912], v17); /*0x698f3e*/
    return 1; /*0x698f46*/
  }
  else
  {
    if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x698f54*/
      fprintf(v4, &stru_830620.__pad_579C[37892], v17); /*0x698f5c*/
    else
      fprintf(v4, &stru_830620.__pad_579C[37872], v17); /*0x698f75*/
    return 1; /*0x698f64*/
  }

}
}
// 0x77E430
namespace gamemd {
void Game::EncodeGameSetupState()
{

  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  int v4; // ebx
  SessionClass *v6; // esi
  int edi11; // edi
  SessionClass *v9; // esi
  char *v8; // eax
  SessionClass *v13; // esi
  ObjectClass *v14; // [esp-20h] [ebp-78h]
  wchar_t *v11; // [esp+10h] [ebp-48h] BYREF
  wchar_t *v12; // [esp+14h] [ebp-44h] BYREF
  int var40; // [esp+18h] [ebp-40h] BYREF
  int var3C; // [esp+1Ch] [ebp-3Ch] BYREF
  IUnknown *aP0; // [esp+20h] [ebp-38h]
  void *v16; // [esp+24h] [ebp-34h]
  int v17; // [esp+28h] [ebp-30h]
  int v18; // [esp+2Ch] [ebp-2Ch]
  int Option2; // [esp+30h] [ebp-28h]
  int Option; // [esp+34h] [ebp-24h]
  int PlayerColor; // [esp+38h] [ebp-20h]
  int PlayerSide; // [esp+3Ch] [ebp-1Ch]
  int v23; // [esp+40h] [ebp-18h]
  char *v24; // [esp+44h] [ebp-14h]
  int a1; // [esp+48h] [ebp-10h] BYREF
  unsigned int v26[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = Buffer; /*0x77e43a*/
  v24 = Buffer; /*0x77e440*/
  v26[2] = 0; /*0x77e444*/
  if ( &HouseClass_Player == (MouseClass *)-30166 ) /*0x77e44c*/
  {
    v2 = 4; /*0x77e475*/
    v3 = String::Assign((char **)&var40, &stru_87C374.__pad_579C[33876]); /*0x77e47a*/
  }
  else
  {
    WideString::Assign(&v11, (CampaignScore *)&HouseClass_Player.__pad_5568[8302]); /*0x77e453*/
    v2 = 3; /*0x77e460*/
    v3 = Game_Set((char **)&v12, (const wchar_t **)&v11); /*0x77e465*/
  }
  String::AssignFromPtr((char **)&var3C, (const char **)v3); /*0x77e484*/
  if ( (v2 & 4) != 0 ) /*0x77e48c*/
  {
    v2 &= ~4u; /*0x77e492*/
    DeleteAndZero((int)&var40); /*0x77e495*/
  }
  if ( (v2 & 2) != 0 ) /*0x77e49d*/
  {
    v2 &= ~2u; /*0x77e4a3*/
    DeleteAndZero((int)&v12); /*0x77e4a6*/
  }
  if ( (v2 & 1) != 0 ) /*0x77e4ae*/
    DeleteAndZero::Alt((void **)&v11); /*0x77e4b4*/
  String::GetOrEmpty((char **)&var3C); /*0x77e4e1*/
  sprintf(v1, (ObjectClass *)&stru_830620.__pad_BC0[384], *(INIClass **)&HouseClass_Player.__pad_5568[23264]); /*0x77e54e*/
  memset(byte_B76C24, 0, sizeof(byte_B76C24)); /*0x77e562*/
  v4 = 0; /*0x77e569*/
  v23 = *(unsigned int *)&HouseClass_Player.__pad_5568[18384]; /*0x77e56d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x77e571*/
  {
    do /*0x77e6b2*/
    {
      v6 = *(SessionClass **)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * v4); /*0x77e57c*/
      PlayerSide = SessionClass::GetPlayerSide((int)v6); /*0x77e588*/
      PlayerColor = SessionClass::GetPlayerColor((int)v6); /*0x77e593*/
      Option = SessionClass::GetOption((int)v6); /*0x77e59e*/
      edi11 = 0; /*0x77e5a9*/
      Option2 = SessionClass::GetOption2((int)v6); /*0x77e5ab*/
      v17 = 0; /*0x77e5af*/
      v18 = 0; /*0x77e5b3*/
      v9 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x77e5b7*/
      while ( 1 ) /*0x77e5c4*/
      {
        aP0 = (IUnknown *)v9->GameMode[0]; /*0x77e5c4*/
        v16 = ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x77e5d4*/
        v8 = ToWideStringChar(aP0); /*0x77e5d8*/
        if ( !_strcmpi(v16, v8) ) /*0x77e5e3*/
          break; /*0x77e5e3*/
        v9 = (SessionClass *)((char *)v9 + 4); /*0x77e5ef*/
        ++edi11; /*0x77e5f2*/
        if ( (int)v9 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x77e5f9*/
          goto LABEL_16; /*0x77e5f9*/
      }
      Network::GetAddress((unsigned int *)(12 * edi11 + 11066316), &a1, (ObjectClass *)v26, &v11); /*0x77e61e*/
LABEL_16:
      WideString::Assign(&v12, *(CampaignScore **)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x77e635*/
      ToWideStringCharAlt((char **)&var40, (const wchar_t **)&v12); /*0x77e650*/
      DeleteAndZero::Alt((void **)&v12); /*0x77e659*/
      v14 = (ObjectClass *)String::GetOrEmpty((char **)&var40); /*0x77e686*/
      sprintf(&byte_B76C24[strlen(byte_B76C24)], (ObjectClass *)&stru_830620.__pad_BC0[356], (INIClass *)v14); /*0x77e69a*/
      DeleteAndZero((int)&var40); /*0x77e6a6*/
      ++v4; /*0x77e6af*/
    }
    while ( v4 < v23 ); /*0x77e6b2*/
    v1 = v24; /*0x77e6b8*/
  }
  byte_B76C22[strlen(byte_B76C24) + 1] = 58; /*0x77e6cf*/
  strcat(byte_B76C24, &stru_830620.__pad_BC0[352]); /*0x77e6f3*/
  v13 = (SessionClass *)&HouseClass_Player.__pad_5568[8232]; /*0x77e6fc*/
  do /*0x77e740*/
  {
    sprintf( /*0x77e72f*/
      &byte_B76C24[strlen(byte_B76C24)],
      (ObjectClass *)&stru_830620.__pad_BC0[336],
      (INIClass *)v13[-1].unknown_2854[522]);
    v13 = (SessionClass *)((char *)v13 + 4); /*0x77e734*/
  }
  while ( (int)v13 < (int)&HouseClass_Player.__pad_5568[8264] ); /*0x77e740*/
  strcat(v1, byte_B76C24); /*0x77e763*/
  DeleteAndZero((int)&var3C); /*0x77e770*/

}
}
// 0x77F900
namespace gamemd {
Coord * * Game::ProcessIdle()
{

  int v1; // ebx
  int v2; // ebp
  signed int v3; // ebx
  int v4; // esi
  IUnknown *v5; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  int ebp30; // ebp
  int esi30; // esi
  char *v10; // edx
  CCINIClass *v8; // eax
  ObjectClass *v9; // esi
  int k; // esi
  int v14; // ebx
  int esi56; // esi
  int ebp62; // ebp
  AbstractClass *eax65; // eax
  AbstractClass *v15; // esi
  AbstractClass *v16; // ebx
  AbstractClass *v17; // edx
  CCINIClass *v18; // eax
  ObjectClass *v19; // esi
  signed int v23; // eax
  int ebp107; // ebp
  ObjectClass *v24; // eax
  int X; // esi
  char *v27; // eax
  void *j; // [esp+24h] [ebp-A0h] BYREF
  ObjectClass *Block; // [esp+28h] [ebp-9Ch] BYREF
  const char *m; // [esp+2Ch] [ebp-98h] BYREF
  bool v32; // [esp+33h] [ebp-91h]
  char *v33; // [esp+34h] [ebp-90h] BYREF
  int v34; // [esp+38h] [ebp-8Ch] BYREF
  MSG Msg; // [esp+3Ch] [ebp-88h] BYREF
  struct in_addr Buffer[27]; // [esp+58h] [ebp-6Ch] BYREF

  ScreenSaver::Process(0, v1, v2); /*0x77f90c*/
  v3 = 0; /*0x77f916*/
  v4 = 0; /*0x77f918*/
  ++*(unsigned int *)&MEMORY[0xA8D63C].__pad_579C[54872]; /*0x77f925*/
  if ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v4; /*0x77f94d*/
    }
    while ( v4 != 100 && GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ); /*0x77f95d*/
  }
  if ( (MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2) /*0x77f9c5*/
    && g_WOL_GameProcessState != -1
    && (unsigned int)g_WOL_IdleHandler >= 2
    && g_WOL_IdleHandler != 11
    && time(0) - (int)g_WOL_GameListPool > (unsigned int)g_WOL_GameProcessState )
  {
    if ( g_WOL_IdleHandler == 5 ) /*0x77f9d3*/
    {
      g_WOL_GameListState = 0; /*0x77fa55*/
      g_WOL_IdleHandler = 5; /*0x77fa5b*/
      g_WOL_GameProcessState = 180; /*0x77fa65*/
      g_WOL_GameListPool = (IUnknown *)time(0); /*0x77fa77*/
    }
    else
    {
      if ( g_WOL_IdleHandler < 2 || g_WOL_IdleHandler > 4 ) /*0x77f9e1*/
      {
        StringCSF = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 2426); /*0x77fa11*/
        Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x77fa1c*/
        g_WOL_GameListState = 0; /*0x77fa22*/
        g_WOL_IdleHandler = 2; /*0x77fa28*/
        g_WOL_GameProcessState = 30; /*0x77fa2e*/
        v5 = (IUnknown *)time(0); /*0x77fa38*/
      }
      else
      {
        g_WOL_GameListState = 2; /*0x77f9e4*/
        g_WOL_IdleHandler = 0; /*0x77f9ea*/
        g_WOL_GameProcessState = -1; /*0x77f9f0*/
        v5 = (IUnknown *)time(0); /*0x77f9f6*/
      }
      g_WOL_GameListPool = v5; /*0x77fa46*/
      SetEvent(hEvent); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( g_WOL_ChatPool > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < g_WOL_ChatPool; ++i ) /*0x77fa91*/
      DeleteAndZero((void **)dword_B777A8 + i); /*0x77fa9b*/
    g_WOL_ChatPool = 0; /*0x77faaa*/
  }
  if ( (unsigned int)dword_B76180 < time(0) - 2 && g_WOL_ChatPool > 65 /*0x77fb0e*/
    || (unsigned int)dword_B76180 < time(0) - 3 && g_WOL_ChatPool > 10
    || (unsigned int)dword_B76180 < time(0) - 15 && g_WOL_ChatPool > 0 )
  {
    Block = 0; /*0x77fb14*/
    for ( j = 0; (int)j < 10; j = (char *)j + 1 ) /*0x77fb18*/
    {
      if ( g_WOL_ChatPool <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      ebp30 = __2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset((void *)ebp30, 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73(&v33); /*0x77fb44*/
      esi30 = g_WOL_ChatPool - 1; /*0x77fb4e*/
      if ( g_WOL_ChatPool - 1 >= 0 && esi30 < g_WOL_ChatPool ) /*0x77fb57*/
      {
        String::Reassign(&v33, (AbstractClass *)((char *)dword_B777A8 + 4 * esi30)); /*0x77fb67*/
        DynamicArray::Remove(&g_WOL_ChatPool, esi30); /*0x77fb72*/
      }
      v10 = String::GetOrEmpty(&v33); /*0x77fb80*/
      if ( strlen(v10) > 9 ) /*0x77fb91*/
        v10[9] = 0; /*0x77fb93*/
      strcpy((char *)(ebp30 + 36), v10); /*0x77fbb1*/
      if ( v3 ) /*0x77fbbc*/
        *(unsigned int *)(v3 + 32) = ebp30; /*0x77fbc4*/
      else
        Block = (ObjectClass *)ebp30; /*0x77fbbe*/
      v3 = ebp30; /*0x77fbcb*/
      DeleteAndZero((void **)&v33); /*0x77fbcd*/
    }
    if ( *(&g_MatrixTransformState + 2263) ) /*0x77fbeb*/
      (*(void (**)(unsigned int, ObjectClass *))((*(&g_MatrixTransformState + 2263))->X + 192))( /*0x77fbf5*/
        *(&g_MatrixTransformState + 2263),
        Block);
    v8 = (CCINIClass *)Block; /*0x77fc03*/
    if ( Block ) /*0x77fc05*/
    {
      do /*0x77fc17*/
      {
        v9 = *(ObjectClass **)v8->__pad_20; /*0x77fc07*/
        __3_YAXPAX_Z(v8); /*0x77fc0b*/
        v8 = (CCINIClass *)v9; /*0x77fc13*/
      }
      while ( v9 ); /*0x77fc17*/
    }
    dword_B76180 = (ObjectClass *)time(0); /*0x77fc23*/
    v3 = 0; /*0x77fc28*/
  }
  if ( g_WOL_LoginToken > 200 ) /*0x77fc34*/
  {
    for ( k = 0; k < g_WOL_LoginToken; ++k ) /*0x77fc3a*/
      DeleteAndZero((void **)dword_B76600 + k); /*0x77fc45*/
    g_WOL_LoginToken = 0; /*0x77fc54*/
  }
  if ( (unsigned int)dword_B7617C < time(0) - 2 && g_WOL_LoginToken > 65 /*0x77fcb8*/
    || (unsigned int)dword_B7617C < time(0) - 3 && g_WOL_LoginToken > 10
    || (unsigned int)dword_B7617C < time(0) - 15 && g_WOL_LoginToken > 0 )
  {
    j = 0; /*0x77fcbe*/
    Block = 0; /*0x77fcc2*/
    for ( m = 0; (int)m < 10; ++m ) /*0x77fcc6*/
    {
      if ( g_WOL_LoginToken <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v14 = __2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset((void *)v14, 0, 0x6Cu); /*0x77fce9*/
      v34 = v14; /*0x77fcf2*/
      unknown_libname_73(&v33); /*0x77fcf6*/
      esi56 = g_WOL_LoginToken - 1; /*0x77fd00*/
      if ( g_WOL_LoginToken - 1 >= 0 && esi56 < g_WOL_LoginToken ) /*0x77fd0d*/
      {
        String::Reassign(&v33, (AbstractClass *)((char *)dword_B76600 + 4 * esi56)); /*0x77fd20*/
        if ( g_WOL_LoginToken ) /*0x77fd2c*/
        {
          if ( esi56 >= g_WOL_LoginToken ) /*0x77fd34*/
            esi56 = g_WOL_LoginToken - 1; /*0x77fd36*/
          DeleteAndZero((void **)dword_B76600 + esi56); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (char *)dword_B76600 + 4 * esi56,
            &dword_B76600->__pad_0[4 * esi56 + 4],
            4 * (g_WOL_LoginToken + 0x3FFFFFFF * (esi56 + 1)));
          --g_WOL_LoginToken; /*0x77fd7f*/
          if ( 3 * g_WOL_LoginToken <= dword_B765FC ) /*0x77fd89*/
          {
            ebp62 = dword_B765FC / 2; /*0x77fd92*/
            if ( dword_B765FC / 2 < 10 ) /*0x77fd97*/
              ebp62 = 10; /*0x77fd99*/
            if ( ebp62 < dword_B765FC ) /*0x77fda0*/
            {
              eax65 = (AbstractClass *)__2_YAPAXI_Z(4 * ebp62); /*0x77fdaa*/
              v15 = dword_B76600; /*0x77fdaf*/
              v16 = eax65; /*0x77fdba*/
              if ( dword_B76600 ) /*0x77fdbc*/
              {
                qmemcpy(eax65, dword_B76600, 4 * g_WOL_LoginToken); /*0x77fdc6*/
                v15 = dword_B76600; /*0x77fdc8*/
              }
              __3_YAXPAX_Z(v15); /*0x77fdcf*/
              dword_B76600 = v16; /*0x77fdd4*/
              v14 = v34; /*0x77fdda*/
              dword_B765FC = ebp62; /*0x77fde1*/
            }
          }
        }
      }
      v17 = (AbstractClass *)String::GetOrEmpty(&v33); /*0x77fdf0*/
      if ( strlen(v17->__pad_0) > 9 ) /*0x77fe01*/
        v17->__pad_0[9] = 0; /*0x77fe03*/
      strcpy((char *)(v14 + 36), v17->__pad_0); /*0x77fe23*/
      if ( Block ) /*0x77fe2e*/
        Block->NeedsSaveOrLink = (void *)v14; /*0x77fe36*/
      else
        j = (void *)v14; /*0x77fe30*/
      Block = (ObjectClass *)v14; /*0x77fe3d*/
      DeleteAndZero((void **)&v33); /*0x77fe41*/
    }
    if ( *(&g_MatrixTransformState + 2263) ) /*0x77fe5f*/
      (*(void (**)(unsigned int, void *))((*(&g_MatrixTransformState + 2263))->X + 188))( /*0x77fe69*/
        *(&g_MatrixTransformState + 2263),
        j);
    v18 = (CCINIClass *)j; /*0x77fe77*/
    if ( j ) /*0x77fe79*/
    {
      do /*0x77fe8b*/
      {
        v19 = *(ObjectClass **)v18->__pad_20; /*0x77fe7b*/
        __3_YAXPAX_Z(v18); /*0x77fe7f*/
        v18 = (CCINIClass *)v19; /*0x77fe87*/
      }
      while ( v19 ); /*0x77fe8b*/
    }
    dword_B7617C = (ObjectClass *)time(0); /*0x77fe97*/
    v3 = 0; /*0x77fe9c*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8B244] == 3 && time(0) > dword_B7646C ) /*0x77fec1*/
  {
    dword_B7646C = time(0) + 30; /*0x77fecf*/
    Event_Process_786270(); /*0x77fed4*/
  }
  if ( *(&g_MatrixTransformState + 2263) && !dword_B77DCC ) /*0x77fee8*/
    (*(void (**)(unsigned int))((*(&g_MatrixTransformState + 2263))->X + 12))(*(&g_MatrixTransformState + 2263)); /*0x77feed*/
  if ( *(&g_MatrixTransformState + 2264) ) /*0x77fef7*/
    (*(void (**)(unsigned int))((*(&g_MatrixTransformState + 2264))->X + 28))(*(&g_MatrixTransformState + 2264)); /*0x77fefc*/
  if ( *(&g_MatrixTransformState + 2265) ) /*0x77ff06*/
    (*(void (**)(unsigned int))((*(&g_MatrixTransformState + 2265))->X + 20))(*(&g_MatrixTransformState + 2265)); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( g_WOL_IdleFlag[0] && g_WOL_ProcessIdle == (WinModemClass *)41 && dword_B77E4C ) /*0x77ff2b*/
    CheckGameSettingsChanged(0, 0); /*0x77ff31*/
  if ( *(&g_MatrixTransformState + 2263) && g_WOL_ProcessIdle && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset(Buffer, 0, 0x50u); /*0x77ff6f*/
    GameConfig::BuildChecksum((char *)Buffer); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (**)(unsigned int, struct in_addr *))((*(&g_MatrixTransformState + 2263))->X + 168))( /*0x77ff8c*/
      *(&g_MatrixTransformState + 2263),
      Buffer);
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == (CellStruct *)2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( *(&g_MatrixTransformState + 2263) && g_WOL_ProcessIdle && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&m); /*0x77ffe9*/
    if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x780008*/
    {
      v23 = g_WOL_State; /*0x78000e*/
      if ( (int)g_WOL_State > 0 ) /*0x780015*/
      {
        ebp107 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( ebp107 >= 0 && v3 < v23 ) /*0x780023*/
            qmemcpy(Buffer, &g_WOL_ConnectionFlags[ebp107], sizeof(Buffer)); /*0x780037*/
          String::Assign((char **)&j, (const char *)&Buffer[9]); /*0x780042*/
          v24 = (ObjectClass *)String::ToLowerCopy((const char **)&j, (char **)&v34); /*0x780050*/
          v32 = String::Compare(&m, (const char **)v24); /*0x780063*/
          DeleteAndZero((void **)&v34); /*0x780067*/
          if ( !v32 && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            X = (*(&g_MatrixTransformState + 2264))->X; /*0x78008c*/
            v27 = ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (**)(unsigned int, char *, int, ObjectClass **))(X + 24))( /*0x78009b*/
              *(&g_MatrixTransformState + 2264),
              v27,
              1000,
              &Block);
          }
          DeleteAndZero(&j); /*0x7800a2*/
          v23 = g_WOL_State; /*0x7800a7*/
          ++v3; /*0x7800ac*/
          ebp107 += 3; /*0x7800ad*/
        }
        while ( v3 < (int)g_WOL_State ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    DeleteAndZero((void **)&m); /*0x7800cc*/
  }
  if ( g_NetworkLobbyState == (CellStruct *)2 ) /*0x7800d8*/
  {
LABEL_118:
    if ( byte_B77E27 && !byte_B77E26 ) /*0x7800ea*/
      StartGameWOL(); /*0x7800ec*/
  }
  HandleWOLRematch(); /*0x7800f1*/
  return 0; /*0x7800f8*/

}
}
// 0x7A2230
namespace gamemd {
void Game_Setup(CCINIClass * aP0, CCINIClass * aP1, char * Buffera, char * a3)
{
  const char *v5; // edi
  const char *v6; // esi
  int v7; // edi
  char **v8; // esi
  char *v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-Ch] BYREF
  char *v13; // [esp+18h] [ebp-8h] BYREF
  int16_t v14; // [esp+1Ch] [ebp-4h]

  if ( aP0 ) /*0x7a223d*/
  {
    if ( aP1 ) /*0x7a2245*/
    {
      v5 = Buffera; /*0x7a224b*/
      if ( Buffera ) /*0x7a2251*/
      {
        v6 = a3; /*0x7a2257*/
        if ( a3 ) /*0x7a225d*/
        {
          Buffera = 0; /*0x7a2267*/
          a3 = 0; /*0x7a2272*/
          v11 = 0; /*0x7a2276*/
          sscanf(aP1, "%X", &Buffera); /*0x7a227a*/
          sscanf(v5, "%X", &a3); /*0x7a228a*/
          sscanf(v6, "%X", &v11); /*0x7a229a*/
          v7 = 0; /*0x7a22a2*/
          v8 = (char **)&dword_A8DA90; /*0x7a22a4*/
          while ( 1 ) /*0x7a22ab*/
          {
            v9 = ToWideStringChar(*v8); /*0x7a22ab*/
            if ( !_strcmpi(aP0, v9) ) /*0x7a22b2*/
              break; /*0x7a22b2*/
            ++v8; /*0x7a22be*/
            ++v7; /*0x7a22c1*/
            if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x7a22c8*/
              return; /*0x7a22c8*/
          }
          v13 = Buffera; /*0x7a22de*/
          v14 = 0; /*0x7a22e2*/
          v12 = 0; /*0x7a22fc*/
          NetworkID::Assign((unsigned int *)(12 * v7 + 11066316), &v12, (int)&v13, 0); /*0x7a2300*/
          v10 = v11; /*0x7a2309*/
          dword_A8DC2C[v7] = (int)a3; /*0x7a230d*/
          dword_A8E230[v7] = v10; /*0x7a2314*/
        }
      }
    }
  }
}
}
// 0x7A2330
namespace gamemd {
AbstractClass * * Game::SetupWOLTournament()
{

  char *v1; // esi
  char *v2; // eax
  int v3; // edi
  char *v4; // eax
  int v5; // ebx
  char *v6; // ebp
  char *v7; // eax
  char *v8; // esi
  char *v9; // eax
  int v10; // edi
  char *v11; // eax
  int v12; // ebx
  char *v13; // ebp
  char *v14; // eax
  HWND v15; // eax
  char v16; // bl
  int v17; // esi
  char *v18; // eax
  char *v19; // ebp
  wchar_t *v20; // eax
  wchar_t *v21; // edi
  int v22; // eax
  char result; // al
  char *v24; // [esp+10h] [ebp-104h] BYREF
  char String[256]; // [esp+14h] [ebp-100h] BYREF

  strcpy(String, this); /*0x7a2359*/
  v1 = strtok(String, stru_84D68C); /*0x7a2373*/
  v2 = strtok(0, MEMORY[0x817F70]); /*0x7a2375*/
  v3 = atol(v2); /*0x7a2387*/
  v4 = strtok(0, MEMORY[0x817F70]); /*0x7a2389*/
  v5 = atol(v4); /*0x7a239b*/
  v6 = strtok(0, MEMORY[0x817F70]); /*0x7a23a9*/
  v24 = strtok(0, MEMORY[0x817F70]); /*0x7a23b7*/
  v7 = strtok(0, MEMORY[0x817F70]); /*0x7a23bb*/
  Game_Setup(v1, v6, v24, v7); /*0x7a23cd*/
  String::Assign(&v24, v1); /*0x7a23d7*/
  SetupLobbyPlayerSlot((const char **)&v24, v3, v5, -2, -2); /*0x7a23e7*/
  DeleteAndZero((void **)&v24); /*0x7a23f0*/
  v8 = strtok(0, MEMORY[0x817F70]); /*0x7a2408*/
  v9 = strtok(0, MEMORY[0x817F70]); /*0x7a240a*/
  v10 = atol(v9); /*0x7a241c*/
  v11 = strtok(0, MEMORY[0x817F70]); /*0x7a241e*/
  v12 = atol(v11); /*0x7a2429*/
  v13 = strtok(0, MEMORY[0x817F70]); /*0x7a243e*/
  v24 = strtok(0, MEMORY[0x817F70]); /*0x7a244c*/
  v14 = strtok(0, MEMORY[0x817F70]); /*0x7a2450*/
  Game_Setup(v8, v13, v24, v14); /*0x7a2462*/
  String::Assign(&v24, v8); /*0x7a246c*/
  SetupLobbyPlayerSlot((const char **)&v24, v10, v12, -2, -2); /*0x7a247c*/
  DeleteAndZero((void **)&v24); /*0x7a2485*/
  dword_ABE028 = 4; /*0x7a2494*/
  strcpy(&MEMORY[0xA8B8E0], aRandmapSed); /*0x7a24b0*/
  MEMORY[0xA8B254] = -1; /*0x7a24be*/
  v15 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a24c8*/
  GenerateRandomMapAndMinimap(v15, (char (*)())GameLoop::Thunk); /*0x7a24d4*/
  MapSeed::ValidateName(aRandmapSed); /*0x7a24e3*/
  v16 = 0; /*0x7a24ed*/
  v17 = 0; /*0x7a24ef*/
  if ( MEMORY[0xA8B8D8] > 0 ) /*0x7a24f3*/
  {
    while ( !IsRandMap::Sed(*(unsigned int *)(MEMORY[0xA8B8CC] + 4 * v17)) ) /*0x7a2504*/
    {
      if ( ++v17 >= MEMORY[0xA8B8D8] ) /*0x7a250e*/
        goto LABEL_6; /*0x7a250e*/
    }
    v16 = 1; /*0x7a2512*/
  }
LABEL_6:
  v18 = GameConfig::ComputeCRC(); /*0x7a2514*/
  v19 = v18; /*0x7a251b*/
  if ( v16 ) /*0x7a251d*/
  {
    GameOption::SetDigest(v18); /*0x7a25b6*/
    GameOption::SetDescriptionWStr(*(wchar_t **)(MEMORY[0xA8B8CC] + 4 * v17), &word_ABE050); /*0x7a25c8*/
  }
  else
  {
    v20 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x7a2528*/
    if ( v20 ) /*0x7a2532*/
      v21 = SessionClass::ParseGameInfo(v20, aRandmapSed, &word_ABE050, v19, 1, 0, 2, 4); /*0x7a254e*/
    else
      v21 = 0; /*0x7a2552*/
    if ( MEMORY[0xA8B8D8] < MEMORY[0xA8B8D0] /*0x7a258b*/
      || (MEMORY[0xA8B8D5] || !MEMORY[0xA8B8D0])
      && MEMORY[0xA8B8DC] > 0
      && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8B8C8] + 8))(
           &MEMORY[0xA8B8C8],
           MEMORY[0xA8B8DC] + MEMORY[0xA8B8D0],
           0) )
    {
      v22 = MEMORY[0xA8B8D8]++; /*0x7a2598*/
      *(unsigned int *)(MEMORY[0xA8B8CC] + 4 * v22) = v21; /*0x7a25a7*/
    }
  }
  __3_YAXPAX_Z(v19); /*0x7a25ce*/
  result = LoadScenarioClassByIndex(v17); /*0x7a25d8*/
  if ( result == 1 ) /*0x7a25df*/
    MEMORY[0xA8B254] = v17; /*0x7a25e1*/
  return result; /*0x7a25e7*/

}
}
// 0x4790A0
namespace gamemd {
int Game::CheckForGameCD()
{

  return AlwaysFindYRCD(MEMORY[0x89E414], this);

}
} // namespace gamemd

// 0x53AB50
namespace gamemd {
void * sub_53AB50()
{
  void *result; // eax

  ScenarioClass::UpdateLighting(); /*0x53ab50*/
  result = dword_A83D4C; /*0x53ab55*/
  *((unsigned char *)dword_A83D4C + 22393) = 1; /*0x53ab5a*/
  return result; /*0x53ab61*/
}
} // namespace gamemd

// 0x550000
namespace gamemd {
int Game::loadCampaignData()
{

  int result; // eax
  void *v2; // esi
  int v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x550000*/
  for ( result = g_TimerPool; g_TimerPool; result = g_TimerPool ) /*0x550008*/
  {
    v2 = *(void **)dword_ABC87C; /*0x550010*/
    if ( *(unsigned int *)dword_ABC87C ) /*0x550010*/
    {
      v4 = *(void **)dword_ABC87C; /*0x550026*/
      v3 = (*(int (**)(int *, void **))(dword_ABC878 + 16))(&dword_ABC878, &v4); /*0x55002a*/
      if ( v3 != -1 && v3 < g_TimerPool && v3 < --g_TimerPool ) /*0x550045*/
      {
        do /*0x55005d*/
        {
          ++v3; /*0x55004d*/
          *((unsigned int *)dword_ABC87C + v3 - 1) = *((unsigned int *)dword_ABC87C + v3); /*0x550051*/
        }
        while ( v3 < g_TimerPool ); /*0x55005d*/
      }
      __3_YAXPAX_Z(v2); /*0x550060*/
    }
  }
  return result; /*0x550073*/

}
} // namespace gamemd

// 0x556DF0
namespace gamemd {
void sub_556DF0()
{
  int i; // edi
  unsigned int *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < g_MissionQueueFrame.random[223]; ++i ) /*0x556dfe*/
  {
    v2 = *(unsigned int **)(g_MissionQueueFrame.random[220] + 4 * i); /*0x556e06*/
    if ( v2 ) /*0x556e0b*/
    {
      v3 = v2[1]; /*0x556e0d*/
      if ( v3 ) /*0x556e12*/
      {
        *(unsigned int *)(v3 + 168) = 0; /*0x556e14*/
        v2[1] = 0; /*0x556e1a*/
      }
      v5 = v2; /*0x556e2d*/
      v4 = (*(int (**)(int *, unsigned int **))(g_MissionQueueFrame.random[219] + 16))( /*0x556e31*/
             &g_MissionQueueFrame.random[219],
             &v5);
      if ( v4 != -1 && v4 < g_MissionQueueFrame.random[223] ) /*0x556e41*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556e46*/
        for ( ; /*0x556e4c*/
              v4 < g_MissionQueueFrame.random[223];
              *(unsigned int *)(g_MissionQueueFrame.random[220] + 4 * v4 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[220]
                                                                                    + 4 * v4) )
        {
          ++v4; /*0x556e54*/
        }
      }
      RA2_OPDEL(v2); /*0x556e67*/
    }
  }
  g_MissionQueueFrame.random[223] = 0; /*0x556e7f*/
  if ( g_MissionQueueFrame.random[220] && IDA_BYTE1(g_MissionQueueFrame.random[222]) ) /*0x556e8f*/
  {
    RA2_OPDEL((void *)g_MissionQueueFrame.random[220]); /*0x556e92*/
    g_MissionQueueFrame.random[220] = 0; /*0x556e9a*/
  }
  IDA_BYTE1(g_MissionQueueFrame.random[222]) = 0; /*0x556ea0*/
  g_MissionQueueFrame.random[221] = 0; /*0x556ea6*/
}
} // namespace gamemd

// 0x5865E0
namespace gamemd {
char Game::Stub3(IUnknown * aP0)
{

  return 0; /*0x5865e2*/

}
} // namespace gamemd

// 0x5B56F0
namespace gamemd {
void Game::processStartup()
{

  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // esi
  LRESULT v6; // eax
  char lParam[40]; // [esp+Ch] [ebp-28h] BYREF

  Debug::Log(); /*0x5b56fd*/
  DlgItem = GetDlgItem(*this, 1473); /*0x5b5713*/
  if ( DlgItem ) /*0x5b571d*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b572c*/
    CopyWideToChar(MEMORY[0xA8B380], lParam, -1); /*0x5b5739*/
  }
  Debug::Log(); /*0x5b5748*/
  v3 = GetDlgItem(*this, 1029); /*0x5b5758*/
  if ( v3 ) /*0x5b575c*/
    MEMORY[0xA8B394] = SendMessageA(v3, 0x147u, 0, 0); /*0x5b576a*/
  Debug::Log(); /*0x5b577a*/
  v4 = GetDlgItem(*this, 1639); /*0x5b578a*/
  v5 = v4; /*0x5b578c*/
  if ( v4 ) /*0x5b5790*/
  {
    v6 = SendMessageA(v4, 0x147u, 0, 0); /*0x5b579c*/
    MEMORY[0xA8B3AC] = SendMessageA(v5, 0x150u, v6, 0); /*0x5b57a9*/
  }
  Debug::Log(); /*0x5b57b3*/

}
} // namespace gamemd

// 0x5BF530
namespace gamemd {
char sub_5BF530()
{
  char result; // al

  result = byte_ABF35C; /*0x5bf530*/
  if ( byte_ABF35C ) /*0x5bf537*/
  {
    AudioTimer::DecrementAll(); /*0x5bf539*/
    ProcessAudioTimer(); /*0x5bf53e*/
    Mixer::RequestAllBuffers(); /*0x5bf543*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf553*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf563*/
    result = AudioMixer::Pump(); /*0x5bf568*/
    byte_ABF35C = 0; /*0x5bf56d*/
  }
  return result; /*0x5bf574*/
}
} // namespace gamemd

// 0x5E8B40
namespace gamemd {
char Game::ResetFlags()
{

  MEMORY[0xAC0AC8] = 0; /*0x5e8b42*/
  MEMORY[0xAC0AEC] = 0; /*0x5e8b47*/
  MEMORY[0xAC0EA4] = 0; /*0x5e8b4c*/
  MEMORY[0xAC0B10] = 0; /*0x5e8b51*/
  return 0; /*0x5e8b56*/

}
} // namespace gamemd

// 0x5E9850
namespace gamemd {
int Game::ResetReadyStates()
{

  int result; // eax
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // edi
  int i; // esi

  result = Dialog::GetCurrentType(); /*0x5e9850*/
  if ( result != 188 ) /*0x5e985a*/
  {
    v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e9861*/
    if ( !v1 ) /*0x5e9868*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e986f*/
      if ( !v1 ) /*0x5e9876*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e987d*/
        if ( !v1 ) /*0x5e9884*/
          v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e988b*/
      }
    }
    DlgItem = GetDlgItem(v1, 1439); /*0x5e9898*/
    result = EnableWindow(DlgItem, 1); /*0x5e989f*/
  }
  v3 = MEMORY[0xA8DA84]; /*0x5e98a7*/
  for ( i = 0; i < v3; ++i ) /*0x5e98b1*/
  {
    result = wcscmp(*(const wchar_t **)(MEMORY[0xA8DA78] + 4 * i), &MEMORY[0xA8D610]); /*0x5e98c1*/
    if ( result ) /*0x5e98cb*/
    {
      result = *(unsigned int *)(MEMORY[0xA8DA78] + 4 * i); /*0x5e98d3*/
      if ( *(unsigned int *)(result + 119) ) /*0x5e98d6*/
        *(unsigned int *)(result + 119) = 0; /*0x5e98dd*/
    }
  }
  return result; /*0x5e98eb*/

}
} // namespace gamemd

// 0x67FDE0
namespace gamemd {
int Game::readIniSettings()
{

  int result; // eax

  result = *this; /*0x67fde0*/
  if ( *this ) /*0x67fde0*/
    return (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x67fde9*/
  return result; /*0x67fdec*/

}
} // namespace gamemd

// 0x72D730
namespace gamemd {
char Game::LoadMultiplayerScoreAssets()
{

  char result; // al
  char *v3; // ecx

  result = MEMORY[0xB0FBB8]; /*0x72d730*/
  if ( !MEMORY[0xB0FBB8] ) /*0x72d73a*/
  {
    Game::shutdownGame(this); /*0x72d73c*/
    if ( this ) /*0x72d743*/
    {
      v3 = MEMORY[0x844BD8][0]; /*0x72d74d*/
      if ( this != (void *)1 ) /*0x72d756*/
        v3 = MEMORY[0x844BDC]; /*0x72d758*/
    }
    else
    {
      v3 = MEMORY[0x844BD4][0]; /*0x72d745*/
    }
    result = LoadPaletteSimple(v3, &MEMORY[0xB0FBB0], &MEMORY[0xB0FBB4]); /*0x72d768*/
    MEMORY[0xB0FBB8] = 1; /*0x72d76d*/
  }
  return result; /*0x72d774*/

}
} // namespace gamemd

// 0x72D830
namespace gamemd {
void * Game::shutdownGame()
{

  void *result; // eax
  char *v2; // ecx

  if ( this ) /*0x72d832*/
  {
    if ( this == (void *)1 ) /*0x72d86f*/
    {
      if ( MEMORY[0x8A00A4] == 640 ) /*0x72d87b*/
        result = LoadFileSHP(MEMORY[0x844CA8], (bool *)&MEMORY[0xB0FC7D]); /*0x72d883*/
      else
        result = LoadFileSHP(MEMORY[0x844CAC], (bool *)&MEMORY[0xB0FC7D]); /*0x72d894*/
      MEMORY[0xB0FB1C] = result; /*0x72d888*/
    }
    else
    {
      v2 = MEMORY[0x844CB0][0]; /*0x72d89f*/
      if ( MEMORY[0x8A00A4] != 640 ) /*0x72d8af*/
        v2 = MEMORY[0x844CB4]; /*0x72d8b1*/
      result = LoadFileSHP(v2, (bool *)&MEMORY[0xB0FC7D]); /*0x72d8b7*/
      MEMORY[0xB0FB1C] = result; /*0x72d8bc*/
    }
  }
  else
  {
    if ( MEMORY[0x8A00A4] == 640 ) /*0x72d843*/
      result = LoadFileSHP(MEMORY[0x844CA0], (bool *)&MEMORY[0xB0FC7D]); /*0x72d84b*/
    else
      result = LoadFileSHP(MEMORY[0x844CA4], (bool *)&MEMORY[0xB0FC7D]); /*0x72d85c*/
    MEMORY[0xB0FB1C] = result; /*0x72d850*/
  }
  return result; /*0x72d855*/

}
} // namespace gamemd

// 0x72F440
namespace gamemd {
char Game::InitializeToolTipColor()
{

  char result; // al

  if ( this ) /*0x72f442*/
  {
    if ( this == (void *)1 ) /*0x72f460*/
    {
      LOWORD(MEMORY[0xB0FA1C]) = MEMORY[0xB0FB04]; /*0x72f46e*/
      BYTE2(MEMORY[0xB0FA1C]) = MEMORY[0xB0FB06]; /*0x72f475*/
      return MEMORY[0xB0FB06]; /*0x72f469*/
    }
    else
    {
      LOWORD(MEMORY[0xB0FA1C]) = MEMORY[0xB0FAA0]; /*0x72f488*/
      BYTE2(MEMORY[0xB0FA1C]) = MEMORY[0xB0FAA2]; /*0x72f48f*/
    }
  }
  else
  {
    LOWORD(MEMORY[0xB0FA1C]) = MEMORY[0xB0F9D8]; /*0x72f450*/
    BYTE2(MEMORY[0xB0FA1C]) = MEMORY[0xB0F9DA]; /*0x72f456*/
    return MEMORY[0xB0F9D8]; /*0x72f444*/
  }
  return result; /*0x72f45c*/

}
} // namespace gamemd

// 0x74D450
namespace gamemd {
int sub_74D450(int a1)
{
  int result; // eax
  char Buffer[32]; // [esp+0h] [ebp-20h] BYREF

  sprintf(Buffer, "VEINHOLE.%s", (const char *)&off_7E1BC6 + 112 * a1); /*0x74d46f*/
  result = SearchMIXFile(Buffer, 0); /*0x74d47d*/
  dword_B1D2EC = result; /*0x74d482*/
  return result; /*0x74d487*/
}
} // namespace gamemd

// 0x796DE0
namespace gamemd {
int Game::CreateAIPlayer()
{

  unsigned char *v0; // eax
  unsigned char *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  unsigned char v6[2]; // [esp+Ch] [ebp-8h] BYREF
  char v7[6]; // [esp+Eh] [ebp-6h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796dea*/
  v1 = v0; /*0x796def*/
  if ( v0 ) /*0x796df8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796dfd*/
  else
    v1 = 0; /*0x796e04*/
  BulkCharToWide(v1, (unsigned __int8 *)aOlCruddy, -1); /*0x796e0f*/
  *(unsigned int *)(v1 + 123) = -1; /*0x796e1f*/
  *(unsigned int *)(v1 + 75) = 0; /*0x796e26*/
  *(unsigned int *)(v1 + 83) = 3; /*0x796e29*/
  v5 = 0; /*0x796e33*/
  v7[3] = 0; /*0x796e37*/
  strcpy(v7, "QR"); /*0x796e44*/
  v6[1] = 2; /*0x796e49*/
  v6[0] = 10; /*0x796e4e*/
  NetworkID::Assign((unsigned int *)v1 + 10, &v5, (int)v6, 0); /*0x796e53*/
  if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x796e8c*/
    || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
    && MEMORY[0xA8DA88] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8DA74] + 8))(
         &MEMORY[0xA8DA74],
         MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
         0) )
  {
    v2 = MEMORY[0xA8DA84]++; /*0x796e99*/
    *(unsigned int *)(MEMORY[0xA8DA78] + 4 * v2) = v1; /*0x796ea8*/
  }
  v3 = MEMORY[0xA8B54C]; /*0x796eab*/
  dword_B7790C[MEMORY[0xA8B54C]] = 100; /*0x796eb2*/
  result = v3 + 1; /*0x796ebd*/
  MEMORY[0xA8B54C] = result; /*0x796ebe*/
  return result; /*0x796eb0*/

}
} // namespace gamemd

// 0x796ED0
namespace gamemd {
int Game::CreateAIPlayer_Potato()
{

  unsigned char *v0; // eax
  unsigned char *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  unsigned char v6[3]; // [esp+Ch] [ebp-8h] BYREF
  char v7[5]; // [esp+Fh] [ebp-5h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796eda*/
  v1 = v0; /*0x796edf*/
  if ( v0 ) /*0x796ee8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796eed*/
  else
    v1 = 0; /*0x796ef4*/
  BulkCharToWide(v1, (unsigned __int8 *)aPotato, -1); /*0x796eff*/
  *(unsigned int *)(v1 + 123) = -1; /*0x796f0f*/
  *(unsigned int *)(v1 + 75) = 0; /*0x796f16*/
  *(unsigned int *)(v1 + 83) = 0; /*0x796f19*/
  v5 = 0; /*0x796f1f*/
  v7[2] = 0; /*0x796f23*/
  strcpy(v7, "a"); /*0x796f2b*/
  v6[2] = 20; /*0x796f30*/
  v6[1] = 2; /*0x796f35*/
  v6[0] = 10; /*0x796f3a*/
  NetworkID::Assign((unsigned int *)v1 + 10, &v5, (int)v6, 0); /*0x796f3f*/
  if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x796f78*/
    || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
    && MEMORY[0xA8DA88] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8DA74] + 8))(
         &MEMORY[0xA8DA74],
         MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
         0) )
  {
    v2 = MEMORY[0xA8DA84]++; /*0x796f85*/
    *(unsigned int *)(MEMORY[0xA8DA78] + 4 * v2) = v1; /*0x796f94*/
  }
  v3 = MEMORY[0xA8B54C]; /*0x796f97*/
  dword_B7790C[MEMORY[0xA8B54C]] = 100; /*0x796f9e*/
  result = v3 + 1; /*0x796fa9*/
  MEMORY[0xA8B54C] = result; /*0x796faa*/
  return result; /*0x796f9c*/

}
} // namespace gamemd

// 0x7B82E0
namespace gamemd {
char ** sub_7B82E0(char ** a1, const wchar_t ** a2)
{
  const wchar_t *v3; // eax
  int v4; // esi
  char *v5; // ebp
  wchar_t *v6; // eax
  size_t v7; // ecx
  char *v8; // ebx
  char *v9; // edx

  v3 = *a2; /*0x7b82eb*/
  if ( *a2 ) /*0x7b82eb*/
    v3 = (const wchar_t *)wcslen(*a2); /*0x7b82f2*/
  v4 = 16 * ((unsigned int)v3 + 1); /*0x7b8302*/
  v5 = (char *)RA2_OPNEW((v4 + 6) / 7); /*0x7b831c*/
  v6 = (wchar_t *)*a2; /*0x7b831e*/
  if ( !*a2 ) /*0x7b831e*/
    v6 = &g_TypeClass_DefaultString; /*0x7b8327*/
  BinkMovieClass::AllocateRenderSurface(v6, v5, v4); /*0x7b8331*/
  if ( v5 ) /*0x7b8338*/
    v7 = strlen(v5) + 1; /*0x7b8341*/
  else
    v7 = 1; /*0x7b8347*/
  v8 = (char *)RA2_OPNEW(v7); /*0x7b8352*/
  *v8 = 0; /*0x7b8359*/
  if ( v5 ) /*0x7b835c*/
    strcpy(v8, v5); /*0x7b8374*/
  RA2_OPDEL(v5); /*0x7b837e*/
  *a1 = 0; /*0x7b838c*/
  if ( v8 ) /*0x7b8393*/
  {
    v9 = (char *)RA2_OPNEW(strlen(v8) + 1); /*0x7b83a6*/
    *a1 = v9; /*0x7b83af*/
    strcpy(v9, v8); /*0x7b83c2*/
    RA2_OPDEL(v8); /*0x7b83cb*/
  }
  return a1; /*0x7b83d3*/
}
} // namespace gamemd
