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
    a2 = this->a2; /*0x49fb9a*/
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
  Stream_field_10 = this->Stream_field_10; /*0x67a4b9*/
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

  CCFileClass::Construct3((int)&this->u32_10); /*0x75926a*/
  this->Stream_178.CopyFromTemplate(); /*0x759275*/
  this->q52C = aP2; /*0x759282*/
  *(unsigned int *)&this->u32_1E4 = this; /*0x759288*/
  this->u32_194 = &v19; /*0x75928e*/
  this->q1B8 = 0; /*0x75929b*/
  if ( !TestBitArray(15) ) /*0x7592a1*/
    this->q1B8 |= 1u; /*0x7592af*/
  if ( !TestBitArray(1) ) /*0x7592b7*/
  {
    v9 = this->q1B8; /*0x7592c0*/
    IDA_LOBYTE(v9) = v9 | 4; /*0x7592c6*/
    this->q1B8 = v9; /*0x7592c8*/
  }
  if ( TestBitArray(10) ) /*0x7592d3*/
  {
    v10 = this->q1B8; /*0x7592dc*/
    IDA_LOBYTE(v10) = v10 | 0x40; /*0x7592e2*/
    this->q1B8 = v10; /*0x7592e4*/
  }
  if ( TestBitArray(12) ) /*0x7592ef*/
  {
    v11 = this->q1B8; /*0x7592f8*/
    IDA_LOBYTE(v11) = v11 | 0x80; /*0x7592fe*/
    this->q1B8 = v11; /*0x759300*/
  }
  v12 = *(unsigned int *)&this->u32_1BC | 8; /*0x75930c*/
  *(unsigned int *)&this->u32_1BC = v12; /*0x75930f*/
  v12 = v12; /*0x75931e*/
  if ( (*(unsigned int *)((char *)&this->q1365 + 331) & 2) != 0 ) /*0x759320*/
  {
    IDA_LOBYTE(v12) = v12 | 0x20; /*0x759322*/
    *(unsigned int *)&this->u32_1BC = v12; /*0x759324*/
    if ( (*(unsigned int *)((char *)&this->q1365 + 331) & 4) == 0 ) /*0x759333*/
      goto LABEL_14; /*0x759333*/
    IDA_BYTE1(v12) = IDA_BYTE1(v12) | 1; /*0x759335*/
  }
  else
  {
    IDA_LOBYTE(v12) = v12 & 0xDF; /*0x75933a*/
  }
  *(unsigned int *)&this->u32_1BC = v12; /*0x75933c*/
  LABEL_14:
  v14 = TestBitArray(17); /*0x759342*/
  v15 = *(unsigned int *)&this->u32_1BC; /*0x75934e*/
  if ( v14 ) /*0x759354*/
    IDA_LOBYTE(v15) = v15 | 4; /*0x759356*/
  else
    IDA_LOBYTE(v15) = v15 & 0xFB; /*0x75935a*/
  *(unsigned int *)&this->u32_1BC = v15; /*0x759361*/
  v14 = TestBitArray(3); /*0x75936c*/
  v16 = *(unsigned int *)&this->u32_1BC; /*0x75936e*/
  if ( v14 ) /*0x759374*/
    IDA_LOBYTE(v16) = v16 & 0xFE; /*0x759376*/
  else
    v16 |= 1u; /*0x75937a*/
  *(unsigned int *)&this->u32_1BC = v16; /*0x759383*/
  this->u32_198 = -1; /*0x75938d*/
  *(unsigned int *)&this->u32_19C = -1; /*0x759393*/
  *(unsigned int *)((char *)&this->u32_19C + 4) = 0; /*0x75939e*/
  this->u32_1A4 = 0; /*0x7593a4*/
  this->u32_184 = 0; /*0x7593aa*/
  this->u32_1A8 = a7; /*0x7593b0*/
  *(unsigned int *)&this->u32_1AC = a8; /*0x7593b6*/
  if ( TestBitArray(3) ) /*0x7593bc*/
    *(unsigned int *)((char *)&this->u32_1BC + 4) = 1; /*0x7593c5*/
  else
    *(unsigned int *)((char *)&this->u32_1BC + 4) = 14; /*0x7593cd*/
  v17 = *(unsigned int *)((char *)&this->q1365 + 331); /*0x7593d7*/
  *(unsigned int *)&this->u32_1C4 = -1; /*0x7593dd*/
  if ( (v17 & 1) != 0 ) /*0x7593e5*/
    this->u32_178 = sub_75A2B0; /*0x7593e7*/
  else
    this->u32_178 = sub_75A100; /*0x7593f3*/
  *(unsigned int *)&this->u32_17C = sub_75A2F0; /*0x759402*/
  *(unsigned int *)((char *)&this->u32_17C + 4) = sub_75A350; /*0x75940c*/
  if ( TestBitArray(4) ) /*0x759416*/
  {
    *(unsigned int *)&this->u32_188 = j_Time_GetElapsedMS; /*0x75941f*/
    *(unsigned int *)((char *)&this->u32_1AC + 4) = 60; /*0x759429*/
  }
  else
  {
    *(unsigned int *)&this->u32_188 = sub_4116A0; /*0x759435*/
    *(unsigned int *)((char *)&this->u32_1AC + 4) = 60; /*0x75943f*/
    *(unsigned int *)&this->u32_1FC = (uint16_t)dword_A8EBA8; /*0x759455*/
  }
  this->u32_190 = (unsigned int)(ManageMultimediaTimer);
  *(unsigned int *)&this->u32_1D4 = 0x2000; /*0x75946d*/
  this->u32_504 = 0; /*0x759477*/
  this->u32_54C = 0; /*0x75947d*/
  *(unsigned int *)&this->q508 = 0; /*0x759483*/
  strcpy(((char *)&this->q070 + 1), a1); /*0x75949f*/
  this->u32_548 = aP5; /*0x7594b0*/
  this->q518 = 0; /*0x7594b7*/
  this->u32_51C = 0; /*0x7594bd*/
  this->u32_520 = 0; /*0x7594c3*/
  this->u32_524 = 0; /*0x7594c9*/
  this->u32_510 = -1; /*0x7594cf*/
  *(unsigned int *)((char *)&this->q1365 + 315) = 0; /*0x7594d9*/
  this->u32_540 = a4; /*0x7594df*/
  this->u32_544 = a5; /*0x7594e5*/
  *(unsigned int *)((char *)&this->u32_1BC + 4) = 0; /*0x7594eb*/
  *(unsigned int *)((char *)&this->q1365 + 235) = 0; /*0x7594ee*/
  *(unsigned int *)((char *)&this->q1365 + 475) = 0; /*0x7594f4*/
  *(unsigned int *)((char *)&this->q1365 + 479) = 0; /*0x7594fa*/
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