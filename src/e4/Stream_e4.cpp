// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x439110
namespace gamemd {
int Stream::FlushAndReset()
{
  Stream *v1; // esi
  StreamClass *m_Stream; // eax
  int Stream_field_08; // edi
  int Stream_field_04; // eax
  int Stream_field_0C; // edi
v1 = (gamemd::Stream *)((int)(this));
  m_Stream = (gamemd::StreamClass *)((int)(this->m_Stream));
  Stream_field_08 = (int)(this->Stream_field_08);
  this->Stream_field_0C = (int)(45);
  ((void (*)(void))m_Stream->m_Size)(); /*0x439120*/
  ((void (__thiscall *)(Stream *, int, unsigned int))v1->m_Stream->m_Position)(v1, Stream_field_08, 0); /*0x43912a*/
  Stream_field_04 = v1[1].Stream_field_04; /*0x43912d*/
  Stream_field_0C = v1[1].Stream_field_0C; /*0x439130*/
  v1 = (Stream *)((char *)v1 + 24); /*0x439133*/
  (*(void (**)(Stream *))(Stream_field_04 + 12))(v1); /*0x439138*/
  return ((int (__thiscall *)(Stream *, int, unsigned int))v1->m_Stream->m_Position)(v1, Stream_field_0C, 0); /*0x439145*/
}
} // namespace gamemd
// 0x49FB70
namespace gamemd {
int Stream::ReadIntArray(int a2)
{
  int v2; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx

  v2 = a2; /*0x49fb72*/
  result = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 16))( /*0x49fb84*/
             a2,
             &this->Stream_field_10,
             4,
             0);
  if ( result >= 0 ) /*0x49fb89*/
  {
    v5 = *(unsigned int *)v2; /*0x49fb8e*/
        a2 = *((unsigned int *)this + 8);
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(v5 + 16))(v2, &a2, 4, 0); /*0x49fb9e*/
    if ( result >= 0 ) /*0x49fba3*/
    {
      v6 = 0; /*0x49fba9*/
      if ( a2 <= 0 ) /*0x49fbad*/
      {
        return 0; /*0x49fbcd*/
      }
      else
      {
        while ( 1 ) /*0x49fbbd*/
        {
          result = (*(int (__stdcall **)(int, int, int, unsigned int))(*(unsigned int *)v2 + 16))( /*0x49fbbd*/
                     v2,
                     this->Stream_field_04 + 4 * v6,
                     4,
                     0);
          if ( result < 0 ) /*0x49fbc2*/
            break; /*0x49fbc2*/
          if ( ++v6 >= a2 ) /*0x49fbcb*/
            return 0; /*0x49fbcb*/
        }
      }
    }
  }
  return result; /*0x49fbcf*/
}
} // namespace gamemd
// 0x67A4A0
namespace gamemd {
int Stream::WriteIntArray(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Stream_field_10; // [esp+20h] [ebp-4h] BYREF
v3 = (int)(*aP1);
    v6 = *((unsigned int *)this + 16);
  aP1->IsClean(&Stream_field_10, 4, 0); /*0x67a4bd*/
  result = Stream_field_10; /*0x67a4c0*/
  for ( i = 0; i < Stream_field_10; ++i ) /*0x67a4c8*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->Stream_field_04 + 4 * i, 4, 0); /*0x67a4d8*/
    result = Stream_field_10; /*0x67a4db*/
  }
  return result; /*0x67a4e4*/
}
} // namespace gamemd
// 0x759260
namespace gamemd {
void * Stream::InitializeBinkAudio(const char * a1, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  char v17; // al
  char v19; // [esp+13h] [ebp-1h] BYREF

    CCFileClass::Construct3((int)((char *)this + 16));
    Stream::CopyFromTemplate((char *)this + 1504);
    *((unsigned int *)this + 331) = aP2;
    *((unsigned int *)this + 121) = this;
    *((unsigned int *)this + 101) = &v19;
    *((unsigned int *)this + 110) = 0;
  if ( !TestBitArray(15) ) /*0x7592a1*/
        *((unsigned int *)this + 110) |= 1u;
  if ( !TestBitArray(1) ) /*0x7592b7*/
  {
        v9 = *((unsigned int *)this + 110);
    IDA_LOBYTE(v9) = v9 | 4; /*0x7592c6*/
        *((unsigned int *)this + 110) = v9;
  }
  if ( TestBitArray(10) ) /*0x7592d3*/
  {
        v10 = *((unsigned int *)this + 110);
    IDA_LOBYTE(v10) = v10 | 0x40; /*0x7592e2*/
        *((unsigned int *)this + 110) = v10;
  }
  if ( TestBitArray(12) ) /*0x7592ef*/
  {
        v11 = *((unsigned int *)this + 110);
    IDA_LOBYTE(v11) = v11 | 0x80; /*0x7592fe*/
        *((unsigned int *)this + 110) = v11;
  }
    v12 = *((unsigned int *)this + 111) | 8;
    *((unsigned int *)this + 111) = v12;
  v12 = v12; /*0x75931e*/
    if ( (*((unsigned int *)this + 5296) & 2) != 0 )
  {
    IDA_LOBYTE(v12) = v12 | 0x20; /*0x759322*/
        *((unsigned int *)this + 111) = v13;
        if ( (*((unsigned int *)this + 5296) & 4) == 0 )
      goto LABEL_14; /*0x759333*/
    IDA_BYTE1(v12) = IDA_BYTE1(v12) | 1; /*0x759335*/
  }
  else
  {
    IDA_LOBYTE(v12) = v12 & 0xDF; /*0x75933a*/
  }
    *((unsigned int *)this + 111) = v13;
  LABEL_14:
  v14 = TestBitArray(17); /*0x759342*/
    v15 = *((unsigned int *)this + 111);
  if ( v14 ) /*0x759354*/
    IDA_LOBYTE(v15) = v15 | 4; /*0x759356*/
  else
    IDA_LOBYTE(v15) = v15 & 0xFB; /*0x75935a*/
    *((unsigned int *)this + 111) = v15;
  v14 = TestBitArray(3); /*0x75936c*/
    v16 = *((unsigned int *)this + 111);
  if ( v14 ) /*0x759374*/
    IDA_LOBYTE(v16) = v16 & 0xFE; /*0x759376*/
  else
    v16 |= 1u; /*0x75937a*/
    *((unsigned int *)this + 111) = v16;
    *((unsigned int *)this + 102) = -1;
    *((unsigned int *)this + 103) = -1;
    *((unsigned int *)this + 104) = 0;
    *((unsigned int *)this + 105) = 0;
    *((unsigned int *)this + 97) = 0;
    *((unsigned int *)this + 106) = a7;
    *((unsigned int *)this + 107) = a8;
  if ( TestBitArray(3) ) /*0x7593bc*/
        *((unsigned int *)this + 112) = 1;
  else
        *((unsigned int *)this + 112) = 14;
    v17 = *((unsigned int *)this + 5296);
    *((unsigned int *)this + 113) = -1;
  if ( (v17 & 1) != 0 ) /*0x7593e5*/
        *((unsigned int *)this + 94) = sub_75A2B0;
  else
        *((unsigned int *)this + 94) = sub_75A100;
    *((unsigned int *)this + 95) = sub_75A2F0;
    *((unsigned int *)this + 96) = sub_75A350;
  if ( TestBitArray(4) ) /*0x759416*/
  {
        *((unsigned int *)this + 98) = j_Time_GetElapsedMS;
        *((unsigned int *)this + 108) = 60;
  }
  else
  {
        *((unsigned int *)this + 98) = sub_4116A0;
        *((unsigned int *)this + 108) = 60;
        *((unsigned int *)this + 127) = *(unsigned __int16 *)&MEMORY[0xA8D63C].__pad_14B0[188];
  }
  this->u32_190 = (unsigned int)(ManageMultimediaTimer);
    *((unsigned int *)this + 117) = 0x2000;
    *((unsigned int *)this + 321) = 0;
    *((unsigned int *)this + 339) = 0;
    *((unsigned int *)this + 322) = 0;
    strcpy((char *)this + 452, a1);
    *((unsigned int *)this + 338) = aP5;
    *((unsigned int *)this + 326) = 0;
    *((unsigned int *)this + 327) = 0;
    *((unsigned int *)this + 328) = 0;
    *((unsigned int *)this + 329) = 0;
    *((unsigned int *)this + 324) = -1;
    *((unsigned int *)this + 5280) = 0;
    *((unsigned int *)this + 336) = a4;
    *((unsigned int *)this + 337) = a5;
    *((unsigned int *)this + 448) = 0;
    *((unsigned int *)this + 5200) = 0;
    *((unsigned int *)this + 5440) = 0;
    *((unsigned int *)this + 5444) = 0;
  *(unsigned int *)this = 0; /*0x759500*/
  return this; /*0x7594b6*/
}
} // namespace gamemd
// 0x45A050
namespace gamemd {
int Stream::GetChecked()
{
  if ( !this->m_Stream ) /*0x45a053*/
    WinAPI::Wrapper(-2147467261); /*0x45a05d*/
  return (int)this->m_Stream->__pad_0; /*0x45a064*/
}
} // namespace gamemd