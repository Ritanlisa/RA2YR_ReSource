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
#include "e4/classes/E4Recv_7ACB90_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

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
  *((unsigned int *)this + 12) = 45; /*0x439119*/
  ((void (*)(void))m_Stream->m_Size)(); /*0x439120*/
  ((void (*)(Stream *, int, unsigned int))v1->m_Stream->m_Position)(v1, Stream_field_08, 0); /*0x43912a*/
  Stream_field_04 = (int)(v1[1].Stream_field_04); /*0x43912d*/
  Stream_field_0C = v1[1].Stream_field_0C; /*0x439130*/
  v1 = (Stream *)((char *)v1 + 24); /*0x439133*/
  (*(void (**)(Stream *))(Stream_field_04 + 12))(v1); /*0x439138*/
  return ((int (*)(Stream *, int, unsigned int))v1->m_Stream->m_Position)(v1, Stream_field_0C, 0); /*0x439145*/

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
  result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 16))( /*0x49fb84*/
             a2,
             &this->Stream_field_10,
             4,
             0);
  if ( result >= 0 ) /*0x49fb89*/
  {
    v5 = *(unsigned int *)v2; /*0x49fb8e*/
    a2 = this->a2; /*0x49fb9a*/
    result = (*(int (**)(int, int *, int, unsigned int))(v5 + 16))(v2, &a2, 4, 0); /*0x49fb9e*/
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
          result = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)v2 + 16))( /*0x49fbbd*/
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
  (*(void ((int *)(**))(int *, int *, int, unsigned int))(v3 + 16))(aP1, &Stream_field_10, 4, 0); /*0x67a4bd*/
  result = Stream_field_10; /*0x67a4c0*/
  for ( i = 0; i < Stream_field_10; ++i ) /*0x67a4c8*/
  {
    (*(void (**)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->Stream_field_04 + 4 * i, 4, 0); /*0x67a4d8*/
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
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  char v17; // al
  char v19; // [esp+13h] [ebp-1h] BYREF

  CCFileClass::Construct3((int)((unsigned char *)this + 4)); /*0x75926a*/
  Stream::CopyFromTemplate((unsigned char *)this + 376); /*0x759275*/
  *((unsigned int *)this + 331) = (unsigned int)(aP2); /*0x759282*/
  *((unsigned int *)this + 121) = (unsigned int)(this); /*0x759288*/
  *((unsigned int *)this + 101) = (unsigned int)(&v19); /*0x75928e*/
  *((unsigned int *)this + 110) = 0; /*0x75929b*/
  if ( !TestBitArray(15) ) /*0x7592a1*/
    *((unsigned int *)this + 110) |= 1u; /*0x7592af*/
  if ( !TestBitArray(1) ) /*0x7592b7*/
  {
    v9 = *((unsigned int *)this + 110); /*0x7592c0*/
    LOBYTE(v9) = v9 | 4; /*0x7592c6*/
    *((unsigned int *)this + 110) = v9; /*0x7592c8*/
  }
  if ( TestBitArray(10) ) /*0x7592d3*/
  {
    v10 = *((unsigned int *)this + 110); /*0x7592dc*/
    LOBYTE(v10) = v10 | 0x40; /*0x7592e2*/
    *((unsigned int *)this + 110) = v10; /*0x7592e4*/
  }
  if ( TestBitArray(12) ) /*0x7592ef*/
  {
    v11 = *((unsigned int *)this + 110); /*0x7592f8*/
    LOBYTE(v11) = v11 | 0x80; /*0x7592fe*/
    *((unsigned int *)this + 110) = v11; /*0x759300*/
  }
  v12 = *((unsigned int *)this + 111) | 8; /*0x75930c*/
  *((unsigned int *)this + 111) = v12; /*0x75930f*/
  v13 = v12; /*0x75931e*/
  if ( (*((unsigned char *)this + 1324) & 2) != 0 ) /*0x759320*/
  {
    LOBYTE(v13) = v12 | 0x20; /*0x759322*/
    *((unsigned int *)this + 111) = v13; /*0x759324*/
    if ( (*((unsigned char *)this + 1324) & 4) == 0 ) /*0x759333*/
      goto LABEL_14; /*0x759333*/
    BYTE1(v13) = BYTE1(v12) | 1; /*0x759335*/
  }
  else
  {
    LOBYTE(v13) = v12 & 0xDF; /*0x75933a*/
  }
  *((unsigned int *)this + 111) = v13; /*0x75933c*/
LABEL_14:
  v14 = TestBitArray(17); /*0x759342*/
  v15 = *((unsigned int *)this + 111); /*0x75934e*/
  if ( v14 ) /*0x759354*/
    LOBYTE(v15) = v15 | 4; /*0x759356*/
  else
    LOBYTE(v15) = v15 & 0xFB; /*0x75935a*/
  *((unsigned int *)this + 111) = v15; /*0x759361*/
  v14 = (unsigned int)(TestBitArray(3));
  v16 = *((unsigned int *)this + 111); /*0x75936e*/
  if ( v14 ) /*0x759374*/
    LOBYTE(v16) = v16 & 0xFE; /*0x759376*/
  else
    v16 |= 1u; /*0x75937a*/
  *((unsigned int *)this + 111) = v16; /*0x759383*/
  *((unsigned int *)this + 102) = -1; /*0x75938d*/
  *((unsigned int *)this + 103) = -1; /*0x759393*/
  *((unsigned int *)this + 104) = 0; /*0x75939e*/
  *((unsigned int *)this + 105) = 0; /*0x7593a4*/
  *((unsigned int *)this + 97) = 0; /*0x7593aa*/
  *((unsigned int *)this + 106) = a7; /*0x7593b0*/
  *((unsigned int *)this + 107) = a8; /*0x7593b6*/
  if ( TestBitArray(3) ) /*0x7593bc*/
    *((unsigned int *)this + 112) = 1; /*0x7593c5*/
  else
    *((unsigned int *)this + 112) = 14; /*0x7593cd*/
  v17 = *((unsigned char *)this + 1324); /*0x7593d7*/
  *((unsigned int *)this + 113) = -1; /*0x7593dd*/
  if ( (v17 & 1) != 0 ) /*0x7593e5*/
    *((unsigned int *)this + 94) = (unsigned int)(sub_75A2B0); /*0x7593e7*/
  else
    *((unsigned int *)this + 94) = (unsigned int)(sub_75A100); /*0x7593f3*/
  *((unsigned int *)this + 95) = (unsigned int)(sub_75A2F0); /*0x759402*/
  *((unsigned int *)this + 96) = (unsigned int)(sub_75A350); /*0x75940c*/
  if ( TestBitArray(4) ) /*0x759416*/
  {
    *((unsigned int *)this + 98) = j_Time_GetElapsedMS; /*0x75941f*/
    *((unsigned int *)this + 108) = 60; /*0x759429*/
  }
  else
  {
    *((unsigned int *)this + 98) = (unsigned int)(sub_4116A0); /*0x759435*/
    *((unsigned int *)this + 108) = 60; /*0x75943f*/
    *((unsigned int *)this + 127) = (uint16_t)unk_A8EBA8; /*0x759455*/
  }
  *((unsigned int *)this + 100) = (unsigned int)(ManageMultimediaTimer); /*0x759463*/
  *((unsigned int *)this + 117) = 0x2000; /*0x75946d*/
  *((unsigned int *)this + 321) = 0; /*0x759477*/
  *((unsigned int *)this + 339) = 0; /*0x75947d*/
  *((unsigned int *)this + 322) = 0; /*0x759483*/
  strcpy((char *)((unsigned char *)this + 113), a1); /*0x75949f*/
  *((unsigned int *)this + 338) = (unsigned int)(aP5); /*0x7594b0*/
  *((unsigned int *)this + 326) = 0; /*0x7594b7*/
  *((unsigned int *)this + 327) = 0; /*0x7594bd*/
  *((unsigned int *)this + 328) = 0; /*0x7594c3*/
  *((unsigned int *)this + 329) = 0; /*0x7594c9*/
  *((unsigned int *)this + 324) = -1; /*0x7594cf*/
  *((unsigned char *)this + 1320) = 0; /*0x7594d9*/
  *((unsigned int *)this + 336) = a4; /*0x7594df*/
  *((unsigned int *)this + 337) = a5; /*0x7594e5*/
  *((unsigned char *)this + 112) = 0; /*0x7594eb*/
  *((unsigned char *)this + 1300) = 0; /*0x7594ee*/
  *((unsigned char *)this + 1360) = 0; /*0x7594f4*/
  *((unsigned char *)this + 1361) = 0; /*0x7594fa*/
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