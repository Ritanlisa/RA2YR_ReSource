// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7B1AB0
void WinsockInterfaceClass::WinsockInterfaceClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall WinsockInterfaceClass_Destructor(int this)
{
  char v2; // al
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  v2 = *(_BYTE *)(this + 258152); /*0x7b1ab6*/
  *(_DWORD *)this = &WinsockInterfaceClass::`vftable'; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync((SOCKET *)this); /*0x7b1ac6*/
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 4))(this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    *(_BYTE *)(this + 258152) = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)(this + 60); /*0x7b1ade*/
  *(_DWORD *)(this + 56) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1ae1*/
  if ( v3 && *(_BYTE *)(this + 69) ) /*0x7b1aec*/
  {
    __3_YAXPAX_Z(v3); /*0x7b1af2*/
    *(_DWORD *)(this + 60) = 0; /*0x7b1afa*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x7b1afd*/
  *(_DWORD *)(this + 64) = 0; /*0x7b1b00*/
  v4 = *(void **)(this + 36); /*0x7b1b03*/
  *(_DWORD *)(this + 32) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b06*/
  if ( v4 && *(_BYTE *)(this + 45) ) /*0x7b1b11*/
  {
    __3_YAXPAX_Z(v4); /*0x7b1b17*/
    *(_DWORD *)(this + 36) = 0; /*0x7b1b1f*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x7b1b22*/
  *(_DWORD *)(this + 40) = 0; /*0x7b1b25*/
  v5 = *(void **)(this + 12); /*0x7b1b28*/
  this->LocalAddress = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b2b*/
  if ( v5 && *(_BYTE *)(this + 21) ) /*0x7b1b36*/
  {
    __3_YAXPAX_Z(v5); /*0x7b1b3c*/
    *(_DWORD *)(this + 12) = 0; /*0x7b1b44*/
  }
  *(_BYTE *)(this + 21) = 0; /*0x7b1b47*/
  *(_DWORD *)(this + 16) = 0; /*0x7b1b4a*/
}
}

// 0x7B2750
int WinsockInterfaceClass::Destru_vt14(int a1)
{
return 0;
}

// 0x7B2760
char WinsockInterfaceClass::Destru_vt15(int a1)
{
return 0;
}

// 0x7B2770
int WinsockInterfaceClass::Destru_vt16(int a1, int a2, int a3, int a4)
{
return 1;
}

// 0x7B2780
SOCKET * WinsockInterfaceClass::Destru_vt00(SOCKET * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x7b2780
SOCKET *__thiscall WinsockInterfaceClass::Destru_vt00(SOCKET *Block, char a2)
{
  char v3; // al
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  v3 = *((_BYTE *)Block + 258152); /*0x7b2786*/
  *Block = (SOCKET)&WinsockInterfaceClass::`vftable'; /*0x7b278c*/
  if ( v3 ) /*0x7b2794*/
  {
    NetworkClass::UnregisterAsync(Block); /*0x7b2796*/
    (*(void (__thiscall **)(SOCKET *))(*Block + 4))(Block); /*0x7b27a0*/
    WSACleanup(); /*0x7b27a3*/
    *((_BYTE *)Block + 258152) = 0; /*0x7b27a8*/
  }
  v4 = (void *)*(Block + 15); /*0x7b27ae*/
  *(Block + 14) = (SOCKET)&VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27b1*/
  if ( v4 && *((_BYTE *)Block + 69) ) /*0x7b27bc*/
  {
    __3_YAXPAX_Z(v4); /*0x7b27c2*/
    *(Block + 15) = 0; /*0x7b27ca*/
  }
  *((_BYTE *)Block + 69) = 0; /*0x7b27cd*/
  *(Block + 16) = 0; /*0x7b27d0*/
  v5 = (void *)*(Block + 9); /*0x7b27d3*/
  *(Block + 8) = (SOCKET)&VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27d6*/
  if ( v5 && *((_BYTE *)Block + 45) ) /*0x7b27e1*/
  {
    __3_YAXPAX_Z(v5); /*0x7b27e7*/
    *(Block + 9) = 0; /*0x7b27ef*/
  }
  *((_BYTE *)Block + 45) = 0; /*0x7b27f2*/
  *(Block + 10) = 0; /*0x7b27f5*/
  v6 = (void *)*(Block + 3); /*0x7b27f8*/
  *(Block + 2) = (SOCKET)&VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27fb*/
  if ( v6 && *((_BYTE *)Block + 21) ) /*0x7b2806*/
  {
    __3_YAXPAX_Z(v6); /*0x7b280c*/
    *(Block + 3) = 0; /*0x7b2814*/
  }
  *((_BYTE *)Block + 21) = 0; /*0x7b281b*/
  *(Block + 4) = 0; /*0x7b2820*/
  if ( (a2 & 1) != 0 ) /*0x7b2823*/
    __3_YAXPAX_Z(Block); /*0x7b2826*/
  return Block; /*0x7b2830*/
}
}

// 0x7B2740
int WinsockInterfaceClass::Destru_vt13()
{
return 0;
}
