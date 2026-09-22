// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x439110
int Stream::FlushAndReset()
{
{

  Stream *v1 = this; /*0x439111*/
  int v2 = *this; /*0x439114*/
  int v3 = this->Stream_field_08; /*0x439116*/
  this->Stream_field_0C = 45; /*0x439119*/
  this->vt_slot_12(); /*0x439120*/
  v1->vt_slot_8(v3, 0); /*0x43912a*/
  int v4 = v1[6]; /*0x43912d*/
  int v5 = v1[8]; /*0x439130*/
  v1 += 6; /*0x439133*/
  (*(void (__thiscall **)(_DWORD *))(v4 + 12))(v1); /*0x439138*/
  return v1->vt_slot_8(v5, 0); /*0x439145*/
}
}

// 0x49FB70
int Stream::ReadIntArray(int a2)
{
{
  int result; // eax

  int v2 = a2; /*0x49fb72*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, this + 4, 4, 0); /*0x49fb84*/
  if ( result >= 0 ) /*0x49fb89*/
  {
    int v5 = *(_DWORD *)v2; /*0x49fb8e*/
    a2 = this->Stream_field_08; /*0x49fb9a*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x49fb9e*/
    if ( result >= 0 ) /*0x49fba3*/
    {
      int v6 = 0; /*0x49fba9*/
      if ( a2 <= 0 ) /*0x49fbad*/
      {
        return 0; /*0x49fbcd*/
      }
      else
      {
        while ( 1 ) /*0x49fbbd*/
        {
          result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this->Stream_field_04 + 4 * v6, 4, 0); /*0x49fbbd*/
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
}

// 0x67A4A0
int Stream::WriteIntArray(TechnoTypeClass * aP1)
{
{
  int result; // eax
  int i; // esi

  int v3 = *(_DWORD *)aP1->vtable0; /*0x67a4ac*/
  int v6 = this->Stream_field_10; /*0x67a4b9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a4bd*/
  result = v6; /*0x67a4c0*/
  for ( i = 0; i < v6; ++i ) /*0x67a4c8*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a4d8*/
      aP1,
      this->Stream_field_04 + 4 * i,
      4,
      0);
    result = v6; /*0x67a4db*/
  }
  return result; /*0x67a4e4*/
}
}

// 0x759260
void * Stream::InitializeBinkAudio(const char * a1, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8)
{
{

  CCFileClass::Construct3((int)(this + 4)); /*0x75926a*/
  this->Stream_178.CopyFromTemplate(); /*0x759275*/
  this->q52C = aP2; /*0x759282*/
  this->u32_1E4 = this; /*0x759288*/
  char v19; // [esp+13h] [ebp-1h] BYREF
  this->u32_194 = &v19; /*0x75928e*/
  this->q1B8 = 0; /*0x75929b*/
  if ( !TestBitArray(15) ) /*0x7592a1*/
    this->q1B8 |= 1u; /*0x7592af*/
  if ( !TestBitArray(1) ) /*0x7592b7*/
  {
    int v9 = this->q1B8; /*0x7592c0*/
    LOBYTE(v9) = v9 | 4; /*0x7592c6*/
    this->q1B8 = v9; /*0x7592c8*/
  }
  if ( TestBitArray(10) ) /*0x7592d3*/
  {
    int v10 = this->q1B8; /*0x7592dc*/
    LOBYTE(v10) = v10 | 0x40; /*0x7592e2*/
    this->q1B8 = v10; /*0x7592e4*/
  }
  if ( TestBitArray(12) ) /*0x7592ef*/
  {
    int v11 = this->q1B8; /*0x7592f8*/
    LOBYTE(v11) = v11 | 0x80; /*0x7592fe*/
    this->q1B8 = v11; /*0x759300*/
  }
  int v12 = this->u32_1BC | 8; /*0x75930c*/
  this->u32_1BC = v12; /*0x75930f*/
  int v13 = v12; /*0x75931e*/
  if ( (this->q52C & 2) != 0 ) /*0x759320*/
  {
    LOBYTE(v13) = v12 | 0x20; /*0x759322*/
    this->u32_1BC = v13; /*0x759324*/
    if ( (this->q52C & 4) == 0 ) /*0x759333*/
      goto LABEL_14; /*0x759333*/
    BYTE1(v13) = BYTE1(v12) | 1; /*0x759335*/
  }
  else
  {
    LOBYTE(v13) = v12 & 0xDF; /*0x75933a*/
  }
  this->u32_1BC = v13; /*0x75933c*/
LABEL_14:
  bool v14 = TestBitArray(17); /*0x759342*/
  int v15 = this->u32_1BC; /*0x75934e*/
  if ( v14 ) /*0x759354*/
    LOBYTE(v15) = v15 | 4; /*0x759356*/
  else
    LOBYTE(v15) = v15 & 0xFB; /*0x75935a*/
  this->u32_1BC = v15; /*0x759361*/
  v14 = TestBitArray(3); /*0x75936c*/
  int v16 = this->u32_1BC; /*0x75936e*/
  if ( v14 ) /*0x759374*/
    LOBYTE(v16) = v16 & 0xFE; /*0x759376*/
  else
    v16 |= 1u; /*0x75937a*/
  this->u32_1BC = v16; /*0x759383*/
  this->u32_198 = -1; /*0x75938d*/
  this->u32_19C = -1; /*0x759393*/
  this->q068 = 0; /*0x75939e*/
  this->u32_1A4 = 0; /*0x7593a4*/
  this->u32_184 = 0; /*0x7593aa*/
  this->u32_1A8 = a7; /*0x7593b0*/
  this->u32_1AC = a8; /*0x7593b6*/
  if ( TestBitArray(3) ) /*0x7593bc*/
    this->q070 = 1; /*0x7593c5*/
  else
    this->q070 = 14; /*0x7593cd*/
  char v17 = this->q52C; /*0x7593d7*/
  this->u32_1C4 = -1; /*0x7593dd*/
  if ( (v17 & 1) != 0 ) /*0x7593e5*/
    this->u32_178 = sub_75A2B0; /*0x7593e7*/
  else
    this->u32_178 = sub_75A100; /*0x7593f3*/
  this->u32_17C = sub_75A2F0; /*0x759402*/
  this->q018 = sub_75A350; /*0x75940c*/
  if ( TestBitArray(4) ) /*0x759416*/
  {
    this->u32_188 = j_Time_GetElapsedMS; /*0x75941f*/
    this->q06C = 60; /*0x759429*/
  }
  else
  {
    this->u32_188 = sub_4116A0; /*0x759435*/
    this->q06C = 60; /*0x75943f*/
    this->u32_1FC = *(unsigned __int16 *)&g_NetworkPlayerBuffer[5484]; /*0x759455*/
  }
  this->u32_190 = ManageMultimediaTimer; /*0x759463*/
  this->u32_1D4 = 0x2000; /*0x75946d*/
  this->u32_504 = 0; /*0x759477*/
  this->u32_54C = 0; /*0x75947d*/
  this->q508 = 0; /*0x759483*/
  strcpy(&this->u32_1C4, a1); /*0x75949f*/
  this->u32_548 = aP5; /*0x7594b0*/
  this->q518 = 0; /*0x7594b7*/
  this->u32_51C = 0; /*0x7594bd*/
  this->u32_520 = 0; /*0x7594c3*/
  this->u32_524 = 0; /*0x7594c9*/
  this->u32_510 = -1; /*0x7594cf*/
  this->q528 = 0; /*0x7594d9*/
  this->u32_540 = a4; /*0x7594df*/
  this->u32_544 = a5; /*0x7594e5*/
  this->q070 = 0; /*0x7594eb*/
  this->q514 = 0; /*0x7594ee*/
  this->q550 = 0; /*0x7594f4*/
  this->q551 = 0; /*0x7594fa*/
  *(_DWORD *)this = 0; /*0x759500*/
  return this; /*0x7594b6*/
}
}

// 0x45A050
int Stream::GetChecked()
{
{
    if ( !*(int *)this )
    WinAPI::Wrapper(-2147467261);
    return *(int *)this;
}
}
