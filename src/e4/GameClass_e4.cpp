// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x437FD0
namespace gamemd {
int GameClass::initGameMode(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( !*this ) /*0x437fd3*/
    WinAPI::Wrapper(-2147467261); /*0x437fdd*/
  return (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*this + 12))(*this, a3, a2); /*0x437ff4*/
}
}
} // namespace gamemd

// 0x4381D0
namespace gamemd {
unsigned int * GameClass::processFrame(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax

  result = (_DWORD *)this->q003; /*0x4381d3*/
  if ( !result ) /*0x4381d8*/
  {
    _DWORD * v5 = __2_YAPAXI_Z(4u); /*0x4381dc*/
    if ( v5 ) /*0x4381e6*/
      result = sub_437F50(v5); /*0x4381ea*/
    else
      result = 0; /*0x4381f1*/
    this->q003 = result; /*0x4381f3*/
  }
  _DWORD * v6 = (_DWORD *)this->q003; /*0x4381f6*/
  if ( v6 ) /*0x4381fc*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438208*/
  return result; /*0x4381f9*/
}
}
} // namespace gamemd

// 0x438300
namespace gamemd {
unsigned int * GameClass::updateUI(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax

  result = (_DWORD *)this->q003; /*0x438303*/
  if ( !result ) /*0x438308*/
  {
    _DWORD * v5 = __2_YAPAXI_Z(4u); /*0x43830c*/
    if ( v5 ) /*0x438316*/
      result = sub_437F50(v5); /*0x43831a*/
    else
      result = 0; /*0x438321*/
    this->q003 = result; /*0x438323*/
  }
  _DWORD * v6 = (_DWORD *)this->q003; /*0x438326*/
  if ( v6 ) /*0x43832c*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438338*/
  return result; /*0x438329*/
}
}
} // namespace gamemd

// 0x5D2260
namespace gamemd {
int GameClass::loadScenarioFiles(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  ObjectClass *v4; // ebx
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  result = this->q004; /*0x5d2267*/
  if ( result > 0 ) /*0x5d226c*/
  {
    GetClientRect((HWND)g_hWnd, &Rect); /*0x5d227e*/
    ClientToScreen((HWND)g_hWnd, (LPPOINT)&Rect); /*0x5d228f*/
    v4 = aP1; /*0x5d229b*/
    if ( *(_DWORD *)&DataGlobal_87F8E4[32092] ) /*0x5d22a1*/
      (*(void (__thiscall **)(_DWORD, ObjectClass *, _DWORD))(**(_DWORD **)&DataGlobal_87F8E4[32092] + 60))( /*0x5d22a8*/
        *(_DWORD *)&DataGlobal_87F8E4[32092],
        aP1,
        0);
    result = this->q004; /*0x5d22ab*/
    int v5 = 0; /*0x5d22af*/
    if ( result > 0 ) /*0x5d22b3*/
    {
      result = 0; /*0x5d22b5*/
      int v7 = 0; /*0x5d22b8*/
      do /*0x5d231d*/
      {
        int * v6 = (int *)(this->q003 + result); /*0x5d22c7*/
        int v8 = *v6; /*0x5d22ce*/
        int v9 = v6[1]; /*0x5d22d5*/
        int v10 = v6[2]; /*0x5d22dc*/
        int v11 = v6[3]; /*0x5d22e9*/
        v4 = aP1; /*0x5d22f3*/
        v8 += Rect.left; /*0x5d22f7*/
        v9 += Rect.top; /*0x5d2301*/
        (*(void (__thiscall **)(_DWORD, int *, ObjectClass *, int *, _DWORD, int))(**(_DWORD **)&DataGlobal_87F8E4[31268] /*0x5d2309*/
                                                                                 + 8))(
          *(_DWORD *)&DataGlobal_87F8E4[31268],
          &v8,
          aP1,
          v6,
          0,
          1);
        ++v5; /*0x5d2313*/
        result = v7 + 16; /*0x5d2314*/
        v7 += 16; /*0x5d2319*/
      }
      while ( v5 < this->q004 ); /*0x5d231d*/
    }
    this->q004 = 0; /*0x5d2320*/
    if ( *(_DWORD *)&DataGlobal_87F8E4[32092] ) /*0x5d2330*/
      return (*(int (__thiscall **)(_DWORD, ObjectClass *, _DWORD))(**(_DWORD **)&DataGlobal_87F8E4[32092] + 64))( /*0x5d2337*/
               *(_DWORD *)&DataGlobal_87F8E4[32092],
               v4,
               0);
  }
  return result; /*0x5d233a*/
}
}
} // namespace gamemd

// 0x5D2410
namespace gamemd {
int GameClass::FrameLoop(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool v7; // zf
  int result; // eax
  DWORD Ticks; // [esp+10h] [ebp-18h]
  int v10; // [esp+18h] [ebp-10h]
  Ticks = Timer::GetTicks(); /*0x5d2428*/
  v10 = 1; /*0x5d242c*/
  do /*0x5d2511*/
  {
  int v5; // esi
    do /*0x5d24dc*/
    {
      Event::Dispatch(); /*0x5d2437*/
      this->vt_slot_8(); /*0x5d2440*/
      DDraw::WaitForIdle(); /*0x5d2443*/
      DSurface::RenderToSurface(this, *(ObjectClass **)&DataGlobal_87F8E4[31272]); /*0x5d2451*/
      GameClass::loadScenarioFiles(this, *(ObjectClass **)&DataGlobal_87F8E4[31272]); /*0x5d245f*/
      MessageLoop(); /*0x5d2464*/
      if ( !g_NetworkPlayerBuffer[5956] ) /*0x5d2470*/
      {
        if ( Ticks != -1 ) /*0x5d2478*/
        {
          int v3 = Timer::GetTicks() - Ticks; /*0x5d2487*/
          if ( v3 >= v10 ) /*0x5d248d*/
            int v4 = 0; /*0x5d2493*/
          else
            v4 = v10 - v3; /*0x5d248f*/
          v10 = v4; /*0x5d2495*/
        }
        DDraw::HandleSuspend(this); /*0x5d249f*/
        Ticks = Timer::GetTicks(); /*0x5d24b3*/
      }
      Sleep(0); /*0x5d24b9*/
      v5 = v10; /*0x5d24bf*/
      if ( Ticks != -1 ) /*0x5d24c5*/
      {
        int v6 = Timer::GetTicks() - Ticks; /*0x5d24d0*/
        if ( v6 >= v10 ) /*0x5d24d6*/
          break; /*0x5d24d6*/
        v5 = v10 - v6; /*0x5d24d8*/
      }
    }
    while ( v5 > 0 ); /*0x5d24dc*/
    Ticks = Timer::GetTicks(); /*0x5d24e2*/
    result = a2 - 1; /*0x5d2504*/
    v7 = a2 == 1; /*0x5d2504*/
    v10 = 1; /*0x5d2509*/
    --a2; /*0x5d250d*/
  }
  while ( !v7 ); /*0x5d2511*/
  return result; /*0x5d2517*/
}
}
} // namespace gamemd

// 0x5D6370
namespace gamemd {
int GameClass::FindOpenSlot()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = g_MultiplayerOptions; /*0x5d6372*/
  int v2 = 0; /*0x5d6379*/
  if ( g_MultiplayerOptions <= 0 ) /*0x5d6380*/
    return -1; /*0x5d63cc*/
  while ( 1 ) /*0x5d6387*/
  {
  char v5; // al
    AbstractClass *v4 = *(_DWORD *)(g_MultiplayerGameState + 4 * v2); /*0x5d6387*/
    if ( IsRandMap::Sed(v4) ) /*0x5d638c*/
    {
      v5 = this->vt_slot_60(); /*0x5d6399*/
    }
    else
    {
      if ( !v4->q5F0 && Network::IsMultiplayerActive() ) /*0x5d63a8*/
        goto LABEL_8; /*0x5d63af*/
      v5 = ((GameClass *)((char *)this + 48)).initPlayerData(); /*0x5d63b7*/
    }
    if ( v5 ) /*0x5d63be*/
      return v2; /*0x5d63c5*/
LABEL_8:
    if ( ++v2 >= v1 ) /*0x5d63c3*/
      return -1; /*0x5d63c3*/
  }
}
}
} // namespace gamemd

// 0x631D30
namespace gamemd {
int GameClass::GetRelatedObject()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  Pipe *v1 = this->q004; /*0x631d30*/
  if ( v1 ) /*0x631d35*/
    return v1->GetRelatedObject(); /*0x631d39*/
  else
    return 0; /*0x631d3c*/
}
}
} // namespace gamemd

// 0x632DC0
namespace gamemd {
void * GameClass::WriteEncryptedStream(BombClass * Src, signed int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BombClass *v3; // ebx
  Pipe *v5; // ebp
  Pipe *v7; // eax
  Pipe *v8; // eax
  Pipe aP1[16]; // [esp+8h] [ebp-100h] BYREF

  v3 = Src; /*0x632dc7*/
  if ( Src && aP2 >= 1 && *(_DWORD *)(this + 56) ) /*0x632de7*/
  {
    v5 = 0; /*0x632df6*/
    if ( this->q003 ) /*0x632df2*/
    {
      if ( *(_DWORD *)(this + 52) ) /*0x632e01*/
      {
        ModemGame *v9 = *(_DWORD *)(this + 320); /*0x632e6f*/
        if ( v9 >= aP2 ) /*0x632e7e*/
          v9 = aP2; /*0x632e80*/
        memcpy((void *)(*(_DWORD *)(this + 316) - *(_DWORD *)(this + 320) + this + 60), (AbstractClass *)Src, v9); /*0x632e97*/
        v3 = (BombClass *)((char *)Src + v9); /*0x632eb0*/
        bool v10 = *(_DWORD *)(this + 320) == v9; /*0x632eb2*/
        aP2 -= v9; /*0x632eb4*/
        *(_DWORD *)(this + 320) -= v9; /*0x632ebb*/
        if ( !v10 ) /*0x632ec1*/
          return (Pipe *)((char *)Delegate::Dispatch((_DWORD *)this, (Pipe *)v3, (Pipe *)aP2) + (_DWORD)v5); /*0x632ec1*/
        BigInt::RSAOperation( /*0x632ed6*/
          *(_DWORD *)(this + 56),
          (AbstractClass *)(this + 60),
          *(_DWORD *)(this + 316),
          aP1[0].__pad_0);
        GameClass::processFrame((_DWORD *)(this + 20), (int)aP1, 56); /*0x632ee5*/
      }
      else
      {
        memset(aP1, 0, sizeof(aP1)); /*0x632e17*/
        (*(void (__thiscall **)(_DWORD, Pipe *, int))(*this->q004 + 8))(this->q004, aP1, 56); /*0x632e21*/
        int v6 = *(_DWORD *)(this + 56); /*0x632e24*/
        if ( v6 ) /*0x632e29*/
          v7 = (Pipe *)((*(_DWORD *)(v6 + 512) - 1) / 8 * (55 / ((*(_DWORD *)(v6 + 512) - 1) / 8) + 1)); /*0x632e4a*/
        Pipe *v7 = 0; /*0x632e2b*/
        v8 = (Pipe *)BigInt::DecryptBlock(v6, aP1, v7, (Pipe *)(this + 60)); /*0x632e57*/
        v5 = Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 60), v8); /*0x632e65*/
        GameClass::processFrame((_DWORD *)(this + 20), (int)aP1, 56); /*0x632e6d*/
      }
      this->q003 = 0; /*0x632eea*/
    }
    return (Pipe *)((char *)Delegate::Dispatch((_DWORD *)this, (Pipe *)v3, (Pipe *)aP2) + (_DWORD)v5); /*0x632f0a*/
  }
  return Delegate::Dispatch((_DWORD *)this, (Pipe *)Src, (Pipe *)aP2); /*0x632f02*/
}
}
} // namespace gamemd

// 0x633130
namespace gamemd {
int GameClass::ReadEncryptedStream(char * a2, signed int Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Straw *v7; // eax
  Straw *v9; // ebx
  Straw *v10; // eax
  Pipe *v13; // eax
  Pipe Src[16]; // [esp+14h] [ebp-100h] BYREF

  char * v3 = a2; /*0x633138*/
  ModemGame *v4 = Size; /*0x633141*/
  if ( !a2 ) /*0x63314c*/
    return Delegate::Invoke((_DWORD *)this, (int)a2, (Straw *)Size); /*0x63314c*/
  if ( Size < 1 ) /*0x633155*/
    return Delegate::Invoke((_DWORD *)this, (int)a2, (Straw *)Size); /*0x633155*/
  int v6 = *(_DWORD *)(this + 56); /*0x63315b*/
  if ( !v6 ) /*0x633160*/
    return Delegate::Invoke((_DWORD *)this, (int)a2, (Straw *)Size); /*0x6332e5*/
  ModemGame *v16 = 0; /*0x633169*/
  if ( this->q003 ) /*0x633166*/
  {
    if ( *(_DWORD *)(this + 52) == 1 ) /*0x63317d*/
    {
      v7 = (Straw *)Delegate::Invoke( /*0x6331a6*/
                      (_DWORD *)this,
                      (int)Src,
                      (Straw *)(((*(_DWORD *)(v6 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(v6 + 512) - 1) / 8) + 1)));
      int v8 = *(_DWORD *)(this + 56); /*0x6331ab*/
      v9 = v7; /*0x6331ae*/
      if ( v8 ) /*0x6331b2*/
        v10 = (Straw *)(((*(_DWORD *)(v8 + 512) - 1) / 8 + 1) * (55 / ((*(_DWORD *)(v8 + 512) - 1) / 8) + 1)); /*0x6331d4*/
      Straw *v10 = 0; /*0x6331b4*/
      if ( v9 != v10 ) /*0x6331d9*/
        return 0; /*0x6331e7*/
      BigInt::RSAOperation(v8, Src[0].__pad_0, (int)v9, (char *)(this + 60)); /*0x6331f4*/
      GameClass::updateUI((_DWORD *)(this + 20), this + 60, 56); /*0x6331fc*/
    }
    else
    {
      memset(Src, 0, sizeof(Src)); /*0x63320d*/
      (*(void (__thiscall **)(_DWORD, Pipe *, int))(*this->q004 + 8))(this->q004, Src, 56); /*0x633217*/
      int v12 = *(_DWORD *)(this + 56); /*0x63321a*/
      if ( v12 ) /*0x63321f*/
        v13 = (Pipe *)((*(_DWORD *)(v12 + 512) - 1) / 8 * (55 / ((*(_DWORD *)(v12 + 512) - 1) / 8) + 1)); /*0x633240*/
      Pipe *v13 = 0; /*0x633221*/
      int v14 = BigInt::DecryptBlock(v12, Src, v13, (Pipe *)(this + 60)); /*0x63324d*/
      *(_DWORD *)(this + 320) = v14; /*0x633258*/
      *(_DWORD *)(this + 316) = v14; /*0x63325e*/
      GameClass::updateUI((_DWORD *)(this + 20), (int)Src, 56); /*0x633268*/
    }
    v4 = Size; /*0x63326d*/
    this->q003 = 0; /*0x633274*/
  }
  int v15 = *(_DWORD *)(this + 320); /*0x633278*/
  if ( v15 > 0 ) /*0x633280*/
  {
    if ( v4 >= v15 ) /*0x633284*/
      v4 = *(_DWORD *)(this + 320); /*0x633286*/
    memcpy(a2, (const void *)(*(_DWORD *)(this + 316) - v15 + this + 60), v4); /*0x633297*/
    v3 = &a2[v4]; /*0x6332ac*/
    v16 = v4; /*0x6332b2*/
    *(_DWORD *)(this + 320) -= v4; /*0x6332b6*/
    v4 = Size - v4; /*0x6332c3*/
  }
  return v16 + Delegate::Invoke((_DWORD *)this, (int)v3, (Straw *)v4); /*0x6331db*/
}
}
} // namespace gamemd

// 0x69AE10
namespace gamemd {
int GameClass::initPlayerData(const char ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = this->q06D; /*0x69ae15*/
  if ( !v3 ) /*0x69ae1d*/
    return String::Equals_Alt(a2, DataGlobal_83F668); /*0x69ae28*/
  int v5 = 0; /*0x69ae33*/
  if ( v3 <= 0 ) /*0x69ae37*/
    return 0; /*0x69ae5d*/
  while ( !String::Compare(a2, (const char **)(this->q06A + 4 * v5)) ) /*0x69ae50*/
  {
    if ( ++v5 >= this->q06D ) /*0x69ae5b*/
      return 0; /*0x69ae5b*/
  }
  return 1; /*0x69ae2d*/
}
}
} // namespace gamemd

// 0x6BEC60
namespace gamemd {
ObjectClass * * GameClass::Shutdown()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  DataGlobal_A8EDD8 = 1; /*0x6bec72*/
  PostMessageA(g_hWnd, 2u, 0, 0); /*0x6bec78*/
  if ( g_hWnd ) /*0x6bec85*/
  {
    do /*0x6bec9b*/
      MessageLoop(); /*0x6bec87*/
    while ( DataGlobal_A8EDD8 == 1 && g_hWnd ); /*0x6bec9b*/
  }
  if ( dwRegister != -1 ) /*0x6beca5*/
  {
    RevokeActiveObject(dwRegister, 0); /*0x6becaa*/
    dwRegister = -1; /*0x6becb0*/
  }
  CoDisconnectObject(&unk_89A29C, 0); /*0x6becc1*/
  OleUninitialize(); /*0x6becc7*/
  if ( g_WWMouseClass_Instance ) /*0x6becd5*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x6becd9*/
    if ( g_WWMouseClass_Instance ) /*0x6bece4*/
      (**(void (__thiscall ***)(int, int))g_WWMouseClass_Instance)(g_WWMouseClass_Instance, 1); /*0x6bece9*/
  }
  g_WWMouseClass_Instance = 0; /*0x6becf0*/
  if ( DataGlobal_B0BCF4 ) /*0x6becfc*/
  {
    if ( DataGlobal_B0BCF0 ) /*0x6bed06*/
    {
      int v0 = *(_DWORD *)(DataGlobal_B0BCF0 - 4); /*0x6bed08*/
      void * v1 = (void *)(DataGlobal_B0BCF0 - 4); /*0x6bed0c*/
      int v2 = 9 * v0; /*0x6bed0f*/
      int v3 = v0 - 1; /*0x6bed12*/
      char * v4 = (char *)(DataGlobal_B0BCF0 + 4 * v2); /*0x6bed13*/
      if ( v3 >= 0 ) /*0x6bed16*/
      {
        int v5 = v3 + 1; /*0x6bed19*/
        do /*0x6bed27*/
        {
          v4 -= 36; /*0x6bed1c*/
          FileTreeNode::Destroy(v4); /*0x6bed21*/
          --v5; /*0x6bed26*/
        }
        while ( v5 ); /*0x6bed27*/
      }
      __3_YAXPAX_Z(v1); /*0x6bed2b*/
    }
    DataGlobal_B0BCF4 = 0; /*0x6bed34*/
  }
  PostQuitMessage(0); /*0x6bed3d*/
  Network::ShutdownInterface(); /*0x6bed43*/
  WinMainSetup(); /*0x6bed48*/
}
}
} // namespace gamemd

// 0x74F960
namespace gamemd {
int GameClass::ReadVersionFile()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( (*(_BYTE *)(this + 68) & 8) == 0 ) /*0x74f96a*/
  {
  int v5[9]; // [esp+4h] [ebp-24h] BYREF
    RawFileClass::Construct(v5, (int)g_Str_File_VERSION_TXT); /*0x74f97c*/
    if ( FileClass::Open(v5, 0) ) /*0x74f988*/
    {
      FileClass::Read(v5, (char *)(this + 42), 16); /*0x74f99b*/
      for ( this->q039 = 0; /*0x74f9b5*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74f9c5*/
      }
    }
    else
    {
      this->q02A = 0; /*0x74f9d9*/
    }
    RawFileClass::Dtor(v5); /*0x74f9e0*/
    int v2 = *(_DWORD *)(this + 68); /*0x74f9e5*/
    LOBYTE(v2) = v2 | 8; /*0x74f9e9*/
    *(_DWORD *)(this + 68) = v2; /*0x74f9ec*/
  }
  int v3 = *(_DWORD *)(this + 68); /*0x74f9f0*/
  if ( (v3 & 2) != 0 ) /*0x74f9f5*/
    return *(_WORD *)(this + 8); /*0x74f9f7*/
  LOBYTE(v3) = v3 | 2; /*0x74fa00*/
  *(_WORD *)(this + 8) = 1; /*0x74fa02*/
  *(_DWORD *)(this + 68) = v3; /*0x74fa08*/
  return 1; /*0x74f9fb*/
}
}
} // namespace gamemd

// 0x74FA20
namespace gamemd {
int GameClass::ReadVersionFile2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( (*(_BYTE *)(this + 68) & 8) == 0 ) /*0x74fa2a*/
  {
  int v5[9]; // [esp+4h] [ebp-24h] BYREF
    RawFileClass::Construct(v5, (int)g_Str_File_VERSION_TXT); /*0x74fa3c*/
    if ( FileClass::Open(v5, 0) ) /*0x74fa48*/
    {
      FileClass::Read(v5, (char *)(this + 42), 16); /*0x74fa5b*/
      for ( this->q039 = 0; /*0x74fa75*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74fa85*/
      }
    }
    else
    {
      this->q02A = 0; /*0x74fa99*/
    }
    RawFileClass::Dtor(v5); /*0x74faa0*/
    int v2 = *(_DWORD *)(this + 68); /*0x74faa5*/
    LOBYTE(v2) = v2 | 8; /*0x74faa9*/
    *(_DWORD *)(this + 68) = v2; /*0x74faac*/
  }
  int v3 = *(_DWORD *)(this + 68); /*0x74fab0*/
  if ( (v3 & 4) != 0 ) /*0x74fab5*/
    return *(_WORD *)(this + 10); /*0x74fab7*/
  LOBYTE(v3) = v3 | 4; /*0x74fac0*/
  *(_WORD *)(this + 10) = 1; /*0x74fac2*/
  *(_DWORD *)(this + 68) = v3; /*0x74fac8*/
  return 1; /*0x74fabb*/
}
}
} // namespace gamemd

// 0x74FC80
namespace gamemd {
void GameClass::ReadVersionString()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2[9]; // [esp+10h] [ebp-24h] BYREF
  RawFileClass::Construct(v2, (int)g_Str_File_VERSION_TXT); /*0x74fc92*/
  if ( FileClass::Open(v2, 0) ) /*0x74fc9e*/
  {
    FileClass::Read(v2, this + 42, 16); /*0x74fcb1*/
    for ( this->q039 = 0; *(this + strlen(this + 42) + 41) == 13; *(this + strlen(this + 42) + 41) = 0 ) /*0x74fccb*/
      ; /*0x74fcdb*/
  }
  else
  {
    this->q02A = 0; /*0x74fcfe*/
  }
  RawFileClass::Dtor(v2); /*0x74fd05*/
}
}
} // namespace gamemd

// 0x7BA3C0
namespace gamemd {
int GameClass::processNetworkPacket(void * Src, signed int Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = 0; /*0x7ba3c4*/
  bool v5 = this->q003; /*0x7ba3c6*/
  if ( v5 && Src && Size > 0 ) /*0x7ba3db*/
  {
    int v6 = this->q004; /*0x7ba3dd*/
    ModemGame *v7 = Size; /*0x7ba3e3*/
    if ( v6 ) /*0x7ba3e5*/
    {
      signed int v8 = v6 - *((_DWORD *)this + 6); /*0x7ba3ea*/
      v7 = Size; /*0x7ba3ec*/
      if ( Size >= v8 ) /*0x7ba3f0*/
        v7 = v8; /*0x7ba3f2*/
    }
    if ( v7 > 0 ) /*0x7ba3f6*/
      memcpy((void *)(v5 + *((_DWORD *)this + 6)), Src, v7); /*0x7ba400*/
    *((_DWORD *)this + 6) += v7; /*0x7ba40d*/
    return v7; /*0x7ba410*/
  }
  return result; /*0x7ba413*/
}
}
} // namespace gamemd

// 0x4AECA0
namespace gamemd {
int * GameClass::initDisplay(char a2)
{
{
    Vector::Clear((int)(this + 3));
    Pipe::Dtor((int *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this;
}
}
} // namespace gamemd

// 0x5E8AE0
namespace gamemd {
void GameClass::InitDifficultyButtons()
{
{
    signed int v0;
    if ( g_GameMode_Current[0] == 4 )
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() )
    v0 = 6;
    else
    v0 = 2;
  }
    else
  {
    v0 = 8;
  }
    memset32(&g_NetworkPlayerName, g_HouseClass_ObserverFlags, v0);
    if ( v0 < 8 )
    memset32((void *)(4 * v0 + 11066000), g_Lobby_PlayerCount, 8 - v0);
}
}
} // namespace gamemd

// 0x5E99C0
namespace gamemd {
wchar_t * GameClass::GetDifficultyString()
{
{
    if ( this == (void *)g_HouseClass_ObserverFlags )
    return GetStringCSF(DataGlobal_831D34, 0, g_Str_File_netshare_cpp, 4948);
    if ( this == (void *)g_Lobby_PlayerCount )
    return GetStringCSF(DataGlobal_831D20, 0, g_Str_File_netshare_cpp, 4950);
    if ( this == (void *)g_Lobby_PlayerTeam )
    return GetStringCSF(g_Str_STT_PlayerDumbAI, 0, g_Str_File_netshare_cpp, 4952);
    if ( this == (void *)g_Lobby_PlayerSide )
    return GetStringCSF(g_Str_STT_PlayerSmartAI, 0, g_Str_File_netshare_cpp, 4954);
    if ( this == (void *)g_Lobby_PlayerColor )
    return GetStringCSF(g_Str_STT_PlayerGeniusAI, 0, g_Str_File_netshare_cpp, 4956);
    if ( this == (void *)g_Lobby_MaxPlayers )
    return GetStringCSF(DataGlobal_831CCC, 0, g_Str_File_netshare_cpp, 4958);
    return GetStringCSF(DataGlobal_831CBC, 0, g_Str_File_netshare_cpp, 4960);
}
}
} // namespace gamemd

// 0x631F40
namespace gamemd {
unsigned int * GameClass::saveGameState(char a2)
{
{
    this->vfptr = &vt_PixelFXClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace gamemd

// 0x632FE0
namespace gamemd {
int GameClass::loadGameState(int a2)
{
{
    return this->SetDelegate(a2);
}
}
} // namespace gamemd

// 0x632FF0
namespace gamemd {
PKPipe * GameClass::validateGameFile(char a2)
{
{
    int *v3;
    Pipe *v4;
    v3 = (int *)*(this + 8);
    v4 = (Pipe *)(this + 5);
    *(this + 5) = &vt_BlowPipe;
    if ( v3 )
  {
    COMObject::Release(v3);
    __3_YAXPAX_Z(v3);
  }
    v4->Pipe_field_0x0C = 0;
    Pipe::Dtor((int *)v4->__pad_0);
    Pipe::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (PKPipe *)this;
}
}
} // namespace gamemd

// 0x633360
namespace gamemd {
int GameClass::parseGameOptions(int a2)
{
{
    return this->GetRelatedObject(a2);
}
}
} // namespace gamemd

// 0x633370
namespace gamemd {
PKStrawClass * GameClass::applyGameSettings(char a2)
{
{
    int *v3;
    Straw *v4;
    v3 = (int *)*(this + 8);
    v4 = (Straw *)(this + 5);
    *(this + 5) = &vt_BlowStraw;
    if ( v3 )
  {
    COMObject::Release(v3);
    __3_YAXPAX_Z(v3);
  }
    v4[1].Straw_field_0x04 = 0;
    Straw::Dtor((int *)v4->__pad_0);
    Straw::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (PKStrawClass *)this;
}
}
} // namespace gamemd

// 0x69BC60
namespace gamemd {
int GameClass::FindPlayerName(int a1)
{
{
    int v1;
    char **v2;
    char *v3;
    char *v4;
    char *v5;
    v1 = 0;
    v2 = (char **)&g_NetworkPlayerName;
    while ( 1 )
  {
    v3 = *v2;
    v4 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * a1));
    v5 = ToWideStringChar(v3);
    if ( !_strcmpi(v4, v5) )
    break;
    ++v2;
    ++v1;
    if ( (int)v2 >= (int)&g_PlayerNameListEnd )
    return 0;
  }
    return v1;
}
}
} // namespace gamemd
