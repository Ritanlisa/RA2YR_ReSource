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
  *(_DWORD *)this = &vt_WinsockInterfaceClass; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync((SOCKET *)this); /*0x7b1ac6*/
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 4))(this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    *(_BYTE *)(this + 258152) = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)(this + 60); /*0x7b1ade*/
  *(_DWORD *)(this + 56) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1ae1*/
  if ( v3 && *(_BYTE *)(this + 69) ) /*0x7b1aec*/
  {
    __3_YAXPAX_Z(v3); /*0x7b1af2*/
    *(_DWORD *)(this + 60) = 0; /*0x7b1afa*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x7b1afd*/
  *(_DWORD *)(this + 64) = 0; /*0x7b1b00*/
  v4 = *(void **)(this + 36); /*0x7b1b03*/
  *(_DWORD *)(this + 32) = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1b06*/
  if ( v4 && *(_BYTE *)(this + 45) ) /*0x7b1b11*/
  {
    __3_YAXPAX_Z(v4); /*0x7b1b17*/
    *(_DWORD *)(this + 36) = 0; /*0x7b1b1f*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x7b1b22*/
  *(_DWORD *)(this + 40) = 0; /*0x7b1b25*/
  v5 = *(void **)(this + 12); /*0x7b1b28*/
  this->LocalAddress = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1b2b*/
  if ( v5 && *(_BYTE *)(this + 21) ) /*0x7b1b36*/
  {
    __3_YAXPAX_Z(v5); /*0x7b1b3c*/
    *(_DWORD *)(this + 12) = 0; /*0x7b1b44*/
  }
  *(_BYTE *)(this + 21) = 0; /*0x7b1b47*/
  *(_DWORD *)(this + 16) = 0; /*0x7b1b4a*/
}
}

// 0x7B2780
SOCKET * WinsockInterfaceClass::Destru_vt00(char a2)
{
{
    char v3;
    void *v4;
    void *v5;
    void *v6;
    v3 = *((char *)(this) + 258152);
    *(void**)this = (SOCKET)&vt_WinsockInterfaceClass;
    if ( v3 )
  {
    NetworkClass::UnregisterAsync(this);
    (*(void (__thiscall **)(SOCKET *))(*(void**)(this) + 4))(this);
    WSACleanup();
    *((char *)(this) + 258152) = 0;
  }
    v4 = (void *)*(this + 15);
    *(this + 14) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v4 && *((char *)(this) + 69) )
  {
    __3_YAXPAX_Z(v4);
    *(this + 15) = 0;
  }
    *((char *)(this) + 69) = 0;
    *(this + 16) = 0;
    v5 = (void *)*(this + 9);
    *(this + 8) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v5 && *((char *)(this) + 45) )
  {
    __3_YAXPAX_Z(v5);
    *(this + 9) = 0;
  }
    *((char *)(this) + 45) = 0;
    *(this + 10) = 0;
    v6 = (void *)*(this + 3);
    *(this + 2) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v6 && *((char *)(this) + 21) )
  {
    __3_YAXPAX_Z(v6);
    *(this + 3) = 0;
  }
    *((char *)(this) + 21) = 0;
    *(this + 4) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x7B2740
int WinsockInterfaceClass::Destru_vt13()
{
return 0;
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
