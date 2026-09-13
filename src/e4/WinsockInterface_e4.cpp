// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"

// 0x770270
namespace gamemd {
char * WinsockInterface::ProcessPacket(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_770270(char *this, int a2)
{
  int v3; // ebp
  void **v4; // edi
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebp

  v3 = 6; /*0x77027a*/
  v4 = (void **)(this + 4); /*0x77027f*/
  *(_DWORD *)this = a2; /*0x770282*/
  v5 = (int)(this + 8); /*0x770284*/
  do /*0x7702b6*/
  {
    unknown_libname_73(v4); /*0x770289*/
    Array::ForEach(v5, 24, 6, (int (__thiscall *)(int))sub_7719E0); /*0x770298*/
    String::Assign_Alt(v4, &MEMORY[0x889F64]); /*0x7702a4*/
    v4 += 37; /*0x7702a9*/
    v5 += 148; /*0x7702af*/
    --v3; /*0x7702b5*/
  }
  while ( v3 ); /*0x7702b6*/
  v6 = this + 892; /*0x7702b8*/
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
  *((_DWORD *)this + 235) = Timer::GetTicks(); /*0x7702f6*/
  *((_DWORD *)this + 237) = 0; /*0x7702fc*/
  *(this + 952) = 1; /*0x770305*/
  *((_DWORD *)this + 239) = 0; /*0x77030c*/
  VectorClass::WstringConstructor((_DWORD *)this + 240, 0, 0); /*0x770312*/
  *((_DWORD *)this + 240) = &vt_DynamicVectorClass_Wstring; /*0x770317*/
  *((_DWORD *)this + 245) = 10; /*0x77031d*/
  *((_DWORD *)this + 244) = 0; /*0x770324*/
  *((_DWORD *)this + 246) = 0; /*0x770327*/
  Audio::GetEnabled(); /*0x77032d*/
  String::Assign((char **)&a2, MEMORY[0x8491C4]); /*0x77033b*/
  String::Reassign((char **)this + 1, (const char **)&a2); /*0x770348*/
  DeleteAndZero((void **)&a2); /*0x770351*/
  String::Assign((char **)&a2, MEMORY[0x8491BC]); /*0x77035f*/
  String::Reassign((char **)this + 38, (const char **)&a2); /*0x77036f*/
  DeleteAndZero((void **)&a2); /*0x770378*/
  String::Assign((char **)&a2, MEMORY[0x8491B4]); /*0x770386*/
  String::Reassign((char **)this + 75, (const char **)&a2); /*0x770396*/
  DeleteAndZero((void **)&a2); /*0x77039f*/
  String::Assign((char **)&a2, stru_8489C0); /*0x7703ad*/
  String::Reassign((char **)this + 112, (const char **)&a2); /*0x7703bd*/
  DeleteAndZero((void **)&a2); /*0x7703c6*/
  String::Assign((char **)&a2, MEMORY[0x8491AC]); /*0x7703d4*/
  String::Reassign((char **)this + 149, (const char **)&a2); /*0x7703e4*/
  DeleteAndZero((void **)&a2); /*0x7703ed*/
  String::Assign((char **)&a2, MEMORY[0x8491A0]); /*0x7703fb*/
  String::Reassign((char **)this + 186, (const char **)&a2); /*0x77040b*/
  DeleteAndZero((void **)&a2); /*0x770414*/
  return this; /*0x77041b*/
}
}
} // namespace gamemd

// 0x7B1DE0
namespace gamemd {
char WinsockInterface::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WinsockInterface_Init(_DWORD *this)
{
  struct WSAData *v3; // eax
  int v4; // edx
  struct WSAData *v5; // esi
  int v6; // eax
  INT v7; // eax
  int v8; // ebp
  const char **v9; // esi
  INT v10; // ebx
  int v11; // eax
  struct WSAData *v12; // [esp+8h] [ebp-1008h]
  DWORD dwBufferLength; // [esp+Ch] [ebp-1004h] BYREF
  _BYTE ProtocolBuffer[24]; // [esp+10h] [ebp-1000h] BYREF
  char v15; // [esp+28h] [ebp-FE8h] BYREF

  Debug::Log(MEMORY[0x84E028]); /*0x7b1df3*/
  if ( *((_BYTE *)this + 258152) ) /*0x7b1df8*/
  {
    Debug::Log(MEMORY[0x84E000]); /*0x7b1e0a*/
    return 1; /*0x7b1e12*/
  }
  else
  {
    if ( dword_B780A0 > 0 && !byte_B7809C ) /*0x7b1e2d*/
    {
      byte_B7809C = 1; /*0x7b1e41*/
      MessageBoxA(g_hWnd, MEMORY[0x84DFD0], MEMORY[0x81FCC8], 0); /*0x7b1e48*/
    }
    v3 = (struct WSAData *)__2_YAPAXI_Z(0x590u); /*0x7b1e53*/
    v4 = *this; /*0x7b1e58*/
    v5 = v3; /*0x7b1e5a*/
    v12 = v3; /*0x7b1e61*/
    *(this + 64539) = -1; /*0x7b1e65*/
    (*(void (__thiscall **)(_DWORD *))(v4 + 20))(this); /*0x7b1e6f*/
    (*(void (__thiscall **)(_DWORD *))(*this + 24))(this); /*0x7b1e76*/
    Debug::Log(MEMORY[0x84DFB4]); /*0x7b1e7e*/
    v6 = WSAStartup(0x101u, v5); /*0x7b1e8c*/
    if ( v6 ) /*0x7b1e93*/
    {
      Debug::Log(MEMORY[0x84DF84], v6); /*0x7b1e9b*/
      __3_YAXPAX_Z(v5); /*0x7b1ea1*/
      return 0; /*0x7b1ea9*/
    }
    else
    {
      Debug::Log(MEMORY[0x84DF6C]); /*0x7b1eb9*/
      if ( (unsigned __int8)v5->wVersion != 1 || ((v5->wVersion ^ 0x100) & 0xFFFFFF00) != 0 ) /*0x7b1ee2*/
      {
        Debug::Log(MEMORY[0x84DEDC]); /*0x7b1fad*/
        __3_YAXPAX_Z(v5); /*0x7b1fb3*/
        return 0; /*0x7b1fbb*/
      }
      else
      {
        Debug::Log(MEMORY[0x84DF50], (unsigned __int8)v5->wVersion, HIBYTE(v5->wVersion)); /*0x7b1efa*/
        *(this + 1) = 546; /*0x7b1f0a*/
        dwBufferLength = 4096; /*0x7b1f18*/
        v7 = EnumProtocolsA(&iProtocols, ProtocolBuffer, &dwBufferLength); /*0x7b1f20*/
        if ( v7 == -1 ) /*0x7b1f28*/
        {
          Debug::Log(MEMORY[0x84DF00]); /*0x7b1f9e*/
        }
        else
        {
          v8 = 0x7FFFFFFF; /*0x7b1f2c*/
          if ( v7 > 0 ) /*0x7b1f31*/
          {
            v9 = (const char **)&v15; /*0x7b1f34*/
            v10 = v7; /*0x7b1f38*/
            do /*0x7b1f63*/
            {
              Debug::Log(MEMORY[0x84DF24], v9[1], *v9); /*0x7b1f46*/
              v11 = (int)*v9; /*0x7b1f4b*/
              if ( *v9 && v11 != -1 && v8 >= v11 ) /*0x7b1f5b*/
                v8 = (int)*v9; /*0x7b1f5d*/
              v9 += 8; /*0x7b1f5f*/
              --v10; /*0x7b1f62*/
            }
            while ( v10 ); /*0x7b1f63*/
            if ( v8 != 0x7FFFFFFF && v8 > 400 ) /*0x7b1f74*/
              *(this + 1) = v8; /*0x7b1f76*/
            v5 = v12; /*0x7b1f79*/
          }
        }
        *((_BYTE *)this + 258152) = 1; /*0x7b1f7e*/
        __3_YAXPAX_Z(v5); /*0x7b1f85*/
        return 1; /*0x7b1f8d*/
      }
    }
  }
}
}
} // namespace gamemd
