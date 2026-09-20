// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00430580  nullsub_97  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ;
}

// ==== BACKFILL 0x00430590  sub_430590  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_430590::sub_430590(int a2, int a3, int a4, int a5)
{
{
    char result;
    if ( a2 != DataGlobal_89C430 || a3 != DataGlobal_89C434 || a4 != DataGlobal_89C438 )
  {
    *(void**)this = a2;
    this->M4 = a3;
    this->M8 = a4;
  }
    result = a5;
    if ( a5 < 8 )
  {
    this->M272 = a5;
    result = (unsigned char)this->M12 | 1;
    this->M12 = result;
  }
    return result;
}
}

// ==== BACKFILL 0x004305E0  sub_4305E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_4305E0::sub_4305E0(char a2)
{
{
    char result;
    result = this->M12 & 0xFD | (2 * (a2 & 1));
    this->M12 = result;
    return result;
}
}

// ==== BACKFILL 0x00430610  sub_430610  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_430610::sub_430610()
{
{
    this->M12 &= ~1u;
}
}

// ==== BACKFILL 0x004309D0  CCFileClass::Create  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CCFileClass::Create() {
{
      __int16 *EntireFile;
      __int16 *v3;
      int v4;
      int v5[9];
      int v6[9];

      RawFileClass::Construct(v6, (int)stru_818A5C);
      EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v6);
      DataGlobal_89C474 = (int)EntireFile;
      if ( EntireFile || (EntireFile = (__int16 *)SearchMIXFile(stru_818A5C, 0), (DataGlobal_89C474 = (int)EntireFile) != 0) )
      {
        this->q064 = EntireFile[1];
        this->q068 = *(__int16 *)(DataGlobal_89C474 + 4);
        this->q06C = *(__int16 *)(DataGlobal_89C474 + 6);
      }
      else
      {
        Debug::Log();
      }
      RawFileClass::Construct(v5, (int)DataGlobal_818A30);
      v3 = (__int16 *)CCFileClass::ReadEntireFile(v5);
      DataGlobal_89C478 = (int)v3;
      if ( v3 || (v3 = (__int16 *)SearchMIXFile(DataGlobal_818A30, 0), (DataGlobal_89C478 = (int)v3) != 0) )
      {
        this->q070 = v3[1];
        this->q074 = *(__int16 *)(DataGlobal_89C478 + 4);
        v4 = *(__int16 *)(DataGlobal_89C478 + 6);
        this->q078 = v4;
        this->q07C = 4 * v4;
      }
      else
      {
        Debug::Log();
      }
      RawFileClass::Dtor(v5);
      RawFileClass::Dtor(v6);
}
} }

// ==== BACKFILL 0x00430F30  MapClass::isCellAccessible  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
char MapClass::isCellAccessible(int a2)
{
{
    int v2;
    char *i;
    v2 = 0;
    for ( i = this + 12 * a2; *(int *)i; i += 4 )
  {
    if ( ++v2 >= 3 )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x00430F60  sub_430F60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_430F60(unsigned int * a1)
{
{
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
    return a1;
}
}

// ==== BACKFILL 0x00431410  HouseClass::createStartingUnits  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
char __thiscall sub_431410(int *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int *v5; // edi

  v3 = *(this + 24); /*0x431413*/
  if ( v3 ) /*0x431418*/
  {
    LOBYTE(v3) = 3 * a2; /*0x431421*/
    v4 = 0; /*0x431424*/
    v5 = this + 3 * a2; /*0x431426*/
    do /*0x43143f*/
    {
      if ( *v5 ) /*0x43142a*/
        LOBYTE(v3) = Network::SendBeaconDelete(this, a2, v4); /*0x431433*/
      ++v4; /*0x431438*/
      ++v5; /*0x431439*/
    }
    while ( v4 < 3 ); /*0x43143f*/
  }
  return v3; /*0x431444*/
}

// ==== BACKFILL 0x00431700  HouseClass::Render  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::Render(int a2, int a3, int a4, int a5, int a6) {
{
    int result;
    int *v7;
    int v8;
    int v9;
    int v10;
    result = this->grindersCount;
    if ( result )
  {
    result = DataGlobal_89C428 + 1;
    if ( (int)g_CurrentFrame % this->bunkersCapacity < DataGlobal_89C428 + 1 )
    {
    result = (int)this;
    v10 = 8;
    do
      {
    v7 = (int *)result;
    v9 = 3;
    do
        {
    v8 = *v7;
    if ( *v7 && (*(char *)(v8 + 12) & 1) != 0 && HouseClass::IsAllied(HouseClass_Player, *(int *)(v8 + 272)) && (unsigned char)HouseClass::IsAlliedWith( *(#375 **)&HouseClass_Array->__pad_0[4 * *(int *)(v8 + 272)], HouseClass_Player) && !*(char *)(*(int *)&HouseClass_Array->__pad_0[4 * *(int *)(v8 + 272)] + 501) )
          {
    BuildingPlacement::RenderBuildingPlacementShadow((int *)v8, a2, a3, a4, a5, a6, 0);
          }
    ++v7;
    --v9;
        }
    while ( v9 );
    result = (int)v7;
    --v10;
      }
    while ( v10 );
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x00431920  sub_431920  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_431920::sub_431920()
{
{
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
    return 0;
}
}

// ==== BACKFILL 0x00431930  sub_431930  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_431930::sub_431930(int a2)
{
{
    unsigned int v3;
    int result;
    int v5;
    if ( (char)a2 )
  {
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
  }
    v3 = Timer::ReadTSC(&a2);
    result = (a2 << 28) | (v3 >> 4);
    *(void**)this = result;
    this->M4 = v5;
    return result;
}
}

// ==== BACKFILL 0x00431D90  sub_431D90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_431D90::sub_431D90()
{
{
    if ( this->M48 )
  {
    if ( (unsigned char)this->M36 )
    {
    __3_YAXPAX_Z(*(void **)(this + 48));
    this->M36 = 0;
    }
    this->M48 = 0;
  }
    this->M52 = 0;
    this->M37 = 0;
    this->M39 = 0;
    this->M40 = 0;
    this->M41 = 0;
}
}

// ==== BACKFILL 0x00431E80  CCFileClass::SetName  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCFileClass::SetName(void* a1) {
{
      if ( this->vt1() && this->q029 )
      {
        if ( !strcmp((const char *)aP1, (const char *)this->vt1()) )
          return this->vt1();
        BufferIO::Flush((int)this);
        this->q027 = 0;
      }
      FileClass::SetName(this, (char *)aP1);
      return this->vt1();
}
} }

// ==== BACKFILL 0x00431F30  BufferIOFileClass::Read  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool BufferIOFileClass::Read() {
    return this->BufferDirty && this->CacheReadAhead || this->Handle != INVALID_HANDLE_VALUE;

/* ASM:
mov     al, [ecx+25h]
test    al, al
jz      short loc_431F41
mov     al, [ecx+29h]
test    al, al
jz      short loc_431F41
mov     al, 1
retn
; ---------------------------------------------------------------------------

loc_431F41:                             ; CODE XREF: BufferIOFileClass__Read+5↑j
; BufferIOFileClass__Read+C↑j
mov     edx, [ecx+14h]
xor     eax, eax
cmp     edx, 0FFFFFFFFh
setnz   al
retn
*/
} }

// ==== BACKFILL 0x00431F50  BufferIOFileClass::Write  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool BufferIOFileClass::Write() {
{
      this->vt2(a2);
      return BufferIOFileClass::Open((int)this, aP1);
}
} }

// ==== BACKFILL 0x004324B0  BufferIOFileClass::SeekInternal  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BufferIOFileClass::SeekInternal() {
{
      int v4;
      LONG v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v14;
      char v15;

      if ( !this->q029 )
        return FileClass::Seek((int *)this, lDistanceToMove, dwMoveMethod);
      v15 = 0;
      if ( dwMoveMethod )
      {
        if ( dwMoveMethod == 2 )
          this->q04C = this->TotalBytesWritten;
      }
      else
      {
        this->q04C = 0;
      }
      v4 = this->q050;
      v5 = lDistanceToMove;
      if ( v4 && lDistanceToMove >= v4 )
      {
        v5 = lDistanceToMove - v4;
        v15 = 1;
      }
      v6 = this->q04C;
      this->q04C = v5 + v6;
      if ( v5 + v6 < 0 )
        this->q04C = 0;
      v7 = this->TotalBytesWritten;
      if ( this->q04C > v7 )
        this->q04C = v7;
      v8 = this->BufferReadSize;
      if ( v7 > v8 )
      {
        v9 = this->q04C;
        v10 = this->BufferMaxSize;
        if ( v9 < v10 || v9 >= v10 + v8 )
        {
          BufferIO::Flush(this);
          if ( this->q050 )
          {
            v11 = *(_DWORD *)this;
            v14 = this->q04C;
            this->q029 = 0;
            (*(void (__thiscall **)(int, int, _DWORD))(v11 + 40))(this, v14, 0);
            this->q029 = 1;
          }
          else
          {
            FileClass::Seek((int *)this, this->q04C, 0);
          }
          this->q027 = 0;
        }
        else
        {
          this->StreamSize = v9 - v10;
        }
      }
      else
      {
        this->StreamSize = this->q04C;
      }
      v12 = this->q050;
      if ( v12 && v15 )
        return v12 + this->q04C;
      else
        return this->q04C;
}
} }

// ==== BACKFILL 0x004325A0  BufferIOFileClass::SetSize  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BufferIOFileClass::SetSize() {
{
      if ( this->q025 && this->q029 )
        return this->TotalBytesWritten;
      else
        return CCFileClass::GetFileSize(this);
}
} }

// ==== BACKFILL 0x00432BD0  BinkMovieHandle::Check  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::Check(int a2)
{
{
    int result;
    result = BinkGoto(this->tempPath, a2, 1);
    this->memoryBuffer = 0;
    return result;
}
}

// ==== BACKFILL 0x00432C30  BinkMovie::Pause  cls=BinkMovie  sig=csp  renamed_refs=0  residual=- ====
int BinkMovie::Pause(unsigned char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BinkMovie_Pause(_DWORD *this, unsigned __int8 a2)
{
  return BinkPause(*(this + 1), a2); /*0x432c44*/
}
}

// ==== BACKFILL 0x00432C50  BinkMovie::IsAtEnd  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
BOOL BinkMovie::IsAtEnd()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall BinkMovie_IsAtEnd(_DWORD *this)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(this + 1); /*0x432c50*/
  v2 = *(_DWORD *)(v1 + 12); /*0x432c54*/
  return v2 >= *(_DWORD *)(v1 + 8) || v2 < *(this + 12); /*0x432c5c*/
}
}

// ==== BACKFILL 0x00433040  BinkMovie::RenderFrameToSurface  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
bool BinkMovie::RenderFrameToSurface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall BinkMovie_RenderFrameToSurface(int *this)
{
  return BinkMovie::RenderLoop((int)this, *(this + 3), *(this + 4), *(this + 5)); /*0x433051*/
}
}

// ==== BACKFILL 0x00433C80  sub_433C80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
short E4Recv_433C80::sub_433C80(short a2)
{
{
    this->M38 = a2;
    return this->M36;
}
}

// ==== BACKFILL 0x00433CE0  sub_433CE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_433CE0::sub_433CE0(char a2)
{
{
    char result;
    result = this->M64;
    this->M64 = a2;
    return result;
}
}

// ==== BACKFILL 0x00433F50  MessageListClass::CountCharsInWidth  cls=MessageListClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int MessageListClass::CountCharsInWidth(void* a1, int a2, int a3, int a4) {
{
      _DWORD *v5;
      int v6;
      _DWORD *v7;
      _WORD *v8;
      unsigned __int16 v9;
      unsigned __int8 *v10;
      int v11;
      int v12;
      int v14;
      _WORD *v15;
      int v16;
      int v17;

      v5 = this;
      v6 = 0;
      v7 = (_DWORD *)this->MaxMessageCount;
      v17 = 0;
      if ( !v7 )
        return 0;
      v8 = a2;
      if ( !a2 )
        return 0;
      v9 = *a2;
      if ( *a2 )
      {
        while ( 1 )
        {
          if ( v9 == 9 )
          {
            v6 = v5[10] + v6 - (v5[10] + v6) % v5[10];
          }
          else if ( v9 != 10 && v9 != 13 )
          {
            v10 = 0;
            v11 = *(unsigned __int16 *)(v7[6] + 2 * v9);
            if ( (_WORD)v11 )
              v10 = (unsigned __int8 *)(v7[7] + (v11 - 1) * v7[5]);
            v8 = a2;
            if ( v10 || (v10 = (unsigned __int8 *)this->ScrollOffset) != 0 )
              v6 += *v10 + this->q02C;
          }
          v12 = ++v17;
          if ( v6 > a3 )
            break;
          if ( a4 && v12 == a4 || a5 && (v9 == 13 || v9 == 10) )
            return v17;
          v9 = v8[1];
          a2 = ++v8;
          if ( !v9 )
            return v17;
          v5 = this;
        }
        v14 = v12 - 1;
        v17 = v14;
        if ( a5 )
        {
          if ( v9 > 0x20u )
          {
            v15 = v8 - 1;
            v16 = v14;
            if ( v14 )
            {
              while ( *v15 > 0x20u )
              {
                --v16;
                --v15;
                if ( !v16 )
                  return v14;
              }
              if ( v16 )
                return v16;
            }
          }
        }
      }
      return v17;
}
} }

// ==== BACKFILL 0x00434100  sub_434100  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_434100::sub_434100(int a2)
{
{
    int result;
    result = this->M40;
    this->M40 = a2;
    return result;
}
}

// ==== BACKFILL 0x00434700  sub_434700  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * E4Recv_434700::sub_434700()
{
{
    char *result;
    int *v3;
    int v4;
    char *v5;
    char *v6;
    int v7;
    unsigned int v8;
    unsigned int v9;
    result = malloc(*(int *)(this->M4 + 4) * *(int *)(this->M4 + 8) + 2);
    v3 = (int *)this->M4;
    this->M8 = result;
    if ( v3 )
  {
    v4 = *(unsigned short *)(v3[6] + 176);
    if ( (short)v4 )
    {
    v5 = (char *)(v3[7] + (v4 - 1) * v3[5]);
    if ( v5 )
      {
    v6 = v5 + 1;
    *result = *v5;
    v7 = this->M4;
    v8 = 0;
    result = (char *)(this->M8 + 1);
    for ( ; v8 < *(int *)(v7 + 8); ++v8 )
        {
    v9 = 0;
    if ( *(int *)(v7 + 4) )
          {
    do
            {
    *result++ = ~*v6++;
    ++v9;
            }
    while ( v9 < *(int *)(this->M4 + 4) );
          }
    v7 = this->M4;
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00434840  sub_434840  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_434840(unsigned int * a1, unsigned int * a2, unsigned int * a3)
{
{
    int v3;
    int v4;
    int v5;
    if ( *((int*)(a2) + 1) > *((int*)(a3) + 3) || *((int*)(a3) + 1) > *((int*)(a2) + 3) || *a2 > *((int*)(a3) + 2) || *a3 > *((int*)(a2) + 2) )
  {
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
    *((int*)(a1) + 2) = -1;
    *((int*)(a1) + 3) = -1;
    return 0;
  }
    else
  {
    *a1 = *a2;
    *((int*)(a1) + 1) = *((int*)(a2) + 1);
    *((int*)(a1) + 2) = *((int*)(a2) + 2);
    *((int*)(a1) + 3) = *((int*)(a2) + 3);
    v3 = *((int*)(a3) + 1);
    if ( *((int*)(a1) + 1) < v3 )
    *((int*)(a1) + 1) = v3;
    if ( *a1 < *a3 )
    *a1 = *a3;
    v4 = *((int*)(a3) + 3);
    if ( *((int*)(a1) + 3) > v4 )
    *((int*)(a1) + 3) = v4;
    v5 = *((int*)(a3) + 2);
    if ( *((int*)(a1) + 2) > v5 )
    *((int*)(a1) + 2) = v5;
    return 1;
  }
}
}

// ==== BACKFILL 0x004349F0  sub_4349F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_4349F0::sub_4349F0()
{
{
    int result;
    this->M4 = 0;
    this->M32 = 0;
    this->M12 = 0;
    this->M8 = 0;
    this->M36 = 0x7FFF;
    this->M38 = 13653;
    this->M40 = 64;
    this->M64 = 1;
    this->M65 = 1;
    this->M24 = 1;
    this->M28 = 1;
    result = SetRect((LPRECT)(this + 48), 0, 0, 0, 0);
    this->M44 = 1;
    return result;
}
}

// ==== BACKFILL 0x00434B40  sub_434B40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_434B40(AbstractClass * aP0, int * a1, unsigned short aP1, int xLeft, int yTop)
{
{
    int v5;
    if ( !aP0 )
    return xLeft;
    FontRenderer::InitContext(aP0, a1);
    Field::Int_Set(aP0, (AbstractClass *)xLeft);
    v5 = FontClass::RenderGlyph( (int)aP0, (AbstractClass *)aP1, (AbstractClass *)xLeft, (AbstractClass *)yTop, (AbstractClass *)0xFFFFFFFF);
    BufferIO::Cleanup(aP0, (AbstractClass *)a1);
    return v5;
}
}

// ==== BACKFILL 0x00434BF0  sub_434BF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_434BF0(int a1, int * a2, unsigned short * a3, int xLeft, int yTop, int a6)
{
{
    int result;
    int v7;
    result = 0;
    if ( a1 )
  {
    if ( *(char *)(a1 + 64) )
    {
    *(int *)(a1 + 44) = 2;
    FontRenderer::InitContext((int *)a1, a2);
    Field::Int_Set((int *)a1, xLeft);
    FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0);
    BufferIO::Cleanup((int *)a1, (int)a2);
    FontRenderer::InitContext((int *)a1, a2);
    Field::Int_Set((int *)a1, xLeft + 1);
    v7 = FontClass::RenderText(a1, a3, xLeft + 1, yTop, a6, 0);
    BufferIO::Cleanup((int *)a1, (int)a2);
    *(int *)(a1 + 44) = 1;
    }
    else
    {
    FontRenderer::InitContext((int *)a1, a2);
    Field::Int_Set((int *)a1, xLeft);
    v7 = FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0);
    BufferIO::Cleanup((int *)a1, (int)a2);
    }
    return v7;
  }
    return result;
}
}

// ==== BACKFILL 0x00435340  sub_435340  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_435340(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
{
    short v11;
    if ( !a1 )
    return 0;
    Field::Int_Set((int *)a1, a4);
    v11 = Property::Set((short *)a1, *(short *)(a1 + 38));
    Font::Print(a1, a2, a3, a4 + 1, yTop + 1, a6, a7, a8, a9, a10);
    Property::Set((short *)a1, v11);
    return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10);
}
}

// ==== BACKFILL 0x004353F0  sub_4353F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_4353F0(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
{
    char result;
    if ( !a1 )
    return 0;
    Field::Int_Set((int *)a1, a4);
    if ( !*(char *)(a1 + 64) )
    return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10);
    *(int *)(a1 + 44) = 2;
    Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10);
    result = Font::Print(a1, a2, a3, a4 + 1, yTop, a6, a7, a8, a9, a10);
    *(int *)(a1 + 44) = 1;
    return result;
}
}

// ==== BACKFILL 0x004355D0  PackRGB565  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PackRGB565(int a1, int a2, int a3)
{
{
    return (a1 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (a2 >> g_BitMask_Blue << g_BitMask_Green)
    | (a3 >> g_BitMask_Red << g_BitShift_Blue);
}
}

// ==== BACKFILL 0x00435BE0  BuildingLightClass::Draw_Start  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingLightClass::Draw_Start(int a1, int a2) {
{
      int v4;
      int v5;
      _BYTE *v6;
      _DWORD *v7;
      _DWORD *v8;
      _DWORD *v9;
      int *v10;
      double v11;
      int v12;
      _DWORD *v13;
      _DWORD *v14;
      int *v15;
      int v16;
      int v17;
      int v18;
      _DWORD *v19;
      int *v20;
      int v21;
      int *v22;
      int v23;
      int *v24;
      int v25;
      int v26;
      _DWORD *v27;
      float *v28;
      int v29;
      float *v30;
      double v31;
      float v32;
      int v33;
      double v34;
      int v35;
      int v36;
      double v37;
      int v38;
      int v39;
      float *v40;
      float v41;
      int v42;
      int v43;
      int v44;
      int v45;
      int v46;
      int v47;
      int v48;
      int v49;
      int v50;
      int v51;
      int v52;
      int v53;
      float v55;
      float v56;
      float v57;
      _DWORD *Block;
      void *Blocka;
      float Blockb;
      float v61;
      float v62;
      float v63;
      int v64;
      int v65;
      int v66;
      int v67;
      int v68;
      int v69;
      int v70;
      int v71;
      int v72;
      int v73;
      float v74;
      int v75;
      float v76;
      float v77;
      int v78[2];
      float v79[3];
      double v80;
      _DWORD v81[3];
      _DWORD v82[3];
      float v83[4];
      float v84[12];

      v4 = this->BehaviourMode;
      if ( v4 )
      {
        v5 = this->FollowingObject;
        if ( v5 )
        {
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5);
          if ( v4 == 6 )
          {
            v6 = (_BYTE *)this->FollowingObject;
            if ( v6 )
            {
              LOBYTE(v4) = v6[144];
              if ( (_BYTE)v4 )
              {
                LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 848))(this->FollowingObject);
                if ( (_BYTE)v4 )
                {
                  LOBYTE(v4) = v6[1767];
                  if ( !(_BYTE)v4 )
                  {
                    if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0
                      || (v61 = this->location,
                          v62 = this->q0A0,
                          v63 = this->q0A4,
                          LOBYTE(v4) = Game::Stub3((int)&v61),
                          !(_BYTE)v4) )
                    {
                      v7 = __2_YAPAXI_Z(0x18u);
                      if ( v7 )
                        Block = ObjectClass::RegisterInArray(v7, this->location, this->q0A0, this->q0A4, 16);
                      else
                        Block = 0;
                      v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->FollowingObject + 72))(
                                       this->FollowingObject,
                                       &v68);
                      v9 = (_DWORD *)this->vt18(&v61);
                      v10 = Vector3::Subtract(v9, &v65, v8);
                      v11 = Math::Sqrt(
                              (double)*v10 * (double)*v10
                            + (double)v10[1] * (double)v10[1]
                            + (double)v10[2] * (double)v10[2]);
                      v12 = Math::RoundToInt(v11);
                      v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->FollowingObject + 72))(
                                        this->FollowingObject,
                                        &v68);
                      v14 = (_DWORD *)this->vt18(&v61);
                      v15 = Vector3::Subtract(v14, &v65, v13);
                      v16 = Coord::Length(v15);
                      v17 = g_RulesClass_Instance->NodGateOne[1];
                      if ( v16 >= v17 )
                        v64 = (v16 - v17) / ((g_RulesClass_Instance->NodGateOne[0] - v17) / 10);
                      else
                        v64 = 0;
                      if ( v12 > v17 && this->BehaviourMode == 3 )
                      {
                        v18 = v64 + 80 <= 0 ? 0 : v64 + 80;
                        if ( v18 >= 89 )
                          v18 = 89;
                        v19 = Block;
                        Block[3] = v18;
                      }
                      else
                      {
                        v19 = Block;
                        Block[3] = 80;
                      }
                      BuildingLight::CalculateShading(v19);
                      if ( v19 )
                      {
                        BuildingLightQueue::RemoveEntry(v19);
                        __3_YAXPAX_Z(v19);
                      }
                      v20 = this + 39;
                      v21 = this->location;
                      v69 = this->q0A0;
                      v22 = (int *)this->FollowingObject;
                      v23 = *v22;
                      v70 = this->q0A4;
                      v24 = (int *)(*(int (__thiscall **)(int *, float *))(v23 + 72))(v22, &v61);
                      v65 = *v24;
                      v66 = v24[1];
                      v25 = v24[2];
                      v26 = *this;
                      v67 = v25;
                      v27 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(v26 + 72))(this, &v80);
                      v28 = (float *)Coord::Subtract(v83, *v27 - v65, v27[1] - v66, v27[2] - v25);
                      v61 = *v28;
                      v62 = v28[1];
                      v63 = v28[2];
                      Blocka = (void *)Coord::Length((int *)&v61);
                      v29 = BuildingLightClass::CalculateDistanceIntensity((_DWORD **)this);
                      v4 = g_RulesClass_Instance->BuildWeapons[0] + Math::RoundToInt((double)v29 * 5.973333333333333);
                      if ( (int)Blocka >= v4 )
                      {
                        v80 = BuildingLight::CalcIntensity((double)v4 / (double)(int)Blocka);
                        Matrix3x4::Identity(v84);
                        v55 = v80;
                        Matrix2D::Rotate(v84, v55);
                        v79[0] = (float)(v21 - v65);
                        v79[1] = (float)(v69 - v66);
                        v79[2] = (float)(v70 - v25);
                        v30 = TransformMatrix3x4Point(v83, v84, v79);
                        v31 = (double)v65;
                        v32 = v30[1];
                        v61 = *v30;
                        v62 = v32;
                        Blockb = v31;
                        v63 = v30[2];
                        v33 = Math::RoundToInt(v31 + v61);
                        v34 = (double)v66;
                        v35 = v33;
                        v77 = v34;
                        v36 = Math::RoundToInt(v34 + v62);
                        v37 = (double)v67;
                        v38 = v36;
                        v57 = v37;
                        v39 = Math::RoundToInt(v37 + v63);
                        v82[0] = v35;
                        v82[1] = v38;
                        v82[2] = v39;
                        Matrix3x4::Identity(v84);
                        v56 = -v80;
                        Matrix2D::Rotate(v84, v56);
                        v40 = TransformMatrix3x4Point(v83, v84, v79);
                        v41 = v40[1];
                        v61 = *v40;
                        v62 = v41;
                        v63 = v40[2];
                        v42 = Math::RoundToInt(Blockb + v61);
                        v43 = Math::RoundToInt(v77 + v62);
                        v81[2] = Math::RoundToInt(v57 + v63);
                        v81[0] = v42;
                        v81[1] = v43;
                        Coord::To_Screen(g_TacticalClass_Instance, v82, &v75);
                        Coord::To_Screen(g_TacticalClass_Instance, v81, &v73);
                        v68 = v65;
                        v70 = v25 + 430;
                        v69 = v66;
                        Coord::To_Screen(g_TacticalClass_Instance, &v68, &v71);
                        v75 += DSurface_ViewBounds;
                        LODWORD(v74) += g_Map_VisibleRect;
                        v72 += g_Map_VisibleRect;
                        v78[1] = v72;
                        LODWORD(v76) += g_Map_VisibleRect;
                        v73 += DSurface_ViewBounds;
                        v71 += DSurface_ViewBounds;
                        v78[0] = v71;
                        v44 = ZCoordToScreenY(v25 + 400);
                        v45 = v20[1];
                        v46 = -v44;
                        v47 = v20[2] + 250;
                        v68 = *v20;
                        v69 = v45;
                        v48 = -(int)ZCoordToScreenY(v47);
                        if ( ClipLine(&v71, &v75, &DSurface_ViewBounds) )
                        {
                          v49 = v64;
                          v50 = *(_DWORD *)g_DSurface_Hidden_2;
                          v51 = (*(int (__thiscall **)(int, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(
                                  g_DSurface_Hidden_2,
                                  v83,
                                  &v71,
                                  &v75,
                                  75 - 6 * v64,
                                  v46,
                                  v48,
                                  0);
                          (*(void (__thiscall **)(int, int))(v50 + 56))(g_DSurface_Hidden_2, v51);
                        }
                        else
                        {
                          v49 = v64;
                        }
                        LOBYTE(v4) = ClipLine(v78, &v73, &DSurface_ViewBounds);
                        if ( (_BYTE)v4 )
                        {
                          v52 = *(_DWORD *)g_DSurface_Hidden_2;
                          v53 = (*(int (__thiscall **)(int, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(
                                  g_DSurface_Hidden_2,
                                  v83,
                                  v78,
                                  &v73,
                                  75 - 6 * v49,
                                  v46,
                                  v48,
                                  0);
                          LOBYTE(v4) = (*(int (__thiscall **)(int, int))(v52 + 56))(g_DSurface_Hidden_2, v53);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return v4;
}
} }

// ==== BACKFILL 0x00436900  BuildingLightClass::SD_vt12  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt12()
{
return 232;
}

// ==== BACKFILL 0x00436910  BuildingLightClass::SD_vt03  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt03(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1417814616;
  a2[1] = 298965160;
  a2[2] = 1610638004;
  a2[3] = 2041169559;
  return 0;
}

// ==== BACKFILL 0x00436950  BuildingLightClass::SD_vt05  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingLightClass::SD_vt05(void* a1, int a2) {
{
      ObjectClass *Register;

      Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this);
      if ( (int)Register >= 0 )
      {
        if ( aP1 )
        {
          ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
          *(_DWORD *)aP1->__pad_0 = &BuildingLightClass::`vftable';
          *(_DWORD *)&aP1->__pad_0[4] = &BuildingLightClass::`vftable';
          *(_DWORD *)&aP1->__pad_0[8] = &BuildingLightClass::`vftable';
          *(_DWORD *)&aP1->__pad_0[12] = &vt_BuildingLightClass;
        }
        ObjectPtr::RegisterForTracking(
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&aP1[1].attachedBomb);
        ObjectPtr::RegisterForTracking(
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&aP1[1].attachedTag);
      }
      return (int)Register->__pad_0;
}
} }

// ==== BACKFILL 0x004369C0  BuildingLightClass::SD_vt06  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x004369E0  BuildingLightClass::SD_vt34  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt34()
{
return 0;
}

// ==== BACKFILL 0x004369F0  BuildingLightClass::SD_vt30  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt30()
{
return 3;
}

// ==== BACKFILL 0x00436A00  BuildingLightClass::SD_vt10  cls=BuildingLightClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int BuildingLightClass::SD_vt10(int a1, int a2) {
{
      ObjectClass *result;

      Object::Unlink((#374 *)this);
      result = 0;
      if ( this->BuildingLightClass_field_E0 == a2 )
        this->BuildingLightClass_field_E0 = 0;
      if ( this->FollowingObject == a2 )
        this->FollowingObject = 0;
      return (int)result->__pad_0;
}
} }

// ==== BACKFILL 0x00436DA0  sub_436DA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_436DA0::sub_436DA0()
{
{
    int *v2;
    int *v3;
    double v4;
    int v5;
    int v6;
    double result;
    int v8;
    int v9;
    int v10;
    char v11[12];
    char v12[12];
    v2 = (int *)(*(int (__thiscall **)(int, char *))(*(void**)this->M228 + 72))(this->M228, v11);
    v3 = (int *)((int (__thiscall *)(int **, char *))(*(void**)this)[18])(this, v12);
    v9 = v3[1] - v2[1];
    v10 = v3[2] - v2[2];
    v4 = Math::Sqrt((double)(*v3 - *v2) * (double)(*v3 - *v2) + (double)v10 * (double)v10 + (double)v9 * (double)v9);
    v5 = Math::RoundToInt(v4);
    v6 = g_RulesClass_Instance->NodGateOne[1];
    if ( v5 >= v6 )
    v8 = (v5 - v6) / ((g_RulesClass_Instance->NodGateOne[0] - v6) / 10);
    else
    v8 = 0;
    result = (double)v8 * 5.973333333333333;
    Math::RoundToInt(result);
    return result;
}
}

// ==== BACKFILL 0x00436E80  BuildingLightClass::CalculateDistanceIntensity  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingLightClass::CalculateDistanceIntensity() {
{
    int *v2;
    int *v3;
    double v4;
    int v5;
    int v6;
    int v8;
    char v9[12];
    char v10[12];
    v2 = (int *)(*(int (__thiscall **)(int, char *))(*(void**)this->FollowingObject + 72))(this->FollowingObject, v9);
    v3 = (int *)((int (__thiscall *)(int **, char *))(*(void**)this)[18])(this, v10);
    v8 = v3[2] - v2[2];
    v4 = Math::Sqrt( (double)(*v3 - *v2) * (double)(*v3 - *v2) + (double)v8 * (double)v8 + (double)(v3[1] - v2[1]) * (double)(v3[1] - v2[1]));
    v5 = Math::RoundToInt(v4);
    v6 = g_RulesClass_Instance->NodGateOne[1];
    if ( v5 >= v6 )
    return (v5 - v6) / ((g_RulesClass_Instance->NodGateOne[0] - v6) / 10);
    else
    return 0;
}
} }

// ==== BACKFILL 0x00436F40  BuildingLightClass::SD_vt13  cls=BuildingLightClass  sig=csp  renamed_refs=5  residual=- ====
namespace gamemd { int BuildingLightClass::SD_vt13(void* a1) {
{
      int v3;
      int result;
      int v5;
      int v6;
      int v7;

      HouseClass::ProcessPower((#374 *)this);
      Checksummer::Add_double(a2, this->q0B0, this->q0B4);
      Power::TimerProcess(this->BuildingLightClass_field_B8);
      Power::TimerProcess(this->q0BC);
      Power::TimerProcess(this->q0C0);
      Power::TimerProcess(this->BuildingLightClass_field_C4);
      Power::TimerProcess(this->q0C8);
      Power::TimerProcess(this->q0CC);
      Checksummer::Add_double(a2, this->BuildingLightClass_field_D0, this->q0D4);
      LOBYTE(v3) = this->BuildingLightClass_field_D8;
      Power::FlagProcess((int *)a2, v3);
      Power::TimerProcess(this->BehaviourMode);
      result = this->BuildingLightClass_field_E0;
      if ( result )
      {
        v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4);
        result = Power::TimerProcess(v5);
      }
      v6 = this->FollowingObject;
      if ( v6 )
      {
        v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4);
        return Power::TimerProcess(v7);
      }
      return result;
}
} }

// ==== BACKFILL 0x00437030  BuildingLightClass::SD_vt53  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingLightClass::SD_vt53() {
{
    if ( !(unsigned char)ObjectClass::Undeploy(this) )
    return 0;
    VectorClass::RemoveItem((int *)&g_GameConfigManager, (ObjectClass *)this);
    return 1;
}
} }

// ==== BACKFILL 0x00437050  BuildingLightClass::SD_vt54  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingLightClass::SD_vt54(int a1, int a2) {
{
    if ( !(unsigned char)ObjectClass::Deploy(this) )
    return 0;
    ObjectClass::SetDeployState((ObjectClass *)this, 0);
    return 1;
}
} }

// ==== BACKFILL 0x004370B0  BuildingLightClass::SD_vt11  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt11()
{
return 19;
}

// ==== BACKFILL 0x004370C0  BuildingLightClass::SDDTOR  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
BuildingLightClass * BuildingLightClass::SDDTOR(char a2)
{
    BuildingLightClass* blk = this;
    if ( ObjectClass::Undeploy(this) )
        VectorClass::RemoveItem(&g_GameConfigManager, this);
    BuildingLightClass* v5 = this;
    int v3 = g_CellDirectionOffsets.FindItemIndex(&v5);
    if ( v3 != -1 && v3 < g_CellDirectionOffsets )
    {
        --g_CellDirectionOffsets;
        while ( v3 < g_CellDirectionOffsets )
        {
            ++v3;
            *(g_CellDirectionOffsets + v3 - 1) = *(g_CellDirectionOffsets + v3);
        }
    }
    ObjectClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x004371D0  Helper::ProcessData  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Helper::ProcessData(void ** a1, int a2, int * a3)
{
{
    int v6;
    int v7;
    int v8;
    void *v9;
    void *v10[4];
    int (__thiscall **v11)(void *, char);
    int v12;
    int v13;
    int v14;
    int v15;
    int v16[3];
    if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 )
    return 0;
    v6 = *a3;
    v7 = (*((int (__thiscall **)(void **))*a1 + 28))(a1);
    v8 = *(int *)(a2 + 12);
    v12 = *(int *)(a2 + 8);
    v13 = v8;
    v14 = 0;
    v11 = &XSurface_Vtable;
    v15 = v7;
    Buffer::Init(v16, v6, v7 * v8 * v12);
    v9 = *(void **)(a2 + 8);
    v10[3] = *(void **)(a2 + 12);
    v11 = &BSurface_Vtable;
    v10[0] = 0;
    v10[1] = 0;
    v10[2] = v9;
    LOBYTE(v6) = XSurface::BlitPart((int *)&v11, v10, a1, (void **)a2, 0, 1);
    Vector::Clear((int)v16);
    return v6;
}
}

// ==== BACKFILL 0x00437290  sub_437290  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_437290(int * a1, int a2, int * a3)
{
{
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11[4];
    int (__thiscall **v12)(void *, char);
    int v13;
    int v14;
    int v15;
    int v16;
    int v17[3];
    if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 )
    return 0;
    v6 = *a3;
    v7 = (*(int (__thiscall **)(int *))(*a1 + 112))(a1);
    v8 = *(int *)(a2 + 12);
    v13 = *(int *)(a2 + 8);
    v14 = v8;
    v15 = 0;
    v12 = &XSurface_Vtable;
    v16 = v7;
    Buffer::Init(v17, v6, v7 * v8 * v13);
    v9 = *(int *)(a2 + 12);
    v10 = *a1;
    v11[2] = *(int *)(a2 + 8);
    v11[3] = v9;
    v12 = &BSurface_Vtable;
    v11[0] = 0;
    v11[1] = 0;
    LOBYTE(v6) = (*(int (__thiscall **)(int *, int, int (__thiscall ***)(void *, char), int *, int, int))(v10 + 8))( a1, a2, &v12, v11, 0, 1);
    Vector::Clear((int)v17);
    return v6;
}
}

// ==== BACKFILL 0x00437350  BlitterCopySimpleSHP  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char BlitterCopySimpleSHP(XSurface * aP0, XSurface * aP1, XSurface * aP2, int arg4, int * a4, int aP7, int aP8, int a8, int a9)
{
{
    XSurface *v11;
    XSurface *v13;
    char v14[20];
    int v15[3];
    v13 = (XSurface *)(*(int (__thiscall **)(XSurface *, char *, int))(*(int *)aP2->__pad_0 + 120))(aP2, v14, arg4);
    v11 = (XSurface *)(*(int (__thiscall **)(XSurface *))(*(int *)aP0->__pad_0 + 120))(aP0);
    return BlitterCopySHP( aP0, v11, (XSurface *)v15, aP1, (int)aP2, v13, (XSurface *)a4, (XSurface *)aP7, (XSurface *)aP8, a8, a9, 0);
}
}

// ==== BACKFILL 0x00437F30  CellStruct::Copy  cls=CellStruct  sig=csp  renamed_refs=0  residual=- ====
unsigned int * CellStruct::Copy(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CellStruct::Copy(int *this, IUnknown *aP1)
{
  AbstractClass *v3; // edx
  int v4; // ecx

  v3 = (AbstractClass *)*this; /*0x437f34*/
  v4 = *(this + 1); /*0x437f36*/
  aP1->field_0 = (int)v3; /*0x437f39*/
  aP1->field_4 = v4; /*0x437f3b*/
  return &aP1->field_0; /*0x437f3e*/
}
}

// ==== BACKFILL 0x004389B0  ObjectClass::CleanupAudioAndRefs  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::CleanupAudioAndRefs() {
{
      int v2;
      int result;

      v2 = this->fallRate;
      if ( v2 )
      {
        *(_DWORD *)(v2 + 56) = 0;
        *(_BYTE *)(this->fallRate + 104) = 0;
      }
      this->q058 = 1;
      this->objectTypeFlags = 0;
      this->fallRate = 0;
      this->owningHouseIndex = 0;
      result = AudioFile::Stop((_DWORD *)(this + 60));
      this->q054 = 0;
      return result;
}
} } }

// ==== BACKFILL 0x004389F0  BombClass::IsDeathBomb  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::IsDeathBomb()
{
{
    return this->audioController;
}
}

// ==== BACKFILL 0x00438A60  ??0Iostream_init_QAE_XZ_1  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_438A60::__0Iostream_init_QAE_XZ_1()
{
{
    return this;
}
}

// ==== BACKFILL 0x00438A70  BombClass::TimeToExplode  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
bool BombClass::TimeToExplode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall BombClass::TimeToExplode(int this)
{
  return !this->audioController && (int)MEMORY[0xA8ED84] > *(_DWORD *)(this + 56) && !this->BombClass_field_58; /*0x438a8c*/
}
}

// ==== BACKFILL 0x00438B00  BombClass::ddtor  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 108652931;
  a2[1] = 299085213;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}

// ==== BACKFILL 0x00438B40  BombClass::Write  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::Write(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_BombClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_BombClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_BombClass;
    *(int *)&aP0->__pad_0[12] = &vt_BombClass;
    }
    AudioController::Init(&aP0[1].nextArrayIndex);
    *(int *)&aP0[2].__pad_0[12] = 0;
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[8]);
  }
    return (int)Prefix_0->__pad_0;
}
}

// ==== BACKFILL 0x00438BD0  BombClass::Seek  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x00439080  TechnoClass::checkRange  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
namespace ra2 { namespace game { int TechnoClass::checkRange(TechnoClass * aP1) {
{
    HashTable *v2;
    int *v3;
    int v4;
    int v5;
    int v6;
    v2 = (HashTable *)this->owningHouseIndex;
    v3 = this + 6;
    v4 = this->NeedsSaveOrLink;
    if ( (int)v2 < v4 || ((LOBYTE(v5) = *((char *)(v3) + 13), (char)v5) || !v4) && (v5 = v3[5], v5 > 0) && (LOBYTE(v5) = (*(int (__thiscall **)(int *, int, int))(*v3 + 8))(v3, v4 + v5, 0), (char)v5) )
  {
    v5 = v3[4];
    v6 = v3[1];
    v3[4] = v5 + 1;
    *(int *)(v6 + 4 * v5) = aP1;
  }
    return v5;
}
} } }

// ==== BACKFILL 0x00439150  AbstractClass::processDetection  cls=AbstractClass  sig=csp  renamed_refs=3  residual=- ====
namespace ra2 { namespace game { int AbstractClass::processDetection(int aP1) {
{
    AbstractClass *v3;
    int v4;
    int v5;
    int v6;
    int result;
    int i;
    int v9;
    v3 = aP1;
    v4 = this->IsClean(&aP1);
    if ( v4 != -1 )
  {
    v5 = this->uniqueId;
    if ( v4 < v5 )
    {
    v6 = v5 - 1;
    for ( this->uniqueId = v6; v4 < this->uniqueId; *(int *)(this->vtable2 + 4 * v4 - 4) = *(int *)(this->vtable2 + 4 * v4) )
    ++v4;
    }
  }
    result = this->uniqueId;
    for ( i = 0; i < result; ++i )
  {
    v9 = *(int *)(this->vtable2 + 4 * i);
    if ( v9 )
    {
    if ( *(AbstractClass **)(v9 + 36) == v3 )
    *(int *)(v9 + 36) = 0;
    }
    result = this->uniqueId;
  }
    return result;
}
} } }

// ==== BACKFILL 0x004393D0  BombClass::StubReturn92  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::StubReturn92() const { return 92; }

// ==== BACKFILL 0x004393E0  BombClass::StubReturn68  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::StubReturn68() const { return 68; }

// ==== BACKFILL 0x004393F0  BombClass::CopyTo  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
BombClass * BombClass::CopyTo(char a2)
{
{
    int v3;
    int *v5;
    *(void**)this = vt_BombClass;
    *(this + 1) = (unsigned int)vt_BombClass;
    *(this + 2) = (unsigned int)vt_BombClass;
    *(this + 3) = &vt_BombClass;
    AudioFileClass::Release(this + 15);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, int **))(DataGlobal_89C668 + 16))(&DataGlobal_89C668, &v5);
    if ( v3 != -1 && v3 < DataGlobal_89C678 && v3 < --DataGlobal_89C678 )
  {
    do
    {
    ++v3;
    *((int *)(DataGlobal_89C66C) + v3 - 1) = *((int *)(DataGlobal_89C66C) + v3);
    }
    while ( v3 < DataGlobal_89C678 );
  }
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BombClass *)this;
}
}

// ==== BACKFILL 0x004399A0  Coord::GetCoords  cls=Coord  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Coord::GetCoords(int * outCoords)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Coord::GetCoords(float *this, int *outCoords)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  v3 = Math::RoundToInt(*(this + 6)); /*0x4399b0*/
  v4 = Math::RoundToInt(*(this + 7)); /*0x4399ba*/
  v5 = Math::RoundToInt(*(this + 8)); /*0x4399bc*/
  *outCoords = v3; /*0x4399c7*/
  outCoords[1] = v4; /*0x4399cb*/
  outCoords[2] = v5; /*0x4399cf*/
  return outCoords; /*0x4399c9*/
}
}

// ==== BACKFILL 0x004399E0  VoxelAnimClass::QuaternionToMatrix  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
float * VoxelAnimClass::QuaternionToMatrix(float * a2)
{
{
    float *v2;
    float v4[12];
    v2 = ToQuaternionMatrix(v4, this + 12);
    qmemcpy(a2, v2, 0x30u);
    return a2;
}
}

// ==== BACKFILL 0x00439A10  JumpjetLocomotionClass::ComputeVectorLengthMetric  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=7  residual=- ====
double JumpjetLocomotionClass::ComputeVectorLengthMetric()
{
{
    int v2;
    double v3;
    int v4;
    double v5;
    int GroundHeight;
    int v7;
    double v8;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14[3];
    v2 = Math::RoundToInt(this->vtable3);
    v3 = this->TurnRate;
    v14[0] = v2;
    v4 = Math::RoundToInt(v3);
    v5 = this->Speed;
    v14[1] = v4;
    v14[2] = Math::RoundToInt(v5);
    GroundHeight = Cell::GetGroundHeight(v14);
    v7 = Math::RoundToInt(this->Speed - (double)GroundHeight);
    v10 = v7;
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v14) + 80) & 0x100) != 0 && v7 >= DataGlobal_89C76C )
    v10 = v7 - DataGlobal_89C76C;
    v11 = Math::RoundToInt(this->Climb);
    v12 = Math::RoundToInt(this->Crash);
    v13 = Math::RoundToInt((double)v10 * *(double *)(this + 8) + this->Height);
    v8 = Math::Sqrt((double)v13 * (double)v13 + (double)v11 * (double)v11 + (double)v12 * (double)v12);
    return (double)(int)Math::RoundToInt(v8);
}
}

// ==== BACKFILL 0x0043A130  JumpjetLocomotionClass::ComputeVectorLengthMetric_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::ComputeVectorLengthMetric_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_43A130(float *this)
{
  Math::Sqrt(*this * *this + *(this + 1) * *(this + 1) + *(this + 2) * *(this + 2)); /*0x43a154*/
}
}

// ==== BACKFILL 0x0043A500  COM::GetClassID  cls=NeuronClass  sig=csp  renamed_refs=0  residual=- ====
int COM::GetClassID(int a1, unsigned int * a2)
{
{
    if ( !a2 )
    return -2147467261;
    *a2 = 605729558;
    *((int*)(a2) + 1) = 298994933;
    *((int*)(a2) + 2) = 268445372;
    *((int*)(a2) + 3) = 1303416651;
    return 0;
}
}

// ==== BACKFILL 0x0043A5D0  Power::Update  cls=NeuronClass  sig=csp  renamed_refs=0  residual=- ====
int Power::Update(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Power_Update(_DWORD *this, int *a2)
{
  AbstractClass::ProcessPower((int)this, a2); /*0x43a5d9*/
  return Power::TimerProcess((int)MEMORY[0xA8ED84] - *(this + 12)); /*0x43a5f0*/
}
}

// ==== BACKFILL 0x0043A670  sub_43A670  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43A670::sub_43A670()
{
{
    int v2;
    int v3;
    int v4;
    v2 = 0;
    v3 = this->M20;
    if ( v3 > 0 )
  {
    do
    {
    v4 = *(int *)(this->M8 + 4 * v2);
    if ( v4 )
    (*(void (__thiscall **)(int, int))(*(int *)(v4) + 32))(v4, 1);
    ++v2;
    *(int *)(this->M8 + 4 * v2 - 4) = 0;
    }
    while ( v2 < v3 );
  }
    return (*(int (__thiscall **)(int *))(this->M4 + 12))(this + 1);
}
}

// ==== BACKFILL 0x0043A6B0  sub_43A6B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43A6B0::sub_43A6B0(int a2, int a3)
{
{
    int v4;
    int v5;
    int v6;
    v4 = 0;
    v5 = this->M20;
    if ( v5 > 0 )
  {
    do
    {
    v6 = *(int *)(this->M8 + 4 * v4);
    if ( v6 )
    (*(void (__thiscall **)(int, int))(*(int *)(v6) + 32))(v6, 1);
    ++v4;
    *(int *)(this->M8 + 4 * v4 - 4) = 0;
    }
    while ( v4 < v5 );
  }
    (*(void (__thiscall **)(int *))(this->M4 + 12))(this + 1);
    this->M28 = a2;
    this->M32 = a3;
    return a2;
}
}

// ==== BACKFILL 0x0043A770  sub_43A770  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43A770::sub_43A770(unsigned int * a2, int a3)
{
{
    int *v3;
    int result;
    int *v6;
    int v7;
    int v8;
    int v9;
    int *v10;
    int v11;
    v3 = a2;
    if ( !a2 )
    return -2147467261;
    v6 = (int *)this->M20;
    v7 = *a2;
    v10 = a2;
    a2 = v6;
    result = (*(int (__stdcall **)(int *, int **, int, int))(v7 + 16))(v10, &a2, 4, 0);
    if ( result >= 0 )
  {
    v8 = 0;
    if ( (int)a2 <= 0 )
    {
    return 0;
    }
    else
    {
    v9 = a3;
    while ( 1 )
      {
    v11 = *(int *)(this->M8 + 4 * v8);
    result = (*(int (__stdcall **)(int, int *, int))(*(int *)(v11) + 24))(v11, v3, v9);
    if ( result < 0 )
    break;
    if ( ++v8 >= (int)a2 )
    return 0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0043AD00  Buffer::Init  cls=Buffer  sig=csp  renamed_refs=3  residual=- ====
unsigned int * Buffer::Init(int a2, AbstractClass * aP2)
{
{
    *(void**)this = a2;
    this->Buffer_field_04 = aP2;
    this->Buffer_field_08 = 0;
    if ( !a2 && (int)aP2 > 0 )
  {
    *(void**)this = __2_YAPAXI_Z((size_t)aP2);
    this->Buffer_field_08 = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x0043ADC0  INIClass::loadFile  cls=INIClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* INIClass::loadFile(int a1) {
{
      *this = 0;
      this->headNode = aP1;
      this->q008 = 0;
      if ( (int)aP1 > 0 )
      {
        *this = __2_YAPAXI_Z((size_t)aP1);
        this->q008 = 1;
      }
      return this;
}
} }

// ==== BACKFILL 0x0043ADF0  sub_43ADF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_43ADF0::sub_43ADF0(unsigned int * a1)
{
{
    this->M8 = 0;
    *(int *)this = *a1;
    this->M4 = *((int*)(a1) + 1);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x0043AE50  Vector::Clear  cls=Vector  sig=csp  renamed_refs=1  residual=- ====
void Vector::Clear()
{
{
    if ( (unsigned char)this->Vector_field_0x8 )
    __3_YAXPAX_Z(*(void **)this);
    *(int *)this = 0;
    this->Vector_field_0x4 = 0;
    this->Vector_field_0x8 = 0;
}
}

// ==== BACKFILL 0x0043AF10  sub_43AF10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_43AF10::sub_43AF10()
{
{
    *(void**)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    return this;
}
}

// ==== BACKFILL 0x0043B680  BuildingClass::ctor  cls=BuildingClass  sig=csp  renamed_refs=7  residual=- ====
namespace gamemd { void* BuildingClass::ctor(int a1) {
{
      wchar_t *v3;

      TechnoClass::Constructor(a2);
      this->RepairProgress = 0;
      this->q624 = 0;
      v3 = g_CurrentFrame;
      this->q630 = 0;
      this->q628 = v3;
      this->q634 = 0;
      this->q638 = 1;
      this->Occupants = 0;
      this->FiringOccupantIndex = 0;
      this->Audio7 = 1;
      this->q679 = 0;
      *(this + 411) = &vt_DynamicVectorClass_InfantryClass;
      this->q680 = 10;
      this->q67C = 0;
      this->q688 = 0;
      this->Audio8 = 0;
      this->q690 = 1;
      this->q691 = 0;
      *(this + 417) = &vt_DynamicVectorClass_InfantryClass;
      this->q698 = 10;
      this->q694 = 0;
      *this = &BuildingClass_Vtable;
      this->vtable2 = &BuildingClass_Vtable2;
      this->vtable3 = &BuildingClass_Vtable3;
      this->vtable4 = &BuildingClass_Vtable4;
      return this;
}
} }

// ==== BACKFILL 0x0043EE50  sub_43EE50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43EE50::sub_43EE50()
{
{
    int *Value;
    int v3;
    int result;
    int v5;
    if ( !this->Vf1020() || !this->M1408 )
    return 0;
    Value = ProgressTimer::GetValue((short *)(this) + 452, &v5);
    v3 = this->M1408;
    result = DataGlobal_7F4890[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F];
    if ( v3 )
  {
    *(int *)(v3 + 172) = result;
    *(int *)(v3 + 196) = 0;
  }
    return result;
}
}
