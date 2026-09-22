#include "structure/infantry.hpp"
#include "type/infantry_type.hpp"  // InfantryTypeClass full definition (Type->Engineer access)

#include <cstring>
#include <cmath>
#include "e4/e4_globals.hpp"

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
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x51d6f0
{
  __int16 *v6; // eax
  char *ProductionTimeMult; // eax
  char *v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]
  int v4 = a2;
  if ( a2 == -1
    || !*(_DWORD *)(*(_DWORD *)(this->Type + 3644) + 36 * a2 + 4)
    || this->SequenceAnim == 33 && this->slaveManager )
  {
    return 0;
  }
  if ( this->isPlayingDamageSound
    && *(_DWORD *)(this->Vt34Thunk() + 2048)
    && ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 692))(this) == 1.0
    && v4 == 3 )
  {
    v4 = 39;
    goto LABEL_12;
  }
  if ( v4 == 5 && !*(_BYTE *)(this->Type + 3773) )
    return 0;
LABEL_12:
  if ( *(_DWORD *)(this->Type + 1460) == 3 )
  {
    v6 = (__int16 *)this->GetCellCoords_Alt(&a2);
    int v7 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v6) + 59);
    int v8 = 1;
    if ( (v7 == 6 || v7 == 2) && !this->q230 )
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
    int v9 = this->waterState;
    if ( v9 || v8 != 1 )
    {
      if ( v9 == 1 && !v8 )
      {
        v24 = this->location;
        v25 = this->q0A0;
        int v11 = this->Type;
        v26 = this->q0A4;
        StartAudioControllerAt(*(_DWORD *)(v11 + 3748), (int)&v24, 0);
      }
    }
    else
    {
      v24 = this->location;
      v25 = this->q0A0;
      int v10 = this->Type;
      v26 = this->q0A4;
      StartAudioControllerAt(*(_DWORD *)(v10 + 3752), (int)&v24, 0);
    }
    this->waterState = v8;
  }
  if ( !this->IsHeightAboveThreshold_0()
    || this->q230
    || *(int *)(*(_DWORD *)(this->Type + 3644) + 828) <= 0
    || v4 )
  {
    if ( v4 == 3 && (int)this->PanicDurationLeft >= 200 )
      v4 = 37;
  }
  else
  {
    v4 = 23;
  }
  int v12 = this->SequenceAnim;
  if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] )
    return 0;
  if ( v4 == 27 )
  {
    if ( *(_DWORD *)(this->Vt34Thunk() + 1388) != -1 )
    {
      v24 = this->location;
      v25 = this->q0A0;
      int v13 = *this;
      v26 = this->q0A4;
      int v14 = *(_DWORD *)(this->Vt34Thunk() + 1388);
      StartAudioControllerAt(v14, (int)&v24, 0);
    }
  }
  else if ( v4 == 31 && *(_DWORD *)(this->Vt34Thunk() + 1392) != -1 )
  {
    v24 = this->location;
    int v15 = *this;
    v25 = this->q0A0;
    v26 = this->q0A4;
    int v16 = *(_DWORD *)(this->Vt34Thunk() + 1392);
    StartAudioControllerAt(v16, (int)&v24, 0);
  }
  this->SequenceAnim = v4;
  if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 )
  {
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, (unsigned __int8)byte_7EAF7F[4 * v4]);
    v18 = (char *)(this + 64);
    this->radioCommand = g_CurrentFrame;
    v19 = v25;
  }
  else
  {
    ProductionTimeMult = (char *)(unsigned __int8)byte_7EAF7F[4 * v4];
    v18 = (char *)(this + 64);
    this->radioCommand = g_CurrentFrame;
    v19 = v25;
  }
  *((_DWORD *)v18 + 1) = v19;
  *((_DWORD *)v18 + 2) = ProductionTimeMult;
  this->q10C = ProductionTimeMult;
  if ( a4 )
  {
    v20 = *(_DWORD *)(*(_DWORD *)(this->Type + 3644) + 36 * v4 + 4);
    if ( v20 <= 1 )
      v20 = 1;
    this->radioContact = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v20 - 1);
  }
  else
  {
    this->radioContact = 0;
  }
  if ( !this->health )
    this->PlayIdleAnim();
  v21 = v4 - 5;
  if ( v21 )
  {
    v22 = v21 - 2;
    if ( !v22 || v22 == 20 )
    {
      this->Crawling = 0;
      return 1;
    }
  }
  else
  {
    this->Crawling = 1;
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
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( this->q1B5 > 0 )
  {
    if ( !*(_BYTE *)(this->animation + 3772) )
      --this->q1B5;
    if ( !this->q1B5 && !this->q0BF && this->HasActiveParam() )
      this->q0BF = *(_DWORD *)(this->animation + 1668);
    int v2 = this->q1B5;
    if ( this->Crawling )
    {
      if ( v2 < 50 )
      {
        int v3 = this->q1B1;
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
          this->ProcessDeployAction(7, 0, 0);
      }
    }
    else if ( v2 >= 50 )
    {
      int v4 = this->q1B1;
      if ( v4 != 27 && v4 != 28 && v4 != 29 && v4 != 30 )
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->owner) )
          goto LABEL_42;
        if ( !this->q169 )
        {
          if ( !this->Locomotor )
            WinAPI::Wrapper(-2147467261);
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))(this->Locomotor) )
          {
LABEL_42:
            if ( !*(_BYTE *)(this->animation + 3775) )
              this->ProcessDeployAction(5, 0, 0);
          }
        }
      }
    }
  }
  bool v5; // eax
  LOBYTE(v5) = *(_BYTE *)(this->animation + 3775);
  if ( (_BYTE)v5 )
  {
    if ( this->q1B5 > 50 )
    {
      v5 = this->q1B1;
      if ( v5 != 27 && v5 != 28 && v5 != 29 && v5 != 30 )
      {
        LOBYTE(v5) = this->isFallingDown;
        if ( !(_BYTE)v5 )
        {
          if ( !this->Locomotor )
            WinAPI::Wrapper(-2147467261);
          LOBYTE(v5) = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))(this->Locomotor);
          if ( !(_BYTE)v5 )
          {
            v5 = this->q169;
            if ( !v5 )
              LOBYTE(v5) = this->FindMoveTarget(&DataGlobal_A8F200, 1, 0);
          }
        }
      }
    }
  }
  return v5;
}

// 0x521b60
bool InfantryClass::CanInitiateDeploy()
{
    // IDA: 0x521B60 — check deploy preconditions
    // Check type flags, cell passability, deploy animation
    return !Crawling && Type != nullptr;
}

// 0x5221d0
bool InfantryClass::CanDeployAtCell()
{
    // IDA: 0x5221D0 — check cell for deploy
    return true;
}

// 0x521eb0
bool InfantryClass::CheckDeployPath()
{
    // IDA: 0x521EB0 — path check for deploy
    return true;
}

// 0x522fe0
int InfantryClass::CreateDeployLocomotor()
{
    // IDA: 0x522FE0 — create deploy locomotor COM object
    return 0;
}

// 0x522c00
bool InfantryClass::StartBombDeploy()
{
    // IDA: 0x522C00 — start Ivan bomb deploy sequence
    return false;
}

// 0x5228d0
bool InfantryClass::IsBombDeployMission()
{
    // IDA: 0x5228D0 — check if current mission is bomb deploy
    return false;
}

// 0x514310
void InfantryClass::DeployAnimation()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x514310
{
  __int16 v10; // bx
  int Member; // eax
  unsigned __int16 v19; // bx
  void **v43; // eax
  _DWORD *Value; // eax
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
    _DWORD * v1 = (_DWORD *)(a1 - 4);
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) )
    {
      UpdateFootFacing(a1 - 4);
      _BYTE * v2 = *(_BYTE **)(a1 + 8);
      if ( !v2[144] )
        return 0;
      int v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 464))(v2);
      bool v5 = *(_DWORD *)(a1 + 8);
      v58 = v4;
  double v57; // [esp+3Ch] [ebp-40h] BYREF
      LODWORD(v57) = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1336))(v5);
      int v6 = Math::RoundToInt((double)SLODWORD(v57) * *(double *)(a1 + 76));
      int v7 = *(_DWORD *)(a1 + 8);
  double v56; // [esp+34h] [ebp-48h] BYREF
      LODWORD(v56) = v6;
      int * v8 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 72))(v7, &v65);
      Int64::Equal(a1 + 32);
      double v9 = Math::CalcAngle((double)v8[1] - (double)*(int *)(a1 + 36), (double)*(int *)(a1 + 32) - (double)*v8);
      v10 = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427);
      if ( !LODWORD(v56) && !abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v57) - v10) )
      {
        bool v13 = 1;
        if ( v1[9] != dword_A8ED54[267] || v1[10] != dword_A8ED54[268] || v1[11] != dword_A8ED54[269] )
        {
          int v11 = v1[3];
          _WORD * v55 = Coord::ToCell(v1 + 9, &v57);
          _WORD * v12 = (_WORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 440))(v11, &v56);
          if ( !CellStruct::Equals(v12, v55) )
            v13 = 0;
        }
        int v14 = v1[3];
        v1[18] = 0;
        v1[19] = 1072693248;
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v14 + 1348))(v14, 0, 1072693248);
        MovementAI::StepFootClass((int *)(a1 - 4), 0);
        if ( v13 )
          MovementAI::MainFootClass((int *)(a1 - 4), 1);
        LODWORD(v57) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1336))(*(_DWORD *)(a1 + 8));
        LODWORD(v56) = Math::RoundToInt((double)SLODWORD(v57) * *(double *)(a1 + 76));
      }
      int v15 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156);
      int v16 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 164);
      v60 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160) - *(_DWORD *)(a1 + 36);
      v67 = v16;
      v59 = v15 - *(_DWORD *)(a1 + 32);
      double v17 = Math::Sqrt((double)v59 * (double)v59 + (double)v60 * (double)v60);
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
  _DWORD *v20; // eax
          v20 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Member + 76))(
                            Member,
                            &v65,
                            *(_DWORD *)(a1 + 8));
          LOWORD(v57) = *v20 / 256;
          WORD1(v57) = v20[1] / 256;
          v19 = LOWORD(v57);
        }
        _DWORD * v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 440))(*(_DWORD *)(a1 + 8), &v59);
        bool v22 = *v21 == __PAIR32__(WORD1(v57), v19);
        if ( *(_DWORD *)(a1 + 20) != dword_A8ED54[267]
          || *(_DWORD *)(a1 + 24) != dword_A8ED54[268]
          || *(_DWORD *)(a1 + 28) != dword_A8ED54[269]
          || v22 )
        {
          int v23 = MovementAI::MainFootClass((int *)(a1 - 4), 1);
          int v24 = *(_DWORD *)(a1 + 8);
          int v25 = v23;
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
            int v39 = v1[3];
            v1[20] = 0;
            v1[18] = 0;
            v1[21] = 0;
            v1[19] = 0;
            (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v39 + 1348))(v39, 0, 0);
            _DWORD * v40 = v1 + 9;
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
        int * v26 = *(int **)(a1 + 8);
        v65 = v26[39];
        v66 = v26[40];
        v67 = v26[41];
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v26 + 192))(v26)
          && (*(_DWORD *)(a1 + 32) != dword_A8ED54[267]
           || *(_DWORD *)(a1 + 36) != dword_A8ED54[268]
           || *(_DWORD *)(a1 + 40) != dword_A8ED54[269]) )
        {
          int v27 = *(_DWORD *)(a1 + 8);
          v63 = *(double *)(v27 + 156);
          v64 = *(_DWORD *)(v27 + 164);
          (*(void (__thiscall **)(int, double *))(*(_DWORD *)v27 + 244))(v27, &v63);
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1718) = 0;
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1719) = 0;
        }
        v61 = v65;
        v62 = v66;
        v57 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v59) - 0x3FFF) * -0.00009587672516830327;
        unsigned int v28 = HIDWORD(v57);
        unsigned int v29 = LODWORD(v57);
        v56 = (double)SLODWORD(v56);
        v63 = (double)v62;
        double v30 = Math::SinCos(v57);
        LODWORD(v57) = Math::RoundToInt(v63 - v30 * v56);
        double v31 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v28, v29)));
        int v32 = Math::RoundToInt(v31 * v56 + (double)v61);
        int v33 = *(_DWORD *)(a1 + 8);
        v65 = v32;
        v66 = LODWORD(v57);
        int v34 = *(_DWORD *)(v33 + 156);
        HIDWORD(v63) = *(_DWORD *)(v33 + 160);
        v64 = *(_DWORD *)(v33 + 164);
        WORD1(v56) = SHIDWORD(v63) / 256;
        if ( (unsigned __int16)(v65 / 256) == (unsigned __int16)(v34 / 256)
          && (unsigned __int16)(SLODWORD(v57) / 256) == WORD1(v56) )
        {
          char v41 = *(_BYTE *)(v33 + 116);
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
          _DWORD * v35 = Coord::To_Cell(DataGlobal_87F7E8, &v65);
          _BYTE * v36 = *(_BYTE **)(a1 + 8);
          _DWORD * v37 = v35;
          if ( !v36[140]
            && (v35[80] & 0x100) != 0
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v36 + 456))(v36) >= dword_A8ED54[280] )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 8) + 140) = 1;
          }
          int v38 = *(_DWORD *)(a1 + 8);
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
      _BYTE * v42 = *(_BYTE **)(a1 + 8);
      if ( !v42[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v42 + 444))(v42) + 236) == 2 )
      {
        if ( *(_DWORD *)(DataGlobal_87F7E8[7806] + 148) )
        {
          v43 = (void **)__2_YAPAXI_Z(456);
          if ( v43 )
          {
            int * v44 = (int *)(*(_DWORD *)(a1 + 8) + 156);
            v65 = *v44;
            v66 = v44[1];
            v67 = v44[2];
            AnimClass::ctor(v43, *(void **)(DataGlobal_87F7E8[7806] + 148), &v65, 0, 1, (void *)0x600, 0, 0);
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
    int v46 = *(_DWORD *)(a1 + 8);
    LOWORD(v58) = *(_WORD *)Value + (*(_WORD *)(a1 + 104) << 8);
    FacingClass::Set_SyncLog((char *)(v46 + 904), &v58);
    int v47 = *(_DWORD *)(a1 + 104);
    int v48 = abs32(v47);
    if ( v48 >= 1 )
      v48 = 1;
    int v49 = v47 >= 0 ? v47 - v48 : v48 + v47;
    *(_DWORD *)(a1 + 104) = v49;
    if ( !v49 )
LABEL_81:
      *(_BYTE *)(a1 + 100) = 0;
    if ( !*(_BYTE *)(a1 + 100) )
    {
      int * v50 = (int *)(*(_DWORD *)(a1 + 8) + 156);
      v65 = *v50;
      v66 = v50[1];
      v67 = v50[2];
      void * v51 = Coord::To_Cell(DataGlobal_87F7E8, &v65);
      BuildingClass::CreateIdleAnim((int)v51);
      int * v52 = (int *)(*(_DWORD *)(a1 + 8) + 156);
      v65 = *v52;
      v66 = v52[1];
      v67 = v52[2];
      if ( *((_DWORD *)Coord::To_Cell(DataGlobal_87F7E8, &v65) + 59) == 2 )
      {
        int * v53 = (int *)(*(_DWORD *)(a1 + 8) + 156);
        v65 = *v53;
        v66 = v53[1];
        int v54 = v53[2];
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
    int v2;
    v2 = TechnoClass::ComputeSpeedFactorEx((double *)this);
    if ( this->Crawling )
    {
        if ( *(_BYTE *)((char *)this->Type + 3773) )
            return ((unsigned int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 31)
                 + ((int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 1)
                 + v2;
        v2 += v2 / 2;
    }
    return v2;
}

// 0x5218e0
int InfantryClass::GetDeployWeaponIndex()
{
    InfantryTypeClass *v3;
    int v4;
    v3 = this->Type;
    if ( !*(_BYTE *)((char *)v3 + 2084) )
        return TechnoClass::SelectWeapon(this);
    v4 = this->SequenceAnim;
    if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 )
        return *(_DWORD *)((char *)v3 + 2080);
    if ( !this->inOpenToppedTransport
      || *(_DWORD *)((char *)this->Vt34Thunk() + 3408) == -1 )
    {
        return 0;
    }
    return *(_DWORD *)((char *)this->Vt34Thunk() + 3408);

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

// 0x522600
int InfantryClass::FireAtTargetPos(int a2, int a3, int a4)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h] BYREF
  v4 = *this;
  v6 = *(_DWORD *)(*(this + 432) + 160);
  return this->ProcessDeployment(&v6, 0, *(_DWORD *)(DataGlobal_87F7E8[7806] + 4008), 0, 1, 0, a3);
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
    int v4;

    this->unknownBool68D = 0;
    v4 = TechnoClass::FireWeapon(this);
    if (v4)
    {
        if (!this->inLimbo)
        {
            if ((_BYTE)this->Type->Fraidycat)
            {
                if (!this->ammo)
                {
                    this->PanicDurationLeft = 300;
                    if (this->GetPrimaryOrFallback() == 1
                        || this->GetPrimaryOrFallback() == 15)
                    {
                        this->QueueMission(5, 0);
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
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x51c8b0
{
  int result; // eax

  int v6 = *(_DWORD *)(a1 + 1732);
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
  int * v8 = a3;
  if ( TechnoClass::GetValue((_DWORD *)a1, -1) < 0
    && (!a3
     || (*(int (__thiscall **)(int *))(*a3 + 44))(a3) != 15
     || BuildingClass::GetHealthRatio(a3) >= *(double *)(DataGlobal_87F7E8[7806] + 5880)) )
  {
    return 5;
  }
  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 1 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1682) )
      {
        int v9 = a3[170];
        if ( v9 )
        {
          int v10 = a1 ? ((*(_BYTE *)(a1 + 20) & 1) != 0 ? a1 : 0) : 0;
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
      int v11 = *(_DWORD *)(a1 + 1732);
      if ( v11 != -1 && !byte_7EAF7C[4 * v11] )
        return 7;
    }
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1728) + 3476) )
    {
      int v12 = *(_DWORD *)(a1 + 1652);
      a5 = 0;
      if ( !v12 )
        goto LABEL_37;
      int v13 = StreamClass::Set2(&a5, (_DWORD *)(a1 + 1652));
      if ( v13 < 0 && v13 != -2147467262 )
        WinAPI::Wrapper(v13);
      if ( !a5 )
LABEL_37:
        WinAPI::Wrapper(-2147467261);
  char v17[16]; // [esp+14h] [ebp-10h] BYREF
      (*(void (__stdcall **)(int, char *))(*(_DWORD *)a5 + 12))(a5, v17);
      int v14 = memcmp(v17, (const char *)&g_CLSID_JumpjetLocomotion, 16);
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
    int v15 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1016))(a1, a4);
    if ( !v15 )
      goto LABEL_64;
    if ( *(_BYTE *)(v15 + 297) && *(_DWORD *)(a1 + 1444) )
      return 7;
    if ( *(_BYTE *)(v15 + 336) && v8 != (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) )
      return 5;
    int v16 = *(_DWORD *)(v15 + 172);
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
bool InfantryClass::CanAttackTarget(HouseClass* other)
{
    bool result;
    CoordStruct v9;
    int* v3;
    short v8[2];
    CellClass* v4;
    HouseClass* v5;

    result = false;
    if ( this->IsDisguised() )
    {
        v3 = (int*)this->GetExitCoords(&v9);
        v8[0] = (short)(v3[0] / 256);
        v8[1] = (short)(v3[1] / 256);
        v4 = (CellClass*)CellCoord::To_CellObj((int*)DataGlobal_87F7E8, v8);
        if ( !House::IsAlliedWith(this->owner, other)
          && !HouseClass::HasType(v4, other->relatedTagsCount) )
        {
            v5 = this->disguisedAsHouse;
            if ( v5 == other || !v5 || House::IsAlliedWith(other, v5) )
                return true;
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

// 0x51daf0
void InfantryClass::PlayIdleAnim(int idle_anim_number)
{
    // IDA: vtable override — play idle animation sequence
    if (!Type) return;
    // PlayAnim with idle sequence
}

// 0x51cdb0
int InfantryClass::ProcessIdleAction()
{
    // IDA: 0x51CDB0 (760B)
    // Process idle behavior: random movement, scanning, deploy check
    return 10;
}

// 0x5239d0
// 0x5239d0
int InfantryTypeClass::DTOR()
{
    // 4x vftable installs (this+0/4/8/12): compiler-generated vptr writes --
    // exempted on the IDA side (D1-6 #128 trivial-vocabulary, G22).
    AbstractClass::AnnounceExpiredPointer(this, 1);
    InfantryTypeClass* v7 = this;
    int v2 = g_InfantryTypes.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_InfantryTypes_Count )
    {
        --g_InfantryTypes_Count;
        for ( ; v2 < g_InfantryTypes_Count ; *(g_InfantryTypes_Items + v2 - 1) = *(g_InfantryTypes_Items + v2) )
        {
            ++v2;
        }
    }
    OperatorDelete(this->RecordTable);
    this->RecordTable = nullptr;
    void* v3 = this->VoiceComment_Items;
    if ( v3 && this->VoiceComment_FlagByte )
    {
        OperatorDelete(v3);
        this->VoiceComment_Items = nullptr;
    }
    this->VoiceComment_FlagByte = 0;
    this->VoiceComment_Capacity = 0;
    void* v4 = this->DeathAnims_Items;
    if ( v4 && this->DeathAnims_FlagByte )
    {
        OperatorDelete(v4);
        this->DeathAnims_Items = nullptr;
    }
    this->DeathAnims_FlagByte = 0;
    this->DeathAnims_Capacity = 0;
    void* v5 = this->DeadBodies_Items;
    if ( v5 && this->DeadBodies_FlagByte )
    {
        OperatorDelete(v5);
        this->DeadBodies_Items = nullptr;
    }
    this->DeadBodies_FlagByte = 0;
    this->DeadBodies_Capacity = 0;
    return TechnoTypeClass::DTOR(this);
}

// 0x521320
int InfantryClass::GetIdleTimer()
{
{
    int v2;
    TechnoClass* v16;
    int* v18;
    int v19;
    int v20;
    int* v21;
    int v22;
    int v23;
    int v9;
    __int16* v5;
    __int16* v10;
    void* v6;
    unsigned int NumberOfActiveVirtualProcessors;
    int v8;
    void* v11;
    char* MissionControl;
    int v13;
    char* v12;
    char* v14;
    int v15;
    int v25;
    unsigned char v26[4];
    unsigned char v27[12];
    unsigned char v28[12];

    v2 = this->SequenceAnim;
    if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 )
    {
        v16 = this->GetTarget();
        if ( !(unsigned __int8)House::IsCurrentPlayer(v16) )
        {
            if ( this->Type->Deployer )
            {
                if ( this->Type->DeployFire )
                {
                    if ( this->Type->UndeployDelay <= -1
                      && !this->Archive
                      && this->missionStartTime + *(_DWORD *)(*((_DWORD *)g_RulesClass_Instance + 908) + 4 * this->owner->memberAtOffset388) < dword_A8ED54 )
                    {
                        if ( !this->focus
                          || (v18 = this->GetExitCoords(v27),
                              v19 = *v18 / 256,
                              v20 = v18[1] / 256,
                              v21 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->focus + 72))(this->focus, v28),
                              v22 = *v21,
                              v23 = v21[1] / 256,
                              (unsigned __int16)(v22 / 256) == (_WORD)v19)
                          && (_WORD)v23 == (_WORD)v20 )
                        {
                            if ( !this->Type->memberAtOffset3383 )
                            {
                                if ( !this->Locomotor )
                                    WinAPI::Wrapper(-2147467261);
                                if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))((_DWORD)this->Locomotor) )
                                {
                                    if ( !this->Locomotor )
                                        WinAPI::Wrapper(-2147467261);
                                    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 72))((_DWORD)this->Locomotor);
                                    this->ShouldDeploy = 1;
                                    MissionControl = MissionClass::GetMissionControl(this);
                                    v25 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
                                    return v25 + Random::Range((int *)g_ScenarioClass_Instance + 134, 0, 2);
                                }
                                else
                                {
                                    this->ProcessDeployAction(27, 0, 0);
                                    return *(int *)((char *)this->Type->Sequence + 976);
                                }
                            }
                        }
                    }
                }
            }
        }
        return -1;
    }
    if ( this->Type->UndeployDelay > -1 )
    {
        this->ProcessDeployAction(31, 0, 0);
        return *(int *)((char *)this->Type->Sequence + 1120);
    }
    if ( !this->Type->DeployFire )
        return -1;
    if ( this->Type->memberAtOffset3383 )
    {
        v5 = (__int16 *)this->GetCellCoords_Alt((CellStruct *)v26);
        v6 = CellCoord::To_CellObj((int *)DataGlobal_87F7E8, v5);
        NumberOfActiveVirtualProcessors = _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6);
        v8 = *(int *)((char *)this->SelectWeaponSlot(1) + 344);
        if ( !NumberOfActiveVirtualProcessors || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors) < v8 / 3 )
        {
            v9 = *(int *)this;
            v10 = (__int16 *)this->GetCellCoords_Alt((CellStruct *)v26);
            v11 = CellCoord::To_CellObj((int *)DataGlobal_87F7E8, v10);
            (*(void (__thiscall **)(int *, void *))((int *)v9 + 968))(this, v11);
            if ( !this->GetFireError((int *)this->target, 1, 1) )
            {
                this->FireWeaponWithCleanup((int)this->target, 1);
                this->AssignTarget_SyncLog(0);
                this->ProcessDeployAction(29, 0, 0);
                return *(int *)((char *)this->Type->Sequence + 1048);
            }
            this->AssignTarget_SyncLog(0);
        }
        v12 = MissionClass::GetMissionControl(this);
        v13 = Math::RoundToInt(*((double *)v12 + 2) * 900.0);
        return v13 + Random::Range((int *)g_ScenarioClass_Instance + 134, 10, 20);
    }
    else
    {
        this->FindPathToBuilding();
        v14 = MissionClass::GetMissionControl(this);
        v15 = Math::RoundToInt(*((double *)v14 + 2) * 900.0);
        return v15 + Random::Range((int *)g_ScenarioClass_Instance + 134, 0, 2);
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
    char result;

    result = TechnoClass::IsTimerExpired(this);
    if ( result )
    {
        if ( !this->Locomotor )
            WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))((_DWORD)this->Locomotor) )
        {
            return 0;
        }
        else if ( this->Crawling )
        {
            return 0;
        }
        else if ( this->unknownBool68D )
        {
            return 0;
        }
        else
        {
            int v3 = (int)this->SequenceAnim;
            result = v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16);
            return result;
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

// 0x484d60
bool InfantryClass::CanMoveThroughCell()
{
    // IDA: 0x484D60 — check cell passability for infantry
    return true;
}

// 0x51dff0
int InfantryClass::MoveToCell(int* a2, int a3)
{
    int* v3;
    int GroundHeight;
    bool v6;
    int* v7;
    int* v8;
    int v9;
    char v11;
    int v12;
    int v13;
    int v14;
    int v15[3];
    short v16[2];

    v3 = a2;
    GroundHeight = Cell::GetGroundHeight(a2);
    v12 = v3[0];
    v13 = v3[1];
    v14 = v3[2];
    if ( v14 == GroundHeight )
    {
        v6 = 1;
        if ( !IKnowWhatImDoing )
        {
            v16[0] = (short)(v3[0] / 256);
            v16[1] = (short)(v3[1] / 256);
            if ( LayerClass::IsWithinUsableArea((int*)DataGlobal_87F7E8, v16, 1) )
                v6 = 0;
        }
        v11 = (char)v6;
        v7 = (int*)Coord::To_Cell((int*)DataGlobal_87F7E8, v3);
        v8 = (int*)ObjectPlacement::CalcPosition(v7, v15, v3, v11, 0, 0);
        v12 = v8[0];
        v9 = v8[1];
        v13 = v9;
        if ( v12 == *(int*)&DataGlobal_A8F200 && v9 == *(int*)&DataGlobal_A8F204 && v8[2] == *(int*)&DataGlobal_A8F208 )
            return 0;
        v14 = GroundHeight;
    }
    if ( !FootClass::DispatchInput(this, &v12, a3) )
        return 0;
    if ( !this->Type->Sight )
        this->isDiscoveredByCurrentPlayer = 0;
    if ( v14 <= GroundHeight + *(int*)&DataGlobal_A8F234 )
        this->MarkCellPassability(&v12);
    this->unknown_int_6E8 = 2;
    return 1;

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
    if (!this->Locomotor)
        WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 172))((_DWORD)this->Locomotor);
    this->unknown_int_6E8 = 2;
    this->Crawling = 0;
    this->SequenceAnim = (Sequence)0;
    return TechnoClass::CleanupDirection(this);
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

// 0x51b350
int InfantryClass::CalcMoveTarget()
{
    // IDA: 0x51B350 (1881B)
    // Calculate movement target based on current order
    return 0;
}

// 0x51d0d0
int InfantryClass::FindMoveTarget()
{
    // IDA: 0x51D0D0 (1568B)
    // Find the best movement target for current mission
    return 0;
}

// 0x418e20
int InfantryClass::FindNearbyCell()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v11; // bx
  int v2 = a2;
  InfantryClass *v22 = this;
  if ( a2 && (!this->FootClass_field_5D4 || !(unsigned __int8)TechnoClass::IsWaypointHidden()) )
  {
    if ( !this->ValidateTargetCell(a2)
  _DWORD *v4; // eax
  double v25; // [esp+48h] [ebp-10h] BYREF
      || (v4 = (_DWORD *)(*(int (__thiscall **)(int, double *, _DWORD))(*(_DWORD *)a2 + 76))(a2, &v25, 0),
  int v18; // [esp+20h] [ebp-38h]
          LOWORD(v18) = *v4 / 256,
          HIWORD(v18) = v4[1] / 256,
  int v19; // [esp+24h] [ebp-34h] BYREF
          v19 = v18,
          !(unsigned __int8)Cell::IsOccupied(&v19, 0)) )
    {
      int * v5 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)a2 + 72))(a2, &v25);
      int v6 = *v5;
      int v7 = v5[1];
      int v26 = v5[2];
      if ( !g_IKnowWhatImDoing )
      {
        v18 = 0;
        if ( *((_DWORD *)g_RulesClass_Instance + 1310) / 256 > 0 )
        {
          v19 = (__int16)(v7 / 256);
          double v24 = (double)v19;
          v19 = (__int16)(v6 / 256);
          v25 = (double)v19;
          while ( 2 )
          {
            int v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7);
  double v20; // [esp+28h] [ebp-30h]
            LODWORD(v20) = (__int16)v18;
            int v21 = v8;
            double v17 = 0.0;
            double v23 = (double)(__int16)v18;
            do
            {
              v20 = (double)(int)(((__int16)((WORD2(v17) + (_WORD)v21) << 13) & 0xFFFFE000) - 0x3FFF)
                  * -0.00009587672516830327;
              double v9 = v20;
              double v10 = Math::SinCos(v20);
              v11 = Math::RoundToInt(v24 - v10 * v23);
              double v12 = Math::ArcTan2(v9);
              LOWORD(v19) = Math::RoundToInt(v12 * v23 + v25);
              HIWORD(v19) = v11;
              int v16 = v19;
              if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&v16, 1) )
              {
                void * v13 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v16);
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
            int v14 = *((_DWORD *)g_RulesClass_Instance + 1310);
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
    int v2;
    int result;
    TechnoClass* v3;
    int v6;
    int v7[3];

    v2 = this->GetDeployWeaponIndex(0);
    v3 = (TechnoClass*)this->target;
    if ( !v3 || (result = this->ValidateTarget(v3, v2), !(_BYTE)result) )
    {
        v7[0] = this->location.X;
        v7[1] = this->locationY;
        v7[2] = this->locationZ;
        v6 = (*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(*(int **)this + 964))(this, 1, v7, 0);
        if ( (result = (int)this->target) == 0 && !v6
          || (result = this->AssignTarget_SyncLog(v6), !v6) )
        {
            if ( this->currentMission != 5 )
            {
                InfantryTypeClass* v5;
                v5 = this->GetTypePtr();
                result = (int)v5;
                if ( !v5->JumpJet )
                    return this->ValidatePlacement(0, 1);
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
    TechnoClass* v2;
    BuildingClass* v3;
    BuildingTypeClass* v4;
    InfantryTypeClass* v7;
    int v10;
    void* MissionControl;

    if ( (this->Type->C4 || TechnoClass::HasVoiceResponse(this, 14))
      && (v2 = this->target) != 0
      && (int)v2->whatAmI() == 6
      && (v3 = (BuildingClass*)this->target, v4 = v3->Type, v4->CanC4)
      && !v4->InvisibleInGame )
    {
        this->AssignDestination_SyncLog(v3, 1);
        this->QueueMission(17, 0);
        return 1;
    }
    else if ( !House::IsCurrentPlayer(this->owner)
           && (v2 = this->target) != 0
           && (int)v2->whatAmI() == 6
           && (v7 = this->Type, v7->Infiltrate || (v7->Occupier || v7->Assaulter) && BuildingClass::CanRepair(v2, this)) )
    {
        this->AssignDestination_SyncLog(this->target, 1);
        this->ForceMission(8);
        return 1;
    }
    else if ( House::IsCurrentPlayer(this->owner)
           && (v10 = this->SequenceAnim, v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30) )
    {
        this->FindPathToBuilding();
        MissionControl = MissionClass::GetMissionControl(this);
        v10 = Math::RoundToInt(*((double*)MissionControl + 2) * 900.0);
        return v10 + Random::Range((int*)g_ScenarioClass_Instance + 134, 0, 2);
    }
    else
    {
        return InfantryClass::ScanTarget(this);
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

// 0x51F540
int InfantryClass::ProcessEnterOrRepair()
{
    /* IDA truth (disasm verified):
       A: !owner->IsCurrentPlayer() && target && target->whatAmI()[vt+0x2C]==6(Building)
          && (Type->Infiltrate(+3774) || (Type->Occupier(+3764) || Type->Assaulter(+3765))
// 0x457ce0
              && BuildingClass::CanRepair(target, this))
          -> vt+1152 AssignDestination_SyncLog(target, 1); vt+496 ForceMission(8=Capture); ret 1
       B: !owner->IsCurrentPlayer() && SequenceAnim(+1732) in {27 Deploy, 28 Deployed,
          29 DeployedFire, 30 DeployedIdle} && !target
          -> vt+1368 ProcessDeployAction(31 Undeploy, 0, 0); ret 1
// 0x4d5350
       else: tail call InfantryClass::ProcessDeploy (0x4D5350), eax passthrough */
    if (!this->owner->IsCurrentPlayer()
        && this->target != nullptr
        && this->target->whatAmI() == AbstractType::Building
        && (this->Type->Infiltrate
            || ((this->Type->Occupier || this->Type->Assaulter)
                && dynamic_cast<BuildingClass*>(this->target)->CanRepair(this))))
    {
        this->AssignDestination_SyncLog(this->target, 1);
        this->forceMission(Mission::Capture);
        return 1;
    }
    if (!this->owner->IsCurrentPlayer()
        && (this->SequenceAnim == Sequence::Deploy
            || this->SequenceAnim == Sequence::Deployed
            || this->SequenceAnim == Sequence::DeployedFire
            || this->SequenceAnim == Sequence::DeployedIdle)
        && !this->target)
    {
        this->ProcessDeployAction((int)Sequence::Undeploy, false, false);
        return 1;
    }
    InfantryClass::ProcessDeploy();
    return 0;
}

// 0x522bc0
bool InfantryClass::CanEnterBuilding()
{
// 0x522bc0
    bool __thiscall InfantryClass::CanEnterBuilding(int *(void**)this)
{
    int v2;
    bool result;
    result = 0;
    if ( this->GetPrimaryOrFallback() == 5 || this->GetPrimaryOrFallback() == 11 )
  {
    v2 = this->SequenceAnim;
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

// 0x51f620
int InfantryClass::FindIdleMovePosition()
{
    // IDA: 0x51F620 — find idle movement position
    return 0;
}

// 0x51f640
int InfantryClass::FindIdleAITarget()
{
// 0x51f640
    int __thiscall InfantryClass::FindIdleAITarget(int *(void**)this)
{
    int result;
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
    if (!(unsigned __int8)ObjectClass::ParachuteDrop(this))
        return 0;
    if ((unsigned __int8)this->owner->IsCurrentPlayer())
        this->queueMission(Mission::Guard, false);
    else
        this->queueMission(Mission::Hunt, false);
    this->ProcessDeployAction(33, true, false);
    return 1;
}

// ============================================================
// Phase 3: C4 / Bomb
// ============================================================

// 0x51f6e0
int InfantryClass::ProcessIvanBomb()
{
    InfantryTypeClass* v2;
    int v3;
    int v4;
    int* v5;
    int v6;
    __int16* v7;
    void* v8;
    InfantryTypeClass* v9;
    unsigned char v11[4];

    v2 = this->Type;
    if ( !v2->Deployer )
        return AbstractClass::COMStub_143();
    v3 = this->SequenceAnim;
    v4 = -1;
    if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 )
    {
        if ( v2->UndeployDelay <= -1 )
            this->ProcessDeployAction(31, 1, 0);
    }
    else
    {
        this->ProcessDeployAction(27, 1, 0);
        v5 = (int*)this->Vt249to254();
        if ( IsNonNullPtr(v5) && *(unsigned char*)(*(int**)v5 + 336) )
        {
            if ( ObjectClass::StepCleanup(this, "DESO") )
            {
                v4 = *(int*)((char*)this->Type->Sequence + 976) + 1;
            }
            else
            {
                v6 = *(int*)this;
                v7 = (__int16*)this->GetCellCoords_Alt(v11);
                v8 = CellCoord::To_CellObj((int*)DataGlobal_87F7E8, v7);
                (*(void (__thiscall **)(int*, void*))((int*)v6 + 968))(this, v8);
            }
        }
        v9 = this->Type;
        if ( v9->UndeployDelay > -1 )
            v4 = v9->UndeployDelay;
    }
    this->ForceMission(5);
    this->AssignDestination_SyncLog(0, 1);
    if ( v4 > -1 )
        return v4;
    else
        return AbstractClass::COMStub_143();

}

// 0x51f660
int InfantryClass::ProcessIvanBombResult()
{
    // IDA: 0x51F660 — process bomb explosion result
    return 0;
}

// 0x521dd0
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
    int v3;
    int v4;

    FootClass::BeginPowerUpdate(this, a2);
    Power::TimerProcess(a2, (int)this->SequenceAnim);
    v3 = this->InfantryClass_field_timer_6C8.StartTime;
    v4 = this->panicTimerTimeLeft;
    if ( v3 != -1 )
    {
        if ( g_CurrentFrame - v3 >= v4 )
            v4 = 0;
        else
            v4 -= g_CurrentFrame - v3;
    }
    Power::TimerProcess(a2, v4);
    Power::TimerProcess(a2, (int)this->PanicDurationLeft);
    Power::FlagProcess(a2, this->Technician);
    Power::FlagProcess(a2, this->InfantryClass_field_bool_6DA);
    Power::FlagProcess(a2, this->Crawling);
    Power::FlagProcess(a2, this->InfantryClass_field_bool_6DC);
    return Power::FlagProcess(a2, this->InfantryClass_field_bool_6DD);

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
    int result;

    result = FootClass::HandleTargetDestroyed(this, a1, aP2);
    if ( this->Type == (InfantryTypeClass *)a1 )
    {
        this->Type = 0;
    }
    return result;

// 0x51f250
int InfantryClass::ProcessUpdate()
{
    int v6;

    v6 = this->SequenceAnim;
    if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30)
      && this->HandleCursorOverCell(aP2, 0, aP4) == 2 )
    {
        return 0;
    }
    if ( this->storedTiberium )
        return 0;
    return ObjectClass::SpawnInfantry(this, aP1, aP2, aP3, aP4);

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
int InfantryClass::ValidateTargetAndMove(AbstractClass* target, int flags)
{
    int v5 = this->GetActionOnObject_EMP(target, flags);
    switch (v5)
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
    if (target == this && v5 == 5)
        return 0;
    if (this->isBerserk)
        return 0;
    return FootClass::ValidateMove(v5, target, flags);
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

// 0x728280
int InfantryClass::SetMission()
{
    // IDA: 0x728280 — set mission for infantry
    return 0;
}

// 0x728e30
int InfantryClass::IdleStateMachine()
{
    // IDA: 0x728E30 — idle state machine logic
    return 0;
}

// 0x7291f0
int InfantryClass::ProcessTunnelMovement()
{
    // IDA: 0x7291F0 — process tunnel/teleport movement
    return 0;
}

// 0x736579
int InfantryClass::UpdateBehavior()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v5; // eax
  __int16 v17; // di
  __int16 v18; // bx
  __int16 *PlacementCellsAlt; // eax
  int vars0; // [esp+12h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+16h] [ebp+4h]

  int v30[2]; // [esp-2h] [ebp-14h] BYREF
  v30[0] = a2;
  v30[1] = a3;
  int v31 = a1;
  int * v27 = (void **)__2_YAPAXI_Z(v27);
  if ( v5 )
    AnimClass::ctor(v5, *(void **)(DataGlobal_87F7E8[7806] + 148), v30, 0, 1, (void *)0x600, 0, 0);
  _DWORD *v6; // eax
  LOBYTE(v6) = a4[144];
  if ( (_BYTE)v6 )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) != 10 )
      a4[1746] = 0;
    UpdateTechnoFiring((#377 *)a4);
    UnitClass::UpdateRotation_TurretFacing_EMP((int)a4);
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) == 5
  int v32; // [esp+Ah] [ebp-8h] BYREF
      && (v32 = *((_DWORD *)a4 + 39),
  int v7; // eax
          v7 = *((_DWORD *)a4 + 40),
          v27 = &v32,
  int v33; // [esp+Eh] [ebp-4h]
          v33 = v7,
          vars0 = *((_DWORD *)a4 + 41),
          !Tactical::IsCellVisible(DataGlobal_87F7E8, &v32))
      && a4[981] )
    {
      int v8 = *((_DWORD *)a4 + 373);
      if ( v8 )
        *(_BYTE *)(v8 + 130) = 1;
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 928))(a4);
      LOBYTE(v6) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 248))(a4);
    }
    else
    {
  _DWORD v26[2]; // [esp-26h] [ebp-38h] BYREF
      int v9 = *((_DWORD *)a4 + 433);
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
        int v10 = *((_DWORD *)a4 + 43);
        if ( (v10 == 11 || v10 == 5)
          && !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)a4 + 135))
          && *((_DWORD *)a4 + 45) == -1 )
        {
          int v11 = *((_DWORD *)a4 + 433);
          if ( *((_DWORD *)a4 + 27) < *(_DWORD *)(v11 + 160)
            && (!*((_DWORD *)a4 + 134) || *((_DWORD *)a4 + 43) == 11)
            && !*(_BYTE *)(v11 + 3598)
            && !*(_BYTE *)(v11 + 3599) )
          {
            _DWORD * v12 = globalHelper_055DD0(*((_DWORD *)a4 + 135), a4);
            if ( v12 )
            {
              if ( !*((_DWORD *)a4 + 134) )
              {
                v31 = *((_DWORD *)a4 + 39);
                int v13 = *((_DWORD *)a4 + 40);
                v26[1] = &v31;
                v32 = v13;
                v33 = *((_DWORD *)a4 + 41);
                void * v14 = Coord::To_Cell(DataGlobal_87F7E8, &v31);
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
  _DWORD v29[4]; // [esp-12h] [ebp-24h] BYREF
            v29[0] = *((_DWORD *)a4 + 39);
            v29[1] = *((_DWORD *)a4 + 40);
            v29[2] = *((_DWORD *)a4 + 41);
            _DWORD * v15 = Coord::To_Cell(DataGlobal_87F7E8, v29);
            v6 = Cell::IsBridge(v15);
            if ( v6 )
            {
              if ( *(_BYTE *)(v6[328] + 5819) )
              {
                _WORD * v16 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 440))(v6, v26);
                v17 = *v16 + 3;
                v18 = v16[1] + 1;
                v6 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)a4 + 440))(a4, v26);
                if ( *(_WORD *)v6 == v17 && *((_WORD *)v6 + 1) == v18 )
                {
  _DWORD v28[2]; // [esp-1Ah] [ebp-2Ch] BYREF
                  v28[0] = vars0;
                  v28[1] = retaddr;
                  v29[0] = a5;
                  _DWORD * v19 = Coord::To_Cell(DataGlobal_87F7E8, v28);
                  _DWORD * v20 = Cell::IsBridge(v19);
                  if ( Team::AllMembersValid((int *)a4) )
                    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 628))(a4, 3);
                  int v21 = *(_DWORD *)a4;
  int v25; // [esp-2Eh] [ebp-40h] BYREF
                  PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt(a4, &v25, (int)v20);
                  void * v23 = CellCoord::To_CellObj(DataGlobal_87F7E8, PlacementCellsAlt);
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
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x51dbd0
{
  __int16 v6; // ax
  __int16 v17; // ax
  int v32 = *a2;
  int v33 = a2[1];
  int v3 = *(_DWORD *)this;
  int v34 = a2[2];
  int v38[3]; // [esp+64h] [ebp-18h] BYREF
  int * v4 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(v3 + 72))(this, v38);
  Int64::Equal(v4, a2);
  double v5 = Math::CalcAngle((double)v4[1] - (double)a2[1], (double)*a2 - (double)*v4);
  v6 = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
  int v7 = a2[2];
  double v30 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327;
  double v28 = (double)a2[1];
  double v8 = Math::SinCos(v30);
  LODWORD(v28) = Math::RoundToInt(v28 - v8 * 124.0);
  double v9 = Math::ArcTan2(v30);
  int v10 = Math::RoundToInt(v9 * 124.0 + (double)*a2);
  int v36 = LODWORD(v28);
  int v35 = v10;
  int v37 = v7;
  char v26 = BYTE1(*((_DWORD *)Coord::To_Cell(DataGlobal_87F7E8, a2) + 80)) & 1;
  _DWORD * v11 = Coord::To_Cell(DataGlobal_87F7E8, a2);
  int v39[3]; // [esp+70h] [ebp-Ch] BYREF
  int * v12 = ObjectPlacement::CalcPosition(v11, v39, &v35, 0, v26, 0);
  *a2 = *v12;
  a2[1] = v12[1];
  a2[2] = v12[2];
  if ( *a2 == dword_A8ED54[299] && a2[1] == dword_A8ED54[300] && a2[2] == dword_A8ED54[301] )
  {
    int v13 = *(_DWORD *)this;
    void * v14 = Coord::To_Cell(DataGlobal_87F7E8, &v32);
    if ( !(*(int (__thiscall **)(_BYTE *, void *, int, int, _DWORD, int))(v13 + 428))(this, v14, -1, -1, 0, 1) )
    {
      int * v15 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(this->q048)(this, v39);
      Int64::Equal(v15, a2);
      double v16 = Math::CalcAngle((double)v15[1] - (double)a2[1], (double)*a2 - (double)*v15);
      v17 = Math::RoundToInt((v16 - 1.570796326794897) * -10430.06004058427);
      int v18 = v34;
      double v31 = (double)((__int16)(v17 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327;
      double v29 = (double)v33;
      double v19 = Math::SinCos(v31);
      LODWORD(v29) = Math::RoundToInt(v29 - v19 * 128.0);
      double v20 = Math::ArcTan2(v31);
      int v21 = Math::RoundToInt(v20 * 128.0 + (double)v32);
      v36 = LODWORD(v29);
      v35 = v21;
      v37 = v18;
      char v27 = BYTE1(*((_DWORD *)Coord::To_Cell(DataGlobal_87F7E8, &v32) + 80)) & 1;
      _DWORD * v22 = Coord::To_Cell(DataGlobal_87F7E8, &v32);
      int * v23 = ObjectPlacement::CalcPosition(v22, v38, &v35, 1, v27, 0);
      *a2 = *v23;
      a2[1] = v23[1];
      a2[2] = v23[2];
    }
  }
  if ( *a2 == dword_A8ED54[299] && a2[1] == dword_A8ED54[300] && a2[2] == dword_A8ED54[301]
    || !FootClass::Destru_vt319(this, a2)
    || !this->isAliveFlag )
  {
    return 0;
  }
  v35 = this->q027;
  int v24 = *(_DWORD *)this;
  v36 = this->owningHouseIndex;
  v37 = this->q029;
  (*(void (__thiscall **)(_BYTE *, int *))(v24 + 244))(this, &v35);
  (*(void (__thiscall **)(_BYTE *, int *))(this->flashing)(this, a2);
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
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x51bf90
{
  _DWORD *Type; // eax
  int result; // eax
  __int16 *NeighbourContent; // eax

  bool v40; // [esp+29h] [ebp-23h] BYREF
  v40 = (*(_DWORD *)(a2 + 320) & 0x100) != 0
  __int64 v7; // rax
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
  int v8 = *(_DWORD *)(a2 + 84);
  char v42 = *(_BYTE *)(a2 + 292);
  bool v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0;
  int v43 = v8;
  bool v41 = v9;
  Type = (_DWORD *)InfantryClass::GetType((__int16 *)a2);
  if ( a3 == 8 )
  {
    if ( Type && __PAIR32__(Type[10], HIWORD(Type[9])) != __PAIR32__(Type[9], HIWORD(Type[10])) )
      return 0;
    return 7;
  }
  if ( Type )
  {
    int v12 = abs32(a3 - Type[11]);
    if ( v12 > 2 && v12 < 6 && a3 != -1 )
      return 7;
  }
  NeighbourContent = (__int16 *)Cell::GetNeighbourContent((_DWORD *)a2, ((_BYTE)a3 - 4) & 7);
  int v14 = InfantryClass::GetType(NeighbourContent);
  if ( v14 )
  {
    int v15 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v14 + 44));
    if ( v15 > 2 && v15 < 6 && a3 != -1 )
      return 7;
  }
  if ( a4 - *(char *)(a2 + 283) > 4 )
    return 0;
  result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(this->animation)(
             this,
             a2,
             a3,
             &a4,
             &v40,
             a5);
  if ( result != 7 )
  {
  char v38; // al
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 )
    {
      int v16 = *(_DWORD *)(a2 + 88);
      v42 = *(_BYTE *)(a2 + 296);
      bool v17 = (*(_DWORD *)(a2 + 296) & 0x20) != 0;
      v43 = v16;
      v41 = v17;
    }
    if ( this->q3D5
      && !g_IKnowWhatImDoing
      && !Type::CheckAmbiguity(&DataGlobal_87F7E8, a2, 1)
      && !(*(unsigned __int8 (__thiscall **)(int))(this->isOnCarryall)(this) )
    {
      return 7;
    }
    int v18 = *(_DWORD *)(a2 + 68);
    int v19 = 0;
    if ( v18 != -1 )
    {
      int v20 = *((_DWORD *)g_BuildingTypeClass_Array + v18);
      if ( *(_BYTE *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
        return 7;
      if ( *(_BYTE *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(_DWORD *)(v20 + 672) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) )
          return 7;
        _DWORD * v21 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0);
        if ( !(unsigned __int8)InfantryClass::startPanic(*v21) )
          return 7;
        v19 = 5 - HouseClass::IsAllied(this->owner, *(_DWORD *)(a2 + 80));
      }
    }
    int v22 = 0;
    int v47 = 0;
    if ( v40 )
      _DWORD * v23 = *(_DWORD **)(a2 + 232);
    else
      v23 = *(_DWORD **)(a2 + 228);
    if ( v23 )
    {
      while ( 1 )
      {
        if ( v23 != (_DWORD *)this )
        {
          int v24 = this->FootClass_field_69C;
          if ( v24 )
          {
            int v25 = *(_DWORD *)(v24 + 40);
            if ( v25 )
            {
              _WORD * v26 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 440))(v25, &a5);
  int v44; // [esp+30h] [ebp-1Ch] BYREF
              _WORD * v27 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v23 + 440))(v23, &v44);
              if ( *v27 == *v26 && v27[1] == v26[1] )
                return 0;
            }
          }
          _DWORD * v28 = this->isPlayingDamageSound;
  _DWORD *v29; // ecx
          if ( v28 && (v29 = (_DWORD *)v28[182]) != 0 && v23 == v28 && BuildingClass::CheckBridge(v29, this, (void *)a2) )
          {
            v41 = 0;
          }
          else
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 468))(v23)
              && ((*(int (__thiscall **)(int))(this->q610)(this) == 7
               || (*(int (__thiscall **)(int))(this->q610)(this) == 8
               || (*(int (__thiscall **)(int))(this->q610)(this) == 9
               || (*(int (__thiscall **)(int))(this->q610)(this) == 17
               && *(_BYTE *)(this->Type + 3778)
               || ((*(int (__thiscall **)(int))(this->q610)(this) == 11
                || (*(int (__thiscall **)(int))(this->q610)(this) == 25
                || (*(int (__thiscall **)(int))(this->q610)(this) == 5)
               && *(_BYTE *)(this->Type + 3779)) )
            {
              if ( v23 == this->Archive
  _DWORD v45[3]; // [esp+34h] [ebp-18h] BYREF
                || (v45[0] = v23[39],
                    v45[1] = v23[40],
                    v45[2] = v23[41],
                    Coord::To_Cell(&DataGlobal_87F7E8, v45) == this->Archive)
                || v23 == this->target )
              {
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 352))(v23) )
                  return 7;
                if ( !this->isTether
                  && !v40
                  && DataGlobal_89EA40[9 * *(_DWORD *)(a2 + 236) + *(_DWORD *)(this->Type + 1660)] == 0.0 )
                {
                  return 7;
                }
                return 0;
              }
              _DWORD * v30 = Cell::IsBridge((_DWORD *)a2);
              _DWORD * v31 = v30;
              if ( v30 )
              {
                if ( v23 != v30 )
                {
                  if ( v30 == this->Archive )
                    goto LABEL_134;
  _BYTE v46[12]; // [esp+40h] [ebp-Ch] BYREF
                  _DWORD * v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v30 + 72))(v30, v46);
                  if ( Coord::To_Cell(&DataGlobal_87F7E8, v32) == this->Archive
                    || v31 == this->target )
                  {
                    goto LABEL_134;
                  }
                }
              }
            }
            if ( (*(int (__thiscall **)(int))(this->q610)(this) == 11 )
            {
              AbstractClass *v33 = this->focus;
              if ( v33 == v23 && (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 1 )
                return 7;
            }
            if ( *(_BYTE *)(this->Type + 3782)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 128))(v23)
              && this->Archive == v23
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v23 + 132))(v23) + 3220) )
            {
              return 0;
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) != 6 )
            {
LABEL_96:
              if ( (*(int (__thiscall **)(int))(this->q610)(this) == 7
                && v23 == this->Archive
                && this->isTether )
              {
                return 0;
              }
              if ( Object::IsAlliedWithObjectHouse(this->owner, (int)v23) || g_IKnowWhatImDoing )
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
              _DWORD * v36 = AbstractClass::IsTechnoType(v23);
              if ( v36 && v36[136] == 2 )
              {
                if ( v19 < 1 )
                  v19 = 1;
              }
              else
              {
                int v37 = (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23);
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
                  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v23 + 200))(v23, this->owner) )
                    v19 = 6;
                }
                else if ( v37 != 36 && v19 < 5 )
                {
                  v19 = 5;
                }
              }
              goto LABEL_134;
            }
            _BYTE * v34 = (_BYTE *)v23[328];
            if ( !v34[5889] )
            {
  int v35; // ecx
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
                      if ( !(*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) )
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
    if ( !this->isTether
      && !v40
      && DataGlobal_89EA40[9 * *(_DWORD *)(a2 + 236) + *(_DWORD *)(this->Type + 1660)] == 0.0 )
    {
      return 7;
    }
    if ( !v19 && v41 )
      return 2;
    if ( v43 != -1 )
    {
      if ( HouseClass::IsAllied(this->owner, v43) )
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
    bool v39 = (v38 & 0x1C) == 28;
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
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x51e140
{
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

  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) || !*(_BYTE *)(this->Type + 3779) )
  {
    v9 = a2;
  }
  else
  {
    int v4 = *(_DWORD *)(this->owner + 21728);
    if ( v4 )
    {
      _DWORD * v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v19);
      _DWORD * v6 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(this->q048)(this, v20);
      v17 = v6[1] - v5[1];
      v18 = v6[2] - v5[2];
      double v7 = Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v18 * (double)v18 + (double)v17 * (double)v17);
      if ( (int)Math::RoundToInt(v7) < 3840 )
        return *(_DWORD *)(this->owner + 21728);
    }
    v9 = a2 | 0x200;
  }
  if ( *(_BYTE *)(this->Type + 3782) )
  {
    v10 = this->Archive;
    if ( v10 )
    {
      if ( (v10[20] & 1) != 0
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 128))(v10)
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->Archive + 132))(this->Archive)
                     + 3220)
// 0x5f6360
        && ObjectClass::DistanceTo((void *)this, this->Archive) < 3840 )
      {
        return this->Archive;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) )
    goto LABEL_21;
  v11 = this->Type;
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
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0) )
    {
      v13 = (_DWORD **)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0);
      LOBYTE(v14) = Building::GetRenderType(*v13);
      v9 |= v14;
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int))(this->q3F8)(this, 1) )
    {
      v15 = (_DWORD **)(*(int (__thiscall **)(int, int))(this->q3F8)(this, 1);
      LOBYTE(v16) = Building::GetRenderType(*v15);
      v9 |= v16;
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this)
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0) + 172)
                + 329) )
  {
    v9 &= 0xFFFFFF4B;
  }
  if ( (*(_BYTE *)(this->Type + 3778) || TechnoClass::HasVoiceResponse(this, 14))
    && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
  {
    v9 |= 0x20u;
  }
  if ( *(_BYTE *)(this->Type + 3781) )
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

// 0x51b1f0
int InfantryClass::AssignTarget_SyncLog(int syncFlag)
{
    (void)syncFlag;
    int result = 0;
    return result;
}

// 0x51aa40
int InfantryClass::AssignDestination_SyncLog(AbstractClass* dest, int sync_flag)
{
    // IDA: 0x51AA40 — assign destination with sync logging
    return 0;
}

// 0x51cba0
int InfantryClass::ValidatePlacement()
{
    // IDA: 0x51CBA0 — validate building placement
    return 0;
}

// 0x484ae0
int InfantryClass::ValidateAttackPosition()
{
    // IDA: 0x484AE0 — validate attack position
    return 0;
}

// ============================================================
// Phase 3: Stream & Save
// ============================================================

// 0x521960
int InfantryClass::LoadFromStream()
{
    // IDA: 0x521960 (402B) — COM deserialization
    return 0;
}

// 0x521b00
int InfantryClass::SaveLoad_Prefix()
{
    // IDA: 0x521B00 (23B) — save/load prefix handler
    return 0;
}

// 0x523350
int InfantryClass::ScalarDtor()
{
    // IDA: 0x523350 (30B) — scalar destructor
    return 0;
}

// ============================================================
// Phase 3: Cursor & UI
// ============================================================

// 0x51f800
int InfantryClass::HandleCursorOverCell()
{
    // IDA: 0x51F800 — handle cursor over occupied cell
    return 0;
}

// 0x51e3b0
int InfantryClass::GetActionOnObject_EMP(AbstractClass* object, int flags)
{
    // IDA: 0x51E3B0 — EMP cursor over object
    return 0;
}

// 0x4dded0
int FootClass::GetActionOnObject()
{
    // IDA: 0x4DDED0 — get cursor type over this object
    return 0;
}

// 0x51FAF0
InfantryTypeClass* InfantryClass::GetTypePtr()
{
    /* IDA truth: return *(this + 432);  // this[432] dword = byte 1728 = Type */
    return Type;
}

// 0x51f2c0
int InfantryClass::GetTooltipName()
{
    // IDA: 0x51F2C0 — get tooltip name string
    return 0;
}

// 0x521d30
int InfantryClass::GetTransformMatrix()
{
    // IDA: 0x521D30 — get transform matrix
    return 0;
}

// 0x523250
int InfantryClass::ComputeTransform()
{
    // IDA: 0x523250 — compute transform
    return 0;
}

// 0x701140
int InfantryClass::CheckHealthDiff()
{
    // IDA: 0x701140 — check health difference
    return 0;
}

// ============================================================
// Phase 3: Marking & Passability
// ============================================================

// 0x5217c0
int InfantryClass::MarkCellPassability(int* a2)
{
    // IDA: 0x5217C0 — mark cells as passable/unpassable
    return 0;
}

// 0x521850
int InfantryClass::ClearCellPassability()
{
    // IDA: 0x521850 — clear cell passability marks
    return 0;
}

// ============================================================
// Phase 3: Capture & Misc
// ============================================================

// 0x522700
int InfantryClass::CaptureAttackerInfo()
{
    // IDA: 0x522700 — capture attacker info for tracking
    return 0;
}

// 0x522780
int InfantryClass::InitProductionLimits()
{
    int result;
    InfantryTypeClass *v1;
    HouseClass *v2;
    int v3;
    void *v20;

    v1 = this->Type;
    result = (int)v1;
    if (*(_BYTE *)((char *)v1 + 3376))
    {
        v2 = this->owner;
        this->isDisguisedFlag = 1;
        this->isDisguisedFlag_as_house = v2;
        v3 = *(_DWORD *)((char *)v2 + 488);
        if (v3)
        {
            if (v3 == 1)
                v20 = *(void **)((char *)g_RulesClass_Instance + 3420);
            else
                v20 = *(void **)((char *)g_RulesClass_Instance + 3424);
            this->disguiseAsType = v20;
            result = (int)v20;
        }
        else
        {
            v20 = *(void **)((char *)g_RulesClass_Instance + 3416);
            this->disguiseAsType = v20;
            result = (int)v20;
        }
    }
    else
    {
        this->isDisguisedFlag = 0;
    }
    return result;
}

}

// 0x522640
int InfantryClass::GetProductionLimit()
{
    int result;
    int v4;

    if ( (unsigned __int8)HouseClass::IsAlliedWith(this->owner, HouseClass_Player) && !a2 )
        return (int)this->Type;
    result = (int)this->disguiseAsType;
    if ( !result )
    {
        if ( !HouseClass_Player )
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3416);
        v4 = *(_DWORD *)((char *)HouseClass_Player + 488);
        if ( !v4 )
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3416);
        if ( v4 == 1 )
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3420);
        else
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3424);
    }
    return result;

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

// 0x5226c0
int InfantryClass::GetProductionHouse()
{
    // IDA: 0x5226C0 — get production house
    return 0;
}

// 0x521b20
int InfantryClass::ResetMissionIfDone()
{
    // IDA: 0x521B20 — reset mission when complete
    return 0;
}

// 0x521b40
int InfantryClass::ProcessMission16()
{
    // IDA: 0x521B40 — process mission state 16
    return 0;
}

// 0x521c60
int InfantryClass::SetMissionOnCondition()
{
    // IDA: 0x521C60 — set mission based on condition
    return 0;
}

// 0x521c10
int InfantryClass::InitVoiceResponseTimer()
{
    // IDA: 0x521C10 — initialize voice response timer
    return 0;
}

// 0x521c40
int InfantryClass::ResetReloadIfNeeded()
{
    // IDA: 0x521C40 — reset reload timer if needed
    return 0;
}

// 0x5220f0
void InfantryClass::SetPermanentBerzerk()
{
PermanentBerzerk = true;
}

/* ASM:
mov     byte ptr [ecx+6D8h], 1
retn
*/
}

// 0x523340
int InfantryClass::StubReturn15()
{
    // IDA: 0x523340 — vtable[11] stub, returns 15
    return 15;
}

// 0x5232f0
int InfantryClass::StubReturn1776()
{
    // IDA: 0x5232F0 — vtable[12] stub, returns 1776
    return 1776;
}

// 0x70e1e0
int InfantryClass::ProcessIdle()
{
    // IDA: 0x70E1E0 — process idle state
    return 0;
}

// 0x703230
int InfantryClass::RegisterKill()
{
    // IDA: 0x703230 — register kill credit
    return 0;
}

// 0x70d7a0
int InfantryClass::ReleaseInfiltrators()
{
    // IDA: 0x70D7A0 — release infiltrators
    return 0;
}

// 0x522e70
int InfantryClass::ProcessTiberiumHarvest()
{
    // IDA: 0x522E70 — process tiberium/ore harvesting
    return 0;
}

// 0x519630
int InfantryClass::RepairBridge()
{
    // IDA: 0x519630 (5083B) — repair bridge as engineer
    return 0;
}

// 0x522340
void InfantryClass::CalculateApproachPath(char a2)
{
    int v3;
    TechnoClass* v5;
    InfantryTypeClass* v6;
    int DeployFireWeapon;
    char v8;
    WeaponTypeClass* v9;
    int v10;

    if ( this->target )
    {
        v3 = this->SequenceAnim;
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
        {
            FootClass::CalculateApproachPath(this, 0);
            return;
        }
        v5 = this->GetTarget();
        if ( !House::IsCurrentPlayer(v5) )
        {
            v6 = this->Type;
            if ( v6->Deployer )
            {
                if ( v6->DeployFire )
                {
                    DeployFireWeapon = v6->DeployFireWeapon;
                    v8 = this->ValidateTarget(this->target, DeployFireWeapon);
                    v9 = this->SelectWeaponSlot(DeployFireWeapon)->WeaponType;
                    if ( v9 )
                    {
                        if ( !v9->AreaFire )
                        {
                            v10 = this->SequenceAnim;
                            if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 )
                            {
                                if ( !v8 && !a2 )
                                {
                                    this->ProcessDeployAction(31, 0, 0);
                                    return;
                                }
                            }
                            else if ( v8 && !a2 )
                            {
                                if ( !this->Locomotor )
                                    WinAPI::Wrapper(-2147467261);
                                if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))((_DWORD)this->Locomotor) )
                                {
                                    this->ProcessDeployAction(27, 0, 0);
                                    return;
                                }
                                if ( !this->Locomotor )
                                    WinAPI::Wrapper(-2147467261);
                                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 72))((_DWORD)this->Locomotor);
                                this->ShouldDeploy = 1;
                                MissionClass::GetMissionControl(this);
                                Random::Range((int*)g_ScenarioClass_Instance + 134, 0, 2);
                            }
                        }
                    }
                }
            }
        }
    }
    return;

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
// 0x5224d0
{
return this->Type->Engineer;

/* ASM:
mov     eax, [ecx+6C0h]
mov     al, [eax+0EC3h]
retn
*/
}

// 0x522d50
int InfantryClass::SlaveGiveMoney_RecordBalanceBefore()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x522d50
{
  int result; // eax

  float * v2 = this + 207;
  char v3 = 0;
  result = FirstFloatPositive(this + 207);
  int v5 = result;
  if ( result != -1 )
  {
    do
    {
      int v6 = a2[135];
      int v9 = *(_DWORD *)(v6 + 21388);
      if ( !*(_BYTE *)(v6 + 492) && DataGlobal_87F7E8[536212] )
        v9 = *(_DWORD *)(*(_DWORD *)(DataGlobal_87F7E8[7806] + 4900) + 4 * *(_DWORD *)(v6 + 388))
           + *(_DWORD *)(v6 + 21388);
      if ( v5 == -1 )
        float v8 = 0.0;
      else
        v8 = FloatArray::Get(v2, v5);
      float v10 = (double)v9 * *(float *)(DataGlobal_87F7E8[7806] + 3900) * v8;
      if ( v5 != -1 )
      {
        double v7 = Float::SubtractClamped(v2, v8, v5);
        if ( v7 > 0.0 )
        {
          v3 = 1;
          float v11 = v7;
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
{
    int v1;
    v1 = this->currentMission;
    return v1 && *(char *)(v1 + 324);
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
    // TODO stub - translate quarantined IDA block above
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

// 0x523300
HRESULT __stdcall InfantryClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall InfantryClass::whatAmI() const { return kObjectTypeId; }
int InfantryClass::objectSize() const { return sizeof(InfantryClass); }
int InfantryClass::IsDeployed() const { return 0; }
bool InfantryClass::PlayAnim(Sequence index, bool force, bool randomStartFrame) { return false; }

} // namespace gamemd
