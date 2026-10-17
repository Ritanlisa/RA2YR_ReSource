// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/GameConfig_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/BigInt_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/Straw_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_437F50(int p0); }  // x4:signals@0x437f50

// 0x437FD0
namespace gamemd {  // G42.18 ns repair
int GameClass::initGameMode(int a2, int a3)
{
  if ( !*(unsigned int *)this->__pad_000 ) /*0x437fd3*/
    sub_7DC720(-2147467261); /*0x437fdd*/
  return (*(int (__stdcall **)(unsigned int, int, int))(**(unsigned int **)this->__pad_000 + 12))(*(unsigned int *)this->__pad_000, a3, a2); /*0x437ff4*/
}
}  // G42.18 ns repair
// 0x4381D0
namespace gamemd {
unsigned int * GameClass::processFrame(int a2, int a3)
{

  unsigned int *result; // eax
  result = (unsigned int *)(*&this->u32_C); /*0x4381d3*/
  if ( !result ) /*0x4381d8*/
  {
    ObjectClass *v5; // eax
    v5 = (ObjectClass *)operator new(4u); /*0x4381dc*/
    if ( v5 ) /*0x4381e6*/
      result = (unsigned int *)(sub_437F50((int)(v5))); /*0x4381ea*/
    else
      result = 0; /*0x4381f1*/
    *&this->u32_C = (unsigned int)(result); /*0x4381f3*/
  }
  GameClass *v6; // ecx
  v6 = (gamemd::GameClass *)(*&this->u32_C); /*0x4381f6*/
  if ( v6 ) /*0x4381fc*/
    return (unsigned int *)GameClass::initGameMode(v6, a2, a3); /*0x438208*/
  return result; /*0x4381f9*/
}
}
// 0x438300
namespace gamemd {
unsigned int * GameClass::updateUI(int a2, int a3_2)
{


  unsigned int *result; // eax
  result = (unsigned int *)(*&this->u32_C); /*0x438303*/
  if ( !result ) /*0x438308*/
  {
    ObjectClass *v5; // eax
    v5 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x43830c*/
    if ( v5 ) /*0x438316*/
      result = (unsigned int *)(sub_437F50((int)(v5))); /*0x43831a*/
    else
      result = 0; /*0x438321*/
    *&this->u32_C = (unsigned int)(result); /*0x438323*/
  }
  GameClass *v6; // ecx
  v6 = (gamemd::GameClass *)(*&this->u32_C); /*0x438326*/
  if ( v6 ) /*0x43832c*/
    return (unsigned int *)GameClass::initGameMode(v6, a2, a3_2); /*0x438338*/
  return result; /*0x438329*/

}
}
// 0x5D2260
namespace gamemd {
int GameClass::loadScenarioFiles(int aP1)
{
  unsigned int v9 = 0;  /* G37 hoist */
  unsigned int v7 = 0;  /* G37 hoist */
  int result; // eax
  int v4; // ebx
  int v5; // edi
  int *v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+1Ch] [ebp-24h]
  int v8; // [esp+20h] [ebp-20h] BYREF
  int v9; // [esp+24h] [ebp-1Ch]
  int v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+2Ch] [ebp-14h]
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  result = this->GameClass_field_0x4; /*0x5d2267*/
  if ( result > 0 ) /*0x5d226c*/
  {
    GetClientRect((HWND)(g_hWnd), &Rect); /*0x5d227e*/
    ClientToScreen((HWND)(g_hWnd), (LPPOINT)&Rect); /*0x5d228f*/
    v4 = aP1; /*0x5d229b*/
    if ( stru_887598.lineTrailer ) /*0x5d22a1*/
      (*(void (**)(void *, int, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 60))( /*0x5d22a8*/
        stru_887598.lineTrailer,
        aP1,
        0);
    result = this->GameClass_field_0x4; /*0x5d22ab*/
    v5 = 0; /*0x5d22af*/
    if ( result > 0 ) /*0x5d22b3*/
    {
      result = 0; /*0x5d22b5*/
      v7 = 0; /*0x5d22b8*/
      do /*0x5d231d*/
      {
        v6 = (int *)(*&this->u32_C + result); /*0x5d22c7*/
        v8 = *v6; /*0x5d22ce*/
        v9 = v6[1]; /*0x5d22d5*/
        v10 = v6[2]; /*0x5d22dc*/
        v11 = v6[3]; /*0x5d22e9*/
        v4 = aP1; /*0x5d22f3*/
        v8 += Rect.left; /*0x5d22f7*/
        v9 += Rect.top; /*0x5d2301*/
        (*((void (**)(DSurface *, int *, int, int *, unsigned int, int))g_DSurface_Primary + 2))( /*0x5d2309*/
          g_DSurface_Primary,
          &v8,
          aP1,
          v6,
          0,
          1);
        ++v5; /*0x5d2313*/
        result = v7 + 16; /*0x5d2314*/
        v7 += 16; /*0x5d2319*/
      }
      while ( v5 < this->GameClass_field_0x4 ); /*0x5d231d*/
    }
    this->GameClass_field_0x4 = 0; /*0x5d2320*/
    if ( stru_887598.lineTrailer ) /*0x5d2330*/
      return (*(int (**)(void *, int, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x5d2337*/
               stru_887598.lineTrailer,
               v4,
               0);
  }
  return result; /*0x5d233a*/
}
}
// 0x5D2410
namespace gamemd {
int GameClass::FrameLoop(int a2)
{

  int v5; // esi
  bool v7; // zf
  int result; // eax

  int Ticks; // [esp+10h] [ebp-18h]
  Ticks = Timer::GetTicks(); /*0x5d2428*/
  int v11; // [esp+18h] [ebp-10h]
  v11 = 1; /*0x5d242c*/
  do /*0x5d2511*/
  {
    do /*0x5d24dc*/
    {
      Event::Dispatch(); /*0x5d2437*/
      (*(void (**)(GameClass *))(*(unsigned int *)&this->__pad_0 + 8))(this); /*0x5d2440*/
      DDraw *v9; // [esp+0h] [ebp-28h]
      DDraw::WaitForIdle(v9); /*0x5d2443*/
      ((DSurface *)this)->RenderToSurface((int *)g_DSurface_Hidden); /*0x5d2451*/
      (this)->loadScenarioFiles((int)g_DSurface_Hidden); /*0x5d245f*/
      MessageLoop(); /*0x5d2464*/
      if ( !byte_A8ED80 ) /*0x5d2470*/
      {
        if ( Ticks != -1 ) /*0x5d2478*/
        {
          int v3; // eax
          v3 = Timer::GetTicks() - Ticks; /*0x5d2487*/
          int v4; // esi
          if ( v3 >= v11 ) /*0x5d248d*/
            v4 = 0; /*0x5d2493*/
          else
            v4 = v11 - v3; /*0x5d248f*/
          v11 = v4; /*0x5d2495*/
        }
        DDraw::HandleSuspend((DDraw *)this); /*0x5d249f*/
        Ticks = Timer::GetTicks(); /*0x5d24b3*/
      }
      Sleep(0); /*0x5d24b9*/
      v5 = v11; /*0x5d24bf*/
      if ( Ticks != -1 ) /*0x5d24c5*/
      {
        int v6; // eax
        v6 = Timer::GetTicks() - Ticks; /*0x5d24d0*/
        if ( v6 >= v11 ) /*0x5d24d6*/
          break; /*0x5d24d6*/
        v5 = v11 - v6; /*0x5d24d8*/
      }
    }
    while ( v5 > 0 ); /*0x5d24dc*/
    Ticks = Timer::GetTicks(); /*0x5d24e2*/
    result = a2 - 1; /*0x5d2504*/
    v7 = a2 == 1; /*0x5d2504*/
    v11 = 1; /*0x5d2509*/
    --a2; /*0x5d250d*/
  }
  while ( !v7 ); /*0x5d2511*/
  return result; /*0x5d2517*/

}
}
// 0x5D6370
namespace gamemd {
int GameClass::FindOpenSlot()
{

  int v1; // ebp
  int v2; // ebx
  GameClass *v4; // esi
  char inited; // al

  v1 = dword_A8B8D8; /*0x5d6372*/
  v2 = 0; /*0x5d6379*/
  if ( dword_A8B8D8 <= 0 ) /*0x5d6380*/
    return -1; /*0x5d63cc*/
  while ( 1 ) /*0x5d6387*/
  {
    v4 = *(GameClass **)(dword_A8B8CC + 4 * v2); /*0x5d6387*/
    if ( (unsigned __int8)((void *)((int)v4))->Sed() ) /*0x5d638c*/
    {
      inited = (*(int (**)(MultiplayerGameMode *))(*(unsigned int *)&this->__pad_0 + 60))(this); /*0x5d6399*/
    }
    else
    {
      if ( !v4->u32_17C && Network::IsMultiplayerActive() ) /*0x5d63a8*/
        goto LABEL_8; /*0x5d63af*/
      inited = GameClass::initPlayerData(v4, &this->GameClass_30); /*0x5d63b7*/
    }
    if ( inited ) /*0x5d63be*/
      return v2; /*0x5d63c5*/
    LABEL_8:
    if ( ++v2 >= v1 ) /*0x5d63c3*/
      return -1; /*0x5d63c3*/
  }

}
}
// 0x631D30
namespace gamemd {
int GameClass::GetRelatedObject()
{

  int Pipe_field_0x04 = this->GameClass_field_0x4; // ecx /*0x631d30*/
  if ( Pipe_field_0x04 ) /*0x631d35*/
    return (*(int (**)(int))(*(unsigned int *)Pipe_field_0x04 + 4))(Pipe_field_0x04); /*0x631d39*/
  else
    return 0; /*0x631d3c*/
}
}
// 0x632DC0
namespace gamemd {
void * GameClass::WriteEncryptedStream(BombClass * Src, signed int aP2)
{

  char *v3; // ebx
  int v5; // ebp
  unsigned int *v6; // ecx
  int v7; // eax
  int v8; // eax
  signed int v9; // edi
  bool v10; // zf
  int v12[64]; // [esp+8h] [ebp-100h] BYREF

  v3 = Src; /*0x632dc7*/
  if ( Src && aP2 >= 1 && *&this->u32_38 ) /*0x632de7*/
  {
    v5 = 0; /*0x632df6*/
    if ( this->u32_C ) /*0x632df2*/
    {
      if ( *&this->u32_34 ) /*0x632e01*/
      {
        v9 = this->u32_140; /*0x632e6f*/
        if ( v9 >= aP2 ) /*0x632e7e*/
          v9 = aP2; /*0x632e80*/
        memcpy(&this->__pad_24[this->u32_13C - this->u32_140 + 24], Src, v9); /*0x632e97*/
        v3 = &Src[v9]; /*0x632eb0*/
        v10 = this->u32_140 == v9; /*0x632eb2*/
        aP2 -= v9; /*0x632eb4*/
        this->u32_140 -= v9; /*0x632ebb*/
        if ( !v10 ) /*0x632ec1*/
          return v5 + Delegate::Dispatch((Pipe *)this, (int)v3, aP2); /*0x632ec1*/
        BigInt::RSAOperation( /*0x632ed6*/
          *&this->u32_38,
          (char *)&this->field_3C,
          this->u32_13C,
          (char *)v12);
        GameClass::processFrame(&this->ptr_14, (int)v12, 56); /*0x632ee5*/
      }
      else
      {
        memset(v12, 0, sizeof(v12)); /*0x632e17*/
        (*(void (**)(unsigned int, int *, int))(**&this->q10 + 8))( /*0x632e21*/
          *&this->q10,
          v12,
          56);
        v6 = *&this->u32_38; /*0x632e24*/
        if ( v6 ) /*0x632e29*/
          v7 = (int)(v6[128] - 1) / 8 * (55 / ((int)(v6[128] - 1) / 8) + 1); /*0x632e4a*/
        else
          v7 = 0; /*0x632e2b*/
        v8 = BigInt::DecryptBlock((int)v6, (char *)v12, v7, &this->u32_38); /*0x632e57*/
        v5 = Delegate::Dispatch((Pipe *)this, (int)&this->field_3C, v8); /*0x632e65*/
        GameClass::processFrame(&this->u32_3C, (int)v12, 56); /*0x632e6d*/
      }
      this->u32_C = 0; /*0x632eea*/
    }
    return v5 + Delegate::Dispatch((Pipe *)this, (int)v3, aP2); /*0x632f0a*/
  }
  return Delegate::Dispatch((Pipe *)this, (int)Src, aP2); /*0x632f02*/

}
}
// 0x633130
namespace gamemd {
int GameClass::ReadEncryptedStream(char * a2, signed int Size)
{

  char *v3; // ebp
  signed int v4; // edi
  int m_38; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  unsigned int *v12; // ecx
  int v13; // eax
  int v14; // eax
  int m_140; // eax
  signed int v16; // [esp+10h] [ebp-104h]
  char Src[256]; // [esp+14h] [ebp-100h] BYREF

  v3 = a2; /*0x633138*/
  v4 = Size; /*0x633141*/
  if ( !a2 ) /*0x63314c*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x63314c*/
  if ( Size < 1 ) /*0x633155*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x633155*/
  m_38 = this->m_38; /*0x63315b*/
  if ( !m_38 ) /*0x633160*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x6332e5*/
  v16 = 0; /*0x633169*/
  if ( LOBYTE(this->m_C) ) /*0x633166*/
  {
    if ( this->m_34 == 1 ) /*0x63317d*/
    {
      v7 = Delegate::Invoke( /*0x6331a6*/
             (Straw *)this,
             (int)Src,
             ((*(unsigned int *)(m_38 + 512) - 1) / 8 + 1) * (55 / ((*(unsigned int *)(m_38 + 512) - 1) / 8) + 1));
      v8 = this->m_38; /*0x6331ab*/
      v9 = v7; /*0x6331ae*/
      if ( v8 ) /*0x6331b2*/
        v10 = ((*(unsigned int *)(v8 + 512) - 1) / 8 + 1) * (55 / ((*(unsigned int *)(v8 + 512) - 1) / 8) + 1); /*0x6331d4*/
      else
        v10 = 0; /*0x6331b4*/
      if ( v9 != v10 ) /*0x6331d9*/
        return 0; /*0x6331e7*/
      BigInt::RSAOperation(v8, Src, v9, &this->u32_3C); /*0x6331f4*/
      GameClass::updateUI(&this->ptr_14, (int)&this->m_3C, 56); /*0x6331fc*/
    }
    else
    {
      memset(Src, 0, sizeof(Src)); /*0x63320d*/
      (*(void (**)(int, char *, int))(*(unsigned int *)this->m_10 + 8))(this->m_10, Src, 56); /*0x633217*/
      v12 = (unsigned int *)this->m_38; /*0x63321a*/
      if ( v12 ) /*0x63321f*/
        v13 = (int)(v12[128] - 1) / 8 * (55 / ((int)(v12[128] - 1) / 8) + 1); /*0x633240*/
      else
        v13 = 0; /*0x633221*/
      v14 = BigInt::DecryptBlock((int)v12, Src, v13, &this->u32_3C); /*0x63324d*/
      this->m_140 = v14; /*0x633258*/
      this->m_13C = v14; /*0x63325e*/
      GameClass::updateUI(&this->ptr_14, (int)Src, 56); /*0x633268*/
    }
    v4 = Size; /*0x63326d*/
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x633274*/
  }
  m_140 = this->m_140; /*0x633278*/
  if ( m_140 > 0 ) /*0x633280*/
  {
    if ( v4 >= m_140 ) /*0x633284*/
      v4 = this->m_140; /*0x633286*/
    memcpy(a2, &this->u32_3C + this->m_13C - m_140, v4); /*0x633297*/
    v3 = &a2[v4]; /*0x6332ac*/
    v16 = v4; /*0x6332b2*/
    this->m_140 -= v4; /*0x6332b6*/
    v4 = Size - v4; /*0x6332c3*/
  }
  return v16 + Delegate::Invoke((Straw *)this, (int)v3, v4); /*0x6331db*/

}
}
// 0x69AE10
namespace gamemd {
int GameClass::initPlayerData(const char **a2, void * aStandard_0)
{

  int v3; // eax
  v3 = *(unsigned int *)&aStandard_0->__pad_3D[375]; /*0x69ae15*/
  if ( !v3 ) /*0x69ae1d*/
    return ((String *)((String *)aStandard_0))->Equals_Alt((const char *)(aStandard_0)); /*0x69ae28*/
  int v5 = 0; // esi /*0x69ae33*/
  if ( v3 <= 0 ) /*0x69ae37*/
    return 0; /*0x69ae5d*/
  while ( !(uint8_t)((String *)((String *)aStandard_0))->Compare((const char **)(*(unsigned int *)&aStandard_0->__pad_3D[363] + 4 * v5)) ) /*0x69ae50*/
  {
    if ( ++v5 >= *(unsigned int *)&aStandard_0->__pad_3D[375] ) /*0x69ae5b*/
      return 0; /*0x69ae5b*/
  }
  return 1; /*0x69ae2d*/
}
}
// 0x6BEC60
namespace gamemd {
ObjectClass * * GameClass::Shutdown(void *a1_1)
{

  *(unsigned int *)&((unsigned int *)&stru_A8EB00)[500] = 1; /*0x6bec72*/
  PostMessageA((HWND)(g_hWnd), 2u, 0, 0); /*0x6bec78*/
  if ( g_hWnd ) /*0x6bec85*/
  {
    do /*0x6bec9b*/
      MessageLoop(); /*0x6bec87*/
    while ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[500] == 1 && g_hWnd ); /*0x6bec9b*/
  }
  if ( dwRegister != -1 ) /*0x6beca5*/
  {
    RevokeActiveObject((void *)(dwRegister), 0); /*0x6becaa*/
    dwRegister = -1; /*0x6becb0*/
  }
  CoDisconnectObject(&punk, 0); /*0x6becc1*/
  OleUninitialize(); /*0x6becc7*/
  if ( stru_887598.lineTrailer ) /*0x6becd5*/
  {
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6becd9*/
    if ( stru_887598.lineTrailer ) /*0x6bece4*/
      (**(void (***)(void *, int))stru_887598.lineTrailer)(stru_887598.lineTrailer, 1); /*0x6bece9*/
  }
  stru_887598.lineTrailer = 0; /*0x6becf0*/
  if ( byte_B0BCF4 ) /*0x6becfc*/
  {
    if ( dword_B0BCF0 ) /*0x6bed06*/
    {
      int v1; // eax
      v1 = *(unsigned int *)(dword_B0BCF0 - 4); /*0x6bed08*/
      void *v2; // ebp
      v2 = (void *)(dword_B0BCF0 - 4); /*0x6bed0c*/
      int v3 = 9 * v1; // edx /*0x6bed0f*/
      int v4 = v1 - 1; // eax /*0x6bed12*/
      FileTreeNode *v5; // esi
      v5 = (FileTreeNode *)(dword_B0BCF0 + 4 * v3); /*0x6bed13*/
      if ( v4 >= 0 ) /*0x6bed16*/
      {
        int v6 = v4 + 1; // edi /*0x6bed19*/
        do /*0x6bed27*/
        {
          v5 -= 9; /*0x6bed1c*/
          (v5)->Destroy(); /*0x6bed21*/
          --v6; /*0x6bed26*/
        }
        while ( v6 ); /*0x6bed27*/
      }
      operator delete((v2)); /*0x6bed2b*/
    }
    byte_B0BCF4 = 0; /*0x6bed34*/
  }
  PostQuitMessage(0); /*0x6bed3d*/
  Network *v7; // [esp+0h] [ebp-4h]
  Network::ShutdownInterface(v7); /*0x6bed43*/
  WinMainSetup(); /*0x6bed48*/
}
}
// 0x74F960
namespace gamemd {
int GameClass::ReadVersionFile()
{

  RawFileClass v5; // [esp+4h] [ebp-24h] BYREF

  if ( (this->u8_44 & 8) == 0 ) /*0x74f96a*/
  {
    RawFileClass::Construct((int)(&v5), (int)g_Str_File_VERSION_TXT); /*0x74f97c*/
    if ( (unsigned __int8)((int)(&v5))->Open(0) ) /*0x74f988*/
    {
      FileClass::Read((char *)(&v5), this->GameClass_field_0x2A, 16); /*0x74f99b*/
      for ( this->q039 = 0; /*0x74f9b5*/
      this->__pad_8[strlen(this->GameClass_field_0x2A) + 33] == 13;
      this->__pad_8[strlen(this->GameClass_field_0x2A) + 33] = 0 )
      {
        ; /*0x74f9c5*/
      }
    }
    else
    {
      this->GameClass_field_0x2A = 0; /*0x74f9d9*/
    }
    (&v5)->Dtor(); /*0x74f9e0*/
    int v2 = *&this->u8_44; // eax /*0x74f9e5*/
    (v2) = ((v2) & ~0xFF) | ((v2 | 8) & 0xFF); /*0x74f9e9*/
    *&this->u8_44 = v2; /*0x74f9ec*/
  }
  int v3 = *&this->u8_44; // eax /*0x74f9f0*/
  if ( (v3 & 2) != 0 ) /*0x74f9f5*/
    return *(unsigned short *)this->u32_8; /*0x74f9f7*/
  (v3) = ((v3) & ~0xFF) | ((v3 | 2) & 0xFF); /*0x74fa00*/
  *(unsigned short *)this->u32_8 = 1; /*0x74fa02*/
  *&this->u8_44 = v3; /*0x74fa08*/
  return 1; /*0x74f9fb*/

}
}
// 0x74FA20
namespace gamemd {
int GameClass::ReadVersionFile2()
{

  RawFileClass v5; // [esp+4h] [ebp-24h] BYREF

  if ( (this->u8_44 & 8) == 0 ) /*0x74fa2a*/
  {
    RawFileClass::Construct((int)(&v5), (int)g_Str_File_VERSION_TXT); /*0x74fa3c*/
    if ( (unsigned __int8)((int)(&v5))->Open(0) ) /*0x74fa48*/
    {
      FileClass::Read((char *)(&v5), this->GameClass_field_0x2A, 16); /*0x74fa5b*/
      for ( this->q039 = 0; /*0x74fa75*/
      this->__pad_8[strlen(this->GameClass_field_0x2A) + 33] == 13;
      this->__pad_8[strlen(this->GameClass_field_0x2A) + 33] = 0 )
      {
        ; /*0x74fa85*/
      }
    }
    else
    {
      this->GameClass_field_0x2A = 0; /*0x74fa99*/
    }
    (&v5)->Dtor(); /*0x74faa0*/
    int v2 = *&this->u8_44; // eax /*0x74faa5*/
    (v2) = ((v2) & ~0xFF) | ((v2 | 8) & 0xFF); /*0x74faa9*/
    *&this->u8_44 = v2; /*0x74faac*/
  }
  int v3 = *&this->u8_44; // eax /*0x74fab0*/
  if ( (v3 & 4) != 0 ) /*0x74fab5*/
    return *&this->u16_A; /*0x74fab7*/
  (v3) = ((v3) & ~0xFF) | ((v3 | 4) & 0xFF); /*0x74fac0*/
  *&this->u16_A = 1; /*0x74fac2*/
  *&this->u8_44 = v3; /*0x74fac8*/
  return 1; /*0x74fabb*/

}
}
// 0x74FC80
namespace gamemd {
void GameClass::ReadVersionString()
{

  RawFileClass v2; // [esp+10h] [ebp-24h] BYREF

  RawFileClass::Construct((int)(&v2), (int)g_Str_File_VERSION_TXT); /*0x74fc92*/
  if ( (unsigned __int8)((int)(&v2))->Open(0) ) /*0x74fc9e*/
  {
    FileClass::Read((char *)(&v2), this->GameClass_field_0x2A, 16); /*0x74fcb1*/
    for ( this->q039 = 0; /*0x74fccb*/
    this->__pad_8[strlen(this->GameClass_field_0x2A) + 33] == 13;
    this->__pad_8[strlen(this->GameClass_field_0x2A) + 33] = 0 )
    {
      ; /*0x74fcdb*/
    }
  }
  else
  {
    this->GameClass_field_0x2A = 0; /*0x74fcfe*/
  }
  (&v2)->Dtor(); /*0x74fd05*/

}
}
// 0x7BA3C0
namespace gamemd {
int GameClass::processNetworkPacket(void * Src, signed int Size)
{

  int result = 0; // eax /*0x7ba3c4*/
  int v5 = this->u32_C; // edx /*0x7ba3c6*/
  if ( v5 && Src && Size > 0 ) /*0x7ba3db*/
  {
    int v6 = this->int; // eax /*0x7ba3dd*/
    signed int v7 = Size; // edi /*0x7ba3e3*/
    if ( v6 ) /*0x7ba3e5*/
    {
      signed int v8 = v6 - this->__pad_018; // eax /*0x7ba3ea*/
      v7 = Size; /*0x7ba3ec*/
      if ( Size >= v8 ) /*0x7ba3f0*/
        v7 = v8; /*0x7ba3f2*/
    }
    if ( v7 > 0 ) /*0x7ba3f6*/
      memcpy((void *)(v5 + this->__pad_018), Src, v7); /*0x7ba400*/
    this->__pad_018 += v7; /*0x7ba40d*/
    return v7; /*0x7ba410*/
  }
  return result; /*0x7ba413*/
}
}
// 0x4AECA0
namespace gamemd {
int * GameClass::initDisplay(char a2)
{

  ((void *)((int)(&this->u32_4)))->Clear(); /*0x4aeca6*/
  ((Pipe *)this)->Dtor(); /*0x4aecad*/
  if ( (a2 & 1) != 0 ) /*0x4aecb7*/
    __3_YAXPAX_Z(this); /*0x4aecba*/
  return (int *)this->__pad_000; /*0x4aecc4*/

}
} // namespace gamemd

// 0x5E8AE0
namespace gamemd {
void GameClass::InitDifficultyButtons()
{
  signed int v0; // edx

  if ( dword_A8B238[0] == 4 ) /*0x5e8ae7*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8af2*/
      v0 = 6; /*0x5e8b02*/
    else
      v0 = 2; /*0x5e8afb*/
  }
  else
  {
    v0 = 8; /*0x5e8b09*/
  }
  memset32(&dword_A8DA90, g_HouseClass_ObserverFlags, v0); /*0x5e8b1f*/
  if ( v0 < 8 ) /*0x5e8b24*/
    memset32((void *)(4 * v0 + 11066000), g_Lobby_PlayerCount, 8 - v0); /*0x5e8b39*/
}
} // namespace gamemd

// 0x5E99C0
namespace gamemd {
wchar_t * GameClass::GetDifficultyString(void * aSttPlayerclose, void * aSttPlayerhuman, void * aSttPlayeropen, void * aSttPlayeropeno)
{
  if ( this == (GameClass *)g_HouseClass_ObserverFlags ) /*0x5e99c6*/
    return GetStringCSF((char *)(aSttPlayeropen), 0, g_Str_File_netshare_cpp, 4948); /*0x5e99d9*/
  if ( this == (GameClass *)g_Lobby_PlayerCount ) /*0x5e99e5*/
    return GetStringCSF((char *)(aSttPlayerclose), 0, g_Str_File_netshare_cpp, 4950); /*0x5e99f8*/
  if ( this == (GameClass *)g_Lobby_PlayerTeam ) /*0x5e9a04*/
    return GetStringCSF((char *)(g_Str_STT_PlayerDumbAI), 0, g_Str_File_netshare_cpp, 4952); /*0x5e9a17*/
  if ( this == (GameClass *)g_Lobby_PlayerSide ) /*0x5e9a23*/
    return GetStringCSF((char *)(g_Str_STT_PlayerSmartAI), 0, g_Str_File_netshare_cpp, 4954); /*0x5e9a36*/
  if ( this == (GameClass *)g_Lobby_PlayerColor ) /*0x5e9a42*/
    return GetStringCSF((char *)(g_Str_STT_PlayerGeniusAI), 0, g_Str_File_netshare_cpp, 4956); /*0x5e9a55*/
  if ( this == (GameClass *)g_Lobby_MaxPlayers ) /*0x5e9a61*/
    return GetStringCSF(aSttPlayeropeno, 0, g_Str_File_netshare_cpp, 4958); /*0x5e9a74*/
  return GetStringCSF(aSttPlayerhuman, 0, g_Str_File_netshare_cpp, 4960); /*0x5e99de*/
}
} // namespace gamemd

// 0x631F40
namespace gamemd {
unsigned int * GameClass::saveGameState(char a2)
{
  *(unsigned int *)this->__pad_000 = (unsigned int)(&vt_PixelFXClass); /*0x631f49*/
  if ( (a2 & 1) != 0 ) /*0x631f4f*/
    operator delete((this)); /*0x631f52*/
  return (unsigned int *)(this); /*0x631f5c*/
}
} // namespace gamemd

// 0x632FE0
namespace gamemd {
int GameClass::loadGameState(int a2)
{
  return (*(int (**)(PKPipe *, int))(*(unsigned int *)this->__pad_000 + 12))(this, a2); /*0x632fea*/
}
} // namespace gamemd

// 0x632FF0
namespace gamemd {
PKPipe * GameClass::validateGameFile(unsigned int * Block, char a2)
{

  COMObject *v3; // ebx
  v3 = (COMObject *)Block->field_20; /*0x632ff5*/
  Pipe *v4 = &Block->u32_30; // esi /*0x632ff8*/
  Block->field_14 = (int)&vt_BlowPipe; /*0x632ffd*/
  if ( v3 ) /*0x633003*/
  {
    COMObject::Release(v3); /*0x633007*/
    operator delete((v3)); /*0x63300d*/
  }
  v4->q00C = 0; /*0x633017*/
  (v4)->Dtor(); /*0x63301e*/
  ((Pipe *)Block)->Dtor(); /*0x633025*/
  if ( (a2 & 1) != 0 ) /*0x63302f*/
    operator delete((Block)); /*0x633032*/
  return Block->tail_0; /*0x63303c*/
}
} // namespace gamemd

// 0x633360
namespace gamemd {
int GameClass::parseGameOptions(int a2)
{
  return (*(int (**)(PKStraw *, int))(*(unsigned int *)this->__pad_000 + 4))(this, a2); /*0x63336a*/
}
} // namespace gamemd

// 0x633370
namespace gamemd {
PKStrawClass * GameClass::applyGameSettings(unsigned int * Block, char a2)
{

  COMObject *v3 = *&Block->u32_30; // ebx /*0x633375*/
  Straw *p_m_14 = &Block->u32_30; // esi /*0x633378*/
  Block->Straw_14 = (int)&vt_BlowStraw; /*0x63337d*/
  if ( v3 ) /*0x633383*/
  {
    COMObject::Release(v3); /*0x633387*/
    operator delete((v3)); /*0x63338d*/
  }
  p_m_14[1].Straw_field_0x04 = 0; /*0x633397*/
  (p_m_14)->Dtor(); /*0x63339e*/
  ((Straw *)Block)->Dtor(); /*0x6333a5*/
  if ( (a2 & 1) != 0 ) /*0x6333af*/
    operator delete((Block)); /*0x6333b2*/
  return Block->tail_0; /*0x6333bc*/
}
} // namespace gamemd

// 0x69BC60
namespace gamemd {
int GameClass::FindPlayerName(int a1)
{

  int v1 = 0; // ebp /*0x69bc64*/
  char **v2; // esi
  v2 = (char **)&dword_A8DA90; /*0x69bc66*/
  while ( 1 ) /*0x69bc74*/
  {
    char *v3 = *v2; // edi /*0x69bc74*/
    char *v4; // ebx
    v4 = ToWideStringChar((IUnknown *)(*(char **)(dword_A8DA78 + 4 * a1))); /*0x69bc80*/
    char *v5; // eax
    v5 = ToWideStringChar(v3); /*0x69bc82*/
    if ( !_strcmpi(v4, v5) ) /*0x69bc89*/
      break; /*0x69bc89*/
    ++v2; /*0x69bc95*/
    ++v1; /*0x69bc98*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x69bc9f*/
      return 0; /*0x69bca7*/
  }
  return v1; /*0x69bca1*/
}
} // namespace gamemd
