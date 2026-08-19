#include "structure/infantry.hpp"

#include <cstring>
#include <cmath>

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = (uint32_t)(AbstractFlags::Foot)
                                  | (uint32_t)(AbstractFlags::Object)
                                  | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 -- InfantryClass::Construct (617B)
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim((Sequence)(-1))
    , InfantryClass_field_timer_6C8{}
    , PanicDurationLeft(0)
    , PermanentBerzerk(false)
    , Technician(false)
    , InfantryClass_field_bool_6DA(false)
    , Crawling(false)
    , InfantryClass_field_bool_6DC(false)
    , InfantryClass_field_bool_6DD(false)
    , InfantryClass_field_6E0(0)
    , ShouldDeploy(false)
    , InfantryClass_field_int_6E8(2)
    , unused_6EC(0)
{
    abstractFlags = kInfantryFlag;
}

// ============================================================
// Mission stubs
// ============================================================
int InfantryClass::Mission_Enter()
{
    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    hasParachute = true;
    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    return 5;
}

// ============================================================
// Phase 3: Deploy/Undeploy
// ============================================================

// IDA: 0x4D5350 (ProcessDeploy, 614B)
void InfantryClass::ProcessDeploy()
{
    // Infantry-specific deploy logic
    // Check if can deploy, set mission, deploy animations
}

// IDA: 0x51D6F0 (ProcessDeployAction, 1013B) — validates weapon, checks mission, sets loco
// 0x51d6f0
int InfantryClass::ProcessDeployAction(int deploy_type, bool a3, bool a4)
{
// [IDA decompile]
char __thiscall InfantryClass::ProcessDeployAction(_DWORD *this, int a2, char a3, char a4)
{
  int v4; // edi
  __int16 *v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  char *ProductionTimeMult; // eax
  char *v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v4 = a2;
  if ( a2 == -1
    || !*(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 36 * a2 + 4)
    || *(this + 433) == 33 && *((_BYTE *)this + 141) )
  {
    return 0;
  }
  if ( *(this + 183)
    && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 2048)
    && ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 692))(this) == 1.0
    && v4 == 3 )
  {
    v4 = 39;
    goto LABEL_12;
  }
  if ( v4 == 5 && !*(_BYTE *)(*(this + 432) + 3773) )
    return 0;
LABEL_12:
  if ( *(_DWORD *)(*(this + 432) + 1460) == 3 )
  {
    v6 = (__int16 *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &a2);
    v7 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v6) + 59);
    v8 = 1;
    if ( (v7 == 6 || v7 == 2) && !*((_BYTE *)this + 140) )
    {
      v8 = 0;
      switch ( v4 )
      {
        case 3:
        case 6:
          v4 = 17;
          break;
        case 2:
        case 0:
          v4 = 16;
          break;
        case 9:
          v4 = 18;
          break;
        case 10:
          v4 = 19;
          break;
        case 11:
          v4 = 20;
          break;
        case 12:
          v4 = 21;
          break;
        case 4:
        case 8:
          v4 = 22;
          break;
      }
    }
    v9 = *(this + 442);
    if ( v9 || v8 != 1 )
    {
      if ( v9 == 1 && !v8 )
      {
        v24 = *(this + 39);
        v25 = *(this + 40);
        v11 = *(this + 432);
        v26 = *(this + 41);
        StartAudioControllerAt(*(_DWORD *)(v11 + 3748), (int)&v24, 0);
      }
    }
    else
    {
      v24 = *(this + 39);
      v25 = *(this + 40);
      v10 = *(this + 432);
      v26 = *(this + 41);
      StartAudioControllerAt(*(_DWORD *)(v10 + 3752), (int)&v24, 0);
    }
    *(this + 442) = v8;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 84))(this)
    || *((_BYTE *)this + 140)
    || *(int *)(*(_DWORD *)(*(this + 432) + 3644) + 828) <= 0
    || v4 )
  {
    if ( v4 == 3 && (int)*(this + 437) >= 200 )
      v4 = 37;
  }
  else
  {
    v4 = 23;
  }
  v12 = *(this + 433);
  if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] )
    return 0;
  if ( v4 == 27 )
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1388) != -1 )
    {
      v24 = *(this + 39);
      v25 = *(this + 40);
      v13 = *this;
      v26 = *(this + 41);
      v14 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v13 + 132))(this) + 1388);
      StartAudioControllerAt(v14, (int)&v24, 0);
    }
  }
  else if ( v4 == 31 && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1392) != -1 )
  {
    v24 = *(this + 39);
    v15 = *this;
    v25 = *(this + 40);
    v26 = *(this + 41);
    v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v15 + 132))(this) + 1392);
    StartAudioControllerAt(v16, (int)&v24, 0);
  }
  *(this + 433) = v4;
  if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 )
  {
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)MEMORY[0xA8EB60], (unsigned __int8)byte_7EAF7F[4 * v4]);
    v18 = (char *)(this + 64);
    *(this + 64) = MEMORY[0xA8ED84];
    v19 = v25;
  }
  else
  {
    ProductionTimeMult = (char *)(unsigned __int8)byte_7EAF7F[4 * v4];
    v18 = (char *)(this + 64);
    *(this + 64) = MEMORY[0xA8ED84];
    v19 = v25;
  }
  *((_DWORD *)v18 + 1) = v19;
  *((_DWORD *)v18 + 2) = ProductionTimeMult;
  *(this + 67) = ProductionTimeMult;
  if ( a4 )
  {
    v20 = *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 36 * v4 + 4);
    if ( v20 <= 1 )
      v20 = 1;
    *(this + 62) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v20 - 1);
  }
  else
  {
    *(this + 62) = 0;
  }
  if ( !*(this + 27) )
    (*(void (__thiscall **)(_DWORD *))(*this + 1280))(this);
  v21 = v4 - 5;
  if ( v21 )
  {
    v22 = v21 - 2;
    if ( !v22 || v22 == 20 )
    {
      *((_BYTE *)this + 1755) = 0;
      return 1;
    }
  }
  else
  {
    *((_BYTE *)this + 1755) = 1;
  }
  return 1;
}

/* ASM:
sub     esp, 0Ch
push    ebx
push    esi
push    edi
mov     edi, [esp+18h+arg_0]
or      ebx, 0FFFFFFFFh
mov     esi, ecx
cmp     edi, ebx
jz      loc_51DADA
mov     eax, [esi+6C0h]
lea     ecx, [edi+edi*8]
mov     edx, [eax+0E3Ch]
mov     eax, [edx+ecx*4+4]
test    eax, eax
jz      loc_51DADA
cmp     dword ptr [esi+6C4h], 21h ; '!'
jnz     short loc_51D739
mov     al, [esi+8Dh]
test    al, al
jnz     loc_51DADA

loc_51D739:                             ; CODE XREF: InfantryClass__ProcessDeployAction+39↑j
mov     eax, [esi+2DCh]
test    eax, eax
jz      short loc_51D77A
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     ecx, [eax+800h]
test    ecx, ecx
jz      short loc_51D77A
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2B4h]
fcomp   ds:dbl_7E1718
fnstsw  ax
test    ah, 40h
jz      short loc_51D77A
cmp     edi, 3
jnz     short loc_51D77A
mov     edi, 27h ; '''
jmp     short loc_51D793
; ---------------------------------------------------------------------------

loc_51D77A:                             ; CODE XREF: InfantryClass__ProcessDeployAction+51↑j
; InfantryClass__ProcessDeployAction+65↑j ...
cmp     edi, 5
jnz     short loc_51D793
mov     eax, [esi+6C0h]
mov     cl, [eax+0EBDh]
test    cl, cl
jz      loc_51DADA

loc_51D793:                             ; CODE XREF: InfantryClass__ProcessDeployAction+88↑j
; InfantryClass__ProcessDeployAction+8D↑j
mov     ecx, [esi+6C0h]
cmp     dword ptr [ecx+5B4h], 3
jnz     loc_51D8BF
mov     edx, [esi]
lea     eax, [esp+18h+arg_0]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     eax, [eax+0ECh]
mov     ebp, 1
cmp     eax, 6
jz      short loc_51D7D6
cmp     eax, 2
jnz     short loc_51D842

loc_51D7D6:                             ; CODE XREF: InfantryClass__ProcessDeployAction+DF↑j
mov     al, [esi+8Ch]
test    al, al
jnz     short loc_51D842
xor     ebp, ebp
cmp     edi, 3
jz      short loc_51D83D
cmp     edi, 6
jz      short loc_51D83D
cmp     edi, 2
jz      short loc_51D836
test    edi, edi
jz      short loc_51D836
cmp     edi, 9
jnz     short loc_51D801
mov     edi, 12h
jmp     short loc_51D842
; ---------------------------------------------------------------------------

loc_51D801:                             ; CODE XREF: InfantryClass__ProcessDeployAction+108↑j
cmp     edi, 0Ah
jnz     short loc_51D80D
mov     edi, 13h
jmp     short loc_51D842
; ---------------------------------------------------------------------------

loc_51D80D:                             ; CODE XREF: InfantryClass__ProcessDeployAction+114↑j
cmp     edi, 0Bh
jnz     short loc_51D819
mov     edi, 14h
jmp     short loc_51D842
; ---------------------------------------------------------------------------

loc_51D819:                             ; CODE XREF: InfantryClass__ProcessDeployAction+120↑j
cmp     edi, 0Ch
jnz     short loc_51D825
mov     edi, 15h
jmp     short loc_51D842
; ---------------------------------------------------------------------------

loc_51D825:                             ; CODE XREF: InfantryClass__ProcessDeployAction+12C↑j
cmp     edi, 4
jz      short loc_51D82F
cmp     edi, 8
jnz     short loc_51D842

loc_51D82F:                             ; CODE XREF: InfantryClass__ProcessDeployAction+138↑j
mov     edi, 16h
jmp     short loc_51D842
; ---------------------------------------------------------------------------

loc_51D836:                             ; CODE XREF: InfantryClass__ProcessDeployAction+FF↑j
; InfantryClass__ProcessDeployAction+103↑j
mov     edi, 10h
jmp     short loc_51D842
; ---------------------------------------------------------------------------

loc_51D83D:                             ; CODE XREF: InfantryClass__ProcessDeployAction+F5↑j
; InfantryClass__ProcessDeployAction+FA↑j
mov     edi, 11h

loc_51D842:                             ; CODE XREF: InfantryClass__ProcessDeployAction+E4↑j
; InfantryClass__ProcessDeployAction+EE↑j ...
mov     eax, [esi+6E8h]
test    eax, eax
jnz     short loc_51D87F
cmp     ebp, 1
jnz     short loc_51D87F
lea     ecx, [esi+9Ch]
push    0
mov     edx, [ecx]
mov     [esp+20h+var_C], edx
lea     edx, [esp+20h+var_C]
mov     eax, [ecx+4]
mov     [esp+20h+var_8], eax
mov     eax, [esi+6C0h]
mov     ecx, [ecx+8]
mov     [esp+20h+var_4], ecx
mov     ecx, [eax+0EA8h]
jmp     short loc_51D8B3
; ---------------------------------------------------------------------------

loc_51D87F:                             ; CODE XREF: InfantryClass__ProcessDeployAction+15A↑j
; InfantryClass__ProcessDeployAction+15F↑j
cmp     eax, 1
jnz     short loc_51D8B8
test    ebp, ebp
jnz     short loc_51D8B8
lea     ecx, [esi+9Ch]
push    ebp
mov     edx, [ecx]
mov     [esp+20h+var_C], edx
lea     edx, [esp+20h+var_C]
mov     eax, [ecx+4]
mov     [esp+20h+var_8], eax
mov     eax, [esi+6C0h]
mov     ecx, [ecx+8]
mov     [esp+20h+var_4], ecx
mov     ecx, [eax+0EA4h]

loc_51D8B3:                             ; CODE XREF: InfantryClass__ProcessDeployAction+18D↑j
call    StartAudioControllerAt

loc_51D8B8:                             ; CODE XREF: InfantryClass__ProcessDeployAction+192↑j
; InfantryClass__ProcessDeployAction+196↑j
mov     [esi+6E8h], ebp
pop     ebp

loc_51D8BF:                             ; CODE XREF: InfantryClass__ProcessDeployAction+B0↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+54h]
test    al, al
jz      short loc_51D8F5
mov     al, [esi+8Ch]
test    al, al
jnz     short loc_51D8F5
mov     eax, [esi+6C0h]
mov     ecx, [eax+0E3Ch]
mov     eax, [ecx+33Ch]
test    eax, eax
jle     short loc_51D8F5
test    edi, edi
jnz     short loc_51D8F5
mov     edi, 17h
jmp     short loc_51D90B
; ---------------------------------------------------------------------------

loc_51D8F5:                             ; CODE XREF: InfantryClass__ProcessDeployAction+1D8↑j
; InfantryClass__ProcessDeployAction+1E2↑j ...
cmp     edi, 3
jnz     short loc_51D90B
cmp     dword ptr [esi+6D4h], 0C8h
jl      short loc_51D90B
mov     edi, 25h ; '%'

loc_51D90B:                             ; CODE XREF: InfantryClass__ProcessDeployAction+203↑j
; InfantryClass__ProcessDeployAction+208↑j ...
mov     eax, [esi+6C4h]
cmp     edi, eax
jz      loc_51DADA
cmp     eax, ebx
jz      short loc_51D934
mov     cl, [esp+18h+arg_4]
test    cl, cl
jnz     short loc_51D934
mov     cl, ds:byte_7EAF7C[eax*4]
test    cl, cl
jz      loc_51DADA

loc_51D934:                             ; CODE XREF: InfantryClass__ProcessDeployAction+22B↑j
; InfantryClass__ProcessDeployAction+233↑j
cmp     edi, 1Bh
jnz     short loc_51D981
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+56Ch], ebx
jz      loc_51D9CF
lea     eax, [esi+9Ch]
push    0
lea     ebx, [esp+1Ch+var_C]
mov     ecx, [eax]
mov     [esp+1Ch+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+1Ch+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+1Ch+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+56Ch]
jmp     short loc_51D9C8
; ---------------------------------------------------------------------------

loc_51D981:                             ; CODE XREF: InfantryClass__ProcessDeployAction+247↑j
cmp     edi, 1Fh
jnz     short loc_51D9CF
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     [eax+570h], ebx
jz      short loc_51D9CF
lea     ecx, [esi+9Ch]
push    0
lea     ebx, [esp+1Ch+var_C]
mov     edx, [ecx]
mov     [esp+1Ch+var_C], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+1Ch+var_8], eax
mov     ecx, [ecx+8]
mov     [esp+1Ch+var_4], ecx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [eax+570h]

loc_51D9C8:                             ; CODE XREF: InfantryClass__ProcessDeployAction+28F↑j
mov     edx, ebx
call    StartAudioControllerAt

loc_51D9CF:                             ; CODE XREF: InfantryClass__ProcessDeployAction+259↑j
; InfantryClass__ProcessDeployAction+294↑j ...
cmp     edi, 9
mov     [esi+6C4h], edi
jz      short loc_51D9F3
cmp     edi, 0Ah
jz      short loc_51D9F3
cmp     edi, 12h
jz      short loc_51D9F3
cmp     edi, 13h
jz      short loc_51D9F3
cmp     edi, 17h
jz      short loc_51D9F3
cmp     edi, 20h ; ' '
jnz     short loc_51DA1F

loc_51D9F3:                             ; CODE XREF: InfantryClass__ProcessDeployAction+2E8↑j
; InfantryClass__ProcessDeployAction+2ED↑j ...
xor     eax, eax
mov     ecx, 0A8EB60h
mov     al, ds:byte_7EAF7F[edi*4]
push    eax
call    Rules__GetProductionTimeMult
mov     ecx, dword_A8ED54+30h
lea     edx, [esi+100h]
mov     [esi+100h], ecx
mov     ecx, [esp+18h+var_8]
jmp     short loc_51DA3E
; ---------------------------------------------------------------------------

loc_51DA1F:                             ; CODE XREF: InfantryClass__ProcessDeployAction+301↑j
mov     ecx, dword_A8ED54+30h
xor     eax, eax
mov     al, ds:byte_7EAF7F[edi*4]
lea     edx, [esi+100h]
mov     [esi+100h], ecx
mov     ecx, [esp+18h+var_8]

loc_51DA3E:                             ; CODE XREF: InfantryClass__ProcessDeployAction+32D↑j
mov     [edx+4], ecx
mov     [edx+8], eax
mov     [esi+10Ch], eax
mov     al, [esp+18h+arg_8]
test    al, al
jz      short loc_51DA8C
mov     edx, [esi+6C0h]
lea     eax, [edi+edi*8]
mov     ecx, [edx+0E3Ch]
mov     eax, [ecx+eax*4+4]
cmp     eax, 1
jg      short loc_51DA6F
mov     eax, 1

loc_51DA6F:                             ; CODE XREF: InfantryClass__ProcessDeployAction+378↑j
mov     edx, ds:0A8B230h
dec     eax
push    eax
push    0
lea     ecx, [edx+218h]
call    Random__Range
mov     [esi+0F8h], eax
jmp     short loc_51DA96
; ---------------------------------------------------------------------------

loc_51DA8C:                             ; CODE XREF: InfantryClass__ProcessDeployAction+360↑j
mov     dword ptr [esi+0F8h], 0

loc_51DA96:                             ; CODE XREF: InfantryClass__ProcessDeployAction+39A↑j
mov     eax, [esi+6Ch]
test    eax, eax
jnz     short loc_51DAA7
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+500h]

loc_51DAA7:                             ; CODE XREF: InfantryClass__ProcessDeployAction+3AB↑j
sub     edi, 5
jz      short loc_51DAC8
sub     edi, 2
jz      short loc_51DAB6
sub     edi, 14h
jnz     short loc_51DACF

loc_51DAB6:                             ; CODE XREF: InfantryClass__ProcessDeployAction+3BF↑j
mov     byte ptr [esi+6DBh], 0
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 0Ch
retn    0Ch
; ---------------------------------------------------------------------------

loc_51DAC8:                             ; CODE XREF: InfantryClass__ProcessDeployAction+3BA↑j
mov     byte ptr [esi+6DBh], 1

loc_51DACF:                             ; CODE XREF: InfantryClass__ProcessDeployAction+3C4↑j
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 0Ch
retn    0Ch
; ---------------------------------------------------------------------------

loc_51DADA:                             ; CODE XREF: InfantryClass__ProcessDeployAction+11↑j
; InfantryClass__ProcessDeployAction+2C↑j ...
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 0Ch
retn    0Ch
*/
}

// IDA: 0x5200B0 (ProcessIdleDeploy, 428B)
// 0x5200b0
int InfantryClass::ProcessIdleDeploy()
{
// [IDA decompile]
char __thiscall sub_5200B0(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( *(this + 437) > 0 )
  {
    if ( !*(_BYTE *)(*(this + 432) + 3772) )
      --*(this + 437);
    if ( !*(this + 437) && !*(this + 191) && (*(unsigned __int8 (__thiscall **)(int *))(*this + 684))(this) )
      *(this + 191) = *(_DWORD *)(*(this + 432) + 1668);
    v2 = *(this + 437);
    if ( *((_BYTE *)this + 1755) )
    {
      if ( v2 < 50 )
      {
        v3 = *(this + 433);
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
          (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 7, 0, 0);
      }
    }
    else if ( v2 >= 50 )
    {
      v4 = *(this + 433);
      if ( v4 != 27 && v4 != 28 && v4 != 29 && v4 != 30 )
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) )
          goto LABEL_42;
        if ( !*(this + 361) )
        {
          if ( !*(this + 413) )
            WinAPI::Wrapper(-2147467261);
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
          {
LABEL_42:
            if ( !*(_BYTE *)(*(this + 432) + 3775) )
              (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 5, 0, 0);
          }
        }
      }
    }
  }
  LOBYTE(v5) = *(_BYTE *)(*(this + 432) + 3775);
  if ( (_BYTE)v5 )
  {
    if ( *(this + 437) > 50 )
    {
      v5 = *(this + 433);
      if ( v5 != 27 && v5 != 28 && v5 != 29 && v5 != 30 )
      {
        LOBYTE(v5) = *((_BYTE *)this + 141);
        if ( !(_BYTE)v5 )
        {
          if ( !*(this + 413) )
            WinAPI::Wrapper(-2147467261);
          LOBYTE(v5) = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413));
          if ( !(_BYTE)v5 )
          {
            v5 = *(this + 361);
            if ( !v5 )
              LOBYTE(v5) = (*(int (__thiscall **)(int *, int *, int, _DWORD))(*this + 372))(
                             this,
                             &MEMORY[0xA8F200],
                             1,
                             0);
          }
        }
      }
    }
  }
  return v5;
}

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+6D4h]
test    eax, eax
jle     loc_5201DC
mov     eax, [esi+6C0h]
mov     cl, [eax+0EBCh]
test    cl, cl
jnz     short loc_5200D7
dec     dword ptr [esi+6D4h]

loc_5200D7:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+1F↑j
mov     eax, [esi+6D4h]
test    eax, eax
jnz     short loc_52010B
mov     eax, [esi+2FCh]
test    eax, eax
jnz     short loc_52010B
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2ACh]
test    al, al
jz      short loc_52010B
mov     eax, [esi+6C0h]
mov     ecx, [eax+684h]
mov     [esi+2FCh], ecx

loc_52010B:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+2F↑j
; InfantryClass__ProcessIdleDeploy+39↑j ...
mov     al, [esi+6DBh]
test    al, al
mov     eax, [esi+6D4h]
jz      short loc_520160
cmp     eax, 32h ; '2'
jge     loc_5201DC
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      loc_5201DC
cmp     eax, 1Ch
jz      loc_5201DC
cmp     eax, 1Dh
jz      loc_5201DC
cmp     eax, 1Eh
jz      loc_5201DC
mov     edx, [esi]
push    0
push    0
push    7
mov     ecx, esi
call    dword ptr [edx+558h]
jmp     short loc_5201DC
; ---------------------------------------------------------------------------

loc_520160:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+69↑j
cmp     eax, 32h ; '2'
jl      short loc_5201DC
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_5201DC
cmp     eax, 1Ch
jz      short loc_5201DC
cmp     eax, 1Dh
jz      short loc_5201DC
cmp     eax, 1Eh
jz      short loc_5201DC
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_5201BC
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_5201DC
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_5201AC
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_5201AC:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+F0↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_5201DC

loc_5201BC:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+DC↑j
mov     edx, [esi+6C0h]
mov     al, [edx+0EBFh]
test    al, al
jnz     short loc_5201DC
mov     eax, [esi]
push    0
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+558h]

loc_5201DC:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+B↑j
; InfantryClass__ProcessIdleDeploy+6E↑j ...
mov     ecx, [esi+6C0h]
mov     al, [ecx+0EBFh]
test    al, al
jz      short loc_52025A
cmp     dword ptr [esi+6D4h], 32h ; '2'
jle     short loc_52025A
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_52025A
cmp     eax, 1Ch
jz      short loc_52025A
cmp     eax, 1Dh
jz      short loc_52025A
cmp     eax, 1Eh
jz      short loc_52025A
mov     al, [esi+8Dh]
test    al, al
jnz     short loc_52025A
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_52022D
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_52022D:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+171↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short loc_52025A
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_52025A
mov     eax, [esi]
push    0
push    1
push    (offset dword_A8ED54+4ACh)
mov     ecx, esi
call    dword ptr [eax+174h]

loc_52025A:                             ; CODE XREF: InfantryClass__ProcessIdleDeploy+13A↑j
; InfantryClass__ProcessIdleDeploy+143↑j ...
pop     esi
retn
*/
}

bool InfantryClass::CanInitiateDeploy()
{
    // IDA: 0x521B60 — check deploy preconditions
    // Check type flags, cell passability, deploy animation
    return !Crawling && Type != nullptr;
}

bool InfantryClass::CanDeployAtCell()
{
    // IDA: 0x5221D0 — check cell for deploy
    return true;
}

bool InfantryClass::CheckDeployPath()
{
    // IDA: 0x521EB0 — path check for deploy
    return true;
}

int InfantryClass::CreateDeployLocomotor()
{
    // IDA: 0x522FE0 — create deploy locomotor COM object
    return 0;
}

bool InfantryClass::StartBombDeploy()
{
    // IDA: 0x522C00 — start Ivan bomb deploy sequence
    return false;
}

bool InfantryClass::IsBombDeployMission()
{
    // IDA: 0x5228D0 — check if current mission is bomb deploy
    return false;
}

// 0x514310
int InfantryClass::DeployAnimation()
{
// [IDA decompile]
char __stdcall InfantryClass::DeployAnimation(int a1)
{
  _DWORD *v1; // edi
  _BYTE *v2; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int *v8; // ebx
  double v9; // st7
  __int16 v10; // bx
  int v11; // ebx
  _WORD *v12; // eax
  bool v13; // bl
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  double v17; // st7
  int Member; // eax
  unsigned __int16 v19; // bx
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  bool v22; // al
  int v23; // eax
  int v24; // ecx
  int v25; // ebx
  int *v26; // ecx
  int v27; // ecx
  unsigned int v28; // ebx
  unsigned int v29; // edi
  double v30; // st7
  double v31; // st7
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  _DWORD *v35; // eax
  _BYTE *v36; // ecx
  _DWORD *v37; // edi
  int v38; // eax
  int v39; // ecx
  _DWORD *v40; // ebx
  char v41; // bl
  _BYTE *v42; // ecx
  void **v43; // eax
  int *v44; // ecx
  _DWORD *Value; // eax
  int v46; // ecx
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int *v50; // edx
  void *v51; // eax
  int *v52; // ecx
  int *v53; // eax
  int v54; // edi
  _WORD *v55; // [esp+20h] [ebp-5Ch]
  double v56; // [esp+34h] [ebp-48h] BYREF
  double v57; // [esp+3Ch] [ebp-40h] BYREF
  int v58; // [esp+48h] [ebp-34h] BYREF
  int v59; // [esp+4Ch] [ebp-30h] BYREF
  int v60; // [esp+50h] [ebp-2Ch]
  int v61; // [esp+54h] [ebp-28h]
  int v62; // [esp+58h] [ebp-24h]
  double v63; // [esp+5Ch] [ebp-20h] BYREF
  int v64; // [esp+64h] [ebp-18h]
  int v65; // [esp+70h] [ebp-Ch] BYREF
  int v66; // [esp+74h] [ebp-8h]
  int v67; // [esp+78h] [ebp-4h]

  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) )
  {
    v1 = (_DWORD *)(a1 - 4);
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) )
    {
      UpdateFootFacing(a1 - 4);
      v2 = *(_BYTE **)(a1 + 8);
      if ( !v2[144] )
        return 0;
      v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 464))(v2);
      v5 = *(_DWORD *)(a1 + 8);
      v58 = v4;
      LODWORD(v57) = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1336))(v5);
      v6 = Math::RoundToInt((double)SLODWORD(v57) * *(double *)(a1 + 76));
      v7 = *(_DWORD *)(a1 + 8);
      LODWORD(v56) = v6;
      v8 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 72))(v7, &v65);
      Int64::Equal(a1 + 32);
      v9 = Math::CalcAngle((double)v8[1] - (double)*(int *)(a1 + 36), (double)*(int *)(a1 + 32) - (double)*v8);
      v10 = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427);
      if ( !LODWORD(v56) && !abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v57) - v10) )
      {
        v13 = 1;
        if ( v1[9] != dword_A8ED54[267] || v1[10] != dword_A8ED54[268] || v1[11] != dword_A8ED54[269] )
        {
          v11 = v1[3];
          v55 = Coord::ToCell(v1 + 9, &v57);
          v12 = (_WORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 440))(v11, &v56);
          if ( !CellStruct::Equals(v12, v55) )
            v13 = 0;
        }
        v14 = v1[3];
        v1[18] = 0;
        v1[19] = 1072693248;
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v14 + 1348))(v14, 0, 1072693248);
        MovementAI::StepFootClass((int *)(a1 - 4), 0);
        if ( v13 )
          MovementAI::MainFootClass((int *)(a1 - 4), 1);
        LODWORD(v57) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1336))(*(_DWORD *)(a1 + 8));
        LODWORD(v56) = Math::RoundToInt((double)SLODWORD(v57) * *(double *)(a1 + 76));
      }
      v15 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156);
      v16 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 164);
      v60 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160) - *(_DWORD *)(a1 + 36);
      v67 = v16;
      v59 = v15 - *(_DWORD *)(a1 + 32);
      v17 = Math::Sqrt((double)v59 * (double)v59 + (double)v60 * (double)v60);
      if ( SLODWORD(v56) >= (int)Math::RoundToInt(v17) )
      {
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1718) = 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1719) = 0;
        *(_BYTE *)(a1 + 108) = 0;
        MovementAI::StepFootClass((int *)(a1 - 4), 0);
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1504) == -1
          && *(_DWORD *)(a1 + 20) == dword_A8ED54[267]
          && *(_DWORD *)(a1 + 24) == dword_A8ED54[268]
          && *(_DWORD *)(a1 + 28) == dword_A8ED54[269] )
        {
          *(_DWORD *)(a1 + 32) = dword_A8ED54[267];
          *(_DWORD *)(a1 + 36) = dword_A8ED54[268];
          *(_DWORD *)(a1 + 40) = dword_A8ED54[269];
        }
        Member = Team::GetMember(*(_DWORD **)(a1 + 8), 0);
        v19 = dword_A8ED54[259];
        LODWORD(v57) = dword_A8ED54[259];
        if ( Member )
        {
          v20 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Member + 76))(
                            Member,
                            &v65,
                            *(_DWORD *)(a1 + 8));
          LOWORD(v57) = *v20 / 256;
          WORD1(v57) = v20[1] / 256;
          v19 = LOWORD(v57);
        }
        v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 440))(*(_DWORD *)(a1 + 8), &v59);
        v22 = *v21 == __PAIR32__(WORD1(v57), v19);
        if ( *(_DWORD *)(a1 + 20) != dword_A8ED54[267]
          || *(_DWORD *)(a1 + 24) != dword_A8ED54[268]
          || *(_DWORD *)(a1 + 28) != dword_A8ED54[269]
          || v22 )
        {
          v23 = MovementAI::MainFootClass((int *)(a1 - 4), 1);
          v24 = *(_DWORD *)(a1 + 8);
          v25 = v23;
          if ( !*(_BYTE *)(v24 + 144) || *(_BYTE *)(v24 + 129) || *(_BYTE *)(v24 + 141) )
            return 7;
          if ( !v23
            && *(_DWORD *)(a1 + 32) == dword_A8ED54[267]
            && *(_DWORD *)(a1 + 36) == dword_A8ED54[268]
            && *(_DWORD *)(a1 + 40) == dword_A8ED54[269] )
          {
            v65 = *(_DWORD *)(v24 + 156);
            v66 = *(_DWORD *)(v24 + 160);
            v67 = *(_DWORD *)(v24 + 164);
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)v24 + 240))(v24, &v65);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 396))(*(_DWORD *)(a1 + 8), 2);
            v24 = *(_DWORD *)(a1 + 8);
            if ( !*(_BYTE *)(v24 + 144) || *(_BYTE *)(v24 + 129) || *(_BYTE *)(v24 + 141) )
              return 0;
          }
          if ( v25 == 7 )
          {
            if ( *(char *)(v24 + 1668) >= 0 )
              return 0;
            (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[3] + 1152))(v1[3], 0, 1);
            v1[20] = 0;
            v1[18] = 0;
            v1[21] = 0;
            v1[19] = 0;
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v1[3] + 1348))(v1[3], 0, 0);
          }
          else if ( v25 )
          {
            v39 = v1[3];
            v1[20] = 0;
            v1[18] = 0;
            v1[21] = 0;
            v1[19] = 0;
            (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v39 + 1348))(v39, 0, 0);
            v40 = v1 + 9;
            if ( v1[9] != dword_A8ED54[267] || v1[10] != dword_A8ED54[268] || v1[11] != dword_A8ED54[269] )
            {
              (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[3] + 244))(v1[3], v40);
              *v40 = dword_A8ED54[267];
              v1[10] = dword_A8ED54[268];
              v1[11] = dword_A8ED54[269];
            }
            goto LABEL_66;
          }
        }
      }
      if ( SLODWORD(v56) > 0 )
      {
        v26 = *(int **)(a1 + 8);
        v65 = v26[39];
        v66 = v26[40];
        v67 = v26[41];
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v26 + 192))(v26)
          && (*(_DWORD *)(a1 + 32) != dword_A8ED54[267]
           || *(_DWORD *)(a1 + 36) != dword_A8ED54[268]
           || *(_DWORD *)(a1 + 40) != dword_A8ED54[269]) )
        {
          v27 = *(_DWORD *)(a1 + 8);
          v63 = *(double *)(v27 + 156);
          v64 = *(_DWORD *)(v27 + 164);
          (*(void (__thiscall **)(int, double *))(*(_DWORD *)v27 + 244))(v27, &v63);
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1718) = 0;
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1719) = 0;
        }
        v61 = v65;
        v62 = v66;
        v57 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v59) - 0x3FFF) * -0.00009587672516830327;
        v28 = HIDWORD(v57);
        v29 = LODWORD(v57);
        v56 = (double)SLODWORD(v56);
        v63 = (double)v62;
        v30 = Math::SinCos(v57);
        LODWORD(v57) = Math::RoundToInt(v63 - v30 * v56);
        v31 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v28, v29)));
        v32 = Math::RoundToInt(v31 * v56 + (double)v61);
        v33 = *(_DWORD *)(a1 + 8);
        v65 = v32;
        v66 = LODWORD(v57);
        v34 = *(_DWORD *)(v33 + 156);
        HIDWORD(v63) = *(_DWORD *)(v33 + 160);
        v64 = *(_DWORD *)(v33 + 164);
        WORD1(v56) = SHIDWORD(v63) / 256;
        if ( (unsigned __int16)(v65 / 256) == (unsigned __int16)(v34 / 256)
          && (unsigned __int16)(SLODWORD(v57) / 256) == WORD1(v56) )
        {
          v41 = *(_BYTE *)(v33 + 116);
          *(_BYTE *)(v33 + 116) = 0;
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v65);
          ObjectClass::SetAnim(*(_DWORD **)(a1 + 8), v58);
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 116) = v41;
        }
        else
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 292))(v33, 0);
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v65);
          ObjectClass::SetAnim(*(_DWORD **)(a1 + 8), v58);
          v35 = Coord::To_Cell(MEMORY[0x87F7E8], &v65);
          v36 = *(_BYTE **)(a1 + 8);
          v37 = v35;
          if ( !v36[140]
            && (v35[80] & 0x100) != 0
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v36 + 456))(v36) >= dword_A8ED54[280] )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 8) + 140) = 1;
          }
          v38 = *(_DWORD *)(a1 + 8);
          if ( *(_BYTE *)(v38 + 140) == 1 && (v37[80] & 0x100) == 0 )
            *(_BYTE *)(v38 + 140) = 0;
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 1);
        }
      }
    }
  }
LABEL_66:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 128))(a1) )
  {
    if ( !(dword_A8ED54[12] % 10) )
    {
      v42 = *(_BYTE **)(a1 + 8);
      if ( !v42[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v42 + 444))(v42) + 236) == 2 )
      {
        if ( *(_DWORD *)(MEMORY[0x87F7E8][7806] + 148) )
        {
          v43 = (void **)__2_YAPAXI_Z(456);
          if ( v43 )
          {
            v44 = (int *)(*(_DWORD *)(a1 + 8) + 156);
            v65 = *v44;
            v66 = v44[1];
            v67 = v44[2];
            AnimClass::ctor(v43, *(void **)(MEMORY[0x87F7E8][7806] + 148), &v65, 0, 1, (void *)0x600, 0, 0);
          }
        }
      }
    }
  }
  BuildingLightClass::UpdateOscillation(a1 - 4);
  if ( *(_BYTE *)(a1 + 100) )
  {
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 96))(a1) )
      goto LABEL_81;
    Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v59);
    v46 = *(_DWORD *)(a1 + 8);
    LOWORD(v58) = *(_WORD *)Value + (*(_WORD *)(a1 + 104) << 8);
    FacingClass::Set_SyncLog((char *)(v46 + 904), &v58);
    v47 = *(_DWORD *)(a1 + 104);
    v48 = abs32(v47);
    if ( v48 >= 1 )
      v48 = 1;
    v49 = v47 >= 0 ? v47 - v48 : v48 + v47;
    *(_DWORD *)(a1 + 104) = v49;
    if ( !v49 )
LABEL_81:
      *(_BYTE *)(a1 + 100) = 0;
    if ( !*(_BYTE *)(a1 + 100) )
    {
      v50 = (int *)(*(_DWORD *)(a1 + 8) + 156);
      v65 = *v50;
      v66 = v50[1];
      v67 = v50[2];
      v51 = Coord::To_Cell(MEMORY[0x87F7E8], &v65);
      BuildingClass::CreateIdleAnim((int)v51);
      v52 = (int *)(*(_DWORD *)(a1 + 8) + 156);
      v65 = *v52;
      v66 = v52[1];
      v67 = v52[2];
      if ( *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v65) + 59) == 2 )
      {
        v53 = (int *)(*(_DWORD *)(a1 + 8) + 156);
        v65 = *v53;
        v66 = v53[1];
        v54 = v53[2];
        v65 = *v53;
        v66 = v53[1];
        v67 = v53[2];
        if ( v54 < dword_A8ED54[283] + Cell::GetGroundHeight(&v65) )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 236))(*(_DWORD *)(a1 + 8));
      }
    }
  }
  return (*(char (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1);
}

/* ASM:
push    ebp
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 4Ch
push    ebx
push    esi
mov     esi, [ebp+arg_0]
push    edi
push    esi
mov     eax, [esi]
call    dword ptr [eax+10h]
test    al, al
jz      loc_514A21
lea     edi, [esi-4]
mov     ecx, [edi+4]
lea     eax, [edi+4]
push    eax
call    dword ptr [ecx+10h]
test    al, al
jz      loc_514A21
mov     ecx, edi
call    UpdateFootFacing
mov     ecx, [esi+8]
mov     al, [ecx+90h]
test    al, al
jnz     short loc_514361
xor     al, al
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
; ---------------------------------------------------------------------------

loc_514361:                             ; CODE XREF: InfantryClass__DeployAnimation+44↑j
mov     edx, [ecx]
call    dword ptr [edx+1D0h]
mov     ecx, [esi+8]
mov     [esp+58h+var_34], eax
mov     eax, [ecx]
call    dword ptr [eax+538h]
mov     dword ptr [esp+58h+var_40], eax
fild    dword ptr [esp+58h+var_40]
fmul    qword ptr [esi+4Ch]
call    Math__RoundToInt
mov     ecx, [esi+8]
mov     [esp+58h+var_48], eax
lea     eax, [esp+58h+var_C]
mov     edx, [ecx]
push    eax
call    dword ptr [edx+48h]
mov     ebx, eax
lea     eax, [esi+20h]
push    eax
mov     ecx, ebx
call    Int64__Equal
fild    dword ptr [esi+20h]
sub     esp, 8
sub     esp, 8
fisub   dword ptr [ebx]
fstp    [esp+68h+var_60] ; double
fild    dword ptr [ebx+4]
fisub   dword ptr [esi+24h]
fstp    [esp+68h+var_6C+4] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     bx, ax
mov     eax, [esp+58h+var_48]
test    eax, eax
jnz     loc_5144BD
lea     ecx, [esp+58h+var_40]
push    ecx
lea     ecx, [esi+2Ch]
call    ProgressTimer__GetValue
mov     ax, [eax]
sub     ax, bx
movsx   eax, ax
cdq
mov     ecx, eax
xor     eax, eax
xor     ecx, edx
sub     ecx, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, ecx
jl      loc_5144BD
mov     edx, [edi+24h]
mov     eax, dword_A8ED54+42Ch
lea     ecx, [edi+24h]
cmp     edx, eax
jnz     short loc_51443A
mov     eax, [ecx+4]
mov     edx, dword_A8ED54+430h
cmp     eax, edx
jnz     short loc_51443A
mov     edx, [ecx+8]
mov     eax, dword_A8ED54+434h
cmp     edx, eax
jz      short loc_514466

loc_51443A:                             ; CODE XREF: InfantryClass__DeployAnimation+10F↑j
; InfantryClass__DeployAnimation+11C↑j
mov     ebx, [edi+0Ch]
lea     eax, [esp+58h+var_40]
push    eax
call    Coord__ToCell
mov     edx, [ebx]
push    eax
lea     eax, [esp+5Ch+var_48]
mov     ecx, ebx
push    eax
call    dword ptr [edx+1B8h]
mov     ecx, eax
call    CellStruct__Equals
test    al, al
jnz     short loc_514466
xor     bl, bl
jmp     short loc_514468
; ---------------------------------------------------------------------------

loc_514466:                             ; CODE XREF: InfantryClass__DeployAnimation+128↑j
; InfantryClass__DeployAnimation+150↑j
mov     bl, 1

loc_514468:                             ; CODE XREF: InfantryClass__DeployAnimation+154↑j
mov     ecx, [edi+0Ch]
mov     dword ptr [edi+48h], 0
mov     dword ptr [edi+4Ch], 3FF00000h
push    3FF00000h
mov     edx, [ecx]
push    0
call    dword ptr [edx+544h]
push    0
mov     ecx, edi
call    MovementAI__StepFootClass
test    bl, bl
jz      short loc_51449E
push    1
mov     ecx, edi
call    MovementAI__MainFootClass

loc_51449E:                             ; CODE XREF: InfantryClass__DeployAnimation+183↑j
mov     ecx, [esi+8]
mov     eax, [ecx]
call    dword ptr [eax+538h]
mov     dword ptr [esp+58h+var_40], eax
fild    dword ptr [esp+58h+var_40]
fmul    qword ptr [esi+4Ch]
call    Math__RoundToInt
mov     [esp+58h+var_48], eax

loc_5144BD:                             ; CODE XREF: InfantryClass__DeployAnimation+D0↑j
; InfantryClass__DeployAnimation+FC↑j
mov     ecx, [esi+8]
mov     ebx, [esi+24h]
add     ecx, 9Ch
sub     esp, 8
mov     edx, ecx
mov     eax, [edx]
mov     ecx, [edx+4]
sub     ecx, ebx
mov     edx, [edx+8]
mov     [esp+60h+var_2C], ecx
fild    [esp+60h+var_2C]
mov     [esp+60h+var_4], edx
mov     edx, [esi+20h]
sub     eax, edx
mov     [esp+60h+var_30], eax
fild    [esp+60h+var_30]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fstp    [esp+60h+var_60] ; double
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     [esp+58h+var_48], eax
jl      loc_514746
mov     eax, [esi+8]
push    0
mov     byte ptr [eax+6B6h], 1
mov     ecx, [esi+8]
mov     byte ptr [ecx+6B7h], 0
mov     ecx, edi
mov     byte ptr [esi+6Ch], 0
call    MovementAI__StepFootClass
mov     edx, [esi+8]
cmp     dword ptr [edx+5E0h], 0FFFFFFFFh
jnz     short loc_514584
mov     ecx, dword_A8ED54+42Ch
mov     eax, [esi+14h]
cmp     eax, ecx
jnz     short loc_514584
mov     eax, [esi+18h]
mov     edx, dword_A8ED54+430h
cmp     eax, edx
jnz     short loc_514584
mov     edx, [esi+1Ch]
mov     eax, dword_A8ED54+434h
cmp     edx, eax
jnz     short loc_514584
lea     eax, [esi+20h]
mov     [esi+20h], ecx
mov     ecx, dword_A8ED54+430h
mov     [eax+4], ecx
mov     edx, dword_A8ED54+434h
mov     [eax+8], edx

loc_514584:                             ; CODE XREF: InfantryClass__DeployAnimation+234↑j
; InfantryClass__DeployAnimation+241↑j ...
mov     ecx, [esi+8]
push    0
call    Team__GetMember
mov     ebx, dword_A8ED54+40Ch
test    eax, eax
mov     dword ptr [esp+58h+var_40], ebx
jz      short loc_5145DD
mov     ecx, [esi+8]
mov     edx, [eax]
push    ecx
lea     ecx, [esp+5Ch+var_C]
push    ecx
mov     ecx, eax
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+58h+var_40], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+58h+var_40+2], ax
mov     ebx, dword ptr [esp+58h+var_40]
mov     dword ptr [esp+58h+var_40], ebx

loc_5145DD:                             ; CODE XREF: InfantryClass__DeployAnimation+28A↑j
mov     ecx, [esi+8]
lea     eax, [esp+58h+var_30]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+1B8h]
cmp     [eax], bx
jnz     short loc_514601
mov     cx, [eax+2]
cmp     cx, word ptr [esp+58h+var_40+2]
jnz     short loc_514601
mov     al, 1
jmp     short loc_514603
; ---------------------------------------------------------------------------

loc_514601:                             ; CODE XREF: InfantryClass__DeployAnimation+2E0↑j
; InfantryClass__DeployAnimation+2EB↑j
xor     al, al

loc_514603:                             ; CODE XREF: InfantryClass__DeployAnimation+2EF↑j
mov     edx, [esi+14h]
mov     ecx, dword_A8ED54+42Ch
cmp     edx, ecx
jnz     short loc_514632
mov     ecx, [esi+18h]
mov     edx, dword_A8ED54+430h
cmp     ecx, edx
jnz     short loc_514632
mov     edx, [esi+1Ch]
mov     ecx, dword_A8ED54+434h
cmp     edx, ecx
jnz     short loc_514632
test    al, al
jz      loc_514746

loc_514632:                             ; CODE XREF: InfantryClass__DeployAnimation+2FE↑j
; InfantryClass__DeployAnimation+30B↑j ...
push    1
mov     ecx, edi
call    MovementAI__MainFootClass
mov     ecx, [esi+8]
mov     ebx, eax
mov     al, [ecx+90h]
test    al, al
jz      loc_5149EC
mov     al, [ecx+81h]
test    al, al
jnz     loc_5149EC
mov     al, [ecx+8Dh]
test    al, al
jnz     loc_5149EC
test    ebx, ebx
jnz     loc_5146FC
mov     eax, [esi+20h]
mov     edx, dword_A8ED54+42Ch
cmp     eax, edx
jnz     short loc_5146FC
mov     edx, [esi+24h]
mov     eax, dword_A8ED54+430h
cmp     edx, eax
jnz     short loc_5146FC
mov     eax, [esi+28h]
mov     edx, dword_A8ED54+434h
cmp     eax, edx
jnz     short loc_5146FC
lea     edx, [ecx+9Ch]
mov     eax, [ecx+9Ch]
mov     [esp+58h+var_C], eax
mov     eax, [edx+4]
mov     [esp+58h+var_8], eax
mov     edx, [edx+8]
mov     [esp+58h+var_4], edx
mov     eax, [ecx]
lea     edx, [esp+58h+var_C]
push    edx
call    dword ptr [eax+0F0h]
mov     ecx, [esi+8]
push    2
mov     eax, [ecx]
call    dword ptr [eax+18Ch]
mov     ecx, [esi+8]
mov     al, [ecx+90h]
test    al, al
jz      short loc_5146F1
mov     al, [ecx+81h]
test    al, al
jnz     short loc_5146F1
mov     al, [ecx+8Dh]
test    al, al
jz      short loc_5146FC

loc_5146F1:                             ; CODE XREF: InfantryClass__DeployAnimation+3CB↑j
; InfantryClass__DeployAnimation+3D5↑j
xor     al, al
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
; ---------------------------------------------------------------------------

loc_5146FC:                             ; CODE XREF: InfantryClass__DeployAnimation+35C↑j
; InfantryClass__DeployAnimation+36D↑j ...
cmp     ebx, 7
jnz     loc_514978
mov     al, [ecx+684h]
test    al, al
jl      short loc_51471A
xor     al, al
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
; ---------------------------------------------------------------------------

loc_51471A:                             ; CODE XREF: InfantryClass__DeployAnimation+3FD↑j
mov     ecx, [edi+0Ch]
push    1
push    0
mov     edx, [ecx]
call    dword ptr [edx+480h]
xor     eax, eax
mov     [edi+50h], eax
mov     [edi+48h], eax
mov     [edi+54h], eax
mov     [edi+4Ch], eax
mov     edi, [edi+0Ch]
push    eax
push    eax
mov     ecx, edi
mov     edx, [edi]
call    dword ptr [edx+544h]

loc_514746:                             ; CODE XREF: InfantryClass__DeployAnimation+203↑j
; InfantryClass__DeployAnimation+31C↑j ...
mov     eax, [esp+58h+var_48]
test    eax, eax
jle     loc_514A21
mov     ecx, [esi+8]
lea     edx, [ecx+9Ch]
mov     eax, [ecx+9Ch]
mov     [esp+58h+var_C], eax
mov     eax, [edx+4]
mov     [esp+58h+var_8], eax
mov     edx, [edx+8]
mov     [esp+58h+var_4], edx
mov     eax, [ecx]
call    dword ptr [eax+0C0h]
test    al, al
jz      short loc_5147E6
mov     ecx, [esi+20h]
mov     eax, dword_A8ED54+42Ch
cmp     ecx, eax
jnz     short loc_5147A4
mov     edx, [esi+24h]
mov     eax, dword_A8ED54+430h
cmp     edx, eax
jnz     short loc_5147A4
mov     eax, [esi+28h]
mov     ecx, dword_A8ED54+434h
cmp     eax, ecx
jz      short loc_5147E6

loc_5147A4:                             ; CODE XREF: InfantryClass__DeployAnimation+479↑j
; InfantryClass__DeployAnimation+485↑j
mov     ecx, [esi+8]
lea     edx, [ecx+9Ch]
mov     eax, [ecx+9Ch]
mov     dword ptr [esp+58h+var_20], eax
mov     eax, [edx+4]
mov     [esp+58h+var_1C], eax
mov     edx, [edx+8]
mov     [esp+58h+var_18], edx
mov     eax, [ecx]
lea     edx, [esp+58h+var_20]
push    edx
call    dword ptr [eax+0F4h]
mov     eax, [esi+8]
mov     byte ptr [eax+6B6h], 0
mov     ecx, [esi+8]
mov     byte ptr [ecx+6B7h], 0

loc_5147E6:                             ; CODE XREF: InfantryClass__DeployAnimation+46D↑j
; InfantryClass__DeployAnimation+492↑j
mov     edx, [esp+58h+var_C]
mov     eax, [esp+58h+var_8]
lea     ecx, [esp+58h+var_30]
mov     [esp+58h+var_28], edx
push    ecx
lea     ecx, [esi+2Ch]
mov     [esp+5Ch+var_24], eax
call    ProgressTimer__GetValue
movsx   edx, word ptr [eax]
sub     edx, 3FFFh
mov     dword ptr [esp+58h+var_40], edx
fild    dword ptr [esp+58h+var_40]
fmul    ds:dbl_7E2810
fstp    [esp+58h+var_40]
fild    [esp+58h+var_48]
mov     ebx, dword ptr [esp+58h+var_40+4]
mov     edi, dword ptr [esp+58h+var_40]
push    ebx
push    edi             ; double
fstp    qword ptr [esp+60h+var_48]
fild    [esp+60h+var_24]
fstp    qword ptr [esp+60h+var_20]
call    Math__SinCos
fmul    qword ptr [esp+60h+var_48]
fsubr   qword ptr [esp+60h+var_20]
call    Math__RoundToInt
push    ebx
push    edi             ; double
mov     dword ptr [esp+68h+var_40], eax
call    Math__ArcTan2
fmul    qword ptr [esp+68h+var_48]
add     esp, 10h
fiadd   [esp+58h+var_28]
call    Math__RoundToInt
mov     ecx, [esi+8]
mov     ebx, eax
mov     eax, dword ptr [esp+58h+var_40]
mov     [esp+58h+var_C], ebx
lea     edx, [ecx+9Ch]
mov     [esp+58h+var_8], eax
mov     eax, [edx]
mov     edi, [edx+4]
mov     [esp+58h+var_1C], edi
mov     edx, [edx+8]
mov     [esp+58h+var_18], edx
cdq
and     edx, 0FFh
add     eax, edx
mov     edi, eax
mov     eax, [esp+58h+var_1C]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+58h+var_48+2], ax
mov     eax, ebx
cdq
and     edx, 0FFh
add     eax, edx
mov     ebx, eax
mov     eax, dword ptr [esp+58h+var_40]
cdq
and     edx, 0FFh
add     eax, edx
sar     edi, 8
sar     ebx, 8
sar     eax, 8
cmp     bx, di
jnz     short loc_5148DF
cmp     ax, word ptr [esp+58h+var_48+2]
jz      loc_5149F7

loc_5148DF:                             ; CODE XREF: InfantryClass__DeployAnimation+5C2↑j
mov     eax, [ecx]
push    0
call    dword ptr [eax+124h]
mov     ecx, [esi+8]
lea     eax, [esp+58h+var_C]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+1B4h]
mov     ecx, [esp+58h+var_34]
push    ecx
mov     ecx, [esi+8]
call    ObjectClass__SetAnim
lea     edx, [esp+58h+var_C]
mov     ecx, 87F7E8h
push    edx
call    Coord__To_Cell
mov     ecx, [esi+8]
mov     edi, eax
mov     ebx, 100h
mov     al, [ecx+8Ch]
test    al, al
jnz     short loc_51494B
test    [edi+140h], ebx
jz      short loc_51494B
mov     eax, [ecx]
call    dword ptr [eax+1C8h]
cmp     eax, dword_A8ED54+460h
jl      short loc_51494B
mov     ecx, [esi+8]
mov     byte ptr [ecx+8Ch], 1

loc_51494B:                             ; CODE XREF: InfantryClass__DeployAnimation+617↑j
; InfantryClass__DeployAnimation+61F↑j ...
mov     eax, [esi+8]
cmp     byte ptr [eax+8Ch], 1
jnz     short loc_514966
test    [edi+140h], ebx
jnz     short loc_514966
mov     byte ptr [eax+8Ch], 0

loc_514966:                             ; CODE XREF: InfantryClass__DeployAnimation+645↑j
; InfantryClass__DeployAnimation+64D↑j
mov     ecx, [esi+8]
push    1
mov     edx, [ecx]
call    dword ptr [edx+124h]
jmp     loc_514A21
; ---------------------------------------------------------------------------

loc_514978:                             ; CODE XREF: InfantryClass__DeployAnimation+3EF↑j
xor     eax, eax
cmp     ebx, eax
jz      loc_514746
mov     ecx, [edi+0Ch]
mov     [edi+50h], eax
mov     [edi+48h], eax
mov     [edi+54h], eax
mov     [edi+4Ch], eax
mov     edx, [ecx]
push    eax
push    eax
call    dword ptr [edx+544h]
mov     eax, [edi+24h]
mov     ecx, dword_A8ED54+42Ch
lea     ebx, [edi+24h]
cmp     eax, ecx
jnz     short loc_5149C3
mov     ecx, [ebx+4]
mov     eax, dword_A8ED54+430h
cmp     ecx, eax
jnz     short loc_5149C3
mov     edx, [ebx+8]
mov     eax, dword_A8ED54+434h
cmp     edx, eax
jz      short loc_514A21

loc_5149C3:                             ; CODE XREF: InfantryClass__DeployAnimation+699↑j
; InfantryClass__DeployAnimation+6A5↑j
mov     edi, [edi+0Ch]
push    ebx
mov     ecx, edi
mov     eax, [edi]
call    dword ptr [eax+0F4h]
mov     ecx, dword_A8ED54+42Ch
mov     [ebx], ecx
mov     edx, dword_A8ED54+430h
mov     [ebx+4], edx
mov     eax, dword_A8ED54+434h
mov     [ebx+8], eax
jmp     short loc_514A21
; ---------------------------------------------------------------------------

loc_5149EC:                             ; CODE XREF: InfantryClass__DeployAnimation+338↑j
; InfantryClass__DeployAnimation+346↑j ...
mov     al, 7
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
; ---------------------------------------------------------------------------

loc_5149F7:                             ; CODE XREF: InfantryClass__DeployAnimation+5C9↑j
mov     bl, [ecx+74h]
mov     byte ptr [ecx+74h], 0
mov     ecx, [esi+8]
lea     edx, [esp+58h+var_C]
push    edx
mov     eax, [ecx]
call    dword ptr [eax+1B4h]
mov     eax, [esp+58h+var_34]
mov     ecx, [esi+8]
push    eax
call    ObjectClass__SetAnim
mov     ecx, [esi+8]
mov     [ecx+74h], bl

loc_514A21:                             ; CODE XREF: InfantryClass__DeployAnimation+17↑j
; InfantryClass__DeployAnimation+2C↑j ...
mov     edx, [esi]
push    esi
call    dword ptr [edx+80h]
test    al, al
jz      loc_514AC8
mov     eax, dword_A8ED54+30h
mov     ecx, 0Ah
cdq
idiv    ecx
test    edx, edx
jnz     loc_514AC8
mov     ecx, [esi+8]
mov     al, [ecx+8Ch]
test    al, al
jnz     short loc_514AC8
mov     edx, [ecx]
call    dword ptr [edx+1BCh]
cmp     dword ptr [eax+0ECh], 2
jnz     short loc_514AC8
mov     eax, ds:8871E0h
mov     ecx, [eax+94h]
test    ecx, ecx
jz      short loc_514AC8
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_514AC8
mov     ecx, [esi+8]
push    0               ; char
add     ecx, 9Ch
push    0               ; int
push    600h            ; int
push    1               ; int
mov     edx, [ecx]
push    0               ; int
mov     [esp+6Ch+var_C], edx
mov     edx, [ecx+4]
mov     [esp+6Ch+var_8], edx
lea     edx, [esp+6Ch+var_C]
mov     ecx, [ecx+8]
push    edx             ; int
mov     [esp+70h+var_4], ecx
mov     ecx, ds:8871E0h
mov     edx, [ecx+94h]
mov     ecx, eax        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_514AC8:                             ; CODE XREF: InfantryClass__DeployAnimation+71C↑j
; InfantryClass__DeployAnimation+731↑j ...
lea     ecx, [esi-4]
call    BuildingLightClass__UpdateOscillation
mov     al, [esi+64h]
test    al, al
jz      loc_514C12
mov     eax, [esi]
push    esi
call    dword ptr [eax+60h]
test    al, al
jz      short loc_514B49
lea     ecx, [esp+58h+var_30]
push    ecx
mov     ecx, [esi+8]
add     ecx, 388h
call    ProgressTimer__GetValue
mov     edx, [esi+68h]
mov     eax, [eax]
shl     edx, 8
lea     ecx, [esp+58h+var_34]
add     edx, eax
push    ecx
mov     ecx, [esi+8]
mov     word ptr [esp+5Ch+var_34], dx
mov     eax, [esp+5Ch+var_34]
add     ecx, 388h
mov     [esp+5Ch+var_34], eax
call    FacingClass__Set_SyncLog
mov     ecx, [esi+68h]
mov     eax, ecx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, 1
jl      short loc_514B36
mov     eax, 1

loc_514B36:                             ; CODE XREF: InfantryClass__DeployAnimation+81F↑j
test    ecx, ecx
jge     short loc_514B3E
add     ecx, eax
jmp     short loc_514B40
; ---------------------------------------------------------------------------

loc_514B3E:                             ; CODE XREF: InfantryClass__DeployAnimation+828↑j
sub     ecx, eax

loc_514B40:                             ; CODE XREF: InfantryClass__DeployAnimation+82C↑j
mov     eax, ecx
mov     [esi+68h], ecx
test    eax, eax
jnz     short loc_514B4D

loc_514B49:                             ; CODE XREF: InfantryClass__DeployAnimation+7D3↑j
mov     byte ptr [esi+64h], 0

loc_514B4D:                             ; CODE XREF: InfantryClass__DeployAnimation+837↑j
mov     al, [esi+64h]
test    al, al
jnz     loc_514C12
mov     edx, [esi+8]
add     edx, 9Ch
mov     eax, [edx]
mov     [esp+58h+var_C], eax
lea     eax, [esp+58h+var_C]
mov     ecx, [edx+4]
push    eax
mov     [esp+5Ch+var_8], ecx
mov     ecx, 87F7E8h
mov     edx, [edx+8]
mov     [esp+5Ch+var_4], edx
call    Coord__To_Cell
mov     ecx, eax
call    BuildingClass__CreateIdleAnim
mov     ecx, [esi+8]
add     ecx, 9Ch
mov     edx, [ecx]
mov     [esp+58h+var_C], edx
lea     edx, [esp+58h+var_C]
mov     eax, [ecx+4]
push    edx
mov     [esp+5Ch+var_8], eax
mov     ecx, [ecx+8]
mov     [esp+5Ch+var_4], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
cmp     dword ptr [eax+0ECh], 2
jnz     short loc_514C12
mov     eax, [esi+8]
add     eax, 9Ch
mov     ecx, eax
mov     edx, [ecx]
mov     [esp+58h+var_C], edx
mov     edx, [ecx+4]
mov     [esp+58h+var_8], edx
mov     edi, [ecx+8]
mov     ecx, [eax]
mov     [esp+58h+var_C], ecx
mov     edx, [eax+4]
lea     ecx, [esp+58h+var_C]
mov     [esp+58h+var_8], edx
mov     eax, [eax+8]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+5Ch+var_4], eax
call    Cell__GetGroundHeight
add     eax, dword_A8ED54+46Ch
cmp     edi, eax
jge     short loc_514C12
mov     ecx, [esi+8]
mov     edx, [ecx]
call    dword ptr [edx+0ECh]

loc_514C12:                             ; CODE XREF: InfantryClass__DeployAnimation+7C5↑j
; InfantryClass__DeployAnimation+842↑j ...
mov     eax, [esi]
push    esi
call    dword ptr [eax+10h]
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
*/
}

// 0x521d80
int InfantryClass::ComputeDeploySpeedFactor()
{
// [IDA decompile]
int __thiscall InfantryClass::ComputeDeploySpeedFactor(int this)
{
  int v2; // ecx

  v2 = TechnoClass::ComputeSpeedFactorEx((double *)this);
  if ( *(_BYTE *)(this + 1755) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3773) )
      return ((unsigned int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 31)
           + ((int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 1)
           + v2;
    v2 += v2 / 2;
  }
  return v2;
}

/* ASM:
push    esi
mov     esi, ecx
call    TechnoClass__ComputeSpeedFactorEx
mov     ecx, eax
mov     al, [esi+6DBh]
test    al, al
jz      short loc_521DC5
mov     eax, [esi+6C0h]
mov     dl, [eax+0EBDh]
test    dl, dl
jz      short loc_521DBC
mov     eax, 55555555h
pop     esi
imul    ecx
sub     edx, ecx
sar     edx, 1
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
add     ecx, edx
mov     eax, ecx
retn
; ---------------------------------------------------------------------------

loc_521DBC:                             ; CODE XREF: InfantryClass__ComputeDeploySpeedFactor+22↑j
mov     eax, ecx
cdq
sub     eax, edx
sar     eax, 1
add     ecx, eax

loc_521DC5:                             ; CODE XREF: InfantryClass__ComputeDeploySpeedFactor+12↑j
mov     eax, ecx
pop     esi
retn
*/
}

// 0x5218e0
int InfantryClass::GetDeployWeaponIndex()
{
// [IDA decompile]
int __thiscall InfantryClass::GetDeployWeaponIndex(#377 *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = *((_DWORD *)this + 432);
  if ( !*(_BYTE *)(v3 + 1708) )
    return TechnoClass::SelectWeapon(this);
  v4 = *((_DWORD *)this + 433);
  if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 )
    return *(_DWORD *)(v3 + 1704);
  if ( !*((_BYTE *)this + 130)
    || *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3408) == -1 )
  {
    return 0;
  }
  return *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3408);
}

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, [esi+6C0h]
mov     al, [ecx+6ACh]
test    al, al
jz      short loc_52194E
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_52190D
cmp     eax, 1Ch
jz      short loc_52190D
cmp     eax, 1Dh
jz      short loc_52190D
cmp     eax, 1Eh
jnz     short loc_521917

loc_52190D:                             ; CODE XREF: InfantryClass__GetDeployWeaponIndex+1C↑j
; InfantryClass__GetDeployWeaponIndex+21↑j ...
mov     eax, [ecx+6A8h]
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_521917:                             ; CODE XREF: InfantryClass__GetDeployWeaponIndex+2B↑j
mov     al, [esi+82h]
test    al, al
jz      short loc_521948
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     dword ptr [eax+0D50h], 0FFFFFFFFh
jz      short loc_521948
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     eax, [eax+0D50h]
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_521948:                             ; CODE XREF: InfantryClass__GetDeployWeaponIndex+3F↑j
; InfantryClass__GetDeployWeaponIndex+52↑j
xor     eax, eax
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_52194E:                             ; CODE XREF: InfantryClass__GetDeployWeaponIndex+11↑j
mov     eax, [esp+4+arg_0]
mov     ecx, esi        ; this
push    eax
call    TechnoClass__SelectWeapon
pop     esi
retn    4
*/
}

// 0x4598a0
bool InfantryClass::updateDeployAnimation()
{
// [IDA decompile]
BOOL __thiscall InfantryClass::updateDeployAnimation(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 328);
  return *(_BYTE *)(v1 + 5806) || *(_BYTE *)(v1 + 5807);
}

/* ASM:
mov     eax, [ecx+520h]
mov     cl, [eax+16AEh]
test    cl, cl
jnz     short loc_4598BD
mov     cl, [eax+16AFh]
test    cl, cl
jnz     short loc_4598BD
xor     eax, eax
retn
; ---------------------------------------------------------------------------

loc_4598BD:                             ; CODE XREF: InfantryClass__updateDeployAnimation+E↑j
; InfantryClass__updateDeployAnimation+18↑j
mov     eax, 1
retn
*/
}

// ============================================================
// Phase 3: Firing / Combat
// ============================================================

// 0x522600
int InfantryClass::FireAtTargetPos()
{
// [IDA decompile]
int __thiscall InfantryClass::FireAtTargetPos(int *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v4 = *this;
  v6 = *(_DWORD *)(*(this + 432) + 160);
  return (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, int))(v4 + 364))(
           this,
           &v6,
           0,
           *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008),
           0,
           1,
           0,
           a3);
}

/* ASM:
push    ecx
mov     eax, [ecx+6C0h]
mov     edx, [eax+0A0h]
mov     eax, [ecx]
mov     [esp+4+var_4], edx
mov     edx, [esp+4+arg_4]
push    edx
mov     edx, ds:8871E0h
push    0
push    1
mov     edx, [edx+0FA8h]
push    0
push    edx
lea     edx, [esp+18h+var_4]
push    0
push    edx
call    dword ptr [eax+16Ch]
pop     ecx
retn    0Ch
*/
}

// 0x51df60
int InfantryClass::FireWeaponWithCleanup(int a2, int a3)
{
// [IDA decompile]
int __thiscall InfantryClass::FireWeaponWithCleanup(#377 *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  *((_BYTE *)this + 1677) = 0;
  v4 = TechnoClass::FireWeapon(this);
  if ( v4 )
  {
    if ( !*((_BYTE *)this + 129) )
    {
      if ( *(_BYTE *)(*((_DWORD *)this + 432) + 3775) )
      {
        if ( !*((_DWORD *)this + 191) )
        {
          v5 = *(_DWORD *)this;
          *((_DWORD *)this + 437) = 300;
          if ( (*(int (__thiscall **)(#377 *))(v5 + 388))(this) == 1
            || (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 15 )
          {
            (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 5, 0);
          }
        }
      }
    }
  }
  return v4;
}

/* ASM:
mov     eax, [esp+arg_4]
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esp+8+arg_0]
push    eax             ; int
push    ecx             ; int
mov     ecx, esi        ; this
mov     byte ptr [esi+68Dh], 0
call    TechnoClass__FireWeapon
mov     edi, eax
test    edi, edi
jz      short loc_51DFDC
mov     al, [esi+81h]
test    al, al
jnz     short loc_51DFDC
mov     edx, [esi+6C0h]
mov     al, [edx+0EBFh]
test    al, al
jz      short loc_51DFDC
mov     eax, [esi+2FCh]
test    eax, eax
jnz     short loc_51DFDC
mov     eax, [esi]
mov     ecx, esi
mov     dword ptr [esi+6D4h], 12Ch
call    dword ptr [eax+184h]
cmp     eax, 1
jz      short loc_51DFCE
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Fh
jnz     short loc_51DFDC

loc_51DFCE:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+5D↑j
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_51DFDC:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+20↑j
; InfantryClass__FireWeaponWithCleanup+2A↑j ...
mov     eax, edi
pop     edi
pop     esi
retn    8
*/
}

// 0x51c8b0
int InfantryClass::GetFireError(int* target, int weapon_idx, int a4, int a5)
{
// [IDA decompile]
int __fastcall InfantryClass::GetFireError(int a1, int a2, int *a3, int a4, int a5)
{
  int v6; // eax
  int result; // eax
  int *v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // esi
  int v16; // esi
  char v17[16]; // [esp+14h] [ebp-10h] BYREF

  v6 = *(_DWORD *)(a1 + 1732);
  if ( v6 == 11
    || v6 == 12
    || v6 == 13
    || v6 == 14
    || v6 == 15
    || v6 == 34
    || v6 == 35
    || v6 == 36
    || v6 == 20
    || v6 == 21 )
  {
    return 6;
  }
  v8 = a3;
  if ( TechnoClass::GetValue((_DWORD *)a1, -1) < 0
    && (!a3
     || (*(int (__thiscall **)(int *))(*a3 + 44))(a3) != 15
     || BuildingClass::GetHealthRatio(a3) >= *(double *)(MEMORY[0x87F7E8][7806] + 5880)) )
  {
    return 5;
  }
  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 1 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1682) )
      {
        v9 = a3[170];
        if ( v9 )
        {
          v10 = a1 ? ((*(_BYTE *)(a1 + 20) & 1) != 0 ? a1 : 0) : 0;
          if ( v9 != v10 )
            return 5;
        }
      }
    }
  }
  result = TriggerTypeClass::ReadINI((_DWORD *)a1, a4, a3, a4, a5);
  if ( !result )
  {
    if ( *(double *)(a1 + 1400) > 0.1 )
      return 7;
    if ( *(_DWORD *)(a1 + 1444) )
    {
      v11 = *(_DWORD *)(a1 + 1732);
      if ( v11 != -1 && !byte_7EAF7C[4 * v11] )
        return 7;
    }
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1728) + 3476) )
    {
      v12 = *(_DWORD *)(a1 + 1652);
      a5 = 0;
      if ( !v12 )
        goto LABEL_37;
      v13 = StreamClass::Set2(&a5, (_DWORD *)(a1 + 1652));
      if ( v13 < 0 && v13 != -2147467262 )
        WinAPI::Wrapper(v13);
      if ( !a5 )
LABEL_37:
        WinAPI::Wrapper(-2147467261);
      (*(void (__stdcall **)(int, char *))(*(_DWORD *)a5 + 12))(a5, v17);
      v14 = memcmp(v17, (const char *)&g_CLSID_JumpjetLocomotion, 16);
      ComPtr::Release_Alt(&a5);
      if ( !v14 && *(_BYTE *)(*(_DWORD *)(a1 + 1728) + 3787) )
      {
        if ( !*(_DWORD *)(a1 + 1652) )
          WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) )
          return 7;
      }
      v8 = a3;
    }
    v15 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1016))(a1, a4);
    if ( !v15 )
      goto LABEL_64;
    if ( *(_BYTE *)(v15 + 297) && *(_DWORD *)(a1 + 1444) )
      return 7;
    if ( *(_BYTE *)(v15 + 336) && v8 != (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) )
      return 5;
    v16 = *(_DWORD *)(v15 + 172);
    if ( v16 && *(_BYTE *)(v16 + 343) && v8 && (v8[5] & 2) != 0 && v8[14] )
    {
      return 5;
    }
    else
    {
LABEL_64:
      if ( !*(_DWORD *)(a1 + 1652) )
        WinAPI::Wrapper(-2147467261);
      result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 140))(*(_DWORD *)(a1 + 1652));
      if ( !result )
        return 0;
    }
  }
  return result;
}

/* ASM:
sub     esp, 14h
push    ebx
mov     ebx, ecx
push    esi
push    edi
mov     eax, [ebx+6C4h]
cmp     eax, 0Bh
jz      short loc_51C8F0
cmp     eax, 0Ch
jz      short loc_51C8F0
cmp     eax, 0Dh
jz      short loc_51C8F0
cmp     eax, 0Eh
jz      short loc_51C8F0
cmp     eax, 0Fh
jz      short loc_51C8F0
cmp     eax, 22h ; '"'
jz      short loc_51C8F0
cmp     eax, 23h ; '#'
jz      short loc_51C8F0
cmp     eax, 24h ; '$'
jz      short loc_51C8F0
cmp     eax, 14h
jz      short loc_51C8F0
cmp     eax, 15h
jnz     short loc_51C8FE

loc_51C8F0:                             ; CODE XREF: InfantryClass__GetFireError+11↑j
; InfantryClass__GetFireError+16↑j ...
pop     edi
pop     esi
mov     eax, 6
pop     ebx
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51C8FE:                             ; CODE XREF: InfantryClass__GetFireError+3E↑j
push    0FFFFFFFFh
mov     ecx, ebx
call    TechnoClass__GetValue
mov     edi, [esp+20h+arg_0]
test    eax, eax
jge     short loc_51C947
test    edi, edi
jz      short loc_51C939
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 0Fh
jnz     short loc_51C939
mov     ecx, edi
call    BuildingClass__GetHealthRatio
mov     ecx, ds:8871E0h
fcomp   qword ptr [ecx+16F8h]
fnstsw  ax
test    ah, 1
jnz     short loc_51C947

loc_51C939:                             ; CODE XREF: InfantryClass__GetFireError+61↑j
; InfantryClass__GetFireError+6D↑j
pop     edi
pop     esi
mov     eax, 5
pop     ebx
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51C947:                             ; CODE XREF: InfantryClass__GetFireError+5D↑j
; InfantryClass__GetFireError+87↑j
test    edi, edi
jz      short loc_51C99A
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_51C99A
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+84h]
mov     cl, [eax+692h]
test    cl, cl
jz      short loc_51C99A
mov     ecx, [edi+2A8h]
test    ecx, ecx
jz      short loc_51C99A
test    ebx, ebx
jnz     short loc_51C97D
xor     eax, eax
jmp     short loc_51C988
; ---------------------------------------------------------------------------

loc_51C97D:                             ; CODE XREF: InfantryClass__GetFireError+C7↑j
mov     al, [ebx+14h]
and     al, 1
neg     al
sbb     eax, eax
and     eax, ebx

loc_51C988:                             ; CODE XREF: InfantryClass__GetFireError+CB↑j
cmp     ecx, eax
jz      short loc_51C99A
pop     edi
pop     esi
mov     eax, 5
pop     ebx
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51C99A:                             ; CODE XREF: InfantryClass__GetFireError+99↑j
; InfantryClass__GetFireError+A5↑j ...
mov     ecx, [esp+20h+arg_8]
mov     edx, [esp+20h+arg_4]
push    ecx
push    edx
push    edi
mov     ecx, ebx
call    TriggerTypeClass__ReadINI
test    eax, eax
mov     [esp+20h+var_14], eax
jnz     loc_51CB8C
fld     qword ptr [ebx+578h]
fcomp   ds:dbl_7E3860
fnstsw  ax
test    ah, 41h
jz      loc_51CAFA
mov     eax, [ebx+5A4h]
test    eax, eax
jz      short loc_51C9F3
mov     eax, [ebx+6C4h]
cmp     eax, 0FFFFFFFFh
jz      short loc_51C9F3
mov     cl, ds:byte_7EAF7C[eax*4]
test    cl, cl
jz      loc_51CAFA

loc_51C9F3:                             ; CODE XREF: InfantryClass__GetFireError+127↑j
; InfantryClass__GetFireError+132↑j
mov     eax, [ebx+6C0h]
mov     cl, [eax+0D94h]
test    cl, cl
jz      loc_51CAD1
mov     ecx, [ebx+674h]
lea     eax, [ebx+674h]
test    ecx, ecx
mov     [esp+20h+arg_8], 0
jz      short loc_51CA42
push    eax
lea     ecx, [esp+24h+arg_8]
call    StreamClass__Set2
test    eax, eax
jge     short loc_51CA3A
cmp     eax, 80004002h
jz      short loc_51CA3A
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51CA3A:                             ; CODE XREF: InfantryClass__GetFireError+17B↑j
; InfantryClass__GetFireError+182↑j
mov     eax, [esp+20h+arg_8]
test    eax, eax
jnz     short loc_51CA50

loc_51CA42:                             ; CODE XREF: InfantryClass__GetFireError+16D↑j
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+20h+arg_8]

loc_51CA50:                             ; CODE XREF: InfantryClass__GetFireError+190↑j
mov     ecx, [eax]
lea     edx, [esp+20h+var_10]
push    ebp
push    edx
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, 10h
mov     edi, offset g_CLSID_JumpjetLocomotion
lea     esi, [esp+24h+var_10]
xor     ebp, ebp
repe cmpsb
jz      short loc_51CA75
sbb     ebp, ebp
sbb     ebp, 0FFFFFFFFh

loc_51CA75:                             ; CODE XREF: InfantryClass__GetFireError+1BE↑j
lea     ecx, [esp+24h+arg_8]
call    ComPtr__Release_Alt
test    ebp, ebp
setz    al
test    al, al
pop     ebp
jz      short loc_51CACD
mov     eax, [ebx+6C0h]
mov     cl, [eax+0ECBh]
test    cl, cl
jz      short loc_51CACD
mov     eax, [ebx+674h]
test    eax, eax
jnz     short loc_51CAAC
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51CAAC:                             ; CODE XREF: InfantryClass__GetFireError+1F0↑j
mov     eax, [ebx+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+80h]
test    al, al
jz      short loc_51CACD
pop     edi
pop     esi
mov     eax, 7
pop     ebx
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51CACD:                             ; CODE XREF: InfantryClass__GetFireError+1D6↑j
; InfantryClass__GetFireError+1E6↑j ...
mov     edi, [esp+20h+arg_0]

loc_51CAD1:                             ; CODE XREF: InfantryClass__GetFireError+151↑j
mov     eax, [esp+20h+arg_4]
mov     edx, [ebx]
push    eax
mov     ecx, ebx
call    dword ptr [edx+3F8h]
mov     esi, [eax]
test    esi, esi
jz      short loc_51CB61
mov     al, [esi+129h]
test    al, al
jz      short loc_51CB08
mov     eax, [ebx+5A4h]
test    eax, eax
jz      short loc_51CB08

loc_51CAFA:                             ; CODE XREF: InfantryClass__GetFireError+119↑j
; InfantryClass__GetFireError+13D↑j
pop     edi
pop     esi
mov     eax, 7
pop     ebx
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51CB08:                             ; CODE XREF: InfantryClass__GetFireError+23E↑j
; InfantryClass__GetFireError+248↑j
mov     al, [esi+150h]
test    al, al
jz      short loc_51CB2E
mov     edx, [ebx]
mov     ecx, ebx
call    dword ptr [edx+1BCh]
cmp     edi, eax
jz      short loc_51CB2E
pop     edi
pop     esi
mov     eax, 5
pop     ebx
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51CB2E:                             ; CODE XREF: InfantryClass__GetFireError+260↑j
; InfantryClass__GetFireError+26E↑j
mov     esi, [esi+0ACh]
test    esi, esi
jz      short loc_51CB61
mov     al, [esi+157h]
test    al, al
jz      short loc_51CB61
test    edi, edi
jz      short loc_51CB61
test    byte ptr [edi+14h], 2
jz      short loc_51CB61
mov     eax, [edi+38h]
test    eax, eax
jz      short loc_51CB61
pop     edi
pop     esi
mov     eax, 5
pop     ebx
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51CB61:                             ; CODE XREF: InfantryClass__GetFireError+234↑j
; InfantryClass__GetFireError+286↑j ...
mov     eax, [ebx+674h]
test    eax, eax
jnz     short loc_51CB75
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51CB75:                             ; CODE XREF: InfantryClass__GetFireError+2B9↑j
mov     ebx, [ebx+674h]
push    ebx
mov     eax, [ebx]
call    dword ptr [eax+8Ch]
test    eax, eax
jnz     short loc_51CB8C
mov     eax, [esp+20h+var_14]

loc_51CB8C:                             ; CODE XREF: InfantryClass__GetFireError+102↑j
; InfantryClass__GetFireError+2D6↑j
pop     edi
pop     esi
pop     ebx
add     esp, 14h
retn    0Ch
*/
}

// IDA: 0x5227F0 — checks if target can be attacked (not allied, not cloaked, in range)
// 0x5227f0
bool InfantryClass::CanAttackTarget()
{
// [IDA decompile]
bool __thiscall InfantryClass::CanAttackTarget(#375 **this, #375 *other)
{
  _DWORD *v3; // eax
  _WORD *v4; // ebx
  #375 *v5; // esi
  bool result; // al
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h] BYREF
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF

  result = 0;
  if ( (*((unsigned __int8 (__thiscall **)(#375 **))*this + 49))(this) )
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*this + 18))(this, v9);
    LOWORD(v7) = *v3 / 256;
    HIWORD(v7) = v3[1] / 256;
    v8 = v7;
    v4 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v8);
    if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(this + 135), other)
      && !HouseClass::HasType(v4, *((_DWORD *)other + 12)) )
    {
      v5 = *(this + 327);
      if ( v5 == other || !v5 || (unsigned __int8)HouseClass::IsAlliedWith(other, v5) )
        return 1;
    }
  }
  return result;
}

/* ASM:
other           = dword ptr  4

sub     esp, 14h
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+0C4h]
test    al, al
jz      loc_52289E
mov     edx, [esi]
lea     eax, [esp+20h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+20h+var_14], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+20h+var_10]
sar     eax, 8
mov     word ptr [esp+20h+var_14+2], ax
mov     ecx, [esp+20h+var_14]
mov     [esp+20h+var_10], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     edi, [esp+20h+other]
mov     ecx, [esi+21Ch] ; this
push    edi             ; other
mov     ebx, eax
call    HouseClass__IsAlliedWith
test    al, al
jnz     short loc_52289E
mov     eax, [edi+30h]
mov     ecx, ebx
push    eax
call    HouseClass__HasType
test    al, al
jnz     short loc_52289E
mov     esi, [esi+51Ch]
cmp     esi, edi
jz      short loc_522893
test    esi, esi
jz      short loc_522893
push    esi             ; other
mov     ecx, edi        ; this
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_52289E

loc_522893:                             ; CODE XREF: InfantryClass__CanAttackTarget+91↑j
; InfantryClass__CanAttackTarget+95↑j
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 14h
retn    4
; ---------------------------------------------------------------------------

loc_52289E:                             ; CODE XREF: InfantryClass__CanAttackTarget+12↑j
; InfantryClass__CanAttackTarget+78↑j ...
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 14h
retn    4
*/
}

void InfantryClass::PlayIdleAnim(int idle_anim_number)
{
    // IDA: vtable override — play idle animation sequence
    if (!Type) return;
    // PlayAnim with idle sequence
}

int InfantryClass::ProcessIdleAction()
{
    // IDA: 0x51CDB0 (760B)
    // Process idle behavior: random movement, scanning, deploy check
    return 10;
}

// 0x5239d0
int InfantryClass::ProcessAnimation()
{
// [IDA decompile]
int __thiscall sub_5239D0(int this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &InfantryTypeClass::`vftable';
  *(_DWORD *)(this + 4) = &InfantryTypeClass::`vftable';
  *(_DWORD *)(this + 8) = &InfantryTypeClass::`vftable';
  *(_DWORD *)(this + 12) = &InfantryTypeClass::`vftable';
  AbstractClass::AnnounceExpiredPointer((void **)this, 1);
  v7 = this;
  v2 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA8E348] + 16))(&MEMORY[0xA8E348], &v7);
  if ( v2 != -1 && v2 < MEMORY[0xA8E358] && v2 < --MEMORY[0xA8E358] )
  {
    do
    {
      ++v2;
      *((_DWORD *)MEMORY[0xA8E34C] + v2 - 1) = *((_DWORD *)MEMORY[0xA8E34C] + v2);
    }
    while ( v2 < MEMORY[0xA8E358] );
  }
  __3_YAXPAX_Z(*(void **)(this + 3644));
  *(_DWORD *)(this + 3644) = 0;
  v3 = *(void **)(this + 3724);
  *(_DWORD *)(this + 3720) = &VectorClass<int>::`vftable';
  if ( v3 && *(_BYTE *)(this + 3733) )
  {
    __3_YAXPAX_Z(v3);
    *(_DWORD *)(this + 3724) = 0;
  }
  *(_BYTE *)(this + 3733) = 0;
  *(_DWORD *)(this + 3728) = 0;
  v4 = *(void **)(this + 3696);
  *(_DWORD *)(this + 3692) = &VectorClass<AnimTypeClass const *>::`vftable';
  if ( v4 && *(_BYTE *)(this + 3705) )
  {
    __3_YAXPAX_Z(v4);
    *(_DWORD *)(this + 3696) = 0;
  }
  *(_BYTE *)(this + 3705) = 0;
  *(_DWORD *)(this + 3700) = 0;
  v5 = *(void **)(this + 3668);
  *(_DWORD *)(this + 3664) = &VectorClass<AnimTypeClass const *>::`vftable';
  if ( v5 && *(_BYTE *)(this + 3677) )
  {
    __3_YAXPAX_Z(v5);
    *(_DWORD *)(this + 3668) = 0;
  }
  *(_BYTE *)(this + 3677) = 0;
  *(_DWORD *)(this + 3672) = 0;
  return TechnoTypeClass::DTOR(this);
}

/* ASM:
push    ecx
push    ebx
push    esi
mov     esi, ecx
mov     dl, 1
mov     dword ptr [esi], offset ??_7InfantryTypeClass@@6B@ ; const InfantryTypeClass::`vftable'
mov     dword ptr [esi+4], offset ??_7InfantryTypeClass@@6B@_0 ; const InfantryTypeClass::`vftable'
mov     dword ptr [esi+8], offset ??_7InfantryTypeClass@@6B@_1 ; const InfantryTypeClass::`vftable'
mov     dword ptr [esi+0Ch], offset ??_7InfantryTypeClass@@6B@_2 ; const InfantryTypeClass::`vftable'
call    AbstractClass__AnnounceExpiredPointer
mov     edx, ds:0A8E348h
lea     eax, [esp+0Ch+var_4]
push    eax
mov     ecx, 0A8E348h
mov     [esp+10h+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_523A40
mov     ecx, ds:0A8E358h
cmp     eax, ecx
jge     short loc_523A40
dec     ecx
cmp     eax, ecx
mov     ds:0A8E358h, ecx
jge     short loc_523A40

loc_523A28:                             ; CODE XREF: InfantryClass__ProcessAnimation+6E↓j
mov     ecx, ds:0A8E34Ch
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, ds:0A8E358h
cmp     eax, ecx
jl      short loc_523A28

loc_523A40:                             ; CODE XREF: InfantryClass__ProcessAnimation+41↑j
; InfantryClass__ProcessAnimation+4B↑j ...
mov     eax, [esi+0E3Ch]
push    eax             ; Block
call    ??3_YAXPAX_Z
xor     ebx, ebx
add     esp, 4
mov     [esi+0E3Ch], ebx
mov     eax, [esi+0E8Ch]
cmp     eax, ebx
mov     dword ptr [esi+0E88h], offset ??_7?$VectorClass@H@@6B@ ; const VectorClass<int>::`vftable'
jz      short loc_523A82
cmp     [esi+0E95h], bl
jz      short loc_523A82
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [esi+0E8Ch], ebx

loc_523A82:                             ; CODE XREF: InfantryClass__ProcessAnimation+99↑j
; InfantryClass__ProcessAnimation+A1↑j
mov     [esi+0E95h], bl
mov     [esi+0E90h], ebx
mov     eax, [esi+0E70h]
mov     dword ptr [esi+0E6Ch], offset ??_7?$VectorClass@PBVAnimTypeClass@@@@6B@ ; const VectorClass<AnimTypeClass const *>::`vftable'
cmp     eax, ebx
jz      short loc_523AB9
cmp     [esi+0E79h], bl
jz      short loc_523AB9
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [esi+0E70h], ebx

loc_523AB9:                             ; CODE XREF: InfantryClass__ProcessAnimation+D0↑j
; InfantryClass__ProcessAnimation+D8↑j
mov     [esi+0E79h], bl
mov     [esi+0E74h], ebx
mov     eax, [esi+0E54h]
mov     dword ptr [esi+0E50h], offset ??_7?$VectorClass@PBVAnimTypeClass@@@@6B@ ; const VectorClass<AnimTypeClass const *>::`vftable'
cmp     eax, ebx
jz      short loc_523AF0
cmp     [esi+0E5Dh], bl
jz      short loc_523AF0
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [esi+0E54h], ebx

loc_523AF0:                             ; CODE XREF: InfantryClass__ProcessAnimation+107↑j
; InfantryClass__ProcessAnimation+10F↑j
mov     ecx, esi
mov     [esi+0E5Dh], bl
mov     [esi+0E58h], ebx
call    TechnoTypeClass__DTOR
pop     esi
pop     ebx
pop     ecx
retn
*/
}

// 0x521320
int InfantryClass::GetIdleTimer()
{
// [IDA decompile]
int __thiscall InfantryClass_GetIdleTimer(int *this)
{
  int v2; // eax
  int v3; // eax
  __int16 *v5; // eax
  #344 *v6; // eax
  unsigned int NumberOfActiveVirtualProcessors; // edi
  int v8; // ecx
  int v9; // edi
  __int16 *v10; // eax
  void *v11; // eax
  char *v12; // eax
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  #375 *v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // kr0C_4
  int v23; // eax
  char *MissionControl; // eax
  int v25; // esi
  _BYTE v26[4]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v27[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v28[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(this + 433);
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 )
  {
    v16 = (#375 *)(*(int (__thiscall **)(int *))(*this + 60))(this);
    if ( !(unsigned __int8)House::IsCurrentPlayer(v16) )
    {
      v17 = *(this + 432);
      if ( *(_BYTE *)(v17 + 3784) )
      {
        if ( *(_BYTE *)(v17 + 1708) )
        {
          if ( *(int *)(v17 + 1732) <= -1
            && !*(this + 361)
            && *(this + 48) + *(_DWORD *)(*((_DWORD *)MEMORY[0x8871E0] + 908) + 4 * *(_DWORD *)(*(this + 135) + 388)) < (int)MEMORY[0xA8ED84] )
          {
            if ( !*(this + 134)
              || (v18 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v27),
                  v19 = *v18 / 256,
                  v20 = v18[1] / 256,
                  v21 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*(this + 134) + 72))(
                                 *(this + 134),
                                 v28),
                  v22 = *v21,
                  v23 = v21[1] / 256,
                  (unsigned __int16)(v22 / 256) == (_WORD)v19)
              && (_WORD)v23 == (_WORD)v20 )
            {
              if ( !*(_BYTE *)(*(this + 432) + 3383) )
              {
                if ( !*(this + 413) )
                  WinAPI::Wrapper(-2147467261);
                if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
                {
                  if ( !*(this + 413) )
                    WinAPI::Wrapper(-2147467261);
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 72))(*(this + 413));
                  *((_BYTE *)this + 1764) = 1;
                  MissionControl = MissionClass::GetMissionControl(this);
                  v25 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
                  return v25 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
                }
                else
                {
                  (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 27, 0, 0);
                  return *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 976);
                }
              }
            }
          }
        }
      }
    }
    return -1;
  }
  v3 = *(this + 432);
  if ( *(int *)(v3 + 1732) > -1 )
  {
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 31, 0, 0);
    return *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 1120);
  }
  if ( !*(_BYTE *)(v3 + 1708) )
    return -1;
  if ( *(_BYTE *)(v3 + 3383) )
  {
    v5 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v26);
    v6 = (#344 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v5);
    NumberOfActiveVirtualProcessors = _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6);
    v8 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1016))(this, 1) + 344);
    if ( !NumberOfActiveVirtualProcessors || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors) < v8 / 3 )
    {
      v9 = *this;
      v10 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v26);
      v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v10);
      (*(void (__thiscall **)(int *, void *))(v9 + 968))(this, v11);
      if ( !(*(int (__thiscall **)(int *, _DWORD, int, int))(*this + 960))(this, *(this + 173), 1, 1) )
      {
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 972))(this, *(this + 173), 1);
        (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
        (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1368))(this, 29, 0, 0);
        return *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 1048);
      }
      (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
    }
    v12 = MissionClass::GetMissionControl(this);
    v13 = Math::RoundToInt(*((double *)v12 + 2) * 900.0);
    return v13 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 10, 20);
  }
  else
  {
    (*(void (__thiscall **)(int *))(*this + 1064))(this);
    v14 = MissionClass::GetMissionControl(this);
    v15 = Math::RoundToInt(*((double *)v14 + 2) * 900.0);
    return v15 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
  }
}

/* ASM:
sub     esp, 1Ch
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_521346
cmp     eax, 1Ch
jz      short loc_521346
cmp     eax, 1Dh
jz      short loc_521346
cmp     eax, 1Eh
jnz     loc_5214F7

loc_521346:                             ; CODE XREF: InfantryClass__GetIdleTimer+11↑j
; InfantryClass__GetIdleTimer+16↑j ...
mov     eax, [esi+6C0h]
cmp     dword ptr [eax+6C4h], 0FFFFFFFFh
jle     short loc_52137E
mov     eax, [esi]
push    0
push    0
push    1Fh
mov     ecx, esi
call    dword ptr [eax+558h]
mov     ecx, [esi+6C0h]
pop     edi
pop     esi
pop     ebx
mov     edx, [ecx+0E3Ch]
mov     eax, [edx+460h]
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_52137E:                             ; CODE XREF: InfantryClass__GetIdleTimer+33↑j
mov     cl, [eax+6ACh]
test    cl, cl
jz      loc_5216B6
mov     cl, [eax+0D37h]
test    cl, cl
jz      loc_5214B9
mov     eax, [esi]
lea     ecx, [esp+28h+var_1C]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax        ; this
call    ?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ
mov     edx, [esi]
push    1
mov     ecx, esi
mov     edi, eax
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     ecx, [eax+158h]
mov     eax, 55555556h
imul    ecx
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
test    edi, edi
mov     ebx, edx
jz      short loc_5213F4
mov     ecx, edi
call    CellClass__GetOccupiedRatio
cmp     eax, ebx
jge     loc_521484

loc_5213F4:                             ; CODE XREF: InfantryClass__GetIdleTimer+C3↑j
mov     edi, [esi]
lea     ecx, [esp+28h+var_1C]
push    ecx
mov     ecx, esi
call    dword ptr [edi+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+3C8h]
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+3C0h]
test    eax, eax
jnz     short loc_521478
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+3CCh]
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3C8h]
mov     eax, [esi]
push    0
push    0
push    1Dh
mov     ecx, esi
call    dword ptr [eax+558h]
mov     ecx, [esi+6C0h]
pop     edi
pop     esi
pop     ebx
mov     edx, [ecx+0E3Ch]
mov     eax, [edx+418h]
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_521478:                             ; CODE XREF: InfantryClass__GetIdleTimer+10E↑j
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3C8h]

loc_521484:                             ; CODE XREF: InfantryClass__GetIdleTimer+CE↑j
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    14h
push    0Ah
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebx
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_5214B9:                             ; CODE XREF: InfantryClass__GetIdleTimer+74↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+428h]
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     esi, eax
mov     eax, ds:0A8B230h
push    2
push    0
lea     ecx, [eax+218h]
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebx
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_5214F7:                             ; CODE XREF: InfantryClass__GetIdleTimer+20↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3Ch]
mov     ecx, eax        ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_5216B6
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC8h]
test    cl, cl
jz      loc_5216B6
mov     cl, [eax+6ACh]
test    cl, cl
jz      loc_5216B6
cmp     dword ptr [eax+6C4h], 0FFFFFFFFh
jg      loc_5216B6
mov     eax, [esi+5A4h]
test    eax, eax
jnz     loc_5216B6
mov     eax, [esi+21Ch]
mov     edx, ds:8871E0h
mov     ecx, [eax+184h]
mov     eax, [edx+0E30h]
mov     edx, [esi+0C0h]
mov     ecx, [eax+ecx*4]
mov     eax, dword_A8ED54+30h
add     ecx, edx
cmp     ecx, eax
jge     loc_5216B6
mov     eax, [esi+218h]
test    eax, eax
jz      short loc_5215F9
mov     edx, [esi]
lea     eax, [esp+28h+var_18]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
mov     edi, eax
mov     eax, [ecx+4]
mov     ecx, [esi+218h]
cdq
and     edx, 0FFh
add     eax, edx
mov     edx, [ecx]
mov     ebx, eax
lea     eax, [esp+2Ch+var_C]
push    eax
sar     edi, 8
sar     ebx, 8
call    dword ptr [edx+48h]
mov     ebp, eax
mov     eax, [ebp+0]
cdq
and     edx, 0FFh
add     eax, edx
mov     ecx, eax
mov     eax, [ebp+4]
cdq
and     edx, 0FFh
pop     ebp
add     eax, edx
sar     ecx, 8
sar     eax, 8
cmp     cx, di
jnz     loc_5216B6
cmp     ax, bx
jnz     loc_5216B6

loc_5215F9:                             ; CODE XREF: InfantryClass__GetIdleTimer+262↑j
mov     ecx, [esi+6C0h]
mov     al, [ecx+0D37h]
test    al, al
jnz     loc_5216B6
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_521621
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_521621:                             ; CODE XREF: InfantryClass__GetIdleTimer+2F5↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short loc_52165A
mov     eax, [esi]
push    0
push    0
push    1Bh
mov     ecx, esi
call    dword ptr [eax+558h]
mov     ecx, [esi+6C0h]
pop     edi
pop     esi
pop     ebx
mov     edx, [ecx+0E3Ch]
mov     eax, [edx+3D0h]
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_52165A:                             ; CODE XREF: InfantryClass__GetIdleTimer+30F↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_52166E
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_52166E:                             ; CODE XREF: InfantryClass__GetIdleTimer+342↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+48h]
mov     ecx, esi
mov     byte ptr [esi+6E4h], 1
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     edx, ds:0A8B230h
push    2
push    0
mov     esi, eax
lea     ecx, [edx+218h]
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebx
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_5216B6:                             ; CODE XREF: InfantryClass__GetIdleTimer+66↑j
; InfantryClass__GetIdleTimer+1E7↑j ...
pop     edi
pop     esi
or      eax, 0FFFFFFFFh
pop     ebx
add     esp, 1Ch
retn
*/
}

// ============================================================
// Phase 3: Crawling / Movement
// ============================================================

// 0x5216d0
bool InfantryClass::CanMoveFreely()
{
// [IDA decompile]
char __thiscall InfantryClass::CanMoveFreely(int this)
{
  char result; // al
  unsigned int v3; // eax

  result = TechnoClass::IsTimerExpired((#377 *)this);
  if ( result )
  {
    if ( !*(_DWORD *)(this + 1652) )
      WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) )
    {
      return 0;
    }
    else if ( *(_BYTE *)(this + 1755) )
    {
      return 0;
    }
    else if ( *(_BYTE *)(this + 1677) )
    {
      return 0;
    }
    else
    {
      v3 = *(_DWORD *)(this + 1732);
      return v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16);
    }
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
call    TechnoClass__IsTimerExpired
test    al, al
jnz     short loc_5216DE
pop     esi
retn
; ---------------------------------------------------------------------------

loc_5216DE:                             ; CODE XREF: InfantryClass__CanMoveFreely+A↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_5216F2
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_5216F2:                             ; CODE XREF: InfantryClass__CanMoveFreely+16↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      short loc_521706
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521706:                             ; CODE XREF: InfantryClass__CanMoveFreely+30↑j
mov     al, [esi+6DBh]
test    al, al
jz      short loc_521714
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521714:                             ; CODE XREF: InfantryClass__CanMoveFreely+3E↑j
mov     al, [esi+68Dh]
test    al, al
jz      short loc_521722
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521722:                             ; CODE XREF: InfantryClass__CanMoveFreely+4C↑j
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_52173C
cmp     eax, 1Ch
jz      short loc_52173C
cmp     eax, 1Dh
jz      short loc_52173C
cmp     eax, 1Eh
jnz     short loc_521740

loc_52173C:                             ; CODE XREF: InfantryClass__CanMoveFreely+5B↑j
; InfantryClass__CanMoveFreely+60↑j ...
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521740:                             ; CODE XREF: InfantryClass__CanMoveFreely+6A↑j
cmp     eax, 1
jz      short loc_521752
test    eax, eax
jz      short loc_521752
cmp     eax, 10h
jz      short loc_521752
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521752:                             ; CODE XREF: InfantryClass__CanMoveFreely+73↑j
; InfantryClass__CanMoveFreely+77↑j ...
mov     al, 1
pop     esi
retn
*/
}

bool InfantryClass::CanMoveThroughCell()
{
    // IDA: 0x484D60 — check cell passability for infantry
    return true;
}

// 0x51dff0
int InfantryClass::MoveToCell()
{
// [IDA decompile]
char __thiscall InfantryClass::MoveToCell(int this, int *a2, int a3)
{
  int *v3; // esi
  int GroundHeight; // ebx
  bool v6; // al
  _DWORD *v7; // eax
  int *v8; // eax
  int v9; // ecx
  char v11; // [esp-Ch] [ebp-30h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int v15[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = a2;
  GroundHeight = Cell::GetGroundHeight(a2);
  v12 = *v3;
  v13 = v3[1];
  v14 = v3[2];
  if ( v14 == GroundHeight )
  {
    v6 = 1;
    if ( !MEMORY[0xA8E7AC] )
    {
      LOWORD(a2) = *v3 / 256;
      HIWORD(a2) = v3[1] / 256;
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a2, 1) )
        v6 = 0;
    }
    v11 = v6;
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v3);
    v8 = ObjectPlacement::CalcPosition(v7, v15, v3, v11, 0, 0);
    v12 = *v8;
    v9 = v8[1];
    v13 = v9;
    if ( v12 == MEMORY[0xA8F200] && v9 == MEMORY[0xA8F204] && v8[2] == MEMORY[0xA8F208] )
      return 0;
    v14 = GroundHeight;
  }
  if ( !FootClass::DispatchInput((double *)this, (int)&v12, a3) )
    return 0;
  if ( !*(_DWORD *)(*(_DWORD *)(this + 1728) + 1512) )
    *(_BYTE *)(this + 1051) = 0;
  if ( v14 <= GroundHeight + MEMORY[0xA8F234] )
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 240))(this, &v12);
  *(_DWORD *)(this + 1768) = 2;
  return 1;
}

/* ASM:
sub     esp, 18h
push    ebx
push    esi
mov     esi, [esp+20h+arg_0]
push    edi
mov     edi, ecx
push    esi
mov     ecx, 87F7E8h
call    Cell__GetGroundHeight
mov     ebx, eax
mov     eax, esi
mov     ecx, [eax]
mov     [esp+24h+var_18], ecx
mov     edx, [eax+4]
mov     [esp+24h+var_14], edx
mov     eax, [eax+8]
cmp     eax, ebx
mov     [esp+24h+var_10], eax
jnz     loc_51E0CA
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     short loc_51E078
mov     eax, [esi]
lea     ecx, [esp+24h+arg_0]
cdq
and     edx, 0FFh
push    1
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+2Ch+arg_0], ax
mov     eax, [esi+4]
cdq
and     edx, 0FFh
mov     ecx, 87F7E8h
add     eax, edx
sar     eax, 8
mov     word ptr [esp+2Ch+arg_0+2], ax
mov     eax, [esp+2Ch+arg_0]
mov     [esp+2Ch+arg_0], eax
call    LayerClass__IsWithinUsableArea
test    al, al
jz      short loc_51E078
xor     eax, eax
jmp     short loc_51E07D
; ---------------------------------------------------------------------------

loc_51E078:                             ; CODE XREF: InfantryClass__MoveToCell+3E↑j
; InfantryClass__MoveToCell+82↑j
mov     eax, 1

loc_51E07D:                             ; CODE XREF: InfantryClass__MoveToCell+86↑j
push    0
push    0
push    eax
lea     edx, [esp+30h+var_C]
push    esi
push    edx
push    esi
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    ObjectPlacement__CalcPosition
mov     esi, dword_A8ED54+4ACh
mov     edx, eax
mov     eax, [edx]
mov     [esp+24h+var_18], eax
cmp     eax, esi
mov     ecx, [edx+4]
mov     [esp+24h+var_14], ecx
mov     edx, [edx+8]
jnz     short loc_51E0C6
cmp     ecx, dword_A8ED54+4B0h
jnz     short loc_51E0C6
cmp     edx, dword_A8ED54+4B4h
jz      short loc_51E129

loc_51E0C6:                             ; CODE XREF: InfantryClass__MoveToCell+C4↑j
; InfantryClass__MoveToCell+CC↑j
mov     [esp+24h+var_10], ebx

loc_51E0CA:                             ; CODE XREF: InfantryClass__MoveToCell+31↑j
mov     eax, [esp+24h+arg_4]
lea     ecx, [esp+24h+var_18]
push    eax
push    ecx
mov     ecx, edi
call    FootClass__DispatchInput
test    al, al
jz      short loc_51E129
mov     edx, [edi+6C0h]
mov     eax, [edx+5E8h]
test    eax, eax
jnz     short loc_51E0F6
mov     byte ptr [edi+41Bh], 0

loc_51E0F6:                             ; CODE XREF: InfantryClass__MoveToCell+FD↑j
mov     eax, dword_A8ED54+4E0h
mov     ecx, [esp+24h+var_10]
add     eax, ebx
cmp     ecx, eax
jg      short loc_51E114
mov     edx, [edi]
lea     eax, [esp+24h+var_18]
push    eax
mov     ecx, edi
call    dword ptr [edx+0F0h]

loc_51E114:                             ; CODE XREF: InfantryClass__MoveToCell+113↑j
mov     dword ptr [edi+6E8h], 2
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 18h
retn    8
; ---------------------------------------------------------------------------

loc_51E129:                             ; CODE XREF: InfantryClass__MoveToCell+D4↑j
; InfantryClass__MoveToCell+ED↑j
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 18h
retn    8
*/
}

// 0x51df10
int InfantryClass::CancelMovement()
{
// [IDA decompile]
int __thiscall InfantryClass::CancelMovement(int this)
{
  if ( !*(_DWORD *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 172))(*(_DWORD *)(this + 1652));
  *(_DWORD *)(this + 1768) = 2;
  *(_BYTE *)(this + 1755) = 0;
  *(_DWORD *)(this + 1732) = 0;
  return TechnoClass::CleanupDirection((_BYTE *)this);
}

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_51DF27
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51DF27:                             ; CODE XREF: InfantryClass__CancelMovement+B↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+0ACh]
mov     ecx, esi
mov     dword ptr [esi+6E8h], 2
mov     byte ptr [esi+6DBh], 0
mov     dword ptr [esi+6C4h], 0
call    TechnoClass__CleanupDirection
pop     esi
retn
*/
}

int InfantryClass::CalcMoveTarget()
{
    // IDA: 0x51B350 (1881B)
    // Calculate movement target based on current order
    return 0;
}

int InfantryClass::FindMoveTarget()
{
    // IDA: 0x51D0D0 (1568B)
    // Find the best movement target for current mission
    return 0;
}

// 0x418e20
int InfantryClass::FindNearbyCell()
{
// [IDA decompile]
void *__thiscall InfantryClass_FindNearbyCell(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  double v9; // rdi
  double v10; // st7
  __int16 v11; // bx
  double v12; // st7
  void *v13; // edi
  int v14; // eax
  int v16; // [esp+14h] [ebp-44h] BYREF
  double v17; // [esp+18h] [ebp-40h]
  int v18; // [esp+20h] [ebp-38h]
  int v19; // [esp+24h] [ebp-34h] BYREF
  double v20; // [esp+28h] [ebp-30h]
  int v21; // [esp+30h] [ebp-28h]
  _DWORD *v22; // [esp+34h] [ebp-24h]
  double v23; // [esp+38h] [ebp-20h]
  double v24; // [esp+40h] [ebp-18h]
  double v25; // [esp+48h] [ebp-10h] BYREF
  int v26; // [esp+50h] [ebp-8h]

  v2 = a2;
  v22 = this;
  if ( a2 && (!*(this + 373) || !(unsigned __int8)TechnoClass::IsWaypointHidden()) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 1360))(this, a2)
      || (v4 = (_DWORD *)(*(int (__thiscall **)(int, double *, _DWORD))(*(_DWORD *)a2 + 76))(a2, &v25, 0),
          LOWORD(v18) = *v4 / 256,
          HIWORD(v18) = v4[1] / 256,
          v19 = v18,
          !(unsigned __int8)Cell::IsOccupied(&v19, 0)) )
    {
      v5 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)a2 + 72))(a2, &v25);
      v6 = *v5;
      v7 = v5[1];
      v26 = v5[2];
      if ( !MEMORY[0xA8E7AC] )
      {
        v18 = 0;
        if ( *((_DWORD *)MEMORY[0x8871E0] + 1310) / 256 > 0 )
        {
          v19 = (__int16)(v7 / 256);
          v24 = (double)v19;
          v19 = (__int16)(v6 / 256);
          v25 = (double)v19;
          while ( 2 )
          {
            v8 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7);
            LODWORD(v20) = (__int16)v18;
            v21 = v8;
            v17 = 0.0;
            v23 = (double)(__int16)v18;
            do
            {
              v20 = (double)(int)(((__int16)((WORD2(v17) + (_WORD)v21) << 13) & 0xFFFFE000) - 0x3FFF)
                  * -0.00009587672516830327;
              v9 = v20;
              v10 = Math::SinCos(v20);
              v11 = Math::RoundToInt(v24 - v10 * v23);
              v12 = Math::ArcTan2(v9);
              LOWORD(v19) = Math::RoundToInt(v12 * v23 + v25);
              HIWORD(v19) = v11;
              v16 = v19;
              if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v16, 1) )
              {
                v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16);
                if ( v16 != LODWORD(v17)
                  && (*(unsigned __int8 (__thiscall **)(_DWORD *, void *))(*v22 + 1360))(v22, v13)
                  && (unsigned __int8)Cell::IsOccupied(&v16, 0) )
                {
                  return v13;
                }
                LODWORD(v17) = v16;
              }
              ++HIDWORD(v17);
            }
            while ( SHIDWORD(v17) < 8 );
            v14 = *((_DWORD *)MEMORY[0x8871E0] + 1310);
            if ( ++v18 < v14 / 256 )
              continue;
            break;
          }
          return (void *)a2;
        }
      }
    }
  }
  return (void *)v2;
}

/* ASM:
push    ebp
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 44h
push    ebx
push    esi
mov     esi, [ebp+arg_0]
push    edi
xor     ebx, ebx
mov     edi, ecx
cmp     esi, ebx
mov     [esp+50h+var_24], edi
jz      loc_419095
mov     ecx, [edi+5D4h]
cmp     ecx, ebx
jz      short loc_418E56
call    TechnoClass__IsWaypointHidden
test    al, al
jnz     loc_419095

loc_418E56:                             ; CODE XREF: InfantryClass__FindNearbyCell+27↑j
mov     eax, [edi]
push    esi
mov     ecx, edi
call    dword ptr [eax+550h]
test    al, al
jz      short loc_418EB8
mov     edx, [esi]
lea     eax, [esp+50h+var_10]
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+4Ch]
mov     ecx, eax
push    ebx
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+54h+var_38], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+54h+var_34]
sar     eax, 8
mov     word ptr [esp+54h+var_38+2], ax
mov     ecx, [esp+54h+var_38]
mov     [esp+54h+var_34], ecx
push    edx
mov     ecx, edi
call    Cell__IsOccupied
test    al, al
jnz     loc_419095

loc_418EB8:                             ; CODE XREF: InfantryClass__FindNearbyCell+43↑j
mov     eax, [esi]
lea     ecx, [esp+50h+var_10]
push    ecx
mov     ecx, esi
call    dword ptr [eax+48h]
mov     ecx, [eax]
mov     edi, [eax+4]
mov     edx, [eax+8]
mov     eax, ds:0A8E7ACh
cmp     eax, ebx
mov     [esp+50h+var_8], edx
jnz     loc_419095
mov     eax, ds:8871E0h
mov     [esp+50h+var_38], ebx
mov     eax, [eax+1478h]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
test    eax, eax
jle     loc_419095
mov     eax, ecx
cdq
and     edx, 0FFh
add     eax, edx
mov     ecx, eax
mov     eax, edi
cdq
and     edx, 0FFh
add     eax, edx
sar     ecx, 8
sar     eax, 8
movsx   edx, ax
mov     [esp+50h+var_34], edx
fild    [esp+50h+var_34]
movsx   eax, cx
fstp    [esp+50h+var_18]
mov     [esp+50h+var_34], eax
fild    [esp+50h+var_34]
fstp    [esp+50h+var_10]
jmp     short loc_418F40
; ---------------------------------------------------------------------------

loc_418F3E:                             ; CODE XREF: InfantryClass__FindNearbyCell+26C↓j
xor     ebx, ebx

loc_418F40:                             ; CODE XREF: InfantryClass__FindNearbyCell+11C↑j
mov     ecx, ds:0A8B230h
push    7
push    ebx
add     ecx, 218h
call    Random__Range
movsx   edx, word ptr [esp+50h+var_38]
mov     dword ptr [esp+50h+var_30], edx
mov     [esp+50h+var_28], eax
fild    dword ptr [esp+50h+var_30]
mov     word ptr [esp+50h+var_40], bx
mov     word ptr [esp+50h+var_40+2], bx
mov     dword ptr [esp+50h+var_40+4], ebx
fstp    [esp+50h+var_20]

loc_418F77:                             ; CODE XREF: InfantryClass__FindNearbyCell+243↓j
mov     eax, [esp+50h+var_28]
mov     ecx, dword ptr [esp+50h+var_40+4]
add     eax, ecx
shl     eax, 0Dh
movsx   edx, ax
and     edx, 0FFFFE000h
sub     edx, 3FFFh
mov     dword ptr [esp+50h+var_30], edx
fild    dword ptr [esp+50h+var_30]
fmul    ds:dbl_7E2810
fstp    [esp+50h+var_30]
mov     esi, dword ptr [esp+50h+var_30+4]
mov     edi, dword ptr [esp+50h+var_30]
push    esi
push    edi             ; double
call    Math__SinCos
fmul    [esp+58h+var_20]
fsubr   [esp+58h+var_18]
call    Math__RoundToInt
push    esi
push    edi             ; double
mov     ebx, eax
call    Math__ArcTan2
fmul    [esp+60h+var_20]
add     esp, 10h
fadd    [esp+50h+var_10]
call    Math__RoundToInt
lea     ecx, [esp+50h+var_44]
mov     word ptr [esp+50h+var_34], ax
mov     word ptr [esp+50h+var_34+2], bx
mov     eax, [esp+50h+var_34]
push    1
push    ecx
mov     ecx, 87F7E8h
mov     [esp+58h+var_44], eax
call    LayerClass__IsWithinUsableArea
test    al, al
jz      short loc_419057
lea     edx, [esp+50h+var_44]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
mov     edi, eax
mov     ax, word ptr [esp+50h+var_44]
cmp     ax, word ptr [esp+50h+var_40]
jnz     short loc_41902A
mov     cx, word ptr [esp+50h+var_40+2]
cmp     word ptr [esp+50h+var_44+2], cx
jz      short loc_41904F

loc_41902A:                             ; CODE XREF: InfantryClass__FindNearbyCell+1FC↑j
mov     esi, [esp+50h+var_24]
push    edi
mov     ecx, esi
mov     edx, [esi]
call    dword ptr [edx+550h]
test    al, al
jz      short loc_41904F
lea     eax, [esp+50h+var_44]
push    0
push    eax
mov     ecx, esi
call    Cell__IsOccupied
test    al, al
jnz     short loc_4190A0

loc_41904F:                             ; CODE XREF: InfantryClass__FindNearbyCell+208↑j
; InfantryClass__FindNearbyCell+21B↑j
mov     ecx, [esp+50h+var_44]
mov     dword ptr [esp+50h+var_40], ecx

loc_419057:                             ; CODE XREF: InfantryClass__FindNearbyCell+1DF↑j
mov     eax, dword ptr [esp+50h+var_40+4]
inc     eax
cmp     eax, 8
mov     dword ptr [esp+50h+var_40+4], eax
jl      loc_418F77
mov     edx, ds:8871E0h
mov     ecx, [esp+50h+var_38]
inc     ecx
mov     eax, [edx+1478h]
mov     [esp+50h+var_38], ecx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
cmp     ecx, eax
jl      loc_418F3E
mov     esi, [ebp+arg_0]

loc_419095:                             ; CODE XREF: InfantryClass__FindNearbyCell+19↑j
; InfantryClass__FindNearbyCell+30↑j ...
mov     eax, esi
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
; ---------------------------------------------------------------------------

loc_4190A0:                             ; CODE XREF: InfantryClass__FindNearbyCell+22D↑j
mov     eax, edi
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
*/
}

// 0x51f330
int InfantryClass::FindPathToBuilding()
{
// [IDA decompile]
int __thiscall InfantryClass::FindPathToBuilding(int *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, 0);
  v3 = *(this + 173);
  if ( !v3 || (result = (*(int (__thiscall **)(int *, int, int))(*this + 936))(this, v3, v2), !(_BYTE)result) )
  {
    if ( (v7[0] = *(this + 39),
          v7[1] = *(this + 40),
          v5 = *this,
          v7[2] = *(this + 41),
          v6 = (*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(v5 + 964))(this, 1, v7, 0),
          (result = *(this + 173)) == 0)
      && !v6
      || (result = (*(int (__thiscall **)(int *, int))(*this + 968))(this, v6), !v6) )
    {
      if ( *(this + 43) != 5 )
      {
        result = (*(int (__thiscall **)(int *))(*this + 132))(this);
        if ( !*(_BYTE *)(result + 3476) )
          return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1);
      }
    }
  }
  return result;
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
push    0
mov     eax, [esi]
call    dword ptr [eax+2E4h]
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F35B
mov     edx, [esi]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     short loc_51F3D2

loc_51F35B:                             ; CODE XREF: InfantryClass__FindPathToBuilding+19↑j
lea     eax, [esi+9Ch]
push    0
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+18h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
lea     eax, [esp+18h+var_C]
push    eax
push    1
call    dword ptr [edx+3C4h]
mov     edi, eax
mov     eax, [esi+2B4h]
test    eax, eax
jnz     short loc_51F398
test    edi, edi
jz      short loc_51F3A7

loc_51F398:                             ; CODE XREF: InfantryClass__FindPathToBuilding+62↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+3C8h]
test    edi, edi
jnz     short loc_51F3D2

loc_51F3A7:                             ; CODE XREF: InfantryClass__FindPathToBuilding+66↑j
cmp     dword ptr [esi+0ACh], 5
jz      short loc_51F3D2
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     cl, [eax+0D94h]
test    cl, cl
jnz     short loc_51F3D2
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+484h]

loc_51F3D2:                             ; CODE XREF: InfantryClass__FindPathToBuilding+29↑j
; InfantryClass__FindPathToBuilding+75↑j ...
pop     edi
pop     esi
add     esp, 0Ch
retn
*/
}

// 0x51f3e0
int InfantryClass::EnterBuilding()
{
// [IDA decompile]
int __thiscall InfantryClass::EnterBuilding(float *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // eax
  char *MissionControl; // eax
  int v10; // esi

  if ( (*(_BYTE *)(*((_DWORD *)this + 432) + 3778) || TechnoTypeClass::HasVoiceResponse(this, 14))
    && (v2 = *((_DWORD *)this + 173)) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6
    && (v3 = *((_DWORD *)this + 173), v4 = *(_DWORD *)(v3 + 1312), *(_BYTE *)(v4 + 5495))
    && !*(_BYTE *)(v4 + 5889) )
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 1152))(this, v3, 1);
    (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 488))(this, 17, 0);
    return 1;
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
         && (v6 = *((_DWORD *)this + 173)) != 0
         && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 6
         && ((v7 = (_BYTE *)*((_DWORD *)this + 432), v7[3774])
          || (v7[3764] || v7[3765]) && BuildingClass::CanRepair(*((_DWORD **)this + 173), (int)this)) )
  {
    (*(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)this + 1152))(this, *((_DWORD *)this + 173), 1);
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 496))(this, 8);
    return 1;
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
         && ((v8 = *((_DWORD *)this + 433), v8 == 27) || v8 == 28 || v8 == 29 || v8 == 30) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1064))(this);
    MissionControl = MissionClass::GetMissionControl(this);
    v10 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v10 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
  }
  else
  {
    return InfantryClass::ScanTarget((int)this);
  }
}

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC2h]
test    cl, cl
jnz     short loc_51F400
push    0Eh
mov     ecx, esi
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      short loc_51F456

loc_51F400:                             ; CODE XREF: InfantryClass__EnterBuilding+11↑j
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F456
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_51F456
mov     eax, [esi+2B4h]
mov     ecx, [eax+520h]
mov     dl, [ecx+1577h]
test    dl, dl
jz      short loc_51F456
mov     dl, [ecx+1701h]
test    dl, dl
jnz     short loc_51F456
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
mov     eax, [esi]
push    0
push    11h
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     eax, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F456:                             ; CODE XREF: InfantryClass__EnterBuilding+1E↑j
; InfantryClass__EnterBuilding+28↑j ...
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_51F4D3
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F4D3
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_51F4D3
mov     eax, [esi+6C0h]
mov     cl, [eax+0EBEh]
test    cl, cl
jnz     short loc_51F4AD
mov     cl, [eax+0EB4h]
test    cl, cl
jnz     short loc_51F49D
mov     cl, [eax+0EB5h]
test    cl, cl
jz      short loc_51F4D3

loc_51F49D:                             ; CODE XREF: InfantryClass__EnterBuilding+B1↑j
mov     ecx, [esi+2B4h]
push    esi
call    BuildingClass__CanRepair
test    al, al
jz      short loc_51F4D3

loc_51F4AD:                             ; CODE XREF: InfantryClass__EnterBuilding+A7↑j
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    8
mov     ecx, esi
call    dword ptr [edx+1F0h]
mov     eax, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F4D3:                             ; CODE XREF: InfantryClass__EnterBuilding+83↑j
; InfantryClass__EnterBuilding+8D↑j ...
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_51F536
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_51F4FC
cmp     eax, 1Ch
jz      short loc_51F4FC
cmp     eax, 1Dh
jz      short loc_51F4FC
cmp     eax, 1Eh
jnz     short loc_51F536

loc_51F4FC:                             ; CODE XREF: InfantryClass__EnterBuilding+10B↑j
; InfantryClass__EnterBuilding+110↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+428h]
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    2
push    0
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F536:                             ; CODE XREF: InfantryClass__EnterBuilding+100↑j
; InfantryClass__EnterBuilding+11A↑j
mov     ecx, esi
call    InfantryClass__ScanTarget
pop     esi
retn
*/
}

// 0x51f540
int InfantryClass::ProcessEnterOrRepair()
{
// [IDA decompile]
int __thiscall InfantryClass::ProcessEnterOrRepair(#375 **this)
{
  int v2; // ecx
  _BYTE *v3; // eax
  int v5; // eax

  if ( !(unsigned __int8)House::IsCurrentPlayer(*(this + 135))
    && (v2 = (int)*(this + 173)) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6
    && ((v3 = *(this + 432), v3[3774]) || (v3[3764] || v3[3765]) && BuildingClass::CanRepair(*(this + 173), (int)this)) )
  {
    (*((void (__thiscall **)(#375 **, _DWORD, int))*this + 288))(this, *(this + 173), 1);
    (*((void (__thiscall **)(#375 **, int))*this + 124))(this, 8);
    return 1;
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer(*(this + 135))
         && ((v5 = (int)*(this + 433), v5 == 27) || v5 == 28 || v5 == 29 || v5 == 30)
         && !*(this + 173) )
  {
    (*((void (__thiscall **)(#375 **, int, _DWORD, _DWORD))*this + 342))(this, 31, 0, 0);
    return 1;
  }
  else
  {
    return InfantryClass::ProcessDeploy(this);
  }
}

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_51F5C0
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F5C0
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_51F5C0
mov     eax, [esi+6C0h]
mov     cl, [eax+0EBEh]
test    cl, cl
jnz     short loc_51F59A
mov     cl, [eax+0EB4h]
test    cl, cl
jnz     short loc_51F58A
mov     cl, [eax+0EB5h]
test    cl, cl
jz      short loc_51F5C0

loc_51F58A:                             ; CODE XREF: InfantryClass__ProcessEnterOrRepair+3E↑j
mov     ecx, [esi+2B4h]
push    esi
call    BuildingClass__CanRepair
test    al, al
jz      short loc_51F5C0

loc_51F59A:                             ; CODE XREF: InfantryClass__ProcessEnterOrRepair+34↑j
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
mov     edx, [esi]
push    8
mov     ecx, esi
call    dword ptr [edx+1F0h]
mov     eax, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F5C0:                             ; CODE XREF: InfantryClass__ProcessEnterOrRepair+10↑j
; InfantryClass__ProcessEnterOrRepair+1A↑j ...
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_51F60A
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_51F5E9
cmp     eax, 1Ch
jz      short loc_51F5E9
cmp     eax, 1Dh
jz      short loc_51F5E9
cmp     eax, 1Eh
jnz     short loc_51F60A

loc_51F5E9:                             ; CODE XREF: InfantryClass__ProcessEnterOrRepair+98↑j
; InfantryClass__ProcessEnterOrRepair+9D↑j ...
mov     eax, [esi+2B4h]
test    eax, eax
jnz     short loc_51F60A
mov     eax, [esi]
push    0
push    0
push    1Fh
mov     ecx, esi
call    dword ptr [eax+558h]
mov     eax, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F60A:                             ; CODE XREF: InfantryClass__ProcessEnterOrRepair+8D↑j
; InfantryClass__ProcessEnterOrRepair+A7↑j ...
mov     ecx, esi
call    InfantryClass__ProcessDeploy
pop     esi
retn
*/
}

// 0x522bc0
bool InfantryClass::CanEnterBuilding()
{
// [IDA decompile]
bool __thiscall InfantryClass::CanEnterBuilding(_DWORD *this)
{
  int v2; // eax
  bool result; // al

  result = 0;
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 5
    || (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 11 )
  {
    v2 = *(this + 433);
    if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 )
      return 1;
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi]
call    dword ptr [eax+184h]
cmp     eax, 5
jz      short loc_522BDF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Bh
jnz     short loc_522BF8

loc_522BDF:                             ; CODE XREF: InfantryClass__CanEnterBuilding+E↑j
mov     eax, [esi+6C4h]
test    eax, eax
jz      short loc_522BFC
cmp     eax, 9
jz      short loc_522BFC
cmp     eax, 0Ah
jz      short loc_522BFC
cmp     eax, 20h ; ' '
jz      short loc_522BFC

loc_522BF8:                             ; CODE XREF: InfantryClass__CanEnterBuilding+1D↑j
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_522BFC:                             ; CODE XREF: InfantryClass__CanEnterBuilding+27↑j
; InfantryClass__CanEnterBuilding+2C↑j ...
mov     al, 1
pop     esi
retn
*/
}

int InfantryClass::FindIdleMovePosition()
{
    // IDA: 0x51F620 — find idle movement position
    return 0;
}

// 0x51f640
int InfantryClass::FindIdleAITarget()
{
// [IDA decompile]
int __thiscall InfantryClass::FindIdleAITarget(int *this)
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this);
  if ( result == -1 )
    return FootClass::FindAITarget(this);
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
call    InfantryClass__GetIdleTimer
cmp     eax, 0FFFFFFFFh
jnz     short loc_51F654
mov     ecx, esi
call    FootClass__FindAITarget

loc_51F654:                             ; CODE XREF: InfantryClass__FindIdleAITarget+B↑j
pop     esi
retn
*/
}

// ============================================================
// Phase 3: Paradrop
// ============================================================

// 0x521760
int InfantryClass::ParachuteTo()
{
// [IDA decompile]
char __thiscall InfantryClass::ParachuteTo(int this, int a2)
{
  if ( !(unsigned __int8)ObjectClass::ParachuteDrop((#374 *)this) )
    return 0;
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 5, 0);
  else
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 15, 0);
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)this + 1368))(this, 33, 1, 0);
  return 1;
}

/* ASM:
mov     eax, [esp+arg_0]
push    esi
mov     esi, ecx
push    eax
call    ObjectClass__ParachuteDrop
test    al, al
jz      short loc_5217B4
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_521790
mov     edx, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [edx+1E8h]
jmp     short loc_52179E
; ---------------------------------------------------------------------------

loc_521790:                             ; CODE XREF: InfantryClass__ParachuteTo+1E↑j
mov     eax, [esi]
push    0
push    0Fh
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_52179E:                             ; CODE XREF: InfantryClass__ParachuteTo+2E↑j
mov     edx, [esi]
push    0
push    1
push    21h ; '!'
mov     ecx, esi
call    dword ptr [edx+558h]
mov     al, 1
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_5217B4:                             ; CODE XREF: InfantryClass__ParachuteTo+F↑j
xor     al, al
pop     esi
retn    4
*/
}

// ============================================================
// Phase 3: C4 / Bomb
// ============================================================

// 0x51f6e0
int InfantryClass::ProcessIvanBomb()
{
// [IDA decompile]
int __thiscall InfantryClass::ProcessIvanBomb(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  __int16 *v7; // eax
  void *v8; // eax
  int v9; // edx
  _BYTE v11[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(this + 432);
  if ( !*(_BYTE *)(v2 + 3784) )
    return AbstractClass::COMStub_143();
  v3 = *(this + 433);
  v4 = -1;
  if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 )
  {
    if ( *(int *)(v2 + 1732) <= -1 )
      (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 31, 1, 0);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 27, 1, 0);
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1008))(this);
    if ( (unsigned __int8)IsNonNullPtr(v5) && *(_BYTE *)(*(_DWORD *)v5 + 336) )
    {
      if ( (unsigned __int8)ObjectClass::StepCleanup(this, aDeso) )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(*(this + 432) + 3644) + 976) + 1;
      }
      else
      {
        v6 = *this;
        v7 = (__int16 *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 440))(this, v11);
        v8 = CellCoord::To_CellObj(MEMORY[0x87F7E8], v7);
        (*(void (__thiscall **)(_DWORD *, void *))(v6 + 968))(this, v8);
      }
    }
    v9 = *(this + 432);
    if ( *(int *)(v9 + 1732) > -1 )
      v4 = *(_DWORD *)(v9 + 1732);
  }
  (*(void (__thiscall **)(_DWORD *, int))(*this + 496))(this, 5);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1);
  if ( v4 > -1 )
    return v4;
  else
    return AbstractClass::COMStub_143();
}

/* ASM:
push    ecx
push    ebx
push    esi
mov     esi, ecx
mov     ecx, [esi+6C0h]
mov     al, [ecx+0EC8h]
test    al, al
jz      loc_51F7EE
mov     eax, [esi+6C4h]
or      ebx, 0FFFFFFFFh
cmp     eax, 1Bh
jz      short loc_51F716
cmp     eax, 1Ch
jz      short loc_51F716
cmp     eax, 1Dh
jz      short loc_51F716
cmp     eax, 1Eh
jnz     short loc_51F738

loc_51F716:                             ; CODE XREF: InfantryClass__ProcessIvanBomb+25↑j
; InfantryClass__ProcessIvanBomb+2A↑j ...
cmp     dword ptr [ecx+6C4h], 0FFFFFFFFh
jg      loc_51F7C9
mov     eax, [esi]
push    0
push    1
push    1Fh
mov     ecx, esi
call    dword ptr [eax+558h]
jmp     loc_51F7C9
; ---------------------------------------------------------------------------

loc_51F738:                             ; CODE XREF: InfantryClass__ProcessIvanBomb+34↑j
mov     edx, [esi]
push    edi
push    0
push    1
push    1Bh
mov     ecx, esi
call    dword ptr [edx+558h]
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+3F0h]
mov     edi, eax
mov     ecx, esi
push    edi
call    IsNonNullPtr
test    al, al
jz      short loc_51F7B5
mov     ecx, [edi]
mov     al, [ecx+150h]
test    al, al
jz      short loc_51F7B5
push    offset aDeso    ; "DESO"
mov     ecx, esi
call    ObjectClass__StepCleanup
test    al, al
jz      short loc_51F792
mov     edx, [esi+6C0h]
mov     eax, [edx+0E3Ch]
mov     ebx, [eax+3D0h]
inc     ebx
jmp     short loc_51F7B5
; ---------------------------------------------------------------------------

loc_51F792:                             ; CODE XREF: InfantryClass__ProcessIvanBomb+9B↑j
mov     edi, [esi]
lea     ecx, [esp+10h+var_4]
push    ecx
mov     ecx, esi
call    dword ptr [edi+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+3C8h]

loc_51F7B5:                             ; CODE XREF: InfantryClass__ProcessIvanBomb+7F↑j
; InfantryClass__ProcessIvanBomb+8B↑j ...
mov     edx, [esi+6C0h]
pop     edi
mov     eax, [edx+6C4h]
cmp     eax, 0FFFFFFFFh
jle     short loc_51F7C9
mov     ebx, eax

loc_51F7C9:                             ; CODE XREF: InfantryClass__ProcessIvanBomb+3D↑j
; InfantryClass__ProcessIvanBomb+53↑j ...
mov     eax, [esi]
push    5
mov     ecx, esi
call    dword ptr [eax+1F0h]
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
cmp     ebx, 0FFFFFFFFh
jle     short loc_51F7EE
mov     eax, ebx
pop     esi
pop     ebx
pop     ecx
retn
; ---------------------------------------------------------------------------

loc_51F7EE:                             ; CODE XREF: InfantryClass__ProcessIvanBomb+13↑j
; InfantryClass__ProcessIvanBomb+106↑j
mov     ecx, esi
call    AbstractClass__COMStub_143
pop     esi
pop     ebx
pop     ecx
retn
*/
}

int InfantryClass::ProcessIvanBombResult()
{
    // IDA: 0x51F660 — process bomb explosion result
    return 0;
}

int InfantryClass::CheckAndApplyBomb()
{
    // IDA: 0x521DD0 — check and apply C4/bomb damage
    return 0;
}

// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// 0x521c90
int InfantryClass::PowerDrainUpdate(int a2)
{
// [IDA decompile]
int __thiscall InfantryClass_PowerDrainUpdate(int this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax

  FootClass::BeginPowerUpdate(a2);
  Power::TimerProcess(*(_DWORD *)(this + 1732));
  v3 = *(_DWORD *)(this + 1736);
  v4 = *(_DWORD *)(this + 1744);
  if ( v3 != -1 )
  {
    if ( (int)MEMORY[0xA8ED84] - v3 >= v4 )
      v4 = 0;
    else
      v4 -= (int)MEMORY[0xA8ED84] - v3;
  }
  Power::TimerProcess(v4);
  Power::TimerProcess(*(_DWORD *)(this + 1748));
  LOBYTE(v5) = *(_BYTE *)(this + 1753);
  v6 = Power::FlagProcess(a2, v5);
  LOBYTE(v6) = *(_BYTE *)(this + 1754);
  Power::FlagProcess(a2, v6);
  LOBYTE(v7) = *(_BYTE *)(this + 1755);
  Power::FlagProcess(a2, v7);
  LOBYTE(v8) = *(_BYTE *)(this + 1756);
  v9 = Power::FlagProcess(a2, v8);
  LOBYTE(v9) = *(_BYTE *)(this + 1757);
  return Power::FlagProcess(a2, v9);
}

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
push    edi
call    FootClass__BeginPowerUpdate
mov     eax, [esi+6C4h]
mov     ecx, edi
push    eax
call    Power__TimerProcess
mov     edx, [esi+6C8h]
mov     eax, [esi+6D0h]
cmp     edx, 0FFFFFFFFh
jz      short loc_521CCF
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_521CCD
sub     eax, ecx
jmp     short loc_521CCF
; ---------------------------------------------------------------------------

loc_521CCD:                             ; CODE XREF: InfantryClass__PowerDrainUpdate+37↑j
xor     eax, eax

loc_521CCF:                             ; CODE XREF: InfantryClass__PowerDrainUpdate+2B↑j
; InfantryClass__PowerDrainUpdate+3B↑j
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     ecx, [esi+6D4h]
push    ecx
mov     ecx, edi
call    Power__TimerProcess
mov     dl, [esi+6D9h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6DAh]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+6DBh]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6DCh]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6DDh]
mov     ecx, edi
push    eax
call    Power__FlagProcess
pop     edi
pop     esi
retn    4
*/
}

// 0x51aa10
int InfantryClass::HandleTargetDestroyed()
{
// [IDA decompile]
int __thiscall InfantryClass::HandleTargetDestroyed(int *this, int *a2, int *a3)
{
  int result; // eax

  result = FootClass::HandleTargetDestroyed(this, a2, a3);
  if ( (int *)*(this + 432) == a2 )
    *(this + 432) = 0;
  return result;
}

/* ASM:
mov     eax, [esp+arg_4]
push    esi
push    edi
mov     edi, [esp+8+arg_0]
push    eax
mov     esi, ecx
push    edi
call    FootClass__HandleTargetDestroyed
cmp     [esi+6C0h], edi
jnz     short loc_51AA35
mov     dword ptr [esi+6C0h], 0

loc_51AA35:                             ; CODE XREF: InfantryClass__HandleTargetDestroyed+19↑j
pop     edi
pop     esi
retn    8
*/
}

// 0x51f250
int InfantryClass::ProcessUpdate()
{
// [IDA decompile]
char __thiscall InfantryClass::_vt80(_BYTE *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  int v6; // eax

  v6 = *((_DWORD *)this + 433);
  if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30)
    && (*(int (__thiscall **)(_BYTE *, __int16 *, _DWORD, void **))(*(_DWORD *)this + 112))(this, a3, 0, a5) == 2 )
  {
    return 0;
  }
  if ( *(this + 664) )
    return 0;
  return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5);
}

/* ASM:
push    ebx
mov     ebx, [esp+4+arg_C]
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_51F277
cmp     eax, 1Ch
jz      short loc_51F277
cmp     eax, 1Dh
jz      short loc_51F277
cmp     eax, 1Eh
jnz     short loc_51F28F

loc_51F277:                             ; CODE XREF: InfantryClass__ProcessUpdate+16↑j
; InfantryClass__ProcessUpdate+1B↑j ...
mov     eax, [esi]
push    ebx
push    0
push    edi
mov     ecx, esi
call    dword ptr [eax+70h]
cmp     eax, 2
jnz     short loc_51F28F
pop     edi
pop     esi
xor     al, al
pop     ebx
retn    10h
; ---------------------------------------------------------------------------

loc_51F28F:                             ; CODE XREF: InfantryClass__ProcessUpdate+25↑j
; InfantryClass__ProcessUpdate+35↑j
mov     al, [esi+298h]
test    al, al
jz      short loc_51F2A1
pop     edi
pop     esi
xor     al, al
pop     ebx
retn    10h
; ---------------------------------------------------------------------------

loc_51F2A1:                             ; CODE XREF: InfantryClass__ProcessUpdate+47↑j
mov     ecx, [esp+0Ch+arg_8]
mov     edx, [esp+0Ch+arg_0]
push    ebx
push    ecx
push    edi
push    edx
mov     ecx, esi
call    ObjectClass__SpawnInfantry
pop     edi
pop     esi
pop     ebx
retn    10h
*/
}

// 0x51f190
int InfantryClass::ValidateTargetAndMove()
{
// [IDA decompile]
char __thiscall InfantryClass::ValidateTargetAndMove(int *this, int a2, int *a3, int a4)
{
  int v5; // eax

  v5 = ((__int64 (__thiscall *)(int *, int *, int))*(_DWORD *)(*this + 116))(this, a3, a4);
  switch ( v5 )
  {
    case 9:
    case 28:
    case 29:
      v5 = 9;
      break;
    case 27:
    case 57:
      v5 = 5;
      break;
    default:
      break;
  }
  if ( a3 == this && v5 == 5 )
    return 0;
  if ( *((_BYTE *)this + 664) )
    return 0;
  return FootClass::ValidateMove(this, v5, a3, a4);
}

/* ASM:
push    ebp
mov     ebp, [esp+4+arg_8]
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     eax, [esi]
push    ebp
push    edi
call    dword ptr [eax+74h]
lea     ecx, [eax-1]    ; switch 57 cases
cmp     ecx, 38h
ja      short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
xor     edx, edx
mov     dl, ds:byte_51F20C[ecx]
jmp     ds:jpt_51F1B4[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_51F1BB:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 9          ; jumptable 0051F1B4 cases 9,28,29
jmp     short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
; ---------------------------------------------------------------------------

loc_51F1C2:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 5          ; jumptable 0051F1B4 cases 27,57

def_51F1B4:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+1A↑j
; InfantryClass__ValidateTargetAndMove+24↑j ...
cmp     edi, esi        ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
jnz     short loc_51F1D8
cmp     eax, 5
jnz     short loc_51F1D8
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1D8:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+39↑j
; InfantryClass__ValidateTargetAndMove+3E↑j
mov     cl, [esi+298h]
test    cl, cl
jz      short loc_51F1EA
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1EA:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+50↑j
push    ebp
push    edi
push    eax
mov     ecx, esi
call    FootClass__ValidateMove
pop     edi
pop     esi
pop     ebp
retn    0Ch
*/
}

int InfantryClass::SetMission()
{
    // IDA: 0x728280 — set mission for infantry
    return 0;
}

int InfantryClass::IdleStateMachine()
{
    // IDA: 0x728E30 — idle state machine logic
    return 0;
}

int InfantryClass::ProcessTunnelMovement()
{
    // IDA: 0x7291F0 — process tunnel/teleport movement
    return 0;
}

// 0x736579
int InfantryClass::UpdateBehavior()
{
// [IDA decompile]
char __usercall InfantryClass::UpdateBehavior@<al>(int a1@<eax>, int a2@<ecx>, int a3@<ebx>, _BYTE *a4@<esi>, int a5)
{
  void **v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  int v13; // ecx
  void *v14; // eax
  _DWORD *v15; // eax
  _WORD *v16; // eax
  __int16 v17; // di
  __int16 v18; // bx
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  int v21; // ebx
  __int16 *PlacementCellsAlt; // eax
  void *v23; // eax
  int v25; // [esp-2Eh] [ebp-40h] BYREF
  _DWORD v26[2]; // [esp-26h] [ebp-38h] BYREF
  int *v27; // [esp-1Eh] [ebp-30h]
  _DWORD v28[2]; // [esp-1Ah] [ebp-2Ch] BYREF
  _DWORD v29[4]; // [esp-12h] [ebp-24h] BYREF
  int v30[2]; // [esp-2h] [ebp-14h] BYREF
  int v31; // [esp+6h] [ebp-Ch] BYREF
  int v32; // [esp+Ah] [ebp-8h] BYREF
  int v33; // [esp+Eh] [ebp-4h]
  int vars0; // [esp+12h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+16h] [ebp+4h]

  v30[0] = a2;
  v30[1] = a3;
  v31 = a1;
  v5 = (void **)__2_YAPAXI_Z(v27);
  if ( v5 )
    AnimClass::ctor(v5, *(void **)(MEMORY[0x87F7E8][7806] + 148), v30, 0, 1, (void *)0x600, 0, 0);
  LOBYTE(v6) = a4[144];
  if ( (_BYTE)v6 )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) != 10 )
      a4[1746] = 0;
    UpdateTechnoFiring((#377 *)a4);
    UnitClass::UpdateRotation_TurretFacing_EMP((int)a4);
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) == 5
      && (v32 = *((_DWORD *)a4 + 39),
          v7 = *((_DWORD *)a4 + 40),
          v27 = &v32,
          v33 = v7,
          vars0 = *((_DWORD *)a4 + 41),
          !Tactical::IsCellVisible(MEMORY[0x87F7E8], &v32))
      && a4[981] )
    {
      v8 = *((_DWORD *)a4 + 373);
      if ( v8 )
        *(_BYTE *)(v8 + 130) = 1;
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 928))(a4);
      LOBYTE(v6) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 248))(a4);
    }
    else
    {
      v9 = *((_DWORD *)a4 + 433);
      if ( *(_BYTE *)(v9 + 3608) || *(_BYTE *)(v9 + 3609) )
        UpdateInfantryIdleWander((int *)a4);
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 1060))(a4);
      if ( *(int *)(*((_DWORD *)a4 + 433) + 1504) > 0
        && !Flag::CheckNone(a4 + 848)
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) != 16
        && (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 628))(a4, 17) != 1 )
      {
        Timer::StartDouble(a4 + 848, *(double *)(*((_DWORD *)a4 + 433) + 968));
      }
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 512))(a4) )
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 492))(a4);
      if ( *((_DWORD *)a4 + 136) == 2 && *((_DWORD *)a4 + 435) != -1 )
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 252))(a4);
      if ( (dword_A8ED54[12] & 0xF) == 0 )
      {
        v10 = *((_DWORD *)a4 + 43);
        if ( (v10 == 11 || v10 == 5)
          && !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)a4 + 135))
          && *((_DWORD *)a4 + 45) == -1 )
        {
          v11 = *((_DWORD *)a4 + 433);
          if ( *((_DWORD *)a4 + 27) < *(_DWORD *)(v11 + 160)
            && (!*((_DWORD *)a4 + 134) || *((_DWORD *)a4 + 43) == 11)
            && !*(_BYTE *)(v11 + 3598)
            && !*(_BYTE *)(v11 + 3599) )
          {
            v12 = globalHelper_055DD0(*((_DWORD *)a4 + 135), a4);
            if ( v12 )
            {
              if ( !*((_DWORD *)a4 + 134) )
              {
                v31 = *((_DWORD *)a4 + 39);
                v13 = *((_DWORD *)a4 + 40);
                v26[1] = &v31;
                v32 = v13;
                v33 = *((_DWORD *)a4 + 41);
                v14 = Coord::To_Cell(MEMORY[0x87F7E8], &v31);
                TechnoClass::SetFocus(a4, (int)v14);
              }
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a4 + 488))(a4, 7, 0);
              (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a4 + 968))(a4, 0);
              (*(void (__thiscall **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a4 + 1152))(a4, v12, 1);
            }
          }
        }
      }
      v6 = (_DWORD *)*((_DWORD *)a4 + 433);
      if ( *((_BYTE *)v6 + 3598) )
      {
        LOBYTE(v6) = House::IsCurrentPlayer(*((#375 **)a4 + 135));
        if ( !(_BYTE)v6 && dword_A8ED54[12] - *((_DWORD *)a4 + 48) > 300 )
        {
          if ( !*((_DWORD *)a4 + 413) )
            WinAPI::Wrapper(-2147467261);
          LOBYTE(v6) = (*(int (__cdecl **)(_DWORD))(**((_DWORD **)a4 + 413) + 16))(*((_DWORD *)a4 + 413));
          if ( !(_BYTE)v6 )
          {
            v29[0] = *((_DWORD *)a4 + 39);
            v29[1] = *((_DWORD *)a4 + 40);
            v29[2] = *((_DWORD *)a4 + 41);
            v15 = Coord::To_Cell(MEMORY[0x87F7E8], v29);
            v6 = Cell::IsBridge(v15);
            if ( v6 )
            {
              if ( *(_BYTE *)(v6[328] + 5819) )
              {
                v16 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 440))(v6, v26);
                v17 = *v16 + 3;
                v18 = v16[1] + 1;
                v6 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)a4 + 440))(a4, v26);
                if ( *(_WORD *)v6 == v17 && *((_WORD *)v6 + 1) == v18 )
                {
                  v28[0] = vars0;
                  v28[1] = retaddr;
                  v29[0] = a5;
                  v19 = Coord::To_Cell(MEMORY[0x87F7E8], v28);
                  v20 = Cell::IsBridge(v19);
                  if ( Team::AllMembersValid((int *)a4) )
                    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 628))(a4, 3);
                  v21 = *(_DWORD *)a4;
                  PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt(a4, &v25, (int)v20);
                  v23 = CellCoord::To_CellObj(MEMORY[0x87F7E8], PlacementCellsAlt);
                  (*(void (__thiscall **)(_BYTE *, void *))(v21 + 1152))(a4, v23);
                  LOBYTE(v6) = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a4 + 488))(a4, 2, 1);
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v6;
}

/* ASM:
enter   1, 0
mov     [esp+2+arg_12], ecx
mov     [esp+2+arg_16], ebx
mov     [esp+2+arg_1A], eax
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_7365BB
mov     edx, ds:8871E0h
push    0               ; char
push    0               ; int
push    600h            ; int
push    1               ; int
lea     ecx, [esp+0Eh+arg_12]
push    0               ; int
push    ecx             ; int
mov     ecx, [edx+94h]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor

loc_7365BB:                             ; CODE XREF: InfantryClass__UpdateBehavior+1A↑j
mov     al, [esi+90h]
test    al, al
jz      loc_736981
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Ah
jz      short loc_7365DF
mov     byte ptr [esi+6D2h], 0

loc_7365DF:                             ; CODE XREF: InfantryClass__UpdateBehavior+5D↑j
mov     ecx, esi
call    UpdateTechnoFiring
mov     ecx, esi
call    UnitClass__UpdateRotation_TurretFacing_EMP
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 5
jnz     short loc_736664
lea     ecx, [esi+9Ch]
mov     edx, [esi+9Ch]
mov     [esp-2+arg_1E], edx
lea     edx, [esp-2+arg_1E]
mov     eax, [ecx+4]
push    edx
mov     [esp+2+arg_22], eax
mov     ecx, [ecx+8]
mov     [esp+2+arg_26], ecx
mov     ecx, 87F7E8h
call    Tactical__IsCellVisible
test    al, al
jnz     short loc_736664
mov     al, [esi+3D5h]
test    al, al
jz      short loc_736664
mov     eax, [esi+5D4h]
test    eax, eax
jz      short loc_736648
mov     byte ptr [eax+82h], 1

loc_736648:                             ; CODE XREF: InfantryClass__UpdateBehavior+C6↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+3A0h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0F8h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn
; ---------------------------------------------------------------------------

loc_736664:                             ; CODE XREF: InfantryClass__UpdateBehavior+81↑j
; InfantryClass__UpdateBehavior+B2↑j ...
mov     eax, [esi+6C4h]
mov     cl, [eax+0E18h]
test    cl, cl
jnz     short loc_73667E
mov     cl, [eax+0E19h]
test    cl, cl
jz      short loc_736685

loc_73667E:                             ; CODE XREF: InfantryClass__UpdateBehavior+F9↑j
mov     ecx, esi
call    UpdateInfantryIdleWander

loc_736685:                             ; CODE XREF: InfantryClass__UpdateBehavior+103↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+424h]
mov     ecx, [esi+6C4h]
mov     eax, [ecx+5E0h]
test    eax, eax
jle     short loc_7366EB
lea     edi, [esi+350h]
mov     ecx, edi
call    Flag__CheckNone
test    al, al
jnz     short loc_7366EB
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 10h
jz      short loc_7366EB
mov     eax, [esi]
push    11h
mov     ecx, esi
call    dword ptr [eax+274h]
cmp     eax, 1
jz      short loc_7366EB
mov     ecx, [esi+6C4h]
mov     edx, [ecx+3CCh]
push    edx
mov     eax, [ecx+3C8h]
mov     ecx, edi
push    eax             ; double
call    Timer__StartDouble

loc_7366EB:                             ; CODE XREF: InfantryClass__UpdateBehavior+124↑j
; InfantryClass__UpdateBehavior+135↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+200h]
test    al, al
jz      short loc_736703
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1ECh]

loc_736703:                             ; CODE XREF: InfantryClass__UpdateBehavior+17E↑j
cmp     dword ptr [esi+220h], 2
jnz     short loc_73671F
cmp     dword ptr [esi+6CCh], 0FFFFFFFFh
jz      short loc_73671F
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0FCh]

loc_73671F:                             ; CODE XREF: InfantryClass__UpdateBehavior+191↑j
; InfantryClass__UpdateBehavior+19A↑j
test    byte ptr dword_A8ED54+30h, 0Fh
jnz     loc_73681D
mov     eax, [esi+0ACh]
cmp     eax, 0Bh
jz      short loc_736740
cmp     eax, 5
jnz     loc_73681D

loc_736740:                             ; CODE XREF: InfantryClass__UpdateBehavior+1BC↑j
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_73681D
cmp     dword ptr [esi+0B4h], 0FFFFFFFFh
jnz     loc_73681D
mov     eax, [esi+6C4h]
mov     ecx, [esi+6Ch]
cmp     ecx, [eax+0A0h]
jge     loc_73681D
mov     ecx, [esi+218h]
test    ecx, ecx
jz      short loc_73678C
cmp     dword ptr [esi+0ACh], 0Bh
jnz     loc_73681D

loc_73678C:                             ; CODE XREF: InfantryClass__UpdateBehavior+204↑j
mov     cl, [eax+0E0Eh]
test    cl, cl
jnz     loc_73681D
mov     cl, [eax+0E0Fh]
test    cl, cl
jnz     short loc_73681D
mov     ecx, [esi+21Ch]
mov     edx, esi
call    globalHelper_055DD0
mov     edi, eax
test    edi, edi
jz      short loc_73681D
mov     eax, [esi+218h]
test    eax, eax
jnz     short loc_7367F6
lea     edx, [esi+9Ch]
mov     eax, [esi+9Ch]
mov     [esp+2+arg_1A], eax
lea     eax, [esp+2+arg_1A]
mov     ecx, [edx+4]
push    eax
mov     [esp+6+arg_1E], ecx
mov     ecx, 87F7E8h
mov     edx, [edx+8]
mov     [esp+6+arg_22], edx
call    Coord__To_Cell
push    eax
mov     ecx, esi
call    TechnoClass__SetFocus

loc_7367F6:                             ; CODE XREF: InfantryClass__UpdateBehavior+246↑j
mov     edx, [esi]
push    0
push    7
mov     ecx, esi
call    dword ptr [edx+1E8h]
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     edx, [esi]
push    1
push    edi
mov     ecx, esi
call    dword ptr [edx+480h]

loc_73681D:                             ; CODE XREF: InfantryClass__UpdateBehavior+1AD↑j
; InfantryClass__UpdateBehavior+1C1↑j ...
mov     eax, [esi+6C4h]
mov     cl, [eax+0E0Eh]
test    cl, cl
jz      loc_736981
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_736981
mov     ecx, dword_A8ED54+30h
mov     edx, [esi+0C0h]
sub     ecx, edx
cmp     ecx, 12Ch
jle     loc_736981
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_736872
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_736872:                             ; CODE XREF: InfantryClass__UpdateBehavior+2ED↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     loc_736981
lea     ebp, [esi+9Ch]
mov     eax, ebp
mov     ecx, [eax]
mov     [esp+1Ah+arg_2], ecx
lea     ecx, [esp+1Ah+arg_2]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+1Eh+arg_6], edx
mov     eax, [eax+8]
mov     [esp+1Eh+arg_A], eax
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      loc_736981
mov     edx, [eax+520h]
mov     cl, [edx+16BBh]
test    cl, cl
jz      loc_736981
mov     edx, [eax]
lea     ecx, [esp+1Ah+var_A]
push    ecx
mov     ecx, eax
call    dword ptr [edx+1B8h]
mov     di, [eax]
mov     bx, [eax+2]
mov     edx, [esi]
lea     eax, [esp+1Eh+var_A]
add     di, 3
push    eax
mov     ecx, esi
inc     bx
call    dword ptr [edx+1B8h]
cmp     [eax], di
jnz     short loc_736981
cmp     [eax+2], bx
jnz     short loc_736981
mov     ecx, [ebp+var_s0]
mov     edx, [ebp+4]
mov     eax, [ebp+8]
mov     [esp+22h+var_s0+2], ecx
lea     ecx, [esp+22h+var_s0+2]
mov     [esp+28h], edx
push    ecx
mov     ecx, 87F7E8h
mov     [esp+26h+arg_2], eax
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBridge
mov     ecx, esi
mov     edi, eax
call    Team__AllMembersValid
test    al, al
jz      short loc_73694E
mov     edx, [esi]
push    3
mov     ecx, esi
call    dword ptr [edx+274h]

loc_73694E:                             ; CODE XREF: InfantryClass__UpdateBehavior+3C7↑j
mov     ebx, [esi]
push    1
lea     eax, [esp+2Ah+var_12]
push    edi
push    eax
mov     ecx, esi
call    MapClass__FindPlacementCellsAlt
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [ebx+480h]
mov     edx, [esi]
push    1
push    2
mov     ecx, esi
call    dword ptr [edx+1E8h]

loc_736981:                             ; CODE XREF: InfantryClass__UpdateBehavior+4A↑j
; InfantryClass__UpdateBehavior+2B2↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn
*/
}

// 0x51dbd0
int InfantryClass::CalcFacingToTarget()
{
// [IDA decompile]
char __thiscall InfantryClass::CalcFacingToTarget(_BYTE *this, int *a2)
{
  int v3; // edx
  int *v4; // ebx
  double v5; // st7
  __int16 v6; // ax
  int v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  int v13; // ebx
  void *v14; // eax
  int *v15; // ebx
  double v16; // st7
  __int16 v17; // ax
  int v18; // ebx
  double v19; // st7
  double v20; // st7
  int v21; // eax
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // edx
  char v26; // [esp+24h] [ebp-58h]
  char v27; // [esp+24h] [ebp-58h]
  double v28; // [esp+3Ch] [ebp-40h]
  double v29; // [esp+3Ch] [ebp-40h]
  double v30; // [esp+44h] [ebp-38h]
  double v31; // [esp+44h] [ebp-38h]
  int v32; // [esp+4Ch] [ebp-30h] BYREF
  int v33; // [esp+50h] [ebp-2Ch]
  int v34; // [esp+54h] [ebp-28h]
  int v35; // [esp+58h] [ebp-24h] BYREF
  int v36; // [esp+5Ch] [ebp-20h]
  int v37; // [esp+60h] [ebp-1Ch]
  int v38[3]; // [esp+64h] [ebp-18h] BYREF
  int v39[3]; // [esp+70h] [ebp-Ch] BYREF

  v32 = *a2;
  v33 = a2[1];
  v3 = *(_DWORD *)this;
  v34 = a2[2];
  v4 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(v3 + 72))(this, v38);
  Int64::Equal(v4, a2);
  v5 = Math::CalcAngle((double)v4[1] - (double)a2[1], (double)*a2 - (double)*v4);
  v6 = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
  v7 = a2[2];
  v30 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327;
  v28 = (double)a2[1];
  v8 = Math::SinCos(v30);
  LODWORD(v28) = Math::RoundToInt(v28 - v8 * 124.0);
  v9 = Math::ArcTan2(v30);
  v10 = Math::RoundToInt(v9 * 124.0 + (double)*a2);
  v36 = LODWORD(v28);
  v35 = v10;
  v37 = v7;
  v26 = BYTE1(*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], a2) + 80)) & 1;
  v11 = Coord::To_Cell(MEMORY[0x87F7E8], a2);
  v12 = ObjectPlacement::CalcPosition(v11, v39, &v35, 0, v26, 0);
  *a2 = *v12;
  a2[1] = v12[1];
  a2[2] = v12[2];
  if ( *a2 == dword_A8ED54[299] && a2[1] == dword_A8ED54[300] && a2[2] == dword_A8ED54[301] )
  {
    v13 = *(_DWORD *)this;
    v14 = Coord::To_Cell(MEMORY[0x87F7E8], &v32);
    if ( !(*(int (__thiscall **)(_BYTE *, void *, int, int, _DWORD, int))(v13 + 428))(this, v14, -1, -1, 0, 1) )
    {
      v15 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 72))(this, v39);
      Int64::Equal(v15, a2);
      v16 = Math::CalcAngle((double)v15[1] - (double)a2[1], (double)*a2 - (double)*v15);
      v17 = Math::RoundToInt((v16 - 1.570796326794897) * -10430.06004058427);
      v18 = v34;
      v31 = (double)((__int16)(v17 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327;
      v29 = (double)v33;
      v19 = Math::SinCos(v31);
      LODWORD(v29) = Math::RoundToInt(v29 - v19 * 128.0);
      v20 = Math::ArcTan2(v31);
      v21 = Math::RoundToInt(v20 * 128.0 + (double)v32);
      v36 = LODWORD(v29);
      v35 = v21;
      v37 = v18;
      v27 = BYTE1(*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v32) + 80)) & 1;
      v22 = Coord::To_Cell(MEMORY[0x87F7E8], &v32);
      v23 = ObjectPlacement::CalcPosition(v22, v38, &v35, 1, v27, 0);
      *a2 = *v23;
      a2[1] = v23[1];
      a2[2] = v23[2];
    }
  }
  if ( *a2 == dword_A8ED54[299] && a2[1] == dword_A8ED54[300] && a2[2] == dword_A8ED54[301]
    || !FootClass::Destru_vt319(this, a2)
    || !*(this + 144) )
  {
    return 0;
  }
  v35 = *((_DWORD *)this + 39);
  v24 = *(_DWORD *)this;
  v36 = *((_DWORD *)this + 40);
  v37 = *((_DWORD *)this + 41);
  (*(void (__thiscall **)(_BYTE *, int *))(v24 + 244))(this, &v35);
  (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 240))(this, a2);
  return 1;
}

/* ASM:
push    ebp
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 44h
push    ebx
push    esi
mov     esi, [ebp+arg_0]
push    edi
mov     eax, esi
mov     edi, ecx
mov     ecx, [eax]
mov     [esp+50h+var_30], ecx
mov     ecx, edi
mov     edx, [eax+4]
mov     [esp+50h+var_2C], edx
mov     edx, [edi]
mov     eax, [eax+8]
mov     [esp+50h+var_28], eax
lea     eax, [esp+50h+var_18]
push    eax
call    dword ptr [edx+48h]
mov     ebx, eax
push    esi
mov     ecx, ebx
call    Int64__Equal
fild    dword ptr [esi]
sub     esp, 8
sub     esp, 8
fisub   dword ptr [ebx]
fstp    qword ptr [esp+60h+var_5C+4] ; double
fild    dword ptr [ebx+4]
fisub   dword ptr [esi+4]
fstp    [esp+60h+var_64+4] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     word ptr [esp+60h+var_44+4], ax
mov     ecx, dword ptr [esp+60h+var_44+4]
mov     ebx, [esi+8]
lea     eax, [ecx+7FFFh]
movsx   edx, ax
sub     edx, 3FFFh
mov     dword ptr [esp+60h+var_44+4], edx
fild    dword ptr [esp+60h+var_44+4]
fmul    ds:dbl_7E2810
fstp    qword ptr [esp+60h+var_3C+4]
fild    dword ptr [esi+4]
mov     eax, dword ptr [esp+60h+var_3C+8]
mov     ecx, dword ptr [esp+60h+var_3C+4]
push    eax
push    ecx             ; double
fstp    [esp+68h+var_44+4]
call    Math__SinCos
fmul    ds:dbl_7EB5C0
fsubr   [esp+68h+var_44+4]
call    Math__RoundToInt
mov     edx, dword ptr [esp+68h+var_3C+8]
mov     dword ptr [esp+68h+var_44+4], eax
mov     eax, dword ptr [esp+68h+var_3C+4]
push    edx
push    eax             ; double
call    Math__ArcTan2
fmul    ds:dbl_7EB5C0
add     esp, 20h
fiadd   dword ptr [esi]
call    Math__RoundToInt
mov     ecx, dword ptr [esp+50h+var_44+4]
push    0
mov     [esp+54h+var_20], ecx
push    esi
mov     ecx, 87F7E8h
mov     [esp+58h+var_24], eax
mov     [esp+58h+var_1C], ebx
call    Coord__To_Cell
mov     edx, [eax+140h]
lea     eax, [esp+54h+var_24]
shr     edx, 8
and     dl, 1
push    edx
push    0
push    eax
lea     ecx, [esp+60h+var_C]
push    ecx
push    esi
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    ObjectPlacement__CalcPosition
mov     ecx, [eax]
mov     edx, esi
mov     [edx], ecx
mov     ecx, [eax+4]
mov     [edx+4], ecx
mov     eax, [eax+8]
mov     [edx+8], eax
mov     ecx, [esi]
cmp     ecx, dword_A8ED54+4ACh
jnz     loc_51DE7F
mov     edx, [esi+4]
mov     eax, dword_A8ED54+4B0h
cmp     edx, eax
jnz     loc_51DE7F
mov     eax, [esi+8]
mov     ecx, dword_A8ED54+4B4h
cmp     eax, ecx
jnz     loc_51DE7F
mov     ebx, [edi]
push    1
push    0
push    0FFFFFFFFh
lea     ecx, [esp+5Ch+var_30]
push    0FFFFFFFFh
push    ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
push    eax
mov     ecx, edi
call    dword ptr [ebx+1ACh]
test    eax, eax
jnz     loc_51DE7F
mov     edx, [edi]
lea     eax, [esp+50h+var_C]
push    eax
mov     ecx, edi
call    dword ptr [edx+48h]
mov     ebx, eax
push    esi
mov     ecx, ebx
call    Int64__Equal
fild    dword ptr [esi]
sub     esp, 8
sub     esp, 8
fisub   dword ptr [ebx]
fstp    qword ptr [esp+60h+var_5C+4] ; double
fild    dword ptr [ebx+4]
fisub   dword ptr [esi+4]
fstp    [esp+60h+var_64+4] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     word ptr [esp+60h+var_44+4], ax
mov     ecx, dword ptr [esp+60h+var_44+4]
mov     ebx, [esp+60h+var_28]
lea     eax, [ecx+7FFFh]
movsx   edx, ax
sub     edx, 3FFFh
mov     dword ptr [esp+60h+var_44+4], edx
fild    dword ptr [esp+60h+var_44+4]
fmul    ds:dbl_7E2810
fstp    qword ptr [esp+60h+var_3C+4]
fild    [esp+60h+var_2C]
mov     eax, dword ptr [esp+60h+var_3C+8]
mov     ecx, dword ptr [esp+60h+var_3C+4]
push    eax
push    ecx             ; double
fstp    [esp+68h+var_44+4]
call    Math__SinCos
fmul    ds:dbl_7E2808
fsubr   [esp+68h+var_44+4]
call    Math__RoundToInt
mov     edx, dword ptr [esp+68h+var_3C+8]
mov     dword ptr [esp+68h+var_44+4], eax
mov     eax, dword ptr [esp+68h+var_3C+4]
push    edx
push    eax             ; double
call    Math__ArcTan2
fmul    ds:dbl_7E2808
add     esp, 20h
fiadd   [esp+50h+var_30]
call    Math__RoundToInt
mov     ecx, dword ptr [esp+50h+var_44+4]
lea     edx, [esp+50h+var_30]
mov     [esp+50h+var_20], ecx
push    0
push    edx
mov     ecx, 87F7E8h
mov     [esp+58h+var_24], eax
mov     [esp+58h+var_1C], ebx
call    Coord__To_Cell
mov     eax, [eax+140h]
lea     ecx, [esp+54h+var_24]
shr     eax, 8
and     al, 1
lea     edx, [esp+54h+var_18]
push    eax
push    1
push    ecx
lea     eax, [esp+60h+var_30]
push    edx
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    ObjectPlacement__CalcPosition
mov     edx, [eax]
mov     ecx, esi
mov     [ecx], edx
mov     edx, [eax+4]
mov     [ecx+4], edx
mov     eax, [eax+8]
mov     [ecx+8], eax

loc_51DE7F:                             ; CODE XREF: InfantryClass__CalcFacingToTarget+141↑j
; InfantryClass__CalcFacingToTarget+151↑j ...
mov     ecx, dword_A8ED54+4ACh
mov     eax, [esi]
cmp     eax, ecx
jnz     short loc_51DEA4
mov     edx, dword_A8ED54+4B0h
mov     eax, [esi+4]
cmp     eax, edx
jnz     short loc_51DEA4
mov     eax, dword_A8ED54+4B4h
mov     ecx, [esi+8]
cmp     ecx, eax
jz      short loc_51DEFD

loc_51DEA4:                             ; CODE XREF: InfantryClass__CalcFacingToTarget+2B9↑j
; InfantryClass__CalcFacingToTarget+2C6↑j
push    esi
mov     ecx, edi
call    FootClass__Destru_vt319
test    al, al
jz      short loc_51DEFD
mov     al, [edi+90h]
test    al, al
jz      short loc_51DEFD
lea     ecx, [edi+9Ch]
mov     edx, [edi+9Ch]
mov     [esp+50h+var_24], edx
mov     edx, [edi]
mov     eax, [ecx+4]
mov     [esp+50h+var_20], eax
lea     eax, [esp+50h+var_24]
mov     ecx, [ecx+8]
push    eax
mov     [esp+54h+var_1C], ecx
mov     ecx, edi
call    dword ptr [edx+0F4h]
mov     edx, [edi]
push    esi
mov     ecx, edi
call    dword ptr [edx+0F0h]
mov     al, 1
pop     edi
pop     esi
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
; ---------------------------------------------------------------------------

loc_51DEFD:                             ; CODE XREF: InfantryClass__CalcFacingToTarget+2D2↑j
; InfantryClass__CalcFacingToTarget+2DE↑j ...
pop     edi
pop     esi
xor     al, al
pop     ebx
mov     esp, ebp
pop     ebp
retn    4
*/
}

// 0x51bf90
int InfantryClass::EvaluateTarget()
{
// [IDA decompile]
int __thiscall InfantryClass::EvaluateTarget(int this, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  _DWORD *Type; // eax
  int result; // eax
  int v12; // eax
  __int16 *NeighbourContent; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  bool v17; // al
  int v18; // eax
  int v19; // ebx
  int v20; // esi
  _DWORD *v21; // eax
  int v22; // edi
  _DWORD *v23; // esi
  int v24; // eax
  int v25; // ecx
  _WORD *v26; // edi
  _WORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  _DWORD *v32; // eax
  _DWORD *v33; // ecx
  _BYTE *v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // edi
  char v38; // al
  bool v39; // zf
  bool v40; // [esp+29h] [ebp-23h] BYREF
  bool v41; // [esp+2Ah] [ebp-22h]
  char v42; // [esp+2Bh] [ebp-21h]
  int v43; // [esp+2Ch] [ebp-20h]
  int v44; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v45[3]; // [esp+34h] [ebp-18h] BYREF
  _BYTE v46[12]; // [esp+40h] [ebp-Ch] BYREF
  int v47; // [esp+54h] [ebp+8h]

  v40 = (*(_DWORD *)(a2 + 320) & 0x100) != 0
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
  v8 = *(_DWORD *)(a2 + 84);
  v42 = *(_BYTE *)(a2 + 292);
  v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0;
  v43 = v8;
  v41 = v9;
  Type = (_DWORD *)InfantryClass::GetType((__int16 *)a2);
  if ( a3 == 8 )
  {
    if ( Type && __PAIR32__(Type[10], HIWORD(Type[9])) != __PAIR32__(Type[9], HIWORD(Type[10])) )
      return 0;
    return 7;
  }
  if ( Type )
  {
    v12 = abs32(a3 - Type[11]);
    if ( v12 > 2 && v12 < 6 && a3 != -1 )
      return 7;
  }
  NeighbourContent = (__int16 *)Cell::GetNeighbourContent((_DWORD *)a2, ((_BYTE)a3 - 4) & 7);
  v14 = InfantryClass::GetType(NeighbourContent);
  if ( v14 )
  {
    v15 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v14 + 44));
    if ( v15 > 2 && v15 < 6 && a3 != -1 )
      return 7;
  }
  if ( a4 - *(char *)(a2 + 283) > 4 )
    return 0;
  result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(*(_DWORD *)this + 432))(
             this,
             a2,
             a3,
             &a4,
             &v40,
             a5);
  if ( result != 7 )
  {
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 )
    {
      v16 = *(_DWORD *)(a2 + 88);
      v42 = *(_BYTE *)(a2 + 296);
      v17 = (*(_DWORD *)(a2 + 296) & 0x20) != 0;
      v43 = v16;
      v41 = v17;
    }
    if ( *(_BYTE *)(this + 981)
      && !MEMORY[0xA8E7AC]
      && !Type::CheckAmbiguity(&MEMORY[0x87F7E8], a2, 1)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 800))(this) )
    {
      return 7;
    }
    v18 = *(_DWORD *)(a2 + 68);
    v19 = 0;
    if ( v18 != -1 )
    {
      v20 = *((_DWORD *)MEMORY[0xA83D84] + v18);
      if ( *(_BYTE *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
        return 7;
      if ( *(_BYTE *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(_DWORD *)(v20 + 672) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) )
          return 7;
        v21 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0);
        if ( !(unsigned __int8)InfantryClass::startPanic(*v21) )
          return 7;
        v19 = 5 - HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80));
      }
    }
    v22 = 0;
    v47 = 0;
    if ( v40 )
      v23 = *(_DWORD **)(a2 + 232);
    else
      v23 = *(_DWORD **)(a2 + 228);
    if ( v23 )
    {
      while ( 1 )
      {
        if ( v23 != (_DWORD *)this )
        {
          v24 = *(_DWORD *)(this + 1692);
          if ( v24 )
          {
            v25 = *(_DWORD *)(v24 + 40);
            if ( v25 )
            {
              v26 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 440))(v25, &a5);
              v27 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v23 + 440))(v23, &v44);
              if ( *v27 == *v26 && v27[1] == v26[1] )
                return 0;
            }
          }
          v28 = *(_DWORD **)(this + 732);
          if ( v28 && (v29 = (_DWORD *)v28[182]) != 0 && v23 == v28 && BuildingClass::CheckBridge(v29, this, (void *)a2) )
          {
            v41 = 0;
          }
          else
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 468))(v23)
              && ((*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7
               || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 8
               || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 9
               || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 17
               && *(_BYTE *)(*(_DWORD *)(this + 1728) + 3778)
               || ((*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 11
                || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 25
                || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 5)
               && *(_BYTE *)(*(_DWORD *)(this + 1728) + 3779)) )
            {
              if ( v23 == *(_DWORD **)(this + 1444)
                || (v45[0] = v23[39],
                    v45[1] = v23[40],
                    v45[2] = v23[41],
                    Coord::To_Cell(&MEMORY[0x87F7E8], v45) == *(void **)(this + 1444))
                || v23 == *(_DWORD **)(this + 692) )
              {
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 352))(v23) )
                  return 7;
                if ( !*(_BYTE *)(this + 1048)
                  && !v40
                  && MEMORY[0x89EA40][9 * *(_DWORD *)(a2 + 236) + *(_DWORD *)(*(_DWORD *)(this + 1728) + 1660)] == 0.0 )
                {
                  return 7;
                }
                return 0;
              }
              v30 = Cell::IsBridge((_DWORD *)a2);
              v31 = v30;
              if ( v30 )
              {
                if ( v23 != v30 )
                {
                  if ( v30 == *(_DWORD **)(this + 1444) )
                    goto LABEL_134;
                  v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v30 + 72))(v30, v46);
                  if ( Coord::To_Cell(&MEMORY[0x87F7E8], v32) == *(void **)(this + 1444)
                    || v31 == *(_DWORD **)(this + 692) )
                  {
                    goto LABEL_134;
                  }
                }
              }
            }
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 11 )
            {
              v33 = *(_DWORD **)(this + 536);
              if ( v33 == v23 && (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 1 )
                return 7;
            }
            if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3782)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 128))(v23)
              && *(_DWORD **)(this + 1444) == v23
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v23 + 132))(v23) + 3220) )
            {
              return 0;
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) != 6 )
            {
LABEL_96:
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7
                && v23 == *(_DWORD **)(this + 1444)
                && *(_BYTE *)(this + 1048) )
              {
                return 0;
              }
              if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v23) || MEMORY[0xA8E7AC] )
              {
                switch ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) )
                {
                  case 1:
                    if ( !v23[413] )
                      WinAPI::Wrapper(-2147467261);
                    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) || v23[361] )
                    {
                      if ( *((_BYTE *)v23 + 1718) )
                        goto LABEL_128;
                      if ( !v23[413] )
                        WinAPI::Wrapper(-2147467261);
                      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 164))(v23[413]) )
                      {
LABEL_128:
                        if ( v19 < 2 )
                          v19 = 2;
                      }
                    }
                    else if ( v19 < 6 )
                    {
                      v19 = 6;
                    }
                    goto LABEL_134;
                  case 2:
                  case 6:
                    return 7;
                  case 15:
                    if ( !v23[413] )
                      WinAPI::Wrapper(-2147467261);
                    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) )
                      ++v47;
                    goto LABEL_134;
                  default:
                    goto LABEL_134;
                }
              }
              v36 = AbstractClass::IsTechnoType(v23);
              if ( v36 && v36[136] == 2 )
              {
                if ( v19 < 1 )
                  v19 = 1;
              }
              else
              {
                v37 = (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23);
                if ( TechnoClass::GetValue((_DWORD *)this, -1) <= 0 && v37 != 36 )
                  return 7;
                if ( v37 == 6 )
                {
                  if ( *(_BYTE *)(v23[328] + 5814) )
                    return 7;
                  if ( v19 < 5 )
                    v19 = 5;
                }
                else if ( v37 == 15 )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v23 + 200))(v23, *(_DWORD *)(this + 540)) )
                    v19 = 6;
                }
                else if ( v37 != 36 && v19 < 5 )
                {
                  v19 = 5;
                }
              }
              goto LABEL_134;
            }
            v34 = (_BYTE *)v23[328];
            if ( !v34[5889] )
            {
              if ( !v34[5823] || (v35 = v23[390], v35 != 12) && v35 != 8 )
              {
                if ( v34[5824] )
                {
                  if ( *(_BYTE *)(v23[135] + 506) )
                    return 7;
                }
                else
                {
                  if ( !v34[5815] )
                    goto LABEL_96;
                  if ( !BuildingClass::IsPoweredOn(v23) )
                  {
                    if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v23[135], *(#375 **)(this + 540)) )
                    {
                      if ( v19 < 3 )
                        v19 = 3;
                    }
                    else
                    {
                      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) )
                        return 7;
                      if ( v19 < 5 )
                        v19 = 5;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_134:
        v23 = (_DWORD *)v23[12];
        if ( !v23 )
        {
          v22 = v47;
          break;
        }
      }
    }
    if ( !*(_BYTE *)(this + 1048)
      && !v40
      && MEMORY[0x89EA40][9 * *(_DWORD *)(a2 + 236) + *(_DWORD *)(*(_DWORD *)(this + 1728) + 1660)] == 0.0 )
    {
      return 7;
    }
    if ( !v19 && v41 )
      return 2;
    if ( v43 != -1 )
    {
      if ( HouseClass::IsAllied(*(_DWORD **)(this + 540), v43) )
      {
        v38 = v42;
        if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
          return v22 != 3 ? 2 : 6;
        goto LABEL_159;
      }
      if ( TechnoClass::GetValue((_DWORD *)this, -1) <= 0 )
        return 7;
      if ( v19 < 5 )
        return 5;
    }
    v38 = v42;
LABEL_159:
    if ( v19 )
      return v19;
    v39 = (v38 & 0x1C) == 28;
    result = 7;
    if ( !v39 )
      return v19;
  }
  return result;
}

/* ASM:
sub     esp, 24h
push    ebx
push    ebp
mov     ebp, ecx
mov     ebx, 100h
mov     ecx, [esp+2Ch+arg_0]
push    esi
push    edi
test    [ecx+140h], ebx
jz      short loc_51BFCD
mov     eax, [esp+34h+arg_8]
cmp     eax, 0FFFFFFFFh
jz      short loc_51BFC6
movsx   edx, byte ptr [ecx+11Bh]
sub     eax, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, 1
jle     short loc_51BFCD

loc_51BFC6:                             ; CODE XREF: InfantryClass__EvaluateTarget+21↑j
mov     [esp+34h+var_23], 1
jmp     short loc_51BFD2
; ---------------------------------------------------------------------------

loc_51BFCD:                             ; CODE XREF: InfantryClass__EvaluateTarget+18↑j
; InfantryClass__EvaluateTarget+34↑j
mov     [esp+34h+var_23], 0

loc_51BFD2:                             ; CODE XREF: InfantryClass__EvaluateTarget+3B↑j
mov     al, [ecx+124h]
mov     edx, [ecx+54h]
mov     [esp+34h+var_21], al
mov     eax, [ecx+124h]
shr     eax, 5
and     al, 1
mov     [esp+34h+var_20], edx
mov     [esp+34h+var_22], al
call    InfantryClass__GetType
mov     edi, [esp+34h+arg_4]
mov     ecx, eax
cmp     edi, 8
jnz     short loc_51C039
test    ecx, ecx
jz      loc_51C7D0      ; jumptable 0051C669 cases 2,6
mov     eax, [ecx+24h]
mov     ecx, [ecx+28h]
cmp     cx, ax
mov     [esp+34h+arg_4], eax
mov     [esp+34h+arg_0], ecx
jnz     short loc_51C02D
mov     ax, word ptr [esp+34h+arg_0+2]
cmp     ax, word ptr [esp+34h+arg_4+2]
jz      loc_51C7D0      ; jumptable 0051C669 cases 2,6

loc_51C02D:                             ; CODE XREF: InfantryClass__EvaluateTarget+8B↑j
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C039:                             ; CODE XREF: InfantryClass__EvaluateTarget+70↑j
test    ecx, ecx
jz      short loc_51C067
mov     edx, [ecx+2Ch]
mov     eax, edi
sub     eax, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, 2
jle     short loc_51C067
cmp     eax, 6
jge     short loc_51C067
cmp     edi, 0FFFFFFFFh
jz      short loc_51C067
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C067:                             ; CODE XREF: InfantryClass__EvaluateTarget+AB↑j
; InfantryClass__EvaluateTarget+BC↑j ...
mov     ecx, [esp+34h+arg_0]
lea     esi, [edi-4]
and     esi, 7
push    esi
call    Cell__GetNeighbourContent
mov     ecx, eax
call    InfantryClass__GetType
mov     ecx, eax
test    ecx, ecx
jz      short loc_51C0AE
mov     edx, [ecx+2Ch]
mov     eax, esi
sub     eax, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, 2
jle     short loc_51C0AE
cmp     eax, 6
jge     short loc_51C0AE
cmp     edi, 0FFFFFFFFh
jz      short loc_51C0AE
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C0AE:                             ; CODE XREF: InfantryClass__EvaluateTarget+F2↑j
; InfantryClass__EvaluateTarget+103↑j ...
mov     esi, [esp+34h+arg_0]
mov     edx, [esp+34h+arg_8]
movsx   ecx, byte ptr [esi+11Bh]
sub     edx, ecx
cmp     edx, 4
jle     short loc_51C0D0
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C0D0:                             ; CODE XREF: InfantryClass__EvaluateTarget+132↑j
mov     ecx, [esp+34h+arg_C]
mov     eax, [ebp+0]
push    ecx
lea     edx, [esp+38h+var_23]
lea     ecx, [esp+38h+arg_8]
push    edx
push    ecx
push    edi
push    esi
mov     ecx, ebp
call    dword ptr [eax+1B0h]
cmp     eax, 7
jnz     short loc_51C0FB
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C0FB:                             ; CODE XREF: InfantryClass__EvaluateTarget+15F↑j
mov     eax, [esp+34h+arg_8]
cmp     eax, 0FFFFFFFFh
jz      short loc_51C13A
test    [esi+140h], ebx
jz      short loc_51C13A
movsx   edx, byte ptr [esi+11Bh]
add     edx, 4
cmp     eax, edx
jnz     short loc_51C13A
mov     al, [esi+128h]
mov     ecx, [esi+58h]
mov     [esp+34h+var_21], al
mov     eax, [esi+128h]
shr     eax, 5
and     al, 1
mov     [esp+34h+var_20], ecx
mov     [esp+34h+var_22], al

loc_51C13A:                             ; CODE XREF: InfantryClass__EvaluateTarget+172↑j
; InfantryClass__EvaluateTarget+17A↑j ...
mov     al, [ebp+3D5h]
test    al, al
jz      short loc_51C17C
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     short loc_51C17C
push    1
push    esi
mov     ecx, 87F7E8h
call    Type__CheckAmbiguity
test    al, al
jnz     short loc_51C17C
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+320h]
test    al, al
jnz     short loc_51C17C
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C17C:                             ; CODE XREF: InfantryClass__EvaluateTarget+1B2↑j
; InfantryClass__EvaluateTarget+1BB↑j ...
mov     eax, [esi+44h]
xor     ebx, ebx
cmp     eax, 0FFFFFFFFh
jz      loc_51C225
mov     ecx, ds:0A83D84h
mov     esi, [ecx+eax*4]
mov     al, [esi+2AAh]
test    al, al
jz      short loc_51C1BB
mov     ecx, [ebp+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_51C1BB
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C1BB:                             ; CODE XREF: InfantryClass__EvaluateTarget+20B↑j
; InfantryClass__EvaluateTarget+21A↑j
mov     al, [esi+2A8h]
test    al, al
jz      short loc_51C225
mov     edi, [esp+34h+arg_0]
mov     eax, [esi+2A0h]
xor     edx, edx
mov     dl, [edi+11Eh]
shr     edx, 4
cmp     edx, eax
jz      short loc_51C225
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+2ACh]
test    al, al
jz      loc_51C7D0      ; jumptable 0051C669 cases 2,6
mov     edx, [ebp+0]
push    0
mov     ecx, ebp
call    dword ptr [edx+3F8h]
mov     ecx, [eax]
call    InfantryClass__startPanic
test    al, al
jz      loc_51C7D0      ; jumptable 0051C669 cases 2,6
mov     eax, [edi+50h]
mov     ecx, [ebp+21Ch]
push    eax
call    HouseClass__IsAllied
neg     al
sbb     eax, eax
add     eax, 5
mov     ebx, eax

loc_51C225:                             ; CODE XREF: InfantryClass__EvaluateTarget+1F4↑j
; InfantryClass__EvaluateTarget+233↑j ...
mov     al, [esp+34h+var_23]
xor     edi, edi
test    al, al
mov     [esp+34h+arg_4], edi
jz      short loc_51C23F
mov     ecx, [esp+34h+arg_0]
mov     esi, [ecx+0E8h]
jmp     short loc_51C249
; ---------------------------------------------------------------------------

loc_51C23F:                             ; CODE XREF: InfantryClass__EvaluateTarget+2A1↑j
mov     edx, [esp+34h+arg_0]
mov     esi, [edx+0E4h]

loc_51C249:                             ; CODE XREF: InfantryClass__EvaluateTarget+2AD↑j
test    esi, esi
jz      loc_51C78F

loc_51C251:                             ; CODE XREF: InfantryClass__EvaluateTarget+786↓j
cmp     esi, ebp
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     eax, [ebp+69Ch]
test    eax, eax
jz      short loc_51C29E
mov     ecx, [eax+28h]
test    ecx, ecx
jz      short loc_51C29E
mov     eax, [ecx]
lea     edx, [esp+34h+arg_C]
push    edx
call    dword ptr [eax+1B8h]
lea     ecx, [esp+34h+var_1C]
mov     edi, eax
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     dx, [eax]
cmp     dx, [edi]
jnz     short loc_51C29E
mov     ax, [eax+2]
cmp     ax, [edi+2]
jz      loc_51C77F

loc_51C29E:                             ; CODE XREF: InfantryClass__EvaluateTarget+2D1↑j
; InfantryClass__EvaluateTarget+2D8↑j ...
mov     eax, [ebp+2DCh]
test    eax, eax
jz      short loc_51C2CF
mov     ecx, [eax+2D8h]
test    ecx, ecx
jz      short loc_51C2CF
cmp     esi, eax
jnz     short loc_51C2CF
mov     edx, [esp+34h+arg_0]
push    edx
push    ebp
call    BuildingClass__CheckBridge
test    al, al
jz      short loc_51C2CF
mov     [esp+34h+var_22], 0
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C2CF:                             ; CODE XREF: InfantryClass__EvaluateTarget+316↑j
; InfantryClass__EvaluateTarget+320↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1D4h]
test    al, al
jnz     loc_51C41C
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 7
jz      loc_51C37D
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+184h]
cmp     eax, 8
jz      short loc_51C37D
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 9
jz      short loc_51C37D
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+184h]
cmp     eax, 11h
jnz     short loc_51C335
mov     ecx, [ebp+6C0h]
mov     al, [ecx+0EC2h]
test    al, al
jnz     short loc_51C37D

loc_51C335:                             ; CODE XREF: InfantryClass__EvaluateTarget+393↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 0Bh
jz      short loc_51C369
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+184h]
cmp     eax, 19h
jz      short loc_51C369
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 5
jnz     loc_51C41C

loc_51C369:                             ; CODE XREF: InfantryClass__EvaluateTarget+3B3↑j
; InfantryClass__EvaluateTarget+3C3↑j
mov     eax, [ebp+6C0h]
mov     cl, [eax+0EC3h]
test    cl, cl
jz      loc_51C41C

loc_51C37D:                             ; CODE XREF: InfantryClass__EvaluateTarget+35F↑j
; InfantryClass__EvaluateTarget+373↑j ...
cmp     esi, [ebp+5A4h]
jz      loc_51C71B
lea     ecx, [esi+9Ch]
mov     edx, [esi+9Ch]
mov     [esp+34h+var_18], edx
lea     edx, [esp+34h+var_18]
mov     eax, [ecx+4]
push    edx
mov     [esp+38h+var_14], eax
mov     ecx, [ecx+8]
mov     [esp+38h+var_10], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
cmp     eax, [ebp+5A4h]
jz      loc_51C71B
cmp     esi, [ebp+2B4h]
jz      loc_51C71B
mov     ecx, [esp+34h+arg_0]
call    Cell__IsBridge
mov     edi, eax
test    edi, edi
jz      short loc_51C41C
cmp     esi, edi
jz      short loc_51C41C
cmp     edi, [ebp+5A4h]
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     eax, [edi]
lea     ecx, [esp+34h+var_C]
push    ecx
mov     ecx, edi
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
cmp     eax, [ebp+5A4h]
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
cmp     edi, [ebp+2B4h]
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14

loc_51C41C:                             ; CODE XREF: InfantryClass__EvaluateTarget+34B↑j
; InfantryClass__EvaluateTarget+3D3↑j ...
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 0Bh
jnz     short loc_51C444
mov     ecx, [ebp+218h]
cmp     ecx, esi
jnz     short loc_51C444
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 1
jz      loc_51C7D0      ; jumptable 0051C669 cases 2,6

loc_51C444:                             ; CODE XREF: InfantryClass__EvaluateTarget+49A↑j
; InfantryClass__EvaluateTarget+4A4↑j
mov     ecx, [ebp+6C0h]
mov     al, [ecx+0EC6h]
test    al, al
jz      short loc_51C482
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+80h]
test    al, al
jz      short loc_51C482
cmp     [ebp+5A4h], esi
jnz     short loc_51C482
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     cl, [eax+0C94h]
test    cl, cl
jz      loc_51C77F

loc_51C482:                             ; CODE XREF: InfantryClass__EvaluateTarget+4C2↑j
; InfantryClass__EvaluateTarget+4D0↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_51C553
mov     eax, [esi+520h]
mov     cl, [eax+1701h]
test    cl, cl
jnz     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     cl, [eax+16BFh]
test    cl, cl
jz      short loc_51C4C8
mov     ecx, [esi+618h]
cmp     ecx, 0Ch
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
cmp     ecx, 8
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14

loc_51C4C8:                             ; CODE XREF: InfantryClass__EvaluateTarget+51E↑j
mov     cl, [eax+16C0h]
test    cl, cl
jz      short loc_51C4EB
mov     eax, [esi+21Ch]
mov     cl, [eax+1FAh]
test    cl, cl
jnz     loc_51C7D0      ; jumptable 0051C669 cases 2,6
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C4EB:                             ; CODE XREF: InfantryClass__EvaluateTarget+540↑j
mov     cl, [eax+16B7h]
test    cl, cl
jz      short loc_51C553
mov     ecx, esi
call    BuildingClass__IsPoweredOn
test    al, al
jnz     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ecx, [ebp+21Ch]
push    ecx             ; other
mov     ecx, [esi+21Ch] ; this
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_51C52D
cmp     ebx, 3
jge     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 3
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C52D:                             ; CODE XREF: InfantryClass__EvaluateTarget+588↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+2ACh]
test    al, al
jz      loc_51C7D0      ; jumptable 0051C669 cases 2,6
cmp     ebx, 5
jge     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 5
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C553:                             ; CODE XREF: InfantryClass__EvaluateTarget+4FC↑j
; InfantryClass__EvaluateTarget+563↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+184h]
cmp     eax, 7
jnz     short loc_51C579
cmp     esi, [ebp+5A4h]
jnz     short loc_51C579
mov     al, [ebp+418h]
test    al, al
jnz     loc_51C77F

loc_51C579:                             ; CODE XREF: InfantryClass__EvaluateTarget+5D1↑j
; InfantryClass__EvaluateTarget+5D9↑j
mov     ecx, [ebp+21Ch]
push    esi
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     loc_51C650
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     loc_51C650
mov     ecx, esi
call    AbstractClass__IsTechnoType
test    eax, eax
jz      short loc_51C5C1
cmp     dword ptr [eax+220h], 2
jnz     short loc_51C5C1
cmp     ebx, 1
jge     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 1
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C5C1:                             ; CODE XREF: InfantryClass__EvaluateTarget+613↑j
; InfantryClass__EvaluateTarget+61C↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
push    0FFFFFFFFh
mov     ecx, ebp
mov     edi, eax
call    TechnoClass__GetValue
test    eax, eax
jg      short loc_51C5E0
cmp     edi, 24h ; '$'
jnz     loc_51C7D0      ; jumptable 0051C669 cases 2,6

loc_51C5E0:                             ; CODE XREF: InfantryClass__EvaluateTarget+645↑j
cmp     edi, 6
jz      short loc_51C629
cmp     edi, 0Fh
jz      short loc_51C606
cmp     edi, 24h ; '$'
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
cmp     ebx, 5
jge     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 5
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C606:                             ; CODE XREF: InfantryClass__EvaluateTarget+658↑j
mov     ecx, [ebp+21Ch]
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+0C8h]
test    al, al
jz      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 6
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C629:                             ; CODE XREF: InfantryClass__EvaluateTarget+653↑j
mov     edx, [esi+520h]
mov     al, [edx+16B6h]
test    al, al
jnz     loc_51C7D0      ; jumptable 0051C669 cases 2,6
cmp     ebx, 5
jge     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 5
jmp     def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C650:                             ; CODE XREF: InfantryClass__EvaluateTarget+5F7↑j
; InfantryClass__EvaluateTarget+604↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
dec     eax             ; switch 15 cases
cmp     eax, 0Eh
ja      def_51C669      ; jumptable 0051C669 default case, cases 3-5,7-14
xor     ecx, ecx
mov     cl, ds:byte_51C894[eax]
jmp     ds:jpt_51C669[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_51C670:                             ; CODE XREF: InfantryClass__EvaluateTarget+6D9↑j
; DATA XREF: .text:jpt_51C669↓o
mov     eax, [esi+674h] ; jumptable 0051C669 case 1
test    eax, eax
jnz     short loc_51C684
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51C684:                             ; CODE XREF: InfantryClass__EvaluateTarget+6E8↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short loc_51C6AA
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_51C6AA
cmp     ebx, 6
jge     short def_51C669 ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 6
jmp     short def_51C669 ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C6AA:                             ; CODE XREF: InfantryClass__EvaluateTarget+702↑j
; InfantryClass__EvaluateTarget+70C↑j
mov     al, [esi+6B6h]
test    al, al
jnz     short loc_51C6DB
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_51C6C8
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51C6C8:                             ; CODE XREF: InfantryClass__EvaluateTarget+72C↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+0A4h]
test    al, al
jz      short def_51C669 ; jumptable 0051C669 default case, cases 3-5,7-14

loc_51C6DB:                             ; CODE XREF: InfantryClass__EvaluateTarget+722↑j
cmp     ebx, 2
jge     short def_51C669 ; jumptable 0051C669 default case, cases 3-5,7-14
mov     ebx, 2
jmp     short def_51C669 ; jumptable 0051C669 default case, cases 3-5,7-14
; ---------------------------------------------------------------------------

loc_51C6E7:                             ; CODE XREF: InfantryClass__EvaluateTarget+6D9↑j
; DATA XREF: .text:jpt_51C669↓o
mov     eax, [esi+674h] ; jumptable 0051C669 case 15
test    eax, eax
jnz     short loc_51C6FB
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51C6FB:                             ; CODE XREF: InfantryClass__EvaluateTarget+75F↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short def_51C669 ; jumptable 0051C669 default case, cases 3-5,7-14
inc     [esp+34h+arg_4]

def_51C669:                             ; CODE XREF: InfantryClass__EvaluateTarget+2C3↑j
; InfantryClass__EvaluateTarget+33A↑j ...
mov     esi, [esi+30h]  ; jumptable 0051C669 default case, cases 3-5,7-14
test    esi, esi
jz      short loc_51C78B
jmp     loc_51C251
; ---------------------------------------------------------------------------

loc_51C71B:                             ; CODE XREF: InfantryClass__EvaluateTarget+3F3↑j
; InfantryClass__EvaluateTarget+42C↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+160h]
test    al, al
jnz     loc_51C7D0      ; jumptable 0051C669 cases 2,6
mov     edx, [esp+34h+arg_0]
mov     ecx, [ebp+6C0h]
mov     eax, [edx+0ECh]
mov     ecx, [ecx+67Ch]
lea     eax, [eax+eax*8]
add     ecx, eax
mov     al, [ebp+418h]
test    al, al
fld     dword ptr ds:89EA40h[ecx*4]
jnz     short loc_51C77D
mov     al, [esp+34h+var_23]
test    al, al
jnz     short loc_51C77D
fcomp   ds:flt_7E1748
fnstsw  ax
test    ah, 40h
jz      short loc_51C77F
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C77D:                             ; CODE XREF: InfantryClass__EvaluateTarget+7C7↑j
; InfantryClass__EvaluateTarget+7CF↑j
fstp    st

loc_51C77F:                             ; CODE XREF: InfantryClass__EvaluateTarget+308↑j
; InfantryClass__EvaluateTarget+4EC↑j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C78B:                             ; CODE XREF: InfantryClass__EvaluateTarget+784↑j
mov     edi, [esp+34h+arg_4]

loc_51C78F:                             ; CODE XREF: InfantryClass__EvaluateTarget+2BB↑j
mov     al, [ebp+418h]
test    al, al
jnz     short loc_51C7DF
mov     al, [esp+34h+var_23]
test    al, al
jnz     short loc_51C7DF
mov     eax, [esp+34h+arg_0]
mov     edx, [ebp+6C0h]
mov     eax, [eax+0ECh]
mov     edx, [edx+67Ch]
lea     ecx, [eax+eax*8]
add     edx, ecx
fld     dword ptr ds:89EA40h[edx*4]
fcomp   ds:flt_7E1748
fnstsw  ax
test    ah, 40h
jz      short loc_51C7DF

loc_51C7D0:                             ; CODE XREF: InfantryClass__EvaluateTarget+74↑j
; InfantryClass__EvaluateTarget+97↑j ...
pop     edi             ; jumptable 0051C669 cases 2,6
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C7DF:                             ; CODE XREF: InfantryClass__EvaluateTarget+807↑j
; InfantryClass__EvaluateTarget+80F↑j ...
test    ebx, ebx
jnz     short loc_51C7FA
mov     al, [esp+34h+var_22]
test    al, al
jz      short loc_51C7FA
pop     edi
pop     esi
pop     ebp
mov     eax, 2
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C7FA:                             ; CODE XREF: InfantryClass__EvaluateTarget+851↑j
; InfantryClass__EvaluateTarget+859↑j
mov     eax, [esp+34h+var_20]
cmp     eax, 0FFFFFFFFh
jz      short loc_51C864
mov     ecx, [ebp+21Ch]
push    eax
call    HouseClass__IsAllied
test    al, al
jz      short loc_51C841
mov     al, [esp+34h+var_21]
mov     cl, al
and     cl, 1Ch
cmp     cl, 1Ch
jnz     short loc_51C868
cmp     ebx, 2
jge     short loc_51C868
sub     edi, 3
neg     edi
sbb     edi, edi
and     edi, 0FFFFFFFCh
add     edi, 6
mov     ebx, edi
pop     edi
pop     esi
mov     eax, ebx
pop     ebp
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C841:                             ; CODE XREF: InfantryClass__EvaluateTarget+881↑j
push    0FFFFFFFFh
mov     ecx, ebp
call    TechnoClass__GetValue
test    eax, eax
jle     short loc_51C7D0 ; jumptable 0051C669 cases 2,6
cmp     ebx, 5
jge     short loc_51C864
mov     ebx, 5
pop     edi
pop     esi
mov     eax, ebx
pop     ebp
pop     ebx
add     esp, 24h
retn    14h
; ---------------------------------------------------------------------------

loc_51C864:                             ; CODE XREF: InfantryClass__EvaluateTarget+871↑j
; InfantryClass__EvaluateTarget+8C1↑j
mov     al, [esp+34h+var_21]

loc_51C868:                             ; CODE XREF: InfantryClass__EvaluateTarget+88F↑j
; InfantryClass__EvaluateTarget+894↑j
test    ebx, ebx
jnz     short loc_51C877
and     al, 1Ch
cmp     al, 1Ch
mov     eax, 7
jz      short loc_51C879

loc_51C877:                             ; CODE XREF: InfantryClass__EvaluateTarget+8DA↑j
mov     eax, ebx

loc_51C879:                             ; CODE XREF: InfantryClass__EvaluateTarget+8E5↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 24h
retn    14h
*/
}

// 0x51e140
int InfantryClass::SelectAutoTarget(unsigned int flags, __int64 a3)
{
// [IDA decompile]
int __thiscall InfantryClass::SelectAutoTarget(int this, unsigned int a2, __int64 a3)
{
  int v4; // ecx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  double v7; // st7
  unsigned int v9; // edi
  _BYTE *v10; // ecx
  int v11; // eax
  char v12; // cl
  _DWORD **v13; // eax
  int v14; // eax
  _DWORD **v15; // eax
  int v16; // eax
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  _BYTE v19[12]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v20[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) || !*(_BYTE *)(*(_DWORD *)(this + 1728) + 3779) )
  {
    v9 = a2;
  }
  else
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 540) + 21728);
    if ( v4 )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v19);
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 72))(this, v20);
      v17 = v6[1] - v5[1];
      v18 = v6[2] - v5[2];
      v7 = Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v18 * (double)v18 + (double)v17 * (double)v17);
      if ( (int)Math::RoundToInt(v7) < 3840 )
        return *(_DWORD *)(*(_DWORD *)(this + 540) + 21728);
    }
    v9 = a2 | 0x200;
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3782) )
  {
    v10 = *(_BYTE **)(this + 1444);
    if ( v10 )
    {
      if ( (v10[20] & 1) != 0
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 128))(v10)
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1444) + 132))(*(_DWORD *)(this + 1444))
                     + 3220)
        && ObjectClass::DistanceTo((void *)this, *(_DWORD *)(this + 1444)) < 3840 )
      {
        return *(_DWORD *)(this + 1444);
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) )
    goto LABEL_21;
  v11 = *(_DWORD *)(this + 1728);
  v12 = *(_BYTE *)(v11 + 3782);
  if ( !*(_BYTE *)(v11 + 3774) )
  {
    if ( !v12 )
      return 0;
    goto LABEL_20;
  }
  if ( v12 )
LABEL_20:
    v9 = v9 & 0xFFFFFF4B | 0x10;
LABEL_21:
  if ( (v9 & 0x1B978) == 0 )
  {
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) )
    {
      v13 = (_DWORD **)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0);
      LOBYTE(v14) = Building::GetRenderType(*v13);
      v9 |= v14;
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, 1) )
    {
      v15 = (_DWORD **)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, 1);
      LOBYTE(v16) = Building::GetRenderType(*v15);
      v9 |= v16;
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this)
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) + 172)
                + 329) )
  {
    v9 &= 0xFFFFFF4B;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(this + 1728) + 3778) || TechnoTypeClass::HasVoiceResponse((float *)this, 14))
    && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
  {
    v9 |= 0x20u;
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3781) )
    v9 |= 0x240u;
  return FootClass::SelectAutoTarget_Cloaked(v9, a3, HIDWORD(a3));
}

/* ASM:
sub     esp, 24h
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_51E218
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC3h]
test    cl, cl
jz      loc_51E218
mov     ecx, [esi+21Ch]
mov     ecx, [ecx+54E0h]
test    ecx, ecx
jz      loc_51E20C
mov     edx, [ecx]
lea     eax, [esp+2Ch+var_18]
push    eax
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     edi, eax
lea     eax, [esp+2Ch+var_C]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [edi]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+2Ch+var_24], ecx
mov     ecx, [edi+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [edi+8]
mov     [esp+34h+var_20], edx
sub     eax, ecx
fild    [esp+34h+var_20]
mov     [esp+34h+var_1C], eax
fild    [esp+34h+var_1C]
fild    [esp+34h+var_24]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+34h+var_34] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 0F00h
jge     short loc_51E20C
mov     ecx, [esi+21Ch]
pop     edi
pop     esi
mov     eax, [ecx+54E0h]
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51E20C:                             ; CODE XREF: InfantryClass__SelectAutoTarget+3C↑j
; InfantryClass__SelectAutoTarget+B6↑j
mov     edi, [esp+2Ch+arg_0]
or      edi, 200h
jmp     short loc_51E21C
; ---------------------------------------------------------------------------

loc_51E218:                             ; CODE XREF: InfantryClass__SelectAutoTarget+14↑j
; InfantryClass__SelectAutoTarget+28↑j
mov     edi, [esp+2Ch+arg_0]

loc_51E21C:                             ; CODE XREF: InfantryClass__SelectAutoTarget+D6↑j
mov     edx, [esi+6C0h]
mov     al, [edx+0EC6h]
test    al, al
jz      short loc_51E288
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_51E288
mov     al, [ecx+14h]
and     al, 1
mov     byte ptr [esp+2Ch+arg_0], al
jz      short loc_51E288
mov     edx, [ecx]
call    dword ptr [edx+80h]
test    al, al
jz      short loc_51E288
mov     ecx, [esi+5A4h]
mov     eax, [ecx]
call    dword ptr [eax+84h]
mov     cl, [eax+0C94h]
test    cl, cl
jnz     short loc_51E288
mov     ecx, [esi+5A4h]
push    ecx
mov     ecx, esi
call    ObjectClass__DistanceTo
cmp     eax, 0F00h
jge     short loc_51E288
mov     eax, [esi+5A4h]
pop     edi
pop     esi
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51E288:                             ; CODE XREF: InfantryClass__SelectAutoTarget+EA↑j
; InfantryClass__SelectAutoTarget+F4↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2ACh]
test    al, al
jnz     short loc_51E2C7
mov     eax, [esi+6C0h]
mov     cl, [eax+0EBEh]
test    cl, cl
mov     cl, [eax+0EC6h]
jnz     short loc_51E2BA
test    cl, cl
jnz     short loc_51E2BE
pop     edi
xor     eax, eax
pop     esi
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_51E2BA:                             ; CODE XREF: InfantryClass__SelectAutoTarget+16A↑j
test    cl, cl
jz      short loc_51E2C7

loc_51E2BE:                             ; CODE XREF: InfantryClass__SelectAutoTarget+16E↑j
and     edi, 0FFFFFF5Bh
or      edi, 10h

loc_51E2C7:                             ; CODE XREF: InfantryClass__SelectAutoTarget+154↑j
; InfantryClass__SelectAutoTarget+17C↑j
test    edi, 1B978h
jnz     short loc_51E31B
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_51E2F5
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     ecx, [eax]
call    Building__GetRenderType
or      edi, eax

loc_51E2F5:                             ; CODE XREF: InfantryClass__SelectAutoTarget+19E↑j
mov     eax, [esi]
push    1
mov     ecx, esi
call    dword ptr [eax+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_51E31B
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     ecx, [eax]
call    Building__GetRenderType
or      edi, eax

loc_51E31B:                             ; CODE XREF: InfantryClass__SelectAutoTarget+18D↑j
; InfantryClass__SelectAutoTarget+1C4↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2ACh]
test    al, al
jz      short loc_51E34D
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     ecx, [eax+0ACh]
mov     al, [ecx+149h]
test    al, al
jz      short loc_51E34D
and     edi, 0FFFFFF4Bh

loc_51E34D:                             ; CODE XREF: InfantryClass__SelectAutoTarget+1E7↑j
; InfantryClass__SelectAutoTarget+205↑j
mov     edx, [esi+6C0h]
mov     al, [edx+0EC2h]
test    al, al
jnz     short loc_51E36A
push    0Eh
mov     ecx, esi
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      short loc_51E37C

loc_51E36A:                             ; CODE XREF: InfantryClass__SelectAutoTarget+21B↑j
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_51E37C
or      edi, 20h

loc_51E37C:                             ; CODE XREF: InfantryClass__SelectAutoTarget+228↑j
; InfantryClass__SelectAutoTarget+237↑j
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC5h]
test    cl, cl
jz      short loc_51E392
or      edi, 240h

loc_51E392:                             ; CODE XREF: InfantryClass__SelectAutoTarget+24A↑j
mov     ecx, dword ptr [esp+2Ch+arg_4+4]
mov     edx, dword ptr [esp+2Ch+arg_4]
push    ecx
push    edx
push    edi
mov     ecx, esi
call    FootClass__SelectAutoTarget_Cloaked
pop     edi
pop     esi
add     esp, 24h
retn    0Ch
*/
}

int InfantryClass::AssignTarget_SyncLog(int syncFlag)
{
    (void)syncFlag;
    int result = 0;
    return result;
}

int InfantryClass::AssignDestination_SyncLog()
{
    // IDA: 0x51AA40 — assign destination with sync logging
    return 0;
}

int InfantryClass::ValidatePlacement()
{
    // IDA: 0x51CBA0 — validate building placement
    return 0;
}

int InfantryClass::ValidateAttackPosition()
{
    // IDA: 0x484AE0 — validate attack position
    return 0;
}

int InfantryClass::IsInBounds()
{
    // IDA: 0x484AB0 — check if position is in map bounds
    return 0;
}

// ============================================================
// Phase 3: Stream & Save
// ============================================================

int InfantryClass::LoadFromStream()
{
    // IDA: 0x521960 (402B) — COM deserialization
    return 0;
}

int InfantryClass::SaveLoad_Prefix()
{
    // IDA: 0x521B00 (23B) — save/load prefix handler
    return 0;
}

int InfantryClass::ScalarDtor()
{
    // IDA: 0x523350 (30B) — scalar destructor
    return 0;
}

// ============================================================
// Phase 3: Cursor & UI
// ============================================================

int InfantryClass::HandleCursorOverCell()
{
    // IDA: 0x51F800 — handle cursor over occupied cell
    return 0;
}

int InfantryClass::GetCursorOverObject_EMP()
{
    // IDA: 0x51E3B0 — EMP cursor over object
    return 0;
}

int InfantryClass::GetCursorOverObject()
{
    // IDA: 0x4DDED0 — get cursor type over this object
    return 0;
}

int InfantryClass::GetTypePtr()
{
    // IDA: 0x51FAF0 — get type pointer
    return 0;
}

int InfantryClass::GetTooltipName()
{
    // IDA: 0x51F2C0 — get tooltip name string
    return 0;
}

int InfantryClass::GetTransformMatrix()
{
    // IDA: 0x521D30 — get transform matrix
    return 0;
}

int InfantryClass::ComputeTransform()
{
    // IDA: 0x523250 — compute transform
    return 0;
}

int InfantryClass::CheckHealthDiff()
{
    // IDA: 0x701140 — check health difference
    return 0;
}

// ============================================================
// Phase 3: Marking & Passability
// ============================================================

int InfantryClass::MarkCellPassability()
{
    // IDA: 0x5217C0 — mark cells as passable/unpassable
    return 0;
}

int InfantryClass::ClearCellPassability()
{
    // IDA: 0x521850 — clear cell passability marks
    return 0;
}

// ============================================================
// Phase 3: Capture & Misc
// ============================================================

int InfantryClass::CaptureAttackerInfo()
{
    // IDA: 0x522700 — capture attacker info for tracking
    return 0;
}

// 0x522780
int InfantryClass::InitProductionLimits()
{
// [IDA decompile]
int __thiscall InfantryClass::InitProductionLimits(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax

  result = *(_DWORD *)(this + 1728);
  if ( *(_BYTE *)(result + 3376) )
  {
    v2 = *(_DWORD *)(this + 540);
    *(_BYTE *)(this + 472) = 1;
    *(_DWORD *)(this + 1308) = v2;
    v3 = *(_DWORD *)(v2 + 488);
    if ( v3 )
    {
      if ( v3 == 1 )
        result = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3420);
      else
        result = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3424);
      *(_DWORD *)(this + 1304) = result;
    }
    else
    {
      result = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3416);
      *(_DWORD *)(this + 1304) = result;
    }
  }
  else
  {
    *(_BYTE *)(this + 472) = 0;
  }
  return result;
}

/* ASM:
mov     eax, [ecx+6C0h]
mov     dl, [eax+0D30h]
test    dl, dl
jz      short loc_5227E5
mov     eax, [ecx+21Ch]
mov     byte ptr [ecx+1D8h], 1
mov     [ecx+51Ch], eax
mov     eax, [eax+1E8h]
test    eax, eax
jnz     short loc_5227C0
mov     edx, ds:8871E0h
mov     eax, [edx+0D58h]
mov     [ecx+518h], eax
retn
; ---------------------------------------------------------------------------

loc_5227C0:                             ; CODE XREF: InfantryClass__InitProductionLimits+2B↑j
mov     edx, ds:8871E0h
cmp     eax, 1
jnz     short loc_5227D8
mov     eax, [edx+0D5Ch]
mov     [ecx+518h], eax
retn
; ---------------------------------------------------------------------------

loc_5227D8:                             ; CODE XREF: InfantryClass__InitProductionLimits+49↑j
mov     eax, [edx+0D60h]
mov     [ecx+518h], eax
retn
; ---------------------------------------------------------------------------

loc_5227E5:                             ; CODE XREF: InfantryClass__InitProductionLimits+E↑j
mov     byte ptr [ecx+1D8h], 0
retn
*/
}

// 0x522640
int InfantryClass::GetProductionLimit()
{
// [IDA decompile]
int __thiscall InfantryClass::GetProductionLimit(int this, char a2)
{
  int result; // eax
  int v4; // eax

  if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(this + 540), (#375 *)MEMORY[0x87F7E8][528729]) && !a2 )
    return *(_DWORD *)(this + 1728);
  result = *(_DWORD *)(this + 1304);
  if ( !result )
  {
    if ( !MEMORY[0x87F7E8][528729] )
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3424);
    v4 = *(_DWORD *)(MEMORY[0x87F7E8][528729] + 488);
    if ( !v4 )
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3416);
    if ( v4 == 1 )
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3420);
    else
      return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3424);
  }
  return result;
}

/* ASM:
mov     eax, ds:0A83D4Ch
push    esi
mov     esi, ecx
push    eax             ; other
mov     ecx, [esi+21Ch] ; this
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_52266A
mov     al, [esp+4+arg_0]
test    al, al
jnz     short loc_52266A
mov     eax, [esi+6C0h]
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_52266A:                             ; CODE XREF: InfantryClass__GetProductionLimit+16↑j
; InfantryClass__GetProductionLimit+1E↑j
mov     eax, [esi+518h]
test    eax, eax
jnz     short loc_5226B7
mov     eax, ds:0A83D4Ch
test    eax, eax
jz      short loc_5226AC
mov     eax, [eax+1E8h]
test    eax, eax
jnz     short loc_522697
mov     ecx, ds:8871E0h
pop     esi
mov     eax, [ecx+0D58h]
retn    4
; ---------------------------------------------------------------------------

loc_522697:                             ; CODE XREF: InfantryClass__GetProductionLimit+45↑j
cmp     eax, 1
jnz     short loc_5226AC
mov     edx, ds:8871E0h
pop     esi
mov     eax, [edx+0D5Ch]
retn    4
; ---------------------------------------------------------------------------

loc_5226AC:                             ; CODE XREF: InfantryClass__GetProductionLimit+3B↑j
; InfantryClass__GetProductionLimit+5A↑j
mov     eax, ds:8871E0h
mov     eax, [eax+0D60h]

loc_5226B7:                             ; CODE XREF: InfantryClass__GetProductionLimit+32↑j
pop     esi
retn    4
*/
}

int InfantryClass::GetProductionHouse()
{
    // IDA: 0x5226C0 — get production house
    return 0;
}

int InfantryClass::ResetMissionIfDone()
{
    // IDA: 0x521B20 — reset mission when complete
    return 0;
}

int InfantryClass::ProcessMission16()
{
    // IDA: 0x521B40 — process mission state 16
    return 0;
}

int InfantryClass::SetMissionOnCondition()
{
    // IDA: 0x521C60 — set mission based on condition
    return 0;
}

int InfantryClass::InitVoiceResponseTimer()
{
    // IDA: 0x521C10 — initialize voice response timer
    return 0;
}

int InfantryClass::ResetReloadIfNeeded()
{
    // IDA: 0x521C40 — reset reload timer if needed
    return 0;
}

// 0x5220f0
int InfantryClass::SetFlag1752()
{
// [IDA decompile]
void __thiscall InfantryClass::SetFlag1752(_BYTE *this)
{
  *(this + 1752) = 1;
}

/* ASM:
mov     byte ptr [ecx+6D8h], 1
retn
*/
}

int InfantryClass::StubReturn15()
{
    // IDA: 0x523340 — vtable[11] stub, returns 15
    return 15;
}

int InfantryClass::StubReturn1776()
{
    // IDA: 0x5232F0 — vtable[12] stub, returns 1776
    return 1776;
}

int InfantryClass::ProcessIdle()
{
    // IDA: 0x70E1E0 — process idle state
    return 0;
}

int InfantryClass::RegisterKill()
{
    // IDA: 0x703230 — register kill credit
    return 0;
}

int InfantryClass::ReleaseInfiltrators()
{
    // IDA: 0x70D7A0 — release infiltrators
    return 0;
}

int InfantryClass::ProcessTiberiumHarvest()
{
    // IDA: 0x522E70 — process tiberium/ore harvesting
    return 0;
}

int InfantryClass::RepairBridge()
{
    // IDA: 0x519630 (5083B) — repair bridge as engineer
    return 0;
}

// 0x522340
void InfantryClass::CalculateApproachPath()
{
// [IDA decompile]
void *__thiscall InfantryClass::CalculateApproachPath(int this, char a2)
{
  int v3; // eax
  #375 *v5; // eax
  int v6; // eax
  int v7; // edi
  char v8; // bl
  int v9; // eax
  int v10; // eax

  if ( *(_DWORD *)(this + 692) )
  {
    v3 = *(_DWORD *)(this + 1732);
    if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
      return FootClass::CalculateApproachPath((_DWORD *)this, 0);
    v5 = (#375 *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 60))(this);
    if ( !(unsigned __int8)House::IsCurrentPlayer(v5) )
    {
      v6 = *(_DWORD *)(this + 1728);
      if ( *(_BYTE *)(v6 + 3784) )
      {
        if ( *(_BYTE *)(v6 + 1708) )
        {
          v7 = *(_DWORD *)(v6 + 1704);
          v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 936))(this, *(_DWORD *)(this + 692), v7);
          v9 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v7);
          if ( v9 )
          {
            if ( !*(_BYTE *)(v9 + 336) )
            {
              v10 = *(_DWORD *)(this + 1732);
              if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 )
              {
                if ( !v8 && !a2 )
                {
                  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 31, 0, 0);
                  return 0;
                }
              }
              else if ( v8 && !a2 )
              {
                if ( !*(_DWORD *)(this + 1652) )
                  WinAPI::Wrapper(-2147467261);
                if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) )
                {
                  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1368))(this, 27, 0, 0);
                  return 0;
                }
                if ( !*(_DWORD *)(this + 1652) )
                  WinAPI::Wrapper(-2147467261);
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 72))(*(_DWORD *)(this + 1652));
                *(_BYTE *)(this + 1764) = 1;
                MissionClass::GetMissionControl((_DWORD *)this);
                Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ASM:
push    ebx
push    esi
mov     esi, ecx
mov     eax, [esi+2B4h]
test    eax, eax
jz      loc_5224C2
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_522378
cmp     eax, 1Ch
jz      short loc_522378
cmp     eax, 1Dh
jz      short loc_522378
cmp     eax, 1Eh
jz      short loc_522378
push    0
call    FootClass__CalculateApproachPath
pop     esi
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_522378:                             ; CODE XREF: InfantryClass__CalculateApproachPath+1B↑j
; InfantryClass__CalculateApproachPath+20↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+3Ch]
mov     ecx, eax        ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_5224C2
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC8h]
test    cl, cl
jz      loc_5224C2
mov     cl, [eax+6ACh]
test    cl, cl
jz      loc_5224C2
mov     edx, [esi]
push    edi
mov     edi, [eax+6A8h]
mov     eax, [esi+2B4h]
push    edi
push    eax
mov     ecx, esi
call    dword ptr [edx+3A8h]
mov     edx, [esi]
push    edi
mov     ecx, esi
mov     bl, al
call    dword ptr [edx+3F8h]
mov     eax, [eax]
pop     edi
test    eax, eax
jz      loc_5224C2
mov     cl, [eax+150h]
test    cl, cl
jnz     loc_5224C2
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_522409
cmp     eax, 1Ch
jz      short loc_522409
cmp     eax, 1Dh
jz      short loc_522409
cmp     eax, 1Eh
jnz     short loc_522434

loc_522409:                             ; CODE XREF: InfantryClass__CalculateApproachPath+B8↑j
; InfantryClass__CalculateApproachPath+BD↑j ...
test    bl, bl
jnz     loc_5224C2
mov     al, [esp+8+arg_0]
test    al, al
jnz     loc_5224C2
mov     eax, [esi]
push    0
push    0
push    1Fh
mov     ecx, esi
call    dword ptr [eax+558h]
pop     esi
xor     eax, eax
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_522434:                             ; CODE XREF: InfantryClass__CalculateApproachPath+C7↑j
test    bl, bl
jz      loc_5224C2
mov     al, [esp+8+arg_0]
test    al, al
jnz     short loc_5224C2
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_522458
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_522458:                             ; CODE XREF: InfantryClass__CalculateApproachPath+10C↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_52247F
mov     edx, [esi]
push    0
push    0
push    1Bh
mov     ecx, esi
call    dword ptr [edx+558h]
pop     esi
xor     eax, eax
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_52247F:                             ; CODE XREF: InfantryClass__CalculateApproachPath+126↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_522493
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_522493:                             ; CODE XREF: InfantryClass__CalculateApproachPath+147↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+48h]
mov     ecx, esi
mov     byte ptr [esi+6E4h], 1
call    MissionClass__GetMissionControl
mov     edx, ds:0A8B230h
push    2
push    0
lea     ecx, [edx+218h]
call    Random__Range

loc_5224C2:                             ; CODE XREF: InfantryClass__CalculateApproachPath+C↑j
; InfantryClass__CalculateApproachPath+48↑j ...
pop     esi
xor     eax, eax
pop     ebx
retn    4
*/
}

// 0x5224d0
bool InfantryClass::IsBridgeRepairEnabled()
{
// [IDA decompile]
char __thiscall InfantryClass::IsBridgeRepairEnabled(_DWORD *this)
{
  return *(_BYTE *)(*(this + 432) + 3779);
}

/* ASM:
mov     eax, [ecx+6C0h]
mov     al, [eax+0EC3h]
retn
*/
}

// 0x522d50
int InfantryClass::SlaveGiveMoney_RecordBalanceBefore()
{
// [IDA decompile]
int __thiscall InfantryClass::SlaveGiveMoney_RecordBalanceBefore(float *this, _DWORD *a2)
{
  float *v2; // ebp
  char v3; // bl
  int result; // eax
  int v5; // esi
  int v6; // edi
  double v7; // st7
  float v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]

  v2 = this + 207;
  v3 = 0;
  result = FirstFloatPositive(this + 207);
  v5 = result;
  if ( result != -1 )
  {
    do
    {
      v6 = a2[135];
      v9 = *(_DWORD *)(v6 + 21388);
      if ( !*(_BYTE *)(v6 + 492) && MEMORY[0x87F7E8][536212] )
        v9 = *(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 4900) + 4 * *(_DWORD *)(v6 + 388))
           + *(_DWORD *)(v6 + 21388);
      if ( v5 == -1 )
        v8 = 0.0;
      else
        v8 = FloatArray::Get(v2, v5);
      v10 = (double)v9 * *(float *)(MEMORY[0x87F7E8][7806] + 3900) * v8;
      if ( v5 != -1 )
      {
        v7 = Float::SubtractClamped(v2, v8, v5);
        if ( v7 > 0.0 )
        {
          v3 = 1;
          v11 = v7;
          HouseClass::GiveTiberium_Storage((_DWORD *)v6, v11, v5);
          if ( v10 > 0.0 )
            HouseClass::GiveTiberium_Storage((_DWORD *)v6, v10, v5);
        }
      }
      result = FirstFloatPositive(v2);
      v5 = result;
    }
    while ( result != -1 );
    if ( v3 )
      return (*(int (__thiscall **)(_DWORD *))(*a2 + 1128))(a2);
  }
  return result;
}

/* ASM:
sub     esp, 0Ch
push    ebx
push    ebp
lea     ebp, [ecx+33Ch]
push    esi
mov     ecx, ebp
xor     bl, bl
call    FirstFloatPositive
mov     esi, eax
cmp     esi, 0FFFFFFFFh
jz      loc_522E5B
push    edi

loc_522D71:                             ; CODE XREF: InfantryClass__SlaveGiveMoney_RecordBalanceBefore+F4↓j
mov     eax, [esp+1Ch+arg_0]
mov     edi, [eax+21Ch]
mov     cl, [edi+1ECh]
mov     eax, [edi+538Ch]
test    cl, cl
mov     [esp+1Ch+var_8], eax
jnz     short loc_522DB2
mov     ecx, ds:0A8B238h
test    ecx, ecx
jz      short loc_522DB2
mov     edx, ds:8871E0h
mov     ecx, [edi+184h]
mov     edx, [edx+1324h]
add     eax, [edx+ecx*4]
mov     [esp+1Ch+var_8], eax

loc_522DB2:                             ; CODE XREF: InfantryClass__SlaveGiveMoney_RecordBalanceBefore+3D↑j
; InfantryClass__SlaveGiveMoney_RecordBalanceBefore+47↑j
cmp     esi, 0FFFFFFFFh
jz      short loc_522DC5
push    esi
mov     ecx, ebp
call    FloatArray__Get
fstp    [esp+1Ch+var_C]
jmp     short loc_522DCD
; ---------------------------------------------------------------------------

loc_522DC5:                             ; CODE XREF: InfantryClass__SlaveGiveMoney_RecordBalanceBefore+65↑j
mov     [esp+1Ch+var_C], 0

loc_522DCD:                             ; CODE XREF: InfantryClass__SlaveGiveMoney_RecordBalanceBefore+73↑j
fild    [esp+1Ch+var_8]
mov     eax, ds:8871E0h
cmp     esi, 0FFFFFFFFh
fmul    dword ptr [eax+0F3Ch]
fmul    [esp+1Ch+var_C]
fstp    [esp+1Ch+var_8]
jz      short loc_522E38
mov     ecx, [esp+1Ch+var_C]
push    esi             ; int
push    ecx             ; float
mov     ecx, ebp
call    Float__SubtractClamped
fst     [esp+1Ch+var_4]
fcomp   ds:flt_7E1748
fnstsw  ax
test    ah, 41h
jnz     short loc_522E38
mov     edx, [esp+1Ch+var_4]
push    esi             ; int
push    edx             ; float
mov     ecx, edi
mov     bl, 1
call    HouseClass__GiveTiberium_Storage
fstp    st
fld     [esp+1Ch+var_8]
fcomp   ds:flt_7E1748
fnstsw  ax
test    ah, 41h
jnz     short loc_522E38
mov     eax, [esp+1Ch+var_8]
push    esi             ; int
push    eax             ; float
mov     ecx, edi
call    HouseClass__GiveTiberium_Storage
fstp    st

loc_522E38:                             ; CODE XREF: InfantryClass__SlaveGiveMoney_RecordBalanceBefore+97↑j
; InfantryClass__SlaveGiveMoney_RecordBalanceBefore+B5↑j ...
mov     ecx, ebp
call    FirstFloatPositive
mov     esi, eax
cmp     esi, 0FFFFFFFFh
jnz     loc_522D71
test    bl, bl
pop     edi
jz      short loc_522E5B
mov     ecx, [esp+18h+arg_0]
mov     edx, [ecx]
call    dword ptr [edx+468h]

loc_522E5B:                             ; CODE XREF: InfantryClass__SlaveGiveMoney_RecordBalanceBefore+1A↑j
; InfantryClass__SlaveGiveMoney_RecordBalanceBefore+FD↑j
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn    4
*/
}

// 0x772ac0
void InfantryClass::startPanic()
{
// [IDA decompile]
bool __thiscall sub_772AC0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 43);
  return v1 && *(_BYTE *)(v1 + 324);
}

/* ASM:
mov     eax, [ecx+0ACh]
test    eax, eax
jz      short loc_772AD7
mov     cl, [eax+144h]
test    cl, cl
jz      short loc_772AD7
mov     al, 1
retn
; ---------------------------------------------------------------------------

loc_772AD7:                             ; CODE XREF: InfantryClass__startPanic+8↑j
; InfantryClass__startPanic+12↑j
xor     al, al
retn
*/
}

int InfantryClass::CheckHealthDiff_0()
{
    // IDA: 0x7447A0 — check health diff (stub)
    return 0;
}

// ============================================================
// Phase 3: Drawing
// ============================================================

// 0x518f90
void InfantryClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
// [IDA decompile]
int __userpurge InfantryClass::Draw@<eax>(
{
  int v17; // edx
  int v18; // eax
  int v19; // edx
  char v20; // al
  int v21; // eax
  int v22; // edx
  unsigned __int8 v23; // bl
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  int **v31; // ebx
  int v32; // eax
  _DWORD *v33; // eax
  int *v34; // edi
  int v35; // edx
  int v36; // ecx
  bool v37; // zf
  int *v38; // esi
  unsigned int v39; // eax
  int *v40; // ebx
  int v41; // ecx
  int v42; // eax
  int result; // eax
  int v44; // ebx
  int *v45; // esi
  int v46; // edi
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // esi
  int v50; // esi
  int v51; // edi
  int v52; // esi
  int v53; // ebx
  _DWORD *v54; // ecx
  int v55; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // eax
  int v60; // edi
  int v61; // eax
  int *v62; // [esp+8h] [ebp-88h]
  int v63; // [esp+14h] [ebp-7Ch]
  int v64; // [esp+14h] [ebp-7Ch]
  int v65; // [esp+20h] [ebp-70h]
  unsigned __int8 v66; // [esp+4Eh] [ebp-42h]
  unsigned __int8 v67; // [esp+4Fh] [ebp-41h]
  int v68; // [esp+50h] [ebp-40h]
  int v69; // [esp+54h] [ebp-3Ch] BYREF
  int v70; // [esp+58h] [ebp-38h] BYREF
  _DWORD *v71; // [esp+5Ch] [ebp-34h] BYREF
  int v72; // [esp+60h] [ebp-30h]
  int v73; // [esp+64h] [ebp-2Ch] BYREF
  int v74; // [esp+68h] [ebp-28h] BYREF
  _DWORD *v75; // [esp+6Ch] [ebp-24h] BYREF
  int v76; // [esp+70h] [ebp-20h]
  int v77; // [esp+74h] [ebp-1Ch] BYREF
  int v78; // [esp+78h] [ebp-18h]
  int v79; // [esp+7Ch] [ebp-14h]
  _DWORD v80[4]; // [esp+80h] [ebp-10h] BYREF

  v17 = a2[1];
  v18 = *a1;
  v75 = (_DWORD *)*a2;
  v76 = v17;
  v19 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v18 + 448))(a1, &v73);
  v20 = *((_BYTE *)a1 + 664);
  v70 = v19;
  v68 = 0;
  if ( v20 )
  {
    v21 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 6316);
    v22 = MEMORY[0x87F7E8][7806] + 2 * v21;
    v23 = *(_BYTE *)(v21 + v22 + 4174 + 2087);
    v66 = *(_BYTE *)(v21 + v22 + 6260);
    v67 = *(_BYTE *)(v21 + v22 + 6262);
    v24 = DDraw::GetStatus() - 1;
    if ( v24 )
    {
      v27 = v24 - 1;
      if ( v27 )
      {
LABEL_6:
        LOWORD(v25) = v66;
        LOWORD(v27) = v67;
        LOWORD(v26) = v23 >> 1;
        v68 |= v27 | (32 * ((32 * v25) | v26));
        goto LABEL_7;
      }
      LOWORD(v25) = v67;
      LOWORD(v26) = v23;
      v24 = v25 | (32 * (v26 | (v66 << 6)));
      v68 = v24;
    }
    LOWORD(v25) = v66;
    LOWORD(v26) = v23 >> 1;
    LOWORD(v24) = v67;
    v25 *= 32;
    v26 = v24 | ((v25 | v26) << 6);
    HIWORD(v27) = HIWORD(v26) | HIWORD(v68);
    v68 |= v26;
    goto LABEL_6;
  }
LABEL_7:
  v28 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*a1 + 72))(a1, &v77);
  LOWORD(v69) = *v28 / 256;
  HIWORD(v69) = v28[1] / 256;
  v71 = (_DWORD *)v69;
  v29 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v71);
  if ( CellClass::QuickPassable(v29) )
    v68 = 0;
  if ( *((_BYTE *)a1 + 1668) != 0xFF )
  {
    TacticalClass::AddToDrawQueue((_DWORD *)MEMORY[0x87F7E8][7887], (int)a1, (int)v75, v76);
    return AbstractClass::COMStub_Return0_69((int)&v75, (int)a3);
  }
  v30 = a1[413];
  v31 = (int **)(a1 + 413);
  v69 = 0;
  if ( !v30 )
    goto LABEL_15;
  v32 = StreamClass::Set2(&v69, a1 + 413);
  if ( v32 < 0 && v32 != -2147467262 )
    WinAPI::Wrapper(v32);
  if ( !v69 )
LABEL_15:
    WinAPI::Wrapper(-2147467261);
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v69 + 12))(v69, v80);
  if ( (*(int (__thiscall **)(int *))(*a1 + 456))(a1) > 0 && !memcmp(v80, &g_CLSID_DriveLocomotion, 0x10u) )
  {
    v71 = (_DWORD *)SearchMIXFile(aPodShp, 0);
    if ( !*v31 )
      WinAPI::Wrapper(-2147467261);
    v33 = (_DWORD *)(*(int (__stdcall **)(int *, int *))(**v31 + 48))(*v31, &v77);
    v34 = a2;
    v35 = v33[1];
    v36 = a2[1];
    v73 = *v33 + *a2;
    v37 = *v31 == 0;
    v74 = v35 + v36;
    if ( v37 )
      WinAPI::Wrapper(-2147467261);
    v38 = *v31;
    v65 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 748))(a1, 0) - 2;
    v63 = a4;
    v39 = (*(int (**)(void))(*v38 + 136))();
    DrawToSurfaceSHP(
      (int *)MEMORY[0x87F7E8][7883],
      (_DWORD *)MEMORY[0x87F6C0][1],
      (int)v71,
      v39,
      v38,
      &v74,
      v63,
      11777,
      0,
      v65,
      1000,
      v68,
      0,
      0,
      0,
      0);
    CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v70);
    CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v70);
    if ( !*v31 )
      WinAPI::Wrapper(-2147467261);
    v40 = *v31;
    v41 = *v40;
    a2 = (int *)*a1;
    v42 = (*(int (__stdcall **)(int *, int *, int *, _DWORD, int, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v41 + 136))(
            v40,
            v34,
            a3,
            0,
            256,
            0,
            2,
            0,
            1000,
            0,
            0,
            0,
            0,
            0,
            0);
    (*(void (__thiscall **)(int *, int *, int))(a16 + 1292))(a1, a2, v42);
LABEL_53:
    if ( v69 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v69 + 8))(v69);
    return AbstractClass::COMStub_Return0_69((int)&v75, (int)a3);
  }
  v73 = (*(int (__thiscall **)(int *))(*a1 + 108))(a1);
  if ( v73 )
  {
    a2 = *(int **)(*(int (__thiscall **)(int *, _DWORD **))(*a1 + 448))(a1, &v71);
    TacticalClass::AddToDrawQueue((_DWORD *)MEMORY[0x87F7E8][7887], (int)a1, (int)v75, v76);
    if ( LightningStorm::IsActive() )
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13660);
    }
    else if ( PsyDom::IsActive() )
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13712);
    }
    else if ( (unsigned __int8)NukeFlash::IsActive() )
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13684);
    }
    else
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13636);
    }
    if ( *((_BYTE *)a1 + 140) )
      goto LABEL_39;
    v45 = a1 + 39;
    v77 = a1[39];
    v78 = a1[40];
    v79 = a1[41];
    if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v77) + 80) & 0x10000) == 0 )
      goto LABEL_38;
    v77 = *v45;
    v78 = a1[40];
    v46 = a1[41];
    v77 = *v45;
    v78 = a1[40];
    v79 = a1[41];
    if ( v46 > dword_A8ED54[312] / 2 + Cell::GetGroundHeight(&v77) )
    {
LABEL_39:
      v51 = v44 * ((*(int (__thiscall **)(int *))(*a1 + 456))(a1) / (2 * dword_A8ED54[315]));
      v50 = v51 + *((__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a2) + 133);
    }
    else
    {
LABEL_38:
      v47 = a1[41];
      v48 = a1[40];
      v77 = *v45;
      v79 = v47;
      v78 = v48;
      v49 = (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v77) + 80) & 0x10000) != 0 ? 0xFFFFFE0C : 0;
      v50 = *((__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a2) + 133) + v49;
    }
    v52 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 6104) + v50;
    v53 = (*(int (__thiscall **)(int *))(*a1 + 456))(a1);
    v77 = a1[39];
    v78 = a1[40];
    v79 = a1[41];
    v54 = Coord::To_Cell(MEMORY[0x87F7E8], &v77);
    v71 = v54;
    v55 = v54[80];
    if ( (v55 & 0x100) == 0 || v53 < dword_A8ED54[312] )
      goto LABEL_48;
    if ( (v55 & 0x800) != 0 )
    {
      if ( (*((_DWORD *)Cell::GetNeighbourContent(v54, 0) + 80) & 0x100) != 0 )
      {
LABEL_47:
        v53 -= dword_A8ED54[312];
LABEL_48:
        if ( v53 > 0 && (dword_A8ED54[316] || (dword_A8ED54[316] = SearchMIXFile(aInfshdwShp, 0)) != 0) )
        {
          v56 = a1[40];
          v57 = a1[41];
          v77 = a1[39];
          v78 = v56;
          v58 = ZCoordToScreenY(v53);
          v72 = v76 - *((char *)a1 + 1716) + v58;
          v71 = v75;
          v59 = ZCoordToScreenY(v57 - v53);
          DrawToSurfaceSHP(
            (int *)MEMORY[0x87F7E8][7883],
            (_DWORD *)MEMORY[0x87F6C0][1],
            dword_A8ED54[316],
            1u,
            (int *)&v71,
            a3,
            9729,
            0,
            -5 - v59,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        v72 = v76 - *((char *)a1 + 1716);
        v64 = dword_825500;
        v62 = a3;
        v71 = v75;
        v60 = *a1;
        v61 = CalculateLocomotionFrameIndex(a1);
        (*(void (__thiscall **)(int *, int, int, _DWORD **, int *, _DWORD, int, int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v60 + 1292))(
          a1,
          v73,
          v61,
          &v71,
          v62,
          0,
          256,
          v64,
          2,
          0,
          v52,
          v68,
          0,
          0,
          0,
          0,
          0);
        goto LABEL_53;
      }
      v54 = v71;
    }
    if ( (v54[80] & 0x800) != 0 || (*((_DWORD *)Cell::GetNeighbourContent(v54, 6u) + 80) & 0x100) == 0 )
      goto LABEL_48;
    goto LABEL_47;
  }
  result = v69;
  if ( v69 )
    return (*(int (__stdcall **)(int))(*(_DWORD *)v69 + 8))(v69);
  return result;
}

/* ASM:
sub     esp, 44h
mov     eax, [esp+44h+arg_0]
push    ebx
push    ebp
mov     ebp, ecx
mov     ecx, [eax]
mov     edx, [eax+4]
mov     eax, [ebp+0]
mov     [esp+4Ch+var_24], ecx
push    esi
lea     ecx, [esp+50h+var_2C]
push    edi
push    ecx
mov     ecx, ebp
mov     [esp+58h+var_20], edx
call    dword ptr [eax+1C0h]
mov     edx, [eax]
mov     al, [ebp+298h]
xor     edi, edi
mov     [esp+54h+var_38], edx
test    al, al
mov     [esp+54h+var_40], edi
jz      loc_519082
mov     ecx, ds:8871E0h
mov     eax, [ecx+18ACh]
lea     edx, [ecx+eax*2]
lea     ecx, [ecx+eax*2+104Eh]
lea     esi, [eax+edx]
mov     bl, [eax+ecx+827h]
mov     dl, [esi+1874h]
mov     byte ptr [esp+54h+var_44+2], dl
mov     dl, [esi+1876h]
mov     byte ptr [esp+54h+var_44+3], dl
call    DDraw__GetStatus
dec     eax
jz      short loc_519032
dec     eax
jnz     short loc_51905B
movzx   ax, byte ptr [esp+54h+var_44+2]
movzx   dx, byte ptr [esp+54h+var_44+3]
xor     cx, cx
shl     eax, 6
mov     cl, bl
or      eax, ecx
shl     eax, 5
or      eax, edx
mov     [esp+54h+var_40], eax

loc_519032:                             ; CODE XREF: InfantryClass__Draw+7E↑j
movzx   dx, byte ptr [esp+54h+var_44+2]
mov     al, bl
xor     cx, cx
shr     al, 1
mov     cl, al
movzx   ax, byte ptr [esp+54h+var_44+3]
shl     edx, 5
or      ecx, edx
shl     ecx, 6
or      ecx, eax
mov     eax, [esp+54h+var_40]
or      eax, ecx
mov     [esp+54h+var_40], eax

loc_51905B:                             ; CODE XREF: InfantryClass__Draw+81↑j
movzx   dx, byte ptr [esp+54h+var_44+2]
movzx   ax, byte ptr [esp+54h+var_44+3]
shr     bl, 1
xor     cx, cx
mov     cl, bl
shl     edx, 5
or      ecx, edx
shl     ecx, 5
or      ecx, eax
mov     eax, [esp+54h+var_40]
or      eax, ecx
mov     [esp+54h+var_40], eax

loc_519082:                             ; CODE XREF: InfantryClass__Draw+3E↑j
mov     edx, [ebp+0]
lea     eax, [esp+54h+var_1C]
push    eax
mov     ecx, ebp
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+54h+var_3C], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+54h+var_34]
sar     eax, 8
mov     word ptr [esp+54h+var_3C+2], ax
mov     ecx, [esp+54h+var_3C]
mov     [esp+54h+var_34], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    CellClass__QuickPassable
test    al, al
jz      short loc_5190DE
mov     [esp+54h+var_40], edi

loc_5190DE:                             ; CODE XREF: InfantryClass__Draw+148↑j
cmp     byte ptr [ebp+684h], 0FFh
jnz     loc_5195F8
mov     eax, [ebp+674h]
lea     ebx, [ebp+674h]
cmp     eax, edi
mov     [esp+54h+var_3C], edi
jz      short loc_519122
push    ebx
lea     ecx, [esp+58h+var_3C]
call    StreamClass__Set2
cmp     eax, edi
jge     short loc_51911A
cmp     eax, 80004002h
jz      short loc_51911A
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51911A:                             ; CODE XREF: InfantryClass__Draw+17B↑j
; InfantryClass__Draw+182↑j
mov     eax, [esp+54h+var_3C]
cmp     eax, edi
jnz     short loc_519130

loc_519122:                             ; CODE XREF: InfantryClass__Draw+16D↑j
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+54h+var_3C]

loc_519130:                             ; CODE XREF: InfantryClass__Draw+190↑j
mov     ecx, [eax]
lea     edx, [esp+54h+var_10]
push    edx
push    eax
call    dword ptr [ecx+0Ch]
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+1C8h]
test    eax, eax
jle     loc_519293
mov     ecx, 4
mov     edi, offset g_CLSID_DriveLocomotion
lea     esi, [esp+54h+var_10]
xor     edx, edx
repe cmpsd
jnz     loc_519291
xor     dl, dl
mov     ecx, offset aPodShp ; "POD.SHP"
call    SearchMIXFile
mov     [esp+54h+var_34], eax
mov     eax, [ebx]
test    eax, eax
jnz     short loc_519186
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_519186:                             ; CODE XREF: InfantryClass__Draw+1EA↑j
mov     eax, [ebx]
lea     edx, [esp+54h+var_1C]
push    edx
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+30h]
mov     edi, [esp+54h+arg_0]
mov     ecx, [eax]
mov     edx, [eax+4]
mov     eax, [edi]
add     eax, ecx
mov     ecx, [edi+4]
mov     [esp+54h+var_2C], eax
mov     eax, [ebx]
add     ecx, edx
test    eax, eax
mov     [esp+54h+var_28], ecx
jnz     short loc_5191BD
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_5191BD:                             ; CODE XREF: InfantryClass__Draw+221↑j
xor     eax, eax
mov     edx, [ebp+0]
push    eax
mov     esi, [ebx]
push    eax
push    eax
push    eax
mov     eax, [esp+64h+var_40]
push    eax
push    3E8h
push    0
mov     ecx, ebp
call    dword ptr [edx+2ECh]
mov     edx, [esi]
sub     eax, 2
push    eax
mov     eax, [esp+70h+arg_8]
push    0
push    2E01h
lea     ecx, [esp+78h+var_28]
push    eax
push    ecx
push    esi
call    dword ptr [edx+88h]
mov     edx, ds:87F6C4h
mov     ecx, ds:887314h
push    eax
mov     eax, [esp+88h+var_34]
push    eax
call    DrawToSurfaceSHP
lea     ecx, [esp+54h+var_38]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
lea     edx, [esp+54h+var_38]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
mov     eax, [ebx]
xor     esi, esi
test    eax, eax
jnz     short loc_519241
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_519241:                             ; CODE XREF: InfantryClass__Draw+2A5↑j
xor     eax, eax
push    0
push    eax
push    esi
push    eax
mov     ebx, [ebx]
push    eax
push    eax
push    3E8h
mov     edx, [ebp+0]
push    eax
mov     ecx, [ebx]
push    2
push    eax
push    100h
push    eax
mov     eax, [esp+84h+arg_4]
mov     [esp+84h+arg_0], edx
push    eax
push    edi
push    ebx
call    dword ptr [ecx+88h]
mov     edx, [esp+54h+arg_0]
push    eax
mov     eax, [esp+58h+arg_38]
push    edx
mov     ecx, ebp
call    dword ptr [eax+50Ch]
jmp     loc_5195E8
; ---------------------------------------------------------------------------

loc_519291:                             ; CODE XREF: InfantryClass__Draw+1D0↑j
xor     edi, edi

loc_519293:                             ; CODE XREF: InfantryClass__Draw+1B8↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+6Ch]
cmp     eax, edi
mov     [esp+54h+var_2C], eax
jnz     short loc_5192BF
mov     eax, [esp+54h+var_3C]
cmp     eax, edi
jz      loc_51961F
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 44h
retn    8
; ---------------------------------------------------------------------------

loc_5192BF:                             ; CODE XREF: InfantryClass__Draw+311↑j
mov     edx, [ebp+0]
lea     eax, [esp+54h+var_34]
push    eax
mov     ecx, ebp
call    dword ptr [edx+1C0h]
mov     ecx, [eax]
mov     edx, [esp+54h+var_20]
mov     eax, [esp+54h+var_24]
push    edx
mov     [esp+58h+arg_0], ecx
mov     ecx, ds:887324h
push    eax
push    ebp
call    TacticalClass__AddToDrawQueue
call    LightningStorm__IsActive
test    al, al
jz      short loc_519302
mov     ecx, ds:0A8B230h
mov     ebx, [ecx+355Ch]
jmp     short loc_51933B
; ---------------------------------------------------------------------------

loc_519302:                             ; CODE XREF: InfantryClass__Draw+362↑j
call    PsyDom__IsActive
test    al, al
jz      short loc_519319
mov     edx, ds:0A8B230h
mov     ebx, [edx+3590h]
jmp     short loc_51933B
; ---------------------------------------------------------------------------

loc_519319:                             ; CODE XREF: InfantryClass__Draw+379↑j
call    NukeFlash__IsActive
test    al, al
jz      short loc_51932F
mov     eax, ds:0A8B230h
mov     ebx, [eax+3574h]
jmp     short loc_51933B
; ---------------------------------------------------------------------------

loc_51932F:                             ; CODE XREF: InfantryClass__Draw+390↑j
mov     ecx, ds:0A8B230h
mov     ebx, [ecx+3544h]

loc_51933B:                             ; CODE XREF: InfantryClass__Draw+370↑j
; InfantryClass__Draw+387↑j ...
mov     al, [ebp+8Ch]
test    al, al
jnz     loc_51941A
lea     esi, [ebp+9Ch]
mov     edx, esi
mov     eax, [edx]
mov     [esp+54h+var_1C], eax
lea     eax, [esp+54h+var_1C]
mov     ecx, [edx+4]
push    eax
mov     [esp+58h+var_18], ecx
mov     ecx, 87F7E8h
mov     edx, [edx+8]
mov     [esp+58h+var_14], edx
call    Coord__To_Cell
test    dword ptr [eax+140h], 10000h
jz      short loc_5193C7
mov     ecx, esi
mov     edx, [ecx]
mov     [esp+54h+var_1C], edx
mov     eax, [ecx+4]
mov     [esp+54h+var_18], eax
mov     edi, [ecx+8]
mov     edx, [ecx]
mov     [esp+54h+var_1C], edx
lea     edx, [esp+54h+var_1C]
mov     eax, [ecx+4]
push    edx
mov     [esp+58h+var_18], eax
mov     ecx, [ecx+8]
mov     [esp+58h+var_14], ecx
mov     ecx, 87F7E8h
call    Cell__GetGroundHeight
mov     ecx, eax
mov     eax, dword_A8ED54+4E0h
cdq
sub     eax, edx
sar     eax, 1
add     ecx, eax
cmp     edi, ecx
jg      short loc_51941A

loc_5193C7:                             ; CODE XREF: InfantryClass__Draw+3EE↑j
mov     edx, [esi]
mov     ecx, [esi+8]
mov     eax, [esi+4]
mov     [esp+54h+var_1C], edx
lea     edx, [esp+54h+var_1C]
mov     [esp+54h+var_14], ecx
push    edx
mov     ecx, 87F7E8h
mov     [esp+58h+var_18], eax
call    Coord__To_Cell
mov     esi, [eax+140h]
lea     eax, [esp+54h+arg_0]
and     esi, 10000h
push    eax
neg     esi
sbb     esi, esi
mov     ecx, 87F7E8h
and     esi, 0FFFFFE0Ch
call    CellCoord__To_CellObj
movsx   ecx, word ptr [eax+10Ah]
add     esi, ecx
jmp     short loc_51944D
; ---------------------------------------------------------------------------

loc_51941A:                             ; CODE XREF: InfantryClass__Draw+3B3↑j
; InfantryClass__Draw+435↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1C8h]
mov     ecx, dword_A8ED54+4ECh
cdq
add     ecx, ecx
idiv    ecx
lea     edx, [esp+54h+arg_0]
mov     ecx, 87F7E8h
push    edx
mov     edi, eax
imul    edi, ebx
call    CellCoord__To_CellObj
movsx   esi, word ptr [eax+10Ah]
add     esi, edi

loc_51944D:                             ; CODE XREF: InfantryClass__Draw+488↑j
mov     eax, ds:8871E0h
mov     edx, [ebp+0]
mov     ecx, ebp
add     esi, [eax+17D8h]
call    dword ptr [edx+1C8h]
lea     edi, [ebp+9Ch]
mov     ebx, eax
mov     eax, edi
mov     ecx, [eax]
mov     [esp+54h+var_1C], ecx
lea     ecx, [esp+54h+var_1C]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+58h+var_18], edx
mov     eax, [eax+8]
mov     [esp+58h+var_14], eax
call    Coord__To_Cell
mov     ecx, eax
mov     [esp+54h+var_34], ecx
mov     edx, [ecx+140h]
test    dh, 1
jz      short loc_5194E7
cmp     ebx, dword_A8ED54+4E0h
jl      short loc_5194E7
test    dh, 8
jz      short loc_5194C4
push    0
call    Cell__GetNeighbourContent
mov     ecx, [eax+140h]
test    ch, 1
jnz     short loc_5194E1
mov     ecx, [esp+54h+var_34]

loc_5194C4:                             ; CODE XREF: InfantryClass__Draw+51C↑j
mov     eax, [ecx+140h]
test    ah, 8
jnz     short loc_5194E7
push    6
call    Cell__GetNeighbourContent
mov     ecx, [eax+140h]
test    ch, 1
jz      short loc_5194E7

loc_5194E1:                             ; CODE XREF: InfantryClass__Draw+52E↑j
sub     ebx, dword_A8ED54+4E0h

loc_5194E7:                             ; CODE XREF: InfantryClass__Draw+50F↑j
; InfantryClass__Draw+517↑j ...
test    ebx, ebx
jle     loc_51958A
mov     eax, dword_A8ED54+4F0h
test    eax, eax
jnz     short loc_51950D
xor     dl, dl
mov     ecx, offset aInfshdwShp ; "INFSHDW.SHP"
call    SearchMIXFile
test    eax, eax
mov     dword_A8ED54+4F0h, eax
jz      short loc_51958A

loc_51950D:                             ; CODE XREF: InfantryClass__Draw+566↑j
mov     edx, [edi]
mov     eax, [edi+4]
mov     edi, [edi+8]
mov     ecx, ebx
mov     [esp+54h+var_1C], edx
mov     [esp+54h+var_18], eax
call    ZCoordToScreenY
movsx   ecx, byte ptr [ebp+6B4h]
mov     edx, [esp+54h+var_20]
neg     ecx
add     ecx, edx
mov     edx, [esp+54h+var_24]
add     eax, ecx
mov     ecx, edi
mov     [esp+54h+var_30], eax
xor     eax, eax
push    eax
push    eax
push    eax
push    eax
push    eax
push    3E8h
push    eax
sub     ecx, ebx
mov     [esp+70h+var_34], edx
call    ZCoordToScreenY
mov     edx, [esp+70h+arg_4]
mov     ecx, 0FFFFFFFBh
sub     ecx, eax
lea     eax, [esp+70h+var_34]
push    ecx
mov     ecx, dword_A8ED54+4F0h
push    0
push    2601h
push    edx
mov     edx, ds:87F6C4h
push    eax
push    1
push    ecx
mov     ecx, ds:887314h
call    DrawToSurfaceSHP

loc_51958A:                             ; CODE XREF: InfantryClass__Draw+559↑j
; InfantryClass__Draw+57B↑j
movsx   eax, byte ptr [ebp+6B4h]
mov     ebx, [esp+54h+var_20]
xor     edx, edx
xor     ecx, ecx
push    edx
push    edx
push    ecx
push    edx
push    edx
mov     edx, [esp+68h+var_40]
mov     edi, [esp+68h+var_24]
neg     eax
add     eax, ebx
push    edx
mov     [esp+6Ch+var_30], eax
mov     eax, dword_825500
push    esi
push    ecx
push    2
push    eax
push    100h
push    ecx
mov     ecx, [esp+84h+arg_4]
lea     edx, [esp+84h+var_34]
push    ecx
mov     [esp+88h+var_34], edi
mov     edi, [ebp+0]
push    edx
mov     ecx, ebp
call    CalculateLocomotionFrameIndex
push    eax
mov     eax, [esp+90h+var_2C]
push    eax
mov     ecx, ebp
call    dword ptr [edi+50Ch]

loc_5195E8:                             ; CODE XREF: InfantryClass__Draw+2FC↑j
mov     eax, [esp+54h+var_3C]
test    eax, eax
jz      short loc_51960E
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
jmp     short loc_51960E
; ---------------------------------------------------------------------------

loc_5195F8:                             ; CODE XREF: InfantryClass__Draw+155↑j
mov     edx, [esp+54h+var_20]
mov     eax, [esp+54h+var_24]
mov     ecx, ds:887324h
push    edx
push    eax
push    ebp
call    TacticalClass__AddToDrawQueue

loc_51960E:                             ; CODE XREF: InfantryClass__Draw+65E↑j
; InfantryClass__Draw+666↑j
mov     ecx, [esp+54h+arg_4]
lea     edx, [esp+54h+var_24]
push    ecx
push    edx
mov     ecx, ebp
call    AbstractClass__COMStub_Return0_69

loc_51961F:                             ; CODE XREF: InfantryClass__Draw+319↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 44h
retn    8
*/
}

void InfantryClass::DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd

#include "structure/infantry.hpp"

namespace gamemd {

// --- InfantryClass ---

HRESULT __stdcall InfantryClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall InfantryClass::whatAmI() const { return kObjectTypeId; }
int InfantryClass::objectSize() const { return sizeof(InfantryClass); }
int InfantryClass::IsDeployed() const { return 0; }
bool InfantryClass::PlayAnim(Sequence index, bool force, bool randomStartFrame) { return false; }

} // namespace gamemd
