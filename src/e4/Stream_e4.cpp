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
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int j_Time_GetElapsedMS(); }  // x4:empty@0x412540

// 0x439110
namespace gamemd {  // G42.18 ns repair
int Stream::FlushAndReset()
{


  Stream *v1 = this; // esi /*0x439111*/
  StreamClass *m_Stream; // eax
  m_Stream = this->m_Stream; /*0x439114*/
  int Stream_field_08; // edi
  Stream_field_08 = this->Stream_field_08; /*0x439116*/
  this->u32_30 = 45; /*0x439119*/
  ((void (*)(void))m_Stream->m_Size)(); /*0x439120*/
  ((void (*)(Stream *, int, unsigned int))v1->m_Stream->m_Position)(v1, Stream_field_08, 0); /*0x43912a*/
  int Stream_field_04; // eax
  Stream_field_04 = (int)(v1[1].Stream_field_04); /*0x43912d*/
  int Stream_field_0C; // edi
  Stream_field_0C = (int)(v1[1].Stream_field_0C); /*0x439130*/
  v1 = &v1->u32_18; /*0x439133*/
  (*(void (**)(Stream *))(Stream_field_04 + 12))(v1); /*0x439138*/
  return ((int (*)(Stream *, int, unsigned int))v1->m_Stream->m_Position)(v1, Stream_field_0C, 0); /*0x439145*/

}
} // namespace gamemd
// 0x49FB70
namespace gamemd {
int Stream::ReadIntArray(int a2)
{

  unsigned int *v2; // esi
  int result; // eax
  unsigned int v5; // eax
  int v6; // ebx

  v2 = (unsigned int *)a2; /*0x49fb72*/
  result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 16))( /*0x49fb84*/
             a2,
             &this->Stream_field_10,
             4,
             0);
  if ( result >= 0 ) /*0x49fb89*/
  {
    v5 = *v2; /*0x49fb8e*/
    a2 = this->a2; /*0x49fb9a*/
    result = (*(int (**)(unsigned int *, int *, int, unsigned int))(v5 + 16))(v2, &a2, 4, 0); /*0x49fb9e*/
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
          result = (*(int (**)(unsigned int *, int, int, unsigned int))(*v2 + 16))( /*0x49fbbd*/
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
  v3 = (int)(*aP1); /*0x67a4ac*/
  int Stream_field_10; // [esp+20h] [ebp-4h] BYREF
  Stream_field_10 = this->Stream_field_10; /*0x67a4b9*/
  (*(void (**)(int *, int *, int, unsigned int))(v3 + 16))(aP1, &Stream_field_10, 4, 0); /*0x67a4bd*/
  int result = Stream_field_10; // eax /*0x67a4c0*/
  int i; // esi
  for ( i = 0; i < Stream_field_10; ++i ) /*0x67a4c8*/
  {
    aP1->IsClean(this->Stream_field_04 + 4 * i, 4, 0); /*0x67a4d8*/
    result = Stream_field_10; /*0x67a4db*/
  }
  return result; /*0x67a4e4*/

}
} // namespace gamemd
// 0x759260
namespace gamemd {
char * Stream::InitializeBinkAudio(const char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
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

  CCFileClass::Construct3((int)(&this->Stream_field_04)); /*0x75926a*/
  Stream::CopyFromTemplate(&this->u32_178); /*0x759275*/
  this->u32_52C = a3; /*0x759282*/
  this->u32_1E4 = (unsigned int)(this); /*0x759288*/
  this->u32_194 = (unsigned int)(&v19); /*0x75928e*/
  this->u32_1B8 = 0; /*0x75929b*/
  if ( !TestBitArray(15) ) /*0x7592a1*/
    this->u32_1B8 |= 1u; /*0x7592af*/
  if ( !TestBitArray(1) ) /*0x7592b7*/
  {
    v9 = this->u32_1B8; /*0x7592c0*/
    (v9) = ((v9) & ~0xFF) | ((v9 | 4) & 0xFF); /*0x7592c6*/
    this->u32_1B8 = v9; /*0x7592c8*/
  }
  if ( TestBitArray(10) ) /*0x7592d3*/
  {
    v10 = this->u32_1B8; /*0x7592dc*/
    (v10) = ((v10) & ~0xFF) | ((v10 | 0x40) & 0xFF); /*0x7592e2*/
    this->u32_1B8 = v10; /*0x7592e4*/
  }
  if ( TestBitArray(12) ) /*0x7592ef*/
  {
    v11 = this->u32_1B8; /*0x7592f8*/
    (v11) = ((v11) & ~0xFF) | ((v11 | 0x80) & 0xFF); /*0x7592fe*/
    this->u32_1B8 = v11; /*0x759300*/
  }
  v12 = this->u32_1BC | 8; /*0x75930c*/
  this->u32_1BC = v12; /*0x75930f*/
  v13 = v12; /*0x75931e*/
  if ( (this->u32_52C & 2) != 0 ) /*0x759320*/
  {
    (v13) = ((v13) & ~0xFF) | ((v12 | 0x20) & 0xFF); /*0x759322*/
    this->u32_1BC = v13; /*0x759324*/
    if ( (this->u32_52C & 4) == 0 ) /*0x759333*/
      goto LABEL_14; /*0x759333*/
    (v13) = ((v13) & ~(0xFF << 8)) | ((((((v12) >> 8) & 0xFF) | 1) & 0xFF) << 8); /*0x759335*/
  }
  else
  {
    (v13) = ((v13) & ~0xFF) | ((v12 & 0xDF) & 0xFF); /*0x75933a*/
  }
  this->u32_1BC = v13; /*0x75933c*/
  LABEL_14:
  v14 = TestBitArray(17); /*0x759342*/
  v15 = this->u32_1BC; /*0x75934e*/
  if ( v14 ) /*0x759354*/
    (v15) = ((v15) & ~0xFF) | ((v15 | 4) & 0xFF); /*0x759356*/
  else
    (v15) = ((v15) & ~0xFF) | ((v15 & 0xFB) & 0xFF); /*0x75935a*/
  this->u32_1BC = v15; /*0x759361*/
  v14 = TestBitArray(3); /*0x75936c*/
  v16 = this->u32_1BC; /*0x75936e*/
  if ( v14 ) /*0x759374*/
    (v16) = ((v16) & ~0xFF) | ((v16 & 0xFE) & 0xFF); /*0x759376*/
  else
    v16 |= 1u; /*0x75937a*/
  this->u32_1BC = v16; /*0x759383*/
  this->u32_198 = -1; /*0x75938d*/
  this->u32_19C = -1; /*0x759393*/
  this->u32_1A0 = 0; /*0x75939e*/
  this->u32_1A4 = 0; /*0x7593a4*/
  this->u32_184 = 0; /*0x7593aa*/
  this->u32_1A8 = a7; /*0x7593b0*/
  this->u32_1AC = a8; /*0x7593b6*/
  if ( TestBitArray(3) ) /*0x7593bc*/
    this->u32_1C0 = 1; /*0x7593c5*/
  else
    this->u32_1C0 = 14; /*0x7593cd*/
  v17 = this->u32_52C; /*0x7593d7*/
  this->u32_1C4 = -1; /*0x7593dd*/
  if ( (v17 & 1) != 0 ) /*0x7593e5*/
    this->u32_178 = sub_75A2B0; /*0x7593e7*/
  else
    this->u32_178 = sub_75A100; /*0x7593f3*/
  this->u32_17C = sub_75A2F0; /*0x759402*/
  this->u32_180 = sub_75A350; /*0x75940c*/
  if ( TestBitArray(4) ) /*0x759416*/
  {
    this->u32_188 = (unsigned int)(j_Time_GetElapsedMS); /*0x75941f*/
    this->u32_1B0 = 60; /*0x759429*/
  }
  else
  {
    this->u32_188 = (unsigned int)(sub_4116A0); /*0x759435*/
    this->u32_1B0 = 60; /*0x75943f*/
    this->u32_1FC = (unsigned __int16)unk_A8EBA8; /*0x759455*/
  }
  this->u32_190 = ManageMultimediaTimer; /*0x759463*/
  this->u32_1D4 = 0x2000; /*0x75946d*/
  this->u32_504 = 0; /*0x759477*/
  this->u32_54C = 0; /*0x75947d*/
  this->u32_508 = 0; /*0x759483*/
  strcpy(&this->u8_71, a2); /*0x75949f*/
  this->u32_548 = a6; /*0x7594b0*/
  this->u32_518 = 0; /*0x7594b7*/
  this->u32_51C = 0; /*0x7594bd*/
  this->u32_520 = 0; /*0x7594c3*/
  this->u32_524 = 0; /*0x7594c9*/
  this->u32_510 = -1; /*0x7594cf*/
  this->u32_528 = 0; /*0x7594d9*/
  this->u32_540 = a4; /*0x7594df*/
  this->u32_544 = a5; /*0x7594e5*/
  this->u32_70 = 0; /*0x7594eb*/
  this->u32_514 = 0; /*0x7594ee*/
  this->u32_550 = 0; /*0x7594f4*/
  this->u32_551 = 0; /*0x7594fa*/
  *(unsigned int *)this = 0; /*0x759500*/
  return (char *)(this); /*0x7594b6*/

}
} // namespace gamemd
// 0x45A050
namespace gamemd {
int Stream::GetChecked()
{
  if ( !this->m_Stream ) /*0x45a053*/
    sub_7DC720(-2147467261); /*0x45a05d*/
  return (int)this->m_Stream->__pad_0; /*0x45a064*/
}
} // namespace gamemd