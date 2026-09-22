// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkClass_e4.hpp"

// 0x7B1AB0
W WinsockInterfaceClass::WinsockInterfaceClass()
{
{

  char v2 = this->q3F068; /*0x7b1ab6*/
  *(_DWORD *)this = &vt_WinsockInterfaceClass; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync((SOCKET *)this); /*0x7b1ac6*/
    (*(void (__thiscall **)(int))(this->Initialized)(this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    this->q3F068 = 0; /*0x7b1ad8*/
  }
  AbstractClass *v3 = this->q03C; /*0x7b1ade*/
  this->u32_38 = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1ae1*/
  if ( v3 && this->q045 ) /*0x7b1aec*/
  {
    __3_YAXPAX_Z(v3); /*0x7b1af2*/
    this->q03C = 0; /*0x7b1afa*/
  }
  this->q045 = 0; /*0x7b1afd*/
  this->q040 = 0; /*0x7b1b00*/
  CampaignClass *v4 = this->q024; /*0x7b1b03*/
  this->LocalAddress = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1b06*/
  if ( v4 && this->q02D ) /*0x7b1b11*/
  {
    __3_YAXPAX_Z(v4); /*0x7b1b17*/
    this->q024 = 0; /*0x7b1b1f*/
  }
  this->q02D = 0; /*0x7b1b22*/
  this->q028 = 0; /*0x7b1b25*/
  AbstractClass *v5 = this->q00C; /*0x7b1b28*/
  this->LocalAddress = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1b2b*/
  if ( v5 && this->q015 ) /*0x7b1b36*/
  {
    __3_YAXPAX_Z(v5); /*0x7b1b3c*/
    this->q00C = 0; /*0x7b1b44*/
  }
  this->q015 = 0; /*0x7b1b47*/
  this->q010 = 0; /*0x7b1b4a*/
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

// 0x7B2780
SOCKET * WinsockInterfaceClass::Destru_vt00(char a2)
{
{
    char v3;
    void *v4;
    void *v5;
    void *v6;
    v3 = this->q3F068;
    *(void**)this = (SOCKET)&vt_WinsockInterfaceClass;
    if ( v3 )
  {
    NetworkClass::UnregisterAsync(this);
    (*(void (__thiscall **)(SOCKET *))(*(void**)(this) + 4))(this);
    WSACleanup();
    this->q3F068 = 0;
  }
    v4 = (void *)*(&this->u32_45);
    *(&this->u32_44) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v4 && this->q045 )
  {
    __3_YAXPAX_Z(v4);
    *(&this->u32_45) = 0;
  }
    this->q045 = 0;
    *(&this->u32_46) = 0;
    v5 = (void *)this->ptr_24;
    this->u32_20 = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v5 && this->q02D )
  {
    __3_YAXPAX_Z(v5);
    this->ptr_24 = 0;
  }
    this->q02D = 0;
    *(&this->u32_40) = 0;
    v6 = (void *)this->u32_C;
    this->u32_8 = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v6 && this->q015 )
  {
    __3_YAXPAX_Z(v6);
    this->u32_C = 0;
  }
    this->q015 = 0;
    this->u32_10 = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
