#include "system/factory.hpp"

namespace gamemd
{

// FactoryClass stub: factory construction is handled by building/house
// production systems. Full implementation deferred to Stage 11.

} // namespace gamemd

#include "system/factory.hpp"
#include "e4/e4_globals.hpp"

namespace gamemd {

// --- FactoryClass ---

HRESULT __stdcall FactoryClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall FactoryClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall FactoryClass::Save(IStream* stream, int clear_dirty) { return 0; }
AbstractType __stdcall FactoryClass::whatAmI() const { return AbstractType::Factory; }
int FactoryClass::objectSize() const { return 0; }
void FactoryClass::calculateChecksum(void* checksum) const {}

// owner fix 2026-09-10: FactoryClass (not BuildingClass) — YRpp layout owner@0x6C/object@0x58 tri-mapped
// 0x4c9ff0
void FactoryClass::AbandonProduction() {
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  #72 *v7; // eax
  #375 *v8; // ecx

  int v2 = this->q058;
  if ( !v2 )
    return 0;
  int v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2);
  Debug::Log("Abandoning production of %s\n", (const char *)(v3 + 100));
  int v4 = (*(int (__thiscall **)(_DWORD))(*this->q058 + 136))(this->q058);
  int v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 132))(v4, *(_DWORD *)(this->q058 + 540));
  HouseClass::AddPower(this->owner, v5 - this->balance);
  int v6 = this->specialItem;
  this->balance = 0;
  if ( v6 )
    this->specialItem = -1;
  v7 = g_CurrentFrame;
  this->queuedCapacity = 0;
  this->q02C = v7;
  int v11; // [esp+Ch] [ebp-8h]
  this->queuedObjects = v11;
  this->queuedCount = 0;
  v8 = *(#375 **)(this + 108);
  this->production = 0;
  this->isSuspended = 1;
  this->q174 = 1;
  if ( !(unsigned __int8)House::IsCurrentPlayer(v8) )
  {
    if ( (*(int (__thiscall **)(_DWORD))(*this->q058 + 44))(this->q058) == 15 )
      *(_DWORD *)(this->owner + 22100) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(*this->q058 + 44))(this->q058) == 1 )
      *(_DWORD *)(this->owner + 22096) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(*this->q058 + 44))(this->q058) == 2 )
      *(_DWORD *)(this->owner + 22104) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(*this->q058 + 44))(this->q058) == 6 )
      *(_DWORD *)(this->owner + 22092) = -1;
  }
  ++g_IKnowWhatImDoing;
  int v9 = this->q058;
  if ( v9 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1);
  this->q058 = 0;
  --g_IKnowWhatImDoing;
  return 1;
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
xor     edi, edi
mov     ecx, [esi+58h]
cmp     ecx, edi
jz      loc_4CA115
mov     eax, [ecx]
push    ebp
call    dword ptr [eax+88h]
add     eax, 64h ; 'd'
push    eax
push    offset aAbandoningProd ; "Abandoning production of %s\n"
call    Debug__Log
mov     ecx, [esi+58h]
add     esp, 8
mov     edx, [ecx]
call    dword ptr [edx+88h]
mov     ecx, [esi+58h]
mov     edx, [eax]
mov     ecx, [ecx+21Ch]
push    ecx
mov     ecx, eax
call    dword ptr [edx+84h]
mov     edx, [esi+60h]
mov     ecx, [esi+6Ch]
sub     eax, edx
push    eax
call    HouseClass__AddPower
mov     eax, [esi+68h]
or      ebp, 0FFFFFFFFh
cmp     eax, edi
mov     [esi+60h], edi
jz      short loc_4CA05B
mov     [esi+68h], ebp

loc_4CA05B:                             ; CODE XREF: BuildingClass__AbandonProduction+66↑j
mov     eax, dword_A8ED54+30h
lea     edx, [esi+2Ch]
xor     ecx, ecx
mov     [esi+38h], edi
mov     [edx], eax
mov     eax, [esp+18h+var_8]
mov     [edx+4], eax
mov     [edx+8], ecx
mov     ecx, [esi+6Ch]  ; this
mov     [esi+24h], edi
mov     byte ptr [esi+70h], 1
mov     byte ptr [esi+5Dh], 1
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_4CA0E3
mov     ecx, [esi+58h]
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_4CA0A1
mov     eax, [esi+6Ch]
mov     [eax+5654h], ebp

loc_4CA0A1:                             ; CODE XREF: BuildingClass__AbandonProduction+A6↑j
mov     ecx, [esi+58h]
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_4CA0B7
mov     eax, [esi+6Ch]
mov     [eax+5650h], ebp

loc_4CA0B7:                             ; CODE XREF: BuildingClass__AbandonProduction+BC↑j
mov     ecx, [esi+58h]
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 2
jnz     short loc_4CA0CD
mov     eax, [esi+6Ch]
mov     [eax+5658h], ebp

loc_4CA0CD:                             ; CODE XREF: BuildingClass__AbandonProduction+D2↑j
mov     ecx, [esi+58h]
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_4CA0E3
mov     eax, [esi+6Ch]
mov     [eax+564Ch], ebp

loc_4CA0E3:                             ; CODE XREF: BuildingClass__AbandonProduction+99↑j
; BuildingClass__AbandonProduction+E8↑j
mov     ecx, ds:0A8E7ACh
pop     ebp
inc     ecx
mov     ds:0A8E7ACh, ecx
mov     ecx, [esi+58h]
cmp     ecx, edi
jz      short loc_4CA0FF
mov     edx, [ecx]
push    1
call    dword ptr [edx+20h]

loc_4CA0FF:                             ; CODE XREF: BuildingClass__AbandonProduction+106↑j
mov     [esi+58h], edi
mov     eax, ds:0A8E7ACh
dec     eax
pop     edi
mov     ds:0A8E7ACh, eax
mov     al, 1
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_4CA115:                             ; CODE XREF: BuildingClass__AbandonProduction+E↑j
pop     edi
xor     al, al
pop     esi
add     esp, 0Ch
retn
*/
}

} // namespace gamemd
