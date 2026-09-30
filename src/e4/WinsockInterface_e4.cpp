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
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/WonlineStringDialogControl_12_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/VectorClass_Wstring_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/WonlineStringDialogControl_28_e4.hpp"

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
  v4 = (void **)((unsigned char *)this + 4); /*0x77027f*/
  *(unsigned int *)this = a2; /*0x770282*/
  v5 = (int)((unsigned char *)this + 8); /*0x770284*/
  do /*0x7702b6*/
  {
    unknown_libname_73(v4); /*0x770289*/
    Array::ForEach(v5, 24, 6, (int (*)(int))sub_7719E0); /*0x770298*/
    String::Assign_Alt(v4, &g_abs_889F64); /*0x7702a4*/
    v4 += 37; /*0x7702a9*/
    v5 += 148; /*0x7702af*/
    --v3; /*0x7702b5*/
  }
  while ( v3 ); /*0x7702b6*/
  v6 = (unsigned char *)this + 892; /*0x7702b8*/
  v7 = 2; /*0x7702be*/
  do /*0x7702e2*/
  {
    VectorClassUInt::Constructor(v6, 0, 0); /*0x7702c9*/
    *v6 = &vt_DynamicVectorClass_unsigned_int; /*0x7702ce*/
    v6[5] = 10; /*0x7702d4*/
    v6[4] = 0; /*0x7702db*/
    v6 += 6; /*0x7702de*/
    --v7; /*0x7702e1*/
  }
  while ( v7 ); /*0x7702e2*/
  *((unsigned int *)this + 235) = Timer::GetTicks(); /*0x7702f6*/
  *((unsigned int *)this + 237) = 0; /*0x7702fc*/
  *((unsigned char *)this + 952) = 1; /*0x770305*/
  *((unsigned int *)this + 239) = 0; /*0x77030c*/
  VectorClass::WstringConstructor((unsigned int *)this + 240, 0, 0); /*0x770312*/
  *((unsigned int *)this + 240) = &vt_DynamicVectorClass_Wstring; /*0x770317*/
  *((unsigned int *)this + 245) = 10; /*0x77031d*/
  *((unsigned int *)this + 244) = 0; /*0x770324*/
  *((unsigned int *)this + 246) = 0; /*0x770327*/
  Audio::GetEnabled(); /*0x77032d*/
  String::Assign((char **)&a2, g_abs_8491C4); /*0x77033b*/
  String::Reassign((char **)this + 1, (const char **)&a2); /*0x770348*/
  DeleteAndZero((void **)&a2); /*0x770351*/
  String::Assign((char **)&a2, g_abs_8491BC); /*0x77035f*/
  String::Reassign((char **)this + 38, (const char **)&a2); /*0x77036f*/
  DeleteAndZero((void **)&a2); /*0x770378*/
  String::Assign((char **)&a2, g_abs_8491B4); /*0x770386*/
  String::Reassign((char **)this + 75, (const char **)&a2); /*0x770396*/
  DeleteAndZero((void **)&a2); /*0x77039f*/
  String::Assign((char **)&a2, stru_8489C0); /*0x7703ad*/
  String::Reassign((char **)this + 112, (const char **)&a2); /*0x7703bd*/
  DeleteAndZero((void **)&a2); /*0x7703c6*/
  String::Assign((char **)&a2, g_abs_8491AC); /*0x7703d4*/
  String::Reassign((char **)this + 149, (const char **)&a2); /*0x7703e4*/
  DeleteAndZero((void **)&a2); /*0x7703ed*/
  String::Assign((char **)&a2, g_abs_8491A0); /*0x7703fb*/
  String::Reassign((char **)this + 186, (const char **)&a2); /*0x77040b*/
  DeleteAndZero((void **)&a2); /*0x770414*/
  return this; /*0x77041b*/

}
}
// 0x7B1DE0
namespace gamemd {
int WinsockInterface::Init()
{

  unsigned short *v3; // eax
  int v4; // edx
  unsigned short *v5; // esi
  int v6; // eax
  int v7; // ebp
  int *v8; // esi
  int v9; // ebx
  int v10; // eax
  unsigned short *v11; // [esp+8h] [ebp-1008h]
  int dwBufferLength; // [esp+Ch] [ebp-1004h] BYREF
  unsigned char ProtocolBuffer[24]; // [esp+10h] [ebp-1000h] BYREF
  char v14; // [esp+28h] [ebp-FE8h] BYREF

  Debug::Log(); /*0x7b1df3*/
  if ( *((unsigned char *)this + 258152) ) /*0x7b1df8*/
  {
    Debug::Log(); /*0x7b1e0a*/
    return 1; /*0x7b1e12*/
  }
  else
  {
    if ( dword_A8ED54[238803] > 0 && !LOBYTE(dword_A8ED54[238802]) ) /*0x7b1e2d*/
    {
      LOBYTE(dword_A8ED54[238802]) = 1; /*0x7b1e41*/
      ((void (*)(int, char *, char *, unsigned int))MessageBoxA)(dword_A8ED54[233983], aWarningPacketL, Caption, 0); /*0x7b1e48*/
    }
    v3 = (unsigned short *)__2_YAPAXI_Z(1424); /*0x7b1e53*/
    v4 = *this; /*0x7b1e58*/
    v5 = v3; /*0x7b1e5a*/
    v11 = v3; /*0x7b1e61*/
    *((unsigned int *)this + 64539) = -1; /*0x7b1e65*/
    (*(void (**)(unsigned int *))(v4 + 20))(this); /*0x7b1e6f*/
    (*(void (**)(unsigned int *))(*(unsigned int *)this + 96))(this); /*0x7b1e76*/
    Debug::Log(); /*0x7b1e7e*/
    if ( WSAStartup(257, v5) ) /*0x7b1e8c*/
    {
      Debug::Log(); /*0x7b1e9b*/
      __3_YAXPAX_Z(v5); /*0x7b1ea1*/
      return 0; /*0x7b1ea9*/
    }
    else
    {
      Debug::Log(); /*0x7b1eb9*/
      if ( (unsigned __int8)*v5 != 1 || (((unsigned __int16)*v5 ^ 0x100) & 0xFFFFFF00) != 0 ) /*0x7b1ee2*/
      {
        Debug::Log(); /*0x7b1fad*/
        __3_YAXPAX_Z(v5); /*0x7b1fb3*/
        return 0; /*0x7b1fbb*/
      }
      else
      {
        Debug::Log(); /*0x7b1efa*/
        *((unsigned int *)this + 1) = 546; /*0x7b1f0a*/
        dwBufferLength = 4096; /*0x7b1f18*/
        v6 = EnumProtocolsA(&iProtocols, ProtocolBuffer, &dwBufferLength); /*0x7b1f20*/
        if ( v6 == -1 ) /*0x7b1f28*/
        {
          Debug::Log(); /*0x7b1f9e*/
        }
        else
        {
          v7 = 0x7FFFFFFF; /*0x7b1f2c*/
          if ( v6 > 0 ) /*0x7b1f31*/
          {
            v8 = (int *)&v14; /*0x7b1f34*/
            v9 = v6; /*0x7b1f38*/
            do /*0x7b1f63*/
            {
              Debug::Log(); /*0x7b1f46*/
              v10 = *v8; /*0x7b1f4b*/
              if ( *v8 && v10 != -1 && v7 >= v10 ) /*0x7b1f5b*/
                v7 = *v8; /*0x7b1f5d*/
              v8 += 8; /*0x7b1f5f*/
              --v9; /*0x7b1f62*/
            }
            while ( v9 ); /*0x7b1f63*/
            if ( v7 != 0x7FFFFFFF && v7 > 400 ) /*0x7b1f74*/
              *((unsigned int *)this + 1) = v7; /*0x7b1f76*/
            v5 = v11; /*0x7b1f79*/
          }
        }
        *((unsigned char *)this + 258152) = 1; /*0x7b1f7e*/
        __3_YAXPAX_Z(v5); /*0x7b1f85*/
        return 1; /*0x7b1f8d*/
      }
    }
  }

}
}