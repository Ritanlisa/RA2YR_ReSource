// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Winsock_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x770270
namespace gamemd {
void * WinsockInterface::ProcessPacket(int a2)
{
  int v3; // ebp
  void **v4; // edi
  int v5; // ebx
  unsigned int *v6; // edi
  int v7; // ebp

  v3 = 6; /*0x77027a*/
  v4 = (void **)((char *)&this->q004 + 12); /*0x77027f*/
  *(unsigned int *)this = a2; /*0x770282*/
  v5 = (int)((char *)&this->q004 + 28); /*0x770284*/
  do /*0x7702b6*/
  {
    unknown_libname_73(v4); /*0x770289*/
    Array::ForEach(v5, 24, 6, (int (__thiscall *)(int))sub_7719E0); /*0x770298*/
    String::Assign_Alt(v4, &g_INI_DefaultBuffer); /*0x7702a4*/
    v4 += 37; /*0x7702a9*/
    v5 += 148; /*0x7702af*/
    --v3; /*0x7702b5*/
  }
  while ( v3 ); /*0x7702b6*/
  v6 = ((char *)&this->q338 + 68); /*0x7702b8*/
  v7 = 2; /*0x7702be*/
  do /*0x7702e2*/
  {
    VectorClassUInt::Constructor(v6, 0, 0); /*0x7702c9*/
    v6[5] = 10; /*0x7702d4*/
    v6[4] = 0; /*0x7702db*/
    v6 += 6; /*0x7702de*/
    --v7; /*0x7702e1*/
  }
  while ( v7 ); /*0x7702e2*/
  *(unsigned int *)&this->u32_3AC = Timer::GetTicks(); /*0x7702f6*/
  *(unsigned int *)&this->u32_3B4 = 0; /*0x7702fc*/
  *(unsigned int *)&this->u32_EE0 = 1; /*0x770305*/
  this->u32_3BC = 0; /*0x77030c*/
  VectorClass::WstringConstructor((unsigned int *)&this->u32_3C0, 0, 0); /*0x770312*/
  this->u32_3D4 = 10; /*0x77031d*/
  this->u32_3D0 = 0; /*0x770324*/
  *(unsigned int *)&this->u32_3D8 = 0; /*0x770327*/
  Audio::GetEnabled(); /*0x77032d*/
  String::Assign((char **)&a2, aOldcycle); /*0x77033b*/
  String::Reassign((char **)this->ptr_4, (const char **)&a2); /*0x770348*/
  DeleteAndZero((void **)&a2); /*0x770351*/
  String::Assign((char **)&a2, aHistory); /*0x77035f*/
  String::Reassign((char *)((char *)&this->q004 + 34), (const char **)&a2); /*0x77036f*/
  DeleteAndZero((void **)&a2); /*0x770378*/
  String::Assign((char **)&a2, aStatus); /*0x770386*/
  String::Reassign((char *)((char *)&this->q004 + 71), (const char **)&a2); /*0x770396*/
  DeleteAndZero((void **)&a2); /*0x77039f*/
  String::Assign((char **)&a2, aTerritory); /*0x7703ad*/
  String::Reassign((char *)((char *)&this->u32_60 + 16), (const char **)&a2); /*0x7703bd*/
  DeleteAndZero((void **)&a2); /*0x7703c6*/
  String::Assign((char **)&a2, aGame); /*0x7703d4*/
  String::Reassign((char *)((char *)&this->q092 + 3), (const char **)&a2); /*0x7703e4*/
  DeleteAndZero((void **)&a2); /*0x7703ed*/
  String::Assign((char **)&a2, aEvacuate); /*0x7703fb*/
  String::Reassign((char *)((char *)&this->u32_98 + 34), (const char **)&a2); /*0x77040b*/
  DeleteAndZero((void **)&a2); /*0x770414*/
  return this; /*0x77041b*/
}
}
// 0x7B1DE0
namespace gamemd {
int WinsockInterface::Init()
{
  struct WSAData *v3; // eax
  int v4; // edx
  struct WSAData *v5; // esi
  int v6; // eax
  INT v7; // eax
  int v8; // ebp
  const char **v9; // esi
  int v11; // eax
  DWORD dwBufferLength; // [esp+Ch] [ebp-1004h] BYREF
  unsigned char ProtocolBuffer[24]; // [esp+10h] [ebp-1000h] BYREF
  char v15; // [esp+28h] [ebp-FE8h] BYREF

  Debug::Log(aWinsockinterfa_0); /*0x7b1df3*/
  if ( this->u8_3F068 ) /*0x7b1df8*/
  {
    Debug::Log(aWinsockinterfa_1); /*0x7b1e0a*/
    return 1; /*0x7b1e12*/
  }
  else
  {
    if ( dword_B780A0 > 0 && !byte_B7809C ) /*0x7b1e2d*/
    {
      byte_B7809C = 1; /*0x7b1e41*/
      MessageBoxA(g_hWnd, aWarningPacketL, Caption, 0); /*0x7b1e48*/
    }
    v3 = (int)((struct WSAData *)operator new(0x590u));
    v4 = *this; /*0x7b1e58*/
    v5 = v3; /*0x7b1e5a*/
    v3 = v3; /*0x7b1e61*/
    *(&this->u32_64D49) = -1; /*0x7b1e65*/
    this->vt_slot_20(); /*0x7b1e6f*/
    this->vt_slot_24(); /*0x7b1e76*/
    Debug::Log(aAboutToCallWsa); /*0x7b1e7e*/
    v6 = WSAStartup(0x101u, v5); /*0x7b1e8c*/
    if ( v6 ) /*0x7b1e93*/
    {
      Debug::Log("Winsock failed to initialise - error code %d.\n", v6); /*0x7b1e9b*/
      RA2_OPDEL(v5); /*0x7b1ea1*/
      return 0; /*0x7b1ea9*/
    }
    else
    {
      Debug::Log(aWinsockInitial); /*0x7b1eb9*/
      if ( (uint8_t)v5->wVersion != 1 || ((v5->wVersion ^ 0x100) & 0xFFFFFF00) != 0 ) /*0x7b1ee2*/
      {
        Debug::Log(aWinsockVersion_0); /*0x7b1fad*/
        RA2_OPDEL(v5); /*0x7b1fb3*/
        return 0; /*0x7b1fbb*/
      }
      else
      {
        Debug::Log("Winsock version is %d.%d\n", (uint8_t)v5->wVersion, IDA_HIBYTE(v5->wVersion)); /*0x7b1efa*/
        this->ptr_4 = 546; /*0x7b1f0a*/
        dwBufferLength = 4096; /*0x7b1f18*/
        v7 = EnumProtocolsA(&iProtocols, ProtocolBuffer, &dwBufferLength); /*0x7b1f20*/
        if ( v7 == -1 ) /*0x7b1f28*/
        {
          Debug::Log(aFailedToGetPro); /*0x7b1f9e*/
        }
        else
        {
          v8 = 0x7FFFFFFF; /*0x7b1f2c*/
          if ( v7 > 0 ) /*0x7b1f31*/
          {
            v9 = (const char **)&v15; /*0x7b1f34*/
            v7 = v7; /*0x7b1f38*/
            do /*0x7b1f63*/
            {
              Debug::Log("Found protocol %s, max frame size is %d\n", v9[1], *v9); /*0x7b1f46*/
              v11 = (int)*v9; /*0x7b1f4b*/
              if ( *v9 && v11 != -1 && v8 >= v11 ) /*0x7b1f5b*/
                v8 = (int)*v9; /*0x7b1f5d*/
              v9 += 8; /*0x7b1f5f*/
              --v7; /*0x7b1f62*/
            }
            while ( v7 ); /*0x7b1f63*/
            if ( v8 != 0x7FFFFFFF && v8 > 400 ) /*0x7b1f74*/
              this->ptr_4 = v8; /*0x7b1f76*/
            v5 = v3; /*0x7b1f79*/
          }
        }
        this->u8_3F068 = 1; /*0x7b1f7e*/
        RA2_OPDEL(v5); /*0x7b1f85*/
        return 1; /*0x7b1f8d*/
      }
    }
  }
}
}